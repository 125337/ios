// FUN_00180e40 @ 00180e40

bool FUN_00180e40(int *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((*param_1 == *param_2) && (bVar1 = false, *(long *)(param_1 + 2) == *(long *)(param_2 + 2)))
      && (bVar1 = false, *(long *)(param_1 + 4) == *(long *)(param_2 + 4))) &&
     (((bVar1 = false, *(long *)(param_1 + 6) == *(long *)(param_2 + 6) &&
       (bVar1 = false, *(long *)(param_1 + 8) == *(long *)(param_2 + 8))) &&
      ((bVar1 = false, (*(byte *)(param_1 + 10) & 1) == (*(byte *)(param_2 + 10) & 1) &&
       (bVar1 = false,
       (*(byte *)((long)param_1 + 0x29) & 1) == (*(byte *)((long)param_2 + 0x29) & 1))))))) {
    bVar1 = (*(byte *)((long)param_1 + 0x2a) & 1) == (*(byte *)((long)param_2 + 0x2a) & 1);
  }
  return bVar1;
}

