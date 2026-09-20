// FUN_0033cc48 @ 0033cc48

uint FUN_0033cc48(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 local_24;
  
  uVar1 = param_1;
  FUN_00341b9c();
  if ((uVar1 & 1) == 0) {
    (*DAT_028c9f90)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

