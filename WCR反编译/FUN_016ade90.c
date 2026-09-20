// FUN_016ade90 @ 016ade90

void FUN_016ade90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_1d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined1 local_b1;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined *local_50 [3];
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_5);
  if (local_28 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    puVar1 = local_28;
    FUN_016aed70();
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_38;
      local_38 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    if (local_38 == (undefined *)0x0) {
      local_2c = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_50[0] = puVar1;
      _objc_initWeak(auStack_58,local_28);
      puVar2 = local_50[0];
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_016af08c;
      local_68 = &DAT_02587fd0;
      _objc_copyWeak(auStack_60,auStack_58);
      local_81 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_vcN_,0,&local_80);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_81 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar2 = local_50[0];
      puVar1 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_016af344;
      local_98 = &DAT_02587fd0;
      _objc_copyWeak(auStack_90,auStack_58);
      local_b1 = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_vQNSb,0,&local_b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_b1 = 0;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_50[0];
      puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar1 = local_28;
      FUN_016adc54();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_c0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)puVar1 & 1) == 0) {
        local_1d8 = local_28;
      }
      else {
        local_1d8 = local_c0;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = local_1d8;
      puVar1 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_popoverPresentationController_0269fdf0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = puVar1;
      if ((puVar1 != (undefined *)0x0) && (local_c8 != (undefined *)0x0)) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setSourceView__0269fdf8,local_c8);
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,param_2,param_3,param_4,local_d0,PTR_s_setSourceRect__0269fe00);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_50[0],1,0);
      _objc_storeStrong(&local_d0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_c0,0);
      _objc_destroyWeak(auStack_90);
      _objc_destroyWeak(auStack_60);
      _objc_destroyWeak(auStack_58);
      _objc_storeStrong(local_50,0);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

