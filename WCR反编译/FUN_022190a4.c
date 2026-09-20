// FUN_022190a4 @ 022190a4

void FUN_022190a4(long param_1)

{
  undefined *puVar1;
  long local_48;
  
  if (param_1 != 0) {
    local_48 = param_1;
    if (param_1 == 0) {
      local_48 = 0;
    }
    puVar1 = &DAT_0258ec20;
    _swift_allocObject(&DAT_0258ec20,0x18,7);
    *(long *)(puVar1 + 0x10) = local_48;
    FUN_02218e44(FUN_0221a834);
    _swift_release(puVar1);
  }
  return;
}

