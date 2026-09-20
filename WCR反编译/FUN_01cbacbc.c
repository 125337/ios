// FUN_01cbacbc @ 01cbacbc

void FUN_01cbacbc(long param_1)

{
  undefined8 uVar1;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_firstObject_0269d1f8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_applyDisguiseFriendUsername__026c3428);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  _objc_storeStrong(&local_20,0);
  return;
}

