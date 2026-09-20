// FUN_01076d6c @ 01076d6c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01076d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *local_2e8;
  cfstringStruct *local_2d0;
  uint local_28c;
  uint local_238;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1e8;
  uint local_1b4;
  cfstringStruct *local_1b0;
  undefined1 *local_178;
  undefined1 *local_168;
  undefined1 *local_158;
  undefined1 *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  byte local_131;
  undefined1 *local_130;
  byte local_121;
  cfstringStruct *local_120;
  undefined *local_118;
  undefined1 local_10a;
  byte local_109;
  cfstringStruct *local_108;
  byte local_f9;
  cfstringStruct *local_f8;
  byte local_e9;
  undefined1 *local_e8;
  byte local_da;
  byte local_d9;
  undefined1 *local_d8;
  byte local_ca;
  bool local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  undefined1 *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  int local_54;
  long local_50;
  long local_48;
  ulong local_40;
  long local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_3);
  uVar3 = local_40;
  local_50 = param_1;
  if (local_48 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) != 0) {
      pcVar5 = (cfstringStruct *)PTR_WCRefineLinkParser_026ce168;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineLinkParser_026ce168,PTR_s_JSONObjectFromString__026adcc0,local_40);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_60 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
      if (((ulong)pcVar5 & 1) == 0) {
        local_1b0 = (cfstringStruct *)0x0;
      }
      else {
        local_1b0 = local_60;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = local_1b0;
      local_71 = 0;
      local_1b4 = 1;
      if (local_1b0 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_ok);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_1b0;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_1b4 = (uint)local_1b0 ^ 1;
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      if ((local_1b4 & 1) == 0) {
        puVar2 = PTR_WCRefineLinkParseResult_026cecb0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParseResult_026cecb0,PTR_s_new_0269d288);
        local_98 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setPlatform__026adde8,5);
        pcVar5 = *(cfstringStruct **)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_sourceURL_026ad980);
        _objc_retainAutoreleasedReturnValue();
        local_1e8 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          local_1e8 = &cf___;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setSourceURL__026addf0,local_1e8);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_a1 = 0;
        local_b1 = 0;
        if (((ulong)pcVar6 & 1) == 0) {
          pcVar6 = *(cfstringStruct **)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_pageURL_026ae148);
          _objc_retainAutoreleasedReturnValue();
          local_b1 = 1;
          local_208 = pcVar6;
          if (pcVar6 == (cfstringStruct *)0x0) {
            local_208 = &cf___;
          }
          local_1f8 = local_208;
          local_b0 = pcVar6;
        }
        else {
          local_1f8 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_page);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 1;
          local_a0 = local_1f8;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setResolvedURL__026addf8,local_1f8);
        if ((local_b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b0);
        }
        if ((local_a1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_a0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_item);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        pcVar6 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_c9 = false;
        bVar1 = ((ulong)pcVar6 & 1) == 0;
        if (bVar1) {
          local_218 = (cfstringStruct *)0x0;
        }
        else {
          local_218 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_item);
          _objc_retainAutoreleasedReturnValue();
          local_c8 = local_218;
        }
        local_c9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = local_218;
        if ((local_c9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_c8);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        if (local_c0 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_fillTikTokResult_fromItem__026ae0c8,
                     local_98,local_c0);
        }
        puVar7 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d9 = 0;
        bVar1 = true;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          local_d9 = 1;
          local_d8 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = puVar8 != (undefined1 *)0x0;
        }
        if ((local_d9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar7);
        local_da = 0;
        puVar7 = local_98;
        local_ca = bVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_e9 = 0;
        local_f9 = 0;
        local_238 = 0;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          local_e9 = 1;
          local_e8 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_238 = 0;
          if (puVar8 == (undefined1 *)0x0) {
            pcVar5 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
            _objc_retainAutoreleasedReturnValue();
            local_f9 = 1;
            puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_f8 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
            local_238 = (uint)pcVar5;
          }
        }
        if ((local_f9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_f8);
        }
        if ((local_e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_e8);
        }
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if ((local_238 & 1) != 0) {
          pcVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR_WCRefineLinkParser_026ce168;
          local_108 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_tikTokURLLooksWatermarked__026ae0a8,
                     pcVar5);
          local_109 = (byte)puVar2;
          puVar2 = PTR_WCRefineLinkParser_026ce168;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLinkParser_026ce168,PTR_s_tikTokURLIsContentCDN__026ae1c8,local_108
                    );
          local_10a = SUB81(puVar2,0);
          if (((local_109 & 1) == 0) && (((ulong)puVar2 & 1) != 0)) {
            puVar2 = PTR_WCRefineLinkParser_026ce168;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineLinkParser_026ce168,PTR_s_preferCleanMediaURL__026add40,local_108
                      );
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setVideoURL__026adbb0);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            puVar2 = PTR_WCRefineLinkParser_026ce168;
            puVar7 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar2,PTR_s_variantWithURL_label_width_heigh_026addc8,puVar7,&cf_e4lpS,0,0);
            _objc_retainAutoreleasedReturnValue();
            local_118 = puVar2;
            (*(code *)PTR__objc_release_02578630)(puVar7);
            if (local_118 != (undefined *)0x0) {
              local_30 = local_118;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_30,1);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setVideoVariants__026add50);
              (*(code *)PTR__objc_release_02578630)(puVar2);
            }
            local_da = 1;
            _objc_storeStrong(&local_118,0);
          }
          _objc_storeStrong(&local_108,0);
        }
        puVar7 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_title_0269d250);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_121 = 0;
        local_28c = 0;
        if (puVar8 == (undefined1 *)0x0) {
          pcVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          local_121 = 1;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_120 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_28c = (uint)pcVar5;
        }
        if ((local_121 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_120);
        }
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if ((local_28c & 1) != 0) {
          pcVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setTitle__0269cef0);
          (*(code *)PTR__objc_release_02578630)(pcVar5);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineLinkParser_026ce168,PTR_s_normalizeVideoVersusCover__026adff8,
                   local_98);
        puVar7 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_131 = 0;
        bVar1 = true;
        if (puVar8 == (undefined1 *)0x0) {
          puVar8 = local_98;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_imageURLs_026adac8);
          _objc_retainAutoreleasedReturnValue();
          local_131 = 1;
          local_130 = puVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = puVar8 != (undefined1 *)0x0;
        }
        if ((local_131 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_130);
        }
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (bVar1) {
          if ((local_da & 1) == 0) {
            local_2d0 = &cf_item;
            if ((local_ca & 1) == 0) {
              local_2d0 = &cf__;
            }
          }
          else {
            local_2d0 = &cf_video_tag;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_140 = local_2d0;
          pcVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_captured);
          _objc_retainAutoreleasedReturnValue();
          puVar7 = local_98;
          local_148 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          (*(code *)PTR__objc_msgSend_02578628)();
          bVar1 = puVar8 < (undefined1 *)((long)&segment_command_00000020.maxprot + 3);
          if (bVar1) {
            local_2e8 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
            _objc_retainAutoreleasedReturnValue();
            local_178 = local_2e8;
          }
          else {
            local_158 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_videoURL_026ad970);
            _objc_retainAutoreleasedReturnValue();
            local_2e8 = local_158;
            (*(code *)PTR__objc_msgSend_02578628)();
            _objc_retainAutoreleasedReturnValue();
            local_168 = local_2e8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = local_2e8;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_178);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_168);
            (*(code *)PTR__objc_release_02578630)(local_158);
          }
          (*(code *)PTR__objc_release_02578630)(puVar7);
          (*(code *)PTR__objc_msgSend_02578628)
                    (*(undefined8 *)(param_1 + 0x20),PTR_s_finishWithResult_error__026adfc0,local_98
                    );
          _objc_storeStrong(&local_150,0);
          _objc_storeStrong(&local_148,0);
          _objc_storeStrong(&local_140,0);
        }
        _objc_storeStrong(&local_c0);
        _objc_storeStrong(&local_98,0);
        local_54 = 0;
      }
      else {
        lVar4 = *(long *)(param_1 + 0x20);
        (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_pollCount_026ae170);
        if (lVar4 == 1) {
LAB_01077080:
          pcVar5 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_captured);
          _objc_retainAutoreleasedReturnValue();
          pcVar6 = local_68;
          local_80 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_ready);
          _objc_retainAutoreleasedReturnValue();
          pcVar5 = local_68;
          local_88 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_objectForKeyedSubscript__0269d098,&cf_err);
          _objc_retainAutoreleasedReturnValue();
          local_90 = pcVar5;
          _objc_storeStrong(&local_90);
          _objc_storeStrong(&local_88,0);
          _objc_storeStrong(&local_80,0);
        }
        else {
          lVar4 = *(long *)(param_1 + 0x20);
          (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_pollCount_026ae170);
          if (lVar4 % 5 == 0) goto LAB_01077080;
        }
        local_54 = 1;
      }
      _objc_storeStrong(&local_68);
      _objc_storeStrong(&local_60,0);
      if (local_54 == 0) {
        local_54 = 0;
      }
      goto LAB_01078018;
    }
  }
  lVar4 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_pollCount_026ae170);
  if (lVar4 != 1) {
    (*(code *)PTR__objc_msgSend_02578628)(*(undefined8 *)(param_1 + 0x20),PTR_s_pollCount_026ae170);
  }
  local_54 = 1;
LAB_01078018:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

