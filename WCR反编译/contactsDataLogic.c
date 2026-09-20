// contactsDataLogic @ 01a91cc0

/* Function Stack Size: 0x10 bytes */

ID WCRefineGroupDataProvider::contactsDataLogic(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_28;
  pcVar3 = &cf_m_appViewControllerMgr;
  _NSSelectorFromString(&cf_m_appViewControllerMgr);
  FUN_01a91e98(puVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_getContactsViewController;
  local_30 = puVar2;
  _NSSelectorFromString(&cf_getContactsViewController);
  FUN_01a91e98(puVar2,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_40 = (undefined *)0x0;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128,&cf_m_contactsDataLogic);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_40;
  local_40 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_40;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

