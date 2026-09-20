// FUN_009d3d1c @ 009d3d1c

void FUN_009d3d1c(long param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *local_58;
  cfstringStruct *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar1 = (cfstringStruct *)(param_1 + 0x28);
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = pcVar1;
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_finished_026a15b0),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_invalidate_026ca758);
  }
  else {
    lVar3 = *(long *)(param_1 + 0x20);
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_currentProgressState_026aaf70);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_58 = &cf_generating;
    }
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_startedAt_026aaf78);
    _objc_retainAutoreleasedReturnValue();
    FUN_009d3ebc();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar3 + 0x10))();
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

