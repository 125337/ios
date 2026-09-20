// FUN_007bd624 @ 007bd624

void FUN_007bd624(undefined8 param_1)

{
  long lVar1;
  long local_30 [3];
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_007b7ab4(0);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026f4680);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_setAssociatedObject(local_18,DAT_026f4680,0,1);
  }
  _objc_setAssociatedObject(local_18,DAT_026f46a8,0,1);
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

