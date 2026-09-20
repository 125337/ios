// FUN_00145078 @ 00145078

double FUN_00145078(void)

{
  char *pcVar1;
  char *local_18;
  
  pcVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  if ((long)local_18 < -0x28) {
    local_18 = (char *)0xffffffffffffffd8;
  }
  if (0x28 < (long)local_18) {
    local_18 = segment_command_00000020.segname;
  }
  return (double)(long)local_18;
}

