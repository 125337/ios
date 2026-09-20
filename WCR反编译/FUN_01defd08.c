// FUN_01defd08 @ 01defd08

byte FUN_01defd08(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  qword *pqVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *local_b0;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  ulong *local_40;
  ulong *local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_b0 = &cf___;
  }
  else {
    local_b0 = local_30;
  }
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = local_b0;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
  pcVar4 = local_48;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_4c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_60 = pcVar4;
    local_58 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((local_60 == (cfstringStruct *)0x7fffffffffffffff) || (local_60 == (cfstringStruct *)0x0))
       || (pqVar1 = &local_60->field0_0x0, pcVar4 = local_48,
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
          pcVar4 <= (cfstringStruct *)((long)pqVar1 + 1U))) {
      local_21 = 0;
      local_4c = 1;
    }
    else {
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_substringToIndex__0269d6c0,local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_substringFromIndex__0269d120,local_58 + (long)local_60);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      if ((pcVar4 == (cfstringStruct *)0x0) ||
         (pcVar4 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
         pcVar4 == (cfstringStruct *)0x0)) {
        local_21 = 0;
      }
      else {
        local_78 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_integerValue_026ca750);
        FUN_01deef5c();
        pcVar4 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
        FUN_01deef5c();
        if (((long)local_78 < 1) || ((long)pcVar4 < 1)) {
          local_21 = 0;
        }
        else {
          local_80 = pcVar4;
          if ((long)pcVar4 < (long)local_78) {
            local_80 = local_78;
            local_78 = pcVar4;
          }
          if (local_38 != (ulong *)0x0) {
            *local_38 = (ulong)local_78;
          }
          if (local_40 != (ulong *)0x0) {
            *local_40 = (ulong)local_80;
          }
          local_21 = 1;
        }
      }
      local_4c = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

