// FUN_021cb9ec @ 021cb9ec

void FUN_021cb9ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_021ca57c();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}

