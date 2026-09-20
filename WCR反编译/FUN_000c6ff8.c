// FUN_000c6ff8 @ 000c6ff8

byte FUN_000c6ff8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint local_4c;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  undefined *local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_39 = 0;
  local_4c = 1;
  if (local_20 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_4c = (uint)puVar1 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_4c & 1) == 0) {
    uVar2 = local_20;
    FUN_000c7388(local_20,&cf_isRecordDetail);
    if (((uVar2 & 1) == 0) &&
       (uVar2 = local_20, FUN_000c7388(local_20,&cf_isShareConfirm), (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      FUN_000c74bc();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if ((uVar2 == 0) || (FUN_000c7730(), (uVar2 & 1) == 0)) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_40 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 0;
      local_40 = 1;
    }
  }
  else {
    local_11 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

