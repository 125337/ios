// FUN_01b536c8 @ 01b536c8

byte FUN_01b536c8(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long local_48;
  undefined *local_40;
  undefined4 local_34;
  long local_30;
  long *local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSScanner_026ce368;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSScanner_026ce368,PTR_s_scannerWithString__0269fa30,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_48 = 0;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_scanInteger__026a4fc8,&local_48);
    if (((((ulong)puVar1 & 1) == 0) ||
        (puVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isAtEnd_026ab608),
        ((ulong)puVar1 & 1) == 0)) || (local_48 < 1)) {
      local_11 = 0;
    }
    else {
      if (local_28 != (long *)0x0) {
        *local_28 = local_48;
      }
      local_11 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

