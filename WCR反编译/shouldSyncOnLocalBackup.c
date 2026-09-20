// shouldSyncOnLocalBackup @ 00f01ab4

/* Function Stack Size: 0x10 bytes */

bool WCRefineCloudBackupService::shouldSyncOnLocalBackup(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 local_24;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_24 = 0;
  if (((ulong)puVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isReady_026aba68);
    local_24 = (uint)param_1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return local_24 & 1;
}

