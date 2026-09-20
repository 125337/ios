// confirmUnreadDotOffsetInput @ 01cb83f0

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::confirmUnreadDotOffsetInput(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  double dVar4;
  cfstringStruct *local_90;
  cfstringStruct *local_70;
  long local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = &::cf___;
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_unreadDotOffsetAlert_026c3350);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_unreadDotOffsetAlert_026c3350);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_text_0269ce68);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar1;
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_70 = &::cf___;
      }
      _objc_storeStrong(&local_28,local_70);
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    _objc_storeStrong(&local_30,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setUnreadDotOffsetAlert__026c3338,0);
  pcVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_28;
  local_28 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSScanner_026ce368;
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_90 = &::cf_0;
  }
  else {
    local_90 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scannerWithString__0269fa30,local_90);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_scanInteger__026a4fc8,&local_40);
  if ((((((ulong)puVar3 & 1) == 0) ||
       (puVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isAtEnd_026ab608),
       ((ulong)puVar3 & 1) == 0)) || (local_40 < -0x28)) || (0x28 < local_40)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_eQ);
  }
  else {
    pcVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingUnreadDotOffsetAxis_026c3358);
    if (pcVar1 == (cfstringStruct *)0x0) {
      dVar4 = (double)local_40;
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      dVar4 = (double)local_40;
      puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(dVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

