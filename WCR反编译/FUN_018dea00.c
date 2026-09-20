// FUN_018dea00 @ 018dea00

void FUN_018dea00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long local_150;
  cfstringStruct *local_108;
  undefined *local_d0;
  long local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  local_a8 = 0;
  _objc_storeStrong(&local_a8,param_2);
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_3);
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_4);
  lVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (((lVar1 == 0) ||
      (lVar1 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
      lVar1 == 0)) ||
     (lVar1 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_bc = 1;
  }
  else {
    lVar2 = 0;
    _WCRChatToolbarRefreshActions();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c8 = lVar1;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    local_98 = _WCRChatToolbarTitleKey;
    local_60 = local_a0;
    local_90 = _WCRChatToolbarIconKey;
    pcVar3 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    if (pcVar3 == (cfstringStruct *)0x0) {
      local_108 = &cf_icons_outlined_more_circle;
    }
    else {
      local_108 = local_b8;
    }
    local_58 = local_108;
    local_88 = _WCRChatToolbarActionKey;
    puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_wcr_custom_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_wcr_custom_,PTR_s_stringByAppendingString__0269d398);
    _objc_retainAutoreleasedReturnValue();
    local_80 = _WCRChatToolbarEnabledKey;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_78 = _WCRChatToolbarSourceKey;
    local_40 = &cf__u7b_IN;
    local_70 = _WCRChatToolbarCustomKindKey;
    local_38 = local_a8;
    local_68 = _WCRChatToolbarCustomPayloadKey;
    local_30 = local_b0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = puVar7;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_150 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_indexOfObjectPassingTest__026a27f8,
               &PTR___NSConcreteGlobalBlock_0258a128);
    lVar1 = local_c8;
    puVar4 = local_d0;
    if (local_150 == 0x7fffffffffffffff) {
      local_150 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_insertObject_atIndex__0269eac0,puVar4,local_150);
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar4);
    FUN_018ca37c();
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

