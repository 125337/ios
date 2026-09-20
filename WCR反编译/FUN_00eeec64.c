// FUN_00eeec64 @ 00eeec64

void FUN_00eeec64(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_98;
  cfstringStruct *local_48;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  pcVar1 = &cf_video_call;
  FUN_00ef5110();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  if (((ulong)local_48 & 1) == 0) {
    pcVar2 = &cf_lazycat_storage;
    FUN_00ef5110();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = (cfstringStruct *)((ulong)pcVar1 & 0xffffffff);
    if (((ulong)pcVar1 & 1) == 0) {
      FUN_00efd87c();
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_38 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_98 = local_28;
      }
      else {
        local_98 = local_38;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = local_98;
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_wcr_settings;
      local_2c = 1;
    }
  }
  else {
    pcVar1 = &cf_call;
    FUN_00ef5110();
    _objc_retainAutoreleasedReturnValue();
    local_2c = 1;
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

