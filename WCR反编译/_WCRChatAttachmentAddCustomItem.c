// _WCRChatAttachmentAddCustomItem @ 00ec2b68

void _WCRChatAttachmentAddCustomItem
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  cfstringStruct *local_170;
  cfstringStruct *local_130;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined4 local_bc;
  cfstringStruct *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined *local_60;
  long local_58;
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
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_a0;
  local_a0 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar1 = local_a8;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_a8;
  local_a8 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar1 = local_b0;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_b0;
  local_b0 = lVar1;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar2 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
  if (((lVar2 == 0) ||
      (lVar2 = local_a8, (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0),
      lVar2 == 0)) ||
     (lVar2 = local_b0, (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_bc = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSUUID_026ce668;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    FUN_00ec30a0();
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    local_98 = &cf_id;
    local_60 = local_c8;
    local_90 = &cf_title;
    local_58 = local_a0;
    local_88 = &cf_icon;
    pcVar6 = local_b8;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d9 = false;
    if (pcVar7 == (cfstringStruct *)0x0) {
      local_130 = &cf_icons_outlined_more_circle;
    }
    else {
      local_130 = local_b8;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_d8 = local_130;
    }
    local_d9 = pcVar7 != (cfstringStruct *)0x0;
    local_50 = local_130;
    local_80 = &cf_enabled;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_78 = &cf_kind;
    local_40 = &cf_custom;
    local_70 = &cf_customKind;
    local_38 = local_a8;
    local_68 = &cf_customPayload;
    local_30 = local_b0;
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_60,&local_98,7);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_d0 = puVar5;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_d9 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    (*(code *)PTR__objc_release_02578630)();
    _WCRChatAttachmentRefreshItems();
    _objc_retainAutoreleasedReturnValue();
    pcVar7 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_e8 = pcVar7;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    local_170 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e8,PTR_s_indexOfObjectPassingTest__026a27f8,
               &PTR___NSConcreteGlobalBlock_02581d60);
    puVar3 = local_d0;
    pcVar6 = local_e8;
    if (local_170 == (cfstringStruct *)0x7fffffffffffffff) {
      local_170 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_count_0269cfe0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_insertObject_atIndex__0269eac0,puVar3,local_170);
    FUN_00ebf3fc(local_e8);
    _WCRChatAttachmentNotifyChanged();
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_d0,0);
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

