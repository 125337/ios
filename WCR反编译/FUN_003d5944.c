// FUN_003d5944 @ 003d5944

void FUN_003d5944(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == 0) ||
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_24 = 1;
  }
  else {
    FUN_003c26ac();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_18,local_20);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_30,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

