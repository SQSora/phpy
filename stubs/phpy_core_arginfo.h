/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 92ceb788d33cd994ebe64e022000998c2dd95c21 */

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_import, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_eval, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_dir, 0, 1, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, obj, PyObject, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_PyCore_str arginfo_class_PyCore_dir

#define arginfo_class_PyCore_repr arginfo_class_PyCore_dir

#define arginfo_class_PyCore_type arginfo_class_PyCore_dir

#define arginfo_class_PyCore_hash arginfo_class_PyCore_dir

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_hasattr, 0, 2, IS_MIXED, 0)
	ZEND_ARG_OBJ_INFO(0, obj, PyObject, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_PyCore_id arginfo_class_PyCore_dir

#define arginfo_class_PyCore_len arginfo_class_PyCore_dir

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_PyCore_globals, 0, 0, PyDict, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_PyCore_locals arginfo_class_PyCore_globals

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_PyCore_int, 0, 1, PyObject, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_PyCore_float arginfo_class_PyCore_int

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_PyCore_fn, 0, 1, PyObject, 0)
	ZEND_ARG_TYPE_INFO(0, cb, IS_CALLABLE, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_scalar, 0, 1, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_PyCore_iter, 0, 1, PyObject, 1)
	ZEND_ARG_OBJ_INFO(0, value, PyObject, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_PyCore_next, 0, 1, PyObject, 1)
	ZEND_ARG_OBJ_INFO(0, iter, PyObject, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore_callable, 0, 1, _IS_BOOL, 0)
	ZEND_ARG_OBJ_INFO(0, object, PyObject, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_PyCore___callStatic, 0, 2, IS_MIXED, 0)
	ZEND_ARG_TYPE_INFO(0, name, IS_STRING, 0)
	ZEND_ARG_TYPE_INFO(0, arguments, IS_ARRAY, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(PyCore, import);
ZEND_METHOD(PyCore, eval);
ZEND_METHOD(PyCore, dir);
ZEND_METHOD(PyCore, str);
ZEND_METHOD(PyCore, repr);
ZEND_METHOD(PyCore, type);
ZEND_METHOD(PyCore, hash);
ZEND_METHOD(PyCore, hasattr);
ZEND_METHOD(PyCore, id);
ZEND_METHOD(PyCore, len);
ZEND_METHOD(PyCore, globals);
ZEND_METHOD(PyCore, locals);
ZEND_METHOD(PyCore, int);
ZEND_METHOD(PyCore, float);
ZEND_METHOD(PyCore, fn);
ZEND_METHOD(PyCore, scalar);
ZEND_METHOD(PyCore, iter);
ZEND_METHOD(PyCore, next);
ZEND_METHOD(PyCore, callable);
ZEND_METHOD(PyCore, __callStatic);


static const zend_function_entry class_PyCore_methods[] = {
	ZEND_ME(PyCore, import, arginfo_class_PyCore_import, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, eval, arginfo_class_PyCore_eval, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, dir, arginfo_class_PyCore_dir, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, str, arginfo_class_PyCore_str, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, repr, arginfo_class_PyCore_repr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, type, arginfo_class_PyCore_type, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, hash, arginfo_class_PyCore_hash, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, hasattr, arginfo_class_PyCore_hasattr, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, id, arginfo_class_PyCore_id, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, len, arginfo_class_PyCore_len, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, globals, arginfo_class_PyCore_globals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, locals, arginfo_class_PyCore_locals, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, int, arginfo_class_PyCore_int, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, float, arginfo_class_PyCore_float, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, fn, arginfo_class_PyCore_fn, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, scalar, arginfo_class_PyCore_scalar, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, iter, arginfo_class_PyCore_iter, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, next, arginfo_class_PyCore_next, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, callable, arginfo_class_PyCore_callable, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_ME(PyCore, __callStatic, arginfo_class_PyCore___callStatic, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	ZEND_FE_END
};
