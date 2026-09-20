// createFolder @ 01f7d0e8

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::createFolder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineVoicePackStore_026cea20;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_resolvedDirectory_026ba370);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_suggestedNewFolderNameInDirector_026c9a80);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_initWeak(auStack_30,local_18);
  puVar1 = local_28;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01f7d248;
  local_40 = &DAT_0257c558;
  _objc_copyWeak(auStack_38,auStack_30);
  FUN_01f6d9ac(&cf_e_eN9Y,&cf___O_u,puVar1,0x3c,&cf_R_,&local_58);
  _objc_destroyWeak(auStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_28,0);
  return;
}

