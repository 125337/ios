// FUN_006527fc @ 006527fc

void FUN_006527fc(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  if (local_18 + -1 == 0) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      FUN_00656f10();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      _objc_sync_enter();
      if (param_3 == 0) {
        FUN_00656f10();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(lVar2);
      }
      else {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
                   param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        FUN_00656f10();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _objc_sync_exit(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
  }
  else {
    FUN_00656f84(local_18 + -1,local_20,param_3);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

