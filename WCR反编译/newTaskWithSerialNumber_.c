// newTaskWithSerialNumber: @ 014b3260

/* Function Stack Size: 0x18 bytes */

ID WCRefineScheduledTask::newTaskWithSerialNumber_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ID IVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ID local_f8;
  unsigned_long_long local_f0;
  SEL local_e8;
  ID local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = param_3;
  local_e8 = param_2;
  local_e0 = param_1;
  FUN_014b3828();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_components_fromDate__026a44c0,0x260);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = IVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_e0;
  local_d8 = &cf_id;
  puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = &cf_name;
  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_80 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__eNR);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = &cf_enabled;
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_78 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = &cf_contentMode;
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = &cf_scheduleMode;
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_68 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
  _objc_retainAutoreleasedReturnValue();
  local_b0 = &cf_dayOfMonth;
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_60 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_a8 = &cf_weekday;
  IVar10 = local_f8;
  local_58 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_weekday_026abdb0);
  FUN_014b389c();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_numberWithInteger__0269e080,IVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_a0 = &cf_hour;
  IVar10 = local_f8;
  local_50 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_hour_026a44c8);
  (*(code *)PTR__objc_msgSend_02578628)(puVar11,PTR_s_numberWithInteger__0269e080,IVar10);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_98 = &cf_minute;
  IVar10 = local_f8;
  local_48 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_minute_026a44d0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar12,PTR_s_numberWithInteger__0269e080,IVar10);
  _objc_retainAutoreleasedReturnValue();
  local_90 = &cf_intervalHours;
  puVar13 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  local_88 = &cf_intervalMinutes;
  puVar14 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x1e);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar14;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_80,&local_d8,0xb);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_normalizedTask__026af468);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return IVar2;
}

