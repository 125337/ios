// addAutoAcceptTransferSettingCellsToSection:config: @ 01a17994

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineGeneralFunctionViewController::addAutoAcceptTransferSettingCellsToSection_config_
          (WCRefineGeneralFunctionViewController *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  ID IVar6;
  cfstringStruct *pcVar7;
  undefined8 in_x7;
  undefined8 in_d0;
  cfstringStruct *local_378;
  cfstringStruct *local_238;
  cfstringStruct *local_210;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1c8;
  undefined *local_120;
  bool local_111;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  char *local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 local_a1;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  cfstringStruct *local_88;
  char *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,param_4);
  IVar6 = local_40;
  puVar2 = PTR_WCRefineHelper_026ce000;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  puVar4 = PTR_s_showAutoAcceptTransferDelayEdito_026bb820;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferDelaySeconds_0269d6e0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringWithFormat__0269cca8,&cf___1fs);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,IVar6,&::cf__,puVar1,0,
             in_x7,in_d0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,local_60);
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferProfileC_026bb828;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferProfileControl_0269d698);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferNotify__026bb830;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferNotifyEnabled_0269d8c0);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferNotifyEnabled_0269d8c0);
  if (((ulong)pcVar3 & 1) != 0) {
    puVar4 = PTR__OBJC_CLASS___UISegmentedControl_026ce290;
    _objc_alloc();
    local_38 = &cf_9_zc;
    local_30 = &cf___w;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithItems__0269e9d8);
    local_78 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferNotifyType_0269d8c8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setSelectedSegmentIndex__0269e9e0,pcVar3 == (cfstringStruct *)0x1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_40,
               PTR_s_autoAcceptTransferNotifyTypeChan_026bb838,0x1000);
    pcVar5 = "WCTableViewCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar5);
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferNotifyType_0269d8c8);
    if (pcVar3 == (cfstringStruct *)0x1) {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_autoAcceptTransferNotificationSe_0269d8d0);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1c8 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_1c8;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      IVar6 = local_40;
      puVar1 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR_s_showAutoAcceptTransferNotificati_026bb840;
      pcVar3 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_1f0 = &cf_eNORKb;
      }
      else {
        local_1f0 = local_88;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,IVar6,&::cf__,
                 local_1f0,1);
      _objc_retainAutoreleasedReturnValue();
      local_90 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_previewAutoAcceptTransferNotific_026bb848,local_40,&::cf__,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar4);
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_autoAcceptTransferNotificationJu_0269d8d8);
      _objc_retainAutoreleasedReturnValue();
      local_210 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_210 = &cf_pQll_O;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = local_210;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_pQll_O);
      local_a1 = SUB81(pcVar3,0);
      if (((ulong)pcVar3 & 1) == 0) {
        local_238 = local_a0;
      }
      else {
        local_238 = &::cf__;
      }
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
                 PTR_s_showAutoAcceptTransferNotificati_026bb850,local_40,&::cf__,local_238,0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar4);
      IVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_createAutoAcceptTransferJumpColo_026bb858);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = "WCTableViewCellManager";
      local_b8 = IVar6;
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_c0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar5);
      _objc_storeStrong(&local_c0);
      _objc_storeStrong(&local_b8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
  }
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferVoiceBro_026bb868;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferVoiceBroadcast_0269d908);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferReply__026bb870;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferReplyEnabled_0269d710);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferReplyEnabled_0269d710);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferReplyContent_0269d718);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    IVar6 = local_40;
    puVar1 = PTR_WCRefineHelper_026ce000;
    puVar4 = PTR_s_showAutoAcceptTransferReplyEdito_026bb878;
    pcVar7 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    pcVar3 = &cf__n_;
    if (pcVar7 == (cfstringStruct *)0x0) {
      pcVar3 = &cf__gn_;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,IVar6,&::cf__,pcVar3,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_e0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
  }
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferBalance__026bb880;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferBalanceEnabled_0269d738);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferBalanceEnabled_0269d738);
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_showAutoAcceptTransferBalanceEdi_026bb888;
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferBalanceDisplay_0269d740);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_normalCellWithSel_target_title_r_0269e3f0,puVar4,IVar6,&::cf__,pcVar3,0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,local_f0);
    _objc_storeStrong(&local_f0,0);
  }
  IVar6 = local_40;
  puVar1 = PTR_WCRefineHelper_026ce000;
  puVar4 = PTR_s_toggleAutoAcceptTransferFixedInv_026bb890;
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferFixedInviteEna_0269d8a8);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_switchCellWithSel_target_title_s_026aa260,puVar4,IVar6,&::cf__,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar1);
  pcVar3 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferFixedInviteEna_0269d8a8);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_autoAcceptTransferFixedInviteRul_0269d8b0);
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    local_111 = false;
    local_100 = pcVar7;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_378 = &cf__gn_;
    }
    else {
      local_378 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
      _objc_retainAutoreleasedReturnValue();
      local_110 = local_378;
    }
    local_111 = pcVar7 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_378;
    if ((local_111 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_cellWithSel_target_title_rightVa_026a0a98,
               PTR_s_openAutoAcceptTransferTierList__026bb898,local_40,&::cf__,local_108,1);
    _objc_retainAutoreleasedReturnValue();
    local_120 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,puVar4);
    _objc_storeStrong(&local_120);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

