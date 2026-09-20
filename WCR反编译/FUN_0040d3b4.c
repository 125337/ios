// FUN_0040d3b4 @ 0040d3b4

void FUN_0040d3b4(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  undefined8 uVar2;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar1 = local_20;
  FUN_0040f3ac();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
  }
  else {
    pcVar1 = local_30;
    FUN_0040f778();
    local_18 = local_30;
    if (((ulong)pcVar1 & 1) == 0) {
      uVar2 = local_28;
      FUN_0040cccc(local_28,&cf_stripIdentifiers);
      _objc_retainAutoreleasedReturnValue();
      FUN_0040fcf0();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

