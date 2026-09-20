// WCRefine_clearSession_batchHide @ 0016cb7c

/* Function Stack Size: 0x10 bytes */

void WCRefineClearSessionHook::WCRefine_clearSession_batchHide(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID local_48;
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((param_1 & 1) == 0) {
    local_48 = 0;
  }
  else {
    local_48 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_48;
  puVar1 = PTR_WCRefineClearSessionHook_026ce348;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineClearSessionHook_026ce348,PTR_s_pendingUserNamesOnHost__0269f888,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gbO);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineClearSessionHook_026ce348,PTR_s_runHideWithUserNames_loadingText_0269f870
               ,local_30,&cf_ck_WybN>f_y_);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

