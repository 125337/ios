// editMessageDanmakuHeight @ 01a36968

/* Function Stack Size: 0x10 bytes */

void WCRefineGeneralFunctionViewController::editMessageDanmakuHeight(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf_9_U__,&cf_eQ_hQ_SNevOPy0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addTextFieldWithConfigurationHan_026ac828,
             &PTR___NSConcreteGlobalBlock_0258ae30);
  puVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_initWeak(auStack_40,local_28);
  _objc_initWeak(auStack_48,local_38);
  puVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  local_78 = PTR___NSConcreteStackBlock_02578660;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_01a36df4;
  local_60 = &DAT_0258ae50;
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_copyWeak(auStack_50,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1,0);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

