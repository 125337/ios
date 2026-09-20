// _WCRefineSaveMomentMediaFromCellView @ 005a6738

void _WCRefineSaveMomentMediaFromCellView(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined *local_40;
  long local_38;
  uint local_30;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_20 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elOX_dkQ_);
    local_30 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_005a69dc();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_count_0269cfe0);
    if (lVar2 != 0) {
      puVar3 = PTR_WCRefineMomentsMediaDownloader_026ce7a8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_initWithDataItem_cellView__026a56d0,local_20,local_18);
      lVar1 = local_38;
      local_68 = PTR___NSConcreteStackBlock_02578660;
      local_60 = 0xc2000000;
      local_5c = 0;
      local_58 = FUN_005a6b94;
      local_50 = &DAT_02579940;
      local_40 = puVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_startDownloadWithCompletion__026a56d8,&local_68);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_gSWlgSOX_vZSO);
    }
    local_30 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

