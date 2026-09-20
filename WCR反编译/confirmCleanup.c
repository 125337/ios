// confirmCleanup @ 01be1788

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsCacheKeepUsersViewController::confirmCleanup(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_f8;
  long local_f0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_50;
  long local_48;
  ulong local_40;
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_keepUsernames_026c0928);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  local_38 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_allUsernames_026c0920);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_38 < IVar1) {
    local_f0 = IVar1 - local_38;
  }
  else {
    local_f0 = 0;
  }
  local_48 = local_f0;
  local_40 = IVar1;
  if (local_f0 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__RhQ_u7blgSntv_X_);
  }
  else {
    local_59 = 0;
    local_69 = 0;
    local_f8 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (local_38 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf__gROYu_u7b_nthQ);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_f8;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__OYu);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_f8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_f8;
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar3 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf_nxnt,local_50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_78 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_initWeak(auStack_80,local_28);
    puVar4 = local_78;
    puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_01be1c90;
    local_90 = &DAT_02583468;
    _objc_copyWeak(auStack_88,auStack_80);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nt,2,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_78,1,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_50,0);
  }
  return;
}

