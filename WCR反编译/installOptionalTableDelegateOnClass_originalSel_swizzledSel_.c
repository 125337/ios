// installOptionalTableDelegateOnClass:originalSel:swizzledSel: @ 0037619c

/* Function Stack Size: 0x28 bytes */

void WCRefineHomeSessionGroupingHook::installOptionalTableDelegateOnClass_originalSel_swizzledSel_
               (ID param_1,SEL param_2,CLASS param_3,SEL param_4,SEL param_5)

{
  CLASS CVar1;
  ID IVar2;
  ID IVar3;
  
  CVar1 = param_3;
  _class_getInstanceMethod(param_3,param_4);
  IVar2 = param_1;
  _class_getInstanceMethod(param_1,param_5);
  if (IVar2 != 0) {
    if (CVar1 == 0) {
      IVar3 = IVar2;
      _method_getImplementation();
      _method_getTypeEncoding(IVar2);
      _class_addMethod(param_3,param_4,IVar3,IVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_swizzleClass_originalSel_swizzle_026a2330,param_3,param_4,param_5);
    }
  }
  return;
}

