// FUN_00295528 @ 00295528

void FUN_00295528(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_20 == 0) {
    FUN_002805c8(0x402e000000000000,*(undefined8 *)(param_1 + 0x20),&cf_jpg,
                 &PTR___NSConcreteGlobalBlock_0257b6d8);
  }
  else {
    FUN_00294e24(local_20,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

