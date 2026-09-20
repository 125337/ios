// totalCacheStats @ 010c2440

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineMomentsMonitor::totalCacheStats(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  undefined *local_f0;
  ID local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_88 = 0;
  local_78 = 0x20000000;
  local_74 = 0x20;
  local_70 = 0;
  local_a8 = 0;
  local_98 = 0x20000000;
  local_94 = 0x20;
  local_90 = 0;
  local_c8 = 0;
  local_b8 = 0x20000000;
  local_b4 = 0x20;
  local_b0 = 0;
  local_108 = PTR___NSConcreteStackBlock_02578660;
  local_100 = 0xc2000000;
  local_fc = 0;
  local_f8 = FUN_010c2774;
  local_f0 = &DAT_025852c8;
  local_c0 = &local_c8;
  local_a0 = &local_a8;
  local_80 = &local_88;
  local_68 = param_2;
  local_60 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = param_1;
  local_e0 = &local_88;
  local_d8 = &local_a8;
  local_d0 = &local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_performIOTaskSync__026ae6f0,&local_108);
  local_58 = &cf_userCount;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_80[3]);
  _objc_retainAutoreleasedReturnValue();
  local_50 = &cf_itemCount;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_a0[3]);
  _objc_retainAutoreleasedReturnValue();
  local_48 = &cf_mediaArchiveCount;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c0[3]);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_40,&local_58,3);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_e8,0);
  __Block_object_dispose(&local_c8,8);
  __Block_object_dispose(&local_a8,8);
  __Block_object_dispose(&local_88,8);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

