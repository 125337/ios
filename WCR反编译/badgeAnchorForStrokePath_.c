// badgeAnchorForStrokePath: @ 01658824

/* Function Stack Size: 0x18 bytes */

CGPoint WCRSuperFloatCropViewController::badgeAnchorForStrokePath_
                  (ID param_1,SEL param_2,CGPath *param_3)

{
  CGPoint CVar1;
  double in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_20;
  undefined8 local_18;
  
  if (param_3 == (CGPath *)0x0) {
    local_18 = 24.0;
    local_20 = 24.0;
    FUN_0164494c();
  }
  else {
    _CGPathGetPathBoundingBox(param_3);
    local_20 = in_d0;
    _CGRectGetMinX(in_d0,in_d1,in_d2,in_d3);
    local_20 = local_20 - 2.0;
    _CGRectGetMinY(in_d0,in_d1,in_d2,in_d3);
    local_18 = in_d0 - 2.0;
    FUN_0164494c();
  }
  CVar1.field1_0x8 = local_18;
  CVar1.field0_0x0 = local_20;
  return CVar1;
}

