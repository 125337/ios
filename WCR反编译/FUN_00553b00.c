// FUN_00553b00 @ 00553b00

char * FUN_00553b00(long param_1)

{
  char *local_88;
  char *local_80;
  char *local_70;
  char *local_20;
  long local_18;
  
  local_70 = PTR_WCRefineConfig_026cdf58;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = local_70;
  if (local_18 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_momentsAutoLikeInterval_026a4f68);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_momentsAutoCommentInterval_026a4f70);
  }
  if ((long)local_70 < 0x259) {
    local_80 = local_70;
  }
  else {
    local_80 = section_00000248.segname;
  }
  if ((long)local_80 < 3) {
    local_88 = (char *)((long)&MACH_HEADER.magic + 2);
  }
  else {
    local_88 = local_80;
  }
  _objc_storeStrong(&local_20,0);
  return local_88;
}

