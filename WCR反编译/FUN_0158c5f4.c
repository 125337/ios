// FUN_0158c5f4 @ 0158c5f4

byte FUN_0158c5f4(undefined8 param_1,ulong param_2,ulong *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_60;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong *local_30;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_20;
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_rangeOfCharacterFromSet__0269db68,local_48);
      if (uVar2 == 0x7fffffffffffffff) {
        local_60 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_integerValue_026ca750);
        if ((long)local_60 < 0) {
          local_60 = 0;
        }
        if ((long)local_28 < (long)local_60) {
          local_60 = local_28;
        }
        if (local_30 != (ulong *)0x0) {
          *local_30 = local_60;
        }
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

