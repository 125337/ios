// FUN_005cd85c @ 005cd85c

void FUN_005cd85c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028cb778);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_cleanupWithReason__026a55c8,local_20);
    _objc_setAssociatedObject(local_18,&DAT_028cb778,0,1);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

