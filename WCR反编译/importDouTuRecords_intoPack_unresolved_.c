// importDouTuRecords:intoPack:unresolved: @ 0108f2e8

/* Function Stack Size: 0x28 bytes */

long_long WCRefineLocalEmoticonStore::importDouTuRecords_intoPack_unresolved_
                    (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long_long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ID IVar8;
  ulong uVar9;
  ID IVar10;
  long lVar11;
  ulong local_190;
  ulong local_188;
  ulong local_158;
  undefined *local_150;
  ulong local_148;
  undefined4 local_13c;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  undefined *local_e0;
  long_long local_d8;
  long local_d0;
  undefined8 local_c8;
  ulong local_c0;
  SEL local_b8;
  ID local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_beginChangeBatch_026ae358);
  local_d8 = 0;
  puVar3 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar4;
  _memset(auStack_130,0,0x40);
  uVar2 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_188 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_188 != 0) {
    lVar11 = *local_120;
    local_190 = 0;
    do {
      do {
        uVar5 = local_188;
        if (*local_120 - lVar11 != 0) {
          uVar5 = uVar2;
          _objc_enumerationMutation(*local_120 - lVar11);
        }
        local_f0 = *(ulong *)(local_128 + local_190 * 8);
        _objc_autoreleasePoolPush();
        uVar6 = local_f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_md5);
        _objc_retainAutoreleasedReturnValue();
        local_138 = uVar6;
        FUN_0107bd28();
        if (((uVar6 & 1) == 0) ||
           (puVar3 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_containsObject__0269cbb8,local_138),
           ((ulong)puVar3 & 1) != 0)) {
          local_13c = 3;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_138);
          puVar3 = local_e8;
          uVar6 = local_138;
          (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_lowercaseString_0269d9c0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar7 = local_138;
          FUN_0108f988();
          _objc_retainAutoreleasedReturnValue();
          local_148 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_length_0269cca0);
          IVar10 = local_b0;
          uVar9 = local_138;
          uVar6 = local_148;
          if (uVar7 == 0) {
            if (local_d0 != 0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
              _objc_retainAutoreleasedReturnValue();
              local_150 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_138,&cf_md5);
              uVar6 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
              _objc_retainAutoreleasedReturnValue();
              puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_158 = uVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              if (((uVar6 & 1) != 0) &&
                 (uVar6 = local_158,
                 (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_length_0269cca0), uVar6 != 0)
                 ) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_setObject_forKeyedSubscript__0269d248,local_158,&cf_url);
              }
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_150);
              _objc_storeStrong(&local_158);
              _objc_storeStrong(&local_150,0);
            }
            local_13c = 0;
          }
          else {
            IVar8 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_extensionForData__026ac368,local_148);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,PTR_s_stringByAppendingPathExtension__026a4580);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (IVar10,PTR_s_importData_fileName_intoPack_err_026abfa0,uVar6,uVar9,local_c8,0
                      );
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            (*(code *)PTR__objc_release_02578630)(uVar9);
            (*(code *)PTR__objc_release_02578630)(IVar8);
            if (IVar10 != 0) {
              local_d8 = local_d8 + 1;
            }
            local_13c = 3;
          }
          _objc_storeStrong(&local_148,0);
        }
        _objc_storeStrong(&local_138,0);
        _objc_autoreleasePoolPop(uVar5);
        local_190 = local_190 + 1;
      } while (local_190 < local_188);
      local_188 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      local_190 = 0;
    } while (local_188 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  puVar3 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
  if (puVar3 != (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_rememberItemOrder_intoPack__026ae3e8,local_e8,local_c8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_scheduleSendablePreconvertWalk_026ae218);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_endChangeBatch_026ae360);
  lVar1 = local_d8;
  local_13c = 1;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return lVar1;
}

