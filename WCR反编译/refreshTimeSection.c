// refreshTimeSection @ 01eabc84

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoItemEditViewController::refreshTimeSection(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined4 local_48;
  undefined8 local_40;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_dateSwitch_026c7558);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeSwitch_026c75b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  local_48 = 0;
  if ((IVar3 & 1) == 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeSwitch_026c75b0);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_48 = (uint)IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if ((local_48 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeSwitch_026c75b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingStartTime__026c7638);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setEditingEndTime__026c7640,0);
  }
  bVar1 = (IVar3 & 1) != 0;
  if (bVar1) {
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeSwitch_026c75b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeRow_026c75d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  return;
}

