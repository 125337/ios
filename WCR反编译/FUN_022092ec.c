// FUN_022092ec @ 022092ec

/* WARNING: Removing unreachable block (ram,0x02209424) */
/* WARNING: Removing unreachable block (ram,0x02209768) */
/* WARNING: Removing unreachable block (ram,0x022098f4) */
/* WARNING: Removing unreachable block (ram,0x02209aac) */
/* WARNING: Removing unreachable block (ram,0x022095b0) */
/* WARNING: Removing unreachable block (ram,0x02209c38) */

uint FUN_022092ec(char param_1)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  uint local_224;
  uint local_21c;
  uint local_1ec;
  uint local_1c4;
  uint local_1bc;
  uint local_18c;
  uint local_164;
  uint local_15c;
  uint local_12c;
  undefined8 local_120;
  uint local_100;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  
  if (param_1 == '\0') {
    local_100 = 1;
  }
  else if (param_1 == '\x01') {
    lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::nearMistLayer);
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = "wcr.swiftGlow.near.shadowOpacity";
    uVar4 = 0x20;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("wcr.swiftGlow.near.shadowOpacity",0x20,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = lVar3;
    FUN_02221f60(lVar3,local_120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_b8 = 0;
    local_c0 = lVar2;
    if (lVar2 == 0) {
      FUN_0220f038(&local_c0);
      local_12c = 1;
    }
    else {
      FUN_0220f068(&local_c0,&local_e8);
      lVar2 = local_b8;
      if (local_b8 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
        FUN_0220eff4(&local_c0);
        local_12c = 0;
      }
      else {
        FUN_021fb904(0);
        uVar4 = local_e8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_e8,lVar2);
        local_12c = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(lVar2);
        (*(code *)PTR__objc_release_02578630)(local_e8);
        FUN_0220f038(&local_c0);
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_12c & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::farMistLayer);
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = "wcr.swiftGlow.far.shadowRadius";
      uVar4 = 0x1e;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                ("wcr.swiftGlow.far.shadowRadius",0x1e,1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar4);
      lVar2 = lVar3;
      FUN_02221f60(lVar3,local_120,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      local_c8 = 0;
      local_d0 = lVar2;
      if (lVar2 == 0) {
        FUN_0220f038(&local_d0);
        local_15c = 1;
      }
      else {
        FUN_0220f068(&local_d0,&local_d8);
        if (local_c8 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
          FUN_0220eff4(&local_d0);
          local_15c = 0;
        }
        else {
          local_e0 = local_c8;
          FUN_021fb904(0);
          uVar4 = local_d8;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_d8,local_e0);
          local_15c = (uint)uVar4;
          (*(code *)PTR__objc_release_02578630)(local_e0);
          (*(code *)PTR__objc_release_02578630)(local_d8);
          FUN_0220f038(&local_d0);
        }
      }
      local_164 = local_15c ^ 1;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_164 = 0;
    }
    local_100 = local_164;
  }
  else if (param_1 == '\x02') {
    lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::nearMistLayer);
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = "wcr.swiftGlow.near.shadowOpacity";
    uVar4 = 0x20;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("wcr.swiftGlow.near.shadowOpacity",0x20,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = lVar3;
    FUN_02221f60(lVar3,local_120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_78 = 0;
    local_80 = lVar2;
    if (lVar2 == 0) {
      FUN_0220f038(&local_80);
      local_18c = 1;
    }
    else {
      FUN_0220f068(&local_80,&local_a8);
      if (local_78 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
        FUN_0220eff4(&local_80);
        local_18c = 0;
      }
      else {
        local_b0 = local_78;
        FUN_021fb904(0);
        uVar4 = local_a8;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_a8,local_b0);
        local_18c = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(local_b0);
        (*(code *)PTR__objc_release_02578630)(local_a8);
        FUN_0220f038(&local_80);
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_18c & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::farMistLayer);
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = "wcr.swiftGlow.far.opacity";
      uVar4 = 0x19;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                ("wcr.swiftGlow.far.opacity",0x19,1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar4);
      lVar2 = lVar3;
      FUN_02221f60(lVar3,local_120,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      local_88 = 0;
      local_90 = lVar2;
      if (lVar2 == 0) {
        FUN_0220f038(&local_90);
        local_1bc = 1;
      }
      else {
        FUN_0220f068(&local_90,&local_98);
        if (local_88 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_98);
          FUN_0220eff4(&local_90);
          local_1bc = 0;
        }
        else {
          local_a0 = local_88;
          FUN_021fb904(0);
          uVar4 = local_98;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_98,local_a0);
          local_1bc = (uint)uVar4;
          (*(code *)PTR__objc_release_02578630)(local_a0);
          (*(code *)PTR__objc_release_02578630)(local_98);
          FUN_0220f038(&local_90);
        }
      }
      local_1c4 = local_1bc ^ 1;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_1c4 = 0;
    }
    local_100 = local_1c4;
  }
  else {
    lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::marqueeLeadLayer);
    (*(code *)PTR__objc_retain_02578638)();
    pcVar1 = "wcr.swiftGlow.marquee.dashPhase";
    uVar4 = 0x1f;
    __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
              ("wcr.swiftGlow.marquee.dashPhase",0x1f,1);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = lVar3;
    FUN_02221f60(lVar3,local_120,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    local_38 = 0;
    local_40 = lVar2;
    if (lVar2 == 0) {
      FUN_0220f038(&local_40);
      local_1ec = 1;
    }
    else {
      FUN_0220f068(&local_40,&local_68);
      if (local_38 == 0) {
        (*(code *)PTR__objc_release_02578630)(local_68);
        FUN_0220eff4(&local_40);
        local_1ec = 0;
      }
      else {
        local_70 = local_38;
        FUN_021fb904(0);
        uVar4 = local_68;
        __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_68,local_70);
        local_1ec = (uint)uVar4;
        (*(code *)PTR__objc_release_02578630)(local_70);
        (*(code *)PTR__objc_release_02578630)(local_68);
        FUN_0220f038(&local_40);
      }
    }
    (*(code *)PTR__objc_retain_02578638)(unaff_x20);
    if ((local_1ec & 1) == 0) {
      lVar3 = *(long *)(unaff_x20 + WCRefineFloatingGlowView::marqueeAccentLayer);
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = "wcr.swiftGlow.marquee.dashPhase";
      uVar4 = 0x1f;
      __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
                ("wcr.swiftGlow.marquee.dashPhase",0x1f,1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
      _swift_bridgeObjectRelease(uVar4);
      lVar2 = lVar3;
      FUN_02221f60(lVar3,local_120,pcVar1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(lVar3);
      local_48 = 0;
      local_50 = lVar2;
      if (lVar2 == 0) {
        FUN_0220f038(&local_50);
        local_21c = 1;
      }
      else {
        FUN_0220f068(&local_50,&local_58);
        if (local_48 == 0) {
          (*(code *)PTR__objc_release_02578630)(local_58);
          FUN_0220eff4(&local_50);
          local_21c = 0;
        }
        else {
          local_60 = local_48;
          FUN_021fb904(0);
          uVar4 = local_58;
          __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_58,local_60);
          local_21c = (uint)uVar4;
          (*(code *)PTR__objc_release_02578630)(local_60);
          (*(code *)PTR__objc_release_02578630)(local_58);
          FUN_0220f038(&local_50);
        }
      }
      local_224 = local_21c ^ 1;
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(unaff_x20);
      local_224 = 0;
    }
    local_100 = local_224;
  }
  return local_100 & 1;
}

