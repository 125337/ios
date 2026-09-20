// FUN_000e4a4c @ 000e4a4c

void FUN_000e4a4c(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 local_1d0;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  cfstringStruct *local_1a0;
  undefined8 local_198;
  ulong local_190;
  cfstringStruct *local_188;
  ulong local_180;
  undefined8 local_168;
  undefined8 local_160;
  undefined1 *local_158;
  cfstringStruct *local_150;
  uint local_144;
  cfstringStruct *local_140;
  uint local_138;
  uint local_134;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e4;
  cfstringStruct *local_e0;
  undefined *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined4 local_48;
  byte local_31;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  local_80 = param_1;
  local_78 = param_2;
  local_70 = param_3;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,local_78);
  local_31 = (byte)local_70;
  pcVar1 = local_28;
  FUN_000e3de4();
  local_6c = SUB84(pcVar1,0);
  if (((ulong)pcVar1 & 1) == 0) {
    local_48 = 1;
  }
  else {
    pcVar1 = local_28;
    FUN_000e07e8();
    local_88 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_50 = pcVar1;
    FUN_000d8d08(local_28,"m_arrMsg");
    local_90 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_28;
    local_58 = pcVar2;
    _objc_getAssociatedObject(local_28,&DAT_028c8399);
    local_98 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_28;
    local_60 = pcVar1;
    FUN_000e52b0();
    local_a0 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_b0 = local_30;
    pcVar1 = local_50;
    local_68 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_text_0269ce68);
    local_a8 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    local_c0 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_c0 = &cf___;
    }
    local_d0 = local_c0;
    pcVar2 = local_28;
    local_b8 = pcVar1;
    FUN_000dd52c();
    local_e0 = local_58;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_c8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    pcVar1 = local_e0;
    local_d8 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isKindOfClass__0269cd68,puVar3);
    local_e4 = SUB84(pcVar1,0);
    if (((ulong)pcVar1 & 1) == 0) {
      local_f8 = (cfstringStruct *)0x0;
    }
    else {
      pcVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
      local_f8 = pcVar1;
      local_f0 = pcVar1;
    }
    local_108 = local_f8;
    pcVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c8396);
    local_100 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    local_118 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar2 = local_28;
    local_110 = pcVar1;
    _objc_getAssociatedObject(local_28,&DAT_028c8397);
    local_120 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_130 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_128 = pcVar2;
    if (local_60 == (cfstringStruct *)0x0) {
      local_138 = 0xffffffff;
    }
    else {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_boolValue_026ca540);
      local_138 = (uint)pcVar1;
      local_134 = local_138;
    }
    local_144 = local_138;
    local_140 = local_68;
    if (local_68 == (cfstringStruct *)0x0) {
      local_150 = &cf_continue;
    }
    else {
      local_150 = local_68;
    }
    local_190 = (ulong)local_138;
    local_1d0 = local_b0;
    local_1c8 = local_d0;
    local_1c0 = local_c8;
    local_1b8 = local_108;
    local_1b0 = local_110;
    local_1a8 = 2;
    local_1a0 = local_128;
    local_198 = 6;
    local_188 = local_150;
    local_180 = (ulong)local_31 & 1;
    local_158 = (undefined1 *)&local_1d0;
    _NSLog(&
           cf__wcr__chat_member_search_scanphase___query___visible__luall__luempty__lu__lupages__lu__luend__dmore___skip__d
          );
    (*(code *)PTR__objc_release_02578630)(local_130);
    (*(code *)PTR__objc_release_02578630)(local_118);
    (*(code *)PTR__objc_release_02578630)(local_b8);
    local_160 = 0;
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,local_160);
    _objc_storeStrong(&local_58,local_160);
    _objc_storeStrong(&local_50,local_160);
    local_48 = 0;
  }
  local_168 = 0;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,local_168);
  return;
}

