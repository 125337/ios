// FUN_006f1234 @ 006f1234

void FUN_006f1234(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x38;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    if (local_20 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__0269d180,local_20);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324040,local_30,PTR_s_wcr_showProgressHUDStage_progres_026a7008,&cf_OX__,
               *(byte *)(param_1 + 0x40) & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_wcr_saveFinalVideoAtURL_original_026a7090,local_20,
               *(undefined8 *)(param_1 + 0x28),*(byte *)(param_1 + 0x41) & 1,
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30),
               *(byte *)(param_1 + 0x40) & 1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

