// onSelectedOrCancelContact:isSelected: @ 00ee76a0

/* Function Stack Size: 0x1c bytes */

void WCRChatRoomPickerBridge::onSelectedOrCancelContact_isSelected_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRightButton_026ab828);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshSelectAllButton_026ab830);
  _objc_storeStrong(&local_28,0);
  return;
}

