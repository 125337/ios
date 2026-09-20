// douyinDictionaryLooksLikeNoteImageItem: @ 010323ec

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinDictionaryLooksLikeNoteImageItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  ID IVar7;
  uint local_12c;
  uint local_128;
  ulong local_100;
  ulong local_f0;
  ulong local_e0;
  ulong local_b8;
  ulong local_a8;
  ulong local_98;
  ulong local_88;
  ulong local_78;
  ulong local_68;
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
  }
  else {
    uVar6 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_download_url_list);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = false;
    bVar2 = false;
    bVar1 = false;
    local_e0 = uVar6;
    if (uVar6 == 0) {
      local_58 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_downloadUrlList);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = true;
      local_f0 = local_58;
      if (local_58 == 0) {
        local_68 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_download_list);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar1 = local_68 == 0;
        local_100 = local_68;
        if (bVar1) {
          local_78 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_downloadList);
          _objc_retainAutoreleasedReturnValue();
          local_100 = local_78;
        }
        local_f0 = local_100;
      }
      local_e0 = local_f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_e0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar3) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar6);
    uVar6 = local_50;
    puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
       uVar6 == 0)) {
      uVar6 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_url_list);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = false;
      bVar2 = false;
      bVar1 = false;
      bVar4 = true;
      if (uVar6 == 0) {
        local_88 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_urlList);
        _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        bVar4 = true;
        if (local_88 == 0) {
          local_98 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_display_image);
          _objc_retainAutoreleasedReturnValue();
          bVar2 = true;
          bVar4 = true;
          if (local_98 == 0) {
            local_a8 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_displayImage);
            _objc_retainAutoreleasedReturnValue();
            bVar1 = true;
            bVar4 = local_a8 != 0;
          }
        }
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_a8);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_98);
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_88);
      }
      (*(code *)PTR__objc_release_02578630)(uVar6);
      bVar1 = false;
      local_128 = 0;
      if (bVar4) {
        local_b8 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_video);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        uVar6 = local_b8;
        (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_12c = 1;
        if ((uVar6 & 1) == 0) {
          IVar7 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_douyinDictionaryLooksLikeLivePho_026adee0,local_40);
          local_12c = (uint)IVar7;
        }
        local_128 = local_12c;
      }
      if (bVar1) {
        (*(code *)PTR__objc_release_02578630)(local_b8);
      }
      if ((local_128 & 1) == 0) {
        local_21 = 0;
      }
      else {
        local_21 = 1;
      }
    }
    else {
      local_21 = 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

