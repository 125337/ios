// FUN_019af634 @ 019af634

/* WARNING: Type propagation algorithm not settling */

void FUN_019af634(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long local_a8;
  long local_58;
  long local_50 [3];
  long local_38 [3];
  
  local_38[2] = 0;
  _objc_storeStrong(local_38 + 2,param_1);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_2);
  local_a8 = local_38[2];
  (*(code *)PTR__objc_msgSend_02578628)(local_38[2],PTR_s_valueForKey__0269d128,&cf_cellConfig);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = local_a8 == 0;
  local_38[0] = local_a8;
  if (bVar1) {
    local_a8 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_valueForKey__0269d128,&cf_leftConfig);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_a8;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  lVar2 = local_50[0];
  if (local_50[0] != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_isMakeImageCenterWhenHaveDetail);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_50[0];
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,5);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_lineBreakMode);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_50[0];
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar2,PTR_s_setValue_forKey__0269d300,puVar3,&cf_numberOfLines);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(local_50);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

