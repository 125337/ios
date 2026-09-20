// FUN_005bedd4 @ 005bedd4

void FUN_005bedd4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1;
  local_20 = param_1;
  local_18 = param_1;
  FUN_005bed60();
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(lVar1);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_objectForKeyedSubscript__0269d098,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_1 + 0x28);
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == lVar3) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_removeObjectForKey__0269d700,*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrN_eSb);
  }
  _objc_sync_exit(lVar1);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

