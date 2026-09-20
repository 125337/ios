// saveGroup @ 01aa58f4

/* Function Stack Size: 0x10 bytes */

void WCRGroupCreateViewController::saveGroup(ID param_1,SEL param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  cfstringStruct *local_118;
  cfstringStruct *local_f0;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  undefined *local_98;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  undefined *local_60;
  int local_54;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  SEL local_30;
  cfstringStruct *local_28;
  
  local_30 = param_2;
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_captureInputDrafts_026bdb78);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nameDraft_026bdb80);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultName_026bdb88);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_41 = false;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_b8 = &::cf_W;
    }
    else {
      local_b8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_defaultName_026bdb88);
      _objc_retainAutoreleasedReturnValue();
      local_40 = local_b8;
    }
    local_41 = pcVar4 != (cfstringStruct *)0x0;
    _objc_storeStrong(&local_38,local_b8);
    if ((local_41 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedUsernames_026a6628);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_d0 = *(cfstringStruct **)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_d0;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_telegramStyle_026bdb90);
  if (((ulong)pcVar2 & 1) != 0) {
    puVar3 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingGroupId_026bdb58);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    pcVar2 = local_50;
    local_f0 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_f0 = &::cf___;
    }
    pcVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_telegramLinkedGroupIds_026bdb98);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_118 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    pcVar8 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_telegramPreserveGroups_026bdba0);
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_saveCustomTabId_title_members_li_026bdba8,local_f0,pcVar4,pcVar2,
               local_118,pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar5 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_OX_1Y_);
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishEditorAfterSave_026bdbb0);
      local_54 = 1;
    }
    goto LAB_01aa6530;
  }
  local_60 = (undefined *)0x0;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingGroupId_026bdb58);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (pcVar4 == (cfstringStruct *)0x0) {
    puVar5 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_38;
    pcVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedScope_026bdbd8);
    pcVar2 = local_50;
    pcVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailDraft_026bdbb8);
    _objc_retainAutoreleasedReturnValue();
    pcVar8 = pcVar7;
    FUN_01a9eff8();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_addCustomGroupWithName_scope_mem_026b0238,pcVar4,pcVar6,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_60;
    local_60 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inlineDetailDraft_026bdbc0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar2;
    FUN_01a9eff8();
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_79 = 0;
    local_89 = 0;
    bVar1 = false;
    if (local_60 != (undefined *)0x0) {
      pcVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      bVar1 = true;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = true;
        if (pcVar2 == (cfstringStruct *)0x0) {
          pcVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncTagsDraft_026bdbd0);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = pcVar2 != (cfstringStruct *)0x0;
        }
      }
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar1) {
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setInlineDetailTemplate__026a2dd8,local_70)
      ;
      puVar3 = local_98;
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncTagsDraft_026bdbd0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01aa655c(puVar3,pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar3 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_60,local_98);
      _objc_storeStrong(&local_98,0);
    }
    _objc_storeStrong(&local_70,0);
LAB_01aa6500:
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_finishEditorAfterSave_026bdbb0);
    local_54 = 0;
  }
  else {
    puVar3 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editingGroupId_026bdb58);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_groupForId__026a27e0);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = puVar9;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_68 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R__NX__W);
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setName__0269e0c8,local_38);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMembers__026b00e0,local_50);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_detailDraft_026bdbb8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_01a9eff8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDetailTemplate__026a2dc8);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inlineDetailDraft_026bdbc0);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      FUN_01a9eff8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setInlineDetailTemplate__026a2dd8);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar3 = local_68;
      pcVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncChatRoomsDraft_026bdbc8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_memberSyncTagsDraft_026bdbd0);
      _objc_retainAutoreleasedReturnValue();
      FUN_01aa655c(puVar3,pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar3 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (((ulong)puVar5 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_OX_1Y_);
        local_54 = 1;
      }
      else {
        _objc_storeStrong(&local_60,local_68);
        local_54 = 0;
      }
    }
    _objc_storeStrong(&local_68,0);
    if (local_54 == 0) goto LAB_01aa6500;
  }
  _objc_storeStrong(&local_60,0);
LAB_01aa6530:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

