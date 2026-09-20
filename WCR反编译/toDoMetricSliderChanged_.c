// toDoMetricSliderChanged: @ 01ebfb48

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineToDoListSettingsViewController::toDoMetricSliderChanged_
          (WCRefineToDoListSettingsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float in_s0;
  double dVar4;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_value_0269d830);
  dVar4 = (double)in_s0;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_snappedToDoMetricValueForTag_raw_026c78a0,uVar2)
  ;
  (*(code *)PTR__objc_msgSend_02578628)((float)dVar4,local_28,PTR_s_setValue_animated__026ba900,0);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,IVar1,PTR_s_applyToDoMetricValue_forTag__026c78a8,uVar2);
  IVar1 = local_18;
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
  (*(code *)PTR__objc_msgSend_02578628)
            (dVar4,IVar1,PTR_s_updateToDoMetricValueButtonInCon_026c78b0,uVar2,uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRealtimePreviewCard_026c7840);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

