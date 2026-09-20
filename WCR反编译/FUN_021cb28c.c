// FUN_021cb28c @ 021cb28c

void FUN_021cb28c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_021ca16c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

