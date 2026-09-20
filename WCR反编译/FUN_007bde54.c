// FUN_007bde54 @ 007bde54

void FUN_007bde54(undefined8 param_1)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  FUN_007be04c();
  uVar1 = (uint)uVar2;
  FUN_007ac894();
  if ((uVar1 & 1) == 0) {
    FUN_007b5574(local_18);
    FUN_007bd624(local_18);
  }
  else {
    FUN_007b4dec(local_18);
    FUN_007bd2a8(local_18);
  }
  FUN_007be3cc();
  _objc_storeStrong(&local_18,0);
  return;
}

