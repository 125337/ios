// FUN_003e31e8 @ 003e31e8

void FUN_003e31e8(long param_1)

{
  if ((param_1 != 0) &&
     (_strlcpy((char *)(param_1 + 0xf3),"WeChat",0x11), (*(uint *)(param_1 + 0x20) >> 0xb & 1) != 0)
     ) {
    FUN_003e3274(0x4014000000000000);
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) & 0xfffff7ff;
  }
  return;
}

