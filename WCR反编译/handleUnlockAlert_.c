// handleUnlockAlert: @ 011212d4

/* Function Stack Size: 0x18 bytes */

void WCRefinePrivateFriendManager::handleUnlockAlert_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_78;
  cfstringStruct *local_58;
  undefined *local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  undefined *local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_58 = &::cf___;
  }
  else {
    local_58 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_58;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_58;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  puVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_verifyPassword__026aefe0,local_30);
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__x);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_markPasswordVerifiedForProtectio_026aefc0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
    puVar3 = local_18;
    puVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingPresenter_026af110);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      local_48 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_pushSettingsFrom__026af0f8,local_78);
    if (puVar4 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingPresenter__026af118,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

