// FUN_00919e28 @ 00919e28

void FUN_00919e28(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined4 local_24;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_24 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isNSLogMonitoring_026aa398);
    local_24 = (uint)uVar3 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_24 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_startNSLogMonitoring_026aa318);
  }
  return;
}

