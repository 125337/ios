// FUN_01eea788 @ 01eea788

void FUN_01eea788(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_70;
  undefined *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  undefined4 local_24;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    local_40 = 0;
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithContentsOfURL_encoding_026a7ba0,
               local_20,4,&local_40);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_30,local_40);
    local_38 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfURL__026a9eb0,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      if (puVar2 != (undefined *)0x0) {
        pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar1 = local_38;
        local_38 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      _objc_storeStrong(&local_48,0);
    }
    if (local_38 == (cfstringStruct *)0x0) {
      local_70 = &cf___;
    }
    else {
      local_70 = local_38;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    local_24 = 1;
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

