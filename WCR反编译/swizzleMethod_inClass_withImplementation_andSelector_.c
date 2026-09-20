// swizzleMethod:inClass:withImplementation:andSelector: @ 0092286c

/* Function Stack Size: 0x30 bytes */

void WCNavigationMonitor::swizzleMethod_inClass_withImplementation_andSelector_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,undefined4 *param_5,SEL param_6)

{
  CLASS CVar1;
  CLASS CVar2;
  CLASS CVar3;
  
  CVar1 = param_4;
  _class_getInstanceMethod(param_4,param_3);
  if (CVar1 != 0) {
    CVar2 = CVar1;
    _method_getTypeEncoding();
    CVar3 = param_4;
    _class_addMethod(param_4,param_6,param_5,CVar2);
    if ((CVar3 & 1) == 0) {
      _class_getInstanceMethod(param_4,param_6);
      if (param_4 != 0) {
        _method_exchangeImplementations(CVar1,param_4);
      }
    }
    else {
      _class_getInstanceMethod(param_4,param_6);
      _method_exchangeImplementations(CVar1,param_4);
    }
  }
  return;
}

