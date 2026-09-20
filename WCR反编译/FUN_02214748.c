// FUN_02214748 @ 02214748

void FUN_02214748(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    (**(code **)(lVar1 + 0x20))(lVar1,0);
  }
  else {
    (**(code **)(lVar1 + 0x20))(lVar1,1);
  }
  _free(lVar1);
  return;
}

