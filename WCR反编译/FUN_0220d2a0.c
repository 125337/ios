// FUN_0220d2a0 @ 0220d2a0

/* WARNING: Removing unreachable block (ram,0x0220d3c8) */

void FUN_0220d2a0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  long local_40;
  
  uVar1 = 0;
  FUN_02206f14();
  lVar2 = 3;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF();
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeSoftLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeAccentLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::marqueeLeadLayer);
  (*(code *)PTR__objc_retain_02578638)();
  *(undefined8 *)(lVar2 + 0x30) = uVar3;
  FUN_021b0268(lVar2,uVar1);
  puVar4 = &DAT_028c74b8;
  local_40 = lVar2;
  FUN_021c77d4(&DAT_028c74b8,&DAT_0233bb10);
  puVar5 = puVar4;
  FUN_0220c494();
  __sSTsE7forEachyyy7ElementQzKXEKF(FUN_0220d3cc,0,puVar4,puVar5);
  FUN_0220c508(&local_40);
  return;
}

