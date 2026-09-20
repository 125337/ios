// combinedStartTime @ 01eacbc0

/* Function Stack Size: 0x10 bytes */

ID WCRefineToDoItemEditViewController::combinedStartTime(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined8 local_88;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_18;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeSwitch_026c75b0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if ((IVar3 & 1) != 0) {
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingDueDate_026c7560);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar3 == 0;
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_18 = PTR_WCRefineToDoStore_026cf6a0;
  if (bVar1) {
    local_18 = (undefined *)0x0;
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingDueDate_026c7560);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_editingStartTime_026c75b8);
    _objc_retainAutoreleasedReturnValue();
    local_88 = IVar3;
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_startPicker_0269cfa8);
      _objc_retainAutoreleasedReturnValue();
      local_50 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_50;
      local_40 = param_1;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_dateByCombiningDay_time__026c7668,IVar2,local_88);
    _objc_retainAutoreleasedReturnValue();
    if (IVar3 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

