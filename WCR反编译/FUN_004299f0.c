// FUN_004299f0 @ 004299f0

void FUN_004299f0(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined4 local_38;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  local_28 = param_2;
  FUN_00429ce0();
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_20;
    FUN_0040494c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_40, FUN_0040f778(), pcVar1 = local_40, ((ulong)pcVar2 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

