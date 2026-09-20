// FUN_007aa658 @ 007aa658

void FUN_007aa658(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint local_44;
  long local_40;
  undefined4 local_38;
  byte local_31;
  undefined *local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  local_44 = 1;
  if (local_18 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_31 = 1;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_44 = (uint)puVar1 ^ 1;
  }
  if ((local_31 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  if ((local_44 & 1) == 0) {
    lVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundView_026a0320);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    if (lVar2 == 0) {
      _objc_storeStrong(&local_40,local_18);
    }
    FUN_007a96c4(0x404e000000000000,local_40);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

