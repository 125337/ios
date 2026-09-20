// FUN_00fb9bcc @ 00fb9bcc

byte FUN_00fb9bcc(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  undefined *local_40;
  undefined2 local_32;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar3 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((((uVar3 & 1) == 0) ||
      (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
      uVar3 < 6)) ||
     (uVar3 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     0x20 < uVar3)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    for (local_30 = 0; uVar3 = local_30, uVar2 = local_20,
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0), uVar3 < uVar2;
        local_30 = local_30 + 1) {
      uVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_characterAtIndex__0269fa18,local_30);
      local_32 = (undefined2)uVar3;
      uVar3 = uVar3 & 0xffff;
      FUN_00fcad38();
      if ((uVar3 & 1) != 0) {
        local_11 = 0;
        local_24 = 1;
        goto LAB_00fb9ee0;
      }
    }
    puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,
               &cf_ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789__);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_20;
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_invertedSet_0269ef60);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_s_rangeOfCharacterFromSet__0269db68;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = uVar3;
    local_48 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (uVar3 == 0x7fffffffffffffff) {
      puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_20;
      local_58 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_rangeOfCharacterFromSet__0269db68,puVar1)
      ;
      if (uVar3 + 0x8000000000000001 == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_20;
        FUN_00fcae88(uVar3 + 0x8000000000000001);
        if ((uVar2 & 1) == 0) {
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
      }
      local_24 = 1;
      _objc_storeStrong(&local_58,0);
    }
    else {
      local_11 = 0;
      local_24 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
LAB_00fb9ee0:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

