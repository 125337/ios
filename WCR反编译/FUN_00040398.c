// FUN_00040398 @ 00040398

void FUN_00040398(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  uint local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__e;
    local_38 = 1;
    goto LAB_00040648;
  }
  pcVar2 = local_20;
  FUN_000370d0();
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_00040558:
    pcVar3 = local_28;
    FUN_000408b8();
    _objc_retainAutoreleasedReturnValue();
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar2 = local_50;
    if (pcVar3 == (cfstringStruct *)0x0) {
      pcVar2 = local_28;
      FUN_0004069c(0);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar2;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_38 = 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    pcVar3 = local_40;
    FUN_000412c0(local_40,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_length_0269cca0);
    pcVar2 = local_48;
    bVar1 = pcVar3 != (cfstringStruct *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_38 = (uint)bVar1;
    _objc_storeStrong(bVar1,&local_48,0);
    if (local_38 == 0) goto LAB_00040558;
  }
  _objc_storeStrong(&local_40,0);
LAB_00040648:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

