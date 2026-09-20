// saveCustomTabId:title:members:linkedGroupIds:preserveGroups: @ 0151bb78

/* Function Stack Size: 0x34 bytes */

bool WCRefineTelegramGroupingStore::saveCustomTabId_title_members_linkedGroupIds_preserveGroups_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,bool param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined *local_150;
  long local_120;
  long local_108;
  undefined1 *local_d0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_72;
  bool local_71;
  undefined1 *local_70;
  undefined1 *local_68;
  uint local_60;
  byte local_59;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  SEL local_38;
  undefined1 *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (undefined1 *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  local_59 = (byte)param_7;
  lVar2 = local_48;
  FUN_01516994();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar3 == 0) {
    local_21 = 0;
    local_60 = 1;
    goto LAB_0151c4e8;
  }
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  local_71 = false;
  if (lVar2 == 0) {
    local_d0 = (undefined1 *)0x0;
  }
  else {
    local_d0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tabForId__026a8278,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_d0;
  }
  local_71 = lVar2 != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_d0;
  if ((local_71 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     ((local_68 != (undefined1 *)0x0 &&
      (puVar4 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_kind_026a27e8),
      puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2))))) {
    local_72 = local_68 == (undefined1 *)0x0;
    if (local_68 == (undefined1 *)0x0) {
      puVar5 = PTR_WCRefineTelegramTab_026ced70;
      _objc_alloc_init();
      puVar4 = local_68;
      local_68 = puVar5;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = &cf_custom_;
      (*(code *)PTR__objc_msgSend_02578628)(&cf_custom_,PTR_s_stringByAppendingString__0269d398);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTabId__026b00d0);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setKind__026ad410,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setScopeMask__026b00d8,0x1f);
    }
    lVar2 = local_48;
    FUN_01516994();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTitle__0269cef0);
    (*(code *)PTR__objc_release_02578630)(lVar2);
    if (local_50 == 0) {
      local_108 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_108 = local_50;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMembers__026b00e0,local_108);
    if (local_58 == 0) {
      local_120 = *(long *)PTR____NSArray0___02578280;
    }
    else {
      local_120 = local_58;
    }
    puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
               local_120);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar5;
    if (((local_59 & 1) == 0) ||
       (lVar2 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
       lVar2 == 0)) {
LAB_0151c3d4:
      puVar5 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setLinkedGroupIds__026b00f0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setPreserveLinkedGroups__026b00f8,local_59 & 1);
      if ((local_72 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_persistTabsWithReason_persistSel_026b0228,&cf_tabs,0);
        local_21 = 1;
        local_60 = 1;
      }
      else {
        puVar4 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addTab__026b0240,local_68);
        local_21 = (byte)puVar4 & 1;
        local_60 = 1;
      }
    }
    else {
      puVar5 = PTR_WCRefineGroupManager_026ce2b8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_68;
      local_88 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_memberGroupId_026b0100);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_groupForId__026a27e0);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_90 = puVar6;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      if ((local_90 == (undefined *)0x0) ||
         (puVar6 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_kind_026a27e8),
         puVar5 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340, puVar6 != (undefined *)0x0)) {
        puVar6 = local_88;
        puVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar6,PTR_s_addCustomGroupWithName_scope_mem_026b0238,puVar4,0x1f,local_50,0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_90;
        local_90 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
LAB_0151c2a8:
        if (local_90 == (undefined *)0x0) {
          local_21 = 0;
          local_60 = 1;
        }
        else {
          puVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMemberGroupId__026b0108);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          puVar5 = local_80;
          puVar6 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_groupId_0269ea88);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(puVar6);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_setMembers__026b00e0,*(undefined8 *)PTR____NSArray0___02578280);
          local_60 = 0;
        }
      }
      else {
        puVar6 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_members_0269ea98);
        _objc_retainAutoreleasedReturnValue();
        local_150 = puVar6;
        if (puVar6 == (undefined *)0x0) {
          local_150 = *(undefined **)PTR____NSArray0___02578280;
        }
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_orderedSetWithArray__026a4b80,local_150);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar5;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_addObjectsFromArray__0269d540,local_50)
        ;
        puVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setMembers__026b00e0);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        puVar5 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_updateGroup__026a2db0,local_90);
        bVar1 = ((ulong)puVar5 & 1) == 0;
        if (bVar1) {
          local_21 = 0;
        }
        local_60 = (uint)bVar1;
        _objc_storeStrong(&local_98,0);
        if (local_60 == 0) goto LAB_0151c2a8;
      }
      _objc_storeStrong(&local_90);
      _objc_storeStrong(&local_88,0);
      if (local_60 == 0) goto LAB_0151c3d4;
    }
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_21 = 0;
    local_60 = 1;
  }
  _objc_storeStrong(&local_68,0);
LAB_0151c4e8:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

