// FUN_0036515c @ 0036515c

void FUN_0036515c(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong local_88;
  bool local_79;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  undefined1 local_59;
  ulong local_58;
  byte local_49;
  undefined *local_48;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  ulong local_28;
  
  puVar4 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar4,param_1);
  if (local_30 == 0) {
    local_28 = 0;
    local_34 = 1;
  }
  else {
    FUN_0037fc28();
    if (((ulong)puVar4 & 1) == 0) {
      local_40 = 0;
      local_48 = PTR_s_wcrGrouping_findMainTableView_026a2848;
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,
                 PTR_s_wcrGrouping_findMainTableView_026a2848);
      if ((uVar5 & 1) != 0) {
        uVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,local_48);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_40;
        local_40 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      local_59 = 0;
      uVar1 = local_40 != 0;
      local_49 = false;
      if ((bool)uVar1) {
        uVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_window_026cabf0);
        _objc_retainAutoreleasedReturnValue();
        local_59 = uVar1;
        local_58 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar1 = local_59;
        local_49 = uVar5 == 0;
      }
      local_59 = uVar1;
      uVar5 = local_30;
      puVar7 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar7);
      uVar6 = local_30;
      if ((uVar5 & 1) != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_68 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_79 = false;
        bVar2 = local_79;
        local_70 = uVar6;
        bVar3 = true;
        if ((local_49 & 1) == 0) {
          bVar2 = uVar6 != 0;
          bVar3 = false;
          if (bVar2) {
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_topViewController_0269e588);
            _objc_retainAutoreleasedReturnValue();
            local_78 = uVar6;
            bVar3 = uVar6 != local_68;
          }
        }
        local_49 = bVar3;
        local_79 = bVar2;
        if (local_79 != false) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        _objc_storeStrong(&local_70);
        _objc_storeStrong(&local_68,0);
      }
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      FUN_00373608(local_30);
      puVar7 = PTR_s_wcrGrouping_snapshotForTableView_026a2a50;
      local_88 = 0;
      if ((local_40 == 0) ||
         (uVar5 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_30,PTR_s_respondsToSelector__026ca818,
                    PTR_s_wcrGrouping_snapshotForTableView_026a2a50), (uVar5 & 1) == 0)) {
        uVar6 = local_30;
        FUN_003bed8c();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_88;
        local_88 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      else {
        uVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,puVar7,local_40);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_88;
        local_88 = uVar6;
        (*(code *)PTR__objc_release_02578630)(uVar5);
      }
      uVar5 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      if (((local_49 & 1) != 0) && (local_88 != 0)) {
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_30;
        _WCRGroupingState();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar5);
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      uVar5 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar5;
      local_34 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_40,0);
    }
    else {
      uVar5 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      uVar5 = local_30;
      _WCRGroupingState();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_28 = uVar6;
      (*(code *)PTR__objc_release_02578630)(uVar5);
      local_34 = 1;
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

