// FUN_0073bc1c @ 0073bc1c

void FUN_0073bc1c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_58;
  long local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_30 = 1;
  }
  else {
    FUN_0073a30c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      lVar2 = 9;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar2;
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 == 0) {
        local_18 = (undefined *)0x0;
        local_30 = 1;
      }
      else {
        lVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_stringByAppendingPathComponent__026cab30,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_58 = lVar2;
        FUN_0073bfb0(lVar2);
        puVar1 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_30 = 1;
        local_18 = puVar1;
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_URLByAppendingPathComponent__026a7b98,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      FUN_0073bfb0();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_40;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

