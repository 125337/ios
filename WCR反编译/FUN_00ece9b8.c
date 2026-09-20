// FUN_00ece9b8 @ 00ece9b8

byte FUN_00ece9b8(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_78;
  long local_50;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  long local_30;
  long *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    local_78 = &cf___;
  }
  else {
    local_78 = local_20;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_78;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_38);
    _objc_retainAutoreleasedReturnValue();
    local_50 = 0;
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scanInteger__026a4fc8,&local_50);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isAtEnd_026ab608),
       ((ulong)puVar1 & 1) == 0)) {
      local_11 = 0;
    }
    else if ((local_50 < 0) || (local_30 < local_50)) {
      local_11 = 0;
    }
    else {
      if (local_28 != (long *)0x0) {
        *local_28 = local_50;
      }
      local_11 = 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

