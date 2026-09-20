// FUN_00177f98 @ 00177f98

void FUN_00177f98(ulong param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  ulong local_18;
  
  pcVar1 = &cf_contactInfoViewSource;
  local_20 = param_2;
  local_18 = param_1;
  _NSSelectorFromString();
  uVar2 = local_18;
  local_28 = pcVar1;
  FUN_0017f268();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (((uVar2 != 0) &&
      (uVar2 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,local_28),
      (uVar2 & 1) != 0)) &&
     (uVar3 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,local_28), uVar2 = local_30,
     uVar3 == 7)) {
    pcVar1 = &cf_m_oMessage;
    _NSSelectorFromString();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_setContactInfoViewSource_;
      _NSSelectorFromString();
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1,0);
      }
    }
  }
  (*DAT_028c8898)(local_18,local_20);
  FUN_0017f3c8(local_18);
  _objc_storeStrong(&local_30,0);
  return;
}

