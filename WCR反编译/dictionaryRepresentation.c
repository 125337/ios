// dictionaryRepresentation @ 01acf38c

/* Function Stack Size: 0x10 bytes */

ID WCRefineGroup::dictionaryRepresentation(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long local_228;
  long local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1b8;
  long local_180;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = &cf_groupId;
  local_148 = *(cfstringStruct **)(param_1 + 0x10);
  if (local_148 == (cfstringStruct *)0x0) {
    local_148 = &::cf___;
  }
  local_a8 = local_148;
  local_120 = &cf_name;
  local_158 = *(cfstringStruct **)(param_1 + 0x18);
  if (local_158 == (cfstringStruct *)0x0) {
    local_158 = &::cf___;
  }
  local_a0 = local_158;
  local_118 = &cf_kind;
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_110 = &cf_scope;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_98 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  local_108 = &cf_members;
  local_180 = *(long *)(param_1 + 0x30);
  if (local_180 == 0) {
    local_180 = *(long *)PTR____NSArray0___02578280;
  }
  local_88 = local_180;
  local_100 = &cf_order;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_90 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,
             *(undefined8 *)(param_1 + 0x38));
  _objc_retainAutoreleasedReturnValue();
  local_f8 = &cf_collapsed;
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_80 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
             *(byte *)(param_1 + 8) & 1);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = &cf_disabled;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_78 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,
             *(byte *)(param_1 + 9) & 1);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = &cf_avatarSource;
  local_1b8 = *(cfstringStruct **)(param_1 + 0x40);
  if (local_1b8 == (cfstringStruct *)0x0) {
    local_1b8 = &::cf___;
  }
  local_68 = local_1b8;
  local_e0 = &cf_avatarValue;
  local_1c8 = *(cfstringStruct **)(param_1 + 0x48);
  if (local_1c8 == (cfstringStruct *)0x0) {
    local_1c8 = &::cf___;
  }
  local_60 = local_1c8;
  local_d8 = &cf_detailTemplate;
  local_1d8 = *(cfstringStruct **)(param_1 + 0x50);
  if (local_1d8 == (cfstringStruct *)0x0) {
    local_1d8 = &::cf___;
  }
  local_58 = local_1d8;
  local_d0 = &cf_inlineDetailTemplate;
  local_1e8 = *(cfstringStruct **)(param_1 + 0x58);
  if (local_1e8 == (cfstringStruct *)0x0) {
    local_1e8 = &::cf___;
  }
  local_50 = local_1e8;
  local_c8 = &cf_memberSyncKind;
  local_1f8 = *(cfstringStruct **)(param_1 + 0x60);
  if (local_1f8 == (cfstringStruct *)0x0) {
    local_1f8 = &::cf___;
  }
  local_48 = local_1f8;
  local_c0 = &cf_memberSyncSource;
  local_208 = *(cfstringStruct **)(param_1 + 0x68);
  if (local_208 == (cfstringStruct *)0x0) {
    local_208 = &::cf___;
  }
  local_40 = local_208;
  local_b8 = &cf_memberSyncChatRooms;
  local_218 = *(long *)(param_1 + 0x70);
  if (local_218 == 0) {
    local_218 = *(long *)PTR____NSArray0___02578280;
  }
  local_38 = local_218;
  local_b0 = &cf_memberSyncTags;
  local_228 = *(long *)(param_1 + 0x78);
  if (local_228 == 0) {
    local_228 = *(long *)PTR____NSArray0___02578280;
  }
  local_30 = local_228;
  puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_70 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_a8,&local_128,0x10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)puVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

