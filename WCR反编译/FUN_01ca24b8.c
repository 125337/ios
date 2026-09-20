// FUN_01ca24b8 @ 01ca24b8

void FUN_01ca24b8(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WbS_);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineCloudBackupService_026cf140;
  local_30 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_40 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_downloadAndApplyLatestWithComple_026abbb0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

