// recordAutoKickHitForRoom:user:windowHours: @ 00ed7c8c

/* Function Stack Size: 0x28 bytes */

long_long __thiscall
WCRefineChatRoomKickHelper::recordAutoKickHitForRoom_user_windowHours_
          (WCRefineChatRoomKickHelper *this,ID param_1,SEL param_2,ID param_3,ID param_4,
          long_long param_5)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  double in_d0;
  double local_130;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  double local_d8;
  double local_d0;
  undefined1 *local_c8;
  undefined *local_c0 [3];
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  double local_90;
  double local_88;
  undefined4 local_7c;
  undefined1 *local_78;
  long_long local_70;
  undefined8 local_68;
  undefined8 local_60;
  SEL local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined1 *local_28;
  
  local_60 = 0;
  local_58 = param_2;
  local_50 = (undefined1 *)param_1;
  _objc_storeStrong(&local_60,param_3);
  local_68 = 0;
  _objc_storeStrong(&local_68,param_4);
  puVar1 = local_50;
  local_70 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_wcr_hitKeyForRoom_user__026ab6d8,local_60,local_68);
  _objc_retainAutoreleasedReturnValue();
  local_78 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if ((undefined1 *)((long)&MACH_HEADER.magic + 2) < puVar1) {
    puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if ((long)local_70 < 1) {
      local_130 = 0.0;
    }
    else {
      local_130 = (double)(long)local_70 * 3600.0;
    }
    local_90 = local_130;
    puVar1 = local_50;
    local_88 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcr_store_026ab6d0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = (undefined1 *)0x0;
    local_98 = puVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(puVar1);
    puVar3 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_hits)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_c0[0] = (undefined *)0x0;
    local_a8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_objectForKeyedSubscript__0269d098,local_78);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar3 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_c0[0];
      local_c0[0] = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      puVar3 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_mutableCopy_0269d8a0);
      puVar2 = local_c0[0];
      local_c0[0] = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_c0[0];
    if (0.0 < local_90) {
      local_d8 = local_88 - local_90;
      local_f8 = PTR___NSConcreteStackBlock_02578660;
      local_f0 = 0xc0000000;
      local_ec = 0;
      local_e8 = FUN_00ed8290;
      local_e0 = &DAT_02581e00;
      puVar4 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
      local_d0 = local_d8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithBlock__026ab6e0,&local_f8
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_filterUsingPredicate__026ab6e8);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    puVar2 = local_c0[0];
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar4 = local_c0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_count_0269cfe0);
    puVar2 = local_c0[0];
    if (section_000000b8.segname < puVar4) {
      puVar4 = local_c0[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_count_0269cfe0);
      local_40 = puVar4 + -200;
      local_38 = 0;
      local_30 = 0;
      local_28 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_removeObjectsInRange__0269dad0,0,local_40);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_setObject_forKeyedSubscript__0269d248,local_c0[0],local_78);
    puVar2 = local_c0[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_c0[0],PTR_s_count_0269cfe0);
    local_a0 = puVar2;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(local_c0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_sync_exit(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_wcr_saveStore_026ab6f0);
    local_48 = local_a0;
    local_7c = 1;
    _objc_storeStrong(&local_98,0);
  }
  else {
    local_48 = (undefined1 *)0x0;
    local_7c = 1;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  return (long_long)local_48;
}

