// FUN_000541c0 @ 000541c0

void FUN_000541c0(long param_1)

{
  if ((*(ulong *)(param_1 + 0x30) & 1) == 0) {
    if (((uint)*(undefined8 *)(param_1 + 0x30) >> 1 & 1) == 0) {
      if (((uint)*(undefined8 *)(param_1 + 0x30) >> 2 & 1) != 0) {
        FUN_00054668(*(undefined8 *)(param_1 + 0x20),
                     *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
      }
    }
    else {
      FUN_00054400(*(undefined8 *)(param_1 + 0x20),
                   *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
    }
  }
  else {
    FUN_00054270(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  }
  return;
}

