// FUN_01d52ce8 @ 01d52ce8

bool FUN_01d52ce8(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool local_1;
  
  bVar1 = *(byte *)(param_1 + param_2 * 4);
  bVar2 = *(byte *)(param_1 + param_2 * 4 + 1);
  bVar3 = *(byte *)(param_1 + param_2 * 4 + 2);
  if (*(byte *)(param_1 + param_2 * 4 + 3) < 0x6e) {
    local_1 = false;
  }
  else {
    bVar4 = bVar2;
    if (bVar2 < bVar3) {
      bVar4 = bVar3;
    }
    bVar5 = bVar1;
    if (bVar1 < bVar4) {
      bVar5 = bVar4;
    }
    local_1 = true;
    if (0x5f < bVar5) {
      local_1 = DAT_02339df8 * (double)bVar2 + (double)bVar1 * DAT_02339df0 +
                (double)bVar3 * DAT_02339de8 < 82.0;
    }
  }
  return local_1;
}

