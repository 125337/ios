// FUN_00750970 @ 00750970

byte FUN_00750970(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if (((((ulong)puVar1 & 1) == 0) ||
      (puVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_smallSignalSpecialMessageEnabled_026a7d20), ((ulong)puVar1 & 1) == 0
      )) || (puVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_smallSignalStopPopupInActiveChat_026a7d30),
            ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) || (uVar2 = local_40, FUN_00744988(), (uVar2 & 1) != 0)) {
      local_11 = 0;
      local_38 = 1;
    }
    else {
      FUN_0075165c();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      FUN_00744988();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_40);
        if (((uVar2 & 1) == 0) || (uVar2 = local_40, FUN_00751734(), (uVar2 & 1) == 0)) {
          local_11 = 0;
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 0;
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

