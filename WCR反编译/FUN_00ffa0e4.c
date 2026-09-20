// FUN_00ffa0e4 @ 00ffa0e4

double FUN_00ffa0e4(double param_1)

{
  dword *pdVar1;
  dword *local_30;
  dword *local_28;
  double local_20;
  double local_18;
  
  pdVar1 = (dword *)PTR_WCRefineConfig_026cdf58;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = &segment_command_00000020.flags;
  local_28 = pdVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pdVar1,PTR_s_avatarCornerEnabled_0269dfb8);
  if (((ulong)pdVar1 & 1) != 0) {
    local_30 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_avatarCornerRadius_0269dfc0);
  }
  if ((long)local_30 < 0) {
    local_30 = (dword *)0x0;
  }
  else if (100 < (long)local_30) {
    local_30 = &segment_command_00000020.flags;
  }
  if (local_30 == (dword *)0x0) {
    local_18 = 0.0;
  }
  else if ((long)local_30 < 100) {
    local_18 = local_20 * 0.5 * ((double)(long)local_30 / 100.0);
  }
  else {
    local_18 = local_20 * 0.5;
  }
  _objc_storeStrong(&local_28,0);
  return local_18;
}

