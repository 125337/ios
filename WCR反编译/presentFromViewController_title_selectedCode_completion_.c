// presentFromViewController:title:selectedCode:completion: @ 010a4f04

/* Function Stack Size: 0x30 bytes */

void WCRefineMessageRepositoryPicker::presentFromViewController_title_selectedCode_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *local_128;
  undefined *local_a8;
  undefined4 local_9c;
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  long local_78;
  cfstringStruct *local_70;
  undefined8 local_68;
  undefined8 local_60;
  ID local_58;
  undefined8 local_50;
  undefined8 local_48;
  cfstringStruct *local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    local_98 = PTR___NSConcreteStackBlock_02578660;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_010a528c;
    local_80 = &DAT_02581fc0;
    local_58 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar5 = local_40;
    local_78 = lVar2;
    (*(code *)PTR__objc_retain_02578638)();
    uVar1 = local_48;
    local_70 = pcVar5;
    (*(code *)PTR__objc_retain_02578638)();
    uVar6 = local_50;
    local_68 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = uVar6;
    _dispatch_async(puVar4,&local_98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_9c = 1;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_78,0);
  }
  else if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
    local_9c = 1;
  }
  else {
    puVar4 = PTR_WCRefineMessageRepositoryPickerViewController_026cecd0;
    _objc_alloc_init();
    pcVar5 = local_40;
    local_a8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_128 = &cf_bOSVY;
    }
    else {
      local_128 = local_40;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setTitle__0269cef0,local_128);
    uVar6 = local_48;
    FUN_010a2838();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setSelectedCode__026ae550);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setCompletion__0269fdc8,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAllowsMultipleSelection__026ae558,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_wcr_presentPicker_from__026ae560,local_a8,local_38);
    _objc_storeStrong(&local_a8,0);
    local_9c = 0;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

