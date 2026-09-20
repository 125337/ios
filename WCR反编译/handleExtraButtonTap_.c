// handleExtraButtonTap: @ 0029c8d8

/* Function Stack Size: 0x18 bytes */

void WCRFloatingTabBarExtraButtonTarget::handleExtraButtonTap_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_a8;
  ulong local_68;
  ulong local_60;
  uint local_58;
  bool local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UITabBar_026ce260;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITabBar_026ce260,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar4 & 1) != 0) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_30 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  local_51 = false;
  bVar1 = local_30 == 0;
  if (bVar1) {
    local_a8 = 0;
  }
  else {
    local_a8 = local_30;
    FUN_0029cc70();
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a8;
  }
  local_51 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_a8;
  if ((local_51 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  bVar1 = local_48[0] != 0;
  if (bVar1) {
    uVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_selectedIndex_0269e580);
    local_60 = uVar2;
    FUN_0029cd84();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_executeExtraAction_sender_in_026a18e0,uVar2,local_28,local_60,
               local_48[0]);
    _objc_storeStrong(&local_68,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__g_b0R_N_hc6RhV);
  }
  local_58 = (uint)!bVar1;
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  if (local_58 == 0) {
    local_58 = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

