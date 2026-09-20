// FUN_02217af4 @ 02217af4

void FUN_02217af4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  (*(code *)PTR__objc_retain_02578638)();
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _swift_endAccess(auStack_28);
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

