// isCurrentGroupChat @ 009d8f84

/* Function Stack Size: 0x10 bytes */

bool WCRefineAnonymousAtHelper::isCurrentGroupChat(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcr_currentGroupUserName_026ab028);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return (uint)(IVar1 != 0);
}

