// FUN_000ffa84 @ 000ffa84

byte FUN_000ffa84(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_94;
  ulong local_70;
  ulong local_60;
  ulong local_50;
  ulong local_20;
  byte local_11;
  
  puVar4 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar4,param_1);
  if ((local_20 == 0) || (_WCRefineChatPositionFeatureAllowed(), ((ulong)puVar4 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    uVar5 = local_20;
    FUN_000fa68c();
    if ((uVar5 & 1) == 0) {
      uVar5 = local_20;
      FUN_000f929c();
      if ((uVar5 & 1) == 0) {
        FUN_000f915c();
        if ((((uVar5 & 1) == 0) || (uVar6 = local_20, FUN_000fa5b4(), (uVar6 & 1) == 0)) ||
           (uVar6 = local_20, FUN_000f91dc(), (uVar6 & 1) == 0)) {
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          local_94 = 0;
          if (((uVar5 & 0x100) != 0) && (local_94 = 0, (uVar5 & 0x10000) != 0)) {
            uVar5 = local_20;
            FUN_000ffea4();
            local_94 = 0;
            if ((uVar5 & 1) != 0) {
              local_50 = local_20;
              FUN_00100134();
              _objc_retainAutoreleasedReturnValue();
              bVar3 = true;
              local_60 = local_50;
              FUN_000fffb4();
              _objc_retainAutoreleasedReturnValue();
              bVar2 = true;
              local_94 = 0;
              if (local_60 != 0) {
                local_70 = local_20;
                _objc_getAssociatedObject(local_20,DAT_026df8b8);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = true;
                uVar5 = local_70;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_94 = (uint)uVar5 ^ 1;
              }
            }
          }
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_70);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_60);
          }
          if (bVar3) {
            (*(code *)PTR__objc_release_02578630)(local_50);
          }
          if ((local_94 & 1) == 0) {
            local_11 = 0;
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

