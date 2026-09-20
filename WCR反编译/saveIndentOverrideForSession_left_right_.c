// saveIndentOverrideForSession:left:right: @ 00ecc0e4

/* Function Stack Size: 0x28 bytes */

void WCRefineChatIndentOverrideHelper::saveIndentOverrideForSession_left_right_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long_long lVar4;
  undefined *puVar5;
  undefined *local_a8;
  undefined *local_80;
  undefined4 local_74;
  long_long local_70;
  long_long local_68;
  long local_60;
  SEL local_58;
  ID local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  local_58 = param_2;
  local_50 = param_1;
  _objc_storeStrong(&local_60,param_3);
  lVar1 = local_60;
  local_70 = param_5;
  local_68 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_74 = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_a8 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_mutableCopy_0269d8a0);
    local_80 = local_a8;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = &cf_left;
    lVar4 = local_68;
    FUN_00ecc428(local_68);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_numberWithInteger__0269e080,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = &cf_right;
    lVar4 = local_70;
    local_38 = puVar2;
    FUN_00ecc428(local_70,0x32);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithInteger__0269e080,lVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,local_60);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_copy_0269d150);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_storeStrong(&local_80,0);
    local_74 = 0;
  }
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

