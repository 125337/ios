// FUN_006cd390 @ 006cd390

int FUN_006cd390(undefined8 param_1,undefined8 param_2)

{
  u_int32_t uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int local_54;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_redEnvelopMinDelaySeconds_026a6ae0);
  local_48 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopMaxDelaySeconds_026a6ae8);
  if ((local_30 == (undefined *)0x0) && (local_48 == (undefined *)0x0)) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopDelaySeconds_026a6a08);
    local_48 = (undefined *)((long)local_48 * 1000);
    local_30 = local_48;
  }
  if ((long)local_48 < (long)local_30) {
    local_48 = local_30;
  }
  puVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_redEnvelopSerialReceive_026a6a28);
  local_54 = (int)local_30;
  if (((ulong)puVar2 & 1) == 0) {
    if (local_30 != local_48) {
      uVar1 = _arc4random_uniform(((int)local_48 - local_54) + 1);
      local_54 = local_54 + uVar1;
    }
  }
  else {
    puVar2 = PTR_WCRefineRedEnvelopTaskManager_026ce838;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRedEnvelopTaskManager_026ce838,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      local_54 = 5000;
    }
    else if (local_30 != local_48) {
      uVar1 = _arc4random_uniform(((int)local_48 - local_54) + 1);
      local_54 = local_54 + uVar1;
    }
  }
  _objc_storeStrong(&local_28,0);
  return local_54;
}

