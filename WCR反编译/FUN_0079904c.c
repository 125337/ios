// FUN_0079904c @ 0079904c

void FUN_0079904c(undefined8 param_1)

{
  long lVar1;
  long local_30 [3];
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_0079e548(local_18);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028ccb1b);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_removeFromSuperview_026ca800);
    _objc_setAssociatedObject(local_18,&DAT_028ccb1b,0,1);
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

