// swizzleClass:originalSel:swizzledSel: @ 007f2e4c

/* Function Stack Size: 0x28 bytes */

void WCRefineToDoHook::swizzleClass_originalSel_swizzledSel_
               (ID param_1,SEL param_2,CLASS param_3,SEL param_4,SEL param_5)

{
  CLASS CVar1;
  CLASS CVar2;
  CLASS CVar3;
  ID IVar4;
  CLASS local_40;
  
  if (param_3 != 0) {
    local_40 = param_3;
    _class_getInstanceMethod(param_3,param_4);
    _class_getInstanceMethod(param_1,param_5);
    if ((local_40 != 0) && (param_1 != 0)) {
      CVar1 = local_40;
      _method_getImplementation();
      CVar2 = local_40;
      _method_getTypeEncoding(local_40);
      CVar3 = param_3;
      _class_addMethod(param_3,param_4,CVar1,CVar2);
      if ((CVar3 & 1) != 0) {
        local_40 = param_3;
        _class_getInstanceMethod(param_3,param_4);
      }
      IVar4 = param_1;
      _method_getImplementation();
      _method_getTypeEncoding();
      _class_addMethod(param_3,param_5,IVar4,param_1);
      _class_getInstanceMethod(param_3,param_5);
      if ((local_40 != 0) && (param_3 != 0)) {
        _method_exchangeImplementations(local_40,param_3);
      }
    }
  }
  return;
}

