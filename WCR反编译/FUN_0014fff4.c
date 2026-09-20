// FUN_0014fff4 @ 0014fff4

long FUN_0014fff4(ulong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 local_18;
  
  FUN_0014f650();
  iVar2 = (int)param_1;
  if ((param_1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    FUN_00150c58();
    iVar3 = iVar2;
    FUN_00150d34();
    iVar3 = iVar3 * 2;
    if (iVar2 == 0) {
      local_18 = 1;
    }
    else {
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = (iVar2 + iVar3 + -1) / iVar3;
      }
      local_18 = (long)iVar1;
    }
  }
  return local_18;
}

