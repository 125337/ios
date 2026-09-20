// showRemoteUpdateAlertIfNeeded @ 01d2c77c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineRootViewController::showRemoteUpdateAlertIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *local_120;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined1 auStack_c8 [8];
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined1 auStack_98 [8];
  byte local_90;
  undefined1 auStack_88 [8];
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  puVar5 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if ((((ulong)puVar6 & 1) == 0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_clearSkippedUpdateVersionIfNeede_026c43f0),
     (*(byte *)(local_28 + (long)_isShowingRemoteUpdateAlert) & 1) == 0)) {
    IVar7 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar8 = IVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(IVar7);
    if ((IVar8 != 0) &&
       (IVar7 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_shouldShowRemoteUpdateAlert_026c43f8),
       (IVar7 & 1) != 0)) {
      puVar5 = PTR_WCRefineRemoteUpdateManager_026ce600;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
      _objc_retainAutoreleasedReturnValue();
      local_38 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isForceUpdate_026c43d8);
      local_39 = (byte)puVar5;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_latestVersion_026c4400);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_38;
      local_48 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateAlertLocalDedupeKey_026c43a0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_38;
      local_50 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateAlertTitle_026c4408);
      _objc_retainAutoreleasedReturnValue();
      local_60 = (undefined *)0x0;
      puVar6 = local_48;
      local_58 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if (puVar6 == (undefined *)0x0) {
        puVar5 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasNewVersion_026c43d0);
        if (((ulong)puVar5 & 1) == 0) {
          _objc_storeStrong(&local_60,&cf_c_y);
        }
        else {
          _objc_storeStrong(&local_60,&cf_SseHr_g);
        }
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_SseHr_g)
        ;
        _objc_retainAutoreleasedReturnValue();
        puVar5 = local_60;
        local_60 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      puVar5 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      if (puVar5 == (undefined *)0x0) {
        local_120 = local_60;
      }
      else {
        local_120 = local_58;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_120;
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateDescription_026c4410);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (puVar5 == (undefined *)0x0) {
        _objc_storeStrong(&local_70,&cf_eHrS_____fe0);
      }
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateAlertButtonLaterTitle_026c4418);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (puVar5 == (undefined *)0x0) {
        _objc_storeStrong(&local_78,&cf_zTfe);
      }
      puVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_updateAlertButtonPrimaryTitle_026ad028);
      _objc_retainAutoreleasedReturnValue();
      local_80 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
      if (puVar5 == (undefined *)0x0) {
        _objc_storeStrong(&local_80,&cf_MRSfe);
      }
      if (((local_39 & 1) == 0) &&
         (puVar5 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0),
         puVar5 != (undefined *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_setShownUpdateVersion__026c43c0,local_50);
      }
      *(undefined1 *)(local_28 + (long)_isShowingRemoteUpdateAlert) = 1;
      _objc_initWeak(auStack_88,local_28);
      puVar4 = local_68;
      puVar3 = local_70;
      puVar2 = local_78;
      puVar6 = PTR_WCRefineHelper_026ce000;
      puVar5 = PTR___NSConcreteStackBlock_02578660;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_01d2ce90;
      local_a8 = &DAT_0258c230;
      _objc_copyWeak(auStack_98,auStack_88);
      local_90 = local_39 & 1;
      puVar9 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      puVar1 = local_80;
      local_e8 = puVar5;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_01d2cf68;
      local_d0 = &DAT_025810b0;
      local_a0 = puVar9;
      _objc_copyWeak(auStack_c8,auStack_88);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,puVar4,puVar3,puVar2,
                 &local_c0,puVar1,&local_e8);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar6);
      _objc_destroyWeak(auStack_c8);
      _objc_storeStrong(&local_a0);
      _objc_destroyWeak(auStack_98);
      _objc_destroyWeak(auStack_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_78,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

