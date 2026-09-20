// normalizedTokensFromText:stripStarPrefix:maxCount: @ 00ecf890

/* Function Stack Size: 0x24 bytes */

ID WCRefineChatRoomKickHelper::normalizedTokensFromText_stripStarPrefix_maxCount_
             (ID param_1,SEL param_2,ID param_3,bool param_4,unsigned_long_long param_5)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  long lVar6;
  long lVar7;
  ulong local_190;
  ulong local_188;
  ID local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  int local_e4;
  ID local_e0;
  undefined *local_d8;
  byte local_c9;
  undefined8 local_c8;
  SEL local_c0;
  ID local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_c9 = (byte)param_4;
  IVar1 = local_b8;
  local_d8 = (undefined *)param_5;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_c8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_length_0269cca0);
  if (IVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_e4 = 1;
    local_b0 = puVar2;
  }
  else {
    IVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_format_s_);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_e0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&::cf_newline_s_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_e0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_creturn_s_,&cf__);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_e0;
    local_e0 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar2;
    _memset(auStack_138,0,0x40);
    IVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_188 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar6 = *local_128;
      local_190 = 0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,IVar1);
          }
          local_f8 = *(undefined8 *)(local_130 + local_190 * 8);
          IVar3 = local_b8;
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_trimmedString__0269ec98,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_140 = IVar3;
          if ((local_c9 & 1) != 0) {
            while (IVar4 = local_140,
                  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_hasPrefix__0269d320,&cf__),
                  IVar3 = local_b8, (IVar4 & 1) != 0) {
              IVar5 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_substringFromIndex__0269d120,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_trimmedString__0269ec98);
              _objc_retainAutoreleasedReturnValue();
              IVar4 = local_140;
              local_140 = IVar3;
              (*(code *)PTR__objc_release_02578630)(IVar4);
              (*(code *)PTR__objc_release_02578630)(IVar5);
            }
          }
          IVar3 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if ((IVar3 == 0) ||
             (IVar3 = local_140,
             (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0), 0x40 < IVar3))
          {
            lVar7 = 3;
            local_e4 = 3;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,local_140);
            puVar2 = local_f0;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
            lVar7 = (long)puVar2 - (long)local_d8;
            if (puVar2 < local_d8) {
              local_e4 = 0;
            }
            else {
              lVar7 = 2;
              local_e4 = 2;
            }
          }
          _objc_storeStrong(lVar7,&local_140,0);
          if ((local_e4 != 0) && (local_e4 != 3)) goto LAB_00ecfd48;
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = IVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_e4 = 0;
LAB_00ecfd48:
    (*(code *)PTR__objc_release_02578630)(IVar1);
    puVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_e4 = 1;
    local_b0 = puVar2;
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

