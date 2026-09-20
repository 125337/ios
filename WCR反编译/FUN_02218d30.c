// FUN_02218d30 @ 02218d30

void FUN_02218d30(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_40 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_40,0x20,0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    _swift_endAccess(auStack_40);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
    (*(code *)PTR__objc_retain_02578638)(uVar1);
    _swift_endAccess(auStack_40);
    FUN_0221764c();
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  return;
}

