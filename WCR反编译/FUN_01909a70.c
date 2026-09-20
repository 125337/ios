// FUN_01909a70 @ 01909a70

void FUN_01909a70(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  }
  return;
}

