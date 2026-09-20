// FUN_00110854 @ 00110854

void FUN_00110854(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  long local_128;
  undefined **local_120;
  undefined8 local_118;
  long local_110;
  undefined *local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8 [3];
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined4 local_88;
  long local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_70 = 0;
  _objc_storeStrong(&local_70,param_1);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_2);
  lVar1 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0),
     puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8, lVar1 == 0)) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = 1;
    local_68 = puVar2;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_escapedPatternForString__0269ef40,local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_stringWithFormat__0269cca8,
               &cf_<link[_>__name________________s_S___<_link>);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_90,1,0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_70;
    lVar4 = local_70;
    local_98 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    local_38 = 0;
    local_30 = 0;
    local_b8[1] = 0;
    local_b8[2] = lVar4;
    local_40 = lVar4;
    local_28 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_firstMatchInString_options_range_0269ef48,lVar1,0,0,lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_70;
    local_a0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      puVar2 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = 1;
      local_68 = puVar2;
    }
    else {
      puVar3 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c8 = puVar2;
      local_c0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_substringWithRange__0269d138,puVar2,puVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      local_b8[0] = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = &local_100;
      local_100 = PTR___NSConcreteStackBlock_02578660;
      local_f8 = 0xc2000000;
      local_f4 = 0;
      local_f0 = FUN_00115208;
      local_e8 = &DAT_0257a2c8;
      local_d0 = puVar2;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = puVar2;
      _objc_retainBlock();
      puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      local_d8 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<member>__s_S___<_member>,0,0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_b8[0];
      lVar6 = local_b8[0];
      local_108 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8[0],PTR_s_length_0269cca0);
      lVar4 = local_b8[0];
      local_58 = 0;
      local_50 = 0;
      local_118 = 0;
      local_148 = PTR___NSConcreteGlobalBlock_02578658;
      local_140 = 0xd0800000;
      local_13c = 0;
      local_138 = FUN_001156d8;
      local_130 = &DAT_0257a2a8;
      local_110 = lVar6;
      local_60 = lVar6;
      local_48 = lVar6;
      (*(code *)PTR__objc_retain_02578638)();
      ppuVar5 = local_d8;
      local_128 = lVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = ppuVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_enumerateMatchesInString_options_0269ef28,lVar1,0,local_118,local_110,
                 &local_148);
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
      ppuVar5 = local_d8;
      if (puVar2 == (undefined *)0x0) {
        lVar1 = local_b8[0];
        FUN_001158dc(local_b8[0],&cf_username);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = local_b8[0];
        FUN_001158dc(local_b8[0],&cf_nickname);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)ppuVar5[2])(ppuVar5,lVar1);
        (*(code *)PTR__objc_release_02578630)(lVar4);
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      puVar2 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_copy_0269d150);
      local_88 = 1;
      local_68 = puVar2;
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_128,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_d8,0);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_d0,0);
      _objc_storeStrong(local_b8,0);
    }
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_90,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

