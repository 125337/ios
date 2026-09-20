// FUN_007b7b5c @ 007b7b5c

void FUN_007b7b5c(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *local_a0;
  long local_98;
  undefined4 local_90;
  long local_80;
  long local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_4);
  lVar1 = local_78;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  local_80 = lVar1;
  if (lVar1 == 0) {
    local_70 = (undefined *)0x0;
    local_90 = 1;
  }
  else {
    lVar1 = local_78;
    _objc_getAssociatedObject(local_78,DAT_026f4658);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_68 = &cf_offset;
    local_98 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_contentOffset_0269dd18);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueWithCGPoint__0269e328);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = &cf_insetTop;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_adjustedContentInset_0269dcd0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = &cf_contentHeight;
    local_40 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_contentSize_026ca5a0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf_tries;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_007b881c(local_78,local_98);
    if (param_3 < 8.988465674311579e+307) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (param_3,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_stripScreenY);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar3;
    local_90 = 1;
    _objc_storeStrong(&local_a0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

