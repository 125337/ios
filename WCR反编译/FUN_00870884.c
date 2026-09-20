// FUN_00870884 @ 00870884

void FUN_00870884(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  
  if (((DAT_028cd86e & 1) == 0) || (uVar1 = param_1, FUN_0088db80(), (uVar1 & 1) == 0)) {
    (*DAT_028cd808)(param_1,param_2);
  }
  return;
}

