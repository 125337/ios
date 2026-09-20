// FUN_00eee964 @ 00eee964

void FUN_00eee964(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long local_b0;
  undefined *local_a8;
  undefined4 local_9c;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  long local_48;
  long local_40;
  undefined *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_78 = 0;
  _objc_storeStrong(&local_78,param_1);
  local_80 = 0;
  _objc_storeStrong(&local_80,param_2);
  local_88 = 0;
  _objc_storeStrong(&local_88,param_3);
  lVar1 = local_78;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_80;
  local_90 = lVar1;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_90;
  local_98 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if ((lVar1 == 0) ||
     (lVar1 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_70 = (undefined *)0x0;
    local_9c = 1;
  }
  else {
    local_68 = &cf_title;
    local_48 = local_98;
    local_60 = &cf_action;
    local_40 = local_90;
    local_58 = &cf__wcrEnabled;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = &cf__wcrSource;
    local_30 = &cf_lQcS;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar1 = local_88;
    FUN_00eee23c();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_icon);
    }
    puVar3 = local_a8;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar3;
    local_9c = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
  }
  _objc_storeStrong(&local_98);
  _objc_storeStrong(&local_90,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

