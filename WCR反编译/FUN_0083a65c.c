// FUN_0083a65c @ 0083a65c

void FUN_0083a65c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  undefined8 local_1a8;
  ulong local_1a0;
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_168;
  undefined *local_160;
  undefined1 *local_158;
  undefined *local_150;
  uint local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  undefined8 local_118;
  uint local_110;
  undefined4 local_10c;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined4 local_c4;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  byte local_31;
  cfstringStruct *local_30;
  undefined8 local_28;
  cfstringStruct **ppcVar2;
  
  local_28 = 0;
  local_a8 = param_3;
  local_a0 = param_4;
  _objc_storeStrong(&local_28,param_3);
  ppcVar2 = &local_30;
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar2,local_a0);
  uVar1 = (uint)ppcVar2;
  FUN_0083a3a8();
  local_31 = (byte)uVar1;
  local_50 = 0x3ff0000000000000;
  if ((DAT_028cd233 & 1) != 0) {
    if ((uVar1 & 1) == 0) {
      local_b0 = DAT_026f4850;
    }
    else {
      local_b0 = DAT_026f4848;
    }
    local_50 = local_b0;
  }
  local_b8 = &cf_off;
  uVar6 = local_50;
  local_94 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = local_b8;
  if ((DAT_028cd232 & 1) != 0) {
    pcVar3 = local_30;
    FUN_0083ae68();
    local_c0 = pcVar3;
    _objc_retainAutoreleasedReturnValue();
    uVar6 = 0;
    local_68 = (cfstringStruct *)0x0;
    local_70 = 0;
    local_78 = 0;
    local_80 = 0;
    local_60 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_getRed_green_blue_alpha__026ca660,&local_68,&local_70,&local_78,
               &local_80);
    local_c4 = SUB84(pcVar3,0);
    if (((ulong)pcVar3 & 1) == 0) {
      local_1c0 = local_60;
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__p);
      local_d0 = pcVar4;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    else {
      local_1c0 = local_68;
      local_1b8 = (cfstringStruct *)local_70;
      local_1b0 = (cfstringStruct *)local_78;
      local_1a8 = local_80;
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      uVar6 = local_80;
      param_2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf___3f___3f___3f___3f);
      local_d8 = pcVar4;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    _objc_storeStrong(&local_60,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_size_026cab00);
  local_100 = PTR__OBJC_CLASS___NSString_026cdfe8;
  pcVar3 = (cfstringStruct *)&DAT_026f4858;
  local_e8 = uVar6;
  local_e0 = param_2;
  local_90 = uVar6;
  local_88 = param_2;
  FUN_0083b2d0(&DAT_026f4858,2);
  local_f0 = local_30;
  if (local_30 == (cfstringStruct *)0x0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_30;
  }
  local_128 = local_108;
  local_120 = local_58;
  local_118 = local_50;
  local_110 = (uint)((local_31 & 1) != 0);
  local_f8 = pcVar3;
  _WCRFrostedBubbleEnabled();
  local_10c = SUB84(pcVar3,0);
  local_144 = (uint)(((ulong)pcVar3 & 1) != 0);
  local_140 = local_90;
  local_138 = local_88;
  uVar6 = local_88;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_scale_026ca830);
  local_198 = (ulong)local_144;
  local_1a0 = (ulong)local_110;
  local_1c0 = local_f8;
  local_1b8 = local_128;
  local_1b0 = local_120;
  local_1a8 = local_118;
  local_190 = local_140;
  local_188 = local_138;
  puVar5 = local_100;
  local_180 = uVar6;
  local_158 = (undefined1 *)&local_1c0;
  local_130 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_100,PTR_s_stringWithFormat__0269cca8,&cf_g_lu_______a__3f_d_d_f_d___0fx__0f___0f)
  ;
  local_150 = puVar5;
  _objc_retainAutoreleasedReturnValue();
  local_168 = 0;
  local_160 = puVar5;
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_30,local_168);
  _objc_storeStrong(&local_28,local_168);
  _objc_autoreleaseReturnValue(local_160);
  return;
}

