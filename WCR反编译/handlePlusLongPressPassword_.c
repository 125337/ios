// handlePlusLongPressPassword: @ 011158a4

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::handlePlusLongPressPassword_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *local_50;
  ID local_48;
  undefined4 local_40;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_50 = &::cf___;
  }
  else {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_50;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_verifyPassword__026aefe0,local_30);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x);
    local_40 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markPasswordVerifiedForProtectio_026aefc0);
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPlusLongPressSuccess_026af018);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPlusLongPressSuccess__026aeff0,0)
    ;
    if (local_48 != 0) {
      (**(code **)(local_48 + 0x10))();
    }
    _objc_storeStrong(&local_48,0);
    local_40 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

