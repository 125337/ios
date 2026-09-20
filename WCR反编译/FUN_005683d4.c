// FUN_005683d4 @ 005683d4

byte FUN_005683d4(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_d8;
  long local_98;
  long local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined4 local_68;
  byte local_61;
  cfstringStruct *local_60;
  byte local_51;
  undefined *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  local_51 = 0;
  local_61 = 0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_d8 = local_30;
  if (((ulong)pcVar2 & 1) == 0) {
    local_d8 = &cf___;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = local_d8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_d8;
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_68 = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_0);
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_38;
      puVar1 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_rangeOfString__0269d838,&cf__);
      local_78 = pcVar2;
      local_70 = puVar1;
      if (pcVar2 == (cfstringStruct *)0x7fffffffffffffff) {
        local_21 = 0;
        local_68 = 1;
      }
      else {
        pcVar3 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_substringToIndex__0269d6c0,pcVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_80 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_substringFromIndex__0269d120,
                   (undefined1 *)((long)&local_78->field0_0x0 + 1));
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                   PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
        _objc_retainAutoreleasedReturnValue();
        local_88 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_90 = -1;
        local_98 = -1;
        pcVar2 = local_80;
        FUN_0056900c(local_80,&DAT_00002710,&local_90);
        pcVar3 = local_88;
        FUN_0056900c(local_88,300,&local_98);
        local_21 = false;
        if (((((ulong)pcVar2 & 1) != 0) && (local_21 = false, ((ulong)pcVar3 & 1) != 0)) &&
           (local_21 = false, local_90 == 0)) {
          local_21 = local_98 == 0;
        }
        local_68 = 1;
        _objc_storeStrong(&local_88);
        _objc_storeStrong(&local_80,0);
      }
    }
    else {
      local_21 = 1;
      local_68 = 1;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

