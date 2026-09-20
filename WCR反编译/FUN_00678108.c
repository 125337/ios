// FUN_00678108 @ 00678108

void FUN_00678108(undefined8 param_1,long param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (((local_20 == (cfstringStruct *)0x0) || (param_2 == 0)) ||
     (pcVar1 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,param_2),
     ((ulong)pcVar1 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,param_2);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00678300();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

