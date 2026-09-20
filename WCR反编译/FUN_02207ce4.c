// FUN_02207ce4 @ 02207ce4

/* WARNING: Removing unreachable block (ram,0x02207dbc) */

void FUN_02207ce4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  uint local_94;
  undefined8 local_88;
  undefined8 local_68;
  undefined1 auStack_60 [24];
  undefined1 local_48 [8];
  long local_40;
  
  _swift_getObjectType();
  (*(code *)PTR__objc_retain_02578638)();
  _objc_msgSendSuper2(&stack0xffffffffffffffc8,PTR_s_didMoveToWindow_0269ddb8);
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  (*(code *)PTR__objc_retain_02578638)(unaff_x20);
  lVar2 = unaff_x20;
  FUN_02223b00(unaff_x20,local_88);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(unaff_x20);
  local_40 = 0;
  if (lVar2 == 0) {
    FUN_0220c880(local_48);
    local_94 = 1;
  }
  else {
    FUN_0220c8b0(local_48,&local_68);
    lVar2 = local_40;
    if (local_40 == 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
      FUN_0220c83c(local_48);
      local_94 = 0;
    }
    else {
      FUN_0220c8ec(0);
      uVar3 = local_68;
      __sSo8NSObjectC10ObjectiveCE2eeoiySbAB_ABtFZ(local_68,lVar2);
      local_94 = (uint)uVar3;
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_release_02578630)(local_68);
      FUN_0220c880(local_48);
    }
  }
  if ((local_94 & 1) != 0) {
    FUN_02207ed4();
    puVar1 = (undefined8 *)(unaff_x20 + WCRefineFloatingGlowView::lastSignature);
    _swift_beginAccess(puVar1,auStack_60,0x21,0);
    uVar3 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    _swift_bridgeObjectRelease(uVar3);
    _swift_endAccess(auStack_60);
  }
  return;
}

