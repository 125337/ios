// FUN_00885fc4 @ 00885fc4

void FUN_00885fc4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_28;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_20;
  FUN_0088011c();
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_phone);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_tag);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_memo);
        if ((uVar1 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
        else {
          pcVar2 = local_28;
          FUN_00886484();
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
        }
      }
      else {
        pcVar2 = local_28;
        FUN_00886354();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
    }
    else {
      pcVar2 = local_28;
      FUN_008853b8();
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

