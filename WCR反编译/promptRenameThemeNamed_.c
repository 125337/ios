// promptRenameThemeNamed: @ 01fc296c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineWechatThemeManagerViewController::promptRenameThemeNamed_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ulong local_90;
  undefined *local_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  undefined *local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if ((uVar3 == 0) ||
     (uVar3 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf__e_N),
     (uVar3 & 1) != 0)) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,&cf__TT_N);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_02578660;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01fc2d8c;
    local_58 = &DAT_02583438;
    uVar3 = local_38;
    local_48 = puVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTextFieldWithConfigurationHan_026ac828,&local_70);
    puVar2 = local_48;
    puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_initWeak(auStack_78,local_28);
    puVar4 = local_48;
    puVar2 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b0 = puVar1;
    local_a8 = 0xc2000000;
    local_a4 = 0;
    local_a0 = FUN_01fc2e14;
    local_98 = &DAT_0258b950;
    _objc_copyWeak(auStack_80,auStack_78);
    uVar3 = local_38;
    (*(code *)PTR__objc_retain_02578638)();
    puVar1 = local_48;
    local_90 = uVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_88 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_nx_,0,&local_b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_presentViewController_animated_c_0269d2b0,local_48,1,0);
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_90,0);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

