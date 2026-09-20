// appendDouyinImageURLCandidates:keys:to: @ 01037914

/* Function Stack Size: 0x28 bytes */

void WCRefineLinkParser::appendDouyinImageURLCandidates_keys_to_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong local_188;
  ulong local_180;
  ulong local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  undefined8 local_e8;
  ulong local_e0;
  undefined4 local_d4;
  long local_d0;
  ulong local_c8;
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
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_5);
  if ((local_d0 == 0) ||
     (uVar1 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
     uVar3 = local_c0, uVar1 == 0)) {
    local_d4 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_c0;
    if ((uVar3 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      uVar3 = local_c0;
      if ((uVar1 & 1) == 0) {
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar1 = local_c0;
        if ((uVar3 & 1) == 0) {
          local_d4 = 1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = uVar1;
          _memset(auStack_128,0,0x40);
          uVar3 = local_c8;
          (*(code *)PTR__objc_retain_02578638)();
          local_180 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_a8,
                     0x10);
          if (local_180 != 0) {
            lVar4 = *local_118;
            local_188 = 0;
            do {
              do {
                if (*local_118 - lVar4 != 0) {
                  _objc_enumerationMutation(*local_118 - lVar4,uVar3);
                }
                local_e8 = *(undefined8 *)(local_120 + local_188 * 8);
                uVar1 = local_e0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_objectForKeyedSubscript__0269d098,local_e8);
                _objc_retainAutoreleasedReturnValue();
                local_130 = uVar1;
                if (uVar1 != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_b0,PTR_s_appendDouyinImageURLCandidates_t_026adf30,uVar1,local_d0
                            );
                }
                _objc_storeStrong(&local_130,0);
                local_188 = local_188 + 1;
              } while (local_188 < local_180);
              local_180 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,
                         auStack_a8,0x10);
              local_188 = 0;
            } while (local_180 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          _objc_storeStrong(&local_e0,0);
          local_d4 = 0;
        }
        goto LAB_01037c84;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_appendDouyinImageURLCandidates_t_026adf30,local_c0,local_d0);
    local_d4 = 1;
  }
LAB_01037c84:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

