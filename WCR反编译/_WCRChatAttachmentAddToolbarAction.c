// _WCRChatAttachmentAddToolbarAction @ 00ec2130

void _WCRChatAttachmentAddToolbarAction(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_170;
  cfstringStruct *local_150;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  bool local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  bool local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined4 local_94;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_90,param_1);
  pcVar2 = local_90;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_94 = 1;
  }
  else {
    pcVar2 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarActionKey);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    FUN_00ebd790();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0);
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_94 = 1;
    }
    else {
      pcVar2 = local_a0;
      FUN_00ec29f0();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = pcVar2;
      _WCRChatAttachmentRefreshItems();
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b0 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_b0;
      FUN_00ebfc90(local_b0,local_a8);
      local_88 = &cf_id;
      local_58 = local_a8;
      local_80 = &cf_title;
      pcVar3 = local_90;
      local_b8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarTitleKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar3;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c9 = 0;
      local_d9 = false;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_150 = local_a0;
      }
      else {
        local_150 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarTitleKey);
        _objc_retainAutoreleasedReturnValue();
        local_c9 = 1;
        local_c8 = local_150;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_d8 = local_150;
      }
      local_d9 = pcVar4 != (cfstringStruct *)0x0;
      local_50 = local_150;
      local_78 = &cf_icon;
      pcVar4 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_e9 = 0;
      local_f9 = false;
      if (pcVar6 == (cfstringStruct *)0x0) {
        local_170 = &cf_icons_outlined_add;
      }
      else {
        local_170 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarIconKey);
        _objc_retainAutoreleasedReturnValue();
        local_e9 = 1;
        local_e8 = local_170;
        FUN_00ebd790();
        _objc_retainAutoreleasedReturnValue();
        local_f8 = local_170;
      }
      local_f9 = pcVar6 != (cfstringStruct *)0x0;
      local_48 = local_170;
      local_70 = &cf_enabled;
      puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_68 = &cf_kind;
      local_38 = &cf_toolbar;
      local_60 = &cf_action;
      local_30 = local_a0;
      puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_40 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_58,&local_88,6);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_c0 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if ((local_f9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_f8);
      }
      if ((local_e9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_d9 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_d8);
      }
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarCustomKindKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_108 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_108,&cf_customKind);
      }
      pcVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarCustomPayloadKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_110 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_110,&cf_customPayload)
        ;
      }
      pcVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectForKeyedSubscript__0269d098,_WCRChatToolbarCustomIconKey);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = pcVar2;
      FUN_00ebd790();
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
      if (pcVar2 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,&cf_icon);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_setObject_forKeyedSubscript__0269d248,local_118,&cf_customIcon);
      }
      if (local_b8 != (cfstringStruct *)0x7fffffffffffffff) {
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_removeObjectAtIndex__0269d530,local_b8)
        ;
      }
      local_1d0 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b0,PTR_s_indexOfObjectPassingTest__026a27f8,
                 &PTR___NSConcreteGlobalBlock_02581d40);
      pcVar2 = local_b0;
      puVar1 = local_c0;
      if (local_1d0 == (cfstringStruct *)0x7fffffffffffffff) {
        local_1d0 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_count_0269cfe0);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_insertObject_atIndex__0269eac0,puVar1,local_1d0);
      FUN_00ebf3fc(local_b0);
      _WCRChatAttachmentNotifyChanged();
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_c0,0);
      _objc_storeStrong(&local_b0,0);
      _objc_storeStrong(&local_a8,0);
      local_94 = 0;
    }
    _objc_storeStrong(&local_a0,0);
  }
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

