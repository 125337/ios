// FUN_00128780 @ 00128780

void FUN_00128780(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  lVar1 = DAT_028c8568;
  if ((lVar2 != 0) && (DAT_028c8568 != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c8568,PTR_s_removeObject__0269d678,local_18);
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

