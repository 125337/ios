// FUN_01d14ebc @ 01d14ebc

void FUN_01d14ebc(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long local_48;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  if (local_20 == 0) {
    local_48 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_48 = local_20;
  }
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setQuickChatRemovedUsernames__026b1610,local_48);
  lVar2 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

