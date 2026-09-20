// FUN_0078ee98 @ 0078ee98

void FUN_0078ee98(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  FUN_0078ef84(uVar1,*(undefined8 *)(param_1 + 0x28));
  if ((uVar1 & 1) == 0) {
    FUN_0078abc0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
                 *(byte *)(param_1 + 0x38) & 1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

