// FUN_0220da44 @ 0220da44

/* WARNING: Type propagation algorithm not settling */

long FUN_0220da44(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  double *pdVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  double dVar11;
  double dVar12;
  undefined8 local_1f0;
  long local_140;
  double local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  double local_e8 [3];
  double local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0 [2];
  undefined1 auStack_a0 [8];
  double local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  double local_60 [5];
  
  uVar1 = DAT_02332e58;
  uVar7 = DAT_02324040;
  dVar12 = DAT_02323f60;
  lVar10 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0.0;
  local_b8 = 0;
  local_60[4] = 0.0;
  local_60[3] = 0.0;
  local_60[2] = 0.0;
  local_60[1] = 0.0;
  uVar2 = param_1;
  FUN_022224a0(param_1,param_2,local_60 + 4,local_60 + 3,local_60 + 2,local_60 + 1);
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
    FUN_021c8144();
    local_140 = 6;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF();
    (*(code *)PTR__objc_retain_02578638)(param_1);
    *(ulong *)(local_140 + 0x20) = param_1;
    uVar2 = param_1;
    FUN_02222120(dVar12,param_1,local_1f0);
    _objc_retainAutoreleasedReturnValue();
    *(ulong *)(local_140 + 0x28) = uVar2;
    puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_02223ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    FUN_02222120(DAT_023243c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar8);
    *(undefined **)(local_140 + 0x30) = puVar9;
    uVar2 = param_1;
    FUN_02222120(DAT_02323d00,param_1,local_1f0);
    _objc_retainAutoreleasedReturnValue();
    *(ulong *)(local_140 + 0x38) = uVar2;
    puVar8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_02223ae0();
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar8;
    FUN_02222120(DAT_02323f80);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(puVar8);
    *(undefined **)(local_140 + 0x40) = puVar9;
    (*(code *)PTR__objc_retain_02578638)(param_1);
    *(ulong *)(local_140 + 0x48) = param_1;
    FUN_021b0268(local_140,uVar7);
  }
  else {
    local_68 = DAT_02324050;
    local_78 = uVar7;
    local_80 = local_60[3] + DAT_02323cc0;
    FUN_021c8058();
    puVar8 = PTR___s12CoreGraphics7CGFloatVN_02578ba0;
    __ss3minyxx_xtSLRzlF(&local_78,&local_80);
    __ss3maxyxx_xtSLRzlF(local_60,&local_68,auStack_70,puVar8,uVar2);
    local_88 = local_60[0];
    local_98 = dVar12;
    local_b0[1] = 1.0;
    local_b0[0] = local_60[2] + DAT_02323ec8;
    __ss3minyxx_xtSLRzlF(local_b0 + 1,local_b0,puVar8,uVar2);
    __ss3maxyxx_xtSLRzlF(&local_90,&local_98,auStack_a0,puVar8,uVar2);
    local_b8 = local_90;
    uVar3 = 0;
    FUN_021c8144();
    local_140 = 6;
    __ss27_allocateUninitializedArrayySayxG_BptBwlF(6,uVar3);
    lVar4 = local_140;
    FUN_0220e63c(local_60[4]);
    FUN_0220e6e0();
    *(long *)(local_140 + 0x20) = lVar4;
    dVar11 = local_60[4] - DAT_0232c528;
    FUN_0220e63c();
    puVar5 = &local_c8;
    local_c8 = DAT_02323f38;
    local_d0 = local_60[0] * DAT_02324258;
    __ss3maxyxx_xtSLRzlF(&local_c0,puVar5,&local_d0,puVar8,uVar2);
    FUN_0220e6e0(dVar11,local_c0,0x3ff0000000000000);
    *(undefined8 **)(local_140 + 0x28) = puVar5;
    dVar11 = local_60[4] + 0.075;
    FUN_0220e63c();
    pdVar6 = local_e8 + 1;
    local_e8[1] = 0.5;
    local_e8[0] = local_60[0] * DAT_02323c60;
    __ss3maxyxx_xtSLRzlF(local_e8 + 2,pdVar6,local_e8,puVar8,uVar2);
    FUN_0220e6e0(dVar11,local_e8[2],uVar7,0x3ff0000000000000);
    *(double **)(local_140 + 0x30) = pdVar6;
    dVar11 = local_60[4] + DAT_02324058;
    FUN_0220e63c();
    puVar5 = &local_f8;
    local_f8 = uVar1;
    local_100 = local_60[0] * dVar12;
    __ss3maxyxx_xtSLRzlF(&local_f0,puVar5,&local_100,puVar8,uVar2);
    FUN_0220e6e0(dVar11,local_f0,0x3ff0000000000000);
    *(undefined8 **)(local_140 + 0x38) = puVar5;
    dVar12 = local_60[4] - DAT_0232c688;
    FUN_0220e63c();
    puVar5 = &local_110;
    local_110 = uVar1;
    local_118 = local_60[0] * 0.7;
    __ss3maxyxx_xtSLRzlF(&local_108,puVar5,&local_118,puVar8,uVar2);
    FUN_0220e6e0(dVar12,local_108,DAT_02323d48,0x3ff0000000000000);
    *(undefined8 **)(local_140 + 0x40) = puVar5;
    FUN_0220e63c(local_60[4]);
    FUN_0220e6e0();
    *(undefined8 **)(local_140 + 0x48) = puVar5;
    FUN_021b0268(local_140,uVar3);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar10);
  }
  return local_140;
}

