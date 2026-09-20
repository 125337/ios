// FUN_000166ac @ 000166ac

void FUN_000166ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  undefined *local_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [15];
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  puVar3 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_40;
    local_40 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  if (local_40 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_Qegb);
    local_50 = 1;
  }
  else {
    puVar3 = PTR_WCRAIGroupAnalysisDatePickerController_026ce0c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRAIGroupAnalysisDatePickerController_026ce0c0,PTR_s_new_0269d288);
    pcVar4 = local_30;
    local_58 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    local_100 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_100 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_100;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_71 = 0;
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_120 = &cf___;
    }
    else {
      local_120 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_copy_0269d150);
      local_71 = 1;
      local_70 = local_120;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_120;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    _objc_initWeak(auStack_80,local_28);
    local_b8 = PTR___NSConcreteStackBlock_02578660;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_00020cac;
    local_a0 = &DAT_02578f50;
    _objc_copyWeak(auStack_88,auStack_80);
    pcVar1 = local_60;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar4 = local_68;
    local_98 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setOnConfirm__0269d298,&local_b8);
    puVar3 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_initWithRootViewController__0269d2a0,local_58);
    local_c0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setModalPresentationStyle__0269d2a8,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_c0,1,0);
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_98,0);
    _objc_destroyWeak(auStack_88);
    _objc_destroyWeak(auStack_80);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    local_50 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

