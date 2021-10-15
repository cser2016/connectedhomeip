/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *    All rights reserved.
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

#pragma once

#include "AuthMode.h"
#include "BasicTypes.h"
#include "Privilege.h"
#include "SubjectDescriptor.h"

#include <lib/core/CHIPCore.h>

namespace chip {
namespace access {

/**
 * @class Entry
 *
 * @brief Interface for checking against an access control entry.
 */
class Entry
{
public:
    virtual ~Entry() = default;

    /**
     * Whether the auth mode matches the entry.
     */
    virtual bool MatchesAuthMode(AuthMode authMode) const = 0;

    /**
     * Whether the fabric matches the entry.
     */
    virtual bool MatchesFabric(FabricIndex fabricIndex) const = 0;

    /**
     * Whether the privilege matches the entry, including subsumed privileges.
     */
    virtual bool MatchesPrivilege(Privilege privilege) const = 0;

    /**
     * Whether the subject matches the entry. Must only be called if auth mode
     * matches.
     */
    virtual bool MatchesSubject(SubjectId subject) const = 0;

    /**
     * Whether the target matches the entry.
     */
    virtual bool MatchesTarget(EndpointId endpoint, ClusterId cluster) const = 0;
};

/**
 * @class EntryIterator
 *
 * @brief Interface for iterating over access control entries.
 */
class EntryIterator
{
public:
    /**
     * Create an entry iterator, which must be released when finished.
     */
    EntryIterator() = default;

    virtual ~EntryIterator() = default;

    /**
     * Returns the next entry. Must only be called if a next entry exists (see
     * HasNext).
     * 
     * @retval the next entry.
     */
    virtual Entry& Next() = 0;

    /**
     * Whether a next entry exists.
     * 
     * @retval true if a next entry exists (next can be called).
     * @retval false if no next entry exists (next must not be called).
     */
    virtual bool HasNext() = 0;

    /**
     * Release the iterator, which must be called when finished.
     */
    virtual void Release() = 0;
};

/**
 * @class DataProvider
 *
 * @brief Interface for managing and querying access control data (entries,
 * extensions, etc.)
 */
class DataProvider
{
public:
    /**
     * Create a data provider, which must be initialized before use, and
     * deinitialized when finished.
     */
    DataProvider() = default;

    virtual ~DataProvider() = default;

    DataProvider(const DataProvider &) = delete;
    DataProvider & operator=(const DataProvider &) = delete;

    /**
     * Initialize the data provider.
     * 
     * @retval various errors, probably fatal.
     * @retval #CHIP_NO_ERROR on success.
     */
    virtual CHIP_ERROR Init() = 0;

    /**
     * Deinitialize the data provider.
     */
    virtual void Finish() = 0;

    /**
     * Get an iterator over all entries.
     * 
     * @retval iterator, release when finished.
     * @retval nullptr if error, probably fatal, generally should not happen.
     */
    virtual EntryIterator* Entries() const = 0;

    /**
     * Get an iterator over all entries for a particular fabric.
     * 
     * @retval iterator, release when finished.
     * @retval nullptr if error, probably fatal, generally should not happen.
     */
    virtual EntryIterator* Entries(FabricIndex fabricIndex) const = 0;
};

} // namespace access
} // namespace chip
