// commitSelectionAt: @ 021dcdac

/* Function Stack Size: 0x20 bytes */

bool WCRSuperFloatFanMenuView::commitSelectionAt_(ID param_1,SEL param_2,CGPoint param_3)

{
  uint uVar1;
  undefined8 in_d0;
  undefined8 in_d1;
  ID IVar2;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_retain_02578638)(param_1,param_2,param_3.field0_0x0,param_3.field1_0x8);
  uVar1 = (uint)IVar2;
  __s8WCRefine24WCRSuperFloatFanMenuViewC15commitSelection2atSbSo7CGPointV_tF(in_d0,in_d1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  uVar1 = uVar1 & 1;
  __s10ObjectiveC22_convertBoolToObjCBoolyAA0eF0VSbF();
  return uVar1 & 1;
}

