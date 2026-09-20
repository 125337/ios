// FUN_00064d60 @ 00064d60

cfstringStruct * FUN_00064d60(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_c0;
  cfstringStruct *local_48 [3];
  cfstringStruct *local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_c0 = &cf_5;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_c0;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  local_48[0] = pcVar2;
  FUN_0006171c();
  bVar1 = false;
  if ((uVar4 & 1) != 0) {
    pcVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
    bVar1 = (cfstringStruct *)((long)&MACH_HEADER.magic + 1) < pcVar2;
  }
  pcVar2 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_count_0269cfe0);
  if ((cfstringStruct *)(long)(int)(uint)bVar1 < pcVar2) {
    pcVar2 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_objectAtIndexedSubscript__0269cc78,
               (cfstringStruct *)(long)(int)(uint)bVar1);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    local_108 = (cfstringStruct *)((long)&MACH_HEADER.cputype + 1);
    local_118 = local_108;
  }
  if (0x7ffffffffffffffe < (long)local_118) {
    local_118 = (cfstringStruct *)0x7fffffffffffffff;
  }
  if ((long)local_118 < 1) {
    local_120 = (cfstringStruct *)0x0;
  }
  else {
    local_120 = local_118;
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return local_120;
}

