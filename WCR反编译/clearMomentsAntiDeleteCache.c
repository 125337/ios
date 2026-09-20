// clearMomentsAntiDeleteCache @ 01c1969c

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsViewController::clearMomentsAntiDeleteCache(ID param_1,SEL param_2)

{
  undefined *puVar1;
  dispatch_queue_t pdVar2;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined1 auStack_48 [24];
  undefined *local_30;
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_initWeak(auStack_28,param_1);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W__X__);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  pdVar2 = _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_30;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_01c19800;
  local_58 = &DAT_02579c60;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = puVar1;
  _objc_copyWeak();
  _dispatch_async(pdVar2,&local_70);
  (*(code *)PTR__objc_release_02578630)(pdVar2);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_30,0);
  _objc_destroyWeak(auStack_28);
  return;
}

