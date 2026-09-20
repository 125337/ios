// confirmDeleteSingleItem: @ 01bdb7e8

/* Function Stack Size: 0x18 bytes */

void WCRefineMomentsCacheViewController::confirmDeleteSingleItem_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined *local_58;
  undefined4 local_4c;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  FUN_01bc758c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_38;
  local_40 = lVar1;
  FUN_01bc7610();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_40;
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_4c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_Rdag_g0WgSW,
               &cf__TeRdagR_vR_chVGrbelb_Y0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_initWeak(auStack_60,local_28);
    lVar2 = local_40;
    puVar4 = local_58;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_01bdbb8c;
    local_80 = &DAT_0258b950;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_48;
    local_78 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = lVar1;
    _objc_copyWeak(auStack_68,auStack_60);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Rd,2,&local_98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_58,1,0);
    _objc_destroyWeak(auStack_68);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_78,0);
    _objc_destroyWeak(auStack_60);
    _objc_storeStrong(&local_58,0);
    local_4c = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

