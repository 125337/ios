// pointInside:withEvent: @ 021b277c

/* Function Stack Size: 0x28 bytes */

bool __thiscall
WCRSuperFloatBallWindow::pointInside_withEvent_
          (WCRSuperFloatBallWindow *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  uint uVar1;
  double dVar2;
  undefined8 in_d0;
  undefined8 in_d1;
  
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)(param_1);
  dVar2 = param_3.field0_0x0;
  __s8WCRefine23WCRSuperFloatBallWindowC5point6inside4withSbSo7CGPointV_So7UIEventCSgtF(in_d0,in_d1)
  ;
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(param_3.field0_0x0);
  uVar1 = SUB84(dVar2,0) & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

