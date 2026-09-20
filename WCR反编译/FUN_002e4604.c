// FUN_002e4604 @ 002e4604

void FUN_002e4604(undefined8 param_1,cfstringStruct *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_60;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_20 = param_1;
  FUN_002e4780();
  if (((ulong)param_2 & 1) == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    FUN_002e47e4();
    if (((ulong)param_2 & 1) == 0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      FUN_002e4a24(local_20);
      _objc_retainAutoreleasedReturnValue();
      local_28 = param_2;
      FUN_002e4e70();
      uVar1 = local_20;
      bVar2 = local_28 != (cfstringStruct *)0x0;
      pcVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fontName_026a1d48);
      _objc_retainAutoreleasedReturnValue();
      local_60 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_60 = &cf_nil;
      }
      FUN_002e4f6c(uVar1,&cf_factory,bVar2,local_60);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar3 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      _objc_storeStrong(&local_28,0);
    }
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

