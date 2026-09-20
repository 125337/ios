// FUN_0007017c @ 0007017c

bool FUN_0007017c(byte *param_1)

{
  bool bVar1;
  
  bVar1 = true;
  if (((*param_1 & 1) == 0) && (bVar1 = false, (param_1[0x10] & 1) != 0)) {
    bVar1 = 0.0 < *(double *)(param_1 + 0x18);
  }
  return bVar1;
}

