// FUN_00730e70 @ 00730e70

byte FUN_00730e70(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_NewSettingViewController;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_00730fec;
      }
    }
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)uVar3 & 1;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
LAB_00730fec:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

