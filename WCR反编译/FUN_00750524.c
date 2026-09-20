// FUN_00750524 @ 00750524

byte FUN_00750524(undefined8 param_1,ulong *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  int local_44;
  undefined4 local_40;
  undefined *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if (((((ulong)puVar1 & 1) == 0) ||
      (puVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_smallSignalSpecialMessageEnabled_026a7d20), ((ulong)puVar1 & 1) == 0
      )) || (local_20 == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_00748ad4(local_20,&cf_m_uiMessageType);
    local_44 = (int)uVar2;
    if (local_44 + -0x3f == 0) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      uVar2 = local_20;
      FUN_0074c5f8(local_44 + -0x3f,local_20,&cf_m_nsFromUsr);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar2;
      FUN_00744988();
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_00748910(local_20,0);
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if (((uVar2 == 0) || (uVar2 = local_58, FUN_00744988(), (uVar2 & 1) != 0)) ||
           (uVar2 = local_58, FUN_0074b910(), (uVar2 & 1) != 0)) {
          local_11 = 0;
          local_40 = 1;
        }
        else {
          puVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_smallSignalSpecialUsers_026a7d28);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar1;
          FUN_0074c198();
          _objc_retainAutoreleasedReturnValue();
          local_60 = puVar3;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          puVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsObject__0269cbb8,local_58);
          uVar2 = local_58;
          if (((ulong)puVar1 & 1) == 0) {
            local_11 = 0;
          }
          else {
            if (local_28 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_28 = uVar2;
            }
            local_11 = 1;
          }
          local_40 = 1;
          _objc_storeStrong(&local_60,0);
        }
        _objc_storeStrong(&local_58,0);
      }
      else {
        local_11 = 0;
        local_40 = 1;
      }
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

