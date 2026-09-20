// FUN_00f45ee8 @ 00f45ee8

void FUN_00f45ee8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *local_38;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028e2d58 == (undefined *)0x0) {
    if (local_18 == (cfstringStruct *)0x0) {
      local_38 = &cf_ck_WYt_;
    }
    else {
      local_38 = local_18;
    }
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,local_38);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = DAT_028e2d58;
    DAT_028e2d58 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_updateWeToast_loadingText__026ac560,DAT_028e2d58,
               local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

