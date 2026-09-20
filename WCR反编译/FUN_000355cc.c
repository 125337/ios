// FUN_000355cc @ 000355cc

void FUN_000355cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  uVar1 = local_18;
  if (lVar2 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_removeObject__0269d678,local_20);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

