// FUN_02055ddc @ 02055ddc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02055ddc(undefined8 param_1,byte param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined *local_2d8;
  ulong local_2a8;
  ulong local_2a0;
  ulong local_248;
  ulong local_240;
  bool local_1f9;
  undefined *local_1f8;
  long local_1f0;
  undefined1 auStack_1e8 [8];
  long local_1e0;
  long *local_1d8;
  long local_1a8;
  undefined *local_1a0;
  ulong local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  undefined *local_148;
  undefined4 local_140;
  byte local_139;
  ulong local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = 0;
  _objc_storeStrong(&local_138,param_1);
  uVar2 = local_138;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_139 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_130 = (undefined *)0x0;
    local_140 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    local_148 = puVar1;
    _memset(auStack_190,0,0x40);
    uVar2 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_allKeys_0269ef58);
    _objc_retainAutoreleasedReturnValue();
    local_240 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_240 != 0) {
      lVar4 = *local_180;
      local_248 = 0;
      do {
        do {
          if (*local_180 - lVar4 != 0) {
            _objc_enumerationMutation(*local_180 - lVar4,uVar2);
          }
          uVar7 = *(ulong *)(local_188 + local_248 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_150 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
          if ((uVar7 & 1) != 0) {
            uVar3 = local_138;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_138,PTR_s_objectForKeyedSubscript__0269d098,local_150);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_198 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar7 = local_198;
            if ((uVar3 & 1) == 0) {
              puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar7 & 1) != 0) goto LAB_0205608c;
              if (((local_139 & 1) != 0) &&
                 (uVar3 = local_150,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150,PTR_s_isEqualToString__0269ccc8,&cf_messages),
                 uVar7 = local_198, (uVar3 & 1) != 0)) {
                puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
                if ((uVar7 & 1) != 0) {
                  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
                  _objc_retainAutoreleasedReturnValue();
                  local_1a0 = puVar1;
                  _memset(auStack_1e8,0,0x40);
                  uVar7 = local_198;
                  (*(code *)PTR__objc_retain_02578638)();
                  local_2a0 = uVar7;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                             auStack_128,0x10);
                  if (local_2a0 != 0) {
                    lVar5 = *local_1d8;
                    local_2a8 = 0;
                    do {
                      do {
                        if (*local_1d8 - lVar5 != 0) {
                          _objc_enumerationMutation(*local_1d8 - lVar5,uVar7);
                        }
                        lVar6 = *(long *)(local_1e0 + local_2a8 * 8);
                        local_1a8 = lVar6;
                        FUN_02055ddc(lVar6,0);
                        _objc_retainAutoreleasedReturnValue();
                        local_1f0 = lVar6;
                        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_count_0269cfe0);
                        if (lVar6 != 0) {
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (local_1a0,PTR_s_addObject__0269d180,local_1f0);
                        }
                        _objc_storeStrong(&local_1f0,0);
                        local_2a8 = local_2a8 + 1;
                      } while (local_2a8 < local_2a0);
                      local_2a0 = uVar7;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e8,
                                 auStack_128,0x10);
                      local_2a8 = 0;
                    } while (local_2a0 != 0);
                  }
                  (*(code *)PTR__objc_release_02578630)(uVar7);
                  puVar1 = local_1a0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_copy_0269d150);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,puVar1,local_150)
                  ;
                  (*(code *)PTR__objc_release_02578630)(puVar1);
                  _objc_storeStrong(&local_1a0,0);
                }
              }
              local_140 = 0;
            }
            else {
LAB_0205608c:
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_148,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,local_150);
              local_140 = 3;
            }
            _objc_storeStrong(&local_198,0);
          }
          local_248 = local_248 + 1;
        } while (local_248 < local_240);
        local_240 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        local_248 = 0;
      } while (local_240 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar1 = local_148;
    (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_count_0269cfe0);
    if (puVar1 == (undefined *)0x0) {
      local_2d8 = (undefined *)0x0;
    }
    else {
      local_2d8 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_copy_0269d150);
      local_1f8 = local_2d8;
    }
    local_1f9 = puVar1 != (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_2d8;
    if (local_1f9) {
      (*(code *)PTR__objc_release_02578630)(local_1f8);
    }
    local_140 = 1;
    _objc_storeStrong(&local_148,0);
  }
  _objc_storeStrong(&local_138,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_130);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

