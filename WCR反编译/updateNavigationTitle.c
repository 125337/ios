// updateNavigationTitle @ 01bad750

/* Function Stack Size: 0x10 bytes */

void WCRefineMessageRepositoryViewController::updateNavigationTitle(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_displayedMessages_026c03c8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_mo_N__);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTitle__0269cef0);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  return;
}

