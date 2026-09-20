// FUN_0067e750 @ 0067e750

byte FUN_0067e750(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong local_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  ulong local_68;
  long local_60;
  undefined4 local_54;
  undefined1 local_4e;
  byte local_4d;
  byte local_39;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_39 = (byte)puVar2;
  uVar3 = local_30;
  FUN_0067e628();
  local_4d = (byte)uVar3;
  uVar3 = local_30;
  FUN_0067ee70();
  local_4e = (undefined1)uVar3;
  if ((local_39 & 1) == 0) {
    local_21 = 0;
    local_54 = 1;
  }
  else if (((local_4d & 1) == 0) && ((uVar3 & 1) == 0)) {
    local_21 = 0;
    local_54 = 1;
  }
  else {
    lVar4 = local_38;
    FUN_0067ef84();
    _objc_retainAutoreleasedReturnValue();
    local_60 = lVar4;
    if ((local_4d & 1) == 0) {
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        local_21 = 0;
        local_54 = 1;
      }
      else {
        lVar4 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        if (lVar4 == 0) {
          local_21 = 0;
          local_54 = 1;
        }
        else {
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar2;
          FUN_0067d82c();
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar3 = local_30;
          FUN_0067f6c4();
          _objc_retainAutoreleasedReturnValue();
          local_80 = uVar3;
          (*(code *)PTR__objc_retain_02578638)();
          local_88 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
          if (uVar3 == 0) {
            FUN_0067fa24();
            _objc_retainAutoreleasedReturnValue();
            uVar5 = local_88;
            local_88 = uVar3;
            (*(code *)PTR__objc_release_02578630)(uVar5);
          }
          puVar1 = local_78;
          FUN_0067fef0(local_78,local_88,local_60,local_38);
          local_21 = ((ulong)puVar1 & 1) != 0;
          local_54 = 1;
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
          _objc_storeStrong(&local_78,0);
        }
      }
    }
    else {
      uVar3 = local_30;
      FUN_0067d82c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      FUN_0067f18c();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_68;
      local_70 = uVar3;
      FUN_0067e48c();
      if ((uVar5 & 1) != 0) {
        FUN_0067f32c(local_68);
        puVar1 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar1);
      }
      local_21 = 0;
      local_54 = 1;
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

