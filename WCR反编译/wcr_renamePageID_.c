// wcr_renamePageID: @ 01dc31bc

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_renamePageID_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined1 auStack_d8 [11];
  undefined1 local_cd;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  uint local_3c;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar2 != 0) {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = local_38;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    puVar7 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_sessionStatsResolvedTitleForPage_026c5170,lVar6,IVar4);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar6 = local_38;
    puVar3 = PTR_WCRefineConfig_026cdf58;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_sessionStatsDefaultTitleForPageI_026c52f8,lVar6,IVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_alertControllerWithTitle_message_0269dc00,&cf_9eaSGrTy,puVar5,1);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar1 = local_48;
    puVar7 = local_58;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    local_88 = PTR___NSConcreteStackBlock_02578660;
    local_80 = 0xc2000000;
    local_7c = 0;
    local_78 = FUN_01dc38d4;
    local_70 = &DAT_0258c400;
    (*(code *)PTR__objc_retain_02578638)();
    puVar5 = local_50;
    local_68 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_88);
    _objc_initWeak(auStack_90,local_28);
    puVar5 = local_58;
    puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_c0 = puVar3;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_01dc397c;
    local_a8 = &DAT_0258a148;
    lVar6 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar6;
    _objc_copyWeak(auStack_98,auStack_90);
    local_cd = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_b_Y,2,&local_c0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    local_cd = 0;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar3 = local_58;
    puVar7 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_108 = PTR___NSConcreteStackBlock_02578660;
    local_100 = 0xc2000000;
    local_fc = 0;
    local_f8 = FUN_01dc3acc;
    local_f0 = &DAT_0258b950;
    (*(code *)PTR__objc_retain_02578638)();
    lVar6 = local_38;
    local_e8 = puVar7;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = lVar6;
    _objc_copyWeak(auStack_d8,auStack_90);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_OX_,0,&local_108);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
    _objc_destroyWeak(auStack_d8);
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_e8,0);
    _objc_destroyWeak(auStack_98);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_90);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(lVar2 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

