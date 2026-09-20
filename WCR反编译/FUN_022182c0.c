// FUN_022182c0 @ 022182c0

/* WARNING: Type propagation algorithm not settling */

ulong FUN_022182c0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  code *pcVar5;
  uint uVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  undefined1 auStack_200 [8];
  undefined8 uStack_1f8;
  undefined4 auStack_1f0 [4];
  undefined1 auStack_1e0 [8];
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  undefined8 local_1b8;
  long local_1b0;
  undefined *local_1a8;
  ulong *local_1a0;
  ulong local_198;
  ulong local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  ulong local_170;
  long local_168;
  long local_160;
  long local_158;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  uint local_ec;
  ulong local_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined1 *local_88;
  long local_80;
  long local_78;
  ulong local_70 [4];
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined8 local_38;
  
  local_c8 = "Fatal error";
  local_c0 = "Unexpectedly found nil while unwrapping an Optional value";
  local_b8 = "_Concurrency/arm64e-apple-ios.swiftinterface";
  local_b0 = 0;
  local_e0 = param_1;
  local_d8 = param_2;
  local_d0 = param_6;
  local_a8 = param_4;
  local_a0 = param_5;
  local_98 = param_3;
  local_38 = param_6;
  _swift_retain();
  local_48 = local_a8;
  local_40 = local_a0;
  puVar7 = &DAT_028c7658;
  FUN_021c77d4(&DAT_028c7658,&DAT_0233be50);
  local_90 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  (*(code *)PTR____chkstk_darwin_02578668)(local_98);
  lVar1 = -local_90;
  local_88 = auStack_1e0 + lVar1;
  FUN_0221c648();
  lVar8 = 0;
  __sScPMa();
  local_78 = *(long *)(lVar8 + -8);
  puVar9 = local_88;
  local_80 = lVar8;
  (**(code **)(local_78 + 0x30))(local_88,1);
  uVar6 = (uint)puVar9;
  if (uVar6 - 1 == 0) {
    FUN_0221c704(local_88);
    local_e8 = 0;
  }
  else {
    __sScP8rawValues5UInt8Vvg(uVar6 - 1);
    local_ec = uVar6;
    (**(code **)(local_78 + 8))(local_88,local_80);
    local_e8 = (ulong)local_ec & 0xff;
  }
  local_108 = local_e8 | 0x1c00;
  local_f8 = *(long *)(local_a0 + 0x10);
  local_100 = *(long *)(local_a0 + 0x18);
  _swift_unknownObjectRetain();
  _swift_release(local_a0);
  if (local_f8 == 0) {
    local_128 = 0;
    local_120 = 0;
  }
  else {
    local_118 = local_f8;
    local_110 = local_100;
    local_148 = local_100;
    local_140 = local_f8;
    lVar8 = local_f8;
    _swift_getObjectType();
    lVar10 = local_148;
    __sScA15unownedExecutorScevgTj();
    local_138 = lVar8;
    local_130 = lVar10;
    _swift_unknownObjectRelease(local_140);
    local_128 = local_138;
    local_120 = local_130;
  }
  lVar8 = local_b0;
  local_158 = local_120;
  local_150 = local_128;
  if (local_d8 == 0) {
    local_170 = 0;
  }
  else {
    local_168 = local_e0;
    local_160 = local_d8;
    local_188 = local_d8;
    lVar10 = local_e0;
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
    local_180 = lVar10;
    _swift_bridgeObjectRelease(local_188);
    FUN_0221c76c(local_70,local_180 + 0x20,*(undefined8 *)(local_180 + 0x10),local_108,local_150,
                 local_158,&local_48,local_d0,local_178);
    if (lVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x22185c8);
      (*pcVar5)();
    }
    local_190 = local_70[0];
    _swift_release(local_180);
    local_170 = local_190;
  }
  pcVar4 = local_b8;
  pcVar3 = local_c0;
  pcVar2 = local_c8;
  local_198 = local_170;
  if (local_170 == 0) {
    _swift_release(0);
    FUN_0221c704(local_98);
    local_1b8 = local_48;
    local_1b0 = local_40;
    _swift_retain();
    puVar7 = &DAT_0258ef88;
    _swift_allocObject(&DAT_0258ef88,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = local_d0;
    *(undefined8 *)(puVar7 + 0x18) = local_1b8;
    *(long *)(puVar7 + 0x20) = local_1b0;
    local_1a0 = (ulong *)0x0;
    if (local_150 != 0 || local_158 != 0) {
      local_1a0 = local_70 + 1;
      local_70[1] = 0;
      local_70[2] = 0;
      local_70[3] = local_150;
      local_50 = local_158;
    }
    uVar11 = local_108;
    local_1a8 = puVar7;
    _swift_task_create(local_108,local_1a0,local_d0,&DAT_0233c538,puVar7);
    local_1c0 = uVar11;
  }
  else {
    if (local_170 == 0) {
      auStack_200[lVar1] = 2;
      *(undefined8 *)((long)&uStack_1f8 + lVar1) = 0xcde;
      *(undefined4 *)((long)auStack_1f0 + lVar1) = 0;
      __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
                (pcVar2,0xb,2,pcVar3,0x39,2,pcVar4,0x2c);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x2218798);
      (*pcVar5)();
    }
    local_1c8 = local_170;
    local_1d0 = local_170;
    FUN_0221c704(local_98);
    local_1c0 = local_1d0;
  }
  local_1d8 = local_1c0;
  _swift_release(local_40);
  return local_1d8;
}

