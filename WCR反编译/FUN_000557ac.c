// FUN_000557ac @ 000557ac

void FUN_000557ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  if (local_18 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
               PTR_s_localFileBytesForWrap_kind__0269da00,local_18,local_20);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
               PTR_s_metadataBytesForWrap_kind__0269da08,local_18,local_20);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineAutoDownloadQuotaHelper_026ce148,
               PTR_s_isWrapFullyDownloaded_kind__0269da10,local_18,local_20);
    if (((uint)local_20 >> 1 & 1) != 0) {
      FUN_00055cb0();
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

