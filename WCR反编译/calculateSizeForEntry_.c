// calculateSizeForEntry: @ 019960e0

/* Function Stack Size: 0x18 bytes */

void WCRefineFileManagerViewController::calculateSizeForEntry_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined *local_50;
  uint local_44;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar4 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,&cf_path);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
  if (lVar4 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cancelActiveSizeCalculation_026ba2d8);
    puVar5 = PTR_WCRFileDirSizeCancelToken_026cf1e0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileDirSizeCancelToken_026cf1e0,PTR_s_new_0269d288)
    ;
    local_50 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveSizeToken__026ba628,puVar5);
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_W__Y__)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActiveSizeToast__026ba630,puVar5);
    _objc_initWeak(auStack_60,local_28);
    puVar6 = PTR_WCRFileDirSizeManager_026cf1d8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRFileDirSizeManager_026cf1d8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_40;
    puVar1 = local_50;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_019963dc;
    local_90 = &DAT_0258a668;
    _objc_copyWeak(auStack_78,auStack_60);
    puVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_58;
    local_88 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar6,PTR_s_sizeForPath_token_completion__026ba640,lVar3,puVar1,&local_a8);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_88,0);
    _objc_destroyWeak(auStack_78);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  local_44 = (uint)(lVar4 == 0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

