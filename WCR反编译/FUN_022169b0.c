// FUN_022169b0 @ 022169b0

undefined1 *
FUN_022169b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long unaff_x20;
  undefined8 local_a8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  *(undefined8 *)
   (unaff_x20 +
   _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::overscan
   ) = 0x4046000000000000;
  lVar6 = _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
          layoutModel;
  uVar2 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_02219b80();
  FUN_022117b8();
  *(undefined8 *)(unaff_x20 + lVar6) = uVar2;
  *(undefined8 *)
   (unaff_x20 +
   _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView::
   ___lazy_storage___hostingController) = 0;
  puVar3 = local_60;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  local_68 = param_4;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar3,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_retain_02578638)();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222d60(puVar3,local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  FUN_02223320(puVar3,local_a8,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  FUN_02223100(puVar3,local_a8,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  FUN_02222cc0(0,puVar3,local_a8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  FUN_02222e60(puVar3,local_a8,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  FUN_022236a0(puVar3,local_a8,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_retain_02578638)(puVar3);
  uVar2 = 0;
  FUN_021c880c(0);
  lVar5 = 2;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(2,uVar2);
  *(undefined8 *)(lVar5 + 0x20) = 2;
  *(undefined8 *)(lVar5 + 0x28) = 0x10;
  FUN_021b0268();
  lVar6 = lVar5;
  FUN_021c88a0();
  __ss10SetAlgebraPs7ElementQz012ArrayLiteralC0RtzrlE05arrayE0xAFd_tcfC(&local_88,lVar5,uVar2,lVar6)
  ;
  FUN_02222d20(puVar3,local_a8,local_88);
  puVar7 = puVar3;
  (*(code *)PTR__objc_release_02578630)();
  FUN_02216748();
  puVar8 = puVar7;
  FUN_02223aa0();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if (puVar8 != (undefined1 *)0x0) {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    _objc_opt_self();
    FUN_022220e0();
    _objc_retainAutoreleasedReturnValue();
    FUN_02222d60(puVar8,local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_02223320(puVar8,local_a8,0);
    FUN_02222e60(puVar8,local_a8,0);
    FUN_022236a0(puVar8,local_a8,0);
    FUN_02221e40(puVar3,local_a8,puVar8);
    uVar2 = *(undefined8 *)
             (puVar3 + _TtC8WCRefineP33_06A006CF41CBF7D17FBD8A696675B62C36WCRefineVoiceInputBreathingLightView
                       ::layoutModel);
    _swift_retain(uVar2);
    FUN_0221167c();
    _swift_release(uVar2);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    return puVar3;
  }
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_A2HSus6UInt32VtF
            ("Fatal error",0xb,2,"Unexpectedly found nil while unwrapping an Optional value",0x39,2,
             "WCRefine/WCRefineVoiceInputBreathingLightOverlay.swift",0x36,2);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x2216d88);
  (*pcVar1)();
}

