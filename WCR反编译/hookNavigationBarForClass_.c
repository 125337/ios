// hookNavigationBarForClass: @ 004c7540

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::hookNavigationBarForClass_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined *puVar1;
  CLASS CVar2;
  ID IVar3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_addHelperMethodsToClass__026a4038,param_3);
  puVar1 = PTR_s_WCRefine_getAddBarButton_026a4040;
  CVar2 = param_3;
  _class_getInstanceMethod(param_3,PTR_s_getAddBarButton_026a3ec8);
  if ((CVar2 != 0) && (_class_getInstanceMethod(param_1,puVar1), param_1 != 0)) {
    IVar3 = param_1;
    _method_getImplementation();
    _method_getTypeEncoding();
    _class_addMethod(param_3,puVar1,IVar3,param_1);
    _class_getInstanceMethod(param_3,puVar1);
    if (param_3 != 0) {
      _method_exchangeImplementations(CVar2,param_3);
    }
  }
  return;
}

