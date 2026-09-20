// onMultiSelectContactReturn: @ 01bb58d8

/* Function Stack Size: 0x18 bytes */

void WCRMessageSyncRoomMemberPickerBridge::onMultiSelectContactReturn_
               (ID param_1,SEL param_2,ID param_3)

{
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finishWithContacts_cancelled__026ab888,
               *(undefined8 *)PTR____NSArray0___02578280,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_finishWithContacts_cancelled__026ab888,local_28,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

