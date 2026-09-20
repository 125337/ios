// wcr_layoutMediaInSize:count: @ 01be976c

/* Function Stack Size: 0x28 bytes */

void __thiscall
WCRMomentsDraftCardView::wcr_layoutMediaInSize_count_
          (WCRMomentsDraftCardView *this,ID param_1,SEL param_2,CGSize param_3,
          unsigned_long_long param_4)

{
  ulong uVar1;
  ID IVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  double in_d0;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_d1;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulong local_218;
  ulong local_210;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  ulong local_140;
  ulong local_138;
  double local_130;
  ulong local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_100;
  undefined8 uStack_f8;
  ID local_e0;
  double local_d8;
  double local_d0;
  SEL local_c8;
  ID local_c0;
  double local_b8;
  undefined8 local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_d0 = param_3.field0_0x0;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = param_2;
  local_c0 = param_1;
  if (local_d0 != 0.0) {
    local_d8 = 4.0;
    if (local_d0 == 4.94065645841247e-324) {
      local_b8 = in_d0;
      local_b0 = in_d1;
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_mediaViews_026c0a18,1,param_3.field1_0x8);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = IVar2;
      (*(code *)PTR__objc_release_02578630)(param_1);
      uVar8 = 0;
      uVar6 = 0;
      FUN_01be5b68();
      local_120 = uVar6;
      uStack_118 = uVar8;
      local_100 = uVar6;
      uStack_f8 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar8,local_b8,local_b0,local_e0,PTR_s_setFrame__026ca960);
      IVar2 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x4020000000000000);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_layoutPlayOnView__026c0a48,local_e0);
      _objc_storeStrong(&local_e0,0);
    }
    else {
      iVar3 = 2;
      if (local_d0 != 9.88131291682493e-324 && local_d0 != 1.97626258336499e-323) {
        iVar3 = 3;
      }
      local_128 = (ulong)iVar3;
      dVar9 = (double)NEON_ucvtf(local_128);
      local_130 = (double)(long)((in_d0 - (double)(local_128 - 1) * 4.0) / dVar9);
      local_138 = 0;
      _memset(auStack_180,0,0x40);
      IVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_mediaViews_026c0a18);
      _objc_retainAutoreleasedReturnValue();
      local_210 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_210 != 0) {
        lVar4 = *local_170;
        local_218 = 0;
        do {
          do {
            if (*local_170 - lVar4 != 0) {
              _objc_enumerationMutation(*local_170 - lVar4,IVar2);
            }
            uVar5 = *(ulong *)(local_178 + local_218 * 8);
            local_140 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isHidden_026ca768);
            if ((uVar5 & 1) == 0) {
              uVar5 = 0;
              if (local_128 != 0) {
                uVar5 = local_138 / local_128;
              }
              uVar1 = 0;
              if (local_128 != 0) {
                uVar1 = local_138 / local_128;
              }
              dVar7 = (double)NEON_ucvtf(local_138 - uVar1 * local_128);
              dVar7 = dVar7 * (local_130 + local_d8);
              dVar10 = (double)NEON_ucvtf(uVar5);
              dVar10 = dVar10 * (local_130 + local_d8);
              dVar9 = local_130;
              dVar11 = local_130;
              FUN_01be5b68();
              (*(code *)PTR__objc_msgSend_02578628)
                        (dVar7,dVar10,dVar9,dVar11,local_140,PTR_s_setFrame__026ca960);
              uVar5 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_layer_026ca788);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(0x4018000000000000);
              (*(code *)PTR__objc_release_02578630)(uVar5);
              if (local_138 == 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_wcr_layoutPlayOnView__026c0a48,local_140);
              }
              local_138 = local_138 + 1;
            }
            local_218 = local_218 + 1;
          } while (local_218 < local_210);
          local_210 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_a8,
                     0x10);
          local_218 = 0;
        } while (local_210 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

