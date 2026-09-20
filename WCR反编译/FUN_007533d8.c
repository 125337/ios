// FUN_007533d8 @ 007533d8

byte FUN_007533d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58;
  undefined8 local_50;
  ulong local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_smallSignalEnhanceEnabled_026a7ca0);
  if ((((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_smallSignalSpecialMessageEnabled_026a7d20),
       ((ulong)puVar1 & 1) == 0)) ||
      (puVar1 = local_30,
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_smallSignalGroupSpecialEnabled_026a7d40),
      ((ulong)puVar1 & 1) == 0)) ||
     (puVar1 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_smallSignalStopPopupInActiveChat_026a7d30)
     , ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_48 = uVar2;
    FUN_00743f78();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_50 = uVar3;
    FUN_00744988();
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_40 = 1;
    }
    else {
      FUN_0075165c();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      FUN_007544ac();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      local_60 = uVar2;
      FUN_00744988();
      if ((((uVar4 & 1) == 0) ||
          (uVar2 = local_58,
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_48),
          (uVar2 & 1) == 0)) ||
         ((uVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
          uVar2 == 0 ||
          ((uVar2 = local_60,
           (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isEqualToString__0269ccc8,local_50),
           (uVar2 & 1) == 0 || (uVar2 = local_48, FUN_00751734(), (uVar2 & 1) == 0)))))) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_40 = 1;
      _objc_storeStrong(&local_60);
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

