// clearHitsForPickedRooms @ 018b56b0

/* Function Stack Size: 0x10 bytes */

void WCRefineChatRoomManageViewController::clearHitsForPickedRooms(ID param_1,SEL param_2)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineChatRoomPicker_026cef60,PTR_s_presentFromViewController_title__026ab898,
             param_1,&cf_bnzzv_,*(undefined8 *)PTR____NSArray0___02578280,
             &PTR___NSConcreteGlobalBlock_02589ee8,in_x6,in_x7,param_2);
  return;
}

