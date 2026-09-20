// FUN_003d796c @ 003d796c

void FUN_003d796c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  ulong local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  ulong local_170;
  ulong local_168;
  undefined8 local_160;
  undefined1 *local_158;
  undefined8 local_150;
  cfstringStruct *local_148;
  long local_140;
  cfstringStruct *local_138;
  undefined4 local_124;
  cfstringStruct *local_120;
  undefined *local_118;
  cfstringStruct *local_110;
  undefined **local_108;
  long local_100;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  undefined *local_e8;
  cfstringStruct *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_5c;
  cfstringStruct *local_58;
  long local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  _objc_storeStrong(&local_50,param_1);
  local_58 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_58,local_d0);
  if ((local_50 == 0) || (local_58 == (cfstringStruct *)0x0)) {
    local_5c = 1;
  }
  else {
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_session_0269d000);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar1;
    FUN_00396798(pcVar1,&cf_m_uUnReadCount);
    pcVar2 = local_68;
    local_70 = pcVar1;
    FUN_0037a830(local_68,&cf_m_bShowUnReadAsRedDot);
    local_71 = (byte)pcVar2;
    pcVar1 = local_68;
    FUN_00396798(local_68,&cf_m_uLastTime);
    pcVar2 = local_68;
    local_80 = pcVar1;
    FUN_0037a830(local_68,&cf_m_bIsTop);
    local_81 = (byte)pcVar2;
    local_120 = local_68;
    local_38 = &cf_m_uAtMeCount;
    local_30 = &cf_mainAtMeCount;
    local_108 = &PTR_s_anonymousAtReferDisplayName_026cd000;
    local_100 = 0x269c000;
    local_f8 = 2;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_120;
    local_118 = puVar3;
    FUN_003d2508();
    local_110 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(local_118);
    local_90 = local_110;
    local_f0 = local_68;
    local_48 = &cf_m_uAtAllCount;
    local_40 = &cf_mainAtAllCount;
    puVar3 = local_108[0x1fc];
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,*(undefined8 *)(local_100 + 0xc70),&local_48,local_f8);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_f0;
    local_e8 = puVar3;
    FUN_003d2508();
    local_e0 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(local_e8);
    local_98 = local_e0;
    local_99 = 0;
    pcVar2 = local_68;
    FUN_003612b8(local_68,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = &cf_isChatStatusNotifyOpen;
    local_a8 = pcVar2;
    _NSSelectorFromString();
    local_b0 = pcVar1;
    if ((local_a8 != (cfstringStruct *)0x0) &&
       (pcVar2 = local_a8,
       (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_respondsToSelector__026ca818,pcVar1),
       ((ulong)pcVar2 & 1) != 0)) {
      pcVar1 = local_a8;
      (*(code *)PTR__objc_msgSend_02578628)(local_a8,local_b0);
      local_124 = SUB84(pcVar1,0);
      local_99 = ((byte)pcVar1 ^ 1) & 1;
    }
    local_140 = local_50;
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_username_026a2238);
    _objc_retainAutoreleasedReturnValue();
    local_148 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_148 = &cf___;
    }
    local_190 = (ulong)((local_71 & 1) != 0);
    local_170 = (ulong)((local_81 & 1) != 0);
    local_168 = (ulong)((local_99 & 1) != 0);
    local_1a0 = local_148;
    local_198 = local_70;
    local_188 = local_80;
    local_180 = local_90;
    local_178 = local_98;
    local_158 = (undefined1 *)&local_1a0;
    local_138 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_140,PTR_s_appendFormat__0269d148,&cf_____llu__d__llu__llu__llu__d__d_);
    (*(code *)PTR__objc_release_02578630)(local_138);
    local_150 = 0;
    _objc_storeStrong(&local_a8);
    _objc_storeStrong(&local_68,local_150);
    local_5c = 0;
  }
  local_160 = 0;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,local_160);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

