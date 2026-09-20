// FUN_00752f7c @ 00752f7c

byte FUN_00752f7c(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_60;
  int local_54;
  ulong local_50;
  undefined4 local_48;
  undefined *local_38;
  ulong *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if ((((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_smallSignalSpecialMessageEnabled_026a7d20),
       ((ulong)puVar1 & 1) == 0)) ||
      (puVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_smallSignalGroupSpecialEnabled_026a7d40),
      ((ulong)puVar1 & 1) == 0)) || (local_20 == 0)) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_0074c5f8(local_20,&cf_m_nsFromUsr);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    FUN_00744988();
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_48 = 1;
    }
    else {
      uVar2 = local_20;
      FUN_00748ad4(local_20,&cf_m_uiMessageType);
      local_54 = (int)uVar2;
      if ((local_54 == 0x3f) || (local_54 + -10000 == 0)) {
        local_11 = 0;
        local_48 = 1;
      }
      else {
        uVar2 = local_20;
        FUN_0074c5f8(local_54 + -10000,local_20,&cf_m_nsRealChatUsr);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
        if ((uVar2 == 0) ||
           ((uVar2 = local_60, FUN_00744988(), (uVar2 & 1) != 0 ||
            (uVar2 = local_60, FUN_0074b910(), (uVar2 & 1) != 0)))) {
          local_11 = 0;
        }
        else {
          FUN_00753f8c();
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_60;
          if ((uVar3 & 1) == 0) {
            local_11 = 0;
          }
          else {
            if (local_28 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_28 = uVar2;
            }
            uVar2 = local_50;
            if (local_30 != (ulong *)0x0) {
              _objc_retainAutorelease();
              *local_30 = uVar2;
            }
            local_11 = 1;
          }
        }
        local_48 = 1;
        _objc_storeStrong(&local_60,0);
      }
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

