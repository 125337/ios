// overlapRatioBetweenRect:rect: @ 01d51bb4

/* Function Stack Size: 0x50 bytes */

double WCRefineScreenshotFrameEditorViewController::overlapRatioBetweenRect_rect_
                 (ID param_1,SEL param_2,CGRect param_3,CGRect param_4)

{
  uint uVar1;
  double in_d0;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 in_d1;
  undefined8 uVar5;
  undefined8 in_d2;
  undefined8 uVar6;
  undefined8 in_d3;
  undefined8 uVar7;
  double in_d4;
  undefined8 in_d5;
  undefined8 in_d6;
  undefined8 in_d7;
  double local_e0;
  double local_18;
  
  param_4.field0_0x0.field1_0x8 = param_4.field0_0x0.field1_0x8;
  param_4.field0_0x0.field0_0x0 = param_4.field0_0x0.field0_0x0;
  uVar1 = (uint)param_1;
  _CGRectIsNull(in_d0,in_d1,in_d2,in_d3,uVar1,param_2,param_3.field0_0x0.field0_0x0,
                param_3.field0_0x0.field1_0x8,param_3.field1_0x10.field0_0x0,
                param_3.field1_0x10.field1_0x8,param_4.field0_0x0.field0_0x0,
                param_4.field0_0x0.field1_0x8);
  if (((((uVar1 & 1) == 0) && (_CGRectIsNull(in_d4,in_d5,in_d6,in_d7), (uVar1 & 1) == 0)) &&
      (_CGRectIsEmpty(in_d0,in_d1,in_d2,in_d3), (uVar1 & 1) == 0)) &&
     (_CGRectIsEmpty(in_d4,in_d5,in_d6,in_d7), (uVar1 & 1) == 0)) {
    dVar2 = in_d0;
    uVar5 = in_d1;
    uVar6 = in_d2;
    uVar7 = in_d3;
    _CGRectIntersection();
    _CGRectIsNull(dVar2,uVar5,uVar6,uVar7);
    if (((uVar1 & 1) == 0) && (_CGRectIsEmpty(dVar2,uVar5,uVar6,uVar7), (uVar1 & 1) == 0)) {
      dVar3 = dVar2;
      _CGRectGetWidth(dVar2,uVar5,uVar6,uVar7);
      _CGRectGetHeight(dVar2,uVar5,uVar6,uVar7);
      dVar4 = in_d0;
      _CGRectGetWidth(in_d0,in_d1,in_d2,in_d3);
      _CGRectGetHeight(in_d0,in_d1,in_d2,in_d3);
      local_e0 = in_d4;
      _CGRectGetWidth(in_d4,in_d5,in_d6,in_d7);
      _CGRectGetHeight(in_d4,in_d5,in_d6,in_d7);
      local_e0 = local_e0 * in_d4;
      if (dVar4 * in_d0 < local_e0) {
        local_e0 = dVar4 * in_d0;
      }
      if (0.0 < local_e0) {
        local_18 = (dVar3 * dVar2) / local_e0;
      }
      else {
        local_18 = 0.0;
      }
    }
    else {
      local_18 = 0.0;
    }
  }
  else {
    local_18 = 0.0;
  }
  return local_18;
}

