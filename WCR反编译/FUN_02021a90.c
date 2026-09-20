// FUN_02021a90 @ 02021a90

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_02021a90(double param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double local_200;
  undefined1 *local_1b0;
  undefined *local_138;
  undefined1 *local_128;
  undefined1 *local_118;
  undefined1 *local_108;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  ulong local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined4 local_ac;
  undefined *local_a8;
  undefined *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined1 *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_a8,param_2);
  puVar3 = local_a8;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_a0 = (undefined *)0x0;
    local_ac = 1;
  }
  else {
    puVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatRoomSink);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0201f9c8();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_a8;
    local_b8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_privateChatSink);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    FUN_0201f9c8();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_a8;
    local_c0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_pageRule);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_d0 = (ulong)(puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
    puVar3 = local_a8;
    local_c8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_selectedSessions);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_02021020();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar4 = local_b8;
    FUN_02021544(local_b8,local_c0,local_d0,local_d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_a8;
    local_e0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_name)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_020216e0();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    bVar1 = ((ulong)puVar4 & 1) == 0;
    if (bVar1) {
      local_108 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_118 = local_1b0;
    }
    else {
      local_1b0 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_id)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_f8 = local_1b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = local_1b0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_118);
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_98 = &cf_id;
    local_60 = local_f0;
    local_90 = &cf_name;
    local_58 = local_e8;
    local_88 = &cf_chatRoomSink;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_b8);
    _objc_retainAutoreleasedReturnValue();
    local_80 = &cf_privateChatSink;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_c0);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_pageRule;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_d0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = &cf_selectedSessions;
    local_38 = local_d8;
    local_68 = &cf_updatedAt;
    puVar7 = local_a8;
    local_40 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_objectForKeyedSubscript__0269d098);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = param_1 <= 0.0;
    if (bVar1) {
      local_138 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_200 = param_1;
    }
    else {
      local_128 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a8,PTR_s_objectForKeyedSubscript__0269d098,&cf_updatedAt);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_200 = param_1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_200,puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_138);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_128);
    }
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_ac = 1;
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
    _objc_storeStrong(&local_d8,0);
  }
  _objc_storeStrong(&local_a8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_a0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

