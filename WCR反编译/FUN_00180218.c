// FUN_00180218 @ 00180218

undefined4 FUN_00180218(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_20;
  undefined4 local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) || (param_2 == 0)) {
    local_14 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _class_getInstanceVariable(lVar1,param_2);
    if (lVar1 == 0) {
      local_14 = 0;
    }
    else {
      _ivar_getOffset();
      local_14 = *(undefined4 *)(local_20 + lVar1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

