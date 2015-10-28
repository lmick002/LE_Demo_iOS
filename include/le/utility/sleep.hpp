////////////////////////////////////////////////////////////////////////////////
///
/// \file sleep.hpp
/// ---------------
///
/// Copyright (c) 2013 - 2014. Little Endian Ltd. All rights reserved.
///
////////////////////////////////////////////////////////////////////////////////
//------------------------------------------------------------------------------
#ifndef sleep_hpp__75F07081_5EA8_4BE8_874F_2012882380FB
#define sleep_hpp__75F07081_5EA8_4BE8_874F_2012882380FB
#pragma once
//------------------------------------------------------------------------------
#include "abi.hpp"
//------------------------------------------------------------------------------
namespace LE
{
//------------------------------------------------------------------------------
namespace Utility
{
//------------------------------------------------------------------------------

LE_NOTHROWNOALIAS void LE_FASTCALL_ABI sleep( unsigned int seconds );

//------------------------------------------------------------------------------
} // namespace Utility
//------------------------------------------------------------------------------
} // namespace LE
//------------------------------------------------------------------------------
#endif // filesystemImpl_hpp
