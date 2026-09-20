// FUN_00ec39c8 @ 00ec39c8

void FUN_00ec39c8(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  cfstringStruct *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  cfstringStruct *local_178;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_118;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  bool local_91;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  char *local_78;
  byte local_6a;
  bool local_69;
  cfstringStruct *local_68;
  bool local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = local_30;
  FUN_00ebd790();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_34 = 1;
  }
  else {
    pcVar3 = local_30;
    FUN_00ec384c();
    if (((ulong)pcVar3 & 1) == 0) {
      FUN_00ecae84();
      _objc_retainAutoreleasedReturnValue();
      local_a0 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_28 = (cfstringStruct *)0x0;
        local_34 = 1;
      }
      else {
        FUN_00ecaf8c();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_s_svgImageNamed_size_color__026a1350;
        pcVar8 = local_a0;
        local_a8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color__026a1350);
        pcVar2 = local_30;
        pcVar3 = local_a0;
        puVar7 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
        if (((ulong)pcVar8 & 1) == 0) {
          pcVar8 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_respondsToSelector__026ca818,
                     PTR_s_svgImageNamed_size_color_alpha__026a3d18);
          pcVar2 = local_30;
          pcVar3 = local_a0;
          if (((ulong)pcVar8 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_respondsToSelector__026ca818,
                       PTR_s_svgImageNamed_color__0269f760);
            if (((ulong)pcVar3 & 1) == 0) {
              local_28 = (cfstringStruct *)0x0;
            }
            else {
              pcVar3 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_svgImageNamed_color__0269f760,local_30,local_a8);
              _objc_retainAutoreleasedReturnValue();
              local_28 = pcVar3;
            }
          }
          else {
            uVar10 = 0x4040000000000000;
            uVar9 = 0x4040000000000000;
            FUN_00ecb360();
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar9,uVar10,0x3ff0000000000000,pcVar3,puVar7,pcVar2,local_a8);
            _objc_retainAutoreleasedReturnValue();
            local_28 = pcVar3;
          }
        }
        else {
          uVar10 = 0x4040000000000000;
          uVar9 = 0x4040000000000000;
          FUN_00ecb360();
          (*(code *)PTR__objc_msgSend_02578628)(uVar9,uVar10,pcVar3,puVar4,pcVar2,local_a8);
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar3;
        }
        local_34 = 1;
        _objc_storeStrong(&local_a8,0);
      }
      _objc_storeStrong(&local_a0,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = &cf___;
      (*(code *)PTR__objc_retain_02578638)();
      local_48 = &cf___;
      pcVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf_image_);
        if (((ulong)pcVar3 & 1) == 0) {
          _objc_storeStrong(&local_40,local_30);
        }
        else {
          pcVar3 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,6);
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            local_118 = &cf___;
          }
          _objc_storeStrong(&local_40,local_118);
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
      }
      else {
        pcVar3 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_substringFromIndex__0269d120,10);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_50 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        if (pcVar3 != (cfstringStruct *)0x0) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,0)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar2 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_59 = false;
          bVar1 = ((ulong)pcVar2 & 1) == 0;
          if (bVar1) {
            local_f8 = &cf___;
          }
          else {
            local_f8 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,0);
            _objc_retainAutoreleasedReturnValue();
            local_58 = local_f8;
          }
          local_59 = !bVar1;
          _objc_storeStrong(&local_40,local_f8);
          if ((local_59 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_58);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
        if ((cfstringStruct *)((long)&MACH_HEADER.magic + 1) < pcVar3) {
          pcVar3 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectAtIndexedSubscript__0269cc78,1)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          pcVar2 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          local_69 = false;
          bVar1 = ((ulong)pcVar2 & 1) == 0;
          if (bVar1) {
            local_108 = &cf___;
          }
          else {
            local_108 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,1);
            _objc_retainAutoreleasedReturnValue();
            local_68 = local_108;
          }
          local_69 = !bVar1;
          _objc_storeStrong(&local_48,local_108);
          if ((local_69 & 1U) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_68);
          }
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_50,0);
      }
      local_6a = 0;
      pcVar5 = "MMDarkModeConfigUtil";
      _objc_getClass();
      local_78 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_isDarkMode_0269f410);
      if (((ulong)pcVar5 & 1) == 0) {
        puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITraitCollection_026ce138,
                   PTR_s_currentTraitCollection_026ca5d8);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_6a = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      else {
        pcVar5 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isDarkMode_0269f410);
        local_6a = (byte)pcVar5;
      }
      if ((local_6a & 1) == 0) {
        pcVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_138 = local_48;
        }
        else {
          local_138 = local_40;
        }
        local_130 = local_138;
      }
      else {
        pcVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
        if (pcVar3 == (cfstringStruct *)0x0) {
          local_128 = local_40;
        }
        else {
          local_128 = local_48;
        }
        local_130 = local_128;
      }
      pcVar3 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      local_80 = local_130;
      _WCRChatAttachmentIconDirectoryPath();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_absolutePathFromStored_underDire_026a1bd8,local_130);
      _objc_retainAutoreleasedReturnValue();
      local_88 = puVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (puVar4 == (undefined *)0x0) {
        puVar7 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_absoluteAlbumIconPathFromStored__026ab528,local_80);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_88;
        local_88 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if (((puVar4 == (undefined *)0x0) &&
          (pcVar3 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
          pcVar3 != (cfstringStruct *)0x0)) &&
         (pcVar2 = local_80,
         (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_isEqualToString__0269ccc8,local_40),
         pcVar3 = local_40, puVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0,
         ((ulong)pcVar2 & 1) == 0)) {
        _WCRChatAttachmentIconDirectoryPath();
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_absolutePathFromStored_underDire_026a1bd8,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_88;
        local_88 = puVar4;
        (*(code *)PTR__objc_release_02578630)(puVar7);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        puVar4 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
        if (puVar4 == (undefined *)0x0) {
          puVar7 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_absoluteAlbumIconPathFromStored__026ab528,local_40);
          _objc_retainAutoreleasedReturnValue();
          puVar4 = local_88;
          local_88 = puVar7;
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
      }
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      if ((puVar4 == (undefined *)0x0) &&
         (pcVar3 = local_30,
         (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,&cf__),
         ((ulong)pcVar3 & 1) != 0)) {
        _objc_storeStrong(&local_88,local_30);
      }
      puVar4 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_length_0269cca0);
      local_91 = false;
      if (puVar4 == (undefined *)0x0) {
        local_178 = (cfstringStruct *)0x0;
      }
      else {
        local_178 = (cfstringStruct *)PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                   local_88);
        _objc_retainAutoreleasedReturnValue();
        local_90 = local_178;
      }
      local_91 = puVar4 != (undefined *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_178;
      if ((local_91 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_90);
      }
      local_34 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

