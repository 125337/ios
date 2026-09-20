// FUN_004094b8 @ 004094b8

void FUN_004094b8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_40 [3];
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_004055cc(local_20,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_28 = pcVar1;
  FUN_004055cc(local_20,&cf_senderUserName);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  local_40[0] = pcVar2;
  FUN_0040a974();
  pcVar1 = local_28;
  if (((ulong)pcVar3 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  else {
    pcVar1 = local_20;
    FUN_0040aa48();
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
      if (pcVar1 != (cfstringStruct *)0x0) {
        pcVar2 = local_40[0];
        FUN_0040a974(pcVar1);
        pcVar1 = local_40[0];
        if (((ulong)pcVar2 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
          goto LAB_0040968c;
        }
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
  }
LAB_0040968c:
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

