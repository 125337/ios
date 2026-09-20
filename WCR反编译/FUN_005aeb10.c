// FUN_005aeb10 @ 005aeb10

void FUN_005aeb10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  code *local_90;
  undefined *local_88;
  ulong local_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined *local_68;
  undefined8 local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSgSW);
    local_48 = 1;
  }
  else {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar1;
    FUN_0059d260(uVar1,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_58 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_58, (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_WCRefine_openForwardMomentToChat_026a57e0,local_38);
      local_48 = 1;
    }
    else {
      uVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cb77f);
      _objc_retainAutoreleasedReturnValue();
      local_60 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_cancelDownload_026a5698);
      puVar2 = PTR_WCRefineMomentsMediaDownloader_026ce7a8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_initWithDataItem_cellView__026a56d0,local_38,local_28);
      local_68 = puVar2;
      _objc_setAssociatedObject(local_28,&DAT_028cb77f,puVar2,1);
      _objc_initWeak(auStack_70,local_28);
      puVar2 = local_68;
      local_a0 = PTR___NSConcreteStackBlock_02578660;
      local_98 = 0xc2000000;
      local_94 = 0;
      local_90 = FUN_005cf0c8;
      local_88 = &DAT_0257e348;
      _objc_copyWeak(auStack_78,auStack_70);
      uVar1 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_80 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_startDownloadWithCompletion__026a56d8,&local_a0);
      _objc_storeStrong(&local_80);
      _objc_destroyWeak(auStack_78);
      _objc_destroyWeak(auStack_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

