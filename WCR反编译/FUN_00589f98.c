// FUN_00589f98 @ 00589f98

double FUN_00589f98(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  uint local_1dc;
  ulong local_170;
  ulong local_168;
  ulong local_150;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  double local_c0;
  ulong local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  dVar7 = 1.7976931348623157e+308;
  local_c0 = 1.7976931348623157e+308;
  _memset(auStack_108,0,0x40);
  if (local_b8 == 0) {
    local_150 = *(ulong *)PTR____NSArray0___02578280;
  }
  else {
    local_150 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_150,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10);
  if (local_168 != 0) {
    lVar5 = *local_f8;
    local_170 = 0;
    do {
      do {
        if (*local_f8 - lVar5 != 0) {
          _objc_enumerationMutation(*local_f8 - lVar5,local_150);
        }
        uVar6 = *(ulong *)(local_100 + local_170 * 8);
        puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_c8 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar6 & 1) != 0) {
          uVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar6;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          local_120[0] = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_120[0];
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120[0],PTR_s_isEqualToString__0269ccc8,&cf_firing);
          if ((uVar6 & 1) == 0) {
            uVar6 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_1dc = 0;
            if ((uVar4 & 1) != 0) {
              uVar4 = local_120[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120[0],PTR_s_isEqualToString__0269ccc8,&cf_pending);
              local_1dc = (uint)uVar4;
            }
            (*(code *)PTR__objc_release_02578630)(uVar6);
            if ((local_1dc & 1) != 0) {
              uVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_fireAt);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if (dVar7 < local_c0) {
                local_c0 = dVar7;
              }
            }
            uVar6 = local_120[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_120[0],PTR_s_isEqualToString__0269ccc8,&cf_triggered);
            if (((uVar6 & 1) != 0) && (uVar6 = local_c8, FUN_0057aaf8(), (uVar6 & 1) == 0)) {
              uVar6 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_objectForKeyedSubscript__0269d098,&cf_triggeredAt);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar6);
              if ((0.0 < dVar7) && (dVar7 = dVar7 + 86400.0, dVar7 < local_c0)) {
                local_c0 = dVar7;
              }
            }
            bVar1 = false;
          }
          else {
            dVar7 = 0.0;
            local_b0 = 0.0;
            bVar1 = true;
          }
          _objc_storeStrong(local_120,0);
          bVar2 = true;
          if (bVar1) goto LAB_0058a578;
        }
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = local_150;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_150,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,
                 0x10);
      local_170 = 0;
    } while (local_168 != 0);
  }
  bVar2 = false;
LAB_0058a578:
  (*(code *)PTR__objc_release_02578630)(local_150);
  if (!bVar2) {
    local_b0 = local_c0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_b0;
}

