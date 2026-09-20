// bestDouyinNoteImageURLFromItem: @ 01037cdc

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::bestDouyinNoteImageURLFromItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_1c8;
  undefined *local_1b8;
  undefined *local_130;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined4 local_f4;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  SEL local_d0;
  undefined *local_c8;
  undefined *local_c0;
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
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = (undefined *)param_1;
  _objc_storeStrong(&local_d8,param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_e0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_c8;
  uVar1 = local_d8;
  local_60 = &cf_download_url_list;
  local_58 = &cf_downloadUrlList;
  local_50 = &cf_download_list;
  local_48 = &cf_downloadList;
  local_40 = &cf_download_url;
  local_38 = &cf_downloadUrl;
  local_30 = &cf_downloadURL;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_e8 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_appendDouyinImageURLCandidates_k_026adf40,uVar1,puVar4,local_e0);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar2 = local_c8;
  uVar1 = local_d8;
  local_b8 = &cf_url_list;
  local_b0 = &cf_urlList;
  local_a8 = &cf_urls;
  local_a0 = &cf_url;
  local_98 = &cf_display_image;
  local_90 = &cf_displayImage;
  local_88 = &cf_origin_url;
  local_80 = &cf_originUrl;
  local_78 = &cf_image_url;
  local_70 = &cf_imageUrl;
  local_68 = &cf_src;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,0xb
            );
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_appendDouyinImageURLCandidates_k_026adf40,uVar1,puVar3,local_e8);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_firstDouyinImageURLWithoutWaterm_026adf48,local_e0);
  _objc_retainAutoreleasedReturnValue();
  local_f0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if ((puVar2 == (undefined *)0x0) ||
     (puVar2 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c8,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_f0),
     local_c0 = local_f0, ((ulong)puVar2 & 1) != 0)) {
    puVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_firstDouyinImageURLWithoutWaterm_026adf48,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (puVar3 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_c8,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_100),
       puVar2 = local_100, ((ulong)puVar3 & 1) != 0)) {
      puVar2 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bestCleanURLFromList__026adf50,local_e0);
      _objc_retainAutoreleasedReturnValue();
      local_108 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if ((puVar2 == (undefined *)0x0) ||
         (puVar3 = local_c8,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_c8,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_108),
         puVar2 = local_108, ((ulong)puVar3 & 1) != 0)) {
        puVar2 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_bestCleanURLFromList__026adf50,local_e8);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
        if (puVar2 == (undefined *)0x0) {
          puVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
          if (puVar2 == (undefined *)0x0) {
            local_1c8 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_130 = local_1c8;
          }
          else {
            local_1c8 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
            _objc_retainAutoreleasedReturnValue();
            local_120 = local_1c8;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = local_1c8;
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_130);
          }
          else {
            (*(code *)PTR__objc_release_02578630)(local_120);
          }
          puVar2 = local_118;
          (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_length_0269cca0);
          if ((puVar2 == (undefined *)0x0) ||
             (puVar2 = local_c8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_c8,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_118),
             ((ulong)puVar2 & 1) == 0)) {
            puVar2 = local_118;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = puVar2;
          }
          else {
            local_c0 = (undefined *)0x0;
          }
          local_f4 = 1;
          _objc_storeStrong(&local_118,0);
        }
        else {
          puVar2 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_c8,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_110);
          if (((ulong)puVar2 & 1) == 0) {
            local_1b8 = local_110;
          }
          else {
            local_1b8 = (undefined *)0x0;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_c0 = local_1b8;
          local_f4 = 1;
        }
        _objc_storeStrong(&local_110,0);
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = puVar2;
        local_f4 = 1;
      }
      _objc_storeStrong(&local_108,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = puVar2;
      local_f4 = 1;
    }
    _objc_storeStrong(&local_100,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f4 = 1;
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

