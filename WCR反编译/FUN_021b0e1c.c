// FUN_021b0e1c @ 021b0e1c

/* WARNING: Removing unreachable block (ram,0x021b10f4) */

double FUN_021b0e1c(double param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  double local_2a8;
  double local_208;
  undefined8 local_1e0;
  long local_30;
  
  uVar1 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = uVar1;
  FUN_022228e0(uVar1,local_1e0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::quickChatAvatarHost);
    (*(code *)PTR__objc_retain_02578638)();
    FUN_02222060(uVar4,local_1e0);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    FUN_02222240(uVar3,local_1e0,unaff_x20);
    _swift_unknownObjectRelease(unaff_x20);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_208 = param_1;
  }
  else {
    lVar5 = *(long *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
    (*(code *)PTR__objc_retain_02578638)();
    lVar6 = lVar5;
    FUN_02221fa0(lVar5,local_1e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(lVar5);
    local_30 = lVar6;
    if (lVar6 == 0) {
      FUN_021c8208(&local_30);
      local_2a8 = 0.0;
      local_208 = DAT_02323d38;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      FUN_021c8208(&local_30);
      lVar5 = lVar6;
      FUN_02221d00(lVar6,local_1e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(lVar6);
      _CGColorGetAlpha(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      local_2a8 = param_1;
      local_208 = DAT_02323d38;
    }
    DAT_02323d38 = local_208;
    if (local_208 < local_2a8) {
      uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
      (*(code *)PTR__objc_retain_02578638)();
      FUN_02222060(uVar4,local_1e0);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_retain_02578638)(unaff_x20);
      FUN_02222240(uVar3,local_1e0,unaff_x20);
      _swift_unknownObjectRelease(unaff_x20);
      (*(code *)PTR__objc_release_02578630)(uVar3);
    }
    else {
      uVar1 = *(ulong *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
      (*(code *)PTR__objc_retain_02578638)();
      uVar2 = uVar1;
      FUN_022228e0(uVar1,local_1e0);
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::iconView);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02222060(uVar4,local_1e0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        FUN_02222240(uVar3,local_1e0,unaff_x20);
        _swift_unknownObjectRelease(unaff_x20);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      else {
        uVar3 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
        (*(code *)PTR__objc_retain_02578638)();
        uVar4 = *(undefined8 *)(unaff_x20 + WCRSuperFloatBallWindow::ballContainer);
        (*(code *)PTR__objc_retain_02578638)();
        FUN_02222060(uVar4,local_1e0);
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_retain_02578638)(unaff_x20);
        FUN_02222240(uVar3,local_1e0,unaff_x20);
        _swift_unknownObjectRelease(unaff_x20);
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
    }
  }
  return local_208;
}

