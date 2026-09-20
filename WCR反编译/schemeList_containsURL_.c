// schemeList:containsURL: @ 01e2dd40

/* Function Stack Size: 0x20 bytes */

bool WCRefineSuperFloatURLSchemeViewController::schemeList_containsURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_190;
  ulong local_160;
  ulong local_158;
  bool local_129;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  ulong local_c8;
  SEL local_c0;
  ID local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_2;
  local_b8 = param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  _memset(auStack_118,0,0x40);
  uVar3 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar6 = *local_108;
    local_160 = 0;
    do {
      do {
        if (*local_108 - lVar6 != 0) {
          _objc_enumerationMutation(*local_108 - lVar6,uVar3);
        }
        pcVar7 = *(cfstringStruct **)(local_110 + local_160 * 8);
        puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d8 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
        if (((ulong)pcVar7 & 1) != 0) {
          pcVar7 = local_d8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar5 = pcVar7;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_129 = ((ulong)pcVar5 & 1) == 0;
          if (local_129) {
            local_190 = &::cf___;
          }
          else {
            local_190 = local_d8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d8,PTR_s_objectForKeyedSubscript__0269d098,&cf_url);
            _objc_retainAutoreleasedReturnValue();
            local_128 = local_190;
          }
          local_129 = !local_129;
          (*(code *)PTR__objc_retain_02578638)();
          local_120 = local_190;
          if (local_129) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar7);
          pcVar7 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_isEqualToString__0269ccc8,local_d0);
          bVar1 = ((ulong)pcVar7 & 1) != 0;
          if (bVar1) {
            local_a9 = 1;
          }
          _objc_storeStrong(&local_120,0);
          bVar2 = true;
          if (bVar1) goto LAB_01e2e07c;
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  bVar2 = false;
LAB_01e2e07c:
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (!bVar2) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

