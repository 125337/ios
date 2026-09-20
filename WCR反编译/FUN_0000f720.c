// FUN_0000f720 @ 0000f720

void FUN_0000f720(undefined8 param_1)

{
  long lVar1;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028c79f2);
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_removeFromSuperview_026ca800);
    _objc_setAssociatedObject(local_18,&DAT_028c79f2,0,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

