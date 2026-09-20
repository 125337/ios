// FUN_00361a9c @ 00361a9c

double FUN_00361a9c(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  double dVar5;
  undefined8 uVar6;
  double local_200;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1b0;
  uint local_18c;
  ulong local_188;
  undefined *local_180;
  double local_178;
  double local_170;
  double local_168;
  undefined8 local_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  double local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  undefined *local_f0;
  undefined *local_e8;
  double local_e0;
  undefined4 local_d8;
  byte local_d1;
  undefined *local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c1 = 0;
  local_d1 = 0;
  local_18c = 1;
  if (local_b8 != 0) {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    local_18c = 1;
    local_c0 = uVar4;
    if (uVar4 != 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_d1 = 1;
      local_d0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18c = (uint)puVar1 ^ 1;
    }
  }
  if ((local_d1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if ((local_18c & 1) == 0) {
    dVar5 = 0.0;
    local_e0 = 0.0;
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
    local_e8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_1b0 = *(undefined **)PTR____NSArray0___02578280;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_1b0;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _memset(auStack_138,0,0x40);
    puVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1d8 != (undefined *)0x0) {
      lVar3 = *local_128;
      local_1e0 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar3 != 0) {
            _objc_enumerationMutation(*local_128 - lVar3,puVar1);
          }
          uVar4 = *(ulong *)(local_130 + (long)local_1e0 * 8);
          local_f8 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isHidden_026ca768);
          if (((uVar4 & 1) == 0) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_alpha_026ca4d8),
             param_2 = DAT_02323c88, DAT_02323c88 <= dVar5)) {
            FUN_003b02a4(local_f8,local_b8,&local_e0,local_e8,8);
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1e0 = (undefined *)0x0;
      } while (local_1d8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar6 = 0;
    local_140 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_safeAreaInsets_026ca828);
    local_180 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (0.0 < local_e0) {
      local_168 = local_e0;
      local_170 = param_3 + 74.0;
      local_200 = local_170;
      if (local_170 <= local_e0) {
        local_200 = local_e0;
      }
      local_178 = local_200;
      local_e0 = local_200;
    }
    puVar1 = local_e8;
    local_160 = uVar6;
    local_158 = param_2;
    local_150 = param_3;
    local_148 = param_4;
    local_140 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_componentsJoinedByString__0269d140,&cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_stringWithFormat__0269cca8,&cf___1f___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar4 = local_b8;
    _objc_getAssociatedObject(local_b8,&DAT_028ca12b);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isEqualToString__0269ccc8,local_180);
    if ((uVar4 & 1) == 0) {
      _objc_setAssociatedObject(local_b8,&DAT_028ca12b,local_180,3);
    }
    local_b0 = local_e0;
    local_d8 = 1;
    _objc_storeStrong(&local_188);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
  }
  else {
    local_b0 = 0.0;
    local_d8 = 1;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

