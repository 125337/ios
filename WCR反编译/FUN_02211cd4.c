// FUN_02211cd4 @ 02211cd4

void FUN_02211cd4(void)

{
  long lVar1;
  
  lVar1 = 5;
  __ss27_allocateUninitializedArrayySayxG_BptBwlF();
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0x3fd0000000000000;
  *(undefined8 *)(lVar1 + 0x30) = 0x3fe0000000000000;
  *(undefined8 *)(lVar1 + 0x38) = 0x3fe8000000000000;
  *(undefined8 *)(lVar1 + 0x40) = 0x3ff0000000000000;
  FUN_021b0268();
  DAT_028e6478 = lVar1;
  return;
}

