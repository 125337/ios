// keywordAlertHistoryRecordsDidChange: @ 01b08788

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void WCRefineKeywordAlertHistoryCardViewController::keywordAlertHistoryRecordsDidChange_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID local_80;
  undefined1 local_71;
  ID local_70;
  byte local_61;
  ID local_60;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30 [2];
  SEL local_20;
  ID local_18;
  
  local_30[1] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_30 + 1,param_3);
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (((ulong)puVar3 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = local_18;
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0xc2000000;
    local_44 = 0;
    local_40 = FUN_01b08be4;
    local_38 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_30[0] = IVar5;
    _dispatch_async(puVar4,&local_50);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_54 = 1;
    _objc_storeStrong(local_30,0);
  }
  else {
    IVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isViewLoaded_0269cde0);
    local_61 = 0;
    local_71 = 0;
    bVar2 = true;
    uVar1 = (IVar5 & 1) != 0;
    if ((bool)uVar1) {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      bVar2 = IVar5 == 0;
      local_71 = uVar1;
      local_70 = IVar5;
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar1 = local_71;
    }
    local_71 = uVar1;
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if (bVar2) {
      local_54 = 1;
    }
    else {
      IVar5 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_suppressRecordsChangeReload_026be8e8);
      if ((IVar5 & 1) == 0) {
        IVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_engine_026be8d0);
        _objc_retainAutoreleasedReturnValue();
        IVar6 = IVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar5);
        if ((IVar6 & 1) == 0) {
          IVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recomputeDisplayedRecords_026be8f8);
          _objc_retainAutoreleasedReturnValue();
          local_80 = IVar5;
          (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_count_0269cfe0);
          IVar6 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_displayedRecords_026be900);
          _objc_retainAutoreleasedReturnValue();
          IVar7 = IVar6;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(IVar6);
          if (IVar7 < IVar5) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentPage__0269f4f0,0);
          }
          IVar5 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_multiSelectMode_026be908);
          if ((IVar5 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setMultiSelectMode__026be910,0);
            IVar5 = local_18;
            (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_selectedIndexes_026b2a08);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(IVar5);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reloadData_0269e400);
          _objc_storeStrong(&local_80,0);
          local_54 = 0;
        }
        else {
          local_54 = 1;
        }
      }
      else {
        local_54 = 1;
      }
    }
  }
  _objc_storeStrong(local_30 + 1,0);
  return;
}

