// displayImageForIconValue:size:color: @ 0110c004

/* Function Stack Size: 0x28 bytes */

ID WCRefinePluginIconCatalog::displayImageForIconValue_size_color_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5)

{
  ulong uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  double dVar9;
  double local_178;
  cfstringStruct *local_150;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  uint local_fc;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  char *local_a0;
  byte local_92;
  bool local_91;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_5d;
  undefined4 local_5c;
  ulong local_58;
  undefined8 local_50;
  double local_48;
  ulong local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_50 = 0;
  local_48 = param_4;
  _objc_storeStrong(&local_50,param_5);
  uVar1 = local_40;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_58 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_28 = (cfstringStruct *)0x0;
    local_5c = 1;
  }
  else {
    uVar1 = local_58;
    _WCRPluginIconValueIsAlbum();
    local_fc = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,&cf__);
      local_fc = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_containsString__0269d0b0,&cf__PluginIcons_);
        local_fc = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_);
          local_fc = (uint)uVar1;
        }
      }
    }
    local_5d = (byte)local_fc & 1;
    if ((local_fc & 1) == 0) {
      pcVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,local_30,PTR_s_previewImageNamed_size_color__026a6580,local_58,local_50);
      _objc_retainAutoreleasedReturnValue();
      local_5c = 1;
      local_28 = pcVar8;
    }
    else {
      pcVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_albumPathsForIconValue__026aeea8,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_68 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_count_0269cfe0);
      local_79 = false;
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_108 = &::cf___;
      }
      else {
        local_108 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_108;
      }
      local_79 = pcVar8 != (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_70 = local_108;
      if ((local_79 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      pcVar8 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_count_0269cfe0);
      local_91 = false;
      if (pcVar8 < (cfstringStruct *)0x2) {
        local_118 = &::cf___;
      }
      else {
        local_118 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_objectAtIndexedSubscript__0269cc78,1);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_118;
      }
      local_91 = pcVar8 >= (cfstringStruct *)0x2;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = local_118;
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_92 = 0;
      pcVar2 = "MMDarkModeConfigUtil";
      _objc_getClass();
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410);
      if (((ulong)pcVar2 & 1) == 0) {
        puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITraitCollection_026ce138,
                   PTR_s_currentTraitCollection_026ca5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_92 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      else {
        pcVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isDarkMode_0269f410);
        local_92 = (byte)pcVar2;
      }
      if ((local_92 & 1) == 0) {
        pcVar8 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_140 = local_88;
        }
        else {
          local_140 = local_70;
        }
        local_138 = local_140;
      }
      else {
        pcVar8 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (pcVar8 == (cfstringStruct *)0x0) {
          local_130 = local_70;
        }
        else {
          local_130 = local_88;
        }
        local_138 = local_130;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_138;
      pcVar8 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_absoluteAlbumIconPathFromStored__026ab528,local_138);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_length_0269cca0);
      if (pcVar8 == (cfstringStruct *)0x0) {
        if ((local_92 & 1) == 0) {
          local_150 = local_88;
        }
        else {
          local_150 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_b8 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0);
        if ((local_150 != (cfstringStruct *)0x0) &&
           (pcVar8 = local_b8,
           (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isEqualToString__0269ccc8,local_a8),
           ((ulong)pcVar8 & 1) == 0)) {
          pcVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_absoluteAlbumIconPathFromStored__026ab528,local_b8);
          _objc_retainAutoreleasedReturnValue();
          pcVar8 = local_b0;
          local_b0 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar8);
        }
        _objc_storeStrong(&local_b8,0);
      }
      pcVar8 = local_b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_length_0269cca0);
      if (pcVar8 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_5c = 1;
      }
      else {
        local_c0 = (char *)0x0;
        pcVar8 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_pathExtension_0269e090);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = pcVar8;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar8);
        if (((ulong)pcVar6 & 1) != 0) {
          pcVar2 = "WCSVGImage";
          _objc_getClass();
          pcVar8 = &cf_imageWithContentsOfFile_size_color_alpha_rotate_;
          _NSSelectorFromString();
          if (local_48 <= 0.0) {
            local_178 = 24.0;
          }
          else {
            local_178 = local_48;
          }
          if ((pcVar2 != (char *)0x0) &&
             (pcVar7 = pcVar2,
             (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar8)
             , pcVar5 = local_b0, ((ulong)pcVar7 & 1) != 0)) {
            dVar9 = local_178;
            FUN_0110846c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,dVar9,0x3ff0000000000000,0,pcVar2,pcVar8,pcVar5,local_50);
            _objc_retainAutoreleasedReturnValue();
            pcVar7 = local_c0;
            local_c0 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar7);
          }
        }
        if (local_c0 == (char *)0x0) {
          pcVar7 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                     local_b0);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_c0;
          local_c0 = pcVar7;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        pcVar8 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,local_30,PTR_s_resizedImage_side__026a3d20,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_5c = 1;
        local_28 = pcVar8;
        _objc_storeStrong(&local_c0,0);
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
    }
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

