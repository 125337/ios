// FUN_007485ec @ 007485ec

byte FUN_007485ec(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_48;
  int local_3c;
  undefined4 local_38;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if (((((ulong)puVar2 & 1) == 0) ||
      (puVar2 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_smallSignalNotify31Enabled_026a7cc0),
      ((ulong)puVar2 & 1) == 0)) || (local_20 == 0)) {
    local_11 = 0;
    local_38 = 1;
  }
  else {
    uVar3 = local_20;
    FUN_00748ad4(local_20,&cf_m_uiMessageType);
    local_3c = (int)uVar3;
    if (local_3c == 0x3f) {
      uVar3 = local_20;
      FUN_00748910(local_20,0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      if ((uVar3 == 0) || (uVar3 = local_48, FUN_0074b910(), (uVar3 & 1) != 0)) {
        local_11 = 0;
      }
      else {
        uVar3 = local_48;
        FUN_0074ba64();
        if ((uVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar3 = local_20;
          FUN_0074bd08();
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_smallSignalRejectReplyNotifyEnab_026a7cc8);
          uVar1 = (uint)puVar2;
          if (((((ulong)puVar2 & 1) == 0) || (FUN_00966a44(), (uVar1 & 1) == 0)) ||
             ((int)uVar3 != 1)) {
            local_11 = 1;
          }
          else {
            local_11 = 0;
          }
        }
      }
      local_38 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 0;
      local_38 = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

