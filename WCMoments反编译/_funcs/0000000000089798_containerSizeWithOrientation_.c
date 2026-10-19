// containerSizeWithOrientation: @0x89798

/* Function Stack Size: 0x18 bytes */

CGSize WCMYBIBScreenRotationHandler::containerSizeWithOrientation_
                 (ID param_1,SEL param_2,long_long param_3)

{
  CGSize CVar1;
  ulong uVar2;
  undefined8 local_20;
  undefined8 uStack_18;
  
  uVar2 = _UIDeviceOrientationIsLandscape(param_3);
  if ((uVar2 & 1) == 0) {
    uStack_18 = *(double *)(param_1 + 0x18);
    local_20 = *(double *)(param_1 + 0x10);
  }
  else {
    uStack_18 = *(double *)(param_1 + 0x28);
    local_20 = *(double *)(param_1 + 0x20);
  }
  CVar1.field1_0x8 = uStack_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

