// snappedExtraButtonOffsetValue:forTag: @ 019b5208

/* Function Stack Size: 0x20 bytes */

double WCRefineFloatingTabBarButtonActionViewController::snappedExtraButtonOffsetValue_forTag_
                 (ID param_1,SEL param_2,double param_3,long_long param_4)

{
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_28;
  
  if ((param_4 == 0x1f7) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR_s_isExtraButtonIconSizeSliderTag__026ba8c8,param_4), (param_1 & 1) != 0
     )) {
    local_e0 = param_3;
    if (param_3 <= -20.0) {
      local_e0 = -20.0;
    }
    if (local_e0 <= 20.0) {
      local_e8 = local_e0;
    }
    else {
      local_e8 = 20.0;
    }
    local_28 = (double)(float)(int)local_e8;
  }
  else if (param_4 == 0x1f5) {
    local_f0 = param_3;
    if (param_3 <= -250.0) {
      local_f0 = -250.0;
    }
    if (local_f0 <= 250.0) {
      local_f8 = local_f0;
    }
    else {
      local_f8 = 250.0;
    }
    local_28 = (double)(float)(int)local_f8;
  }
  else {
    local_100 = param_3;
    if (param_3 <= -80.0) {
      local_100 = -80.0;
    }
    if (local_100 <= 80.0) {
      local_108 = local_100;
    }
    else {
      local_108 = 80.0;
    }
    local_28 = (double)(float)(int)local_108;
  }
  return local_28;
}

