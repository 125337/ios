// FUN_005c8804 @ 005c8804

void FUN_005c8804(long param_1,byte param_2)

{
  FUN_005a74a8(*(undefined8 *)(param_1 + 0x20),*(long *)(param_1 + 0x28) + 1,
               *(long *)(param_1 + 0x30) + (long)(int)(uint)((param_2 & 1) != 0),
               *(long *)(param_1 + 0x38) + (long)(int)(uint)((param_2 & 1) == 0));
  return;
}

