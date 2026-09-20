// performCatalogUpload:visibility: @ 01f5c4dc

/* Function Stack Size: 0x20 bytes */

void WCRefineVoiceCloneListViewController::performCatalogUpload_visibility_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_74;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined *local_50;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_74 = 1;
  if (((ulong)puVar5 & 1) != 0) {
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_voiceCloneVisibleForCurrentUser_026a9dd8);
    local_74 = (uint)puVar5 ^ 1;
  }
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if ((local_74 & 1) == 0) {
    puVar4 = PTR_WCRefineVoiceCloneHelper_026cea40;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_canUploadModelToCatalog__026b0ac0,
               local_28);
    if (((ulong)puVar4 & 1) == 0) {
      local_34 = 1;
    }
    else {
      puVar5 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WNO_)
      ;
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_28;
      uVar1 = local_30;
      puVar4 = PTR_WCRefineVoiceCloneHelper_026cea40;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_01f5c744;
      local_58 = &DAT_0258a178;
      local_40 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      IVar3 = local_18;
      local_50 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_uploadModelToCatalog_visibility__026c9558,uVar2,uVar1,&local_70);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_40,0);
      local_34 = 0;
    }
  }
  else {
    local_34 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

