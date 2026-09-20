// FUN_007fdec8 @ 007fdec8

void FUN_007fdec8(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double local_190;
  uint local_17c;
  cfstringStruct *local_178;
  ulong local_118;
  undefined *local_98;
  byte local_89;
  ulong local_88;
  ulong local_80;
  byte local_71;
  ulong local_70;
  byte local_61;
  ulong local_60;
  ulong local_58;
  byte local_49;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar2 = param_4 + 0x28;
  local_30 = param_4;
  local_28 = param_4;
  _objc_loadWeakRetained();
  local_38 = uVar2;
  if (uVar2 == 0) {
    local_3c = 1;
    goto LAB_007fe5b8;
  }
  _objc_setAssociatedObject(uVar2,&DAT_028ccee4,0,1);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_3c = 1;
    goto LAB_007fe5b8;
  }
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_findMainTableView_026a87e8);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_38;
  local_48 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_WCRefineToDo_headerReadyForLayou_026a87f0,uVar2);
  uVar2 = local_38;
  local_49 = (byte)uVar5;
  puVar3 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_118 = 0;
  }
  else {
    local_118 = local_38;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_118;
  local_61 = 0;
  local_71 = 0;
  bVar1 = false;
  if ((local_49 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_isViewLoaded_0269cde0);
    bVar1 = false;
    if ((local_118 & 1) != 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      bVar1 = uVar2 == 0;
      local_70 = uVar2;
    }
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if (bVar1) {
    _objc_setAssociatedObject(local_38,&DAT_028ccee5,0,1);
    local_3c = 1;
  }
  else {
    if ((local_49 & 1) == 0) {
      uVar2 = local_38;
      _objc_getAssociatedObject(local_38,&DAT_028ccee5);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_38;
      local_80 = uVar5;
      if ((long)uVar5 < 10) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,uVar5 + 1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar2,&DAT_028ccee5,puVar3,1);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_178 = *(cfstringStruct **)(param_4 + 0x20);
        if (local_178 == (cfstringStruct *)0x0) {
          local_178 = &cf_retry;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_WCRefineToDo_scheduleHeaderLayou_026a87f8,local_178);
        local_3c = 1;
        goto LAB_007fe598;
      }
      local_89 = 0;
      local_17c = 0;
      if (local_48 != 0) {
        uVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_tableHeaderView_0269ea08);
        _objc_retainAutoreleasedReturnValue();
        local_89 = 1;
        local_17c = 0;
        local_88 = uVar2;
        if (uVar2 == 0) {
          FUN_007f309c();
          local_17c = (uint)uVar2 ^ 1;
        }
      }
      if ((local_89 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      if ((local_17c & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        local_190 = param_3;
        if (param_3 <= 1.0) {
          local_190 = 1.0;
        }
        uVar7 = 0;
        uVar6 = 0;
        uVar8 = 0x4000000000000000;
        FUN_007f1484();
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,uVar7,local_190,uVar8,puVar3,PTR_s_initWithFrame__026ca6e8);
        puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
        local_98 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setTableHeaderView__0269ea10,local_98);
        _objc_storeStrong(&local_98,0);
      }
      uVar2 = local_38;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar2,&DAT_028ccee3,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_setAssociatedObject(local_38,&DAT_028ccee5,0,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_ensureCard_026a87d0);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_WCRefineToDo_layoutCard_026a87e0);
    local_3c = 0;
  }
LAB_007fe598:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
LAB_007fe5b8:
  _objc_storeStrong(&local_38,0);
  return;
}

