// FUN_007b4540 @ 007b4540

void FUN_007b4540(ulong param_1)

{
  undefined *puVar1;
  undefined *local_18;
  
  _WCRefineTelegramGroupingReloadGateCache();
  FUN_007b0308();
  if ((param_1 & 1) != 0) {
    puVar1 = &DAT_028ccbe8;
    _objc_loadWeakRetained();
    local_18 = puVar1;
    FUN_007bde54(puVar1);
    _objc_storeStrong(&local_18,0);
  }
  return;
}

