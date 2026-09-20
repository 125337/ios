// FUN_01bc12d4 @ 01bc12d4

void FUN_01bc12d4(long param_1)

{
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,*(undefined8 *)(param_1 + 0x20),
             _kWCRMessageSyncRuleKeyDailyStart);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,*(undefined8 *)(param_1 + 0x28),
             _kWCRMessageSyncRuleKeyDailyEnd);
  _objc_storeStrong(&local_20,0);
  return;
}

