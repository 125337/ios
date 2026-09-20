// FUN_021fbb1c @ 021fbb1c

void FUN_021fbb1c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject(unaff_x20,0x20,7);
  return;
}

