// configContainerSize: @0x89678

/* Function Stack Size: 0x20 bytes */

void WCMYBIBScreenRotationHandler::configContainerSize_(ID param_1,SEL param_2,CGSize param_3)

{
  ulong uVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = param_3.field1_0x8;
  dVar2 = param_3.field0_0x0;
  _objc_msgSend_currentOrientation(param_1);
  uVar1 = _UIDeviceOrientationIsLandscape();
  if ((uVar1 & 1) == 0) {
    *(double *)(param_1 + 0x18) = dVar4;
    *(double *)(param_1 + 0x10) = dVar2;
    uVar3 = _CGSizeMake(dVar4);
    *(double *)(param_1 + 0x28) = dVar2;
    *(undefined8 *)(param_1 + 0x20) = uVar3;
  }
  else {
    dVar5 = dVar2;
    uVar3 = _CGSizeMake(dVar4);
    *(double *)(param_1 + 0x18) = dVar5;
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(double *)(param_1 + 0x28) = dVar4;
    *(double *)(param_1 + 0x20) = dVar2;
  }
  return;
}

