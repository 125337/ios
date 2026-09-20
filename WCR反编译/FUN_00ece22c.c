// FUN_00ece22c @ 00ece22c

byte FUN_00ece22c(undefined8 param_1,long *param_2,long *param_3,long param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  long local_80;
  long local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined4 local_54;
  cfstringStruct *local_50;
  long local_48;
  long *local_40;
  long *local_38;
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
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_48 = param_4;
  local_40 = param_3;
  local_38 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = local_b0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    pcVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_60 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_count_0269cfe0);
    puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
    if (pcVar2 == (cfstringStruct *)0x2) {
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scannerWithString__0269fa30);
      _objc_retainAutoreleasedReturnValue();
      local_68 = puVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
      pcVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scannerWithString__0269fa30);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_78 = 0;
      local_80 = 0;
      puVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_scanInteger__026a4fc8,&local_78);
      if ((((ulong)puVar1 & 1) == 0) ||
         (puVar1 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isAtEnd_026ab608),
         ((ulong)puVar1 & 1) == 0)) {
        local_21 = 0;
      }
      else {
        puVar1 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_scanInteger__026a4fc8,&local_80);
        if ((((ulong)puVar1 & 1) == 0) ||
           (puVar1 = local_70,
           (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isAtEnd_026ab608),
           ((ulong)puVar1 & 1) == 0)) {
          local_21 = 0;
        }
        else if ((((local_78 < 0) || (local_80 < 0)) || (local_48 < local_78)) ||
                (local_48 < local_80)) {
          local_21 = 0;
        }
        else {
          if (local_38 != (long *)0x0) {
            *local_38 = local_78;
          }
          if (local_40 != (long *)0x0) {
            *local_40 = local_80;
          }
          local_21 = 1;
        }
      }
      local_54 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_21 = 0;
      local_54 = 1;
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

