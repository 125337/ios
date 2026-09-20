// FUN_01d559b8 @ 01d559b8

undefined1  [16]
FUN_01d559b8(double param_1,double param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7)

{
  undefined1 auVar1 [16];
  double dVar2;
  double local_10;
  double local_8;
  
  local_10 = param_6;
  local_8 = param_7;
  if ((2.0 <= param_1) && (dVar2 = param_1 * param_4 - param_2 * param_2, DAT_0232c3a0 < ABS(dVar2))
     ) {
    local_10 = (param_1 * param_5 - param_2 * param_3) / dVar2;
    local_8 = (param_3 - param_2 * local_10) / param_1;
  }
  auVar1._8_8_ = local_8;
  auVar1._0_8_ = local_10;
  return auVar1;
}

