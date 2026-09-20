// FUN_001a9e0c @ 001a9e0c

void FUN_001a9e0c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  _NSSelectorFromString();
  local_30 = lVar1;
  if (((local_20 == (cfstringStruct *)0x0) || (lVar1 == 0)) ||
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,lVar1),
     ((ulong)pcVar2 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_40 = 1;
  }
  else {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar2;
    FUN_001a81d4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

