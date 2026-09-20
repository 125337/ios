// FUN_0169defc @ 0169defc

void FUN_0169defc(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint local_6c;
  ulong local_40;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    uVar2 = local_18;
    FUN_016a9384(0);
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_6c = 1;
      if (((ulong)puVar4 & 1) != 0) {
        uVar2 = local_18;
        FUN_016ada98();
        local_6c = (uint)uVar2 ^ 1;
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if ((local_6c & 1) == 0) {
        uVar2 = local_18;
        FUN_016adc54();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
        local_40 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_cancelTrackingWithEvent__026a77f8,0);
        }
        FUN_016adcd8(local_18);
        FUN_016aa68c();
        FUN_016ade90(local_18);
        _objc_storeStrong(&local_40,0);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    else {
      local_38 = 1;
    }
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

