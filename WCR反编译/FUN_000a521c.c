// FUN_000a521c @ 000a521c

void FUN_000a521c(long param_1)

{
  float fVar1;
  
  fVar1 = 1.0;
  if ((*(byte *)(param_1 + 0x30) & 1) == 0) {
    fVar1 = 0.0;
  }
  FUN_000a4358(*(byte *)(param_1 + 0x30) & 1,(double)fVar1,*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  return;
}

