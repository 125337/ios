// FUN_021c7170 @ 021c7170

void FUN_021c7170(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_deallocObject(unaff_x20,0x30,7);
  return;
}

