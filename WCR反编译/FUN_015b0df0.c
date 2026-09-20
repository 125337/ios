// FUN_015b0df0 @ 015b0df0

void FUN_015b0df0(undefined8 param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  byte local_24c;
  ulong local_1f0;
  ulong local_1e8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined8 local_170;
  byte local_168;
  byte local_167;
  byte local_161;
  undefined8 local_160;
  long local_148;
  undefined *local_140;
  int local_134;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  byte local_e1;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  lVar8 = *(long *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x38);
  local_b8 = param_2;
  local_b0 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
  if (lVar8 == lVar1) {
    uVar2 = *(ulong *)(param_2 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isUIAccessActive_026b0c08);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_wcr_ensureDurationCacheLoaded_026b0c30);
      local_e1 = (byte)uVar3;
      _memset(auStack_130,0,0x40);
      uVar2 = *(ulong *)(param_2 + 0x20);
      (*(code *)PTR__objc_retain_02578638)();
      local_1e8 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
      if (local_1e8 != 0) {
        lVar1 = *local_120;
        local_1f0 = 0;
        do {
          do {
            if (*local_120 - lVar1 != 0) {
              _objc_enumerationMutation(*local_120 - lVar1,uVar2);
            }
            local_f0 = *(ulong *)(local_128 + local_1f0 * 8);
            lVar9 = *(long *)(param_2 + 0x30);
            lVar8 = *(long *)(param_2 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_wcr_backgroundWorkGeneration_026b0c10)
            ;
            if (lVar9 != lVar8) {
LAB_015b1070:
              local_134 = 2;
              goto LAB_015b135c;
            }
            uVar4 = *(ulong *)(param_2 + 0x38);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isUIAccessActive_026b0c08);
            uVar6 = local_f0;
            if ((uVar4 & 1) == 0) goto LAB_015b1070;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((uVar6 & 1) != 0) &&
               (uVar6 = local_f0,
               (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0), uVar6 != 0)) {
              puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              puVar7 = puVar5;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_140 = puVar7;
              (*(code *)PTR__objc_release_02578630)(puVar5);
              lVar9 = *(long *)(param_2 + 0x38);
              (*(code *)PTR__objc_msgSend_02578628)
                        (lVar9,PTR_s_wcr_durationCacheKeyForPath_attr_026b0c28,local_f0,local_140);
              _objc_retainAutoreleasedReturnValue();
              local_148 = lVar9;
              (*(code *)PTR__objc_msgSend_02578628)(lVar9,PTR_s_length_0269cca0);
              lVar8 = DAT_028e3ae8;
              if (lVar9 == 0) {
                local_134 = 3;
              }
              else {
                (*(code *)PTR__objc_retain_02578638)();
                _objc_sync_enter(lVar8);
                lVar9 = DAT_028e3ae8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028e3ae8,PTR_s_objectForKeyedSubscript__0269d098,local_148);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_release_02578630)();
                if (lVar9 == 0) {
                  local_134 = 0;
                }
                else {
                  local_134 = 3;
                }
                _objc_sync_exit(lVar8);
                (*(code *)PTR__objc_release_02578630)(lVar8);
                if (local_134 == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (*(undefined8 *)(param_2 + 0x38),
                             PTR_s_wcr_computeDurationSecondsSyncFo_026b0c38,local_f0);
                  local_160 = param_1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (*(undefined8 *)(param_2 + 0x38),
                             PTR_s_wcr_storeDuration_forCacheKey__026b0c40,local_148);
                  local_e1 = 1;
                  local_134 = 0;
                }
              }
              _objc_storeStrong(&local_148);
              _objc_storeStrong(&local_140,0);
            }
            local_1f0 = local_1f0 + 1;
          } while (local_1f0 < local_1e8);
          local_1e8 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1f0 = 0;
        } while (local_1e8 != 0);
      }
      local_134 = 0;
LAB_015b135c:
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (*(long *)(param_2 + 0x28) != 0) {
        lVar8 = *(long *)(param_2 + 0x30);
        lVar1 = *(long *)(param_2 + 0x38);
        (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_wcr_backgroundWorkGeneration_026b0c10);
        local_24c = 0;
        if (lVar8 == lVar1) {
          uVar3 = *(undefined8 *)(param_2 + 0x38);
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isUIAccessActive_026b0c08);
          local_24c = (byte)uVar3;
        }
        puVar5 = PTR___dispatch_main_q_02578680;
        local_161 = local_24c & 1;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        local_190 = PTR___NSConcreteStackBlock_02578660;
        local_188 = 0xc2000000;
        local_184 = 0;
        local_180 = FUN_015b1544;
        local_178 = &DAT_02587088;
        uVar3 = *(undefined8 *)(param_2 + 0x28);
        (*(code *)PTR__objc_retain_02578638)();
        local_168 = local_161 & 1;
        local_167 = local_e1 & 1;
        local_170 = uVar3;
        _dispatch_async(puVar5,&local_190);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _objc_storeStrong(&local_170,0);
      }
      goto LAB_015b14d0;
    }
  }
  puVar5 = PTR___dispatch_main_q_02578680;
  if (*(long *)(param_2 + 0x28) != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_e0 = PTR___NSConcreteStackBlock_02578660;
    local_d8 = 0xc2000000;
    local_d4 = 0;
    local_d0 = FUN_015b1508;
    local_c8 = &DAT_025814c8;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = uVar3;
    _dispatch_async(puVar5,&local_e0);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_c0,0);
  }
LAB_015b14d0:
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

