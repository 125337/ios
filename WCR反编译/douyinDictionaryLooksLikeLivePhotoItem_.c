// douyinDictionaryLooksLikeLivePhotoItem: @ 010318e8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinDictionaryLooksLikeLivePhotoItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_1d0;
  ulong local_1c0;
  ulong local_1b0;
  ulong local_1a0;
  ulong local_170;
  ulong local_158;
  ulong local_140;
  ulong local_130;
  ulong local_120;
  ulong local_f8;
  ulong local_e8;
  ulong local_d8;
  ulong local_c8;
  ulong local_c0;
  byte local_b1;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  byte local_79;
  ulong local_78;
  byte local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar6 = local_40;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
  if ((uVar6 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_010323c8;
  }
  uVar6 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_live_photo_type);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  local_120 = uVar6;
  if (uVar6 == 0) {
    local_130 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhotoType);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_130;
    if (local_130 == 0) {
      local_140 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_aweme_type);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_140;
      if (local_140 == 0) {
        local_140 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_awemeType);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_140;
      }
      local_130 = local_140;
    }
    local_120 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_120;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  uVar6 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if (((uVar6 & 1) == 0) ||
     ((uVar6 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_integerValue_026ca750)
      , local_88 = uVar6, uVar6 != 0x96 && (uVar6 != 0x97)))) {
    uVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_is_live_photo);
    _objc_retainAutoreleasedReturnValue();
    local_99 = 0;
    local_158 = uVar6;
    if (uVar6 == 0) {
      local_158 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_isLivePhoto);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_158;
    }
    local_99 = uVar6 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_158;
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_boolValue_026ca540),
       (uVar6 & 1) == 0)) {
      uVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_live_photo);
      _objc_retainAutoreleasedReturnValue();
      local_b1 = 0;
      local_170 = uVar6;
      if (uVar6 == 0) {
        local_170 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhoto);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = local_170;
      }
      local_b1 = uVar6 == 0;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = local_170;
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_b0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = local_a8;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
      uVar7 = local_a8;
      if ((uVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
        uVar6 = local_a8;
        if ((uVar7 & 1) != 0) goto LAB_01031f54;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar6 & 1) != 0) goto LAB_01031f54;
        uVar6 = local_a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a8,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
        if (((uVar6 & 1) == 0) ||
           (uVar6 = local_a8,
           (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_boolValue_026ca540),
           (uVar6 & 1) == 0)) {
          uVar6 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_clip);
          _objc_retainAutoreleasedReturnValue();
          bVar4 = false;
          bVar3 = false;
          bVar2 = false;
          bVar1 = false;
          local_1a0 = uVar6;
          if (uVar6 == 0) {
            local_c8 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_live_photo_video);
            _objc_retainAutoreleasedReturnValue();
            bVar4 = true;
            local_1b0 = local_c8;
            if (local_c8 == 0) {
              local_d8 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_livePhotoVideo);
              _objc_retainAutoreleasedReturnValue();
              bVar3 = true;
              local_1c0 = local_d8;
              if (local_d8 == 0) {
                local_e8 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_animated_video);
                _objc_retainAutoreleasedReturnValue();
                bVar2 = true;
                bVar1 = local_e8 == 0;
                local_1d0 = local_e8;
                if (bVar1) {
                  local_f8 = local_40;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_animatedVideo);
                  _objc_retainAutoreleasedReturnValue();
                  local_1d0 = local_f8;
                }
                local_1c0 = local_1d0;
              }
              local_1b0 = local_1c0;
            }
            local_1a0 = local_1b0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_1a0;
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_f8);
          }
          if (bVar2) {
            (*(code *)PTR__objc_release_02578630)(local_e8);
          }
          if (bVar3) {
            (*(code *)PTR__objc_release_02578630)(local_d8);
          }
          if (bVar4) {
            (*(code *)PTR__objc_release_02578630)(local_c8);
          }
          (*(code *)PTR__objc_release_02578630)(uVar6);
          uVar6 = local_c0;
          puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
          uVar7 = local_c0;
          if ((uVar6 & 1) == 0) {
            puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar5);
            uVar6 = local_c0;
            if ((uVar7 & 1) != 0) goto LAB_0103234c;
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
            if ((uVar6 & 1) != 0) goto LAB_0103234c;
            local_21 = 0;
          }
          else {
LAB_0103234c:
            local_21 = 1;
          }
          local_44 = 1;
          _objc_storeStrong(&local_c0,0);
        }
        else {
          local_21 = 1;
          local_44 = 1;
        }
      }
      else {
LAB_01031f54:
        local_21 = 1;
        local_44 = 1;
      }
      _objc_storeStrong(&local_a8,0);
    }
    else {
      local_21 = 1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_90,0);
  }
  else {
    local_21 = 1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_010323c8:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

