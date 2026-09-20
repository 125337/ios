// syncVisibleCategory @ 01f59668

/* Function Stack Size: 0x10 bytes */

void WCRefineVoiceCloneListViewController::syncVisibleCategory(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  ID local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  ID local_98;
  ID local_90;
  undefined **local_88;
  undefined *local_80;
  undefined4 local_74;
  undefined *local_70;
  ID local_68;
  undefined4 local_5c;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ID local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_filterIndex_026c9470);
  local_4c = 1;
  local_c8 = param_1;
  if ((long)param_1 < 1) {
    local_c8 = 1;
  }
  local_58 = local_c8;
  local_40 = local_c8;
  local_5c = 3;
  if ((long)local_c8 < 3) {
    local_d0 = local_c8;
  }
  else {
    local_d0 = 3;
  }
  local_68 = local_d0;
  local_38 = local_d0;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_70 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((local_38 == 3) &&
     (puVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     puVar2 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_editCustomCatalogURL_026c94a8);
    local_74 = 1;
  }
  else {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,&cf_ck_WbSr_);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &local_c0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01f59998;
    local_a8 = &DAT_0258cdd0;
    local_80 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    IVar1 = local_28;
    local_a0 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = IVar1;
    local_90 = local_38;
    _objc_retainBlock();
    local_88 = ppuVar4;
    if (local_38 == 1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoiceCloneHelper_026cea40,
                 PTR_s_syncModelsFromServerWithCompleti_026c94d0,ppuVar4);
      local_74 = 1;
    }
    else {
      if (local_38 == 2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineVoiceCloneHelper_026cea40,
                   PTR_s_syncCatalogContentType_completio_026b0b88,&cf_all,ppuVar4);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineVoiceCloneHelper_026cea40,PTR_s_syncCatalogURL_completion__026c94d8,
                   local_70,ppuVar4);
      }
      local_74 = 0;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_70,0);
  return;
}

