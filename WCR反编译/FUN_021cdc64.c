// FUN_021cdc64 @ 021cdc64

void FUN_021cdc64(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  (*(code *)PTR__objc_release_02578630)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject(unaff_x20,0x28,7);
  return;
}

