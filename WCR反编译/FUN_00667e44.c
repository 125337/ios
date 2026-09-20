// FUN_00667e44 @ 00667e44

byte FUN_00667e44(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_80 [3];
  ulong local_68;
  undefined4 local_60;
  ulong local_50;
  byte local_41;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  uVar2 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
     uVar2 = local_50, uVar3 == 0)) {
    local_41 = 0;
    local_60 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf__);
    if (((uVar2 & 1) != 0) &&
       ((uVar2 = local_68,
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasSuffix__0269d018,&cf__),
        (uVar2 & 1) != 0 &&
        (uVar3 = local_68, (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0),
        uVar2 = local_68, 1 < uVar3)))) {
      uVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      local_80[2] = uVar3 - 2;
      local_38 = 1;
      local_30 = 1;
      local_80[1] = 1;
      local_40 = local_80[2];
      local_28 = local_80[2];
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringWithRange__0269d138,1,local_80[2]);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      uVar2 = local_68;
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_68;
      local_68 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    uVar2 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_41 = 0;
      local_60 = 1;
    }
    else {
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_eeN);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_eN);
        if ((uVar2 & 1) == 0) {
          FUN_00668b18();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_68;
          local_80[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,uVar2);
          local_41 = (byte)uVar3 & 1;
          local_60 = 1;
          _objc_storeStrong(local_80,0);
        }
        else {
          local_41 = 1;
          local_60 = 1;
        }
      }
      else {
        local_41 = 1;
        local_60 = 1;
      }
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_50,0);
  return local_41 & 1;
}

