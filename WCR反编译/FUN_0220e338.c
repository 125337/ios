// FUN_0220e338 @ 0220e338

void FUN_0220e338(double param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 local_68;
  
  FUN_021fb844();
  pcVar1 = "lineDashPhase";
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC("lineDashPhase",0xd,1);
  FUN_021f4794();
  pcVar2 = pcVar1;
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(param_1);
  FUN_022230e0(pcVar1,local_68);
  _swift_unknownObjectRelease();
  __s12CoreGraphics7CGFloatV10FoundationE19_bridgeToObjectiveCSo8NSNumberCyF(param_1 - param_2);
  FUN_02223660(pcVar1,local_68);
  _swift_unknownObjectRelease(pcVar2);
  (*(code *)PTR__objc_retain_02578638)(pcVar1);
  FUN_02222fc0(param_3,pcVar1,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_retain_02578638)(pcVar1);
  __sSf23greatestFiniteMagnitudeSfvgZ();
  FUN_022233a0(pcVar1,local_68);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_retain_02578638)(pcVar1);
  FUN_021fb964(0);
  uVar3 = *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_02578438;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_021f4878();
  FUN_022235c0(pcVar1,local_68);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar2 = "wcr.swiftGlow.marquee.dashPhase";
  uVar3 = 0x1f;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("wcr.swiftGlow.marquee.dashPhase",0x1f,1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(uVar3);
  FUN_02221da0(param_4,local_68,pcVar1,pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  return;
}

