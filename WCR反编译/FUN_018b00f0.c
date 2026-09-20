// FUN_018b00f0 @ 018b00f0

void FUN_018b00f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_88;
  ulong local_78;
  ulong local_58;
  ulong local_50;
  bool local_41;
  ulong local_40;
  ulong local_38;
  long local_30;
  ulong local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_20;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf__);
  local_41 = false;
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_78 = local_20;
  }
  else {
    local_78 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_78;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_78;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,&cf__);
  bVar1 = (uVar2 & 1) == 0;
  if (bVar1) {
    local_88 = local_28;
  }
  else {
    local_88 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_substringFromIndex__0269d120,1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_88;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_88;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

