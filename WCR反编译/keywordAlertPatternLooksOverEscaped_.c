// keywordAlertPatternLooksOverEscaped: @ 00f9c40c

/* Function Stack Size: 0x18 bytes */

bool WCRefineHelper::keywordAlertPatternLooksOverEscaped_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  long local_40;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 < 3) {
    local_11 = 0;
  }
  else {
    for (local_40 = 0; *(long *)(&DAT_02583838 + local_40 * 8) != 0; local_40 = local_40 + 1) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_rangeOfString__0269d838,
                 *(undefined8 *)(&DAT_02583838 + local_40 * 8));
      if (uVar1 != 0x7fffffffffffffff) {
        local_11 = 1;
        goto LAB_00f9c520;
      }
    }
    local_11 = 0;
  }
LAB_00f9c520:
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

