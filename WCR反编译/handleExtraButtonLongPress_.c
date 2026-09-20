// handleExtraButtonLongPress: @ 0029d098

/* Function Stack Size: 0x18 bytes */

void WCRFloatingTabBarExtraButtonTarget::handleExtraButtonLongPress_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_108;
  ulong local_d0;
  cfstringStruct *local_80;
  ulong local_78;
  bool local_69;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  int local_48;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_state_026cab20);
  if (uVar2 == 1) {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = 0;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UITabBar_026ce260;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_58;
      local_58 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_69 = false;
    bVar1 = local_58 == 0;
    if (bVar1) {
      local_d0 = 0;
    }
    else {
      local_d0 = local_58;
      FUN_0029cc70();
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (local_60 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_N_hc6RhV);
      local_48 = 1;
    }
    else {
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_selectedIndex_0269e580);
      pcVar5 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
      local_78 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar6;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_108 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = local_108;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_executeExtraAction_sender_in_026a18e0,local_80,local_50,local_78
                 ,local_60);
      _objc_storeStrong(&local_80,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    if (local_48 == 0) {
      local_48 = 0;
    }
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

