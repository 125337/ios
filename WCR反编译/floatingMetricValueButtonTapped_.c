// floatingMetricValueButtonTapped: @ 019bfb90

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineFloatingTabBarSettingsViewController::floatingMetricValueButtonTapped_
          (WCRefineFloatingTabBarSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  ID IVar5;
  undefined8 in_d0;
  char *local_68;
  uint local_5c;
  char *local_58;
  undefined8 local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  IVar5 = local_18;
  local_30 = lVar2 + -3000;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_30);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar5,&DAT_028e4440,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf__h;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = &::cf_eQ;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_floatingTabBarHorizontalInset_026a19f8);
  if (local_30 == 2) {
    _objc_storeStrong(0,&local_38,&cf__h);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarBottomOffset_026a1a00);
    local_50 = in_d0;
  }
  else if (local_30 == 3) {
    _objc_storeStrong(0,&local_38,&cf__hteSO_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarHeight_026a1a08);
    local_50 = in_d0;
  }
  else if (local_30 == 4) {
    _objc_storeStrong(0,&local_38,&cf_c_Y_);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarStrokeWidth_026a1b98);
    local_50 = in_d0;
  }
  else if (local_30 == 5) {
    _objc_storeStrong(0,&local_38,&cf__hW);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarCornerRatio_026a1b18);
    local_50 = in_d0;
  }
  else if (local_30 == 6) {
    _objc_storeStrong(0,&local_38,&cf_off);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarBackgroundOpacity_026a1ac0);
    local_50 = in_d0;
  }
  else if (local_30 == 7) {
    _objc_storeStrong(0,&local_38,&cf_stHeg);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarBackgroundGlassInt_026a1ac8);
    local_50 = in_d0;
  }
  else if (local_30 == 8) {
    _objc_storeStrong(0,&local_38,&cf__h__te);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarWidthAdjustment_026a1a10);
    local_50 = in_d0;
  }
  else if (local_30 == 9) {
    _objc_storeStrong(0,&local_38,&cf__h_te);
    _objc_storeStrong(&local_40,&::cf_eQ);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_floatingTabBarHeightAdjustment_026a1a18);
    local_50 = in_d0;
  }
  else {
    local_50 = in_d0;
    if (local_30 == 10) {
      _objc_storeStrong(0,&local_38,&cf__hVh_Y_);
      _objc_storeStrong(&local_40,&::cf_eQ);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_floatingTabBarIconSizeAdjustment_026a1ad8);
      local_50 = in_d0;
    }
  }
  pcVar4 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar4 != (char *)0x0;
  local_58 = pcVar4;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_showTextFieldWithMaxLen__0269e5e0,5);
    pcVar4 = local_68;
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,local_18,PTR_s_floatingMetricDisplayTextForTag__026bab88,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_setTextFieldDefaultText__0269fd98);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_handleFloatingMetricAlertCancel__026baba0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleFloatingMetricValueInput__026baba8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setWcr_floatingMetricAlert__026babb0,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    _objc_storeStrong(&local_68,0);
  }
  local_5c = (uint)!bVar1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

