// toggleCustomTitleFont: @ 01e4fc90

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineTelegramGroupingViewController::toggleCustomTitleFont_
          (WCRefineTelegramGroupingViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  double in_d0;
  undefined *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setHomeTelegramGroupingCustomTit_026c6858,uVar2);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  if (((uVar2 & 1) != 0) &&
     (((*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_homeTelegramGroupingTitleFontSiz_026c67b0), in_d0 < 12.0 ||
      ((*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_homeTelegramGroupingTitleFontSiz_026c67b0), 20.0 < in_d0)))) {
    (*(code *)PTR__objc_msgSend_02578628)
              (0x4031000000000000,local_30,PTR_s_setHomeTelegramGroupingTitleFont_026c6860);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_postSettings_026c67e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setupData_026b7c20);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

