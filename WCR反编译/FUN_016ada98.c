// FUN_016ada98 @ 016ada98

byte FUN_016ada98(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    pcVar1 = &cf_AppFileMessageCellViewV2;
    _NSClassFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,pcVar1);
    uVar3 = local_20;
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_AppFileMessageCellView;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar1);
      if ((uVar3 & 1) == 0) {
        uVar2 = local_20;
        FUN_016aa360();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        FUN_016ae5fc();
        local_11 = (byte)uVar3 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        goto LAB_016adc1c;
      }
    }
    local_11 = 1;
  }
LAB_016adc1c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

