// FUN_01706ae8 @ 01706ae8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01706ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,double param_4,
                 long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  ulong local_2a8;
  ulong local_2a0;
  double local_250;
  undefined1 auStack_218 [8];
  long local_210;
  long *local_208;
  undefined8 local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  double local_1b8;
  double local_150;
  double dStack_148;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  double local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  double dStack_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar6 = *(undefined8 *)(param_5 + 0x28);
  uVar2 = uVar6;
  local_b8 = param_5;
  local_b0 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
  local_250 = *(double *)(param_5 + 0x30);
  dVar8 = local_250;
  uVar3 = param_2;
  local_f8 = uVar2;
  local_f0 = param_2;
  local_e8 = param_3;
  local_e0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
  local_118 = dVar8;
  local_110 = uVar3;
  local_108 = param_3;
  local_100 = param_4;
  FUN_01705754();
  local_d8 = uVar6;
  uStack_d0 = param_2;
  local_c8 = local_250;
  dStack_c0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_setFrame__026ca960);
  uVar1 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_on_026a80c0);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
    dVar8 = 2.0;
    local_250 = param_4 / 2.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_5 + 0x20),PTR_s_frame_026ca640);
    dVar8 = param_4 / 2.0;
    local_250 = local_250 - dVar8;
  }
  uVar2 = *(undefined8 *)(param_5 + 0x20);
  dVar7 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_subview_026b3768);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_1c0 = dVar7;
  local_1b8 = dVar8;
  FUN_01706f74();
  uVar3 = *(undefined8 *)(param_5 + 0x20);
  local_150 = local_250;
  dStack_148 = dVar8;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_subview_026b3768);
  _objc_retainAutoreleasedReturnValue();
  dStack_1c8 = dStack_148;
  local_1d0 = local_150;
  (*(code *)PTR__objc_msgSend_02578628)(local_150,dStack_148);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _memset(auStack_218,0,0x40);
  uVar1 = *(ulong *)(param_5 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_craters_026b3780);
  _objc_retainAutoreleasedReturnValue();
  local_2a0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2a0 != 0) {
    lVar5 = *local_208;
    local_2a8 = 0;
    do {
      do {
        if (*local_208 - lVar5 != 0) {
          _objc_enumerationMutation(*local_208 - lVar5,uVar1);
        }
        local_1d8 = *(undefined8 *)(local_210 + local_2a8 * 8);
        uVar4 = *(ulong *)(param_5 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_on_026a80c0);
        (*(code *)PTR__objc_msgSend_02578628)
                  ((double)((uVar4 & 1) == 0),local_1d8,PTR_s_setAlpha__026ca860);
        local_2a8 = local_2a8 + 1;
      } while (local_2a8 < local_2a0);
      local_2a0 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_218,auStack_a8,0x10);
      local_2a8 = 0;
    } while (local_2a0 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

