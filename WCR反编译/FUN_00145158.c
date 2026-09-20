// FUN_00145158 @ 00145158

double FUN_00145158(void)

{
  qword *pqVar1;
  qword *local_18;
  
  pqVar1 = (qword *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pqVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pqVar1);
  if ((long)local_18 < -0x50) {
    local_18 = (qword *)0xffffffffffffffb0;
  }
  if (0x50 < (long)local_18) {
    local_18 = &segment_command_00000020.filesize;
  }
  return (double)(long)local_18;
}

