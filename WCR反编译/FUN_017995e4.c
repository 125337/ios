// FUN_017995e4 @ 017995e4

byte FUN_017995e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      uVar4 = local_20;
      FUN_017959f8(0);
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
      if ((uVar4 == 0) || (uVar4 = local_38, FUN_01796c38(), (uVar4 & 1) != 0)) {
        local_11 = 0;
        local_30 = 1;
      }
      else {
        uVar4 = local_20;
        FUN_01796978();
        _objc_retainAutoreleasedReturnValue();
        local_40 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_length_0269cca0);
        if ((uVar4 == 0) ||
           (uVar4 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_40,PTR_s_isEqualToString__0269ccc8,
                      *(undefined8 *)PTR__UNNotificationDefaultActionIdentifier_025782d0),
           (uVar4 & 1) != 0)) {
          local_11 = 1;
        }
        else {
          local_11 = 0;
        }
        local_30 = 1;
        _objc_storeStrong(&local_40,0);
      }
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_11 = 0;
      local_30 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

