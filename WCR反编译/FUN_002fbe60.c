// FUN_002fbe60 @ 002fbe60

void FUN_002fbe60(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  long local_58;
  uint local_4c;
  long local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  undefined *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  if ((local_40 == 0) || (local_48 == 0)) {
    local_4c = 1;
  }
  else {
    lVar1 = local_40;
    FUN_002fbd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    local_58 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSValue_026ce1f0,PTR_s_valueWithNonretainedObject__026a1fc0,
               local_48);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_58;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,puVar2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    if (lVar1 == 0) {
      local_38 = &cf_hidden;
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isHidden_026ca768);
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithBool__0269ce60,lVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_30 = &cf_alpha;
      local_28 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_alpha_026ca4d8);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_20 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_28,&local_38,2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_60);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_4c = (uint)(lVar1 != 0);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

