// deepValue:path: @ 0101e638

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::deepValue_path_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_168;
  ulong local_160;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  uVar2 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = uVar2;
  _memset(auStack_120,0,0x40);
  uVar2 = local_d0;
  (*(code *)PTR__objc_retain_02578638)();
  local_160 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_160 != 0) {
    lVar5 = *local_110;
    local_168 = 0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,uVar2);
        }
        uVar6 = *(ulong *)(local_118 + local_168 * 8);
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        uVar4 = local_d8;
        if ((uVar6 & 1) == 0) {
LAB_0101e898:
          uVar4 = local_e0;
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar6 = local_d8;
          if ((uVar4 & 1) != 0) {
            puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_d8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_d8,PTR_s_objectForKeyedSubscript__0269d098,local_e0);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = local_d8;
              local_d8 = uVar6;
              (*(code *)PTR__objc_release_02578630)(uVar4);
              goto LAB_0101e97c;
            }
          }
          local_b0 = 0;
          bVar1 = true;
          goto LAB_0101e9e4;
        }
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar4 & 1) == 0) goto LAB_0101e898;
        uVar4 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_integerValue_026ca750);
        if (((long)uVar4 < 0) ||
           (uVar6 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
           (long)uVar6 <= (long)uVar4)) {
          local_b0 = 0;
          bVar1 = true;
          goto LAB_0101e9e4;
        }
        uVar6 = local_d8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_d8,PTR_s_objectAtIndexedSubscript__0269cc78,uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = local_d8;
        local_d8 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar4);
LAB_0101e97c:
        local_168 = local_168 + 1;
      } while (local_168 < local_160);
      local_160 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_168 = 0;
    } while (local_160 != 0);
  }
  bVar1 = false;
LAB_0101e9e4:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_d8;
  if (!bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = uVar2;
  }
  _objc_storeStrong(&local_d8);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

