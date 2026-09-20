// FUN_0017fc34 @ 0017fc34

void FUN_0017fc34(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  FUN_0017fd94();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,&DAT_028c8900,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

