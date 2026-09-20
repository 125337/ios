// FUN_0021ecfc @ 0021ecfc

void FUN_0021ecfc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  ulong local_278;
  ulong local_270;
  double local_250;
  double local_220;
  ulong local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  undefined8 local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  double local_100;
  undefined8 local_f8;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  ulong local_c8;
  int local_bc;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  if (local_b8 == 0) {
    local_b0 = 0;
    local_bc = 1;
  }
  else {
    local_c8 = 0;
    dVar7 = 1.0;
    local_d8 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    local_100 = dVar7;
    local_f8 = param_2;
    local_f0 = param_3;
    local_e8 = param_4;
    _CGRectGetWidth(dVar7,param_2);
    local_220 = dVar7;
    if (dVar7 <= local_d8) {
      local_220 = local_d8;
    }
    local_118 = local_220;
    local_d0 = local_220;
    dVar8 = 1.0;
    local_128 = 1.0;
    local_e0 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    local_150 = dVar8;
    local_148 = dVar7;
    local_140 = param_3;
    local_138 = param_4;
    _CGRectGetHeight(dVar8,dVar7);
    local_250 = dVar8;
    if (dVar8 <= local_128) {
      local_250 = local_128;
    }
    local_158 = local_250;
    local_120 = local_250;
    local_130 = dVar8;
    _memset(auStack_1a0,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_270 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_270 != 0) {
      lVar5 = *local_190;
      local_278 = 0;
      do {
        do {
          if (*local_190 - lVar5 != 0) {
            _objc_enumerationMutation(*local_190 - lVar5,uVar2);
          }
          uVar6 = *(ulong *)(local_198 + local_278 * 8);
          local_160 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_isEqualToString__0269ccc8,&cf__UIBarBackground);
          if ((((uVar6 & 1) == 0) &&
              (uVar6 = local_1a8,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1a8,PTR_s_containsString__0269d0b0,&cf_BarBackground),
              (uVar6 & 1) == 0)) &&
             (uVar6 = local_1a8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1a8,PTR_s_containsString__0269d0b0,&cf_VisualProvider),
             (uVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_frame_026ca640);
            _CGRectGetWidth(local_250,dVar8,param_3);
            dVar8 = local_d0 * DAT_02323c78;
            bVar1 = false;
            param_3 = DAT_02323c78;
            if (dVar8 <= local_250) {
              dVar7 = DAT_02323c78;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_frame_026ca640);
              _CGRectGetHeight(local_250,dVar8,dVar7);
              param_3 = 0.35;
              dVar8 = local_120 * 0.35;
              bVar1 = dVar8 <= local_250;
            }
            uVar6 = local_160;
            if ((local_c8 == 0) && (bVar1)) {
              puVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
              uVar4 = local_160;
              if ((uVar6 & 1) == 0) {
                puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
                if (((uVar4 & 1) == 0) &&
                   (uVar6 = local_1a8,
                   (*(code *)PTR__objc_msgSend_02578628)
                             (local_1a8,PTR_s_isEqualToString__0269ccc8,&cf_UIView),
                   (uVar6 & 1) == 0)) goto LAB_0021f310;
              }
              _objc_storeStrong(&local_c8,local_160);
            }
LAB_0021f310:
            local_bc = 0;
          }
          else {
            uVar6 = local_160;
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar6;
            local_bc = 1;
          }
          _objc_storeStrong(&local_1a8,0);
          if (local_bc != 0) goto LAB_0021f3a4;
          local_278 = local_278 + 1;
        } while (local_278 < local_270);
        local_270 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10
                  );
        local_278 = 0;
      } while (local_270 != 0);
    }
    local_bc = 0;
LAB_0021f3a4:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_c8;
    if (local_bc == 0) {
      if (local_c8 == 0) {
        uVar2 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        uVar2 = local_b8;
        if (uVar6 == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = uVar2;
          local_bc = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_b0 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          local_bc = 1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = uVar2;
        local_bc = 1;
      }
    }
    _objc_storeStrong(&local_c8,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

