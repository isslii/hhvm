/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_DirectoryIterator_h523cccda__
#define __GENERATED_cls_DirectoryIterator_h523cccda__

#include <cls/DirectoryIterator.fw.h>
#include <cls/SplFileInfo.h>
#include <cls/Traversable.h>
#include <cls/SeekableIterator.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/directoryiterator.php line 11 */
FORWARD_DECLARE_CLASS(DirectoryIterator);
class c_DirectoryIterator : public c_SplFileInfo {
  public:

  // Properties

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(DirectoryIterator, DirectoryIterator)
  DECLARE_INVOKE_EX(DirectoryIterator, DirectoryIterator, SplFileInfo)

  // DECLARE_STATIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GETINIT_DirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_DirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_DirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_DirectoryIterator 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_GETARRAY_DirectoryIterator 1
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_DirectoryIterator 1
  virtual Variant *o_realProp(CStrRef s, int flags,
                              CStrRef context = null_string) const;
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_DirectoryIterator 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  #define OMIT_JUMP_TABLE_CLASS_realProp_PUBLIC_DirectoryIterator 1

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_DirectoryIterator 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_path);
  public: c_DirectoryIterator *create(CVarRef v_path);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: Variant t_current();
  public: Variant t_key();
  public: void t_next();
  public: void t_rewind();
  public: void t_seek(CVarRef v_position);
  public: String t___tostring();
  public: bool t_valid();
  public: bool t_isdot();
  DECLARE_METHOD_INVOKE_HELPERS(next);
  DECLARE_METHOD_INVOKE_HELPERS(key);
  DECLARE_METHOD_INVOKE_HELPERS(valid);
  DECLARE_METHOD_INVOKE_HELPERS(__tostring);
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(seek);
  DECLARE_METHOD_INVOKE_HELPERS(current);
  DECLARE_METHOD_INVOKE_HELPERS(isdot);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern struct ObjectStaticCallbacks cw_DirectoryIterator;
Object co_DirectoryIterator(CArrRef params, bool init = true) NEVER_INLINE;
Object coo_DirectoryIterator() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_DirectoryIterator_h523cccda__
