// FUN_01b03aa4 @ 01b03aa4

double FUN_01b03aa4(undefined8 param_1)

{
  double dVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  double local_2d0;
  ulong local_288;
  ulong local_280;
  ulong local_240;
  ulong local_238;
  ulong local_210;
  ulong local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined4 local_194;
  ulong local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  double local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  local_138 = 0.0;
  uVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_homeAvatarStripItemMeta_026a2290);
  _objc_retainAutoreleasedReturnValue();
  local_210 = uVar2;
  if (uVar2 == 0) {
    local_210 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = local_210;
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_188,0,0x40);
  uVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  local_238 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_238 != 0) {
    lVar6 = *local_178;
    local_240 = 0;
    do {
      do {
        if (*local_178 - lVar6 != 0) {
          _objc_enumerationMutation(*local_178 - lVar6,uVar2);
        }
        uVar7 = *(ulong *)(local_180 + local_240 * 8);
        local_148 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar7,PTR_s_objectForKeyedSubscript__0269d098,&cf_usernames);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_190 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar7 & 1) == 0) {
          local_194 = 3;
        }
        else {
          _memset(auStack_1e0,0,0x40);
          uVar7 = local_190;
          (*(code *)PTR__objc_retain_02578638)();
          local_280 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_128,
                     0x10);
          if (local_280 != 0) {
            lVar8 = *local_1d0;
            local_288 = 0;
            do {
              do {
                if (*local_1d0 - lVar8 != 0) {
                  _objc_enumerationMutation(*local_1d0 - lVar8,uVar7);
                }
                local_1a0 = *(undefined8 *)(local_1d8 + local_288 * 8);
                uVar4 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_objectForKeyedSubscript__0269d098,local_1a0);
                _objc_retainAutoreleasedReturnValue();
                puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                local_1e8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
                if ((uVar4 & 1) == 0) {
                  local_194 = 5;
                }
                else {
                  uVar4 = local_1e8;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_verticalOffset);
                  _objc_retainAutoreleasedReturnValue();
                  uVar5 = uVar4;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  dVar1 = local_138;
                  if ((uVar5 & 1) == 0) {
                    local_194 = 5;
                  }
                  else {
                    uVar4 = local_1e8;
                    local_2d0 = local_138;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_verticalOffset)
                    ;
                    _objc_retainAutoreleasedReturnValue();
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_2d0 = ABS(local_2d0);
                    (*(code *)PTR__objc_release_02578630)(uVar4);
                    if (local_2d0 <= dVar1) {
                      local_2d0 = dVar1;
                    }
                    local_138 = local_2d0;
                    local_194 = 0;
                  }
                }
                _objc_storeStrong(&local_1e8,0);
                local_288 = local_288 + 1;
              } while (local_288 < local_280);
              local_280 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,
                         auStack_128,0x10);
              local_288 = 0;
            } while (local_280 != 0);
          }
          (*(code *)PTR__objc_release_02578630)(uVar7);
          local_194 = 0;
        }
        _objc_storeStrong(&local_190,0);
        local_240 = local_240 + 1;
      } while (local_240 < local_238);
      local_238 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      local_240 = 0;
    } while (local_238 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (40.0 < local_138) {
    local_138 = 40.0;
  }
  dVar1 = local_138;
  local_194 = 1;
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return dVar1;
}

