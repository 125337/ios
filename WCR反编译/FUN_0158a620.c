// FUN_0158a620 @ 0158a620

void FUN_0158a620(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    pcVar1 = &cf_onAddToContact;
    _NSSelectorFromString();
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
    if ((uVar2 & 1) == 0) {
      pcVar1 = &cf_onSendVerifyMsg;
      _NSSelectorFromString();
      uVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
      if ((uVar2 & 1) == 0) {
        pcVar1 = &cf_onSayHello;
        _NSSelectorFromString();
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_respondsToSelector__026ca818,pcVar1);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,pcVar1);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

