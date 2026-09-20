// FUN_015f7840 @ 015f7840

void FUN_015f7840(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  uint local_68;
  ulong local_60;
  ulong local_50;
  ulong local_40;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar4 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar4;
  if (uVar4 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_setPendingBadgeRecompute__026b1648,0);
    FUN_015f7b6c();
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_refreshScopedBadgeCacheWithConfi_026b1638,puVar5);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superFloatLinked_026b1650);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_syncSuperFloatWithConfig__026b1658,local_38);
    }
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_68 = 0;
    if (uVar4 != 0) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      uVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_68 = 0;
      if ((uVar6 & 1) == 0) {
        local_50 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        local_60 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        uVar6 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_68 = (uint)uVar6 ^ 1;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((local_68 & 1) != 0) {
      uVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

