// FUN_00759b90 @ 00759b90

void FUN_00759b90(long param_1)

{
  uint uVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char *local_38;
  long local_30;
  long local_28;
  
  local_30 = param_1;
  local_28 = param_1;
  if (DAT_028cc818 == (char *)0x0) {
    pcVar2 = "WCWatchNotificationMgr";
    _objc_getClass();
    DAT_028cc818 = pcVar2;
  }
  pcVar2 = DAT_028cc818;
  _objc_retainAutoreleaseReturnValue();
  FUN_00744160();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_dismissYoWindow_026a7d58);
  if (((ulong)pcVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissYoWindow_026a7d58);
  }
  uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
  FUN_00744988();
  if ((uVar1 & 1) == 0) {
    puVar7 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if (((ulong)puVar8 & 1) != 0) {
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar6;
      FUN_00743f78();
      _objc_retainAutoreleasedReturnValue();
      FUN_0075a080(uVar10);
      (*(code *)PTR__objc_release_02578630)(uVar9);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    FUN_0075a2dc(*(undefined8 *)(param_1 + 0x28));
  }
  else {
    pcVar3 = &cf_WCRefineKeywordAlertHistoryViewController;
    _NSClassFromString();
    pcVar4 = &cf_openHistoryRecordAndLocate_autoRemoveOnSuccess_;
    _NSSelectorFromString();
    if ((pcVar3 == (cfstringStruct *)0x0) ||
       (pcVar5 = pcVar3,
       (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar5 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el_MO_mo_);
    }
    else {
      puVar7 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar7);
      if (((ulong)puVar8 & 1) != 0) {
        uVar10 = *(undefined8 *)(param_1 + 0x20);
        uVar6 = *(undefined8 *)(param_1 + 0x28);
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,PTR_s_objectForKeyedSubscript__0269d098,&cf_senderUserName);
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar6;
        FUN_00743f78();
        _objc_retainAutoreleasedReturnValue();
        FUN_0075a080(uVar10);
        (*(code *)PTR__objc_release_02578630)(uVar9);
        (*(code *)PTR__objc_release_02578630)(uVar6);
      }
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,*(undefined8 *)(param_1 + 0x28),0);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

