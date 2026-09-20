// openExternalLinkPreferSchemes:httpsFallback: @ 00fbfce4

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::openExternalLinkPreferSchemes_httpsFallback_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong local_160;
  ulong local_158;
  undefined *local_128;
  undefined *local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  undefined *local_d0;
  long local_c8;
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
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = puVar2;
  _memset(auStack_118,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
  if (local_158 != 0) {
    lVar3 = *local_108;
    local_160 = 0;
    do {
      do {
        if (*local_108 - lVar3 != 0) {
          _objc_enumerationMutation(*local_108 - lVar3,uVar1);
        }
        uVar4 = *(ulong *)(local_110 + local_160 * 8);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_d8 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar4 & 1) != 0) &&
           (uVar4 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0),
           uVar4 != 0)) {
          puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_d8);
          _objc_retainAutoreleasedReturnValue();
          local_120 = puVar2;
          if (puVar2 != (undefined *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,puVar2);
          }
          _objc_storeStrong(&local_120,0);
        }
        local_160 = local_160 + 1;
      } while (local_160 < local_158);
      local_158 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10);
      local_160 = 0;
    } while (local_158 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if (lVar3 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_URLWithString__026a16d8,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar2;
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_addObject__0269d180,puVar2);
    }
    _objc_storeStrong(&local_128,0);
  }
  puVar2 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_count_0269cfe0);
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_showModernToast__0269ce78,&cf_ceHe);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_wcr_tryOpenURLs_index_httpsFallb_026ad010,local_d0,0,local_c8);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

