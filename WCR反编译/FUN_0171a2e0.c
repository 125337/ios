// FUN_0171a2e0 @ 0171a2e0

byte FUN_0171a2e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint local_80;
  ulong local_68;
  undefined *local_50;
  byte local_41;
  undefined4 local_40;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if ((local_30 == 0) ||
     (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     uVar1 == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_TB);
    local_80 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_BB);
      local_80 = (uint)uVar1;
    }
    local_41 = (byte)local_80 & 1;
    if ((((local_80 & 1) == 0) ||
        (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
        uVar1 < 10)) ||
       (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
       0x10 < uVar1)) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_alphanumericCharacterSet_026a2e60);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_rangeOfCharacterFromSet__0269db68,local_50);
      if (uVar1 == 0x7fffffffffffffff) {
        for (local_68 = 0; uVar1 = local_30,
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0), local_68 < uVar1;
            local_68 = local_68 + 1) {
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_characterAtIndex__0269fa18,local_68);
          if ((0x4e00 < (ushort)uVar1) && ((ushort)uVar1 < 0x9fff)) {
            local_11 = 0;
            goto LAB_0171a670;
          }
        }
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
LAB_0171a670:
      local_40 = 1;
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

