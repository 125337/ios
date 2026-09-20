// FUN_005386fc @ 005386fc

void FUN_005386fc(uint param_1)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *local_f8;
  bool local_71;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58 [3];
  undefined *local_40;
  cfstringStruct *local_38;
  uint local_2c;
  cfstringStruct *local_28;
  
  local_2c = param_1;
  if (param_1 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
  }
  else {
    pcVar1 = (cfstringStruct *)(ulong)param_1;
    FUN_00539010();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = NEON_ucvtf((ulong)local_2c);
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_38 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0
              );
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    FUN_005395c8();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_58[0] = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_68 = (undefined *)0x0;
    local_60 = pcVar1;
    while( true ) {
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
      pcVar1 = local_60;
      if (puVar2 <= local_68) break;
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58[0],PTR_s_objectAtIndexedSubscript__0269cc78,local_68);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_00539958();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_58[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_count_0269cfe0);
      if (local_68 + 1 < puVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_appendString__0269ccb0,local_38);
      }
      local_68 = local_68 + 1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_f8 = local_38;
    }
    else {
      local_f8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_copy_0269d150);
      local_70 = local_f8;
    }
    local_71 = pcVar1 != (cfstringStruct *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_f8;
    if (local_71) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(local_58,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_autoreleaseReturnValue(local_28);
  return;
}

