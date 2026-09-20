// wcr_presentFallbackPromptWithPrefill: @ 00f61e4c

/* Function Stack Size: 0x18 bytes */

void WCRefineFindUserSupport::wcr_presentFallbackPromptWithPrefill_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined8 local_58;
  undefined *local_50;
  uint local_44;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar4;
  if (puVar4 != (undefined *)0x0) {
    puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_g_b_u7b,&cf_eQ_e,1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_38;
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_78 = PTR___NSConcreteStackBlock_02578660;
    local_70 = 0xc2000000;
    local_6c = 0;
    local_68 = FUN_00f621fc;
    local_60 = &DAT_02583438;
    local_50 = puVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_78);
    _objc_initWeak(auStack_80,local_50);
    puVar2 = local_50;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_a8 = puVar1;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_00f62308;
    local_90 = &DAT_02583468;
    _objc_copyWeak(auStack_88,auStack_80);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&::cf_Sb,0,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar1 = local_50;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_50,1,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRubeleQ);
  }
  local_44 = (uint)(puVar4 == (undefined *)0x0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

