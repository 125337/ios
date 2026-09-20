// FUN_006423f4 @ 006423f4

void FUN_006423f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *local_1e0;
  ulong local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 local_188;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  ulong local_160;
  undefined1 *local_158;
  uint local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  ulong local_138;
  ulong local_130;
  ulong local_128;
  long local_120;
  undefined *local_118;
  ulong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  long local_d8;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  ulong local_b8;
  undefined4 local_ac;
  ulong local_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  undefined *local_50;
  undefined4 local_44;
  long local_40;
  long local_38;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  local_e0 = param_5;
  local_d8 = param_6;
  local_d0 = param_7;
  local_c8 = param_8;
  _objc_storeStrong(&local_28,param_5);
  local_30 = local_d8;
  local_38 = local_d0;
  local_40 = 0;
  _objc_storeStrong(&local_40,local_c8);
  if (((local_28 == 0) || (local_38 < local_30)) || (local_40 == 0)) {
    local_44 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    local_e8 = puVar1;
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar1;
    for (local_68 = 0; local_68 < local_30; local_68 = local_68 + 1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_appendString__0269ccb0,&cf_space_s_);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    local_120 = local_40;
    local_118 = local_50;
    uVar2 = local_28;
    local_108 = param_1;
    local_100 = param_2;
    local_f8 = param_3;
    local_f0 = param_4;
    local_88 = param_1;
    local_80 = param_2;
    local_78 = param_3;
    local_70 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
    local_110 = uVar2;
    _NSStringFromClass();
    local_128 = uVar2;
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_28;
    local_138 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_tag_026cab98);
    uVar2 = local_28;
    local_130 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isHidden_026ca768);
    local_13c = (undefined4)uVar2;
    local_14c = (uint)((uVar2 & 1) != 0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
    local_1c8 = (ulong)local_14c;
    local_1e0 = local_118;
    local_1d8 = local_138;
    local_1d0 = local_130;
    local_1b8 = local_88;
    local_1b0 = local_80;
    local_1a8 = local_78;
    local_1a0 = local_70;
    local_1c0 = param_4;
    local_158 = (undefined1 *)&local_1e0;
    local_148 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_120,PTR_s_appendFormat__0269d148,
               &cf___<__tag__ldhidden__dalpha___2fframe____0f,__0f,__0f,__0f_>);
    (*(code *)PTR__objc_release_02578630)(local_138);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_subviews_026cab40);
    local_160 = uVar2;
    _objc_retainAutoreleasedReturnValue();
    local_90 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_count_0269cfe0);
    local_ac = 0x28;
    local_170 = uVar2;
    if (0x27 < (long)uVar2) {
      local_170 = 0x28;
    }
    local_b8 = local_170;
    local_a0 = local_170;
    local_168 = uVar2;
    local_a8 = uVar2;
    local_98 = uVar2;
    for (local_c0 = 0; local_c0 < (long)local_a0; local_c0 = local_c0 + 1) {
      uVar2 = local_90;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_90,PTR_s_objectAtIndexedSubscript__0269cc78,local_c0);
      local_178 = uVar2;
      _objc_retainAutoreleasedReturnValue();
      local_180 = uVar2;
      FUN_006423f4();
      (*(code *)PTR__objc_release_02578630)(local_180);
    }
    if ((long)local_a0 < (long)local_98) {
      local_1d8 = local_98 - local_a0;
      local_1e0 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_appendFormat__0269d148,&cf__);
    }
    local_188 = 0;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_50,local_188);
    local_44 = 0;
  }
  local_190 = 0;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_28,local_190);
  return;
}

