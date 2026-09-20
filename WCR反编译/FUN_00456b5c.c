// FUN_00456b5c @ 00456b5c

void FUN_00456b5c(undefined8 param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  bVar2 = true;
  if (local_18 != 0) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026e0380);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar3);
  }
  lVar3 = local_18;
  uVar1 = DAT_026e0380;
  if (!bVar2) {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(lVar3,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

