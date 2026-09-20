// FUN_00ab59a4 @ 00ab59a4

void FUN_00ab59a4(undefined8 param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 local_1f0 [8];
  undefined8 local_1b0;
  undefined8 local_1a0 [3];
  undefined8 *local_188;
  undefined *local_180;
  undefined8 *local_178;
  undefined8 *local_170;
  long local_168;
  undefined8 *local_160;
  undefined *local_158;
  undefined4 local_14c;
  undefined4 *local_148;
  undefined8 *local_140;
  undefined4 local_134;
  undefined *local_130;
  undefined4 local_124;
  undefined *local_120;
  undefined4 local_114;
  undefined *local_110;
  undefined4 local_104;
  undefined *local_100;
  undefined4 local_f4;
  undefined *local_f0;
  undefined4 local_e4;
  undefined *local_e0;
  undefined *local_d0;
  undefined *local_c0;
  undefined8 local_b0 [13];
  undefined4 local_44;
  int local_34;
  undefined *local_30;
  undefined8 local_28;
  
  local_160 = local_b0;
  local_28 = *(undefined8 *)PTR____stack_chk_guard_02578670;
  local_158 = &DAT_0271e020;
  local_30 = &DAT_0271e020;
  local_14c = 0x28ea;
  local_34 = 0x28ea;
  local_168 = 1;
  local_188 = local_1a0;
  local_170 = local_1f0 + 2;
  local_180 = PTR___dispatch_main_q_02578680;
  local_1b0 = param_2;
  local_1a0[0] = param_1;
  local_178 = local_1f0;
  _objc_retainAutoreleaseReturnValue();
  puVar7 = local_180;
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_14c;
  puVar5 = local_158;
  puVar4 = local_160;
  lVar3 = local_168;
  puVar2 = local_170;
  *local_178 = puVar7;
  *puVar2 = PTR___NSConcreteStackBlock_02578660;
  *(undefined4 *)(puVar2 + 1) = 0xc0000000;
  *(undefined4 *)((long)puVar2 + 0xc) = 0;
  puVar2[2] = FUN_00ab5fc8;
  puVar1 = (undefined4 *)((long)local_1f0 - (lVar3 * 4 + 0xfU & 0xfffffffffffffff0));
  puVar2 = (undefined8 *)((long)puVar1 - (lVar3 * 8 + 0xfU & 0xfffffffffffffff0));
  local_148 = puVar1;
  local_140 = puVar2;
  *puVar1 = 0x6c6c6467;
  *puVar2 = puVar1;
  UNRECOVERED_JUMPTABLE = *(code **)(puVar4[0x10] + (long)local_34 * 8);
  puVar4[0xe] = puVar5;
  local_44 = 0x28eb;
  puVar4[0xc] = &DAT_027a4578;
  puVar4[10] = &DAT_027a4588;
  puVar4[8] = &DAT_027a4598;
  puVar4[6] = &DAT_027a45a8;
  puVar4[4] = &DAT_027a45b8;
  puVar4[2] = &DAT_027a45c8;
  *puVar4 = &DAT_027a45d8;
  local_c0 = &DAT_027a45e8;
  local_d0 = &DAT_027a45f8;
  local_e0 = puVar5;
  local_e4 = 0x28fa;
  local_f0 = puVar5;
  local_f4 = 0x28fa;
  local_100 = puVar5;
  local_104 = 0x28fa;
  local_110 = puVar5;
  local_114 = 0x28fa;
  local_120 = puVar5;
  local_124 = 0x28fa;
  local_130 = puVar5;
  local_134 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00ab5be0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

