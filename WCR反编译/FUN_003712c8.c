// FUN_003712c8 @ 003712c8

void FUN_003712c8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pinnedAreaTakenOver_026a2e90);
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pinnedSessionSignature_026a25f0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_38;
  }
  else {
    local_38 = &cf_grouped;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_38;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

