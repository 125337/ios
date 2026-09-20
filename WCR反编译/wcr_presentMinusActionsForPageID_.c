// wcr_presentMinusActionsForPageID: @ 01dc3cc0

/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_presentMinusActionsForPageID_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_120;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  undefined1 auStack_d8 [15];
  undefined1 local_c9;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  long local_a8;
  undefined1 auStack_a0 [11];
  undefined1 local_95;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  long local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_3c = 1;
  }
  else {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    pcVar4 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_sessionStatsResolvedTitleForPage_026c5170,lVar1,IVar3);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_120 = &cf_aSGr;
    }
    else {
      local_120 = local_48;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_alertControllerWithTitle_message_0269dc00,local_120,0,1);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar5;
    _objc_initWeak(auStack_58,local_28);
    puVar6 = local_50;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01dc4280;
    local_70 = &DAT_0258a148;
    _objc_copyWeak(auStack_60,auStack_58);
    lVar1 = local_38;
    local_95 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__TT,0,&local_88);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    local_95 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar6 = local_50;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01dc4308;
    local_b0 = &DAT_0258a148;
    _objc_copyWeak(auStack_a0,auStack_58);
    lVar1 = local_38;
    local_c9 = 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&::cf__,2,&local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
    local_c9 = 0;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar5 = local_50;
    puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    IVar3 = local_28;
    puVar5 = local_50;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01dc43fc;
    local_e0 = &DAT_0257be28;
    _objc_copyWeak(auStack_d8,auStack_58);
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar3,PTR_s_presentViewController_animated_c_0269d2b0,puVar5,1,&local_f8);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_a8);
    _objc_destroyWeak(auStack_a0);
    _objc_storeStrong(&local_68,0);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

