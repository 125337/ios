// douyinResultHasAnyLivePhoto: @ 01036390

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinResultHasAnyLivePhoto_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  int local_cc;
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
  uVar2 = local_c8;
  puVar1 = PTR_WCRefineLinkParseResult_026cecb0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineLinkParseResult_026cecb0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_a9 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_livePhotoVideoURLs_026adb00);
    _objc_retainAutoreleasedReturnValue();
    local_140 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_140 != 0) {
      lVar3 = *local_108;
      local_148 = 0;
      do {
        do {
          if (*local_108 - lVar3 != 0) {
            _objc_enumerationMutation(*local_108 - lVar3,uVar2);
          }
          uVar4 = *(ulong *)(local_110 + local_148 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_d8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar4 & 1) != 0) &&
             (uVar4 = local_d8,
             (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0), uVar4 != 0)) {
            local_a9 = 1;
            local_cc = 1;
            goto LAB_010365e4;
          }
          local_148 = local_148 + 1;
        } while (local_148 < local_140);
        local_140 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_148 = 0;
      } while (local_140 != 0);
    }
    local_cc = 0;
LAB_010365e4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_cc == 0) {
      local_a9 = 0;
      local_cc = 1;
    }
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

