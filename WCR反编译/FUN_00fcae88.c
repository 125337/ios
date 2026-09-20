// FUN_00fcae88 @ 00fcae88

byte FUN_00fcae88(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 < 10) ||
     (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     0x10 < uVar1)) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_uppercaseString_0269d6c8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_hasPrefix__0269d320,&cf_TB);
    if (((uVar1 & 1) == 0) &&
       (uVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_BB),
       (uVar1 & 1) == 0)) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_characterSetWithCharactersInStri_0269d1a0,
                 &cf_ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_38 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_invertedSet_0269ef60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = uVar1 == 0x7fffffffffffffff;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      local_24 = 1;
      _objc_storeStrong(&local_38,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

