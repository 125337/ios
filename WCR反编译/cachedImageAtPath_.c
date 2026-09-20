// cachedImageAtPath: @ 010de614

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::cachedImageAtPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long local_b8;
  long local_90;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (undefined *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  puVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    FUN_010de894();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_40;
    if (local_40 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_30
                );
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar1;
      if (puVar1 != (undefined *)0x0) {
        _objc_retainAutorelease();
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_CGImage_0269e0e8);
        if (puVar1 == (undefined *)0x0) {
          local_90 = 1;
        }
        else {
          puVar2 = puVar1;
          _CGImageGetBytesPerRow();
          _CGImageGetHeight();
          local_90 = (long)puVar2 * (long)puVar1;
          puVar1 = puVar2;
        }
        FUN_010de894();
        _objc_retainAutoreleasedReturnValue();
        if (local_90 == 0) {
          local_b8 = 1;
        }
        else {
          local_b8 = local_90;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_setObject_forKey_cost__0269e0c0,local_48,local_30,local_b8);
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      puVar1 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

