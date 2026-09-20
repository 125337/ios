// FUN_01567a98 @ 01567a98

byte FUN_01567a98(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  byte local_3c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_ContactInfoViewController;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      if ((uVar2 & 1) != 0) {
        local_11 = 1;
        goto LAB_01567b98;
      }
    }
    pcVar1 = &cf_EnterpriseContactInfoViewController;
    _NSClassFromString();
    local_3c = 0;
    if (pcVar1 != (cfstringStruct *)0x0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
      local_3c = (byte)uVar2;
    }
    local_11 = local_3c & 1;
  }
LAB_01567b98:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

