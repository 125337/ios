// FUN_01584428 @ 01584428

void FUN_01584428(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  ulong local_1c0;
  cfstringStruct *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  ulong local_1a0;
  ulong local_198;
  cfstringStruct *local_190;
  ulong local_188;
  ulong local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  uint local_150;
  uint local_14c;
  undefined1 *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  undefined **local_110;
  undefined **local_108;
  undefined8 local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  uint local_dc;
  cfstringStruct *local_d8;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined *local_c0;
  cfstringStruct *local_b8;
  uint local_ac;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
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
  undefined4 local_34;
  cfstringStruct *local_30;
  undefined *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == (cfstringStruct *)0x0) {
    local_28 = (undefined *)0x0;
    local_34 = 1;
  }
  else {
    pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = pcVar1;
    FUN_01532090();
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    FUN_01580244();
    if (pcVar1 == (cfstringStruct *)((long)&MACH_HEADER.magic + 1)) {
      local_68 = DAT_028e3918;
    }
    else {
      local_68 = (cfstringStruct *)0x0;
    }
    local_78 = local_68;
    local_50 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_78;
    pcVar1 = local_78;
    FUN_01577578();
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_80 = &cf___;
    }
    local_98 = local_80;
    local_70 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_98;
    (*(code *)PTR__objc_release_02578630)(local_70);
    local_90 = PTR__OBJC_CLASS___NSString_026cdfe8;
    pcVar1 = local_30;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_a0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_a0 = &cf___;
    }
    local_f0 = local_a0;
    local_e8 = local_50;
    local_dc = (uint)(local_58 != (cfstringStruct *)0x0);
    local_d8 = local_60;
    pcVar2 = local_30;
    local_88 = pcVar1;
    FUN_01564574();
    local_cc = (uint)pcVar2;
    pcVar1 = local_30;
    FUN_01565620();
    local_c8 = (uint)pcVar1;
    pcVar1 = local_30;
    FUN_0157804c();
    local_c4 = (uint)pcVar1;
    local_c0 = PTR_WCRefinePrivateFriendManager_026ce160;
    pcVar1 = local_30;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_c0;
    local_b8 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_shouldConcealUsername__0269fef8);
    local_ac = (uint)puVar3;
    pcVar1 = local_48;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_f8 = &cf___;
    }
    local_158 = local_f8;
    local_110 = (undefined **)&local_48;
    pcVar2 = local_48;
    local_a8 = pcVar1;
    FUN_01564574();
    local_150 = (uint)pcVar2;
    local_108 = (undefined **)&local_40;
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_customAvatarFeatureEnabled_026a0958);
    local_14c = (uint)pcVar1;
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatAvatarProfileCardFunctionPag_026b0968);
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    FUN_01584d58();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_40;
    local_120 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatAvatarProfileCardFunctionPag_026b0970);
    _objc_retainAutoreleasedReturnValue();
    local_128 = pcVar2;
    FUN_01584d58();
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_40;
    local_130 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_chatAvatarProfileCardFunctionPag_026b0980);
    _objc_retainAutoreleasedReturnValue();
    local_138 = pcVar1;
    FUN_01584d58();
    _objc_retainAutoreleasedReturnValue();
    local_1d0 = local_f0;
    local_1c8 = local_e8;
    local_1c0 = (ulong)local_dc & 1;
    local_1b8 = local_d8;
    local_1b0 = (ulong)local_cc & 1;
    local_1a8 = (ulong)local_c8 & 1;
    local_1a0 = (ulong)local_c4 & 1;
    local_198 = (ulong)local_ac & 1;
    local_190 = local_158;
    local_188 = (ulong)local_150 & 1;
    local_180 = (ulong)local_14c & 1;
    local_178 = local_120;
    local_170 = local_130;
    puVar3 = local_90;
    local_168 = pcVar1;
    local_148 = (undefined1 *)&local_1d0;
    local_140 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_stringWithFormat__0269cca8,
               &
               cf____mode__ld_momentsItem__d_momentsTid____cg__d_self__d_friend__d_pf__d_chat____groupchat__d_customAvatar__d_order____hidden____deleted___
              );
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(local_140);
    (*(code *)PTR__objc_release_02578630)(local_138);
    (*(code *)PTR__objc_release_02578630)(local_130);
    (*(code *)PTR__objc_release_02578630)(local_128);
    (*(code *)PTR__objc_release_02578630)(local_120);
    (*(code *)PTR__objc_release_02578630)(local_118);
    (*(code *)PTR__objc_release_02578630)(local_a8);
    (*(code *)PTR__objc_release_02578630)(local_b8);
    (*(code *)PTR__objc_release_02578630)(local_88);
    local_34 = 1;
    local_100 = 0;
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,local_100);
    _objc_storeStrong(local_110,local_100);
    _objc_storeStrong(local_108,local_100);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

