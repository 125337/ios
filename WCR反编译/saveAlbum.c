// saveAlbum @ 016751a8

/* WARNING: Removing unreachable block (ram,0x016753a8) */
/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::saveAlbum(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined **ppuVar4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ID local_80;
  undefined **local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  undefined **local_48;
  undefined4 local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imagePreparedForExport_026b2668);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_28;
  local_38 = IVar2;
  if (IVar2 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasActiveCropSelection_026b1f60);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSOX_vVGr);
    }
    local_3c = 1;
  }
  else {
    ppuVar4 = &local_70;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_016754e8;
    local_58 = &DAT_02586e38;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar3;
    _objc_retainBlock();
    IVar3 = local_38;
    puVar1 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
    local_a0 = PTR___NSConcreteStackBlock_02578660;
    local_98 = 0xc2000000;
    local_94 = 0;
    local_90 = FUN_01675580;
    local_88 = &DAT_02587ab0;
    local_48 = ppuVar4;
    (*(code *)PTR__objc_retain_02578638)();
    ppuVar4 = local_48;
    local_80 = IVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = ppuVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_requestAuthorizationForAccessLev_026a1768,1,&local_a0);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

