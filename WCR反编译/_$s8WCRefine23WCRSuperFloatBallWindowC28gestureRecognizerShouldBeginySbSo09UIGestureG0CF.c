// _$s8WCRefine23WCRSuperFloatBallWindowC28gestureRecognizerShouldBeginySbSo09UIGestureG0CF @ 021c0ec4

bool __s8WCRefine23WCRSuperFloatBallWindowC28gestureRecognizerShouldBeginySbSo09UIGestureG0CF
               (long param_1)

{
  long *plVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined1 local_50;
  undefined1 auStack_48 [24];
  
  local_50 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0;
  _objc_opt_self(PTR__OBJC_CLASS___UIScreenEdgePanGestureRecognizer_026ce2b0);
  lVar5 = param_1;
  _swift_dynamicCastObjCClass(param_1,puVar3);
  if (lVar5 == 0) {
    (*(code *)PTR__objc_release_02578630)(param_1);
    bVar2 = true;
  }
  else {
    (*(code *)PTR__objc_release_02578630)(lVar5);
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    _swift_beginAccess(plVar1,auStack_48,0x20,0);
    lVar4 = *plVar1;
    _swift_endAccess(auStack_48);
    lVar5 = unaff_x20;
    (*(code *)PTR__objc_retain_02578638)();
    if (lVar4 == 1) {
      FUN_021ba1f8(0);
      bVar2 = lVar5 == 2;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      bVar2 = false;
    }
    plVar1 = (long *)(unaff_x20 + WCRSuperFloatBallWindow::triggerMode);
    local_50 = bVar2;
    _swift_beginAccess(plVar1,auStack_68,0x20,0);
    lVar5 = *plVar1;
    _swift_endAccess(auStack_68);
    if (lVar5 == 2) {
      bVar2 = true;
    }
  }
  return bVar2;
}

