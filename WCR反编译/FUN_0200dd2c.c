// FUN_0200dd2c @ 0200dd2c

void FUN_0200dd2c(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar2 = local_20;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_2c = 1;
    goto LAB_0200df1c;
  }
  FUN_0219cf5c();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
  pcVar1 = local_28;
  if (pcVar2 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_2c = 1;
  }
  else {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_2c = 1;
      local_18 = pcVar2;
    }
    else {
      pcVar2 = local_28;
      FUN_0219ccbc();
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar2;
      if (pcVar2 == (cfstringStruct *)0x0) {
LAB_0200dea0:
        pcVar2 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar2;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
        if (pcVar2 == (cfstringStruct *)0x0) goto LAB_0200dea0;
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_stringByAppendingPathComponent__026cab30,local_40);
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
      }
      local_2c = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_38,0);
LAB_0200df1c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

