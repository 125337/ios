// FUN_01d2cf68 @ 01d2cf68

void FUN_01d2cf68(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + WCRefineRootViewController::_isShowingRemoteUpdateAlert) = 0;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_openUpdateLink_026c4420);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

