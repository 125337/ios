// addAtMentionNotificationSection @ 018a6704

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomFunctionViewController::addAtMentionNotificationSection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  cfstringStruct *pcVar7;
  undefined *puVar8;
  cfstringStruct *local_1e0;
  bool local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  ID local_70;
  undefined *local_68;
  undefined4 local_5c;
  undefined *local_58;
  cfstringStruct *local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_48 = param_2;
  local_40 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_50 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_sectionManage_0269e3b8);
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setHeaderTitle__0269e3c0,&cf__yrc_y);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationEnabled_026a44b0);
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_setFooterTitle__0269e3c8,&cf_e_gw_Nnfmo___mo_SpQ_MO0);
  }
  IVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar4);
  IVar4 = local_40;
  puVar1 = local_58;
  puVar5 = PTR_WCRefineHelper_026ce000;
  puVar3 = PTR_s_toggleAtMentionNotification__026b7708;
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationEnabled_026a44b0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&::cf___,pcVar2);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationEnabled_026a44b0);
  if (((ulong)pcVar2 & 1) == 0) {
    local_5c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_38 = &cf_e_gw;
    local_30 = &cf___mo_;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_initWithItems__0269e9d8);
    local_68 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationType_026a4528);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_setSelectedSegmentIndex__0269e9e0,
               pcVar2 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1));
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_atMentionNotificationTypeChanged_026b7710,0x1000);
    puVar3 = local_58;
    pcVar6 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    puVar3 = local_58;
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
               PTR_s_editAtMentionNotificationFormat_026b7718,local_40,&::cf__,&cf_SW_k_,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar4 = local_40;
    puVar1 = local_58;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleAtMentionIncludeAtAll__026b7720;
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionIncludeAtAll_026a4508);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&::cf__,pcVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationType_026a4528);
    IVar4 = local_40;
    puVar1 = local_58;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_toggleAtMentionJump__026b7728;
    if (pcVar2 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_atMentionNotificationJumpEnabled_026a4548);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar3,IVar4,&::cf__,pcVar2)
      ;
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_atMentionNotificationJumpEnabled_026a4548);
      IVar4 = local_40;
      puVar1 = local_58;
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar3 = PTR_s_editAtMentionJumpText_026b7730;
      if (((ulong)pcVar2 & 1) != 0) {
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationJumpText_026a4530)
        ;
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar3,IVar4,&::cf__,
                   pcVar2,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        IVar4 = local_40;
        pcVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_atMentionNotificationJumpColor_026a4540);
        _objc_retainAutoreleasedReturnValue();
        pcVar7 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_atMentionNotificationJumpDarkCol_026a4538);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar4,PTR_s_createDualColorPreviewWithLightH_026b7738,pcVar2,pcVar7,&cf_800080);
        _objc_retainAutoreleasedReturnValue();
        local_70 = IVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar3 = local_58;
        pcVar6 = "WCTableViewCellManager";
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        _objc_storeStrong(&local_70,0);
      }
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationSessionID_026a4520);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_1e0 = &cf_filehelper;
    }
    else {
      local_1e0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_atMentionNotificationSessionID_026a4520);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_1e0;
    }
    local_81 = pcVar7 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_1e0;
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar4 = local_40;
    puVar1 = local_58;
    puVar5 = PTR_WCRefineHelper_026ce000;
    puVar3 = PTR_s_editAtMentionNotificationSession_026b7748;
    puVar8 = PTR_WCRefineMessageSyncRule_026ce708;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_displayNameForSession__026a4518,local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar3,IVar4,&::cf__,puVar8,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    puVar3 = local_58;
    pcVar6 = "WCTableViewNormalCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addCell__0269e3f8);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_68,0);
    local_5c = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

