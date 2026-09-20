// FUN_001442b4 @ 001442b4

void FUN_001442b4(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  ulong local_1d0;
  ulong local_1c8;
  double local_1a8;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  double local_e8;
  undefined *local_d0;
  undefined4 local_c4;
  double local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  local_c0 = param_1;
  if (local_b8 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_c4 = 1;
    local_b0 = puVar1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    if (local_c0 <= 1.0) {
      local_1a8 = 1.7976931348623157e+308;
    }
    else {
      local_1a8 = local_c0 * 0.85;
    }
    local_e8 = local_1a8;
    local_d0 = puVar1;
    _memset(auStack_130,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1c8 != 0) {
      lVar4 = *local_120;
      local_1d0 = 0;
      do {
        do {
          if (*local_120 - lVar4 != 0) {
            _objc_enumerationMutation(*local_120 - lVar4,uVar2);
          }
          uVar5 = *(ulong *)(local_128 + local_1d0 * 8);
          local_f0 = uVar5;
          if (((uVar5 != 0) &&
              ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768),
              (uVar5 & 1) == 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_alpha_026ca4d8), uVar5 = local_f0
             , DAT_02323d38 <= local_1a8)) {
            puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
            dVar7 = DAT_02323d38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar3 = local_f0;
            if ((uVar5 & 1) == 0) {
              puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar3 & 1) == 0) {
                uVar5 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                local_138 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_containsString__0269d0b0,&cf_Indicator);
                if ((uVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_frame_026ca640);
                  _CGRectGetWidth();
                  dVar6 = local_1a8;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_frame_026ca640);
                  _CGRectGetHeight(dVar6,dVar7);
                  dVar7 = local_1a8;
                  if ((local_1a8 <= 8.0) || (dVar7 = dVar6, dVar6 <= 8.0)) {
                    local_1a8 = dVar7;
                    local_c4 = 3;
                  }
                  else if (local_1a8 < local_e8) {
                    uVar5 = local_f0;
                    FUN_00145f70(local_f0,2);
                    if ((uVar5 & 1) == 0) {
                      local_c4 = 3;
                    }
                    else {
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_d0,PTR_s_addObject__0269d180,local_f0);
                      local_c4 = 0;
                    }
                  }
                  else {
                    local_c4 = 3;
                  }
                }
                else {
                  local_c4 = 3;
                }
                _objc_storeStrong(&local_138,0);
              }
            }
          }
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10
                  );
        local_1d0 = 0;
      } while (local_1c8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_sortUsingComparator__0269d168,&PTR___NSConcreteGlobalBlock_0257a578);
    puVar1 = local_d0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_c4 = 1;
    _objc_storeStrong(&local_d0,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

