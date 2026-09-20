// hitTest:withEvent: @ 021b3900

/* Function Stack Size: 0x28 bytes */

ID __thiscall
WCRSuperFloatBallWindow::hitTest_withEvent_
          (WCRSuperFloatBallWindow *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  double dVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  dVar1 = param_3.field0_0x0;
  __s8WCRefine23WCRSuperFloatBallWindowC7hitTest_4withSo6UIViewCSgSo7CGPointV_So7UIEventCSgtF
            (in_d0,in_d1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(param_3.field0_0x0);
  _objc_autoreleaseReturnValue();
  return (ID)dVar1;
}

