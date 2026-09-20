// FUN_0033f294 @ 0033f294

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_0033f294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined *local_210;
  undefined *local_208;
  undefined *local_1e0;
  undefined *local_1c8;
  undefined *local_1b0;
  uint local_170;
  undefined *local_168;
  undefined *local_158;
  undefined *local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  undefined4 local_f8;
  byte local_e1;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  byte local_c1;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = (undefined *)0x0;
  _objc_storeStrong(&local_d0,param_1);
  local_d8 = (undefined *)0x0;
  _objc_storeStrong(&local_d8,param_2);
  local_e0 = (undefined *)0x0;
  _objc_storeStrong(&local_e0,param_3);
  local_170 = 1;
  if ((DAT_028c9ee1 & 1) == 0) {
    uVar4 = (uint)local_d8;
    FUN_0033f024();
    local_170 = 1;
    if ((uVar4 & 1) == 0) {
      local_170 = (uint)local_e0;
      FUN_0033f024();
    }
  }
  local_e1 = (byte)local_170 & 1;
  if ((local_170 & 1) == 0) {
    local_c1 = 0;
  }
  else {
    _memset(auStack_140,0,0x40);
    local_1b0 = local_d0;
    bVar1 = local_d0 == (undefined *)0x0;
    if (bVar1) {
      local_1b0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_148 = local_1b0;
    }
    local_c0 = local_1b0;
    local_1c8 = local_d8;
    bVar2 = local_d8 == (undefined *)0x0;
    if (bVar2) {
      local_1c8 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_158 = local_1c8;
    }
    local_b8 = local_1c8;
    local_1e0 = local_e0;
    bVar3 = local_e0 == (undefined *)0x0;
    if (bVar3) {
      local_1e0 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_168 = local_1e0;
    }
    local_b0 = local_1e0;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0,3
              );
    _objc_retainAutoreleasedReturnValue();
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_168);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    local_208 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
    if (local_208 != (undefined *)0x0) {
      lVar7 = *local_130;
      local_210 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar7 != 0) {
            _objc_enumerationMutation(*local_130 - lVar7,puVar5);
          }
          uVar8 = *(ulong *)(local_138 + (long)local_210 * 8);
          puVar6 = PTR__OBJC_CLASS___NSNull_026ce0e8;
          local_100 = uVar8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar6);
          if ((uVar8 & 1) == 0) {
            FUN_0033ab8c(local_100);
          }
          local_210 = local_210 + 1;
        } while (local_210 < local_208);
        local_208 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_210 = (undefined *)0x0;
      } while (local_208 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    local_c1 = 1;
  }
  local_f8 = 1;
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_c1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

