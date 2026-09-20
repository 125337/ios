// currentChatContactFromTopViewController @ 00fc1e70

/* Function Stack Size: 0x10 bytes */

ID WCRefineHelper::currentChatContactFromTopViewController(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contactFromMsgViewController__0269d468);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

