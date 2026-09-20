// FUN_021bd02c @ 021bd02c

undefined1  [16] FUN_021bd02c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  long unaff_x20;
  undefined8 local_c0;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_38 [24];
  
  plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::fanMenu);
  _swift_beginAccess(plVar1,auStack_38,0x20,0);
  lVar3 = *plVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _swift_endAccess(auStack_38);
  if (lVar3 == 0) {
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_022229a0(param_3,local_c0,unaff_x20);
    (*(code *)PTR__objc_release_02578630)(unaff_x20);
    local_a0 = param_1;
    local_98 = param_2;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    FUN_022229a0(param_3,local_c0,lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_a0 = param_1;
    local_98 = param_2;
  }
  auVar2._8_8_ = local_98;
  auVar2._0_8_ = local_a0;
  return auVar2;
}

