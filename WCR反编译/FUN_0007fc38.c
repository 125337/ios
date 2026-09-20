// FUN_0007fc38 @ 0007fc38

void FUN_0007fc38(long param_1)

{
  ulong uVar1;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if ((uVar1 != 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isViewLoaded_0269cde0), (uVar1 & 1) != 0)) {
    FUN_0007fcec(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

