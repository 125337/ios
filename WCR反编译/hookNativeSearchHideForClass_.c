// hookNativeSearchHideForClass: @ 004c7630

/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::hookNativeSearchHideForClass_
               (ID param_1,SEL param_2,CLASS param_3)

{
  CLASS CVar1;
  ID IVar2;
  ID IVar3;
  CLASS CVar4;
  undefined *puVar5;
  int local_f4;
  undefined *local_60 [4];
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  puVar5 = PTR_s_WCRefine_viewWillAppear__026a4048;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  CVar1 = param_3;
  _class_getInstanceMethod(param_3,PTR_s_viewWillAppear__0269cd48);
  IVar2 = param_1;
  _class_getInstanceMethod(param_1,puVar5);
  if ((CVar1 != 0) && (IVar2 != 0)) {
    IVar3 = IVar2;
    _method_getImplementation();
    _method_getTypeEncoding(IVar2);
    _class_addMethod(param_3,puVar5,IVar3,IVar2);
    CVar4 = param_3;
    _class_getInstanceMethod(param_3,puVar5);
    if (CVar4 != 0) {
      _method_exchangeImplementations(CVar1,CVar4);
    }
  }
  puVar5 = PTR_s_WCRefine_viewDidLayoutSubviews_026a4050;
  CVar1 = param_3;
  _class_getInstanceMethod(param_3,PTR_s_viewDidLayoutSubviews_0269de90);
  IVar2 = param_1;
  _class_getInstanceMethod(param_1,puVar5);
  if ((CVar1 != 0) && (IVar2 != 0)) {
    IVar3 = IVar2;
    _method_getImplementation();
    _method_getTypeEncoding(IVar2);
    _class_addMethod(param_3,puVar5,IVar3,IVar2);
    CVar4 = param_3;
    _class_getInstanceMethod(param_3,puVar5);
    if (CVar4 != 0) {
      _method_exchangeImplementations(CVar1,CVar4);
    }
  }
  puVar5 = PTR_s_WCRefine_setSearchBarToTableHead_026a4058;
  CVar1 = param_3;
  _class_getInstanceMethod(param_3,PTR_s_setSearchBarToTableHeaderView_0269fe30);
  IVar2 = param_1;
  _class_getInstanceMethod(param_1,puVar5);
  if ((CVar1 != 0) && (IVar2 != 0)) {
    IVar3 = IVar2;
    _method_getImplementation();
    _method_getTypeEncoding(IVar2);
    _class_addMethod(param_3,puVar5,IVar3,IVar2);
    CVar4 = param_3;
    _class_getInstanceMethod(param_3,puVar5);
    if (CVar4 != 0) {
      _method_exchangeImplementations(CVar1,CVar4);
    }
  }
  local_60[0] = PTR_s_WCRefine_removeNativeSearchBar_026a4060;
  local_60[1] = PTR_s_WCRefine_restoreNativeSearchBar_026a4068;
  local_60[2] = PTR_s_WCRefine_mainFrameTableView_026a4070;
  local_60[3] = PTR_s_WCRefine_normalizeTopGapIfNeeded_026a4078;
  local_40 = PTR_s_WCRefine_tryEmbedSearchButtonInt_026a4080;
  local_38 = PTR_s_WCRefine_embedSearchButtonInRigh_026a4088;
  local_30 = PTR_s_WCRefine_removeEmbeddedSearchBut_026a4090;
  for (local_f4 = 0; local_f4 < 7; local_f4 = local_f4 + 1) {
    IVar2 = param_1;
    _class_getInstanceMethod(param_1,local_60[local_f4]);
    if (IVar2 != 0) {
      puVar5 = local_60[local_f4];
      IVar3 = IVar2;
      _method_getImplementation();
      _method_getTypeEncoding(IVar2);
      _class_addMethod(param_3,puVar5,IVar3,IVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

