// FUN_002201bc @ 002201bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */

byte FUN_002201bc(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  double dVar6;
  ulong local_1d8;
  ulong local_1d0;
  double local_1b0;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined *local_110;
  double local_108;
  double local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_5);
  dVar6 = 1.0;
  local_c8 = 1.0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_bounds_026ca548);
  local_f0 = dVar6;
  local_e8 = param_2;
  local_e0 = param_3;
  local_d8 = param_4;
  _CGRectGetWidth(dVar6,param_2);
  local_1b0 = dVar6;
  if (dVar6 <= local_c8) {
    local_1b0 = local_c8;
  }
  local_108 = local_1b0;
  local_c0 = local_1b0;
  local_d0 = dVar6;
  _memset(auStack_150,0,0x40);
  uVar2 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_subviews_026cab40);
  _objc_retainAutoreleasedReturnValue();
  local_1d0 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_1d0 != 0) {
    lVar4 = *local_140;
    local_1d8 = 0;
    do {
      do {
        if (*local_140 - lVar4 != 0) {
          _objc_enumerationMutation(*local_140 - lVar4,uVar2);
        }
        puVar5 = *(undefined **)(local_148 + local_1d8 * 8);
        local_110 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_class_0269cd60);
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        if ((puVar5 == puVar3) && (puVar3 = local_110, FUN_002208f8(0), ((ulong)puVar3 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_frame_026ca640);
          _CGRectGetWidth(local_1b0,dVar6,param_3);
          dVar6 = local_c0 * DAT_02323c60;
          param_3 = DAT_02323c60;
          if ((dVar6 <= local_1b0) &&
             (puVar3 = local_110, FUN_00220b04(local_110,3), ((ulong)puVar3 & 1) != 0)) {
            local_a9 = 1;
            bVar1 = true;
            goto LAB_0022058c;
          }
        }
        local_1d8 = local_1d8 + 1;
      } while (local_1d8 < local_1d0);
      local_1d0 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      local_1d8 = 0;
    } while (local_1d0 != 0);
  }
  bVar1 = false;
LAB_0022058c:
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if (!bVar1) {
    local_a9 = 0;
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

