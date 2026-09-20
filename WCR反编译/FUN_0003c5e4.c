// FUN_0003c5e4 @ 0003c5e4

void FUN_0003c5e4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_30 = 1;
  }
  else {
    FUN_0003df34();
    _objc_retainAutoreleasedReturnValue();
    local_38 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_objectForKeyedSubscript__0269d098,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeObjectForKey__0269d700,local_20);
    }
    lVar2 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar2;
    local_30 = 1;
    _objc_storeStrong(&local_40);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

