// importFromFileManager @ 01f7d430

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackManagerViewController::importFromFileManager(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_68 [3];
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  _objc_initWeak(auStack_28,local_18);
  puVar1 = PTR_WCRefineFileManagerViewController_026ceec8;
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01f7d650;
  local_38 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_30,auStack_28);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_beginPendingPickWithCompletion__026c5c28,&local_50);
  puVar1 = PTR_WCRefineFileManagerViewController_026ceec8;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_initWithDirectory_title__026b2df8,0,&cf_b_eQveN);
  IVar2 = local_18;
  local_68[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
             &cf_NeN_t_eQ,&cf_Om0RvhMOn_TpSN0Y_eQ0ReNbeN9YQp0_eQ00,&cf_wSN,0);
  _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
  _objc_storeStrong(local_68,0);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}

