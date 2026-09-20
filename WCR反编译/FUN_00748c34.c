// FUN_00748c34 @ 00748c34

void FUN_00748c34(double param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_88;
  int local_7c;
  undefined4 local_78;
  ulong local_68;
  ulong local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  ulong local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_60 = 0;
  _objc_storeStrong(&local_60,param_2);
  uVar1 = local_60;
  FUN_00748910(local_60,0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (uVar1 = local_68, FUN_0074b910(), (uVar1 & 1) != 0)) {
    local_78 = 1;
  }
  else {
    uVar1 = local_60;
    FUN_00748ad4(local_60,&cf_m_uiCreateTime);
    local_7c = (int)uVar1;
    if (local_7c == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_7c = (int)param_1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    local_58 = &cf_username;
    local_40 = local_68;
    local_50 = &cf_createTime;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,local_7c);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = &cf_recordedAt;
    puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
    local_38 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar2,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
    _objc_retainAutoreleasedReturnValue();
    local_88 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)();
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar3;
    _objc_sync_enter();
    FUN_0074a974();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    _objc_sync_exit(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_88,0);
    local_78 = 0;
  }
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

