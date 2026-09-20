// FUN_00223e8c @ 00223e8c

void FUN_00223e8c(double param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = local_18;
  if (local_18 != 0) {
    if (param_1 <= 0.0) {
      _objc_setAssociatedObject(local_18,&DAT_028c91d0,0,1);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028c91d0,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

