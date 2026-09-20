// FUN_01577a38 @ 01577a38

void FUN_01577a38(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (cfstringStruct *)0x0;
  }
  else {
    pcVar1 = &cf_ContactSettingViewController;
    _NSClassFromString();
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_18 = (cfstringStruct *)0x0;
    }
    else {
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_instancesRespondToSelector__0269da90,PTR_s_initWithContact__0269ff98);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_instancesRespondToSelector__0269da90,
                   PTR_s_initWithContact_inScene__026b06d0);
        if (((ulong)pcVar2 & 1) == 0) {
          local_18 = (cfstringStruct *)0x0;
        }
        else {
          _objc_alloc();
          pcVar2 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_18 = pcVar2;
          (*(code *)PTR__objc_release_02578630)(pcVar1);
        }
      }
      else {
        _objc_alloc();
        pcVar2 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_18 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

