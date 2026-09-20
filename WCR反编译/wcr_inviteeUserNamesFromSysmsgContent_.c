// wcr_inviteeUserNamesFromSysmsgContent: @ 00ed3924

/* Function Stack Size: 0x18 bytes */

ID WCRefineChatRoomKickHelper::wcr_inviteeUserNamesFromSysmsgContent_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *local_178;
  uint local_158;
  uint local_154;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  ID local_128;
  undefined *local_120;
  ID local_118;
  undefined8 local_110;
  ID local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  ID local_e0;
  bool local_d1;
  undefined *local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  byte local_8d;
  undefined4 local_8c;
  ID local_88;
  undefined8 local_80;
  SEL local_78;
  ID local_70;
  undefined *local_68;
  ID local_60;
  undefined8 local_58;
  undefined8 local_50;
  ID local_48;
  ID local_40;
  undefined8 local_38;
  undefined8 local_30;
  ID local_28;
  
  local_80 = 0;
  local_78 = param_2;
  local_70 = param_1;
  _objc_storeStrong(&local_80,param_3);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_trimmedString__0269ec98,local_80);
  _objc_retainAutoreleasedReturnValue();
  local_88 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_8c = 1;
    local_68 = puVar3;
    goto LAB_00ed3f18;
  }
  IVar2 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_containsString__0269d0b0,&cf__O);
  if ((IVar2 & 1) == 0) {
    IVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_youinvited);
    local_154 = 0;
    if ((IVar2 & 1) != 0) goto LAB_00ed3a20;
  }
  else {
LAB_00ed3a20:
    IVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_containsString__0269d0b0,&cf_ReQ);
    local_158 = 1;
    if ((IVar2 & 1) == 0) {
      IVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_localizedCaseInsensitiveContains_0269efb0,&cf_join);
      local_158 = (uint)IVar2;
    }
    local_154 = local_158;
  }
  local_8d = (byte)local_154 & 1;
  if ((local_154 & 1) == 0) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_8c = 1;
    local_68 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = 0;
    local_b0 = 0;
    local_178 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
    local_98 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
               PTR_s_regularExpressionWithPattern_opt_0269ef10,
               &cf_<link[_>__name_____names_________s_S___<_link>,1,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_a0,local_b0);
    IVar2 = local_88;
    local_d1 = false;
    bVar1 = local_178 == (undefined *)0x0;
    local_a8 = local_178;
    if (bVar1) {
      local_178 = (undefined *)0x0;
    }
    else {
      IVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_38 = 0;
      local_30 = 0;
      local_c8 = 0;
      local_c0 = IVar4;
      local_40 = IVar4;
      local_28 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_178,PTR_s_firstMatchInString_options_range_0269ef48,IVar2,0,0,IVar4);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_178;
    }
    local_d1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_b8 = local_178;
    if ((local_d1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d0);
    }
    IVar2 = local_88;
    if (local_b8 == (undefined *)0x0) {
      puVar3 = *(undefined **)PTR____NSArray0___02578280;
      (*(code *)PTR__objc_retain_02578638)();
      local_8c = 1;
      local_68 = puVar3;
    }
    else {
      puVar3 = local_b8;
      puVar6 = PTR_s_range_0269ef50;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f0 = puVar3;
      local_e8 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_substringWithRange__0269d138,puVar3,puVar6);
      _objc_retainAutoreleasedReturnValue();
      local_100 = local_a0;
      puVar3 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
      local_e0 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
                 PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf_<username>___<]_)<_username>,1,
                 &local_100);
      _objc_retainAutoreleasedReturnValue();
      _objc_storeStrong(&local_a0,local_100);
      IVar2 = local_e0;
      local_f8 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        IVar5 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
        IVar4 = local_e0;
        local_58 = 0;
        local_50 = 0;
        local_110 = 0;
        local_148 = PTR___NSConcreteGlobalBlock_02578658;
        local_140 = 0xd0800000;
        local_13c = 0;
        local_138 = FUN_00ed3f48;
        local_130 = &DAT_02581de0;
        local_118 = local_70;
        local_108 = IVar5;
        local_60 = IVar5;
        local_48 = IVar5;
        (*(code *)PTR__objc_retain_02578638)();
        puVar6 = local_98;
        local_128 = IVar4;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_enumerateMatchesInString_options_0269ef28,IVar2,0,local_110,
                   local_108,&local_148);
        _objc_storeStrong(&local_120);
        _objc_storeStrong(&local_128,0);
      }
      puVar3 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_8c = 1;
      local_68 = puVar3;
      _objc_storeStrong(&local_f8);
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_b8);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
LAB_00ed3f18:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_68;
}

