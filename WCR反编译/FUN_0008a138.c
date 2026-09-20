// FUN_0008a138 @ 0008a138

void FUN_0008a138(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  ulong local_48;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_nsUsrName_0269e150);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _class_getInstanceVariable(uVar1,"_nsUsrName");
      local_48 = uVar1;
      if (uVar1 != 0) {
        uVar2 = local_20;
        _object_getIvar(local_20,uVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_50 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if (((uVar2 & 1) != 0) &&
           (uVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
           uVar1 != 0)) {
          _objc_storeStrong(uVar1,&local_30,local_50);
        }
        _objc_storeStrong(&local_50,0);
      }
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_20;
      FUN_0008a478();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    else {
      FUN_00077a3c(local_20,local_30);
    }
    uVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

