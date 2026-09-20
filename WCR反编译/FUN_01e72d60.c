// FUN_01e72d60 @ 01e72d60

void FUN_01e72d60(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong local_258;
  ulong local_248;
  ulong local_240;
  cfstringStruct *local_200;
  cfstringStruct *local_1f8;
  cfstringStruct *local_1a8;
  ulong local_180;
  ulong local_178;
  ulong local_170;
  ulong local_168;
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  ulong local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  ulong local_f8;
  byte local_e9;
  cfstringStruct *local_e8;
  undefined *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == (cfstringStruct *)0x0) {
    local_1a8 = &cf___;
  }
  else {
    local_1a8 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_1a8;
  puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_c8 = local_1a8;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar3 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_containsString__0269d0b0,&cf_<html);
  if ((((((ulong)pcVar3 & 1) == 0) &&
       (pcVar3 = local_d0,
       (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,&cf_<body),
       ((ulong)pcVar3 & 1) == 0)) &&
      (pcVar3 = local_d0,
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,&cf_<_doctype),
      ((ulong)pcVar3 & 1) == 0)) &&
     ((pcVar3 = local_d0,
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,&cf_<script),
      ((ulong)pcVar3 & 1) == 0 &&
      (pcVar3 = local_d0,
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_containsString__0269d0b0,&cf_<style),
      ((ulong)pcVar3 & 1) == 0)))) {
    puVar2 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_c0;
    puVar4 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    local_e0 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_newlineCharacterSet_0269ef38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    local_e9 = 0;
    _memset(auStack_138,0,0x40);
    pcVar3 = local_e8;
    (*(code *)PTR__objc_retain_02578638)();
    local_1f8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10);
    if (local_1f8 != (cfstringStruct *)0x0) {
      lVar6 = *local_128;
      local_200 = (cfstringStruct *)0x0;
      do {
        do {
          if (*local_128 - lVar6 != 0) {
            _objc_enumerationMutation(*local_128 - lVar6,pcVar3);
          }
          uVar7 = *(ulong *)(local_130 + (long)local_200 * 8);
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          local_f8 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_whitespaceCharacterSet_0269d768
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_140 = uVar7;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          uVar7 = local_140;
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
          if (uVar7 == 0) {
            if ((local_e9 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendString__0269ccb0,&cf_<_ul>)
              ;
              local_e9 = 0;
            }
            local_d4 = 3;
          }
          else {
            uVar7 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_hasPrefix__0269d320,&cf__);
            if ((uVar7 & 1) == 0) {
              uVar7 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_hasPrefix__0269d320,&cf__);
              if (((uVar7 & 1) == 0) &&
                 (uVar7 = local_140,
                 (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_hasPrefix__0269d320,&cf__),
                 (uVar7 & 1) == 0)) {
                if ((local_e9 & 1) != 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_appendString__0269ccb0,&cf_<_ul>);
                  local_e9 = 0;
                }
                puVar2 = local_e0;
                uVar7 = local_140;
                FUN_01e9cad0();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_appendFormat__0269d148,&cf_<p>__<_p>);
                (*(code *)PTR__objc_release_02578630)(uVar7);
                local_d4 = 0;
              }
              else {
                if ((local_e9 & 1) == 0) {
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_e0,PTR_s_appendString__0269ccb0,&cf_<ul>);
                  local_e9 = 1;
                }
                puVar2 = local_e0;
                uVar7 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_140,PTR_s_substringFromIndex__0269d120,2);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar7;
                FUN_01e9cad0();
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_appendFormat__0269d148,&cf_<li>__<_li>);
                (*(code *)PTR__objc_release_02578630)(uVar5);
                (*(code *)PTR__objc_release_02578630)(uVar7);
                local_d4 = 3;
              }
            }
            else {
              if ((local_e9 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_e0,PTR_s_appendString__0269ccb0,&cf_<_ul>);
                local_e9 = 0;
              }
              local_148 = 0;
              while( true ) {
                uVar7 = local_148;
                uVar5 = local_140;
                (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
                bVar1 = false;
                if (uVar7 < uVar5) {
                  uVar7 = local_140;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_140,PTR_s_characterAtIndex__0269fa18,local_148);
                  bVar1 = (int)uVar7 == 0x23;
                }
                uVar7 = local_140;
                if (!bVar1) break;
                local_148 = local_148 + 1;
              }
              local_150 = 1;
              local_160 = 3;
              local_168 = local_148;
              if (local_148 < 4) {
                local_240 = local_148;
              }
              else {
                local_240 = 3;
              }
              local_170 = local_240;
              local_158 = local_240;
              if (local_240 < 2) {
                local_248 = 1;
              }
              else {
                local_248 = local_240;
              }
              local_178 = local_248;
              local_148 = local_248;
              local_258 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
              if (local_248 < local_258) {
                local_258 = local_248;
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_substringFromIndex__0269d120,local_258);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                         PTR_s_whitespaceCharacterSet_0269d768);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar7;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar7,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
              _objc_retainAutoreleasedReturnValue();
              local_180 = uVar5;
              (*(code *)PTR__objc_release_02578630)(puVar2);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              puVar2 = local_e0;
              uVar7 = local_180;
              FUN_01e9cad0();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_appendFormat__0269d148,&cf_<h_lu>__<_h_lu>);
              (*(code *)PTR__objc_release_02578630)(uVar7);
              local_d4 = 3;
              _objc_storeStrong(&local_180,0);
            }
          }
          _objc_storeStrong(&local_140,0);
          local_200 = (cfstringStruct *)((long)&local_200->field0_0x0 + 1);
        } while (local_200 < local_1f8);
        local_1f8 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_200 = (cfstringStruct *)0x0;
      } while (local_1f8 != (cfstringStruct *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    if ((local_e9 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendString__0269ccb0,&cf_<_ul>);
    }
    pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &
               cf_<_doctypehtml><html><head><metaname__viewport_content__width_device_width,initial_scale_1_><style>body_font_family__apple_system_BlinkMacSystemFont_sans_serif_background_transparent_color_inherit_padding_12px_h1_h2_h3_margin__35em0_p_margin__35em0_line_height_1_45_ul_margin__35em0_padding_left_1_2em_li_margin__25em0_<_style><_head><body>__<_body><_html>
              );
    _objc_retainAutoreleasedReturnValue();
    local_d4 = 1;
    local_b0 = pcVar3;
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_e0,0);
  }
  else {
    pcVar3 = local_c0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar3;
    local_d4 = 1;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_b0);
  return;
}

