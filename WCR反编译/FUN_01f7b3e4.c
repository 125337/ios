// FUN_01f7b3e4 @ 01f7b3e4

void FUN_01f7b3e4(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long local_90;
  long local_50;
  long local_48 [3];
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_90 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_cellConfig);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_90 == 0;
  local_30 = local_90;
  if (bVar1) {
    local_90 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_valueForKey__0269d128,&cf_leftConfig);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_90;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  lVar2 = local_48[0];
  if (local_48[0] != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isMakeImageCenterWhenHaveDetail);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_48[0];
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_lineBreakMode);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_48[0];
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_numberOfLines);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

