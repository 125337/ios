// FUN_01808cec @ 01808cec

void FUN_01808cec(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = local_20;
  FUN_01804e40();
  FUN_01806374();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) != 0) {
    **(undefined8 **)(param_1 + 0x28) = param_3;
    *param_4 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return;
}

