// isReady @ 0158d530

/* Function Stack Size: 0x10 bytes */

bool WCRefineVoiceCloneHelper::isReady(ID param_1,SEL param_2)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 local_30;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = false;
  bVar1 = false;
  local_48 = 0;
  if (((ulong)puVar4 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_hasRequestCredential_026b09c8);
    local_48 = 0;
    if ((param_1 & 1) != 0) {
      local_30 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      local_40 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = (uint)(puVar4 != (undefined *)0x0);
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  return local_48;
}

