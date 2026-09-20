// FUN_021e2090 @ 021e2090

undefined8 FUN_021e2090(double param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 unaff_x20;
  undefined1 auStack_2a0 [8];
  undefined8 local_298;
  ulong *local_288;
  undefined *local_280;
  undefined1 *local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  undefined8 local_250;
  ulong *local_248;
  undefined *local_240;
  undefined1 *local_238;
  double local_230;
  double local_220;
  double local_218;
  double local_210;
  double local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  ulong local_1f0;
  undefined1 *local_1e8;
  undefined *local_1e0;
  undefined1 *local_1d8;
  ulong local_1d0;
  undefined1 *local_1c8;
  undefined *local_1c0;
  undefined1 **local_1b8;
  ulong local_1b0;
  undefined1 *local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  uint local_18c;
  undefined1 *local_188;
  undefined *local_180;
  undefined1 *local_178;
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  double local_f0;
  ulong local_e8;
  double local_e0;
  ulong local_d8;
  double local_d0;
  ulong local_c8;
  double local_c0;
  ulong local_b8;
  double local_b0;
  ulong local_a8;
  double local_a0;
  ulong local_98;
  double local_90;
  ulong local_88;
  ulong local_80;
  undefined1 *local_78;
  undefined *local_70;
  ulong local_68;
  char local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = 0;
  local_48 = (undefined1 *)0x0;
  local_40 = (undefined *)0x0;
  local_80 = 0;
  local_90 = 0.0;
  local_a0 = 0.0;
  local_b0 = 0.0;
  local_c0 = 0.0;
  local_d0 = 0.0;
  local_e0 = 0.0;
  local_f0 = 0.0;
  lVar2 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar8 = *(long *)(lVar2 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  uVar7 = param_3;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_58 = param_2;
  local_50 = uVar7;
  local_38 = param_2;
  local_30 = uVar7;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ();
  FUN_021c81a4();
  puVar3 = auStack_2a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0);
  puVar5 = PTR___sSSN_02578938;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF();
  (**(code **)(lVar8 + 8))(auStack_2a0 + -(lVar9 + 0xfU & 0xfffffffffffffff0),lVar2);
  puVar6 = puVar5;
  __sSS10uppercasedSSyF();
  _swift_bridgeObjectRelease(puVar5);
  _swift_bridgeObjectRetain(puVar6);
  uVar1 = 0x24675a0;
  uVar7 = 1;
  local_48 = puVar3;
  local_40 = puVar6;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#",1,1);
  __sSS9hasPrefixySbSSF();
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(puVar6);
  uVar4 = (ulong)uVar1;
  if ((uVar1 & 1) != 0) {
    FUN_021c941c();
    __sSmsE11removeFirst7ElementQzyF(auStack_100,PTR___sSSN_02578938,uVar4);
    _swift_bridgeObjectRelease(local_f8);
  }
  local_188 = local_48;
  local_180 = local_40;
  _swift_bridgeObjectRetain();
  puVar3 = local_188;
  __sSS5countSivg(local_188,local_180);
  local_178 = puVar3;
  _swift_bridgeObjectRelease(local_180);
  if (local_178 == (undefined1 *)0x6) {
    local_18c = 1;
  }
  else {
    local_1a8 = local_48;
    local_1a0 = local_40;
    _swift_bridgeObjectRetain();
    puVar3 = local_1a8;
    __sSS5countSivg(local_1a8,local_1a0);
    local_198 = puVar3;
    _swift_bridgeObjectRelease(local_1a0);
    local_18c = (uint)(local_198 == (undefined1 *)0x8);
  }
  if (local_18c != 0) {
    local_1c8 = local_48;
    local_1c0 = local_40;
    puVar5 = local_40;
    _swift_bridgeObjectRetain();
    local_1b8 = &local_78;
    local_78 = local_1c8;
    local_70 = local_1c0;
    FUN_021c8dc8();
    __ss17FixedWidthIntegerPsE_5radixxSgqd___SitcSyRd__lufC
              (&local_68,local_1b8,0x10,PTR___ss6UInt64VN_02578ae0,PTR___sSSN_02578938,puVar5,
               param_2);
    local_1b0 = local_68;
    if (local_60 != '\x01') {
      local_1d0 = local_68;
      local_1f0 = local_68;
      local_80 = local_68;
      local_1e8 = local_48;
      local_1e0 = local_40;
      _swift_bridgeObjectRetain();
      puVar3 = local_1e8;
      __sSS5countSivg(local_1e8,local_1e0);
      local_1d8 = puVar3;
      _swift_bridgeObjectRelease(local_1e0);
      if (local_1d8 == (undefined1 *)0x8) {
        local_b8 = (local_1f0 & 0xff000000) >> 0x18;
        local_248 = &local_b8;
        puVar3 = local_1d8;
        FUN_021c93b8();
        local_240 = PTR___ss6UInt64VN_02578ae0;
        local_238 = puVar3;
        FUN_021c91ec(local_248);
        local_230 = 255.0;
        param_1 = param_1 / 255.0;
        local_c8 = (local_1f0 & 0xff0000) >> 0x10;
        local_220 = param_1;
        local_c0 = param_1;
        FUN_021c91ec(&local_c8,local_240,local_238);
        param_1 = param_1 / local_230;
        local_d8 = (local_1f0 & 0xff00) >> 8;
        local_218 = param_1;
        local_d0 = param_1;
        FUN_021c91ec(&local_d8,local_240,local_238);
        param_1 = param_1 / local_230;
        local_e8 = local_1f0 & 0xff;
        local_210 = param_1;
        local_e0 = param_1;
        FUN_021c91ec(&local_e8,local_240,local_238);
        local_208 = param_1 / local_230;
        local_f0 = local_208;
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        FUN_02222720(local_220,local_218,local_210,local_208);
        local_200 = unaff_x20;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_200;
      }
      else {
        local_88 = (local_1f0 & 0xff0000) >> 0x10;
        local_288 = &local_88;
        puVar3 = local_1d8;
        FUN_021c93b8();
        local_280 = PTR___ss6UInt64VN_02578ae0;
        local_278 = puVar3;
        FUN_021c91ec(local_288);
        local_270 = 255.0;
        param_1 = param_1 / 255.0;
        local_98 = (local_1f0 & 0xff00) >> 8;
        local_268 = param_1;
        local_90 = param_1;
        FUN_021c91ec(&local_98,local_280,local_278);
        param_1 = param_1 / local_270;
        local_a8 = local_1f0 & 0xff;
        local_260 = param_1;
        local_a0 = param_1;
        FUN_021c91ec(&local_a8,local_280,local_278);
        local_258 = param_1 / local_270;
        local_b0 = local_258;
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        FUN_02222720(local_268,local_260,local_258,0x3ff0000000000000);
        local_250 = unaff_x20;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = local_250;
      }
      local_298 = local_28;
      local_1f8 = local_28;
      FUN_021c7f98(&local_48);
      _swift_bridgeObjectRelease(param_3);
      (*(code *)PTR__objc_release_02578630)(local_28);
      return local_298;
    }
  }
  FUN_021c7f98(0,&local_48);
  _swift_bridgeObjectRelease(param_3);
  return 0;
}

