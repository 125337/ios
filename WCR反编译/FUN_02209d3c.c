// FUN_02209d3c @ 02209d3c

/* WARNING: Removing unreachable block (ram,0x02209eb8) */

void FUN_02209d3c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long local_40;
  
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_026ce3d8);
  FUN_02221fc0();
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_026ce3d8);
  FUN_02222fa0();
  uVar1 = 0;
  FUN_02206f14();
  lVar2 = 3;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF();
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::edgeLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::nearMistLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::farMistLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_021b0268(lVar2,uVar1);
  puVar4 = &DAT_028c74b8;
  local_40 = lVar2;
  FUN_021c77d4(&DAT_028c74b8,&DAT_0233bb10);
  puVar5 = puVar4;
  FUN_0220c494();
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_0220e55c,0,puVar4,puVar5);
  FUN_0220c508(&local_40);
  FUN_0220d2a0();
  _objc_opt_self(PTR__OBJC_CLASS___CATransaction_026ce3d8);
  FUN_02222140();
  return;
}

