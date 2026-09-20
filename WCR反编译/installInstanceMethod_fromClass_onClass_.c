// installInstanceMethod:fromClass:onClass: @ 004c2cac

/* Function Stack Size: 0x28 bytes */

void WCRefineMainFrameMenuSearchItem::installInstanceMethod_fromClass_onClass_
               (ID param_1,SEL param_2,SEL param_3,CLASS param_4,CLASS param_5)

{
  CLASS CVar1;
  CLASS CVar2;
  
  _class_getInstanceMethod(param_4,param_3);
  if (param_4 != 0) {
    CVar1 = param_4;
    _method_getImplementation();
    _method_getTypeEncoding();
    CVar2 = param_5;
    _class_addMethod(param_5,param_3,CVar1,param_4);
    if (((CVar2 & 1) == 0) && (_class_getInstanceMethod(param_5,param_3), param_5 != 0)) {
      _method_setImplementation(param_5,CVar1);
    }
  }
  return;
}

