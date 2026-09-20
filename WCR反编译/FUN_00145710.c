// FUN_00145710 @ 00145710

void FUN_00145710(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  double dVar6;
  undefined8 uVar7;
  ulong local_1f8;
  ulong local_1f0;
  double local_158;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  undefined *local_100 [3];
  double local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined4 local_bc;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  if (local_b8 == 0) {
    puVar1 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_bc = 1;
    local_b0 = puVar1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
    local_e8 = param_1;
    local_e0 = param_2;
    local_d8 = param_3;
    local_d0 = param_4;
    _CGRectGetWidth(param_1,param_2);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_c8 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_100[0] = puVar1;
    _memset(auStack_148,0,0x40);
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_1f0 != 0) {
      lVar4 = *local_138;
      local_1f8 = 0;
      do {
        do {
          local_158 = param_1;
          if (*local_138 - lVar4 != 0) {
            _objc_enumerationMutation(*local_138 - lVar4,uVar2);
            local_158 = param_1;
          }
          uVar5 = *(ulong *)(local_140 + local_1f8 * 8);
          local_108 = uVar5;
          if (((uVar5 != 0) &&
              ((*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768),
              (uVar5 & 1) == 0)) &&
             ((*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_alpha_026ca4d8),
             uVar5 = local_108, DAT_02323d38 <= local_158)) {
            puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
            dVar6 = DAT_02323d38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
            uVar3 = local_108;
            if ((uVar5 & 1) == 0) {
              puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImageView_026ce1c0,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar3 & 1) == 0) {
                uVar5 = local_108;
                (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_class_0269cd60);
                _NSStringFromClass();
                _objc_retainAutoreleasedReturnValue();
                local_150 = uVar5;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar5,PTR_s_containsString__0269d0b0,&cf_Indicator);
                if ((uVar5 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_bounds_026ca548);
                  _CGRectGetWidth(local_158,dVar6);
                  uVar7 = 0x3ff0000000000000;
                  if (local_158 <= 1.0) {
                    (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_frame_026ca640);
                    _CGRectGetWidth(local_158,uVar7);
                  }
                  dVar6 = local_c8;
                  if ((local_c8 <= 1.0) || (dVar6 = local_158, local_c8 * DAT_02323db8 <= local_158)
                     ) {
                    local_158 = dVar6;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_100[0],PTR_s_addObject__0269d180,local_108);
                    local_bc = 0;
                  }
                  else {
                    local_bc = 3;
                  }
                }
                else {
                  local_bc = 3;
                }
                _objc_storeStrong(&local_150,0);
              }
            }
          }
          local_1f8 = local_1f8 + 1;
          param_1 = local_158;
        } while (local_1f8 < local_1f0);
        local_1f0 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1f8 = 0;
        param_1 = local_158;
      } while (local_1f0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100[0],PTR_s_sortUsingComparator__0269d168,
               &PTR___NSConcreteGlobalBlock_0257a598);
    puVar1 = local_100[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar1;
    local_bc = 1;
    _objc_storeStrong(local_100,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

