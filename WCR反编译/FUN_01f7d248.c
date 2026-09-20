// FUN_01f7d248 @ 01f7d248

void FUN_01f7d248(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_90;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar2 = local_20;
  puVar5 = PTR_WCRefineVoicePackStore_026cea20;
  local_30 = (cfstringStruct *)0x0;
  lVar3 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  lVar4 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_createFolderNamed_inDirectory_er_026c9a88,uVar2,lVar4,&local_38);
  _objc_storeStrong(&local_30,local_38);
  (*(code *)PTR__objc_release_02578630)(lVar4);
  (*(code *)PTR__objc_release_02578630)(lVar3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  if (((ulong)puVar5 & 1) == 0) {
    pcVar6 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_90 = &cf_R_1Y_;
    }
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_showModernToast__0269ce78,local_90);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__R_);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  return;
}

