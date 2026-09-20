// FUN_0185b248 @ 0185b248

void FUN_0185b248(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_148;
  cfstringStruct *local_138;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  undefined *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
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
  local_78 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_78,param_1);
  local_80 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_80,param_2);
  pcVar1 = local_78;
  FUN_0185b7dc();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_80;
  local_88 = pcVar1;
  FUN_0185b984(local_80,pcVar1);
  pcVar1 = local_78;
  if (((ulong)pcVar2 & 1) == 0) {
    local_70 = (undefined *)0x0;
    local_8c = 1;
    goto LAB_0185b778;
  }
  if (local_78 == (cfstringStruct *)0x0) {
LAB_0185b320:
    pcVar2 = local_80;
    FUN_01854b24(local_80,local_88);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_78;
    local_78 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar1 & 1) != 0) goto LAB_0185b320;
  }
  pcVar1 = local_78;
  if (local_78 == (cfstringStruct *)0x0) {
    local_70 = (undefined *)0x0;
    local_8c = 1;
  }
  else {
    local_40 = &cf_m_nsRemark;
    local_38 = &cf_getRemark;
    local_30 = &cf_getRemarkName;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40);
    _objc_retainAutoreleasedReturnValue();
    FUN_0185bb64();
    _objc_retainAutoreleasedReturnValue();
    local_98 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_78;
    local_58 = &cf_m_nsNickName;
    local_50 = &cf_nickname;
    local_48 = &cf_getNickname;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_58,3
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_0185bb64();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_78;
    local_68 = &cf_getContactDisplayName;
    local_60 = &cf_getDisplayName;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,2
              );
    _objc_retainAutoreleasedReturnValue();
    FUN_0185bb64();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      pcVar1 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_118 = local_a0;
      }
      else {
        local_118 = local_98;
      }
      _objc_storeStrong(&local_a8,local_118);
    }
    pcVar1 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      _objc_storeStrong(&local_a8,local_88);
    }
    puVar3 = PTR_WCRefineBatchDeleteFriendCandidate_026cf098;
    _objc_alloc_init();
    if (local_88 == (cfstringStruct *)0x0) {
      local_128 = &cf___;
    }
    else {
      local_128 = local_88;
    }
    local_b0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUserName__0269f680,local_128);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setContact__026b07c0,local_78);
    if (local_98 == (cfstringStruct *)0x0) {
      local_138 = &cf___;
    }
    else {
      local_138 = local_98;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setCurrentRemark__026b6a50,local_138);
    if (local_a0 == (cfstringStruct *)0x0) {
      local_148 = &cf___;
    }
    else {
      local_148 = local_a0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setNickName__026a6b58,local_148);
    if (local_a8 == (cfstringStruct *)0x0) {
      if (local_88 == (cfstringStruct *)0x0) {
        local_168 = &cf___;
      }
      else {
        local_168 = local_88;
      }
      local_158 = local_168;
    }
    else {
      local_158 = local_a8;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_setDisplayName__026ae2f8,local_158);
    puVar3 = local_b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = puVar3;
    local_8c = 1;
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_a0,0);
    _objc_storeStrong(&local_98,0);
  }
LAB_0185b778:
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_80,0);
  _objc_storeStrong(&local_78,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_70);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

