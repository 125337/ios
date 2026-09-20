// normalizedAlbumIconValue: @ 0110a9e4

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

ID WCRefinePluginIconCatalog::normalizedAlbumIconValue_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c8;
  uint local_190;
  uint local_184;
  bool local_169;
  cfstringStruct *local_168;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  bool local_141;
  cfstringStruct *local_140;
  byte local_131;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  byte local_a9;
  cfstringStruct *local_a8;
  byte local_99;
  cfstringStruct *local_98;
  byte local_89;
  cfstringStruct *local_88;
  byte local_79;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  undefined4 local_4c;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  SEL local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar1 = local_40;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &::cf___;
    local_4c = 1;
  }
  else {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_image_);
    local_59 = 0;
    local_69 = 0;
    local_79 = 0;
    local_89 = 0;
    local_99 = 0;
    local_a9 = 0;
    local_b9 = 0;
    local_c9 = 0;
    local_d9 = 0;
    local_e9 = 0;
    local_f9 = 0;
    local_109 = 0;
    local_184 = 0;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
      local_184 = 0;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__);
        local_190 = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_containsString__0269d0b0,&cf__PluginIcons_);
          local_190 = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_);
            local_190 = 1;
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_48;
              (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
              _objc_retainAutoreleasedReturnValue();
              local_59 = 1;
              local_58 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              _objc_retainAutoreleasedReturnValue();
              local_69 = 1;
              local_68 = pcVar1;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_190 = 1;
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_48;
                (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
                _objc_retainAutoreleasedReturnValue();
                local_79 = 1;
                local_78 = pcVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_89 = 1;
                local_88 = pcVar1;
                (*(code *)PTR__objc_msgSend_02578628)();
                local_190 = 1;
                if (((ulong)pcVar1 & 1) == 0) {
                  pcVar1 = local_48;
                  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
                  _objc_retainAutoreleasedReturnValue();
                  local_99 = 1;
                  local_98 = pcVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  _objc_retainAutoreleasedReturnValue();
                  local_a9 = 1;
                  local_a8 = pcVar1;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_190 = 1;
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_48;
                    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
                    _objc_retainAutoreleasedReturnValue();
                    local_b9 = 1;
                    local_b8 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    _objc_retainAutoreleasedReturnValue();
                    local_c9 = 1;
                    local_c8 = pcVar1;
                    (*(code *)PTR__objc_msgSend_02578628)();
                    local_190 = 1;
                    if (((ulong)pcVar1 & 1) == 0) {
                      pcVar1 = local_48;
                      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090);
                      _objc_retainAutoreleasedReturnValue();
                      local_d9 = 1;
                      local_d8 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      _objc_retainAutoreleasedReturnValue();
                      local_e9 = 1;
                      local_e8 = pcVar1;
                      (*(code *)PTR__objc_msgSend_02578628)();
                      local_190 = 1;
                      if (((ulong)pcVar1 & 1) == 0) {
                        pcVar1 = local_48;
                        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_pathExtension_0269e090)
                        ;
                        _objc_retainAutoreleasedReturnValue();
                        local_f9 = 1;
                        local_f8 = pcVar1;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        _objc_retainAutoreleasedReturnValue();
                        local_109 = 1;
                        local_108 = pcVar1;
                        (*(code *)PTR__objc_msgSend_02578628)();
                        local_190 = (uint)pcVar1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        local_184 = local_190;
      }
    }
    if ((local_109 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_108);
    }
    if ((local_f9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f8);
    }
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_e8);
    }
    if ((local_d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_d8);
    }
    if ((local_c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_c8);
    }
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    if ((local_a9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a8);
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if ((local_69 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if ((local_184 & 1) == 0) {
      pcVar1 = local_48;
      _WCRPluginIconValueIsAlbum();
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf__),
         pcVar1 = local_48, ((ulong)pcVar2 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
        local_4c = 1;
      }
      else {
        pcVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_albumPathsForIconValue__026aeea8,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_120 = pcVar1;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_count_0269cfe0);
        local_1c8 = local_30;
        local_131 = 0;
        local_141 = false;
        if (pcVar1 == (cfstringStruct *)0x0) {
          local_1c8 = &::cf___;
        }
        else {
          pcVar2 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectAtIndexedSubscript__0269cc78,0);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1c8,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = local_1c8;
        }
        local_141 = pcVar1 != (cfstringStruct *)0x0;
        (*(code *)PTR__objc_retain_02578638)();
        local_128 = local_1c8;
        if ((local_141 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_140);
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        pcVar1 = local_120;
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_count_0269cfe0);
        local_1e8 = local_30;
        if (pcVar1 < (cfstringStruct *)0x2) {
          local_1e8 = &::cf___;
        }
        else {
          local_158 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_120,PTR_s_objectAtIndexedSubscript__0269cc78,1);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1e8,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0);
          _objc_retainAutoreleasedReturnValue();
          local_168 = local_1e8;
        }
        local_169 = pcVar1 >= (cfstringStruct *)0x2;
        (*(code *)PTR__objc_retain_02578638)();
        local_150 = local_1e8;
        if (local_169) {
          (*(code *)PTR__objc_release_02578630)(local_168);
          (*(code *)PTR__objc_release_02578630)(local_158);
        }
        pcVar1 = local_128;
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
        if ((pcVar1 == (cfstringStruct *)0x0) &&
           (pcVar2 = local_150,
           (*(code *)PTR__objc_msgSend_02578628)(local_150,PTR_s_length_0269cca0), pcVar1 = local_48
           , pcVar2 == (cfstringStruct *)0x0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = pcVar1;
        }
        else {
          pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                     &cf_imagepair______);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar1;
        }
        local_4c = 1;
        _objc_storeStrong(&local_150);
        _objc_storeStrong(&local_128,0);
        _objc_storeStrong(&local_120,0);
      }
    }
    else {
      pcVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_118 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_length_0269cca0);
      pcVar1 = local_48;
      if (pcVar2 == (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar1;
      }
      else {
        pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_imagepair____);
        _objc_retainAutoreleasedReturnValue();
        local_28 = pcVar1;
      }
      local_4c = 1;
      _objc_storeStrong(&local_118,0);
    }
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

