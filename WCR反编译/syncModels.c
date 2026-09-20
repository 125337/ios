// syncModels @ 01f650fc

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneSettingsViewController::syncModels(ID param_1,SEL param_2)

{
  ID IVar1;
  bool bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined *local_40;
  ID local_38;
  undefined *local_30;
  undefined1 local_21;
  SEL local_20;
  ID local_18;
  
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar2 = puVar4 == (undefined1 *)((long)&MACH_HEADER.cputype + 1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_21 = bVar2;
  if ((!bVar2) &&
     (puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_hasRequestCredential_026b09c8),
     ((ulong)puVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQMn_cSQ);
    return;
  }
  puVar5 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WTekr_);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_WCRefineVoiceCloneHelper_026cea40;
  local_60 = PTR___NSConcreteStackBlock_02578660;
  local_58 = 0xc2000000;
  local_54 = 0;
  local_50 = FUN_01f652e8;
  local_48 = &DAT_0258ce50;
  local_30 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  IVar1 = local_18;
  local_40 = puVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_syncModelsFromServerWithCompleti_026c94d0,&local_60);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

