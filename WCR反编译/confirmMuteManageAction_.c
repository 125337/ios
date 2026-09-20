// confirmMuteManageAction: @ 018a4030

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomFunctionViewController::confirmMuteManageAction_
               (ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  ID local_98;
  undefined *local_90;
  undefined8 local_88;
  long_long local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_58;
  byte local_51;
  undefined1 *local_50;
  undefined *local_48;
  undefined1 *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar6 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
  local_40 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_pendingTargetUserNames_026b7620);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = local_40;
  local_48 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatRoomMuteManageRule_026ab770);
  local_51 = 0;
  bVar5 = false;
  if (puVar8 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar8 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatRoomMuteManageIncludeGroups_026ab760);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar5 = puVar8 == (undefined1 *)0x0;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if (bVar5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQb_J);
    local_58 = 1;
  }
  else {
    puVar7 = PTR_WCRefineChatRoomMuteHelper_026ce2f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineChatRoomMuteHelper_026ce2f0,PTR_s_userNames_needingAction__026ab7d0,
               local_48,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_60 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_count_0269cfe0);
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (puVar7 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lg);
      local_58 = 1;
    }
    else {
      local_68 = (undefined *)0x0;
      local_70 = 0;
      if (local_38 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__b);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_68;
        local_68 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_70,&cf___NMQSbpb);
      }
      else if (local_38 == 1) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__Sm);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_68;
        local_68 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_70,&cf__SmMQSbpb);
      }
      else if (local_38 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__b);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_68;
        local_68 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_70,&cf___NbSvJ_Y);
      }
      else if (local_38 == 3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf__Sm);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_68;
        local_68 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        _objc_storeStrong(&local_70,&cf__SmbSvJ_Y);
      }
      puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_dkd_O_N);
      _objc_retainAutoreleasedReturnValue();
      IVar4 = local_28;
      puVar2 = local_68;
      puVar7 = PTR_WCRefineHelper_026ce000;
      local_b8 = PTR___NSConcreteStackBlock_02578660;
      local_b0 = 0xc2000000;
      local_ac = 0;
      local_a8 = FUN_018a46a0;
      local_a0 = &DAT_02582d38;
      local_78 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar3 = local_60;
      local_98 = IVar4;
      local_80 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      uVar1 = local_70;
      local_90 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_presentNativePageSheetConfirmWit_0269ed28,puVar2,puVar6,0,&cf_nx,
                 &cf_Sm,&local_b8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      local_58 = 0;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return;
}

