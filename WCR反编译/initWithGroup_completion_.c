// initWithGroup:completion: @ 01aa4818

/* Function Stack Size: 0x20 bytes */

ID WCRGroupCreateViewController::initWithGroup_completion_
             (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  ID *pIVar1;
  undefined8 **ppuVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  cfstringStruct *local_130;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_e8;
  cfstringStruct *local_d0;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_88;
  undefined8 *local_50;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  SEL local_30;
  ID *local_28;
  
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = (ID *)param_1;
  _objc_storeStrong(&local_38,param_3,param_3,param_4,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = local_28;
  local_28 = (ID *)0x0;
  ppuVar2 = &local_50;
  local_48 = PTR_WCRGroupCreateViewController_026cfe28;
  _objc_msgSendSuper2(ppuVar2,PTR_s_initWithNibName_bundle__026a2600,0);
  local_28 = (ID *)ppuVar2;
  _objc_storeStrong(&local_28);
  if (ppuVar2 != (undefined8 **)0x0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_88 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_88 = &::cf_W;
    }
    _objc_storeStrong((long)local_28 + (long)_defaultName,local_88);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_groupId_0269ea88);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_a0 = &::cf___;
    }
    _objc_storeStrong((long)local_28 + (long)_editingGroupId,local_a0);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_scope_0269ea90);
    *(cfstringStruct **)((long)local_28 + (long)_selectedScope) = pcVar3;
    uVar7 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
    uVar5 = *(undefined8 *)((long)local_28 + (long)_completion);
    *(undefined8 *)((long)local_28 + (long)_completion) = uVar7;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    puVar6 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_members_0269ea98);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = pcVar3;
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_b8 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_orderedSetWithArray__026a4b80,local_b8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)((long)local_28 + (long)_selectedUsernames);
    *(undefined8 *)((long)local_28 + (long)_selectedUsernames) = puVar6;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_name_0269d828);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d0 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_d0 = &::cf___;
    }
    _objc_storeStrong((long)local_28 + (long)_nameDraft,local_d0);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_detailTemplate_026a2dc0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_e8 = &::cf___;
    }
    _objc_storeStrong((long)local_28 + (long)_detailDraft,local_e8);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_inlineDetailTemplate_026a2dd0);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_100 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_100 = &::cf___;
    }
    _objc_storeStrong((long)local_28 + (long)_inlineDetailDraft,local_100);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_memberSyncChatRooms_026bdb48);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_118 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_118 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    _objc_storeStrong((long)local_28 + (long)_memberSyncChatRoomsDraft,local_118);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_memberSyncTags_026bdb50);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_130 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_130 = *(cfstringStruct **)PTR____NSArray0___02578280;
    }
    _objc_storeStrong((long)local_28 + (long)_memberSyncTagsDraft,local_130);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle__0269cef0,&cf__R_);
  }
  pIVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return (ID)(undefined8 **)pIVar1;
}

