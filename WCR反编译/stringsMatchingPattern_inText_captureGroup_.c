// stringsMatchingPattern:inText:captureGroup: @ 0101bd68

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::stringsMatchingPattern_inText_captureGroup_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  unsigned_long_long local_b0;
  ID local_a8;
  undefined8 local_a0;
  long local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 local_74;
  unsigned_long_long local_70;
  long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  long local_28;
  
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  lVar3 = local_68;
  local_70 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
  if ((lVar3 == 0) ||
     (lVar3 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    puVar4 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_74 = 1;
    local_48 = puVar4;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,local_60,1,0);
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar4;
    if (puVar4 == (undefined *)0x0) {
      puVar4 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_74 = 1;
      local_48 = puVar4;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
      local_88 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_68;
      puVar1 = local_80;
      lVar6 = local_68;
      local_90 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
      lVar2 = local_68;
      local_38 = 0;
      local_30 = 0;
      local_a0 = 0;
      local_e8 = PTR___NSConcreteGlobalBlock_02578658;
      local_e0 = 0xd0800000;
      local_dc = 0;
      local_d8 = FUN_0101c0dc;
      local_d0 = &DAT_02584670;
      local_b0 = local_70;
      local_a8 = local_50;
      local_98 = lVar6;
      local_40 = lVar6;
      local_28 = lVar6;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = local_90;
      local_c8 = lVar2;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_88;
      local_c0 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_b8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_enumerateMatchesInString_options_0269ef28,lVar3,0,local_a0,local_98,
                 &local_e8);
      puVar4 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = puVar4;
      local_74 = 1;
      _objc_storeStrong(&local_b8);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_48;
}

