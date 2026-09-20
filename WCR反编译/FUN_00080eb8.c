// FUN_00080eb8 @ 00080eb8

byte FUN_00080eb8(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,byte param_7,undefined8 param_8,ulong *param_9)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  ulong local_310;
  ulong local_308;
  ulong local_270;
  ulong local_1e0;
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  undefined1 auStack_198 [8];
  long local_190;
  long *local_188;
  ulong local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double local_118;
  undefined8 local_110;
  double local_108;
  ulong local_100;
  ulong local_f8;
  undefined4 local_f0;
  ulong local_e0;
  ulong *local_d8;
  undefined8 local_d0;
  byte local_c1;
  ulong local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_6);
  uVar5 = local_b8;
  local_d8 = param_9;
  local_d0 = param_8;
  local_c1 = param_7;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_valueForKey__0269d128,&cf_headImageView);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar5;
  if (local_d8 != (ulong *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar5 & 1) == 0) {
      local_270 = 0;
    }
    else {
      local_270 = local_e0;
    }
    _objc_retainAutorelease();
    *local_d8 = local_270;
  }
  uVar5 = local_e0;
  if (local_e0 != 0) {
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar3 = local_e0;
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_f8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_valueForKey__0269d128,&cf_wxHighlightedImageView);
      _objc_retainAutoreleasedReturnValue();
      local_100 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      dVar8 = param_3;
      local_128 = param_1;
      local_120 = param_2;
      local_118 = param_3;
      local_110 = param_4;
      local_108 = param_3;
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_bounds_026ca548);
      local_150 = param_3;
      local_148 = dVar8;
      local_140 = param_2;
      local_138 = param_1;
      local_130 = param_1;
      if ((local_108 <= 0.0) || (param_1 <= 0.0)) {
        local_a9 = 1;
      }
      else {
        FUN_00081fbc(local_f8,local_c0,local_c1 & 1,local_d0,1);
        _memset(auStack_198,0,0x40);
        uVar5 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_subviews_026cab40);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        local_308 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,0x10
                  );
        if (local_308 != 0) {
          lVar4 = *local_188;
          local_310 = 0;
          do {
            do {
              dVar6 = param_1;
              dVar9 = param_2;
              dVar7 = dVar8;
              dVar10 = param_3;
              if (*local_188 - lVar4 != 0) {
                _objc_enumerationMutation(*local_188 - lVar4,uVar3);
                dVar6 = param_1;
                dVar9 = param_2;
                dVar7 = dVar8;
                dVar10 = param_3;
              }
              uVar5 = *(ulong *)(local_190 + local_310 * 8);
              puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              local_158 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              bVar1 = false;
              param_1 = dVar6;
              param_2 = dVar9;
              dVar8 = dVar7;
              param_3 = dVar10;
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_bounds_026ca548);
                bVar1 = false;
                param_1 = dVar7;
                param_2 = dVar7;
                dVar8 = dVar9;
                param_3 = dVar6;
                local_1b8 = dVar6;
                local_1b0 = dVar9;
                local_1a8 = dVar7;
                local_1a0 = dVar10;
                if (0.0 < dVar7) {
                  dVar8 = dVar7;
                  param_2 = dVar9;
                  param_1 = dVar6;
                  (*(code *)PTR__objc_msgSend_02578628)(local_158,PTR_s_bounds_026ca548);
                  bVar1 = 0.0 < param_1;
                  param_3 = dVar7;
                  local_1d8 = dVar7;
                  local_1d0 = dVar8;
                  local_1c8 = param_2;
                  local_1c0 = param_1;
                }
              }
              if (bVar1) {
                FUN_00081fbc(local_158,local_c0,local_c1 & 1,local_d0,0);
              }
              local_310 = local_310 + 1;
            } while (local_310 < local_308);
            local_308 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_198,auStack_a8,
                       0x10);
            local_310 = 0;
          } while (local_308 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar5 = local_100;
        if (local_100 != 0) {
          puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar3 = local_100;
          if ((uVar5 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_1e0 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_bounds_026ca548);
            bVar1 = false;
            if (0.0 < dVar8) {
              (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_bounds_026ca548);
              bVar1 = 0.0 < param_1;
            }
            if (bVar1) {
              FUN_00081fbc(local_1e0,local_c0,local_c1 & 1,local_d0,0);
            }
            _objc_storeStrong(&local_1e0,0);
          }
        }
        uVar5 = local_c0;
        FUN_0007804c(local_c0,local_c1 & 1,local_d0);
        if ((uVar5 & 1) != 0) {
          FUN_00073c54(local_f8,3);
        }
        local_a9 = 0;
      }
      local_f0 = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
      goto LAB_00081788;
    }
  }
  local_a9 = 0;
  local_f0 = 1;
LAB_00081788:
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

