// FUN_01bacc84 @ 01bacc84

void FUN_01bacc84(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_revalidateLocalMessagePresenceAn_026c03b0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

