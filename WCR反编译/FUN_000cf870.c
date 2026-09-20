// FUN_000cf870 @ 000cf870

long FUN_000cf870(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  _objc_getAssociatedObject(local_20,&DAT_028c829c);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 == 0) {
    lVar2 = local_20;
    FUN_000cff54();
    lVar1 = local_20;
    local_18 = lVar2;
    if (lVar2 != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028c829c,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_integerValue_026ca750);
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

