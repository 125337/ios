// FUN_016b9394 @ 016b9394

void FUN_016b9394(cfstringStruct *param_1,cfstringStruct *param_2,undefined8 param_3,byte param_4,
                 byte param_5,cfstringStruct *param_6,undefined8 param_7,undefined4 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  ulong local_270;
  ulong local_268;
  cfstringStruct *local_260;
  ulong local_258;
  cfstringStruct *local_250;
  cfstringStruct *local_248;
  cfstringStruct *local_240;
  cfstringStruct *local_238;
  cfstringStruct *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  cfstringStruct *local_218;
  undefined8 local_210;
  undefined8 local_1f8;
  cfstringStruct *local_1f0;
  undefined1 *local_1e8;
  undefined *local_1e0;
  cfstringStruct *local_1d8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1c8;
  uint local_1bc;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  undefined *local_190;
  uint local_188;
  uint local_184;
  cfstringStruct *local_180;
  undefined1 *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
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
  undefined *local_d0;
  ulong local_c8;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  undefined1 local_85;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined8 local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  byte local_2a;
  byte local_29;
  undefined *local_28;
  
  local_58 = (cfstringStruct *)0x0;
  local_ac = param_8;
  local_a8 = param_9;
  local_a0 = param_10;
  local_50 = param_3;
  local_48 = param_6;
  local_40 = param_2;
  local_38 = param_1;
  local_2a = param_5;
  local_29 = param_4;
  _objc_storeStrong(&local_58,param_7);
  local_59 = (byte)local_ac;
  local_68 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_68,local_a8);
  local_70 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_70,local_a0);
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  local_98 = pcVar1;
  _objc_retainAutoreleasedReturnValue();
  local_78 = pcVar1;
  FUN_0169b20c();
  local_b0 = (uint)pcVar1;
  local_85 = SUB81(pcVar1,0);
  if ((local_2a & 1) == 0) {
    local_190 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_188 = (uint)local_29;
    local_184 = local_b0 & 0xff;
    local_180 = local_58;
    if (local_58 == (cfstringStruct *)0x0) {
      local_198 = &cf___;
    }
    else {
      local_198 = local_58;
    }
    local_1c8 = local_198;
    local_1bc = (uint)local_59;
    local_1b8 = local_38;
    local_1b0 = local_40;
    local_1a8 = local_48;
    pcVar1 = local_68;
    FUN_016bab58();
    local_1a0 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_70;
    local_1d8 = pcVar1;
    FUN_016bab58();
    local_1d0 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_270 = (ulong)local_188 & 1;
    local_268 = (ulong)local_184 & 1;
    local_260 = local_1c8;
    local_258 = (ulong)local_1bc & 1;
    local_250 = local_1b8;
    local_248 = local_1b0;
    local_240 = local_1a8;
    local_238 = local_1d8;
    puVar3 = local_190;
    local_230 = pcVar2;
    local_1f0 = pcVar2;
    local_1e8 = (undefined1 *)&local_270;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_stringWithFormat__0269cca8,
               &
               cf_txt_sender__d_dark__d_text____bold__d_size___2f_corner___2f_shadow__ld_fg____bg___
              );
    local_1e0 = puVar3;
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(local_1f0);
    (*(code *)PTR__objc_release_02578630)(local_1d8);
  }
  else {
    local_d0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_c8 = DAT_028e3e30;
    local_bc = (uint)local_29;
    local_b8 = local_b0 & 0xff;
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatUseThemeIcon_026b2c38);
    local_b4 = (uint)pcVar1;
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatCurrentFolder_026b2c60);
    local_d8 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_e8 = &cf___;
    }
    local_f8 = local_e8;
    pcVar2 = local_78;
    local_e0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatThemeIconMeLight_026b2c40);
    local_f0 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_108 = &cf___;
    }
    local_118 = local_108;
    pcVar1 = local_78;
    local_100 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatThemeIconMeDark_026b2c48);
    local_110 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    local_128 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_128 = &cf___;
    }
    local_138 = local_128;
    pcVar2 = local_78;
    local_120 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatThemeIconOtherLight_026b2c50);
    local_130 = pcVar2;
    _objc_retainAutoreleasedReturnValue();
    local_148 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_148 = &cf___;
    }
    local_158 = local_148;
    pcVar1 = local_78;
    local_140 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_repeatThemeIconOtherDark_026b2c58);
    local_150 = pcVar1;
    _objc_retainAutoreleasedReturnValue();
    local_168 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_168 = &cf___;
    }
    local_270 = local_c8;
    local_268 = (ulong)local_bc & 1;
    local_260 = (cfstringStruct *)((ulong)local_b8 & 1);
    local_258 = (ulong)local_b4 & 1;
    local_250 = local_f8;
    local_248 = local_118;
    local_240 = local_138;
    local_238 = local_158;
    local_230 = local_168;
    local_228 = local_38;
    local_220 = local_40;
    local_218 = local_48;
    local_210 = local_50;
    puVar3 = local_d0;
    local_178 = (undefined1 *)&local_270;
    local_160 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_d0,PTR_s_stringWithFormat__0269cca8,
               &
               cf_img_gen__lu_sender__d_dark__d_theme__d_folder____meL____meD____otherL____otherD____size___2f_corner___2f_shadow__ld_imgAlpha___2f
              );
    local_170 = puVar3;
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar3;
    (*(code *)PTR__objc_release_02578630)(local_160);
    (*(code *)PTR__objc_release_02578630)(local_140);
    (*(code *)PTR__objc_release_02578630)(local_120);
    (*(code *)PTR__objc_release_02578630)(local_100);
    (*(code *)PTR__objc_release_02578630)(local_e0);
  }
  local_8c = 1;
  local_1f8 = 0;
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,local_1f8);
  _objc_storeStrong(&local_68,local_1f8);
  _objc_storeStrong(&local_58,local_1f8);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

