// applyMetricValue:forTag: @ 01d0ddd4

/* Function Stack Size: 0x20 bytes */

void WCRefineQuickChatSettingsViewController::applyMetricValue_forTag_
               (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *local_38;
  long_long local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  if (local_30 == 1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setQuickChatBallSize__026c3d98);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28 / 100.0,puVar1,PTR_s_setQuickChatBallAlpha__026c3da0);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setQuickChatSidebarWidth__026c3da8);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setQuickChatSidebarHeight__026c3db0)
    ;
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setQuickChatSidebarCornerRadius__026c3db8);
  }
  else if (local_30 == 6) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28 / 100.0,puVar1,PTR_s_setQuickChatSidebarAlpha__026c3dc0);
  }
  else if (local_30 == 7) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setQuickChatAvatarSize__026c3dc8);
  }
  else if (local_30 == 8) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setQuickChatItemSpacing__026c3dd0);
  }
  else if (local_30 == 9) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setQuickChatNicknameSpacing__026c3dd8);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

