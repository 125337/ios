// FUN_0017f3c8 @ 0017f3c8

void FUN_0017f3c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
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
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_0017f268();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar3;
    if (uVar3 == 0) {
      local_28 = 1;
    }
    else {
      FUN_00179ec8();
      if ((uVar3 & 1) == 0) {
        uVar3 = local_18;
        FUN_0017f750();
        _objc_retainAutoreleasedReturnValue();
        local_38 = uVar3;
        if (uVar3 == 0) {
          local_28 = 1;
        }
        else {
          FUN_0017f8b0();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = uVar3;
          FUN_0017b8cc();
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
          uVar3 = local_38;
          if (uVar4 == 0) {
            FUN_0017ba68();
            _objc_retainAutoreleasedReturnValue();
            FUN_0017fab0(uVar3);
            (*(code *)PTR__objc_release_02578630)(uVar4);
            uVar3 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_respondsToSelector__026ca818,
                       PTR_s_handleTextViewDidChangedRightBar_0269fa40);
            if ((uVar3 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_18,PTR_s_handleTextViewDidChangedRightBar_0269fa40);
            }
            local_28 = 0;
          }
          else {
            local_28 = 1;
          }
          _objc_storeStrong(&local_40,0);
        }
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_28 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

