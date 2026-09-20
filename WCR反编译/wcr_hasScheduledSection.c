// wcr_hasScheduledSection @ 01bec970

/* Function Stack Size: 0x10 bytes */

bool WCRefineMomentsDraftListViewController::wcr_hasScheduledSection(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scheduledTasks_026af460);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)(IVar1 != 0);
}

