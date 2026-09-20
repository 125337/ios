// FUN_0065d2cc @ 0065d2cc

void FUN_0065d2cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_f8;
  undefined *local_f0;
  undefined4 local_e8;
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  long local_60;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  puVar1 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
  if ((puVar1 == (undefined *)0x0) ||
     (lVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_c8 = (undefined *)0x0;
    local_e8 = 1;
    goto LAB_0065d920;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__>);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<___>);
  _objc_retainAutoreleasedReturnValue();
  local_110 = local_d0;
  puStack_108 = PTR_s_rangeOfString_options__0269d118;
  local_f8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rangeOfString_options__0269d118,local_f0,1);
  if (local_110 == (undefined *)0x7fffffffffffffff) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_<__);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_f0;
    local_f0 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_110 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_rangeOfString_options__0269d118,local_f0,1)
    ;
    puVar1 = local_d0;
    if (local_110 == (undefined *)0x7fffffffffffffff) {
      local_c8 = (undefined *)0x0;
    }
    else {
      puVar3 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
      local_60 = (long)puVar3 - (long)local_110;
      puVar3 = PTR_s_rangeOfString_options_range__0269d130;
      local_58 = local_110;
      local_50 = local_110;
      local_48 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_rangeOfString_options_range__0269d130,&cf_>,0,local_110,local_60);
      if (puVar1 != (undefined *)0x7fffffffffffffff) {
        puStack_108 = puVar1 + (long)puVar3 + -(long)local_110;
        local_80 = puStack_108;
        local_78 = local_110;
        local_70 = local_110;
        local_68 = puStack_108;
        local_30 = puVar1;
        local_28 = puVar3;
        goto LAB_0065d67c;
      }
      local_c8 = (undefined *)0x0;
    }
  }
  else {
LAB_0065d67c:
    puVar3 = local_d0;
    puVar1 = local_f8;
    local_40 = local_110;
    local_38 = puStack_108;
    local_110 = local_110 + (long)puStack_108;
    puVar4 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_length_0269cca0);
    local_a0 = (long)puVar4 - (long)local_110;
    local_98 = local_110;
    local_90 = local_110;
    local_88 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_rangeOfString_options_range__0269d130,puVar1,1,local_110,local_a0);
    if ((puVar3 == (undefined *)0x7fffffffffffffff) || (puVar3 < local_110)) {
      local_c8 = (undefined *)0x0;
    }
    else {
      local_c0 = (long)puVar3 - (long)local_110;
      puVar1 = local_d0;
      local_b8 = local_110;
      local_b0 = local_110;
      local_a8 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR_s_substringWithRange__0269d138,local_110,local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                 PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
      _objc_retainAutoreleasedReturnValue();
      local_c8 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  local_e8 = 1;
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
LAB_0065d920:
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_autoreleaseReturnValue(local_c8);
  return;
}

