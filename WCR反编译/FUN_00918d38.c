// FUN_00918d38 @ 00918d38

/* WARNING: Removing unreachable block (ram,0x00919044) */

void FUN_00918d38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR_WCNavigationMonitor_026cea60;
  local_30 = param_5;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((local_38 == (undefined *)0x0) ||
     (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     puVar1 == (undefined *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_S1Y_,
               &cf_elSVc6RhVB__k_g,&cf_nx_,&PTR___NSConcreteGlobalBlock_02580ff0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    local_3c = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    _objc_alloc_init();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTitle__0269cef0,&cf_VB__k_g);
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UITextView_026ce1b8;
    _objc_alloc();
    puVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_70 = param_1;
    local_68 = param_2;
    local_60 = param_3;
    local_58 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_50 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAttributedText__026a0000,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setEditable__026a9fc8,0);
    puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar7 = 0x4030000000000000;
    uVar4 = 0x4030000000000000;
    uVar5 = 0x4030000000000000;
    uVar6 = 0x4030000000000000;
    FUN_0091934c();
    local_b0 = uVar4;
    uStack_a8 = uVar5;
    local_a0 = uVar6;
    uStack_98 = uVar7;
    local_90 = uVar4;
    uStack_88 = uVar5;
    local_80 = uVar6;
    uStack_78 = uVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,uVar5,uVar6,uVar7,local_50,PTR_s_setTextContainerInset__026a9fd8);
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar2 = local_48;
    local_b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_c0 = puVar1;
    _objc_setAssociatedObject(local_48,&cf_hierarchy,puVar1,1);
    lVar3 = *(long *)(param_5 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_5 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar4);
    }
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

