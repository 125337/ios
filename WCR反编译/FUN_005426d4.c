// FUN_005426d4 @ 005426d4

void FUN_005426d4(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  long local_18;
  
  plVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar2,param_1);
  lVar1 = local_18;
  if (local_18 != 0) {
    FUN_005426b8();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar1,plVar2,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

