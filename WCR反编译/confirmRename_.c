// confirmRename: @ 01e13180

/* Function Stack Size: 0x18 bytes */

void WCRefineSuperFloatButtonConfigViewController::confirmRename_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *local_f0;
  cfstringStruct *local_c8;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingActionId_026c5d30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = &::cf___;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_renameAlert_026b7038);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_c8 = local_38;
  }
  else {
    local_68 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_renameAlert_026b7038);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_c8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_c8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_78);
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_text_0269ce68);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_f0 = &::cf___;
    }
    _objc_storeStrong(&local_48,local_f0);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  _objc_storeStrong(&local_50,0);
  pcVar2 = local_48;
  puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_48;
  local_48 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_48,&cf__);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingActionId__026c5d10);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setRenameAlert__026b7028,0);
  pcVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (pcVar2 != (cfstringStruct *)0x0) {
    _WCRSuperFloatCustomizeAction(local_40,local_48,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_notifyChanged_026b43a0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

