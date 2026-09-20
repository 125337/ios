// FUN_00789cf4 @ 00789cf4

bool FUN_00789cf4(double param_1,undefined8 param_2,double param_3,undefined8 param_4,double param_5
                 ,long param_6)

{
  bool local_1;
  
  if (param_6 == 0) {
    if (-param_5 < param_1) {
      local_1 = param_3 < -600.0;
    }
    else {
      local_1 = true;
    }
  }
  else if (param_1 < param_5) {
    local_1 = 600.0 < param_3;
  }
  else {
    local_1 = true;
  }
  return local_1;
}

