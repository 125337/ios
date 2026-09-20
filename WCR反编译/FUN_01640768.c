// FUN_01640768 @ 01640768

void FUN_01640768(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *local_290;
  char *local_278;
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined *local_238;
  char *local_230;
  byte local_221;
  undefined *local_220;
  undefined *local_218;
  bool local_209;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  undefined4 local_1dc;
  undefined *local_1d8;
  undefined8 local_1d0;
  long local_1c8;
  char *local_1c0;
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
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
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
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
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1c8 = 0;
  _objc_storeStrong(&local_1c8,param_2);
  local_1d8 = (undefined *)0x0;
  local_1d0 = param_1;
  _objc_storeStrong(&local_1d8,param_3);
  lVar2 = local_1c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_1c8,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_1c0 = (char *)0x0;
    local_1dc = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "MMThemeManager";
    local_1e8 = pcVar3;
    _objc_getClass();
    local_1f0 = pcVar4;
    if ((local_1e8 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      pcVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1d0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                 PTR_s_previewImageNamed_size__026ab510,local_1c8);
      _objc_retainAutoreleasedReturnValue();
      local_1dc = 1;
      local_1c0 = pcVar3;
    }
    else {
      local_278 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_209 = false;
      bVar1 = local_278 == (char *)0x0;
      local_1f8 = local_278;
      if (bVar1) {
        local_278 = (char *)0x0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_getService__0269d170,local_1f0);
        _objc_retainAutoreleasedReturnValue();
        local_208 = local_278;
      }
      local_209 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_200 = local_278;
      if ((local_209 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_208);
      }
      local_221 = 0;
      bVar1 = local_1d8 == (undefined *)0x0;
      if (bVar1) {
        local_290 = PTR__OBJC_CLASS___UIColor_026cdf78;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
        _objc_retainAutoreleasedReturnValue();
        local_220 = local_290;
      }
      else {
        local_290 = local_1d8;
      }
      local_221 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_218 = local_290;
      if ((local_221 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_220);
      }
      local_230 = (char *)0x0;
      local_238 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
      if ((local_200 != (char *)0x0) &&
         (pcVar4 = local_200,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_200,PTR_s_respondsToSelector__026ca818,
                    PTR_s_svgImageNamed_size_color_alpha__026a3d18), lVar2 = local_1c8,
         pcVar3 = local_200, puVar5 = local_238, ((ulong)pcVar4 & 1) != 0)) {
        uVar6 = local_1d0;
        uVar7 = local_1d0;
        FUN_0163f628();
        local_248 = uVar6;
        local_240 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar6,uVar7,0x3ff0000000000000,pcVar3,puVar5,lVar2,local_218);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_230;
        local_230 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
      }
      if (((local_230 == (char *)0x0) && (local_200 != (char *)0x0)) &&
         (pcVar3 = local_200,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_200,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760
                   ), ((ulong)pcVar3 & 1) != 0)) {
        pcVar4 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_200,PTR_s_svgImageNamed_color__0269f760,local_1c8,local_218);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_230;
        local_230 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_230 == (char *)0x0) {
        pcVar4 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1d0,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_previewImageNamed_size__026ab510,local_1c8);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_230;
        local_230 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      if (local_230 == (char *)0x0) {
        local_1b8 = &cf_icons_outlined_close;
        local_f0 = &cf_xmark;
        local_1b0 = &cf_icons_outlined_mosaic;
        local_e8 = &cf_square_grid_3x3_fill;
        local_1a8 = &cf_icons_outlined_mosaic2;
        local_e0 = &cf_square_grid_3x3_fill;
        local_1a0 = &cf_icons_outlined_pencil;
        local_d8 = &cf_pencil_tip;
        local_198 = &cf_icons_outlined_ocr;
        local_d0 = &cf_text_viewfinder;
        local_190 = &cf_icons_outlined_translation;
        local_c8 = &cf_character_book_closed;
        local_188 = &cf_icons_filled_translate;
        local_c0 = &cf_character_book_closed;
        local_180 = &cf_icons_outlined_sticker;
        local_b8 = &cf_seal;
        local_178 = &cf_icons_outlined_download;
        local_b0 = &cf_square_and_arrow_down;
        local_170 = &cf_icons_filled_copy;
        local_a8 = &cf_doc_on_doc;
        local_168 = &cf_copy_filled;
        local_a0 = &cf_doc_on_doc;
        local_160 = &cf_icons_filled_done;
        local_98 = &cf_checkmark;
        local_158 = &cf_icons_filled_album;
        local_90 = &cf_photo_on_rectangle;
        local_150 = &cf_icons_filled_camera;
        local_88 = &cf_camera;
        local_148 = &cf_icons_filled_crop;
        local_80 = &cf_crop;
        local_140 = &cf_icons_filled_makesticker;
        local_78 = &cf_iphone;
        local_138 = &cf_icons_outlined_arrow;
        local_70 = &cf_arrow_up_right;
        local_130 = &cf_icons_outlined_scroll;
        local_68 = &cf_arrow_up_arrow_down;
        local_128 = &cf_icons_outlined_fold;
        local_60 = &cf_chevron_down;
        local_120 = &cf_icons_outlined_unfold;
        local_58 = &cf_chevron_up;
        local_118 = &cf_icons_filled_max_window;
        local_50 = &cf_arrow_up_left_and_arrow_down_right;
        local_110 = &cf_icons_filled_sticker;
        local_48 = &cf_rectangle_on_rectangle;
        local_108 = &cf_icons_filled_stickerAlbum;
        local_40 = &cf_rectangle_on_rectangle;
        local_100 = &cf_icons_filled_share;
        local_38 = &cf_square_and_arrow_up;
        local_f8 = &cf_icons_filled_chats;
        local_30 = &cf_bubble_left_and_bubble_right_fill;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_f0,&local_1b8,0x19);
        _objc_retainAutoreleasedReturnValue();
        local_250 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_objectForKeyedSubscript__0269d098,local_1c8);
        _objc_retainAutoreleasedReturnValue();
        local_258 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_length_0269cca0);
        if (puVar5 != (undefined *)0x0) {
          pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_258);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_230;
          local_230 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
          pcVar4 = local_230;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_230,PTR_s_imageWithTintColor_renderingMode_026a31a0,local_218,1);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = local_230;
          local_230 = pcVar4;
          (*(code *)PTR__objc_release_02578630)(pcVar3);
        }
        _objc_storeStrong(&local_258);
        _objc_storeStrong(&local_250,0);
      }
      if ((local_230 != (char *)0x0) &&
         (pcVar3 = local_230,
         (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_renderingMode_026a02c0),
         pcVar3 != (char *)((long)&MACH_HEADER.magic + 1))) {
        pcVar4 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)(local_230,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_230;
        local_230 = pcVar4;
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
      pcVar3 = local_230;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = pcVar3;
      local_1dc = 1;
      _objc_storeStrong(&local_230);
      _objc_storeStrong(&local_218,0);
      _objc_storeStrong(&local_200,0);
      _objc_storeStrong(&local_1f8,0);
    }
  }
  _objc_storeStrong(&local_1d8);
  _objc_storeStrong(&local_1c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_1c0);
  return;
}

