// addMuteManageSection @ 018a2fc8

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addMuteManageSection(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  undefined1 *puVar6;
  char *pcVar7;
  ID IVar8;
  ID IVar9;
  long lVar10;
  undefined *local_168;
  undefined *local_160;
  undefined *local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  long local_f0;
  long local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined1 *local_d0;
  SEL local_c8;
  ID local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_c8 = param_2;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_WCRefineHelper_026ce000;
  local_d0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_d8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setHeaderTitle__0269e3c0,&cf_MQSbpb_t);
  puVar3 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_pendingTargetUserNames_026b7620);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = 0;
  local_f0 = 0;
  local_e0 = puVar3;
  _memset(auStack_138,0,0x40);
  puVar3 = local_e0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
  if (local_160 != (undefined *)0x0) {
    lVar10 = *local_128;
    local_168 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar10 != 0) {
          _objc_enumerationMutation(*local_128 - lVar10,puVar3);
        }
        local_f8 = *(undefined8 *)(local_130 + (long)local_168 * 8);
        puVar4 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_isMutedUserName__026ab780,local_f8)
        ;
        if (((ulong)puVar4 & 1) != 0) {
          local_e8 = local_e8 + 1;
        }
        puVar4 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_isFoldedUserName__026ab788,local_f8
                  );
        if (((ulong)puVar4 & 1) != 0) {
          local_f0 = local_f0 + 1;
        }
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_168 = (undefined *)0x0;
    } while (local_160 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_S_MR__O_uN);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_setFooterTitle__0269e3c8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  IVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar5);
  IVar5 = local_c0;
  puVar2 = local_d8;
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleAutoMuteNewGroups__026b7628;
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_chatRoomAutoMuteNewGroupsEnabled_026ab790);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar5,&cf_e_RMQSbpb,
             puVar6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  IVar5 = local_c0;
  puVar2 = local_d8;
  puVar4 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleMuteManageSettingsExpanded_026b7630;
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_chatRoomMuteManageSettingsExpand_026b7638);
  pcVar1 = &cf_bS;
  if (((ulong)puVar6 & 1) == 0) {
    pcVar1 = &cf_U_;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar4,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar5,&cf_ybMQSbpbn_,
             pcVar1,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_chatRoomMuteManageSettingsExpand_026b7638);
  if (((ulong)puVar6 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_b8 = &cf_b_J;
    local_b0 = &cf_cd_J;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
    local_140 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_chatRoomMuteManageRule_026ab770);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_setSelectedSegmentIndex__0269e9e0,
               puVar6 != (undefined1 *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_c0,
               PTR_s_muteManageRuleChanged__026b7640,0x1000);
    puVar3 = local_d8;
    pcVar7 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar7);
    IVar5 = local_c0;
    puVar2 = local_d8;
    puVar4 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_pickMuteManageGroups_026b7648;
    IVar8 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_muteManageGroupsCellTitle_026b7650);
    _objc_retainAutoreleasedReturnValue();
    IVar9 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_muteManageGroupsSummaryText_026b7658);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_cellWithSel_target_title_rightVa_026a0a98,puVar3,IVar5,IVar8,IVar9,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar9);
    (*(code *)PTR__objc_release_02578630)(IVar8);
    puVar3 = local_d8;
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_muteSelectedChatRooms_026b7660,local_c0,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_d8;
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_unmuteSelectedChatRooms_026b7668,local_c0,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_d8;
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_foldSelectedChatRooms_026b7670,local_c0,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_d8;
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
               PTR_s_unfoldSelectedChatRooms_026b7678,local_c0,&::cf__,0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_140,0);
  }
  puVar3 = local_d8;
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_confirmQuitSelectedChatRooms_026b7680,local_c0,&::cf__,0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

