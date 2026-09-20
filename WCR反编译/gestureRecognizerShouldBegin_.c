// gestureRecognizerShouldBegin: @ 021c10c8

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatBallWindow::gestureRecognizerShouldBegin_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ID IVar2;
  
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  IVar2 = param_3;
  __s8WCRefine23WCRSuperFloatBallWindowC28gestureRecognizerShouldBeginySbSo09UIGestureG0CF();
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(param_3);
  uVar1 = (uint)IVar2 & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

