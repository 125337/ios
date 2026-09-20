// FUN_01548f14 @ 01548f14

void FUN_01548f14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
  }
  else {
    FUN_01581f58();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_38;
    if (local_38 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
      puVar2 = local_40;
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      if (puVar3 == (undefined *)0x0) {
        local_18 = (undefined *)0x0;
        local_2c = 1;
      }
      else {
        puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_imageWithData_scale__026a8c78,puVar2);
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        if (local_48 == (undefined *)0x0) {
          puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_48;
          local_48 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        puVar1 = local_48;
        if (local_48 == (undefined *)0x0) {
          local_18 = (undefined *)0x0;
        }
        else {
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGImage_0269e0e8);
          _CGImageGetBytesPerRow();
          puVar2 = local_48;
          _objc_retainAutorelease();
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGImage_0269e0e8);
          _CGImageGetHeight();
          FUN_01581f58();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_48;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = puVar1;
        }
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
      }
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_2c = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

