// FUN_02218104 @ 02218104

void FUN_02218104(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x60);
  *(long *)(unaff_x22 + 0x40) = unaff_x22;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x68));
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x10,0x20,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  if (*(long *)(unaff_x22 + 0x50) == 0) {
    FUN_0221cdfc(unaff_x22 + 0x50);
    _swift_endAccess(unaff_x22 + 0x10);
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x50);
    _swift_retain();
    FUN_0221cdfc(unaff_x22 + 0x50);
    _swift_endAccess(unaff_x22 + 0x10);
    _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x28,0x20,0);
    if (*(long *)(lVar1 + 0x10) != 0) {
      puVar2 = *(undefined1 **)(unaff_x22 + 0x58);
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      (*(code *)PTR__objc_retain_02578638)(uVar3);
      _swift_endAccess(unaff_x22 + 0x28);
      _swift_release(lVar1);
      FUN_022175a8();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      *puVar2 = 0;
      goto LAB_02218284;
    }
    _swift_endAccess(unaff_x22 + 0x28);
    _swift_release(lVar1);
  }
  **(undefined1 **)(unaff_x22 + 0x58) = 1;
LAB_02218284:
                    /* WARNING: Could not recover jumptable at 0x022182a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))();
  return;
}

