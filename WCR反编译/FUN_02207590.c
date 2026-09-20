// FUN_02207590 @ 02207590

/* WARNING: Removing unreachable block (ram,0x022079b8) */
/* WARNING: Removing unreachable block (ram,0x022079d4) */

void FUN_02207590(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 local_f0;
  undefined1 auStack_80 [24];
  long local_68;
  undefined1 auStack_60 [32];
  long local_40;
  
  (*(code *)PTR__objc_retain_02578638)();
  FUN_022236a0();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  _objc_opt_self();
  FUN_022220e0();
  _objc_retainAutoreleasedReturnValue();
  FUN_02222d60();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222e60();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = unaff_x20;
  FUN_02222960();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  FUN_02223220(lVar3,local_f0,0);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  (*(code *)PTR__objc_retain_02578638)();
  lVar3 = unaff_x20;
  FUN_02222960();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  uVar2 = *(undefined8 *)PTR__kCACornerCurveContinuous_025783c8;
  (*(code *)PTR__objc_retain_02578638)();
  FUN_02222f20(lVar3,local_f0,uVar2);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  uVar2 = 0;
  FUN_02206f14();
  lVar3 = 3;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF();
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::farMistLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::nearMistLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::edgeLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  FUN_021b0268(lVar3,uVar2);
  local_40 = lVar3;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  puVar1 = &DAT_028c74b8;
  FUN_021c77d4(&DAT_028c74b8,&DAT_0233bb10);
  puVar5 = puVar1;
  FUN_0220c494();
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_0220c470,auStack_60,puVar1);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_0220c508(&local_40);
  lVar3 = 3;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF(3,uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeSoftLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x20) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeAccentLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x28) = uVar4;
  uVar4 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeLeadLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar3 + 0x30) = uVar4;
  FUN_021b0268(lVar3,uVar2);
  local_68 = lVar3;
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_0220c818,auStack_80,puVar1,puVar5);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  FUN_0220c508(&local_68);
  return;
}

