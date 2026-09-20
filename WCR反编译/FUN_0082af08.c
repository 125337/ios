// FUN_0082af08 @ 0082af08

void FUN_0082af08(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd1d8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  _objc_getAssociatedObject(local_18,&DAT_028cd1d9);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pause_0269f2d8);
  }
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd1d6);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1d8,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1d9,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1da,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1db,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1d6,0,1);
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

