// WCRefine_onClearUnreadMsg @ 0016d294

/* Function Stack Size: 0x10 bytes */

void WCRefineClearUnreadMsgHook::WCRefine_onClearUnreadMsg(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = puVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = puVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

