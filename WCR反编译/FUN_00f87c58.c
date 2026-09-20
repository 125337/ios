// FUN_00f87c58 @ 00f87c58

void FUN_00f87c58(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    lVar2 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e7e);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (lVar2 == 0) {
      lVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isHidden_026ca768);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028e2e7e);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      lVar1 = local_18;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_alpha_026ca4d8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(lVar1,&DAT_028e2e7f,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHidden__026ca970,1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

