// FUN_016cd8d4 @ 016cd8d4

void FUN_016cd8d4(undefined8 param_1)

{
  long lVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_98;
  undefined *local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  undefined8 local_38;
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
    local_38 = 0;
    local_48 = 0;
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithContentsOfFile_encodin_026a3340,
               local_20,4,&local_48);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_38,local_48);
    local_40 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile_options_e_026a09f0,
                 local_20,1,0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_initWithData_encoding__026a3378,local_50,4);
        pcVar2 = local_40;
        local_40 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_50,0);
    }
    if (local_40 == (cfstringStruct *)0x0) {
      local_98 = &cf___;
    }
    else {
      local_98 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_98;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

