// FUN_02216f14 @ 02216f14

void FUN_02216f14(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  long unaff_x20;
  
  *(undefined8 *)
   (unaff_x20 +
   _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::overscan
   ) = 0x4046000000000000;
  lVar1 = _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
          layoutModel;
  uVar3 = 0;
  FUN_02219b80();
  FUN_022117b8();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
  *(undefined8 *)
   (unaff_x20 +
   _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
   ___lazy_storage___hostingController) = 0;
  pcVar4 = "init(coder:) has not been implemented";
  uVar3 = 0x25;
  __sSS21_builtinStringLiteral17utf8CodeUnitCount7isASCIISSBp_BwBi1_tcfC
            ("init(coder:) has not been implemented",0x25,1);
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,pcVar4,uVar3,
             "WCRefine/WCRefineVoiceInputBreathingLightOverlay.swift",0x36,2,0x1bc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x221700c);
  (*pcVar2)();
}

