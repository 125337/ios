// FUN_01c22910 @ 01c22910

void FUN_01c22910(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_c8;
  ulong local_60;
  ulong local_58;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  local_28 = param_2;
  if ((local_20 == 0) || (param_2 == 0)) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    local_38 = 0;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,param_2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_valueForKey__0269d128);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_38;
    local_38 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar3 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_38;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      _object_getClass();
      _class_getInstanceVariable();
      local_58 = uVar3;
      if (uVar3 == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
        _class_getInstanceVariable();
        local_58 = uVar3;
      }
      if (local_58 == 0) {
        local_18 = 0;
        local_2c = 1;
      }
      else {
        uVar3 = local_20;
        _object_getIvar(local_20,local_58);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_60 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar3 & 1) == 0) {
          local_c8 = 0;
        }
        else {
          local_c8 = local_60;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = local_c8;
        local_2c = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

