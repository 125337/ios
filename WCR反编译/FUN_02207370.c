// FUN_02207370 @ 02207370

undefined1 *
FUN_02207370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  _swift_getObjectType();
  lVar2 = WCRefineFloatingGlowView::edgeLayer;
  uVar3 = 0;
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
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
  puVar4 = local_60;
  _objc_msgSendSuper2(param_1,param_2,param_3,param_4,puVar4,PTR_s_initWithFrame__026ca6e8);
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02207590();
  (*(code *)PTR__objc_release_02578630)(puVar4);
  return puVar4;
}

