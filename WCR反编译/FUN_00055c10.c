// FUN_00055c10 @ 00055c10

void FUN_00055c10(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineAutoDownloadQuotaHelper_026ce148;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,PTR_s_isWrapFullyDownloaded_kind__0269da10
             ,*(undefined8 *)(param_1 + 0x20),1);
  if (((ulong)puVar1 & 1) == 0) {
    FUN_000557ac(*(undefined8 *)(param_1 + 0x20),1,&cf_VGrH);
    FUN_00055944(*(undefined8 *)(param_1 + 0x20));
  }
  else {
    FUN_000557ac(*(undefined8 *)(param_1 + 0x20),1,&cf_VGr__te);
  }
  return;
}

