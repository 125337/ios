// dateSwitchChanged: @ 01eabf84

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoItemEditViewController::dateSwitchChanged_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isOn_0269d560);
  puVar4 = PTR_WCRefineToDoStore_026cf6a0;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingDueDate__026c7650,0);
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_datePicker_026c7588);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_startOfDay__026c7648);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEditingDueDate__026c7650);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshDateSection_026c7518);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshTimeSection_026c7520);
  _objc_storeStrong(&local_28,0);
  return;
}

