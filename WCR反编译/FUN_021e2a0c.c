// FUN_021e2a0c @ 021e2a0c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * FUN_021e2a0c(void)

{
  undefined8 *puVar1;
  char *pcVar2;
  char **ppcVar3;
  ulong uVar4;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  char *local_2a0;
  ulong local_298;
  char *local_238;
  ulong local_230;
  char *local_228;
  ulong local_220;
  char *local_218;
  ulong local_210;
  char *local_1d0;
  ulong local_1c8;
  char *local_1c0;
  ulong local_1b8;
  char *local_178;
  ulong local_170;
  char *local_168;
  ulong local_160;
  char *local_158;
  char *local_150;
  char *local_148;
  char *local_140;
  ulong local_138;
  char *local_130;
  ulong uStack_128;
  char *local_118;
  ulong uStack_110;
  char *local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  char *local_c0;
  ulong local_b8;
  char *local_b0;
  ulong local_a8;
  undefined1 local_a0 [8];
  ulong uStack_98;
  char *local_90;
  ulong uStack_88;
  char *local_80;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long local_40;
  char *local_38;
  ulong local_30;
  
  local_b0 = (char *)0x0;
  local_a8 = 0;
  local_c0 = (char *)0x0;
  local_b8 = 0;
  local_140 = (char *)0x0;
  local_138 = 0;
  pcVar2 = "menuStrokeColorHex";
  uVar6 = 0x12;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuStrokeColorHex",0x12,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_70,0x20,0);
  local_80 = pcVar2;
  local_78 = uVar6;
  __sSDyq_Sgxcig(auStack_58,&local_80,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_80);
  _swift_endAccess(auStack_70);
  if (local_40 == 0) {
    FUN_021c7fc0(auStack_58);
    local_1d0 = (char *)0x0;
    local_1c8 = 0;
  }
  else {
    ppcVar3 = &local_178;
    _swift_dynamicCast(ppcVar3,auStack_58,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar3 & 1) == 0) {
      local_1c0 = (char *)0x0;
      local_1b8 = 0;
    }
    else {
      local_1c0 = local_178;
      local_1b8 = local_170;
    }
    local_1d0 = local_1c0;
    local_1c8 = local_1b8;
  }
  local_90 = local_1d0;
  uStack_88 = local_1c8;
  uStack_98 = local_1c8;
  if (local_1c8 == 0) {
    pcVar2 = "#FFFFFF";
    uVar7 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
    local_38 = pcVar2;
    local_30 = uVar7;
    if (uStack_98 != 0) {
      FUN_021c811c(local_a0);
    }
  }
  else {
    local_38 = local_1d0;
    local_30 = local_1c8;
  }
  uVar7 = local_30;
  local_2a0 = local_38;
  local_b0 = local_38;
  local_a8 = local_30;
  pcVar2 = "menuStrokeColorHexDark";
  uVar6 = 0x16;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuStrokeColorHexDark",0x16,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_f8,0x20,0);
  local_108 = pcVar2;
  local_100 = uVar6;
  __sSDyq_Sgxcig(auStack_e0,&local_108,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_108);
  _swift_endAccess(auStack_f8);
  if (local_c8 == 0) {
    FUN_021c7fc0(auStack_e0);
    local_228 = (char *)0x0;
    local_220 = 0;
  }
  else {
    ppcVar3 = &local_168;
    _swift_dynamicCast(ppcVar3,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar3 & 1) == 0) {
      local_218 = (char *)0x0;
      local_210 = 0;
    }
    else {
      local_218 = local_168;
      local_210 = local_160;
    }
    local_228 = local_218;
    local_220 = local_210;
  }
  local_118 = local_228;
  uStack_110 = local_220;
  _swift_bridgeObjectRetain(uVar7);
  uStack_128 = uStack_110;
  local_130 = local_118;
  if (uStack_110 == 0) {
    _swift_bridgeObjectRetain(uVar7);
    local_c0 = local_2a0;
    local_b8 = uVar7;
    if (uStack_128 == 0) {
      local_238 = local_2a0;
      local_230 = uVar7;
    }
    else {
      FUN_021c811c(&local_130);
      local_238 = local_2a0;
      local_230 = uVar7;
    }
  }
  else {
    _swift_bridgeObjectRelease(uVar7);
    local_230 = uStack_128;
    local_238 = local_130;
    _swift_bridgeObjectRetain();
    local_c0 = local_238;
    local_b8 = local_230;
  }
  uVar4 = local_230;
  __sSS10uppercasedSSyF();
  _swift_bridgeObjectRelease(local_230);
  pcVar2 = "#FFFFFF";
  uVar6 = 7;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
  __sSS2eeoiySbSS_SStFZ(local_238,uVar4,pcVar2);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = (ulong)local_238 & 0xffffffff;
  if (((ulong)local_238 & 1) != 0) {
    pcVar5 = local_2a0;
    uVar4 = uVar7;
    __sSS10uppercasedSSyF();
    pcVar2 = "#FFFFFF";
    uVar6 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#FFFFFF",7,1);
    __sSS2eeoiySbSS_SStFZ(pcVar5,uVar4,pcVar2);
    _swift_bridgeObjectRelease(uVar6);
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = (ulong)pcVar5 & 0xffffffff;
    if (((ulong)pcVar5 & 1) != 0) {
      pcVar2 = "#3A3A3C";
      uVar8 = 7;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#3A3A3C",7,1);
      uVar4 = local_b8;
      local_c0 = pcVar2;
      local_b8 = uVar8;
      _swift_bridgeObjectRelease();
    }
  }
  FUN_021d010c();
  local_298 = local_b8;
  pcVar2 = local_c0;
  if ((uVar4 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar7);
    local_298 = uVar7;
  }
  else {
    _swift_bridgeObjectRetain();
    local_2a0 = pcVar2;
  }
  local_140 = local_2a0;
  local_138 = local_298;
  FUN_021c8144(0);
  _swift_bridgeObjectRetain(local_298);
  FUN_021e2090(local_2a0,local_298);
  local_158 = local_2a0;
  local_150 = local_2a0;
  local_148 = local_2a0;
  if (local_2a0 == (char *)0x0) {
    pcVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_02223ae0();
    _objc_retainAutoreleasedReturnValue();
    local_148 = pcVar2;
    if (local_158 != (char *)0x0) {
      FUN_021c8208(&local_158);
    }
  }
  pcVar2 = local_148;
  _swift_bridgeObjectRelease(local_298);
  FUN_021c7f98(&local_c0);
  _swift_bridgeObjectRelease(uVar7);
  return pcVar2;
}

