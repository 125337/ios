// FUN_01e98974 @ 01e98974

void FUN_01e98974(long param_1)

{
  long lVar1;
  long local_58;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  if (local_20 == 0) {
    local_58 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_58 = local_20;
  }
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_completeWebCallback_ok_payload__026c73d0,*(undefined8 *)(param_1 + 0x20),1,
             local_58);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

