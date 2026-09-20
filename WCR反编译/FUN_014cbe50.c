// FUN_014cbe50 @ 014cbe50

void FUN_014cbe50(long param_1,long param_2)

{
  undefined *puVar1;
  long local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_2;
    _objc_getClass();
    if (local_18 == 0) {
      local_18 = param_1;
      _objc_allocateClassPair(param_1,param_2,0);
      _class_getInstanceMethod(param_1,PTR_s_configureCell__0269e5e8);
      puVar1 = PTR_s_configureCell__0269e5e8;
      if ((local_18 == 0) || (param_1 == 0)) {
        local_18 = 0;
      }
      else {
        _method_getTypeEncoding(param_1);
        _class_addMethod(local_18,puVar1,FUN_014dabd4,param_1);
        _objc_registerClassPair(local_18);
        (*(code *)PTR__objc_retain_02578638)();
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

