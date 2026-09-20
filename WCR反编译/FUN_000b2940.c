// FUN_000b2940 @ 000b2940

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_000b2940(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined *local_238;
  undefined *local_230;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  double local_1b0;
  double dStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  double local_190;
  double dStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  double local_150;
  double dStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_129;
  ulong local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  ulong local_e0;
  undefined *local_d8 [3];
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar3;
  FUN_000b308c(local_b0,local_b8,puVar3,0);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  puVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
  _objc_retainAutoreleasedReturnValue();
  local_d8[0] = puVar3;
  _memset(auStack_120,0,0x40);
  puVar3 = local_c0;
  (*(code *)PTR__objc_retain_02578638)();
  local_230 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_230 != (undefined *)0x0) {
    lVar5 = *local_110;
    local_238 = (undefined *)0x0;
    do {
      do {
        if (*local_110 - lVar5 != 0) {
          _objc_enumerationMutation(*local_110 - lVar5,puVar3);
        }
        uVar6 = *(ulong *)(local_118 + (long)local_238 * 8);
        local_129 = 0;
        local_e0 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isHidden_026ca768);
        bVar2 = true;
        if ((uVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_alpha_026ca4d8);
          bVar2 = true;
          param_2 = DAT_02323d38;
          if (DAT_02323d38 < param_1) {
            uVar6 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_superview_026cab50);
            _objc_retainAutoreleasedReturnValue();
            local_129 = 1;
            bVar2 = uVar6 == 0;
            local_128 = uVar6;
          }
        }
        if ((local_129 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_128);
        }
        uVar6 = local_e0;
        if (!bVar2) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
          local_170 = param_1;
          local_168 = param_2;
          local_160 = param_3;
          local_158 = param_4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_convertRect_toView__0269ded8,local_b0);
          local_190 = param_1;
          dStack_188 = param_2;
          local_180 = param_3;
          uStack_178 = param_4;
          local_150 = param_1;
          dStack_148 = param_2;
          local_140 = param_3;
          uStack_138 = param_4;
          _CGRectGetWidth(param_1,param_2);
          if (8.0 <= param_1) {
            dStack_1a8 = dStack_148;
            local_1b0 = local_150;
            uStack_198 = uStack_138;
            local_1a0 = local_140;
            param_1 = local_150;
            param_3 = local_140;
            param_4 = uStack_138;
            _CGRectGetHeight(local_150,dStack_148);
            param_2 = 8.0;
            if (8.0 <= param_1) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d8[0],PTR_s_addObject__0269d180,local_e0);
              goto LAB_000b2dc0;
            }
          }
          param_2 = 8.0;
        }
LAB_000b2dc0:
        local_238 = local_238 + 1;
      } while (local_238 < local_230);
      local_230 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10)
      ;
      local_238 = (undefined *)0x0;
    } while (local_230 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar1 = local_b0;
  puVar3 = local_d8[0];
  local_1d8 = PTR___NSConcreteGlobalBlock_02578658;
  local_1d0 = 0xd0800000;
  local_1cc = 0;
  local_1c8 = FUN_000b341c;
  local_1c0 = &DAT_02579d80;
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_sortUsingComparator__0269d168,&local_1d8);
  puVar3 = local_d8[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1b8);
  _objc_storeStrong(local_d8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar3);
  return;
}

