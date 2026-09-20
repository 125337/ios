// wcr_rateLimitAllowsKickInRoom: @ 00ed9ac4

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefineChatRoomKickHelper::wcr_rateLimitAllowsKickInRoom_
          (WCRefineChatRoomKickHelper *this,ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 in_d0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 local_5c;
  ID local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  byte local_31;
  undefined8 local_30;
  long *local_28;
  
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_28 = &DAT_028e2a58;
  local_30 = 0;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02581e20);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_trimmedString__0269ec98,local_50);
  _objc_retainAutoreleasedReturnValue();
  local_58 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_31 = 0;
    local_5c = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar1 = DAT_028e2a50;
    local_68 = in_d0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(puVar1);
    puVar4 = DAT_028e2a50;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e2a50,PTR_s_objectForKeyedSubscript__0269d098,local_58);
    _objc_retainAutoreleasedReturnValue();
    local_70 = puVar4;
    if (puVar4 == (undefined1 *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_70;
      local_70 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e2a50,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,local_58);
    }
    puVar4 = local_70;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc0000000;
    local_9c = 0;
    local_98 = FUN_00ed9f3c;
    local_90 = &DAT_02581e40;
    local_88 = local_68;
    puVar3 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithBlock__026ab6e0,&local_a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_filterUsingPredicate__026ab6e8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_count_0269cfe0);
    puVar4 = local_70;
    local_31 = puVar5 < (undefined1 *)((long)&MACH_HEADER.flags + 1);
    if ((bool)local_31) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    local_5c = 1;
    _objc_storeStrong(&local_70,0);
    _objc_sync_exit(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  return local_31 & 1;
}

