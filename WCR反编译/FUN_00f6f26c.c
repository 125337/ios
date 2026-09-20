// FUN_00f6f26c @ 00f6f26c

void FUN_00f6f26c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined *local_f8;
  char *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  ulong local_a0;
  undefined *local_98;
  undefined *local_90;
  ulong local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  byte local_49;
  undefined *local_48;
  undefined *local_40;
  undefined4 local_34;
  ulong local_30;
  undefined *local_28;
  
  local_28 = (undefined *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  uVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     uVar3 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbmo_);
    local_34 = 1;
  }
  else {
    local_49 = 0;
    local_59 = 0;
    local_69 = 0;
    local_79 = 0;
    bVar1 = local_28 == (undefined *)0x0;
    if (bVar1) {
      local_f8 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_f8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_f8;
      FUN_00f71308();
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_f8;
    }
    else {
      local_f8 = local_28;
    }
    local_79 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_f8;
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if (local_40 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      local_34 = 1;
    }
    else {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
      puVar4 = PTR_WCRForwardToGroupPickerViewController_026cebc0;
      local_88 = uVar3;
      _objc_alloc();
      uVar3 = local_88;
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_00f7154c;
      local_a8 = &DAT_02583588;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = local_40;
      local_a0 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithCompletion__026aca00,&local_c0);
      local_c8 = (char *)0x0;
      pcVar5 = "MMUINavigationController";
      local_90 = puVar4;
      _objc_getClass();
      if (pcVar5 == (char *)0x0) {
        pcVar6 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar5 = local_c8;
        local_c8 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        pcVar6 = local_c8;
        local_c8 = pcVar5;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_c8,1);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_88,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

