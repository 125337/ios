// groupsForKind: @ 00f6b540

/* Function Stack Size: 0x18 bytes */

ID WCRForwardToGroupPickerViewController::groupsForKind_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  if (param_3 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_chatRoomGroups_026ac8e0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = param_1;
    local_48 = param_1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_friendGroups_026ac8d8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = param_1;
    local_38 = param_1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (param_3 != 1) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_autoreleaseReturnValue();
  return local_58;
}

