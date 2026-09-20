// deletePendingFolder @ 01d034e8

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::deletePendingFolder(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_50 [8];
  undefined *local_48;
  uint local_3c;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingFolderName_026c3cc0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  if (param_1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd0_);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_alertControllerWithTitle_message_0269dc00,&cf_RdeN9Y);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_initWeak(auStack_50,local_28);
    puVar3 = local_48;
    puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_48;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01d0386c;
    local_78 = &DAT_0258a148;
    _objc_copyWeak(auStack_68,auStack_50);
    IVar1 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    _objc_storeStrong(&local_70);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_50);
    _objc_storeStrong(&local_48,0);
  }
  local_3c = (uint)(param_1 == 0);
  _objc_storeStrong(&local_38,0);
  return;
}

