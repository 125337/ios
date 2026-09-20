// sumVerifiedAmountsForRecords: @ 01511fc8

/* Function Stack Size: 0x18 bytes */

double WCRefineSponsorSecureStore::sumVerifiedAmountsForRecords_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  double local_c8;
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
  dVar5 = 0.0;
  local_c8 = 0.0;
  _memset(auStack_110,0,0x40);
  uVar1 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_138 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_138 != 0) {
    lVar3 = *local_100;
    local_140 = 0;
    do {
      do {
        if (*local_100 - lVar3 != 0) {
          _objc_enumerationMutation(*local_100 - lVar3,uVar1);
        }
        uVar4 = *(ulong *)(local_108 + local_140 * 8);
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d0 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
        if (((uVar4 & 1) != 0) &&
           ((*(code *)PTR__objc_msgSend_02578628)
                      (local_b0,PTR_s_verifiedAmountForRecord__026a7e30,local_d0), 0.0 < dVar5)) {
          dVar5 = local_c8 + dVar5;
          local_c8 = dVar5;
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  dVar5 = local_c8;
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return dVar5;
}

