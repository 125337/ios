// offsetLimitsForTag:min:max: @ 019ef54c

/* Function Stack Size: 0x28 bytes */

void WCRefineFontConvertViewController::offsetLimitsForTag_min_max_
               (ID param_1,SEL param_2,long_long param_3,long_long *param_4,long_long *param_5)

{
  if (param_3 == 1) {
    if (param_4 != (long_long *)0x0) {
      *param_4 = 0xfffffffffffffc7c;
    }
    if (param_5 != (long_long *)0x0) {
      *param_5 = 900;
    }
  }
  else if (param_3 - 2 < 2) {
    if (param_4 != (long_long *)0x0) {
      *param_4 = 0xfffffffffffffe0c;
    }
    if (param_5 != (long_long *)0x0) {
      *param_5 = 500;
    }
  }
  else if (param_3 == 4) {
    if (param_4 != (long_long *)0x0) {
      *param_4 = 0xffffffffffffffce;
    }
    if (param_5 != (long_long *)0x0) {
      *param_5 = 0x32;
    }
  }
  else {
    if (param_4 != (long_long *)0x0) {
      *param_4 = 0xfffffffffffffe0c;
    }
    if (param_5 != (long_long *)0x0) {
      *param_5 = 500;
    }
  }
  return;
}

