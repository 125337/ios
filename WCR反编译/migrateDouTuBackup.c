// migrateDouTuBackup @ 01b70edc

/* Function Stack Size: 0x10 bytes */

void WCRefineLocalEmoticonLibraryViewController::migrateDouTuBackup(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  ID local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_beginImportBatch_026bfa90);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_packForDouTuImport_026bfac0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  _objc_storeStrong(local_18 + (long)_pendingDouTuPackRel,IVar1);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
             &cf_ck_WkbceVRKbYN_);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  pdVar3 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_30;
  local_48 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_18;
  local_40 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar1;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

