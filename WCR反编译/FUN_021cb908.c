// FUN_021cb908 @ 021cb908

void FUN_021cb908(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_021ca060();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

