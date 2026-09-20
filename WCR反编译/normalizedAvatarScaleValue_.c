// normalizedAvatarScaleValue: @ 01810908

/* Function Stack Size: 0x18 bytes */

double WCRefineAvatarCornerBeautifyViewController::normalizedAvatarScaleValue_
                 (ID param_1,SEL param_2,double param_3)

{
  double local_20;
  double local_8;
  
  if (0.0 < param_3) {
    local_20 = param_3;
    if (param_3 < DAT_02323ca0) {
      local_20 = DAT_02323ca0;
    }
    if (5.0 < local_20) {
      local_20 = 5.0;
    }
    local_8 = local_20;
  }
  else {
    local_8 = 1.0;
  }
  return local_8;
}

