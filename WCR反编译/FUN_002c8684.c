// FUN_002c8684 @ 002c8684

void FUN_002c8684(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,byte param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong local_190;
  ulong local_188;
  ulong local_158;
  ulong local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulong local_128;
  ulong local_120 [3];
  undefined1 auStack_108 [8];
  long local_100;
  long *local_f8;
  ulong local_c8;
  uint local_c0;
  byte local_b9;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_b9 = param_6;
  if (local_b8 == 0) {
    local_b0 = 0;
    local_c0 = 1;
  }
  else {
    _memset(auStack_108,0,0x40);
    uVar1 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar4 = *local_f8;
      local_190 = 0;
      do {
        do {
          if (*local_f8 - lVar4 != 0) {
            _objc_enumerationMutation(*local_f8 - lVar4,uVar1);
          }
          uVar5 = *(ulong *)(local_100 + local_190 * 8);
          local_c8 = uVar5;
          if ((local_b9 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = local_c8;
              local_120[0] = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_superview_026cab50);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              local_128 = uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar3);
              uVar5 = local_120[0];
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_120[0],PTR_s_containsString__0269d0b0,&cf_TabBar);
              if ((uVar5 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_frame_026ca640);
                local_148 = param_1;
                local_140 = param_2;
                local_138 = param_3;
                local_130 = param_4;
                _CGRectGetWidth(param_1,param_2);
                param_2 = 0x403c000000000000;
                if (28.0 <= param_1) goto LAB_002c8998;
LAB_002c8a98:
                local_c0 = 0;
              }
              else {
LAB_002c8998:
                uVar5 = local_120[0];
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_120[0],PTR_s_containsString__0269d0b0,&cf_Badge);
                if (((uVar5 & 1) != 0) ||
                   (uVar3 = local_128,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_128,PTR_s_containsString__0269d0b0,&cf_Badge), uVar5 = local_c8,
                   (uVar3 & 1) != 0)) goto LAB_002c8a98;
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar5;
                local_c0 = 1;
              }
              _objc_storeStrong(&local_128);
              _objc_storeStrong(local_120,0);
              if (local_c0 != 0) goto LAB_002c8d44;
            }
          }
          uVar5 = local_c8;
          if ((local_b9 & 1) == 0) {
            puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar5 & 1) != 0) {
              uVar5 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
              _NSStringFromClass();
              _objc_retainAutoreleasedReturnValue();
              local_150 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_containsString__0269d0b0,&cf_Badge);
              if (((uVar5 & 1) == 0) &&
                 (uVar3 = local_150,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_150,PTR_s_containsString__0269d0b0,&cf_Background),
                 uVar5 = local_c8, (uVar3 & 1) == 0)) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = uVar5;
                local_c0 = 1;
              }
              else {
                local_c0 = 0;
              }
              _objc_storeStrong(&local_150,0);
              if (local_c0 != 0) goto LAB_002c8d44;
            }
          }
          uVar5 = local_c8;
          FUN_002c8684(local_c8,local_b9 & 1);
          _objc_retainAutoreleasedReturnValue();
          local_158 = uVar5;
          if (uVar5 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar5;
          }
          local_c0 = (uint)(uVar5 != 0);
          _objc_storeStrong(&local_158,0);
          if (local_c0 != 0) goto LAB_002c8d44;
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_108,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_c0 = 0;
LAB_002c8d44:
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_c0 == 0) {
      local_b0 = 0;
      local_c0 = 1;
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

