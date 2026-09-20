// FUN_002d0aa4 @ 002d0aa4

void FUN_002d0aa4(undefined8 param_1)

{
  bool bVar1;
  uint uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_240;
  cfstringStruct *local_1d8;
  cfstringStruct **local_1b0;
  cfstringStruct **local_1a0;
  cfstringStruct **local_198;
  cfstringStruct *local_180;
  cfstringStruct *local_160;
  cfstringStruct *local_118;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  uint local_d0;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_118 = local_30;
  FUN_0029cc70();
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_118;
  if (local_118 == (cfstringStruct *)0x0) {
    local_118 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_selectedIndex_0269e580);
  }
  local_50 = local_118;
  pcVar4 = local_30;
  FUN_002b13fc();
  local_51 = (byte)pcVar4;
  pcVar4 = local_30;
  FUN_002d20a8();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_50;
  local_60 = pcVar4;
  FUN_002d2804();
  _objc_retainAutoreleasedReturnValue();
  local_68 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringFromIndex__0269d120,10);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_89 = 0;
    local_78 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_count_0269cfe0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_160 = &cf___;
    }
    else {
      local_160 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = local_160;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_160;
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    local_a1 = 0;
    pcVar4 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_count_0269cfe0);
    if (pcVar4 < (cfstringStruct *)((long)&MACH_HEADER.magic + 2)) {
      local_180 = &cf___;
    }
    else {
      local_180 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = local_180;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_180;
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_51 & 1) == 0) {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_1b0 = &local_98;
      }
      else {
        local_1b0 = &local_80;
      }
      local_1a0 = local_1b0;
    }
    else {
      pcVar4 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_198 = &local_80;
      }
      else {
        local_198 = &local_98;
      }
      local_1a0 = local_198;
    }
    pcVar4 = *local_1a0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar4;
    FUN_002d2b18();
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 0;
    local_b8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_1d8 = (cfstringStruct *)0x0;
    }
    else {
      local_1d8 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_b8
                );
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 1;
      local_c8 = local_1d8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = local_1d8;
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    pcVar4 = local_c0;
    puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = ((ulong)pcVar4 & 1) != 0;
    if (bVar1) {
      pcVar4 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
    local_d0 = (uint)bVar1;
    _objc_storeStrong(&local_c0);
    _objc_storeStrong(&local_b8,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    if (local_d0 != 0) goto LAB_002d17b0;
  }
  pcVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf_image_);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringFromIndex__0269d120,6);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar4;
    FUN_002d2b18();
    _objc_retainAutoreleasedReturnValue();
    local_d8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    local_e9 = 0;
    pcVar4 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_240 = (cfstringStruct *)0x0;
    }
    else {
      local_240 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,local_d8
                );
      _objc_retainAutoreleasedReturnValue();
      local_e9 = 1;
      local_e8 = local_240;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_240;
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    pcVar4 = local_e0;
    puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = ((ulong)pcVar4 & 1) != 0;
    if (bVar1) {
      pcVar4 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
    local_d0 = (uint)bVar1;
    _objc_storeStrong(&local_e0);
    _objc_storeStrong(&local_d8,0);
    if (local_d0 != 0) goto LAB_002d17b0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = &cf___;
  pcVar4 = local_68;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_hasPrefix__0269d320,&cf_svg_);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    if ((pcVar4 != (cfstringStruct *)0x0) &&
       (pcVar4 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_containsString__0269d0b0,&cf__),
       ((ulong)pcVar4 & 1) == 0)) {
      _objc_storeStrong(&local_f8,local_68);
    }
  }
  else {
    pcVar3 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_substringFromIndex__0269d120,4);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_f8;
    local_f8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar4 = local_f8;
  (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
  if (pcVar4 == (cfstringStruct *)0x0) {
    pcVar3 = local_50;
    FUN_0029cd84();
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar3;
    FUN_002d2c60();
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_f8;
    local_f8 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar4 = local_f8;
  FUN_002d33d0(local_f8,local_60);
  _objc_retainAutoreleasedReturnValue();
  local_100 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    uVar2 = 0xd;
    FUN_002b0a2c();
    if (((uVar2 & 1) == 0) ||
       (puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_respondsToSelector__026ca818,
                  PTR_s_systemImageNamed__026cab78), ((ulong)puVar5 & 1) == 0)) {
      local_28 = (cfstringStruct *)0x0;
    }
    else {
      pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_sparkles);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar4;
  }
  local_d0 = 1;
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
LAB_002d17b0:
  _objc_storeStrong(&local_68);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

