// FUN_00265c80 @ 00265c80

void FUN_00265c80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_a0;
  long local_60;
  long local_58;
  long local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_1);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_2);
  lVar1 = local_58;
  FUN_00265ff4();
  _objc_retainAutoreleasedReturnValue();
  local_60 = lVar1;
  FUN_00263fb4();
  _objc_retainAutoreleasedReturnValue();
  local_a0 = lVar1;
  if (lVar1 == 0) {
    local_a0 = local_60;
  }
  _objc_storeStrong(&local_60,local_a0);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if ((local_50 != 0) &&
     (lVar2 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
     lVar1 = local_50, lVar2 != 0)) {
    local_38 = &cf_url;
    local_28 = local_60;
    local_30 = &cf_eventConfigDict;
    local_48 = &cf_forbidForward;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_48,1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_20 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
    _objc_retainAutoreleasedReturnValue();
    FUN_002661a4(lVar1,&cf_saveImage);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

