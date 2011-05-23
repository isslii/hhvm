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

#ifndef __GENERATED_cls_ReflectionFunctionAbstract_h8c29f291__
#define __GENERATED_cls_ReflectionFunctionAbstract_h8c29f291__

#include <cls/ReflectionFunctionAbstract.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/reflection.php line 248 */
FORWARD_DECLARE_CLASS(ReflectionFunctionAbstract);
class c_ReflectionFunctionAbstract : public ExtObjectData {
  public:

  // Properties
  Variant m_info;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON_NO_SWEEP(ReflectionFunctionAbstract, ReflectionFunctionAbstract)
  DECLARE_INVOKE_EX(ReflectionFunctionAbstract, ReflectionFunctionAbstract, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_ReflectionFunctionAbstract 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_ReflectionFunctionAbstract 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_ReflectionFunctionAbstract 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props, bool pubOnly = false) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_ReflectionFunctionAbstract 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_ReflectionFunctionAbstract 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_ReflectionFunctionAbstract 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_ReflectionFunctionAbstract 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: Variant t_getname();
  public: Variant t_isinternal();
  public: Variant t_getclosure();
  public: bool t_isuserdefined();
  public: Variant t_getfilename();
  public: Variant t_getstartline();
  public: Variant t_getendline();
  public: Variant t_getdoccomment();
  public: Variant t_getstaticvariables();
  public: Variant t_returnsreference();
  public: Array t_getparameters();
  public: int t_getnumberofparameters();
  public: int64 t_getnumberofrequiredparameters();
  DECLARE_METHOD_INVOKE_HELPERS(getnumberofrequiredparameters);
  DECLARE_METHOD_INVOKE_HELPERS(isuserdefined);
  DECLARE_METHOD_INVOKE_HELPERS(getnumberofparameters);
  DECLARE_METHOD_INVOKE_HELPERS(getendline);
  DECLARE_METHOD_INVOKE_HELPERS(getstaticvariables);
  DECLARE_METHOD_INVOKE_HELPERS(getparameters);
  DECLARE_METHOD_INVOKE_HELPERS(returnsreference);
  DECLARE_METHOD_INVOKE_HELPERS(getfilename);
  DECLARE_METHOD_INVOKE_HELPERS(getstartline);
  DECLARE_METHOD_INVOKE_HELPERS(getdoccomment);
  DECLARE_METHOD_INVOKE_HELPERS(getclosure);
  DECLARE_METHOD_INVOKE_HELPERS(getname);
  DECLARE_METHOD_INVOKE_HELPERS(isinternal);
};
extern struct ObjectStaticCallbacks cw_ReflectionFunctionAbstract;
Object co_ReflectionFunctionAbstract(CArrRef params, bool init = true) NEVER_INLINE;
Object coo_ReflectionFunctionAbstract() NEVER_INLINE;

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_ReflectionFunctionAbstract_h8c29f291__
