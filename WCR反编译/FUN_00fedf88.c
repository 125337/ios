// FUN_00fedf88 @ 00fedf88

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fedf88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong local_190;
  ulong local_188;
  undefined *local_140;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  undefined *local_d0;
  int local_c4;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  local_c0 = 0;
  local_b8 = param_2;
  _objc_storeStrong(&local_c0,param_3);
  if (DAT_028e3118 != (code *)0x0) {
    (*DAT_028e3118)(local_b0,local_b8,local_c0);
  }
  if (((DAT_028e30d0 & 1) == 0) ||
     (uVar3 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_type_0269e6f8),
     uVar3 != 0)) {
    local_c4 = 1;
  }
  else {
    _memset(auStack_110,0,0x40);
    uVar3 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_allTouches_026a8b70);
    _objc_retainAutoreleasedReturnValue();
    local_188 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_188 != 0) {
      lVar7 = *local_100;
      local_190 = 0;
      do {
        do {
          if (*local_100 - lVar7 != 0) {
            _objc_enumerationMutation(*local_100 - lVar7,uVar3);
          }
          local_d0 = *(undefined **)(local_108 + local_190 * 8);
          puVar4 = &DAT_028e30b0;
          _objc_loadWeakRetained();
          bVar1 = false;
          if (puVar4 == (undefined *)0x0) {
            puVar5 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_phase_026a8b78);
            bVar1 = true;
            if (puVar5 != (undefined *)0x0) {
              puVar5 = local_d0;
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_phase_026a8b78);
              bVar1 = true;
              if (puVar5 != (undefined *)0x1) {
                puVar5 = local_d0;
                (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_phase_026a8b78);
                bVar1 = puVar5 == (undefined *)0x2;
              }
            }
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (bVar1) {
            _objc_storeWeak(&DAT_028e30b0,local_d0);
          }
          puVar4 = &DAT_028e30b0;
          _objc_loadWeakRetained();
          puVar5 = local_d0;
          bVar1 = false;
          if (puVar4 != (undefined *)0x0) {
            puVar6 = &DAT_028e30b0;
            _objc_loadWeakRetained();
            bVar1 = puVar5 != puVar6;
            (*(code *)PTR__objc_release_02578630)(puVar6);
          }
          (*(code *)PTR__objc_release_02578630)(puVar4);
          if (!bVar1) {
            puVar4 = local_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_phase_026a8b78);
            if ((puVar4 == (undefined *)0x3) || (puVar4 == (undefined *)0x4)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_locationInView__026ca798,0);
              puVar4 = &DAT_028e30a8;
              _objc_loadWeakRetained();
              puVar5 = PTR__OBJC_CLASS___NSSet_026ce150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithObject__026ad5c8,local_d0);
              _objc_retainAutoreleasedReturnValue();
              FUN_00fec9bc(puVar4);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              (*(code *)PTR__objc_release_02578630)(puVar4);
              local_c4 = 1;
              goto LAB_00fee4d0;
            }
            bVar1 = false;
            if ((puVar4 == (undefined *)0x1) || (bVar2 = false, puVar4 == (undefined *)0x2)) {
              local_140 = &DAT_028e30a8;
              _objc_loadWeakRetained(0);
              bVar1 = true;
              bVar2 = local_140 != (undefined *)0x0;
            }
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_140);
            }
            if (bVar2) {
              puVar4 = &DAT_028e30a8;
              _objc_loadWeakRetained();
              FUN_00fee544();
              (*(code *)PTR__objc_release_02578630)(puVar4);
            }
          }
          local_190 = local_190 + 1;
        } while (local_190 < local_188);
        local_188 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10
                  );
        local_190 = 0;
      } while (local_188 != 0);
    }
    local_c4 = 0;
LAB_00fee4d0:
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (local_c4 == 0) {
      local_c4 = 0;
    }
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

