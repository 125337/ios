// FUN_02217bb4 @ 02217bb4

void FUN_02217bb4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_unknownObjectRetain();
  _swift_beginAccess(unaff_x20 + 0x18,auStack_28,0x21,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  _swift_unknownObjectRelease(uVar1);
  _swift_endAccess(auStack_28);
  _swift_unknownObjectRelease(param_1);
  return;
}

