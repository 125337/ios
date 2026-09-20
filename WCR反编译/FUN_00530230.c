// FUN_00530230 @ 00530230

void FUN_00530230(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_00531a98();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    FUN_00531f90(pcVar1,&cf_m_nsRemark);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00530928();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

