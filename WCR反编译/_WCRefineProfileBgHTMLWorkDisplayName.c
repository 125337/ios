// _WCRefineProfileBgHTMLWorkDisplayName @ 01cef90c

void _WCRefineProfileBgHTMLWorkDisplayName(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  long lVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_198;
  undefined *local_158;
  undefined *local_150;
  undefined *local_138;
  cfstringStruct *local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  cfstringStruct *local_d0;
  int local_c4;
  long local_c0;
  long local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  lVar5 = local_b8;
  _WCRefineProfileBgSafePathComponent();
  _objc_retainAutoreleasedReturnValue();
  local_c0 = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (lVar5 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = &cf___;
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_138 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_150 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
              );
    if (local_150 != (undefined *)0x0) {
      lVar5 = *local_100;
      local_158 = (undefined *)0x0;
      do {
        do {
          if (*local_100 - lVar5 != 0) {
            _objc_enumerationMutation(*local_100 - lVar5,local_138);
          }
          pcVar6 = *(cfstringStruct **)(local_108 + (long)local_158 * 8);
          local_d0 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar6;
          _WCRefineProfileBgSafePathComponent();
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          (*(code *)PTR__objc_release_02578630)(pcVar6);
          if (((ulong)pcVar4 & 1) != 0) {
            pcVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_d0,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_118 = pcVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
            if ((((ulong)pcVar3 & 1) == 0) ||
               (pcVar3 = local_118,
               (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0),
               pcVar3 == (cfstringStruct *)0x0)) {
              local_198 = &cf__g_TTQ_u;
            }
            else {
              local_198 = local_118;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = local_198;
            local_c4 = 1;
            _objc_storeStrong(&local_118,0);
            goto LAB_01cefcbc;
          }
          local_158 = local_158 + 1;
        } while (local_158 < local_150);
        local_150 = local_138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_138,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                   0x10);
        local_158 = (undefined *)0x0;
      } while (local_150 != (undefined *)0x0);
    }
    local_c4 = 0;
LAB_01cefcbc:
    (*(code *)PTR__objc_release_02578630)(local_138);
    if (local_c4 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = &cf__gb;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

