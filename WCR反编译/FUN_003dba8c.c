// FUN_003dba8c @ 003dba8c

void FUN_003dba8c(byte param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_70;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_70;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
  local_39 = false;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  else {
    local_80 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectAtIndexedSubscript__0269cc78,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_80;
  }
  local_39 = pcVar2 != (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_80;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0);
  bVar1 = pcVar2 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2);
  if (bVar1) {
    local_90 = &cf___;
  }
  else {
    local_90 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectAtIndexedSubscript__0269cc78,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_90;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_30,&cf__);
  }
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    _objc_storeStrong(&local_48,&cf__);
  }
  if ((local_11 & 1) == 0) {
    local_a0 = local_30;
  }
  else {
    local_a0 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_a0);
  return;
}

