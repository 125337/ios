// exportInlineHTMLFile @ 01f00be0

/* Function Stack Size: 0x10 bytes */

void WCRefineToDoListWebSettingsViewController::exportInlineHTMLFile(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  undefined1 auStack_80 [11];
  undefined1 local_75;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_saveInlineHTMLSilently__026c80e8,1);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf__Q,&cf__f_Tbd>ehVMn_0ZSO);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  _objc_initWeak(auStack_40,local_28);
  puVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01f00fbc;
  local_50 = &DAT_02583468;
  _objc_copyWeak(auStack_48,auStack_40);
  local_75 = 1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_N_QNx,0,&local_68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
  local_75 = 0;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  local_a0 = PTR___NSConcreteStackBlock_02578660;
  local_98 = 0xc2000000;
  local_94 = 0;
  local_90 = FUN_01f01040;
  local_88 = &DAT_02583468;
  _objc_copyWeak(auStack_80,auStack_40);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf___,0,&local_a0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_38;
  puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_38,1,0);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38,0);
  return;
}

