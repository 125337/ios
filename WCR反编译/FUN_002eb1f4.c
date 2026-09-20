// FUN_002eb1f4 @ 002eb1f4

void FUN_002eb1f4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *local_38;
  undefined4 local_30;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
               local_20,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_30 = 1;
    }
    else {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_base64EncodedStringWithOptions__026a1df8,0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar2 == (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        lVar1 = local_20;
        FUN_002eb88c();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_stringWithFormat__0269cca8,&cf_data____base64___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      local_30 = 1;
      _objc_storeStrong(&local_40,0);
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

