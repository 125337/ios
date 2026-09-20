// FUN_01bc0360 @ 01bc0360

void FUN_01bc0360(long param_1)

{
  cfstringStruct *local_40;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_40 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_40 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_setObject_forKeyedSubscript__0269d248,local_40,
             _kWCRMessageSyncRuleKeyFormat);
  _objc_storeStrong(&local_20,0);
  return;
}

