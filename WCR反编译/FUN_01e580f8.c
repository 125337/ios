// FUN_01e580f8 @ 01e580f8

double FUN_01e580f8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   double param_5,byte param_6)

{
  undefined8 local_30;
  
  if ((param_6 & 1) == 0) {
    _CGRectGetMinX(param_1,param_2,param_3,param_4);
    local_30 = (param_1 - 8.0) - param_5;
  }
  else {
    _CGRectGetMaxX(param_1,param_2,param_3,param_4);
    local_30 = param_1 + 8.0;
  }
  return local_30;
}

