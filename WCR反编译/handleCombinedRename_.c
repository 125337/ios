// handleCombinedRename: @ 01c8191c

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginHubOrderViewController::handleCombinedRename_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  ID IVar6;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined *local_78;
  ID local_70;
  undefined *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_49 = false;
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_a0 = &::cf___;
  }
  else {
    local_a0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_text_0269ce68);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  local_49 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_a0;
  if ((local_49 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenameGroup_026c2840);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (IVar5 != 0) {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    bVar1 = pcVar2 == (cfstringStruct *)0x0;
  }
  (*(code *)PTR__objc_release_02578630)(IVar5);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_TyN_Nzz);
    local_5c = 1;
  }
  else {
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenameGroup_026c2840);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar5 == 0) {
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenamePlugin_026c2848);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar5 != 0) {
        puVar3 = PTR_WCRefinePluginHubManager_026ce800;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        IVar5 = local_28;
        local_68 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenamePlugin_026c2848);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar6;
        (*(code *)PTR__objc_release_02578630)(IVar5);
        pcVar2 = local_58;
        puVar3 = PTR_s_rangeOfString__0269d838;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_rangeOfString__0269d838,&::cf__);
        local_80 = pcVar2;
        local_78 = puVar3;
        if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setDisplayTitle_forPluginIdentif_026b47a0,local_58,local_70);
        }
        else {
          pcVar4 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_substringToIndex__0269d6c0,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_88 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          pcVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_substringFromIndex__0269d120,
                     (undefined1 *)((long)&local_80->field0_0x0 + 1));
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setDisplayTitle_forPluginIdentif_026b47a0,local_88,local_70);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setDisplayVersion_forPluginIdent_026b47a8,local_90,local_70);
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
    }
    else {
      puVar3 = PTR_WCRefinePluginHubManager_026ce800;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefinePluginHubManager_026ce800,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingRenameGroup_026c2840);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_renameGroupWithIdentifier_title__026c2800,IVar6,local_58);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenameGroup__026c2830);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingRenamePlugin__026c2838,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadEditorData_026c2810);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

