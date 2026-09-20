// FUN_0082e1c0 @ 0082e1c0

void FUN_0082e1c0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined1 local_2d;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd1df);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_20 = uVar1;
  _objc_getAssociatedObject(local_18,&DAT_028cd1e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_2d = (undefined1)uVar1;
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pause_0269f2d8);
  }
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cd1d5);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperlayer_026ca7f8);
  _objc_setAssociatedObject(local_18,&DAT_028cd1df,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1e0,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1e1,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1e2,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028cd1d5,0,1);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

