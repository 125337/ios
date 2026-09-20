// FUN_011310c8 @ 011310c8

void FUN_011310c8(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined *local_78;
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
  local_78 = (undefined *)0x0;
  _objc_storeStrong(&local_78,param_2);
  puVar2 = local_78;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    local_70 = (undefined *)0x0;
    local_7c = 1;
    goto LAB_01131680;
  }
  puVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_88 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_90 = puVar1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_90;
  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_70 = (undefined *)0x0;
    local_7c = 1;
  }
  else {
    puVar2 = local_88;
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_text);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isEqualToString__0269ccc8,&cf_invite);
      if (((ulong)puVar2 & 1) == 0) {
        local_70 = (undefined *)0x0;
        local_7c = 1;
        goto LAB_01131660;
      }
    }
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
    if (puVar2 == (undefined *)0x0) {
      puVar1 = PTR__OBJC_CLASS___NSUUID_026ce668;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_98;
      local_98 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = &cf_id;
    local_48 = local_98;
    local_60 = &cf_type;
    local_40 = local_88;
    local_58 = &cf_payload;
    local_38 = local_90;
    local_50 = &cf_addedAt;
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_numberWithLongLong__0269d808,(long)(param_1 * 1000.0));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_48,&local_68,4);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a0 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_addedAt);
    _objc_retainAutoreleasedReturnValue();
    local_a8 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_respondsToSelector__026ca818,PTR_s_longLongValue_0269d5e0);
    if (((ulong)puVar2 & 1) != 0) {
      puVar2 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_longLongValue_0269d5e0);
      if (0 < (long)puVar2) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_a8,&cf_addedAt);
      }
    }
    puVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_remark);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    FUN_01130f58();
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
    if (puVar2 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_b0,&cf_remark);
    }
    puVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_copy_0269d150);
    local_7c = 1;
    local_70 = puVar2;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
LAB_01131660:
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_88,0);
LAB_01131680:
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_70);
  return;
}

