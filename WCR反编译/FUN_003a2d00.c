// FUN_003a2d00 @ 003a2d00

void FUN_003a2d00(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  _WCRTGForceBadgeRefresh();
  (*(code *)PTR__objc_release_02578630)(param_1);
  return;
}

