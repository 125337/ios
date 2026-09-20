// hookAddItem: @ 004c2afc

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameMenuSearchItem::hookAddItem_(ID param_1,SEL param_2,CLASS param_3)

{
  undefined *puVar1;
  CLASS CVar2;
  ID IVar3;
  
  puVar1 = PTR_s_WCRefine_addItemWithBtnData_show_026a3f60;
  CVar2 = param_3;
  _class_getInstanceMethod(param_3,PTR_s_addItemWithBtnData_showNew_sel_t_026a3f58);
  _class_getInstanceMethod(param_1,puVar1);
  if ((CVar2 != 0) && (param_1 != 0)) {
    IVar3 = param_1;
    _method_getImplementation();
    _method_getTypeEncoding(param_1);
    _class_addMethod(param_3,puVar1,IVar3,param_1);
    _class_getInstanceMethod(param_3,puVar1);
    if (param_3 != 0) {
      _method_exchangeImplementations(CVar2,param_3);
    }
  }
  return;
}

