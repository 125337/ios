// FUN_0220e63c @ 0220e63c

double FUN_0220e63c(undefined8 param_1,undefined8 param_2)

{
  double local_60;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  undefined8 local_28;
  
  local_30 = 0.0;
  local_40 = 0x3ff0000000000000;
  local_38 = param_1;
  local_28 = param_1;
  FUN_0220f0a4();
  __sSFsE19truncatingRemainder10dividingByxx_tF
            (&local_30,&local_40,PTR___s12CoreGraphics7CGFloatVN_02578ba0,param_2);
  if (0.0 <= local_30) {
    local_60 = local_30;
  }
  else {
    local_60 = local_30 + 1.0;
  }
  return local_60;
}

