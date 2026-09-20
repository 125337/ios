// runDeleteWithUserNames:loadingText: @ 0016b8a4

/* Function Stack Size: 0x20 bytes */

void WCRefineClearSessionHook::runDeleteWithUserNames_loadingText_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_90;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == (cfstringStruct *)0x0) {
    local_90 = &cf_ck_WYt_;
  }
  else {
    local_90 = local_30;
  }
  puVar2 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,local_90);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR___dispatch_main_q_02578680;
  local_38 = puVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_28;
  local_70 = PTR___NSConcreteStackBlock_02578660;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_0016ba64;
  local_58 = &DAT_0257a740;
  local_40 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_38;
  local_50 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = puVar2;
  _dispatch_async(puVar3,&local_70);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

