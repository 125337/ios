// wcr_finishSharedJoinTimePicker: @ 01dca7d4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSessionStatsViewController::wcr_finishSharedJoinTimePicker_
          (WCRefineSessionStatsViewController *this,ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 in_d0;
  undefined *local_148;
  undefined *local_130;
  undefined8 local_118;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined8 local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  puVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
  local_48 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  else {
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_topViewController_0269e588);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_48;
    local_48 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_48;
  _objc_getAssociatedObject(local_48,DAT_028c69c0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_48;
  local_58 = puVar3;
  _objc_getAssociatedObject(local_48,DAT_028c69c8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = local_50;
  puVar2 = PTR__OBJC_CLASS___UIDatePicker_026ce060;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIDatePicker_026ce060,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_71 = 0;
  if (((ulong)puVar3 & 1) == 0) {
    local_118 = 0;
  }
  else {
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_118 = in_d0;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  local_68 = local_118;
  puVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_presentingViewController_026a0db0);
  _objc_retainAutoreleasedReturnValue();
  local_89 = 0;
  local_99 = 0;
  local_130 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_navigationController_0269d458);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 1;
    local_88 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_99 = 1;
    local_148 = puVar1;
    if (puVar1 == (undefined *)0x0) {
      local_148 = local_48;
    }
    local_130 = local_148;
    local_98 = puVar1;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_80 = local_130;
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_58;
  puVar3 = local_80;
  local_d8 = PTR___NSConcreteStackBlock_02578660;
  local_d0 = 0xc2000000;
  local_cc = 0;
  local_c8 = FUN_01dcadd0;
  local_c0 = &DAT_02582d98;
  local_a8 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  puVar1 = local_60;
  local_b8 = puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_dismissViewControllerAnimated_co_0269cf98,1,&local_d8);
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

