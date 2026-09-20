// requestNotificationPermissionIfNeeded @ 00eb9bc0

/* Function Stack Size: 0x10 bytes */

void WCRefineBackgroundKeepAlive::requestNotificationPermissionIfNeeded(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UNUserNotificationCenter_026ce968,
             PTR_s_currentNotificationCenter_026a8548);
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_00eb9cbc;
  local_38 = &DAT_02581bd0;
  local_28 = puVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_getNotificationSettingsWithCompl_026a8558,&local_50);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

