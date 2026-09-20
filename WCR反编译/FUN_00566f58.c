// FUN_00566f58 @ 00566f58

byte FUN_00566f58(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  undefined8 uVar6;
  ulong local_208;
  ulong local_200;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  ulong local_118;
  double local_110;
  undefined8 uStack_108;
  double local_100;
  double local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  ulong local_e0;
  int local_d8;
  ulong local_c8;
  double local_c0;
  undefined8 uStack_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_1;
  uStack_b8 = param_2;
  _objc_storeStrong(&local_c8,param_5);
  if (((local_c8 == 0) ||
      (uVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isHidden_026ca768),
      (uVar2 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_alpha_026ca4d8), param_1 <= DAT_02323d38)
     ) {
    local_a9 = 0;
    local_d8 = 1;
    goto LAB_005673ac;
  }
  uVar2 = local_c8;
  dVar5 = DAT_02323d38;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar2;
  FUN_005674b8();
  if (((uVar2 & 1) == 0) && (uVar2 = local_e0, FUN_00567738(), (uVar2 & 1) == 0)) {
LAB_00567150:
    _memset(auStack_158,0,0x40);
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_subviews_026cab40);
    _objc_retainAutoreleasedReturnValue();
    local_200 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != 0) {
      lVar4 = *local_148;
      local_208 = 0;
      do {
        do {
          if (*local_148 - lVar4 != 0) {
            _objc_enumerationMutation(*local_148 - lVar4,uVar2);
          }
          local_118 = *(ulong *)(local_150 + local_208 * 8);
          dVar5 = local_c0;
          uVar6 = uStack_b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_convertPoint_toView__0269e548,local_118);
          uVar3 = local_118;
          FUN_00566f58(dVar5,uVar6);
          if ((uVar3 & 1) != 0) {
            local_a9 = 1;
            local_d8 = 1;
            goto LAB_00567350;
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_a8,0x10
                  );
        local_208 = 0;
      } while (local_200 != 0);
    }
    local_d8 = 0;
LAB_00567350:
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (local_d8 == 0) {
      local_a9 = 0;
      local_d8 = 1;
    }
  }
  else {
    uVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
    uVar1 = (uint)uVar2;
    uStack_108 = uStack_b8;
    local_110 = local_c0;
    local_100 = param_1;
    local_f8 = dVar5;
    local_f0 = param_3;
    local_e8 = param_4;
    _CGRectContainsPoint(param_1,dVar5,param_3,param_4,local_c0,uStack_b8);
    if ((uVar1 & 1) == 0) goto LAB_00567150;
    local_a9 = 1;
    local_d8 = 1;
  }
  _objc_storeStrong(&local_e0,0);
LAB_005673ac:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

