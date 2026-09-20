// FUN_00145238 @ 00145238

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00145238(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long *param_6)

{
  bool bVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_1c8;
  ulong local_1c0;
  long local_170;
  double local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  double local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  long local_e0;
  ulong local_c8;
  long *local_c0;
  ulong local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  local_c0 = param_6;
  if (param_6 != (long *)0x0) {
    lVar4 = *(long *)PTR____NSArray0___02578280;
    _objc_retainAutorelease();
    *local_c0 = lVar4;
  }
  uVar5 = local_b8;
  FUN_00145710();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar5;
  _memset(auStack_120,0,0x40);
  uVar5 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_1c0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1c0 != 0) {
    lVar4 = *local_110;
    local_1c8 = 0;
    do {
      do {
        if (*local_110 - lVar4 != 0) {
          _objc_enumerationMutation(*local_110 - lVar4,uVar5);
        }
        local_e0 = *(long *)(local_118 + local_1c8 * 8);
        (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_bounds_026ca548);
        local_148 = param_1;
        local_140 = param_2;
        local_138 = param_3;
        local_130 = param_4;
        _CGRectGetWidth(param_1,param_2);
        param_2 = 0x3ff0000000000000;
        local_128 = param_1;
        if (param_1 <= 1.0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_frame_026ca640);
          local_168 = param_1;
          local_160 = param_2;
          local_158 = param_3;
          local_150 = param_4;
          _CGRectGetWidth();
          local_128 = param_1;
        }
        lVar6 = local_e0;
        param_1 = local_128;
        FUN_001442b4();
        _objc_retainAutoreleasedReturnValue();
        local_170 = lVar6;
        (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_count_0269cfe0);
        lVar3 = local_170;
        if (lVar6 == 0) {
          bVar1 = false;
          uVar7 = 0;
        }
        else {
          if (local_c0 != (long *)0x0) {
            _objc_retainAutorelease();
            *local_c0 = lVar3;
          }
          lVar3 = local_e0;
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = lVar3;
          uVar7 = 1;
          bVar1 = true;
        }
        _objc_storeStrong(uVar7,&local_170,0);
        bVar2 = true;
        if (bVar1) goto LAB_00145644;
        local_1c8 = local_1c8 + 1;
      } while (local_1c8 < local_1c0);
      local_1c0 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1c8 = 0;
    } while (local_1c0 != 0);
  }
  bVar2 = false;
LAB_00145644:
  (*(code *)PTR__objc_release_02578630)(uVar5);
  if (!bVar2) {
    local_b0 = 0;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

