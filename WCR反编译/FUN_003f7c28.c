// FUN_003f7c28 @ 003f7c28

void FUN_003f7c28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_40;
  undefined4 local_38;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (uVar2 == 3) {
    FUN_003f4598(0);
    if ((uVar2 & 1) == 0) {
      local_38 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_WCRefineInputBoxGestureSupport_026ce678;
      if (((ulong)puVar4 & 1) == 0) {
        local_38 = 1;
      }
      else {
        puVar4 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_normalizedAction__026a3438);
        _objc_retainAutoreleasedReturnValue();
        local_40 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_isEqualToString__0269ccc8,_WCRInputBoxActionNone);
        uVar1 = (uint)puVar3;
        if (((ulong)puVar3 & 1) == 0) {
          FUN_003fab0c();
          if ((uVar1 & 1) == 0) {
            local_38 = 1;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineInputBoxGestureSupport_026ce678,
                       PTR_s_performAction_growTextView__026a34d0,local_40,local_18);
            local_38 = 0;
          }
        }
        else {
          local_38 = 1;
        }
        _objc_storeStrong(&local_40,0);
      }
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

