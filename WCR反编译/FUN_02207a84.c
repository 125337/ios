// FUN_02207a84 @ 02207a84

undefined1 * FUN_02207a84(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 *local_c8;
  undefined1 local_40 [16];
  undefined8 local_30;
  
  _swift_getObjectType();
  lVar2 = WCRefineFloatingGlowView::edgeLayer;
  uVar3 = 0;
  local_30 = param_1;
  FUN_02206f14();
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = WCRefineFloatingGlowView::nearMistLayer;
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = WCRefineFloatingGlowView::farMistLayer;
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = WCRefineFloatingGlowView::marqueeSoftLayer;
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = WCRefineFloatingGlowView::marqueeAccentLayer;
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  lVar2 = WCRefineFloatingGlowView::marqueeLeadLayer;
  FUN_02206f74();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::lastSignature);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeCycleLength) = 0x4074000000000000;
  local_c8 = local_40;
  _objc_msgSendSuper2(local_c8,PTR_s_initWithCoder__026ca6c0,param_1);
  if (local_c8 == (undefined1 *)0x0) {
    (*(code *)PTR__objc_release_02578630)(0);
    (*(code *)PTR__objc_release_02578630)(param_1);
    local_c8 = (undefined1 *)0x0;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)(local_c8);
    FUN_02207590();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  return local_c8;
}

