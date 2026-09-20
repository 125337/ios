// frameForPlacement:nickFrame:size:offsetX:offsetY: @ 010e28cc

/* Function Stack Size: 0x58 bytes */

CGRect WCRefineNameplateHelper::frameForPlacement_nickFrame_size_offsetX_offsetY_
                 (ID param_1,SEL param_2,long_long param_3,CGRect param_4,CGSize param_5,
                 double param_6,double param_7)

{
  CGRect CVar1;
  undefined8 in_d2;
  double in_d3;
  double in_d4;
  double in_d5;
  double in_d6;
  double in_d7;
  double local_98;
  double local_90;
  
  param_5.field1_0x8 = param_5.field1_0x8;
  param_5.field0_0x0 = param_5.field0_0x0;
  if (param_3 == 0) {
    local_90 = (param_6 - in_d4) - 2.0;
  }
  else {
    _CGRectGetMaxX(param_3 - 2,param_6,param_7,in_d2,in_d3);
    param_5.field1_0x8 = param_5.field1_0x8;
    param_5.field0_0x0 = param_5.field0_0x0;
    local_90 = param_6 + 2.0;
  }
  local_90 = local_90 + in_d6;
  local_98 = param_7 + (in_d3 - in_d5) * 0.5 + in_d7;
  param_5.field0_0x0 = param_5.field0_0x0;
  FUN_010e1d58();
  CVar1.field0_0x0.field1_0x8 = local_98;
  CVar1.field0_0x0.field0_0x0 = local_90;
  CVar1.field1_0x10.field0_0x0 = in_d4;
  CVar1.field1_0x10.field1_0x8 = in_d5;
  return CVar1;
}

