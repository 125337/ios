// FUN_00181cdc @ 00181cdc

byte FUN_00181cdc(long param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) && (bVar1 = 1, (*(byte *)(param_1 + 0x29) & 1) == 0)) {
    bVar1 = *(byte *)(param_1 + 0x2a);
  }
  return bVar1 & 1;
}

