// FUN_019765ac @ 019765ac

void FUN_019765ac(long param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  lVar2 = *(long *)(param_1 + 0x20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_userInterfaceStyle_026cabc8);
  (**(code **)(lVar2 + 0x10))(lVar2,lVar1 == 2);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(lVar2);
  return;
}

