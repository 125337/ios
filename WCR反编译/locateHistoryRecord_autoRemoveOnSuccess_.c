// locateHistoryRecord:autoRemoveOnSuccess: @ 01b31378

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x1c bytes */

void WCRefineKeywordAlertHistoryViewController::locateHistoryRecord_autoRemoveOnSuccess_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ID local_1e0;
  ID local_1c8;
  ID local_1b0;
  ID local_190;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined **local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  ID local_100;
  undefined8 *local_f8;
  ID local_f0;
  byte local_e8;
  undefined **local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  code *local_b8;
  ID local_b0;
  byte local_a3;
  undefined1 local_a2;
  byte local_a1;
  ID local_a0;
  ID local_98;
  byte local_89;
  ID local_88;
  ID local_80;
  byte local_71;
  ID local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  byte local_39;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedRecord__026beb38,local_38);
  _objc_retainAutoreleasedReturnValue();
  local_190 = IVar1;
  if (IVar1 == 0) {
    local_190 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_190;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_isBrokenLegacyHistoryRecord__026beea8,local_48);
  if ((IVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
               &cf_ag_feHr_gOWpenclOX__TTmo_I);
    local_4c = 1;
    goto LAB_01b31d74;
  }
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  FUN_01b1fc40();
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = local_58;
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R__Oell);
    local_4c = 1;
  }
  else {
    IVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_messageWrapForHistoryRecord__026bee60,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_60 = IVar1;
    if (IVar1 == 0) {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 0;
      local_1b0 = IVar1;
      if (IVar1 == 0) {
        FUN_01b31da8();
        _objc_retainAutoreleasedReturnValue();
        local_70 = local_1b0;
      }
      local_71 = IVar1 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_1b0;
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if ((local_68 == 0) ||
         (IVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_28,PTR_s_openGroupChatForSessionUser_navi_026beeb0,local_58,local_68),
         (IVar1 & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R__mo_el_MO)
        ;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__eQOf_g_MO0RSmo_)
        ;
      }
      local_4c = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      IVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 0;
      local_1c8 = IVar1;
      if (IVar1 == 0) {
        FUN_01b31da8();
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_1c8;
      }
      local_89 = IVar1 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_1c8;
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(IVar1);
      if (local_80 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubell0RJ_Y);
        local_4c = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setLocatingHistoryRecord__026beeb8,1);
        IVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_a1 = 0;
        if ((IVar2 & 1) == 0) {
          local_1e0 = 0;
        }
        else {
          local_1e0 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_localID);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_1e0;
          (*(code *)PTR__objc_msgSend_02578628)();
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(IVar1);
        local_98 = local_1e0;
        IVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_locateMessageWrap_inVisibleChatO_026bee90,local_60,local_58,
                   local_1e0,local_80);
        local_a2 = (undefined1)IVar1;
        local_a3 = 0;
        if ((IVar1 & 1) == 0) {
          IVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_openGroupChatForSessionUser_navi_026beeb0,local_58,local_80);
          if ((IVar1 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_setLocatingHistoryRecord__026beeb8,0);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_Sb);
            local_4c = 1;
            goto LAB_01b31d44;
          }
          local_a3 = 1;
        }
        IVar1 = local_28;
        local_d8 = 0;
        local_c8 = 0x32000000;
        local_c4 = 0x30;
        local_c0 = FUN_01b31ef0;
        local_b8 = FUN_01b31f44;
        local_d0 = &local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = IVar1;
        ppuVar5 = &local_138;
        local_138 = PTR___NSConcreteStackBlock_02578660;
        local_130 = 0xc2000000;
        local_12c = 0;
        local_128 = FUN_01b31f70;
        local_120 = &DAT_0258b2e8;
        IVar1 = local_60;
        local_f8 = &local_d8;
        (*(code *)PTR__objc_retain_02578638)();
        IVar2 = local_58;
        local_118 = IVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_f0 = local_98;
        IVar1 = local_80;
        local_110 = IVar2;
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = local_39 & 1;
        IVar2 = local_48;
        local_108 = IVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_100 = IVar2;
        _objc_retainBlock();
        local_e0 = ppuVar5;
        if ((local_a3 & 1) == 0) {
          (*(code *)ppuVar5[2])();
        }
        else {
          dVar3 = _dispatch_time(0,800000000);
          puVar4 = PTR___dispatch_main_q_02578680;
          _objc_retainAutoreleaseReturnValue();
          _objc_retainAutoreleasedReturnValue();
          local_160 = PTR___NSConcreteStackBlock_02578660;
          local_158 = 0xc2000000;
          local_154 = 0;
          local_150 = FUN_01b32288;
          local_148 = &DAT_025814c8;
          ppuVar5 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = ppuVar5;
          _dispatch_after(dVar3,puVar4,&local_160);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          _objc_storeStrong(&local_140,0);
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_100,0);
        _objc_storeStrong(&local_108,0);
        _objc_storeStrong(&local_110,0);
        _objc_storeStrong(&local_118,0);
        __Block_object_dispose(&local_d8,8);
        _objc_storeStrong(&local_b0,0);
        local_4c = 0;
      }
LAB_01b31d44:
      _objc_storeStrong(&local_80,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58,0);
LAB_01b31d74:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  return;
}

