// FUN_00363cec @ 00363cec

byte FUN_00363cec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar1 = local_28;
  FUN_00395724();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_00363eb4;
  }
  uVar1 = local_20;
  FUN_003b0d1c();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
    local_2c = 1;
    goto LAB_00363eb4;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homeGroupingAtMeGroupExcludeFold_026a2e48);
  if (((ulong)puVar2 & 1) == 0) {
LAB_00363df0:
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeGroupingAtMeGroupIncludeAtMe_026a2e50);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = local_20;
      FUN_003b0f1c();
      if (uVar1 != 0) {
        local_11 = 1;
        goto LAB_00363ea4;
      }
    }
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_homeGroupingAtMeGroupIncludeAtAl_026a2e58);
    if (((ulong)puVar2 & 1) != 0) {
      uVar1 = local_20;
      FUN_003b106c();
      if (uVar1 != 0) {
        local_11 = 1;
        goto LAB_00363ea4;
      }
    }
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    FUN_003b0e18();
    if ((uVar1 & 1) == 0) goto LAB_00363df0;
    local_11 = 0;
  }
LAB_00363ea4:
  local_2c = 1;
  _objc_storeStrong(&local_38,0);
LAB_00363eb4:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

