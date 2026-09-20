// FUN_01be35e0 @ 01be35e0

double FUN_01be35e0(void)

{
  undefined *puVar1;
  undefined *local_58;
  undefined *local_50;
  undefined *local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentCornerEnabled_026a0148);
  if (((ulong)puVar1 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    local_58 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_momentCornerRadius_026a0178);
    if ((long)local_58 < 1) {
      local_50 = (undefined *)((long)&MACH_HEADER.filetype + 3);
    }
    else {
      if (0x1d < (long)local_58) {
        local_58 = (undefined *)((long)&MACH_HEADER.reserved + 2);
      }
      local_50 = local_58;
    }
    local_18 = (double)(long)local_50;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

