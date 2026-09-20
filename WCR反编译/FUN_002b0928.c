// FUN_002b0928 @ 002b0928

void FUN_002b0928(undefined8 param_1)

{
  uint uVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = 0xd;
    FUN_002b0a2c();
    if ((uVar1 & 1) != 0) {
      pcVar2 = &cf_setCornerCurve_;
      _NSSelectorFromString();
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar2,&cf_continuous);
      }
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

