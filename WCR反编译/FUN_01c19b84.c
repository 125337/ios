// FUN_01c19b84 @ 01c19b84

void FUN_01c19b84(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined1 auStack_78 [11];
  undefined1 local_6d;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    if (((*(long *)(param_1 + 0x38) == 0) && (*(long *)(param_1 + 0x40) == 0)) &&
       (*(long *)(param_1 + 0x48) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_fegSW_g0W_X_);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertController_026ce178,
                 PTR_s_alertControllerWithTitle_message_0269dc00,&cf_nt2R_X_,
                 *(undefined8 *)(param_1 + 0x28),1);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_60 = PTR___NSConcreteStackBlock_02578660;
      local_58 = 0xc2000000;
      local_54 = 0;
      local_50 = FUN_01c19fe8;
      local_48 = &DAT_02583468;
      local_38 = puVar2;
      _objc_copyWeak(auStack_40,param_1 + 0x30);
      local_6d = 1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQnt,2,&local_60);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      local_6d = 0;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_38;
      puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      local_98 = PTR___NSConcreteStackBlock_02578660;
      local_90 = 0xc2000000;
      local_8c = 0;
      local_88 = FUN_01c1a064;
      local_80 = &DAT_02583468;
      _objc_copyWeak(auStack_78,param_1 + 0x30);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_c__u7bNnt,0,&local_98);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_38;
      puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                 PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      param_1 = param_1 + 0x30;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(param_1);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_40);
      _objc_storeStrong(&local_38,0);
    }
  }
  return;
}

