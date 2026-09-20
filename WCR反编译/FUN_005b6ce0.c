// FUN_005b6ce0 @ 005b6ce0

void FUN_005b6ce0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_b0;
  ulong local_88;
  ulong local_68;
  undefined *local_60;
  undefined *local_58;
  byte local_49;
  ulong local_48;
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
  if (lVar1 == 3) {
    local_49 = 0;
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
    if ((uVar2 & 1) == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dataItem_026a13c8);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_88;
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (local_40 == 0) {
      local_38 = 1;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_28;
      local_58 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_direction_026a5bb0);
      local_b0 = local_58;
      if (lVar1 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsLeftSwipeAction_026a5b60);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_momentsRightSwipeAction_026a5b68);
      }
      local_60 = local_b0;
      uVar2 = local_18;
      FUN_005d372c();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar2;
      if (uVar2 != 0) {
        FUN_005d50ac(local_18,uVar2,local_40,local_60);
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_58,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_38 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

