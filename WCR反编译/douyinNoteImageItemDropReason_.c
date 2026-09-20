// douyinNoteImageItemDropReason: @ 010343a4

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinNoteImageItemDropReason_(ID param_1,SEL param_2,ID param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  ulong local_168;
  cfstringStruct *local_118;
  ulong local_100;
  ulong local_f8;
  ulong local_e8;
  ulong local_e0;
  ID local_d8;
  ID local_d0;
  byte local_c1;
  ulong local_c0;
  byte local_b1;
  ulong local_b0;
  byte local_a1;
  ulong local_a0;
  byte local_91;
  ulong local_90;
  byte local_81;
  ulong local_80;
  byte local_71;
  ulong local_70;
  bool local_61;
  cfstringStruct *local_60;
  ID local_58;
  undefined4 local_4c;
  ID local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar4 = local_40;
  if ((uVar3 & 1) != 0) {
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_preferCleanMediaURL__026add40,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
    if ((IVar5 == 0) ||
       (IVar5 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_hasPrefix__0269d320,&cf_http),
       (IVar5 & 1) == 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_bad_url;
      local_4c = 1;
    }
    else {
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_douyinImageJunkMark__026adee8,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      local_61 = false;
      if (IVar5 == 0) {
        local_118 = (cfstringStruct *)0x0;
      }
      else {
        local_118 = &cf_junk_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_junk_,PTR_s_stringByAppendingString__0269d398,local_58);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_118;
      }
      local_61 = IVar5 != 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_118;
      if ((local_61 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      local_4c = 1;
      _objc_storeStrong(&local_58,0);
    }
    _objc_storeStrong(&local_48,0);
    goto LAB_01034e08;
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_40;
  if ((uVar4 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_not_dict;
    local_4c = 1;
    goto LAB_01034e08;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = uVar3;
  IVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_douyinDictionaryLooksLikeNoteIma_026adef8,uVar3);
  local_71 = (byte)IVar5;
  uVar3 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_emoji_id);
  _objc_retainAutoreleasedReturnValue();
  local_81 = 0;
  local_91 = 0;
  local_a1 = 0;
  local_b1 = 0;
  local_c1 = 0;
  if (uVar3 == 0) {
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_emojiId);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = uVar4;
    if (uVar4 != 0) goto LAB_01034848;
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_sticker_id);
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_90 = uVar4;
    if (uVar4 != 0) goto LAB_01034848;
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_stickerId);
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_a0 = uVar4;
    if (uVar4 != 0) goto LAB_01034848;
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_emoji_url);
    _objc_retainAutoreleasedReturnValue();
    local_b1 = 1;
    local_b0 = uVar4;
    if (uVar4 != 0) goto LAB_01034848;
    uVar4 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_emojiUrl);
    _objc_retainAutoreleasedReturnValue();
    local_c1 = 1;
    bVar1 = 0;
    local_c0 = uVar4;
    if (uVar4 != 0) goto LAB_01034848;
  }
  else {
LAB_01034848:
    bVar1 = local_71 ^ 1;
  }
  if ((local_c1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_b0);
  }
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if ((bVar1 & 1) == 0) {
    IVar5 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_bestDouyinNoteImageURLFromItem__026adf00,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
    if (IVar5 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_no_url;
      local_4c = 1;
    }
    else {
      IVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_douyinImageJunkMark__026adee8,local_d0);
      _objc_retainAutoreleasedReturnValue();
      local_d8 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_length_0269cca0);
      if (IVar5 == 0) {
        if ((local_71 & 1) == 0) {
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_display_image);
          _objc_retainAutoreleasedReturnValue();
          local_168 = uVar3;
          if (uVar3 == 0) {
            local_e8 = local_70;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayImage);
            _objc_retainAutoreleasedReturnValue();
            local_168 = local_e8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_e0 = local_168;
          if (uVar3 == 0) {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
          _objc_retainAutoreleasedReturnValue();
          local_f8 = uVar3;
          FUN_01034e28();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
          _objc_retainAutoreleasedReturnValue();
          local_100 = uVar3;
          FUN_01034e28();
          (*(code *)PTR__objc_release_02578630)(uVar3);
          uVar3 = local_e0;
          if ((long)local_f8 < 1) {
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar3 & 1) != 0) {
              uVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
              _objc_retainAutoreleasedReturnValue();
              local_f8 = uVar3;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
          }
          uVar3 = local_e0;
          if ((long)local_100 < 1) {
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar3 & 1) != 0) {
              uVar3 = local_e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_e0,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
              _objc_retainAutoreleasedReturnValue();
              local_100 = uVar3;
              FUN_01034e28();
              (*(code *)PTR__objc_release_02578630)(uVar3);
            }
          }
          if (((((long)local_f8 < 1) || ((long)local_100 < 1)) || (0x100 < (long)local_f8)) ||
             (0x100 < (long)local_100)) {
            local_28 = (cfstringStruct *)0x0;
          }
          else {
            pcVar6 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf_small__ldx_ld);
            _objc_retainAutoreleasedReturnValue();
            local_28 = pcVar6;
          }
          local_4c = 1;
          _objc_storeStrong(&local_e0,0);
        }
        else {
          local_28 = (cfstringStruct *)0x0;
          local_4c = 1;
        }
      }
      else {
        pcVar6 = &cf_junk_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_junk_,PTR_s_stringByAppendingString__0269d398,local_d8);
        _objc_retainAutoreleasedReturnValue();
        local_4c = 1;
        local_28 = pcVar6;
      }
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_d0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf_emoji_item;
    local_4c = 1;
  }
  _objc_storeStrong(&local_70,0);
LAB_01034e08:
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

