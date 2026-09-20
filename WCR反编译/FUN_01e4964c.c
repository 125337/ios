// FUN_01e4964c @ 01e4964c

void FUN_01e4964c(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  puVar1 = PTR_WCRefineTelegramGroupingStore_026ce5a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTelegramGroupingStore_026ce5a8,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_tabId_026a8270);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_title_0269d250);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_members_0269ea98);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_saveCustomTabId_title_members_li_026bdba8,uVar2,uVar3,uVar4,local_20,
             param_3 & 1);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar5 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_OX_1Y_);
  }
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

