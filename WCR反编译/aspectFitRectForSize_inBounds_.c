// aspectFitRectForSize:inBounds: @ 0196d3bc

/* Function Stack Size: 0x40 bytes */

CGRect WCRefineFileManagerPreviewViewController::aspectFitRectForSize_inBounds_
                 (ID param_1,SEL param_2,CGSize param_3,CGRect param_4)

{
  CGRect CVar1;
  double in_d0;
  double in_d1;
  double in_d2;
  double in_d3;
  double in_d4;
  double in_d5;
  double local_b8;
  double local_30;
  double dStack_28;
  double local_20;
  double dStack_18;
  
  local_30 = in_d2;
  dStack_28 = in_d3;
  local_20 = in_d4;
  dStack_18 = in_d5;
  if ((((0.0 < in_d0) && (0.0 < in_d1)) && (0.0 < in_d4)) && (0.0 < in_d5)) {
    local_b8 = in_d5 / in_d1;
    if (in_d4 / in_d0 < local_b8) {
      local_b8 = in_d4 / in_d0;
    }
    local_20 = in_d0 * local_b8;
    dStack_18 = in_d1 * local_b8;
    FUN_0195e30c(param_1,param_2,param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0.field0_0x0
                 ,param_4.field0_0x0.field1_0x8,param_4.field1_0x10.field0_0x0,
                 param_4.field1_0x10.field1_0x8);
    _CGRectGetMinX(in_d2,in_d3,in_d4,in_d5);
    local_30 = local_30 + (in_d4 - local_20) * 0.5;
    _CGRectGetMinY(in_d2,in_d3,in_d4,in_d5);
    dStack_28 = in_d2 + (in_d5 - dStack_18) * 0.5;
    FUN_0196d370();
  }
  CVar1.field0_0x0.field1_0x8 = dStack_28;
  CVar1.field0_0x0.field0_0x0 = local_30;
  CVar1.field1_0x10.field0_0x0 = local_20;
  CVar1.field1_0x10.field1_0x8 = dStack_18;
  return CVar1;
}

