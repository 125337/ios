// appendKickLogRoom:user:reason:keyword: @ 00ed8a70

/* Function Stack Size: 0x30 bytes */

void WCRefineChatRoomKickHelper::appendKickLogRoom_user_reason_keyword_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  cfstringStruct *local_198;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_100;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  SEL local_c8;
  cfstringStruct *local_c0;
  long *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long *local_a0;
  cfstringStruct *local_98;
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
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d0 = 0;
  local_c8 = param_2;
  local_c0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_4);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_5);
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_6);
  pcVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_store_026ab6d0);
  _objc_retainAutoreleasedReturnValue();
  local_98 = &cf_room;
  pcVar2 = local_c0;
  local_f0 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trimmedString__0269ec98,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_148 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_148 = &::cf___;
  }
  local_60 = local_148;
  local_90 = &cf_roomName;
  pcVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_displayNameForRoom__0269ece0,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_158 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_158 = &::cf___;
  }
  local_58 = local_158;
  local_88 = &cf_user;
  pcVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trimmedString__0269ec98,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_168 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_168 = &::cf___;
  }
  local_50 = local_168;
  local_80 = &cf_name;
  pcVar4 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c0,PTR_s_displayNameForUser_inRoom__0269ecd0,local_d8,local_d0);
  _objc_retainAutoreleasedReturnValue();
  local_178 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_178 = &::cf___;
  }
  local_48 = local_178;
  local_78 = &cf_reason;
  pcVar5 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trimmedString__0269ec98,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_188 = pcVar5;
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_188 = &::cf___;
  }
  local_40 = local_188;
  local_70 = &cf_keyword;
  pcVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_trimmedString__0269ec98,local_e8);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_198 = pcVar6;
  if (pcVar6 == (cfstringStruct *)0x0) {
    local_198 = &::cf___;
  }
  local_38 = local_198;
  local_68 = &cf_time;
  puVar7 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar8,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_60,&local_98,7);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar9;
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  (*(code *)PTR__objc_release_02578630)(pcVar5);
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_f0;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(pcVar2);
  pcVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_objectForKeyedSubscript__0269d098,&cf_logs);
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_insertObject_atIndex__0269eac0,local_f8,0);
  pcVar3 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
  pcVar1 = local_100;
  if ((cfstringStruct *)0x28 < pcVar3) {
    pcVar3 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_count_0269cfe0);
    local_b8 = &pcVar3[-2].field3_0x18;
    local_b0 = 0x28;
    local_a8 = 0x28;
    local_a0 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_removeObjectsInRange__0269dad0,0x28,local_b8)
    ;
  }
  _objc_storeStrong(&local_100);
  _objc_sync_exit(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_saveStore_026ab6f0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_f0,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

