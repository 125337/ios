// chatTopBarSearchTapGestureModeChanged: @ 01b55da8

/* Function Stack Size: 0x18 bytes */

void WCRefineLayoutFunctionViewController::chatTopBarSearchTapGestureModeChanged_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar1,param_3);
  FUN_01b4574c();
  if (((ulong)puVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHapticFeedback_0269dc78);
    IVar3 = local_18;
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_selectedSegmentIndex_0269e998);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_chatTopBarSearchTapGestureModeFo_026bf728,uVar2);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_sendSettingsChangedNotification_026b61d8);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadTableData_0269dca8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_showChatTopBarSearchTapGestureMo_026bf738,IVar3);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

