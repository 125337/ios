// FUN_0033ce68 @ 0033ce68

uint FUN_0033ce68(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint local_24;
  
  uVar1 = param_1;
  FUN_0033f024();
  if (((uVar1 & 1) == 0) && (uVar1 = param_1, FUN_003405b8(), (uVar1 & 1) == 0)) {
    (*DAT_028c9fb8)(param_1,param_2);
    local_24 = (uint)param_1;
  }
  else {
    local_24 = 0;
  }
  return local_24 & 1;
}

