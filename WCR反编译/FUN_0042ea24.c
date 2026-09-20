// FUN_0042ea24 @ 0042ea24

void FUN_0042ea24(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_68;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  FUN_0042ec8c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  if (uVar2 != 0) {
    _objc_autoreleasePoolPush();
    uVar3 = uVar2;
    FUN_00405240();
    if ((uVar3 & 1) == 0) {
      _objc_autoreleasePoolPush();
      FUN_00405350(local_28);
      _objc_autoreleasePoolPop(uVar3);
      FUN_00404ff8();
    }
    else {
      _objc_autoreleasePoolPush();
      uVar1 = (uint)uVar3;
      FUN_004057b0(local_28);
      FUN_00405c08(local_28);
      FUN_00405f68(local_28);
      _objc_autoreleasePoolPop();
      FUN_00426440();
      local_68 = 0;
      if ((uVar1 & 1) == 0) {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = (uint)puVar5 ^ 1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if ((local_68 & 1) == 0) {
        FUN_0042ee3c(local_28);
      }
    }
    _objc_autoreleasePoolPop(uVar2);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

