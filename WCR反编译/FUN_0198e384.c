// FUN_0198e384 @ 0198e384

void FUN_0198e384(double param_1,undefined8 param_2,byte param_3)

{
  undefined1 *puVar1;
  double dVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  cfstringStruct *local_138;
  double local_108;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  uint local_b8;
  undefined1 local_b1;
  double local_b0;
  byte local_a1;
  double local_a0;
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
  local_98 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_98,param_2);
  local_108 = param_1;
  if (param_1 <= 0.0) {
    local_108 = 35.0;
  }
  local_b0 = local_108;
  pcVar3 = local_98;
  local_a1 = param_3;
  local_a0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_isDir);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  dVar2 = local_b0;
  uVar5 = (ulong)pcVar4 & 0xffffffff;
  local_b1 = SUB81(pcVar4,0);
  if (((ulong)pcVar4 & 1) != 0) {
    FUN_019b29d4();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_icons_filled_folder;
    FUN_01986b9c(dVar2,&cf_icons_filled_folder,uVar5,&cf_folder_fill);
    _objc_retainAutoreleasedReturnValue();
    local_90 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    local_b8 = 1;
    goto LAB_0198ed64;
  }
  pcVar3 = local_98;
  (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
  _objc_retainAutoreleasedReturnValue();
  local_138 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_138 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_138;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = pcVar4;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_svg);
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_c8;
    FUN_0198b764();
    local_d8 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = &cf_fileicon_unknown_icon;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = &cf_doc;
    puVar1 = (undefined1 *)((long)&local_d8[-1].field3_0x18 + 5);
    if ((undefined1 *)((long)&local_d8[-1].field3_0x18 + 7) < (undefined1 *)0x2 ||
        puVar1 == (undefined1 *)0x0) {
      _objc_storeStrong(puVar1,&local_e0,&cf_fileicon_photo_icon_light);
      _objc_storeStrong(&local_e8,&cf_photo);
    }
    else if (local_d8 == (cfstringStruct *)0x4) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_video_icon_light);
      _objc_storeStrong(&local_e8,&cf_film);
    }
    else if (local_d8 == (cfstringStruct *)0x5) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_music);
      _objc_storeStrong(&local_e8,&cf_music_note);
    }
    else if (local_d8 == (cfstringStruct *)0x6) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_pdf);
      _objc_storeStrong(&local_e8,&cf_doc_richtext);
    }
    else if (local_d8 == (cfstringStruct *)0x7) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_txt_icon);
      _objc_storeStrong(&local_e8,&cf_chevron_left_forwardslash_chevron_right);
    }
    else if (local_d8 == (cfstringStruct *)0x8) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_txt_icon);
      _objc_storeStrong(&local_e8,&cf_curlybraces);
    }
    else if (local_d8 == (cfstringStruct *)0x9) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_txt_icon);
      _objc_storeStrong(&local_e8,&cf_doc_badge_gearshape);
    }
    else if (local_d8 == (cfstringStruct *)0xa) {
      _objc_storeStrong(0,&local_e0,&cf_fileicon_txt_icon);
      _objc_storeStrong(&local_e8,&cf_doc_text);
    }
    local_40 = &cf_xls;
    local_38 = &cf_xlsx;
    local_30 = &cf_csv;
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,3
              );
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar6);
    if (((ulong)puVar7 & 1) == 0) {
      local_50 = &cf_ppt;
      local_48 = &cf_pptx;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (((ulong)puVar7 & 1) == 0) {
        local_60 = &cf_doc;
        local_58 = &cf_docx;
        puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        if (((ulong)puVar7 & 1) == 0) {
          pcVar3 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_isEqualToString__0269ccc8,&cf_key);
          if (((ulong)pcVar3 & 1) == 0) {
            pcVar3 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_pages);
            if (((ulong)pcVar3 & 1) == 0) {
              pcVar3 = local_c8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_numbers);
              if (((ulong)pcVar3 & 1) == 0) {
                pcVar3 = local_c8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_ofd);
                if (((ulong)pcVar3 & 1) == 0) {
                  local_88 = &cf_zip;
                  local_80 = &cf_rar;
                  local_78 = &cf_7z;
                  local_70 = &cf_tar;
                  local_68 = &cf_gz;
                  puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_88,5);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  if (((ulong)puVar7 & 1) == 0) {
                    pcVar3 = local_c8;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_c8,PTR_s_isEqualToString__0269ccc8,&cf_txt);
                    if (((ulong)pcVar3 & 1) != 0) {
                      _objc_storeStrong(&local_e0,&cf_fileicon_txt);
                      _objc_storeStrong(&local_e8,&cf_doc_text);
                    }
                  }
                  else {
                    _objc_storeStrong(&local_e0,&cf_fileicon_zip);
                    _objc_storeStrong(&local_e8,&cf_archivebox);
                  }
                }
                else {
                  _objc_storeStrong(&local_e0,&cf_fileicon_ofd);
                  _objc_storeStrong(&local_e8,&cf_doc);
                }
              }
              else {
                _objc_storeStrong(&local_e0,&cf_fileicon_number);
                _objc_storeStrong(&local_e8,&cf_tablecells);
              }
            }
            else {
              _objc_storeStrong(&local_e0,&cf_fileicon_pages);
              _objc_storeStrong(&local_e8,&cf_doc_richtext);
            }
          }
          else {
            _objc_storeStrong(&local_e0,&cf_fileicon_keynote);
            _objc_storeStrong(&local_e8,&cf_rectangle_on_rectangle);
          }
        }
        else {
          _objc_storeStrong(&local_e0,&cf_fileicon_word);
          _objc_storeStrong(&local_e8,&cf_doc_text);
        }
      }
      else {
        _objc_storeStrong(&local_e0,&cf_fileicon_ppt);
        _objc_storeStrong(&local_e8,&cf_rectangle_on_rectangle);
      }
    }
    else {
      _objc_storeStrong(&local_e0,&cf_fileicon_excel);
      _objc_storeStrong(&local_e8,&cf_tablecells);
    }
    pcVar3 = local_e0;
    FUN_01986b9c(local_b0,local_e0,0,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = 1;
    local_90 = pcVar3;
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  else {
    if ((local_a1 & 1) != 0) {
      pcVar3 = local_c0;
      FUN_019b2a28(local_b0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar3;
      if (pcVar3 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_90 = pcVar3;
      }
      local_b8 = (uint)(pcVar3 != (cfstringStruct *)0x0);
      _objc_storeStrong(&local_d0,0);
      if (local_b8 != 0) goto LAB_0198ed44;
    }
    pcVar3 = &cf_fileicon_photo_icon_light;
    FUN_01986b9c(local_b0,&cf_fileicon_photo_icon_light,0,&cf_photo);
    _objc_retainAutoreleasedReturnValue();
    local_b8 = 1;
    local_90 = pcVar3;
  }
LAB_0198ed44:
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
LAB_0198ed64:
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_90);
  return;
}

