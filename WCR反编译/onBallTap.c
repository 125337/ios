// onBallTap @ 015ecd18

/* Function Stack Size: 0x10 bytes */

void WCRQuickChatWindow::onBallTap(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  uint local_50;
  ID local_48;
  byte local_39;
  ID local_38;
  ID local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_ballLongPressConsumed_026b1420);
  if ((param_1 & 1) == 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_followAvatarUsername_026b1430);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_28;
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatBallAvatarTapOpen_026b1438);
    local_39 = 0;
    local_50 = 0;
    if (((ulong)puVar1 & 1) != 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_50 = 0;
      if (IVar2 != 0) {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ballAvatarHost_026b12f8);
        _objc_retainAutoreleasedReturnValue();
        local_39 = 1;
        local_38 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_50 = (uint)IVar2 ^ 1;
      }
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((local_50 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toggleSidebarVisibility_026b1458);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      local_48 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setFollowAvatarUsername__026b1440);
      IVar2 = local_18;
      puVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatBallAvatarTapAction_026b1448);
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_performAction_forUsername__026b1450,puVar1,local_48);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_30);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBallLongPressConsumed__026b1428,0);
  }
  return;
}

