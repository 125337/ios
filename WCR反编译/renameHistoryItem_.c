// renameHistoryItem: @ 00f6ab2c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRForwardToGroupPickerViewController::renameHistoryItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf__TT,&cf__yblSvhw_NTW_ONN_k_R);
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00f6af40;
  local_50 = &DAT_02583438;
  uVar2 = local_38;
  local_40 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_68);
  _objc_initWeak(auStack_70,local_28);
  _objc_initWeak(auStack_78,local_40);
  puVar1 = local_40;
  puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_40;
  puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  local_c0 = PTR___NSConcreteStackBlock_02578660;
  local_b8 = 0xc2000000;
  local_b4 = 0;
  local_b0 = FUN_00f6b020;
  local_a8 = &DAT_025834f8;
  uVar2 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = uVar2;
  _objc_copyWeak(auStack_98,auStack_78);
  _objc_copyWeak(auStack_90,auStack_70);
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_OX_,0,&local_c0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_40,1,0);
  _objc_destroyWeak(auStack_90);
  _objc_destroyWeak(auStack_98);
  _objc_storeStrong(&local_a0);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

