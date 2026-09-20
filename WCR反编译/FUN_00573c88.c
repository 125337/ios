// FUN_00573c88 @ 00573c88

void FUN_00573c88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00573bb4();
  if (((ulong)puVar1 & 1) != 0) {
    FUN_00573cfc(local_18,"m_lockedImageView");
    FUN_00573cfc(local_18,"m_sharedImageView");
  }
  _objc_storeStrong(&local_18,0);
  return;
}

