// FUN_016c3560 @ 016c3560

void FUN_016c3560(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_98;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_016c2eb0();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
    pcVar1 = local_28;
    if (((ulong)pcVar2 & 1) == 0) {
      FUN_016c37ec();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        local_98 = local_28;
      }
      else {
        local_98 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
        _objc_retainAutoreleasedReturnValue();
        local_48 = local_98;
      }
      local_49 = pcVar2 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      if (local_49) {
        (*(code *)PTR__objc_release_02578630)(local_48);
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

