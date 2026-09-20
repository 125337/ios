// douyinJSONLooksLikeImageNote: @ 01030fc8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinJSONLooksLikeImageNote_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  ID IVar6;
  cfstringStruct *local_188;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_148;
  cfstringStruct *local_118;
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  byte local_91;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  byte local_71;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  uint local_44;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  pcVar4 = local_40;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)pcVar4 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_010318c4;
  }
  pcVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_aweme_type);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_118 = pcVar4;
  if (pcVar4 == (cfstringStruct *)0x0) {
    local_118 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_awemeType);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_118;
  }
  local_59 = pcVar4 == (cfstringStruct *)0x0;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_118;
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_integerValue_026ca750);
  if ((((ulong)pcVar4 & 1) == 0) ||
     ((((pcVar4 = local_50,
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_integerValue_026ca750),
        local_68 = pcVar4, pcVar4 != (cfstringStruct *)0x2 && (pcVar4 != (cfstringStruct *)0x44)) &&
       (pcVar4 != (cfstringStruct *)0x6b)) &&
      (((pcVar4 != (cfstringStruct *)0x8d && (pcVar4 != (cfstringStruct *)0x96)) &&
       (pcVar4 != (cfstringStruct *)0x97)))))) {
    pcVar4 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_post);
    _objc_retainAutoreleasedReturnValue();
    local_71 = 0;
    local_81 = 0;
    local_91 = 0;
    local_a1 = 0;
    local_b1 = 0;
    bVar2 = true;
    if (pcVar4 == (cfstringStruct *)0x0) {
      pcVar5 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePost);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      bVar2 = true;
      local_70 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        pcVar5 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_image_post_info);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        bVar2 = true;
        local_80 = pcVar5;
        if (pcVar5 == (cfstringStruct *)0x0) {
          pcVar5 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_imagePostInfo);
          _objc_retainAutoreleasedReturnValue();
          local_91 = 1;
          bVar2 = true;
          local_90 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            pcVar5 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_atlas_info);
            _objc_retainAutoreleasedReturnValue();
            local_a1 = 1;
            bVar2 = true;
            local_a0 = pcVar5;
            if (pcVar5 == (cfstringStruct *)0x0) {
              pcVar5 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_atlasInfo);
              _objc_retainAutoreleasedReturnValue();
              local_b1 = 1;
              bVar2 = pcVar5 != (cfstringStruct *)0x0;
              local_b0 = pcVar5;
            }
          }
        }
      }
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
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if (bVar2) {
      local_21 = 1;
      local_44 = 1;
    }
    else {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_share_info);
      _objc_retainAutoreleasedReturnValue();
      local_c9 = 0;
      local_148 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_148 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_shareInfo);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_148;
      }
      local_c9 = pcVar4 == (cfstringStruct *)0x0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_148;
      if ((local_c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      pcVar4 = local_c0;
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)pcVar4 & 1) == 0) {
LAB_01031884:
        local_21 = 0;
        local_44 = 1;
      }
      else {
        pcVar4 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_share_title);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = false;
        bVar2 = false;
        local_168 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_e0 = local_c0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_shareTitle);
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          local_178 = local_e0;
          if (local_e0 == (cfstringStruct *)0x0) {
            local_f0 = local_c0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_share_desc);
            _objc_retainAutoreleasedReturnValue();
            bVar2 = true;
            local_188 = local_f0;
            if (local_f0 == (cfstringStruct *)0x0) {
              local_188 = &::cf___;
            }
            local_178 = local_188;
          }
          local_168 = local_178;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_d8 = local_168;
        if (bVar2) {
          (*(code *)PTR__objc_release_02578630)(local_f0);
        }
        if (bVar1) {
          (*(code *)PTR__objc_release_02578630)(local_e0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        IVar6 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_douyinShareTextLooksLikeImageNot_026aded8,local_d8);
        bVar2 = (IVar6 & 1) != 0;
        if (bVar2) {
          local_21 = 1;
        }
        local_44 = (uint)bVar2;
        _objc_storeStrong(&local_d8,0);
        if (local_44 == 0) goto LAB_01031884;
      }
      _objc_storeStrong(&local_c0,0);
    }
  }
  else {
    local_21 = 1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_50,0);
LAB_010318c4:
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

