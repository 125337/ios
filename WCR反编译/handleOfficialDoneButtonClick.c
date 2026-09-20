// handleOfficialDoneButtonClick @ 00ee7194

/* Function Stack Size: 0x10 bytes */

void WCRChatRoomPickerBridge::handleOfficialDoneButtonClick(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickerController_026ab800);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_finishWithSource__026ab860);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

