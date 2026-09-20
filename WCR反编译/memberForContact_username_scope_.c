// memberForContact:username:scope: @ 01a94a18

/* Function Stack Size: 0x28 bytes */

ID WCRefineGroupDataProvider::memberForContact_username_scope_
             (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5)

{
  undefined *puVar1;
  long lVar2;
  long local_d8;
  long local_b0;
  undefined *local_a8;
  unsigned_long_long local_a0;
  long local_98;
  long local_90;
  SEL local_88;
  ID local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_90 = 0;
  local_88 = param_2;
  local_80 = param_1;
  _objc_storeStrong(&local_90,param_3);
  local_98 = 0;
  _objc_storeStrong(&local_98,param_4);
  puVar1 = PTR_WCRefineGroupMember_026cf2e8;
  local_a0 = param_5;
  _objc_alloc_init();
  local_a8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setUsername__026a2510,local_98);
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setMemberType__026bda10,local_a0);
  lVar2 = local_90;
  local_58 = &cf_getContactDisplayName;
  local_50 = &cf_m_nsRemark;
  local_48 = &cf_getRemarkName;
  local_40 = &cf_nickname;
  local_38 = &cf_m_nsNickName;
  local_30 = &cf_getNickname;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,6);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a93950();
  _objc_retainAutoreleasedReturnValue();
  local_b0 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_d8 = local_98;
  }
  else {
    local_d8 = local_b0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setDisplayName__026ae2f8,local_d8);
  lVar2 = local_90;
  local_78 = &cf_m_nsHeadImgUrl;
  local_70 = &cf_getHeadImgUrl;
  local_68 = &cf_m_nsHDHeadImgUrl;
  local_60 = &cf_getBigHeadImgUrl;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,4);
  _objc_retainAutoreleasedReturnValue();
  FUN_01a93950();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_setAvatarUrl__026bda18);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_a8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_b0);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_98,0);
  _objc_storeStrong(&local_90,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

