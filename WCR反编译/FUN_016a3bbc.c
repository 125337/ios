// FUN_016a3bbc @ 016a3bbc

void FUN_016a3bbc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong local_50;
  ulong local_48;
  undefined1 local_39;
  undefined4 local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  FUN_016a9384();
  if ((uVar2 & 1) != 0) {
    local_38 = 1;
    goto LAB_016a3f74;
  }
  if (local_18 != 0) {
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_repeatEnhanceDarkModeChanged__026b2ac8);
    uVar1 = (uint)uVar2;
    if ((uVar2 & 1) != 0) {
      FUN_016b9cb0();
      if ((uVar1 & 1) == 0) {
        local_38 = 1;
        goto LAB_016a3f74;
      }
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_39 = SUB81(puVar4,0);
      if (((ulong)puVar4 & 1) == 0) {
        local_38 = 1;
        goto LAB_016a3f74;
      }
      uVar2 = local_18;
      FUN_016adc54();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar2;
      if (uVar2 == 0) {
        local_38 = 1;
      }
      else {
        uVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_viewModel);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar2;
        if ((uVar2 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
           (uVar2 & 1) == 0)) {
          local_38 = 1;
        }
        else {
          FUN_016b9b90(local_18,0);
          puVar4 = PTR__OBJC_CLASS___NSThread_026ce0a8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
          puVar3 = PTR___dispatch_main_q_02578680;
          if (((ulong)puVar4 & 1) == 0) {
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_async();
            (*(code *)PTR__objc_release_02578630)(puVar3);
          }
          else {
            uVar2 = local_18;
            FUN_016bb04c();
            if ((uVar2 & 1) != 0) {
              local_38 = 1;
              goto LAB_016a3f54;
            }
            uVar2 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_updateNodeStatus_0269f010);
            if ((uVar2 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateNodeStatus_0269f010);
            }
          }
          local_38 = 0;
        }
LAB_016a3f54:
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
      goto LAB_016a3f74;
    }
  }
  local_38 = 1;
LAB_016a3f74:
  _objc_storeStrong(&local_28,0);
  return;
}

