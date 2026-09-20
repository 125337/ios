// FUN_00502cd0 @ 00502cd0

byte FUN_00502cd0(long param_1)

{
  undefined *puVar1;
  undefined8 local_28;
  long local_20;
  bool local_11;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  puVar1 = PTR_WCRefineMessageSyncRule_026ce708;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMessageSyncRule_026ce708,PTR_s_isPlainTextTypeKey__026a4558,local_28);
  local_11 = ((ulong)puVar1 & 1) == 0 && (local_20 == 1 || local_20 == 3);
  _objc_storeStrong(&local_28,0);
  return local_11 & 1;
}

