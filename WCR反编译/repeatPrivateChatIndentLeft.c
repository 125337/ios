// repeatPrivateChatIndentLeft @ 0201d014

/* Function Stack Size: 0x10 bytes */

long_long WCRefineConfig::repeatPrivateChatIndentLeft(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_0201caa0(param_1,param_2,&cf_repeatPrivateChatIndent);
  (*(code *)PTR__objc_release_02578630)(param_2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return IVar1;
}

