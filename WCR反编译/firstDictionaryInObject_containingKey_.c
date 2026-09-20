// firstDictionaryInObject:containingKey: @ 01058280

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::firstDictionaryInObject_containingKey_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_2a8;
  undefined *local_2a0;
  undefined *local_250;
  undefined *local_248;
  undefined1 auStack_200 [8];
  long local_1f8;
  long *local_1f0;
  ulong local_1c0;
  undefined1 auStack_1b8 [8];
  long local_1b0;
  long *local_1a8;
  ulong local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  int local_154;
  long local_150;
  long local_148;
  SEL local_140;
  ID local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_148 = 0;
  local_140 = param_2;
  local_138 = param_1;
  _objc_storeStrong(&local_148,param_3);
  local_150 = 0;
  _objc_storeStrong(&local_150,param_4);
  if ((local_148 == 0) ||
     (lVar4 = local_150, (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0),
     lVar4 == 0)) {
    local_130 = (undefined *)0x0;
    local_154 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,local_148);
    _objc_retainAutoreleasedReturnValue();
    local_160 = puVar1;
    do {
      puVar1 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
      if (puVar1 == (undefined *)0x0) {
        local_130 = (undefined *)0x0;
        local_154 = 1;
        break;
      }
      puVar1 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_removeLastObject_0269e830);
      puVar1 = local_168;
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_168;
      if (((ulong)puVar1 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
        if (((ulong)puVar2 & 1) != 0) {
          _memset(auStack_200,0,0x40);
          puVar1 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_2a0 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,auStack_128,
                     0x10);
          if (local_2a0 != (undefined *)0x0) {
            lVar4 = *local_1f0;
            local_2a8 = (undefined *)0x0;
            do {
              do {
                if (*local_1f0 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_1f0 - lVar4,puVar1);
                }
                uVar5 = *(ulong *)(local_1f8 + (long)local_2a8 * 8);
                puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_1c0 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                uVar3 = local_1c0;
                if ((uVar5 & 1) == 0) {
                  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if ((uVar3 & 1) != 0) goto LAB_0105880c;
                }
                else {
LAB_0105880c:
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_addObject__0269d180,local_1c0);
                }
                local_2a8 = local_2a8 + 1;
              } while (local_2a8 < local_2a0);
              local_2a0 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_200,
                         auStack_128,0x10);
              local_2a8 = (undefined *)0x0;
            } while (local_2a0 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
LAB_010588a8:
        local_154 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_170 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_objectForKeyedSubscript__0269d098,local_150);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        puVar1 = local_170;
        if (puVar2 == (undefined *)0x0) {
          _memset(auStack_1b8,0,0x40);
          puVar1 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_allValues_0269dae8);
          _objc_retainAutoreleasedReturnValue();
          local_248 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_248 != (undefined *)0x0) {
            lVar4 = *local_1a8;
            local_250 = (undefined *)0x0;
            do {
              do {
                if (*local_1a8 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_1a8 - lVar4,puVar1);
                }
                uVar5 = *(ulong *)(local_1b0 + (long)local_250 * 8);
                puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_178 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
                uVar3 = local_178;
                if ((uVar5 & 1) == 0) {
                  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
                  if ((uVar3 & 1) != 0) goto LAB_010585c0;
                }
                else {
LAB_010585c0:
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_160,PTR_s_addObject__0269d180,local_178);
                }
                local_250 = local_250 + 1;
              } while (local_250 < local_248);
              local_248 = puVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1b8,
                         auStack_a8,0x10);
              local_250 = (undefined *)0x0;
            } while (local_248 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar1);
          local_154 = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_130 = puVar1;
          local_154 = 1;
        }
        _objc_storeStrong(&local_170,0);
        if (local_154 == 0) goto LAB_010588a8;
      }
      _objc_storeStrong(&local_168,0);
    } while (local_154 == 0);
    _objc_storeStrong(&local_160,0);
  }
  _objc_storeStrong(&local_150);
  _objc_storeStrong(&local_148,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_130;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

