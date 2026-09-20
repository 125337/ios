// wcr_onRescheduleScheduledTask @ 01bf6b3c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsDraftListViewController::wcr_onRescheduleScheduledTask(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_actionTask_026a53f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_rescheduleTask__026c0b10);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

