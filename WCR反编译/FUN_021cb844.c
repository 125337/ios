// FUN_021cb844 @ 021cb844

void FUN_021cb844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_021cb874();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

