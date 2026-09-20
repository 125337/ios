// FUN_021c47d4 @ 021c47d4

char * FUN_021c47d4(ulong param_1)

{
  ulong uVar1;
  char *pcVar2;
  char **ppcVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_220;
  undefined8 local_218;
  char *local_1f8;
  long local_1f0;
  char *local_1d8;
  long local_1d0;
  char *local_1c8;
  long local_1c0;
  char *local_1a0;
  long local_198;
  char *local_190;
  long local_188;
  char *local_168;
  long local_160;
  char *local_158;
  long local_150;
  char *local_148;
  char *local_140;
  char *local_138;
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
  uVar1 = param_1;
  FUN_021b4f20();
  local_38 = (byte)uVar1 & 1;
  pcVar2 = "gridBackdropColorHex";
  uVar5 = 0x14;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("gridBackdropColorHex",0x14,1);
  local_78 = pcVar2;
  local_70 = uVar5;
  __sSDyq_Sgxcig(auStack_68,&local_78,param_1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_78);
  if (local_50 == 0) {
    FUN_021c7fc0(auStack_68);
    local_1a0 = (char *)0x0;
    local_198 = 0;
  }
  else {
    ppcVar3 = &local_168;
    _swift_dynamicCast(ppcVar3,auStack_68,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar3 & 1) == 0) {
      local_190 = (char *)0x0;
      local_188 = 0;
    }
    else {
      local_190 = local_168;
      local_188 = local_160;
    }
    local_1a0 = local_190;
    local_198 = local_188;
  }
  local_88 = local_1a0;
  lStack_80 = local_198;
  lStack_98 = local_198;
  local_a0 = local_1a0;
  if (local_198 == 0) {
    pcVar2 = "#0000001A";
    lVar6 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#0000001A",9,1);
    local_48 = pcVar2;
    local_40 = lVar6;
    if (lStack_98 != 0) {
      FUN_021c811c(&local_a0);
    }
  }
  else {
    local_48 = local_1a0;
    local_40 = local_198;
  }
  lVar6 = local_40;
  pcVar4 = local_48;
  local_b0 = local_48;
  local_a8 = local_40;
  pcVar2 = "gridBackdropColorHexDark";
  uVar5 = 0x18;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("gridBackdropColorHexDark",0x18,1);
  local_f0 = pcVar2;
  local_e8 = uVar5;
  __sSDyq_Sgxcig(auStack_e0,&local_f0,param_1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_f0);
  if (local_c8 == 0) {
    FUN_021c7fc0(auStack_e0);
    local_1d8 = (char *)0x0;
    local_1d0 = 0;
  }
  else {
    ppcVar3 = &local_158;
    _swift_dynamicCast(ppcVar3,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar3 & 1) == 0) {
      local_1c8 = (char *)0x0;
      local_1c0 = 0;
    }
    else {
      local_1c8 = local_158;
      local_1c0 = local_150;
    }
    local_1d8 = local_1c8;
    local_1d0 = local_1c0;
  }
  local_100 = local_1d8;
  lStack_f8 = local_1d0;
  lStack_108 = local_1d0;
  local_110 = local_1d8;
  if (local_1d0 == 0) {
    pcVar2 = "#00000047";
    lVar7 = 9;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#00000047",9,1);
    local_c0 = pcVar2;
    local_b8 = lVar7;
    if (lStack_108 != 0) {
      FUN_021c811c(&local_110);
    }
  }
  else {
    local_c0 = local_1d8;
    local_b8 = local_1d0;
  }
  lVar7 = local_b8;
  local_1f8 = local_c0;
  local_120 = local_c0;
  local_118 = local_b8;
  if ((uVar1 & 1) == 0) {
    _swift_bridgeObjectRetain(lVar6);
    local_1f8 = pcVar4;
    local_1f0 = lVar6;
  }
  else {
    _swift_bridgeObjectRetain(local_b8);
    local_1f0 = lVar7;
  }
  local_130 = local_1f8;
  local_128 = local_1f0;
  FUN_021c8144(0);
  _swift_bridgeObjectRetain(local_1f0);
  FUN_021b542c(local_1f8,local_1f0);
  local_148 = local_1f8;
  local_140 = local_1f8;
  local_138 = local_1f8;
  if (local_1f8 == (char *)0x0) {
    pcVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_02222020();
    _objc_retainAutoreleasedReturnValue();
    if ((uVar1 & 1) == 0) {
      local_220 = DAT_02323c68;
    }
    else {
      local_220 = DAT_02323e88;
    }
    pcVar4 = pcVar2;
    FUN_02222120(local_220,pcVar2,local_218);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    local_138 = pcVar4;
    if (local_148 != (char *)0x0) {
      FUN_021c8208(&local_148);
    }
  }
  pcVar2 = local_138;
  _swift_bridgeObjectRelease(local_1f0);
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(lVar6);
  return pcVar2;
}

