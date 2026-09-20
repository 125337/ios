// FUN_003ae180 @ 003ae180

void FUN_003ae180(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  double dVar7;
  ulong local_190;
  ulong local_188;
  ulong local_148;
  double local_140;
  double local_138;
  undefined8 local_130;
  undefined8 local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  long local_110;
  long *local_108;
  ulong local_d8;
  uint local_cc;
  long local_c8;
  double local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  uVar3 = local_b8;
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_c8 = param_6;
  local_c0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) || (local_c8 < 0)) {
    local_b0 = 0;
    local_cc = 1;
  }
  else {
    _memset(auStack_118,0,0x40);
    uVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar5 = *local_108;
      local_190 = 0;
      do {
        do {
          if (*local_108 - lVar5 != 0) {
            _objc_enumerationMutation(*local_108 - lVar5,uVar3);
          }
          uVar6 = *(ulong *)(local_110 + local_190 * 8);
          puVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
          local_d8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          uVar4 = local_d8;
          if ((uVar6 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_120 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_image_026ca678);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = false;
            if ((uVar4 != 0) && (bVar1 = true, 0.0 < local_c0)) {
              dVar7 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
              local_140 = dVar7;
              local_138 = param_2;
              local_130 = param_3;
              local_128 = param_4;
              _CGRectGetWidth(dVar7,param_2,param_3);
              param_3 = 0x3ff0000000000000;
              param_2 = local_c0 - 1.0;
              bVar1 = param_2 <= dVar7;
            }
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar4 = local_120;
            if (bVar1) {
              (*(code *)PTR__objc_retain_02578638)();
              local_b0 = uVar4;
            }
            local_cc = (uint)bVar1;
            _objc_storeStrong(&local_120,0);
            if (local_cc != 0) goto LAB_003ae55c;
          }
          uVar4 = local_d8;
          FUN_003ae180(local_c0,local_d8,local_c8 + -1);
          _objc_retainAutoreleasedReturnValue();
          local_148 = uVar4;
          if (uVar4 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_b0 = uVar4;
          }
          local_cc = (uint)(uVar4 != 0);
          _objc_storeStrong(&local_148,0);
          if (local_cc != 0) goto LAB_003ae55c;
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_118,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_cc = 0;
LAB_003ae55c:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_cc == 0) {
      local_b0 = 0;
      local_cc = 1;
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

