// FUN_00222fe4 @ 00222fe4

void FUN_00222fe4(undefined8 param_1)

{
  uint uVar1;
  long local_18;
  long *plVar2;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  uVar1 = (uint)plVar2;
  FUN_001cf8b0();
  if (((uVar1 & 1) != 0) && (local_18 != 0)) {
    FUN_001d0988(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

