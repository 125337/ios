// appendUniqueVariant:to: @ 0102453c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineLinkParser::appendUniqueVariant_to_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint local_1cc;
  ulong local_190;
  ulong local_188;
  long local_148;
  ulong local_138;
  long local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  int local_d8;
  byte local_d1;
  long local_d0;
  ulong local_c8;
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
  local_d1 = 0;
  bVar4 = true;
  if (local_c0 != 0) {
    lVar7 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_url_026a5a28);
    _objc_retainAutoreleasedReturnValue();
    local_d1 = 1;
    local_d0 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar4 = true;
    if (lVar7 != 0) {
      bVar4 = local_c8 == 0;
    }
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if (bVar4) {
    local_d8 = 1;
  }
  else {
    _memset(auStack_120,0,0x40);
    uVar3 = local_c8;
    (*(code *)PTR__objc_retain_02578638)();
    local_188 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
    if (local_188 != 0) {
      lVar7 = *local_110;
      local_190 = 0;
      do {
        do {
          if (*local_110 - lVar7 != 0) {
            _objc_enumerationMutation(*local_110 - lVar7,uVar3);
          }
          uVar8 = *(ulong *)(local_118 + local_190 * 8);
          local_e0 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_url_026a5a28);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_url_026a5a28);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isEqualToString__0269ccc8);
          (*(code *)PTR__objc_release_02578630)(lVar5);
          (*(code *)PTR__objc_release_02578630)(uVar8);
          if ((uVar6 & 1) != 0) {
            local_d8 = 1;
            goto LAB_01024a50;
          }
          uVar6 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_label_026adba8);
          _objc_retainAutoreleasedReturnValue();
          uVar8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar2 = false;
          bVar1 = false;
          bVar4 = false;
          local_1cc = 0;
          if (uVar8 != 0) {
            local_128 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_label_026adba8);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            lVar5 = local_128;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1cc = 0;
            if (lVar5 != 0) {
              local_138 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_label_026adba8);
              _objc_retainAutoreleasedReturnValue();
              bVar1 = true;
              local_148 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_label_026adba8);
              _objc_retainAutoreleasedReturnValue();
              bVar4 = true;
              uVar8 = local_138;
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_isEqualToString__0269ccc8);
              local_1cc = (uint)uVar8;
            }
          }
          if (bVar4) {
            (*(code *)PTR__objc_release_02578630)(local_148);
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_138);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_128);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
          if ((local_1cc & 1) != 0) {
            local_d8 = 1;
            goto LAB_01024a50;
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_d8 = 0;
LAB_01024a50:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_d8 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addObject__0269d180,local_c0);
      local_d8 = 0;
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

