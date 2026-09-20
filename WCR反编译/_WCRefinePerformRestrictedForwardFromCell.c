// _WCRefinePerformRestrictedForwardFromCell @ 014b170c

void _WCRefinePerformRestrictedForwardFromCell(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  char *pcVar4;
  char *local_a8;
  bool local_69;
  char *local_68;
  char *local_60;
  char *local_58;
  ulong local_48 [4];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_1c = 1;
  }
  else {
    uVar3 = local_18;
    FUN_014b0a60();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar3;
    if ((uVar3 == 0) || (uVar3 = local_18, FUN_014b0d8c(), (uVar3 & 1) == 0)) {
      local_1c = 1;
    }
    else {
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_onForward__026a4350);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_18;
        FUN_014b1b28();
        _objc_retainAutoreleasedReturnValue();
        local_48[0] = uVar3;
        if (uVar3 == 0) {
          local_a8 = "ForwardMessageLogicController";
          _objc_getClass();
          local_69 = local_a8 == (char *)0x0;
          local_58 = local_a8;
          if (local_69) {
            local_a8 = (char *)0x0;
          }
          else {
            _objc_alloc_init();
            local_68 = local_a8;
          }
          local_69 = !local_69;
          (*(code *)PTR__objc_retain_02578638)();
          local_60 = local_a8;
          if (local_69) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          puVar1 = PTR_s_forwardMessage__026a0d68;
          if ((local_60 == (char *)0x0) ||
             (pcVar4 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_forwardMessage__026a0d68),
             ((ulong)pcVar4 & 1) == 0)) {
            local_1c = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBMutliContact__026a39c0,1);
            _objc_setAssociatedObject(local_18,DAT_028c5d58,local_60,1);
            (*(code *)PTR__objc_msgSend_02578628)(local_60,puVar1,local_28);
            local_1c = 0;
          }
          _objc_storeStrong(&local_60,0);
        }
        else {
          FUN_014b1cb0(local_28,uVar3);
          local_1c = 1;
        }
        _objc_storeStrong(local_48,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onForward__026a4350,local_18);
        local_1c = 1;
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

