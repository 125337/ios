// wcr_settingsChanged: @ 001340fc

/* Function Stack Size: 0x18 bytes */

void WCRChatToolbarView::wcr_settingsChanged_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8688,PTR_s_removeAllObjects_0269d508);
  IVar1 = local_18;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_inputToolView_0269d0e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_wcr_applySettingsChange__0269f130,IVar2 != 0);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

