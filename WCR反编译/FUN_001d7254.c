// FUN_001d7254 @ 001d7254

void FUN_001d7254(undefined8 param_1)

{
  uint uVar1;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_001cf94c();
  if (((uVar1 & 1) != 0) && (local_18 != 0)) {
    FUN_001da6a8(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

