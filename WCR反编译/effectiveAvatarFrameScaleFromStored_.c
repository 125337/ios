// effectiveAvatarFrameScaleFromStored: @ 0181a62c

/* Function Stack Size: 0x18 bytes */

double WCRefineAvatarCornerBeautifyViewController::effectiveAvatarFrameScaleFromStored_
                 (ID param_1,SEL param_2,double param_3)

{
  double local_8;
  
  if ((param_3 <= 0.0) || (5.0 < param_3)) {
    local_8 = 1.5;
  }
  else {
    local_8 = param_3;
    if (param_3 < DAT_02323ca0) {
      local_8 = DAT_02323ca0;
    }
  }
  return local_8;
}

