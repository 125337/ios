// wcr_sidebarFrameInWindow @ 015e61e8

/* Function Stack Size: 0x10 bytes */

CGRect WCRQuickChatWindow::wcr_sidebarFrameInWindow(ID param_1,SEL param_2)

{
  CGRect CVar1;
  ID IVar2;
  ID IVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  double in_d3;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  double dStack_18;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 == 0) {
    uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
    local_30 = *(undefined8 *)PTR__CGRectZero_025782f0;
    dStack_18 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_20 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
  }
  else {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_sidebar_026b1168);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_convertRect_toView__0269ded8,param_1);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_30 = in_d0;
    uStack_28 = in_d1;
    local_20 = in_d2;
    dStack_18 = in_d3;
  }
  CVar1.field0_0x0.field1_0x8 = (double)uStack_28;
  CVar1.field0_0x0.field0_0x0 = (double)local_30;
  CVar1.field1_0x10.field0_0x0 = (double)local_20;
  CVar1.field1_0x10.field1_0x8 = dStack_18;
  return CVar1;
}

