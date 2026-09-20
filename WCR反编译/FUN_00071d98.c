// FUN_00071d98 @ 00071d98

void FUN_00071d98(undefined8 param_1)

{
  qword *pqVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_30;
  if (((ulong)pcVar3 & 1) == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_28 = (cfstringStruct *)0x0;
    }
    else {
      pcVar3 = local_48;
      puVar2 = PTR_s_rangeOfString__0269d838;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_rangeOfString__0269d838,&cf__);
      local_58 = pcVar3;
      local_50 = puVar2;
      if ((pcVar3 != (cfstringStruct *)0x7fffffffffffffff) && (pcVar3 != (cfstringStruct *)0x0)) {
        pcVar4 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_60 = pcVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = &cf___;
        pqVar1 = &local_58->field0_0x0;
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if ((cfstringStruct *)((long)pqVar1 + 1U) < pcVar3) {
          pcVar4 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_substringFromIndex__0269d120,
                     (undefined1 *)((long)&local_58->field0_0x0 + 1));
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_68;
          local_68 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar3 = local_68;
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_68;
          local_68 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          (*(code *)PTR__objc_release_02578630)(puVar2);
        }
        pcVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf__chatroom)
        ;
        pcVar4 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf__chatroom)
        ;
        if (((((ulong)pcVar3 & 1) == 0) ||
            (pcVar5 = local_68,
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
            pcVar5 == (cfstringStruct *)0x0)) || (((ulong)pcVar4 & 1) != 0)) {
          if (((((ulong)pcVar4 & 1) == 0) ||
              (pcVar4 = local_60,
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
              pcVar4 == (cfstringStruct *)0x0)) || (((ulong)pcVar3 & 1) != 0)) {
            pcVar3 = local_60;
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
            if (pcVar3 != (cfstringStruct *)0x0) {
              _objc_storeStrong(pcVar3,&local_48,local_60);
            }
          }
          else {
            _objc_storeStrong(&local_48,local_60);
          }
        }
        else {
          _objc_storeStrong(&local_48,local_68);
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
      pcVar3 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

