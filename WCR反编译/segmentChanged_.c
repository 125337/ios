// segmentChanged: @ 019c07f4

/* Function Stack Size: 0x18 bytes */

void WCRefineFloatingTabBarSettingsViewController::segmentChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if (lVar2 == 100) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarSwitchAnimation_026babd8,lVar2);
  }
  else if (lVar2 == 0x65) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarSwitchHapticInd_026babe0,lVar2);
  }
  else if (lVar2 == 0x66) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarBackgroundStyle_026babe8,lVar2);
  }
  else if (lVar2 == 0x67) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarBackgroundMedia_026babf0,lVar2);
  }
  else if (lVar2 == 0x68) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarStrokeAnimation_026bac08,lVar2);
  }
  else if (lVar2 == 0x69) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarHiddenItemIndex_026babf8,lVar2);
  }
  else if (lVar2 == 0x6a) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setFloatingTabBarExtraButtonPosi_026bac00,lVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_floatingNotifyInjected_026babd0);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  if ((lVar2 == 0x68) ||
     (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98),
     lVar2 == 0x66)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

