// FUN_01584978 @ 01584978

byte FUN_01584978(undefined8 param_1)

{
  byte bVar1;
  ulong uVar2;
  undefined *puVar3;
  byte local_3c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar2 = local_20, FUN_01564574(), puVar3 = PTR_WCRefinePrivateFriendManager_026ce160,
     (uVar2 & 1) != 0)) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_shouldConcealUsername__0269fef8);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if (((ulong)puVar3 & 1) == 0) {
      uVar2 = local_20;
      FUN_01565620();
      bVar1 = (byte)uVar2;
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_0157804c();
        local_3c = 0;
        if ((uVar2 & 1) != 0) {
          uVar2 = local_20;
          FUN_01551a44();
          local_3c = (byte)uVar2 ^ 1;
        }
        local_11 = local_3c & 1;
      }
      else {
        FUN_0156c6b8();
        local_11 = bVar1 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

