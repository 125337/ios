// performKeepUsersCleanup @ 01be1d0c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheKeepUsersViewController::performKeepUsersCleanup(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  ID local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined *local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keepUsernames_026c0928);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_Wnt_);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  _objc_initWeak(auStack_38,local_18);
  pdVar3 = _dispatch_get_global_queue(0x19,0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = IVar1;
  _objc_copyWeak(auStack_40,auStack_38);
  puVar2 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar2;
  _dispatch_async(pdVar3);
  (*(code *)PTR__objc_release_02578630)(pdVar3);
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

