// FUN_00170958 @ 00170958

void FUN_00170958(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_storeStrong(param_1 + 0x28,uVar1);
  _objc_storeStrong(param_2 + 0x28,0);
  return;
}

