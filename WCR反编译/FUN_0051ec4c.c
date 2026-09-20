// FUN_0051ec4c @ 0051ec4c

void FUN_0051ec4c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  uint local_210;
  uint local_20c;
  ulong local_1e8;
  ulong local_1e0;
  ulong local_198;
  double local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  double local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  ulong local_150;
  ulong local_148;
  byte local_139;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  char *local_f0;
  char *local_e8;
  char *local_d0;
  uint local_c4;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = param_6;
  if ((local_b8 == 0) || (param_6 + -6 != 0 && 5 < param_6)) {
    local_b0 = 0;
    local_c4 = 1;
  }
  else {
    pcVar1 = "TLProfileImageView";
    _objc_getClass(param_6 + -6);
    pcVar2 = "TLProfileMediaBackgroundView";
    local_d0 = pcVar1;
    _objc_getClass();
    pcVar1 = "MMHeadImageView";
    local_e8 = pcVar2;
    _objc_getClass();
    local_f0 = pcVar1;
    _memset(auStack_138,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1e0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1e0 != 0) {
      lVar5 = *local_128;
      local_1e8 = 0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_130 + local_1e8 * 8);
          local_f8 = uVar6;
          if ((local_f0 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,local_f0),
             (uVar6 & 1) == 0)) {
            if (local_d0 == (char *)0x0) {
LAB_0051ee90:
              local_210 = 0;
              if (local_e8 != (char *)0x0) {
                uVar6 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_f8,PTR_s_isKindOfClass__0269cd68,local_e8);
                local_210 = (uint)uVar6;
              }
              local_20c = local_210;
            }
            else {
              uVar6 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_isKindOfClass__0269cd68,local_d0)
              ;
              local_20c = 1;
              if ((uVar6 & 1) == 0) goto LAB_0051ee90;
            }
            uVar6 = local_f8;
            local_139 = (byte)local_20c & 1;
            if ((local_20c & 1) != 0) {
              puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
              if ((uVar6 & 1) != 0) {
                uVar6 = local_f8;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_image_026ca678);
                _objc_retainAutoreleasedReturnValue();
                local_148 = uVar6;
                if (uVar6 != 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_b0 = uVar6;
                }
                local_c4 = (uint)(uVar6 != 0);
                _objc_storeStrong(&local_148,0);
                if (local_c4 != 0) goto LAB_0051f2d0;
              }
            }
            uVar6 = local_f8;
            puVar4 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar6 & 1) != 0) {
              uVar6 = local_f8;
              (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_image_026ca678);
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar6;
              if (uVar6 == 0) {
LAB_0051f1bc:
                local_c4 = 0;
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
                local_170 = param_1;
                local_168 = param_2;
                local_160 = param_3;
                local_158 = param_4;
                _CGRectGetWidth(param_1,param_2);
                param_2 = 0x405e000000000000;
                if (param_1 <= 120.0) goto LAB_0051f1bc;
                (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
                local_190 = param_1;
                local_188 = param_2;
                local_180 = param_3;
                local_178 = param_4;
                _CGRectGetHeight(param_1,param_2);
                uVar6 = local_150;
                param_2 = 0x4054000000000000;
                if (param_1 <= 80.0) goto LAB_0051f1bc;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar6;
                local_c4 = 1;
              }
              _objc_storeStrong(&local_150,0);
              if (local_c4 != 0) goto LAB_0051f2d0;
            }
            uVar6 = local_f8;
            FUN_0051ec4c(local_f8,local_c0 + 1);
            _objc_retainAutoreleasedReturnValue();
            local_198 = uVar6;
            if (uVar6 != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar6;
            }
            local_c4 = (uint)(uVar6 != 0);
            _objc_storeStrong(&local_198,0);
            if (local_c4 != 0) goto LAB_0051f2d0;
          }
          local_1e8 = local_1e8 + 1;
        } while (local_1e8 < local_1e0);
        local_1e0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
                  );
        local_1e8 = 0;
      } while (local_1e0 != 0);
    }
    local_c4 = 0;
LAB_0051f2d0:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_c4 == 0) {
      local_b0 = 0;
      local_c4 = 1;
    }
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

