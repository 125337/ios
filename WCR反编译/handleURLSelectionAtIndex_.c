// handleURLSelectionAtIndex: @ 01d0927c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::handleURLSelectionAtIndex_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  ID local_d8;
  undefined1 auStack_d0 [8];
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  ID local_a8;
  undefined1 local_9d;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  ID local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  ID local_50;
  byte local_41;
  ID local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_41 = 0;
  bVar1 = true;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_urlItems_026c3c20);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)param_1 <= (long)param_3;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (!bVar1) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_urlItems_026c3c20);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_SSQ_u,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    _objc_initWeak(auStack_60,local_28);
    IVar4 = local_50;
    puVar5 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_01d09904;
    local_78 = &DAT_0258a148;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = IVar4;
    _objc_copyWeak(auStack_68,auStack_60);
    local_9d = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf__O_uagc,0,&local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    local_9d = 0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_c8 = PTR___NSConcreteStackBlock_02578660;
    local_c0 = 0xc2000000;
    local_bc = 0;
    local_b8 = FUN_01d09ac0;
    local_b0 = &DAT_0257c5b8;
    IVar4 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_a8 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Y6R,0,&local_c8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_f8 = PTR___NSConcreteStackBlock_02578660;
    local_f0 = 0xc2000000;
    local_ec = 0;
    local_e8 = FUN_01d09b8c;
    local_e0 = &DAT_0258a148;
    IVar4 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = IVar4;
    _objc_copyWeak(auStack_d0,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_RdagSS,2,&local_f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
    _objc_destroyWeak(auStack_d0);
    _objc_storeStrong(&local_d8);
    _objc_storeStrong(&local_a8,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_70,0);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

