// applyFloatingMetricValue:forTag: @ 019bf024

/* Function Stack Size: 0x20 bytes */

void WCRefineFloatingTabBarSettingsViewController::applyFloatingMetricValue_forTag_
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarHorizontalInset_026bab28);
  }
  else if (local_30 == 2) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarBottomOffset__026bab30);
  }
  else if (local_30 == 3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar1,PTR_s_setFloatingTabBarHeight__026bab38);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFloatingTabBarSizeIndex__026bab40,1);
  }
  else if (local_30 == 4) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarStrokeWidth__026bab60);
  }
  else if (local_30 == 5) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarCornerRatio__026bab68);
  }
  else if (local_30 == 6) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarBackgroundOpaci_026bab70);
  }
  else if (local_30 == 7) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarBackgroundGlass_026bab78);
  }
  else if (local_30 == 8) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarWidthAdjustment_026bab48);
  }
  else if (local_30 == 9) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarHeightAdjustmen_026bab50);
  }
  else if (local_30 == 10) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,puVar1,PTR_s_setFloatingTabBarIconSizeAdjustm_026bab58);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

