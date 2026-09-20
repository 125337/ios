// FUN_00327f30 @ 00327f30

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00327f30(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long *plVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  ulong local_250;
  ulong local_248;
  undefined **local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  byte local_152;
  byte local_151;
  long local_150;
  undefined **local_148;
  undefined **local_140;
  ulong local_138;
  long local_130;
  undefined **local_128;
  undefined **local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  code *local_108;
  undefined *local_100;
  long local_f8;
  undefined **local_f0;
  undefined **local_e8;
  long local_e0 [3];
  long *local_c8;
  uint local_bc;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_3);
  plVar6 = &local_b8;
  local_b8 = 0;
  _objc_storeStrong(plVar6,param_4);
  if ((local_b0 == 0) || (local_b8 == 0)) {
    local_bc = 1;
  }
  else {
    FUN_00324b68();
    _objc_retainAutoreleasedReturnValue();
    lVar11 = local_b8;
    local_c8 = plVar6;
    FUN_00324c30();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR___NSConcreteGlobalBlock_0257c248;
    local_e0[0] = lVar11;
    _objc_retainBlock();
    lVar11 = local_e0[0];
    ppuVar8 = &local_118;
    local_118 = PTR___NSConcreteStackBlock_02578660;
    local_110 = 0xc2000000;
    local_10c = 0;
    local_108 = FUN_0032939c;
    local_100 = &DAT_0257c1c8;
    local_e8 = ppuVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_f8 = lVar11;
    _objc_retainBlock();
    local_120 = (undefined **)0x7fffffffffffffff;
    local_128 = (undefined **)0x7fffffffffffffff;
    local_f0 = ppuVar8;
    FUN_00326988(local_c8,local_b8,&local_120,&local_128);
    local_130 = 0;
    for (local_138 = 0; uVar9 = local_138, plVar6 = local_c8,
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
        (long)uVar9 < (long)plVar6; local_138 = local_138 + 1) {
      uVar9 = local_138;
      FUN_00327118(local_138,local_b8);
      if ((uVar9 & 1) == 0) {
        local_130 = local_130 + 1;
      }
    }
    local_140 = (undefined **)0x7fffffffffffffff;
    local_148 = (undefined **)0x7fffffffffffffff;
    local_150 = 0;
    local_151 = 0;
    local_152 = 0;
    _memset(auStack_1a0,0,0x40);
    uVar9 = local_b0;
    FUN_00328b48();
    _objc_retainAutoreleasedReturnValue();
    local_248 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_248 != 0) {
      lVar11 = *local_190;
      local_250 = 0;
      do {
        do {
          if (*local_190 - lVar11 != 0) {
            _objc_enumerationMutation(*local_190 - lVar11,uVar9);
          }
          uVar12 = *(ulong *)(local_198 + local_250 * 8);
          local_160 = uVar12;
          if (uVar12 != 0) {
            FUN_00310b74();
            if ((uVar12 & 1) == 0) {
              ppuVar7 = local_e8;
              (*(code *)local_e8[2])(local_e8,local_160);
              _objc_retainAutoreleasedReturnValue();
              ppuVar8 = local_f0;
              local_1a8 = ppuVar7;
              (*(code *)local_f0[2])(local_f0,ppuVar7);
              if (ppuVar8 == (undefined **)0x7fffffffffffffff) {
                if (((local_151 & 1) != 0) &&
                   (ppuVar7 = local_1a8,
                   (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_length_0269cca0),
                   ppuVar7 != (undefined **)0x0)) {
                  local_152 = 1;
                }
                local_bc = 6;
              }
              else {
                local_151 = 1;
                local_150 = local_150 + 1;
                if ((local_140 == (undefined **)0x7fffffffffffffff) ||
                   ((long)ppuVar8 < (long)local_140)) {
                  local_140 = ppuVar8;
                }
                if ((local_148 == (undefined **)0x7fffffffffffffff) ||
                   ((long)local_148 < (long)ppuVar8)) {
                  local_148 = ppuVar8;
                }
                local_bc = 0;
              }
              _objc_storeStrong(&local_1a8,0);
            }
            else {
              local_151 = 1;
              local_150 = local_150 + 1;
              if ((local_140 == (undefined **)0x7fffffffffffffff) || (0 < (long)local_140)) {
                local_140 = (undefined **)0x0;
              }
              if ((local_148 == (undefined **)0x7fffffffffffffff) || ((long)local_148 < 0)) {
                local_148 = (undefined **)0x0;
              }
            }
          }
          local_250 = local_250 + 1;
        } while (local_250 < local_248);
        local_248 = uVar9;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar9,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_250 = 0;
      } while (local_248 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar9);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_contentOffset_0269dd18);
    ppuVar7 = local_128;
    bVar1 = param_2 <= 20.0;
    bVar3 = false;
    if (((0 < local_130) && (bVar3 = false, local_130 <= local_150)) &&
       (bVar3 = false, local_140 == local_120)) {
      bVar3 = local_148 == local_128;
    }
    bVar4 = false;
    if (((bVar1) && (bVar4 = false, 1 < local_130)) &&
       ((bVar4 = false, local_150 == local_130 + -1 && (bVar4 = false, local_140 == local_120)))) {
      plVar6 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
      bVar4 = false;
      if (ppuVar7 == (undefined **)((long)plVar6 + -1)) {
        bVar4 = local_148 == (undefined **)((long)local_128 + -1);
      }
    }
    uVar9 = local_b0;
    bVar2 = 0;
    if ((bVar1) && (bVar2 = 0, 0 < local_150)) {
      bVar2 = local_152;
    }
    bVar5 = false;
    if (((bVar1) && (bVar5 = false, local_130 < local_150)) &&
       (bVar5 = false, local_140 != (undefined **)0x7fffffffffffffff)) {
      bVar5 = local_148 != (undefined **)0x7fffffffffffffff;
    }
    bVar1 = true;
    if (((!bVar3) && (bVar1 = true, !bVar4)) && (bVar1 = true, (bVar2 & 1) == 0)) {
      bVar1 = bVar5;
    }
    if (bVar1) {
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_140);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar9,&_kWCContactsTopShortcutActualFirstIndexKey,puVar10,1);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      uVar9 = local_b0;
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_148);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar9,&_kWCContactsTopShortcutActualLastIndexKey,puVar10,1);
      (*(code *)PTR__objc_release_02578630)(puVar10);
      uVar9 = local_b0;
      puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,DAT_028c9b68)
      ;
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar9,&_kWCContactsTopShortcutCacheGenerationKey,puVar10,1);
      (*(code *)PTR__objc_release_02578630)(puVar10);
    }
    local_bc = (uint)!bVar1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(local_e0,0);
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

