// FUN_00914990 @ 00914990

void FUN_00914990(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_logType_026aa0f8);
  if (lVar1 == 0) {
    puVar2 = PTR_WCNavigationMonitor_026cea60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_logType_026aa0f8);
    if (lVar1 == 3) {
      puVar2 = PTR_WCNavigationMonitor_026cea60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCNavigationMonitor_026cea60,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_updateLogs_026aa030);
  _objc_storeStrong(&local_20,0);
  return;
}

