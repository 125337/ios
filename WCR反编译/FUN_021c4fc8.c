// FUN_021c4fc8 @ 021c4fc8

char * FUN_021c4fc8(ulong param_1)

{
  char *pcVar1;
  ulong uVar2;
  char *pcVar3;
  char **ppcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  char *local_1e0;
  long local_1d8;
  char *local_1c0;
  long local_1b8;
  char *local_1b0;
  long local_1a8;
  char *local_188;
  long local_180;
  char *local_178;
  long local_170;
  char *local_150;
  long local_148;
  char *local_140;
  long local_138;
  char *local_130;
  long local_128;
  char *local_120;
  long local_118;
  char *local_110;
  long lStack_108;
  char *local_100;
  long lStack_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  long local_c8;
  char *local_c0;
  long local_b8;
  char *local_b0;
  long local_a8;
  char *local_a0;
  long lStack_98;
  char *local_88;
  long lStack_80;
  char *local_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  long local_50;
  char *local_48;
  long local_40;
  byte local_38;
  
  local_38 = 0;
  local_b0 = (char *)0x0;
  local_a8 = 0;
  local_120 = (char *)0x0;
  local_118 = 0;
  local_130 = (char *)0x0;
  local_128 = 0;
  uVar2 = param_1;
  FUN_021b4f20();
  local_38 = (byte)uVar2 & 1;
  pcVar3 = "fanBlurTintColorHex";
  uVar5 = 0x13;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("fanBlurTintColorHex",0x13,1);
  local_78 = pcVar3;
  local_70 = uVar5;
  __sSDyq_Sgxcig(auStack_68,&local_78,param_1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_78);
  if (local_50 == 0) {
    FUN_021c7fc0(auStack_68);
    local_188 = (char *)0x0;
    local_180 = 0;
  }
  else {
    ppcVar4 = &local_150;
    _swift_dynamicCast(ppcVar4,auStack_68,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar4 & 1) == 0) {
      local_178 = (char *)0x0;
      local_170 = 0;
    }
    else {
      local_178 = local_150;
      local_170 = local_148;
    }
    local_188 = local_178;
    local_180 = local_170;
  }
  local_88 = local_188;
  lStack_80 = local_180;
  lStack_98 = local_180;
  local_a0 = local_188;
  if (local_180 == 0) {
    pcVar3 = "#00000000";
    lVar6 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#00000000",9,1);
    local_48 = pcVar3;
    local_40 = lVar6;
    if (lStack_98 != 0) {
      FUN_021c811c(&local_a0);
    }
  }
  else {
    local_48 = local_188;
    local_40 = local_180;
  }
  lVar6 = local_40;
  pcVar1 = local_48;
  local_b0 = local_48;
  local_a8 = local_40;
  pcVar3 = "fanBlurTintColorHexDark";
  uVar5 = 0x17;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("fanBlurTintColorHexDark",0x17,1);
  local_f0 = pcVar3;
  local_e8 = uVar5;
  __sSDyq_Sgxcig(auStack_e0,&local_f0,param_1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_f0);
  if (local_c8 == 0) {
    FUN_021c7fc0(auStack_e0);
    local_1c0 = (char *)0x0;
    local_1b8 = 0;
  }
  else {
    ppcVar4 = &local_140;
    _swift_dynamicCast(ppcVar4,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar4 & 1) == 0) {
      local_1b0 = (char *)0x0;
      local_1a8 = 0;
    }
    else {
      local_1b0 = local_140;
      local_1a8 = local_138;
    }
    local_1c0 = local_1b0;
    local_1b8 = local_1a8;
  }
  local_100 = local_1c0;
  lStack_f8 = local_1b8;
  lStack_108 = local_1b8;
  local_110 = local_1c0;
  if (local_1b8 == 0) {
    pcVar3 = "#00000000";
    lVar7 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#00000000",9,1);
    local_c0 = pcVar3;
    local_b8 = lVar7;
    if (lStack_108 != 0) {
      FUN_021c811c(&local_110);
    }
  }
  else {
    local_c0 = local_1c0;
    local_b8 = local_1b8;
  }
  lVar7 = local_b8;
  local_1e0 = local_c0;
  local_120 = local_c0;
  local_118 = local_b8;
  if ((uVar2 & 1) == 0) {
    _swift_bridgeObjectRetain(lVar6);
    local_1e0 = pcVar1;
    local_1d8 = lVar6;
  }
  else {
    _swift_bridgeObjectRetain(local_b8);
    local_1d8 = lVar7;
  }
  local_130 = local_1e0;
  local_128 = local_1d8;
  FUN_021c8144(0);
  FUN_021b542c(local_1e0,local_1d8);
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar6);
  return local_1e0;
}

