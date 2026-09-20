// FUN_021e3e3c @ 021e3e3c

/* WARNING: Removing unreachable block (ram,0x021e41a4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

char * FUN_021e3e3c(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char **ppcVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x20;
  char *local_258;
  ulong local_250;
  char *local_238;
  ulong local_230;
  char *local_228;
  ulong local_220;
  char *local_1e0;
  ulong local_1d8;
  char *local_1d0;
  ulong local_1c8;
  char *local_188;
  ulong local_180;
  char *local_178;
  ulong local_170;
  char *local_168;
  char *local_160;
  char *local_158;
  char *local_150;
  ulong local_148;
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
  local_140 = (char *)0x0;
  local_138 = 0;
  local_150 = (char *)0x0;
  local_148 = 0;
  pcVar4 = "menuHighlightColorHex";
  uVar7 = 0x15;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuHighlightColorHex",0x15,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_70,0x20,0);
  local_80 = pcVar4;
  local_78 = uVar7;
  __sSDyq_Sgxcig(auStack_58,&local_80,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_80);
  _swift_endAccess(auStack_70);
  if (local_40 == 0) {
    FUN_021c7fc0(auStack_58);
    local_1e0 = (char *)0x0;
    local_1d8 = 0;
  }
  else {
    ppcVar5 = &local_188;
    _swift_dynamicCast(ppcVar5,auStack_58,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar5 & 1) == 0) {
      local_1d0 = (char *)0x0;
      local_1c8 = 0;
    }
    else {
      local_1d0 = local_188;
      local_1c8 = local_180;
    }
    local_1e0 = local_1d0;
    local_1d8 = local_1c8;
  }
  local_90 = local_1e0;
  uStack_88 = local_1d8;
  uStack_98 = local_1d8;
  if (local_1d8 == 0) {
    pcVar4 = "#38CC4D";
    uVar8 = 7;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#38CC4D",7,1);
    local_38 = pcVar4;
    local_30 = uVar8;
    if (uStack_98 != 0) {
      FUN_021c811c(local_a0);
    }
  }
  else {
    local_38 = local_1e0;
    local_30 = local_1d8;
  }
  uVar8 = local_30;
  pcVar3 = local_38;
  local_b0 = local_38;
  local_a8 = local_30;
  pcVar4 = "menuHighlightColorHexDark";
  uVar7 = 0x19;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("menuHighlightColorHexDark",0x19,1);
  puVar1 = (undefined8 *)(unaff_x20 + WCRSuperFloatFanMenuView::config);
  _swift_beginAccess(puVar1,auStack_f8,0x20,0);
  local_108 = pcVar4;
  local_100 = uVar7;
  __sSDyq_Sgxcig(auStack_e0,&local_108,*puVar1,PTR___sSSN_02578938,PTR___sypN_02578b08 + 8,
                 PTR___sSSSHsWP_02578940);
  FUN_021c7f98(&local_108);
  _swift_endAccess(auStack_f8);
  if (local_c8 == 0) {
    FUN_021c7fc0(auStack_e0);
    local_238 = (char *)0x0;
    local_230 = 0;
  }
  else {
    ppcVar5 = &local_178;
    _swift_dynamicCast(ppcVar5,auStack_e0,PTR___sypN_02578b08 + 8,PTR___sSSN_02578938,6);
    if (((ulong)ppcVar5 & 1) == 0) {
      local_228 = (char *)0x0;
      local_220 = 0;
    }
    else {
      local_228 = local_178;
      local_220 = local_170;
    }
    local_238 = local_228;
    local_230 = local_220;
  }
  local_118 = local_238;
  uStack_110 = local_230;
  uVar6 = uVar8;
  _swift_bridgeObjectRetain();
  uStack_128 = uStack_110;
  local_130 = local_118;
  if (uStack_110 == 0) {
    local_c0 = pcVar3;
    local_b8 = uVar8;
  }
  else {
    uVar6 = uVar8;
    _swift_bridgeObjectRelease();
    local_c0 = local_130;
    local_b8 = uStack_128;
  }
  uVar2 = local_b8;
  local_258 = local_c0;
  local_140 = local_c0;
  local_138 = local_b8;
  FUN_021d010c();
  if ((uVar6 & 1) == 0) {
    _swift_bridgeObjectRetain(uVar8);
    local_258 = pcVar3;
    local_250 = uVar8;
  }
  else {
    _swift_bridgeObjectRetain(uVar2);
    local_250 = uVar2;
  }
  local_150 = local_258;
  local_148 = local_250;
  FUN_021c8144();
  _swift_bridgeObjectRetain(local_250);
  FUN_021e2090(local_258,local_250);
  local_168 = local_258;
  local_160 = local_258;
  local_158 = local_258;
  if ((local_258 == (char *)0x0) &&
     (FUN_021e432c(DAT_02323ec8,DAT_02323d00,0x3fd3333333333333,0x3ff0000000000000),
     local_158 = local_258, local_168 != (char *)0x0)) {
    FUN_021c8208(&local_168);
  }
  pcVar4 = local_158;
  _swift_bridgeObjectRelease(local_250);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar8);
  return pcVar4;
}

