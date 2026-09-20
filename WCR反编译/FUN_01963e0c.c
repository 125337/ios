// FUN_01963e0c @ 01963e0c

void FUN_01963e0c(uint param_1)

{
  double dVar1;
  
  dVar1 = (double)NEON_ucvtf((ulong)(param_1 & 0xff));
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)(param_1 >> 0x10 & 0xff) / 255.0,(double)(param_1 >> 8 & 0xff) / 255.0,
             dVar1 / 255.0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  return;
}

