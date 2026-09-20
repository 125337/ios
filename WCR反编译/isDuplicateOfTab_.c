// isDuplicateOfTab: @ 01519b88

/* Function Stack Size: 0x18 bytes */

bool WCRefineTelegramGroupingStore::isDuplicateOfTab_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_140;
  ulong local_138;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
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
  _memset(auStack_110,0,0x40);
  IVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_tabs_026b01e0);
  _objc_retainAutoreleasedReturnValue();
  local_138 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_138 != 0) {
    lVar5 = *local_100;
    local_140 = 0;
    do {
      do {
        if (*local_100 - lVar5 != 0) {
          _objc_enumerationMutation(*local_100 - lVar5,IVar2);
        }
        uVar6 = *(ulong *)(local_108 + local_140 * 8);
        local_d0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_kind_026a27e8);
        uVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8);
        if (uVar6 == uVar3) {
          uVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8);
          if (uVar3 == 2) {
            uVar3 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_tabId_026a8270);
            _objc_retainAutoreleasedReturnValue();
            uVar6 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_tabId_026a8270);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isEqualToString__0269ccc8);
            (*(code *)PTR__objc_release_02578630)(uVar6);
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if ((uVar4 & 1) != 0) {
              local_a9 = 1;
              bVar1 = true;
              goto LAB_01519f58;
            }
          }
          else {
            uVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8);
            if (uVar3 == 1) {
              uVar3 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_scopeMask_026a8338);
              uVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_scopeMask_026a8338);
              if (uVar3 == uVar6) {
                local_a9 = 1;
                bVar1 = true;
                goto LAB_01519f58;
              }
            }
            else {
              uVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8);
              if ((((uVar3 == 4) ||
                   (uVar3 = local_c8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8), uVar3 == 3))
                  || (uVar3 = local_c8,
                     (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8), uVar3 == 5
                     )) || (uVar3 = local_c8,
                           (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_kind_026a27e8),
                           uVar3 == 0)) {
                local_a9 = 1;
                bVar1 = true;
                goto LAB_01519f58;
              }
            }
          }
        }
        local_140 = local_140 + 1;
      } while (local_140 < local_138);
      local_138 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
      local_140 = 0;
    } while (local_138 != 0);
  }
  bVar1 = false;
LAB_01519f58:
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_a9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

