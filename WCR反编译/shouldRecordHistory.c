// shouldRecordHistory @ 00f690e4

/* Function Stack Size: 0x10 bytes */

bool WCRForwardToGroupPickerViewController::shouldRecordHistory(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  undefined8 local_40;
  undefined8 local_30;
  
  IVar4 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedGroupIDs_026ac910);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = false;
  bVar1 = false;
  bVar3 = false;
  if (IVar5 == 1) {
    local_30 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_selectedHistoryIDs_026ac920);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = true;
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar3 = false;
    if (IVar5 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickedUsernames_026ac928);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      IVar5 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar3 = IVar5 == 0;
      local_40 = param_1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(IVar4);
  return (uint)(bVar3 ^ 1);
}

