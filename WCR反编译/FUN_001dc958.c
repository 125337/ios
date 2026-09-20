// FUN_001dc958 @ 001dc958

void FUN_001dc958(undefined8 param_1)

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
    FUN_001dcc28(local_18);
    FUN_001d9428(local_18);
    FUN_001d031c(local_18);
    FUN_001d6d38(local_18);
    FUN_001d7254(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

