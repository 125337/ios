// addClearUnreadTapMethodToClass: @ 0016d0e4

/* Function Stack Size: 0x18 bytes */

void WCRefineClearUnreadMsgHook::addClearUnreadTapMethodToClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  undefined *puVar1;
  ID IVar2;
  
  puVar1 = PTR_s_WCRefine_onClearUnreadMsg_0269f898;
  _class_getInstanceMethod(param_1,PTR_s_WCRefine_onClearUnreadMsg_0269f898);
  if (param_1 != 0) {
    IVar2 = param_1;
    _method_getImplementation();
    _method_getTypeEncoding();
    _class_addMethod(param_3,puVar1,IVar2,param_1);
  }
  return;
}

