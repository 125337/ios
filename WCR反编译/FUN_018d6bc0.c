// FUN_018d6bc0 @ 018d6bc0

void FUN_018d6bc0(long param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
  _objc_retainAutoreleasedReturnValue();
  FUN_018d6c8c();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

