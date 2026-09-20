// handleEntryInput: @ 01c84b40

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubCustomEntriesViewController::handleEntryInput_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_c0;
  cfstringStruct *local_80;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  byte local_49;
  cfstringStruct *local_48;
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
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_39 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_80 = &::cf___;
  }
  else {
    local_80 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_80;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_48 = (cfstringStruct *)0x0;
  local_49 = 0;
  puVar3 = PTR_WCRefinePluginHubManager_026ce800;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_18;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingEditIndex_026c28b8);
  puVar3 = local_58;
  if (IVar5 == 0x7fffffffffffffff) {
    local_60 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_addCustomEntryFromInput_errorMes_026c28c0,local_30,&local_60);
    _objc_storeStrong(&local_48,local_60);
    local_49 = (byte)puVar3;
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingEditIndex_026c28b8);
    local_68 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_updateCustomEntryAtIndex_fromInp_026c28c8,IVar5,local_30,&local_68);
    _objc_storeStrong(&local_48,local_68);
    local_49 = (byte)puVar3;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingEditIndex__026c2860,DAT_0233a3e0);
  puVar3 = PTR_WCRefineHelper_026ce000;
  if ((local_49 & 1) == 0) {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_c0 = &cf_OX_1Y_;
    }
    else {
      local_c0 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_showModernToast__0269ce78,local_c0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadEntries_026c2870);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__OX_);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

