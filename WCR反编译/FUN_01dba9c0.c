// FUN_01dba9c0 @ 01dba9c0

void FUN_01dba9c0(double param_1)

{
  double local_58;
  double local_50;
  
  local_50 = param_1;
  if (1.0 < param_1) {
    local_50 = 1.0;
  }
  if (local_50 <= 0.0) {
    local_58 = 0.0;
  }
  else {
    local_58 = local_50;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c68 + local_58 * 0.5,DAT_02332e48 + local_58 * DAT_02324020,
             DAT_02323d48 + local_58 * DAT_0233a408,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  return;
}

