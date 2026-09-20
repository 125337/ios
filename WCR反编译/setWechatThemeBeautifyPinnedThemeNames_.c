// setWechatThemeBeautifyPinnedThemeNames: @ 0209a84c

/* Function Stack Size: 0x18 bytes */

void WCRefineConfig::setWechatThemeBeautifyPinnedThemeNames_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_150;
  ulong local_148;
  ulong local_130;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  ID local_c8;
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
  IVar1 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_c8 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  if (local_c0 == 0) {
    local_130 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_130 = local_c0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_148 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_148 != 0) {
    lVar4 = *local_108;
    local_150 = 0;
    do {
      do {
        if (*local_108 - lVar4 != 0) {
          _objc_enumerationMutation(*local_108 - lVar4,local_130);
        }
        uVar5 = *(ulong *)(local_110 + local_150 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d8 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar3 = local_d8;
        if ((uVar5 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar3;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          uVar3 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if ((uVar3 != 0) &&
             (puVar2 = local_d0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_d0,PTR_s_containsObject__0269cbb8,local_120), ((ulong)puVar2 & 1) == 0
             )) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,local_120);
          }
          _objc_storeStrong(&local_120,0);
        }
        local_150 = local_150 + 1;
      } while (local_150 < local_148);
      local_148 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_130,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,
                 0x10);
      local_150 = 0;
    } while (local_148 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_130);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_setObject_forKey__026ca9e8,local_d0,
             &cf_wechatThemeBeautifyPinnedThemeNamesV2);
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

