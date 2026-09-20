// FUN_0221704c @ 0221704c

void FUN_0221704c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 local_f8;
  
  _swift_getObjectType();
  uVar6 = 0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_msgSendSuper2(&stack0xffffffffffffffc8,PTR_s_layoutSubviews_0269de80);
  lVar2 = unaff_x20;
  (*(code *)PTR__objc_release_02578630)();
  FUN_02216748();
  lVar3 = lVar2;
  FUN_02223aa0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  if (lVar3 == 0) {
    __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
              ("Fatal error",0xb,2,
               "Unexpectedly found nil while implicitly unwrapping an Optional value",0x44,2,
               "WCRefine/WCRefineVoiceInputBreathingLightOverlay.swift",0x36,2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x2217188);
    (*pcVar1)();
  }
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222060(unaff_x20,local_f8);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  dVar7 = -*(double *)
            (unaff_x20 +
            _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
            ::overscan);
  dVar9 = -*(double *)
            (unaff_x20 +
            _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
            ::overscan);
  FUN_021b4eac();
  FUN_022230c0(lVar3,local_f8);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  FUN_02222be0(unaff_x20,local_f8);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  __s7SwiftUI10EdgeInsetsV3top7leading6bottom8trailingAC12CoreGraphics7CGFloatV_A3JtcfC();
  uVar4 = *(ulong *)(unaff_x20 +
                    _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
                    ::layoutModel);
  dVar8 = dVar7;
  dVar10 = dVar9;
  uVar5 = uVar6;
  uVar11 = param_2;
  _swift_retain(uVar4);
  FUN_0220fa58();
  _swift_release();
  __s7SwiftUI10EdgeInsetsV2eeoiySbAC_ACtFZ(dVar8,dVar10,uVar5,uVar11,dVar7,dVar9,uVar6,param_2);
  if ((uVar4 & 1) == 0) {
    uVar5 = *(undefined8 *)
             (unaff_x20 +
             _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
             ::layoutModel);
    _swift_retain(uVar5);
    FUN_0220fbd4(dVar7,dVar9,uVar6,param_2);
    _swift_release(uVar5);
  }
  return;
}

