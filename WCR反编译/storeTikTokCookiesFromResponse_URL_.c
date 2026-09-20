// storeTikTokCookiesFromResponse:URL: @ 01018454

/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::storeTikTokCookiesFromResponse_URL_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  undefined *local_198;
  undefined *local_190;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  code *local_148;
  undefined *local_140;
  undefined8 local_138;
  ID local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  long local_c8;
  long local_c0;
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
  puVar2 = PTR__OBJC_CLASS___NSHTTPCookie_026cec90;
  if ((local_c0 == 0) || (local_c8 == 0)) {
    local_cc = 1;
  }
  else {
    lVar4 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allHeaderFields_026aaec0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_cookiesWithResponseHeaderFields__026adc28,lVar4,local_c8);
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    IVar3 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tikTokCookieJar_026adc30);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = IVar3;
    _memset(auStack_128,0,0x40);
    puVar2 = local_d8;
    (*(code *)PTR__objc_retain_02578638)();
    local_190 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,0x10);
    if (local_190 != (undefined *)0x0) {
      lVar4 = *local_118;
      local_198 = (undefined *)0x0;
      do {
        do {
          if (*local_118 - lVar4 != 0) {
            _objc_enumerationMutation(*local_118 - lVar4,puVar2);
          }
          local_e8 = *(undefined8 *)(local_120 + (long)local_198 * 8);
          IVar3 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_tikTokCookieStorage_026adc38);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar3);
          IVar3 = local_e0;
          uVar1 = local_e8;
          local_158 = PTR___NSConcreteGlobalBlock_02578658;
          local_150 = 0xd0800000;
          local_14c = 0;
          local_148 = FUN_01018830;
          local_140 = &DAT_025845f0;
          (*(code *)PTR__objc_retain_02578638)();
          local_138 = uVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar3,PTR_s_indexOfObjectPassingTest__026a27f8,&local_158);
          local_130 = IVar3;
          if (IVar3 == 0x7fffffffffffffff) {
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_addObject__0269d180,local_e8);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_replaceObjectAtIndex_withObject__026a38a0,IVar3,local_e8);
          }
          _objc_storeStrong(&local_138,0);
          local_198 = local_198 + 1;
        } while (local_198 < local_190);
        local_190 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                   0x10);
        local_198 = (undefined *)0x0;
      } while (local_190 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    local_cc = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

