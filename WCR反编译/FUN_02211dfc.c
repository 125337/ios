// FUN_02211dfc @ 02211dfc

undefined1  [16] FUN_02211dfc(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_290 [8];
  undefined8 local_288;
  undefined8 local_280;
  uint local_274;
  undefined8 local_270;
  undefined8 *local_268;
  undefined8 local_260;
  undefined8 local_258;
  long *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  uint local_224;
  undefined8 local_220;
  uint local_214;
  long local_210;
  long local_208;
  undefined *local_200;
  long local_1f8;
  long local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  long local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  long local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  uint local_194;
  long local_190;
  code *local_188;
  long local_180;
  undefined *local_178;
  long local_170;
  undefined *local_168;
  uint local_15c;
  undefined8 local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  ulong local_120;
  long local_118;
  undefined1 *local_110;
  ulong local_108;
  long local_100;
  long local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  long local_e0;
  undefined *local_d8;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [16];
  undefined1 *local_90;
  long local_88;
  undefined *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  long local_40;
  undefined1 *local_38;
  
  local_38 = (undefined1 *)0x0;
  local_48 = 0;
  local_40 = 0;
  local_58 = 0;
  local_50 = 0;
  local_68 = 0;
  local_60 = (undefined *)0x0;
  local_148 = 0;
  lVar4 = 0;
  local_140 = 0;
  local_138 = param_1;
  local_f8 = param_2;
  __s10Foundation12CharacterSetVMa();
  local_128 = *(long *)(lVar4 + -8);
  local_118 = *(long *)(local_128 + 0x40);
  local_120 = local_118 + 0xfU & 0xfffffffffffffff0;
  lVar5 = local_f8;
  local_130 = lVar4;
  (*(code *)PTR____chkstk_darwin_02578668)(local_138);
  puVar1 = auStack_290 + -local_120;
  local_108 = local_118 + 0xfU & 0xfffffffffffffff0;
  local_110 = puVar1;
  local_38 = puVar1;
  (*(code *)PTR____chkstk_darwin_02578668)();
  local_100 = (long)puVar1 - local_108;
  local_40 = lVar5;
  _swift_bridgeObjectRetain();
  if (local_f8 == 0) {
    local_238 = local_140;
    local_230 = local_140;
  }
  else {
    local_158 = local_138;
    local_150 = local_f8;
    local_190 = local_f8;
    local_58 = local_138;
    local_50 = local_f8;
    local_78 = local_138;
    local_70 = local_f8;
    __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(local_100);
    FUN_021c81a4();
    lVar4 = local_100;
    puVar7 = PTR___sSSN_02578938;
    __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF
              (local_100,PTR___sSSN_02578938,lVar5);
    local_188 = *(code **)(local_128 + 8);
    local_180 = lVar4;
    local_178 = puVar7;
    (*local_188)(local_100,local_130);
    lVar5 = local_180;
    puVar7 = local_178;
    __sSS10uppercasedSSyF();
    local_170 = lVar5;
    local_168 = puVar7;
    _swift_bridgeObjectRelease(local_178);
    _swift_bridgeObjectRetain(local_168);
    local_68 = local_170;
    local_60 = local_168;
    lVar5 = local_170;
    __sSS7isEmptySbvg();
    local_15c = (uint)lVar5;
    _swift_bridgeObjectRelease(local_168);
    if ((local_15c & 1) == 0) {
      local_1b0 = local_68;
      local_1a0 = local_60;
      _swift_bridgeObjectRetain();
      local_194 = 0x24675a0;
      uVar9 = 1;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#",1,1);
      local_1a8 = uVar9;
      __sSS9hasPrefixySbSSF();
      _swift_bridgeObjectRelease(local_1a8);
      _swift_bridgeObjectRelease(local_1a0);
      uVar6 = (ulong)local_194;
      if ((local_194 & 1) != 0) {
        FUN_021c941c();
        __sSmsE11removeFirst7ElementQzyF(auStack_f0,PTR___sSSN_02578938,uVar6);
        _swift_bridgeObjectRelease(local_e8);
      }
      local_1c8 = local_68;
      local_1c0 = local_60;
      _swift_bridgeObjectRetain();
      lVar5 = local_1c8;
      __sSS5countSivg(local_1c8,local_1c0);
      local_1b8 = lVar5;
      _swift_bridgeObjectRelease(local_1c0);
      if (local_1b8 == 8) {
        local_1f0 = local_68;
        local_1e8 = local_60;
        puVar7 = local_60;
        _swift_bridgeObjectRetain();
        local_e0 = local_1f0;
        local_d8 = local_1e8;
        FUN_021e298c();
        __sSlsE6prefixy11SubSequenceQzSiF(&local_d0,6,PTR___sSSN_02578938,puVar7);
        local_1e0 = local_b8;
        __sSSySSSshcfC(local_d0,local_c8,local_c0);
        local_1d8 = local_d0;
        local_1d0 = local_c8;
        _swift_bridgeObjectRelease(local_1e0);
        puVar7 = local_60;
        local_68 = local_1d8;
        local_60 = local_1d0;
        _swift_bridgeObjectRelease(puVar7);
      }
      local_208 = local_68;
      local_200 = local_60;
      _swift_bridgeObjectRetain();
      lVar5 = local_208;
      __sSS5countSivg(local_208,local_200);
      local_1f8 = lVar5;
      _swift_bridgeObjectRelease(local_200);
      lVar5 = local_148;
      if (local_1f8 + -6 == 0) {
        uVar9 = 0x10;
        __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                  ("0123456789ABCDEF",0x10,1);
        local_220 = uVar9;
        __s10Foundation12CharacterSetV12charactersInACSSh_tcfC(local_110);
        _swift_bridgeObjectRelease(local_220);
        lVar4 = local_68;
        puVar7 = local_60;
        __sSS14unicodeScalarsSS17UnicodeScalarViewVvg();
        local_90 = local_110;
        local_224 = 0x2219754;
        local_88 = lVar4;
        local_80 = puVar7;
        __sSTsE10allSatisfyyS2b7ElementQzKXEKF
                  (FUN_02219754,auStack_a0,PTR___sSS17UnicodeScalarViewVN_02578928,
                   PTR___sSS17UnicodeScalarViewVSTsWP_02578930);
        local_210 = lVar5;
        local_214 = local_224;
        if (lVar5 != 0) {
          _swift_errorRelease(lVar5);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x22125b8);
          (*pcVar3)();
        }
        FUN_0221977c(&local_88);
        if ((local_224 & 1) == 0) {
          (*local_188)(local_110,local_130);
          FUN_021c7f98(&local_68);
          _swift_bridgeObjectRelease(local_190);
          local_238 = local_140;
          local_230 = local_140;
        }
        else {
          uVar10 = 1;
          local_288 = 1;
          uVar8 = 1;
          __ss26DefaultStringInterpolationV15literalCapacity18interpolationCountABSi_SitcfC();
          local_268 = &local_b0;
          local_274 = 1;
          uVar9 = local_288;
          local_b0 = uVar8;
          local_a8 = uVar10;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("#",local_288,1);
          local_280 = uVar9;
          __ss26DefaultStringInterpolationV13appendLiteralyySSF();
          _swift_bridgeObjectRelease(local_280);
          local_250 = &local_68;
          __ss26DefaultStringInterpolationV06appendC0yyxs06CustomB11ConvertibleRzs20TextOutputStreamableRzlF
                    (local_250,PTR___sSSN_02578938,PTR___sSSs23CustomStringConvertiblesWP_02578970,
                     PTR___sSSs20TextOutputStreamablesWP_02578968);
          uVar9 = 0;
          __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("",0,local_274 & 1)
          ;
          local_270 = uVar9;
          __ss26DefaultStringInterpolationV13appendLiteralyySSF();
          _swift_bridgeObjectRelease(local_270);
          local_258 = local_b0;
          local_260 = local_a8;
          _swift_bridgeObjectRetain();
          FUN_02204094(local_268);
          uVar9 = local_258;
          uVar8 = local_260;
          __sSS19stringInterpolationSSs013DefaultStringB0V_tcfC();
          local_248 = uVar9;
          local_240 = uVar8;
          (*local_188)(local_110,local_130);
          FUN_021c7f98(local_250);
          _swift_bridgeObjectRelease(local_190);
          local_238 = local_248;
          local_230 = local_240;
        }
      }
      else {
        FUN_021c7f98(local_1f8 + -6,&local_68);
        _swift_bridgeObjectRelease(local_190);
        local_238 = local_140;
        local_230 = local_140;
      }
    }
    else {
      FUN_021c7f98(&local_68);
      _swift_bridgeObjectRelease(local_190);
      local_238 = local_140;
      local_230 = local_140;
    }
  }
  auVar2._8_8_ = local_230;
  auVar2._0_8_ = local_238;
  return auVar2;
}

