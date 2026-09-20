// FUN_021b542c @ 021b542c

undefined8 FUN_021b542c(double param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 unaff_x20;
  double dVar12;
  ulong *local_270;
  ulong local_268;
  undefined *local_260;
  ulong *local_258;
  double local_250;
  double local_240;
  double local_238;
  double local_230;
  double local_228;
  undefined8 local_220;
  undefined8 local_218;
  ulong local_210;
  ulong local_208;
  undefined *local_200;
  ulong *local_1f8;
  ulong local_1f0;
  ulong local_1e8;
  undefined *local_1e0;
  ulong local_1d8;
  ulong *local_1d0;
  ulong local_1c8;
  double local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_1a0;
  ulong *local_198;
  ulong local_190;
  ulong local_188;
  undefined *local_180;
  ulong local_178;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined *local_d8;
  ulong local_d0;
  char local_c8;
  double local_c0;
  ulong local_b8;
  double local_b0;
  ulong local_a8;
  double local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  undefined *local_80;
  ulong local_78;
  char local_70;
  double local_68;
  ulong local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulong local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = 0;
  local_48 = 0;
  local_40 = (undefined *)0x0;
  local_60 = 0;
  local_68 = 0.0;
  local_90 = 0;
  local_a0 = 0.0;
  local_b0 = 0.0;
  local_c0 = 0.0;
  local_e8 = 0;
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar9 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  uVar4 = (long)&local_270 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  local_58 = param_2;
  local_50 = uVar9;
  local_38 = param_2;
  local_30 = uVar9;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ();
  FUN_021c81a4();
  uVar3 = uVar4;
  puVar5 = PTR___sSSN_02578938;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF();
  (**(code **)(lVar10 + 8))(uVar4,lVar2);
  puVar8 = puVar5;
  __sSS10uppercasedSSyF();
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRetain(puVar8);
  uVar1 = 0x24675a0;
  uVar9 = 1;
  local_48 = uVar3;
  local_40 = puVar8;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#",1,1);
  __sSS9hasPrefixySbSSF();
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(puVar8);
  uVar4 = (ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_021c941c();
    __sSmsE11removeFirst7ElementQzyF(auStack_100,PTR___sSSN_02578938,uVar4);
    _swift_bridgeObjectRelease(local_f8);
  }
  local_188 = local_48;
  local_180 = local_40;
  _swift_bridgeObjectRetain();
  uVar4 = local_188;
  __sSS5countSivg(local_188,local_180);
  local_178 = uVar4;
  _swift_bridgeObjectRelease(local_180);
  if (local_178 == 8) {
    local_1a8 = local_48;
    local_1a0 = local_40;
    puVar5 = local_40;
    _swift_bridgeObjectRetain();
    local_198 = &local_e0;
    local_e0 = local_1a8;
    local_d8 = local_1a0;
    FUN_021c8dc8();
    puVar6 = local_198;
    __ss17FixedWidthIntegerPsE_5radixxSgqd___SitcSyRd__lufC
              (&local_d0,local_198,0x10,PTR___ss6UInt64VN_02578ae0,PTR___sSSN_02578938,puVar5,
               param_2);
    local_190 = local_d0;
    if (local_c8 == '\x01') goto LAB_021b57cc;
    local_1b0 = local_d0;
    local_e8 = local_d0;
    local_1c8 = local_d0 >> 8;
    local_f0 = local_d0 & 0xff;
    local_1d0 = &local_f0;
    local_60 = local_1c8;
    FUN_021c93b8();
    puVar7 = local_1d0;
    FUN_021c91ec(local_1d0,PTR___ss6UInt64VN_02578ae0,puVar6);
    local_68 = param_1 / 255.0;
    local_1b8 = local_1c8;
LAB_021b592c:
    local_268 = local_1b8;
    local_228 = local_68;
    local_98 = (local_1b8 & 0xff0000) >> 0x10;
    local_270 = &local_98;
    dVar12 = local_68;
    local_1c0 = local_68;
    FUN_021c93b8();
    local_260 = PTR___ss6UInt64VN_02578ae0;
    local_258 = puVar7;
    FUN_021c91ec(local_270);
    local_250 = 255.0;
    dVar12 = dVar12 / 255.0;
    local_a8 = (local_268 & 0xff00) >> 8;
    local_240 = dVar12;
    local_a0 = dVar12;
    FUN_021c91ec(&local_a8,local_260,local_258);
    dVar12 = dVar12 / local_250;
    local_b8 = local_268 & 0xff;
    local_238 = dVar12;
    local_b0 = dVar12;
    FUN_021c91ec(&local_b8,local_260,local_258);
    local_230 = dVar12 / local_250;
    local_c0 = local_230;
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    FUN_02222720(local_240,local_238,local_230,local_228);
    local_220 = unaff_x20;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_220;
    FUN_021c7f98(&local_48);
    _swift_bridgeObjectRelease(param_3);
    (*(code *)PTR__objc_release_02578630)(local_28);
    local_218 = local_220;
  }
  else {
LAB_021b57cc:
    local_1e8 = local_48;
    local_1e0 = local_40;
    _swift_bridgeObjectRetain();
    uVar4 = local_1e8;
    __sSS5countSivg(local_1e8,local_1e0);
    local_1d8 = uVar4;
    _swift_bridgeObjectRelease(local_1e0);
    lVar2 = local_1d8 - 6;
    if (lVar2 == 0) {
      local_208 = local_48;
      local_200 = local_40;
      puVar5 = local_40;
      _swift_bridgeObjectRetain();
      local_1f8 = &local_88;
      local_88 = local_208;
      local_80 = local_200;
      FUN_021c8dc8();
      puVar7 = local_1f8;
      __ss17FixedWidthIntegerPsE_5radixxSgqd___SitcSyRd__lufC
                (&local_78,local_1f8,0x10,PTR___ss6UInt64VN_02578ae0,PTR___sSSN_02578938,puVar5,
                 param_2);
      local_1f0 = local_78;
      if (local_70 != '\x01') {
        local_210 = local_78;
        local_90 = local_78;
        local_60 = local_78;
        local_68 = 1.0;
        local_1b8 = local_78;
        goto LAB_021b592c;
      }
      lVar2 = 0;
    }
    FUN_021c7f98(lVar2,&local_48);
    _swift_bridgeObjectRelease(param_3);
    local_218 = 0;
  }
  return local_218;
}

