// FUN_002e7a0c @ 002e7a0c

void FUN_002e7a0c(undefined8 param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  ulong local_1b8;
  ulong local_1b0;
  undefined8 local_198;
  undefined1 *local_190;
  undefined *local_188;
  cfstringStruct *local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  undefined *local_150;
  undefined *local_148;
  uint local_140;
  uint local_13c;
  undefined *local_138;
  undefined8 local_130;
  undefined *local_128;
  undefined **local_120;
  undefined4 local_118;
  byte local_111;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined4 local_100;
  char local_fa;
  byte local_f9;
  undefined *local_f8;
  byte local_d9;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined local_70 [8];
  undefined1 local_68 [8];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [8];
  undefined1 local_48 [13];
  byte local_3b;
  byte local_3a;
  byte local_39 [9];
  undefined8 local_30 [2];
  
  local_120 = &local_d8;
  local_30[0] = 0;
  local_130 = param_1;
  local_128 = param_2;
  _objc_storeStrong(local_30,param_1);
  ppuVar2 = local_120;
  local_120[0x14] = local_128;
  local_39[0] = 0;
  local_3a = 0;
  local_3b = 0;
  local_b8 = local_48;
  ppuVar2[0x12] = (undefined *)0x0;
  local_b0 = local_50;
  ppuVar2[0x11] = (undefined *)0x0;
  local_a8 = local_58;
  ppuVar2[0x10] = (undefined *)0x3ff0000000000000;
  local_a0 = local_60;
  ppuVar2[0xf] = (undefined *)0x0;
  local_98 = local_68;
  ppuVar2[0xe] = (undefined *)0x0;
  ppuVar2[0xd] = (undefined *)0x0;
  uVar1 = DAT_028c9870;
  local_d8 = PTR___NSConcreteGlobalBlock_02578658;
  local_d0 = 0xd0800000;
  local_cc = 0;
  local_c8 = FUN_002e963c;
  local_c0 = &DAT_0257bc28;
  ppuVar2[10] = local_39;
  ppuVar2[0xb] = &local_3a;
  ppuVar2[0xc] = &local_3b;
  ppuVar2[9] = local_70;
  _dispatch_sync(uVar1,&local_d8);
  puVar3 = local_120[0x12];
  FUN_002e4444(local_120[0x10],local_120[0xe],local_120[0xd],puVar3,local_120[0xf]);
  local_118 = SUB84(puVar3,0);
  local_d9 = (byte)puVar3;
  puVar3 = local_120[0x15];
  FUN_002e9768();
  local_f9 = local_3a;
  if (puVar3 == (undefined *)0x2) {
    local_f9 = local_3b;
  }
  local_13c = (uint)local_f9;
  local_f9 = local_f9 & 1;
  local_140 = 0;
  if (((local_39[0] & 1) != 0) && (local_140 = 0, (local_d9 & 1) != 0)) {
    local_140 = (uint)local_f9;
  }
  local_fa = (char)local_140;
  if (local_120[0x14] != (undefined *)0x0) {
    *local_120[0x14] = local_fa;
  }
  local_138 = puVar3;
  local_f8 = puVar3;
  if (local_fa == '\0') {
    local_1f0 = (cfstringStruct *)((ulong)local_39[0] & 1);
    local_1e8 = (cfstringStruct *)((ulong)local_d9 & 1);
    local_1e0 = (undefined *)((ulong)local_3a & 1);
    local_1d8 = (undefined *)((ulong)local_3b & 1);
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_1d0 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_clear__d__d__d__d__ld);
    local_148 = puVar4;
    _objc_retainAutoreleasedReturnValue();
    local_120[0x16] = puVar4;
    local_100 = 1;
  }
  else {
    puVar3 = local_120[0x11];
    local_111 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
    local_150 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      local_160 = &cf_nofont;
    }
    else {
      pcVar5 = (cfstringStruct *)local_120[0x11];
      FUN_002e98f0();
      local_158 = pcVar5;
      _objc_retainAutoreleasedReturnValue();
      local_111 = 1;
      local_160 = pcVar5;
      local_110 = pcVar5;
    }
    local_168 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_168;
    if ((local_111 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_110);
    }
    local_178 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_170 = (cfstringStruct *)local_120[0x12];
    local_180 = local_170;
    if (local_170 == (cfstringStruct *)0x0) {
      local_180 = &cf___;
    }
    local_1e0 = local_120[0x10];
    local_1d8 = local_120[0xf];
    local_1d0 = local_120[0xe];
    local_1c8 = local_120[0xd];
    local_1f0 = local_180;
    local_1e8 = local_108;
    local_1c0 = local_f8;
    local_1b8 = (ulong)local_3a & 1;
    local_1b0 = (ulong)local_3b & 1;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_190 = (undefined1 *)&local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_apply_________3f__ld___2f___2f__ld__d__d);
    local_188 = puVar3;
    _objc_retainAutoreleasedReturnValue();
    local_120[0x16] = puVar3;
    local_100 = 1;
    _objc_storeStrong(&local_108,0);
  }
  local_198 = 0;
  _objc_storeStrong(local_50);
  _objc_storeStrong(local_48,local_198);
  _objc_storeStrong(local_30,local_198);
  _objc_autoreleaseReturnValue(local_120[0x16]);
  return;
}

