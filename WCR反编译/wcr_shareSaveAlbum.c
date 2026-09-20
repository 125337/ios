// wcr_shareSaveAlbum @ 01ddbee4

/* WARNING: Removing unreachable block (ram,0x01ddc06c) */
/* Function Stack Size: 0x10 bytes */

void WCRefineSessionStatsViewController::wcr_shareSaveAlbum(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined **ppuVar3;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  undefined **local_50;
  undefined **local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingShareImage_026c5710);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingShareImage__026c56f8,0);
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSRNvbJT);
    local_3c = 1;
  }
  else {
    ppuVar3 = &PTR___NSConcreteGlobalBlock_0258c550;
    _objc_retainBlock();
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_01ddc214;
    local_60 = &DAT_02587ab0;
    local_48 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_38;
    local_50 = ppuVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_requestAuthorizationForAccessLev_026a1768,1,&local_78);
    local_3c = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

