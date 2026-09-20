// startStats @ 01dd48c4

/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::startStats(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [12];
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [24];
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined **local_58;
  undefined1 auStack_50 [8];
  ID local_48;
  byte local_3a;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((IVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserStopped__026c55a0,0);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
    local_39 = 0;
    bVar1 = false;
    if ((IVar2 & 1) == 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUsr_026c5438);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = IVar2 == 0;
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RS_MRO);
    }
    else {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
      puVar4 = PTR_WCRefineMessageBlockSupport_026ce0f8;
      if ((IVar2 & 1) == 0) {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUsr_026c5438);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isChatRoomID__0269ec68);
        (*(code *)PTR__objc_release_02578630)(IVar2);
        local_3a = (byte)puVar4;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
        if (((IVar2 & 1) != 0) && ((local_3a & 1) == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_f_J);
          return;
        }
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
        if (((IVar2 & 1) == 0) && ((local_3a & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_f_YSO);
          return;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setDidRequestRun__026c5598,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setSessionResult__026c5560);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewResult__026c54d8,0);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
      if ((IVar2 & 1) != 0) {
        puVar4 = PTR_WCRefineSessionStatsOverviewResult_026ced30;
        _objc_alloc_init();
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewResult__026c54d8);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = PTR_WCRefineSessionStatsEngine_026ced48;
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewResult_026c54e0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_applyFriendRosterToResult_refres_026af820,IVar2,0);
        (*(code *)PTR__objc_release_02578630)(IVar2);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setProgressText__026c55a8,&cf_QYS_);
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_activeTimeRange_026c5540);
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_showScanLoadingToast_026c5660);
      _objc_initWeak(auStack_50,local_28);
      ppuVar5 = &local_80;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_01dd52c4;
      local_68 = &DAT_0258c4f0;
      _objc_copyWeak(auStack_60,auStack_50);
      _objc_retainBlock();
      IVar2 = local_28;
      local_58 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_overviewMode_026af898);
      if ((IVar2 & 1) == 0) {
        IVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_chatUsr_026c5438);
        _objc_retainAutoreleasedReturnValue();
        IVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isGroup_026af768);
        IVar8 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_displayName_026ac378);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_48;
        ppuVar5 = local_58;
        local_110 = PTR___NSConcreteStackBlock_02578660;
        local_108 = 0xc2000000;
        local_104 = 0;
        local_100 = FUN_01dd56c8;
        local_f8 = &DAT_0258c350;
        _objc_copyWeak(auStack_f0,auStack_50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar3,PTR_s_scanSessionUsr_isGroup_displayNa_026c4d48,IVar6,IVar7 & 0xffffffff,
                   IVar8,IVar2,ppuVar5,&local_110);
        (*(code *)PTR__objc_release_02578630)(IVar8);
        (*(code *)PTR__objc_release_02578630)(IVar6);
        (*(code *)PTR__objc_release_02578630)(IVar3);
        _objc_destroyWeak(auStack_f0);
        local_bc = 0;
      }
      else {
        IVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_portraitMode_026afd68);
        if ((IVar2 & 1) == 0) {
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_48;
          ppuVar5 = local_58;
          local_e8 = PTR___NSConcreteStackBlock_02578660;
          local_e0 = 0xc2000000;
          local_dc = 0;
          local_d8 = FUN_01dd558c;
          local_d0 = &DAT_0258c520;
          _objc_copyWeak(auStack_c8,auStack_50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_scanOverviewTimeRange_progress_c_026c5678,IVar2,ppuVar5,&local_e8);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_bc = 1;
          _objc_destroyWeak(auStack_c8);
        }
        else {
          puVar4 = PTR_WCRefineSessionStatsEngine_026ced48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineSessionStatsEngine_026ced48,PTR_s_friendPortraitSeed_026c5668);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setOverviewResult__026c54d8);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_reloadBoard_026c54f8);
          IVar3 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
          _objc_retainAutoreleasedReturnValue();
          IVar2 = local_48;
          ppuVar5 = local_58;
          local_b8 = PTR___NSConcreteStackBlock_02578660;
          local_b0 = 0xc2000000;
          local_ac = 0;
          local_a8 = FUN_01dd5450;
          local_a0 = &DAT_0258c520;
          _objc_copyWeak(auStack_98,auStack_50);
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_scanFriendPortraitTimeRange_prog_026c5670,IVar2,ppuVar5,&local_b8);
          (*(code *)PTR__objc_release_02578630)(IVar3);
          local_bc = 1;
          _objc_destroyWeak(auStack_98);
        }
      }
      _objc_storeStrong(&local_58,0);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_50);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserStopped__026c55a0,1);
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_engine_026be8d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_hideScanLoadingToast_026c5508);
  }
  return;
}

