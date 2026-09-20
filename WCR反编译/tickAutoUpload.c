// tickAutoUpload @ 00f11434

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRefineCloudBackupService::tickAutoUpload(WCRefineCloudBackupService *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_cloudBackupAutoUploadEnabled_026abbe8);
  if (((((ulong)puVar1 & 1) != 0) &&
      (IVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isReady_026aba68),
      (IVar2 & 1) != 0)) && ((DAT_028e2b18 & 1) == 0)) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cloudBackupLastUploadUnix_026abbf0);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_autoUploadIntervalHours_026aba80);
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((long)puVar1 < 1) || ((long)(IVar2 * 0xe10) <= (long)in_d0 - (long)puVar1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_uploadCurrentConfigWithCompletio_026abcc0,
                 &PTR___NSConcreteGlobalBlock_02582708);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

