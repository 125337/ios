// imageForUsr: @ 01d9b650

/* Function Stack Size: 0x18 bytes */

ID WCRefineSessionStatsBoardView::imageForUsr_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint local_3e8;
  undefined *local_300;
  undefined *local_2f8;
  undefined *local_2c0;
  cfstringStruct *local_2a0;
  char *local_288;
  byte local_279;
  undefined *local_278;
  char *local_270;
  ulong local_268;
  ulong local_260;
  bool local_252 [2];
  undefined *local_250;
  char *local_248;
  char *local_238;
  char *local_230 [4];
  char *local_210;
  char *local_208;
  char *local_200;
  char *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  undefined *local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  cfstringStruct *local_170;
  undefined *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  byte local_131;
  undefined *local_130;
  uint local_128;
  bool local_121;
  cfstringStruct *local_120;
  byte local_111;
  undefined *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  SEL local_f8;
  ID local_f0;
  char *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = (cfstringStruct *)0x0;
  local_f8 = param_2;
  local_f0 = param_1;
  _objc_storeStrong(&local_100,param_3);
  pcVar3 = local_100;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_2a0 = local_100;
  local_111 = 0;
  local_121 = false;
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_2a0 = &::cf___;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_2a0,PTR_s_stringByTrimmingCharactersInSet__0269d0c0)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_120 = local_2a0;
  }
  local_121 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_108 = local_2a0;
  if ((local_121 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  pcVar3 = local_108;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_length_0269cca0);
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_e8 = (char *)0x0;
    local_128 = 1;
    goto LAB_01d9c744;
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_108;
  local_130 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_hasSuffix__0269d018,&cf__chatroom);
  local_131 = (byte)pcVar3;
  puVar2 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customAvatarFeatureEnabled_026a0958);
  if (((ulong)puVar2 & 1) == 0) {
LAB_01d9be14:
    pcVar6 = "MMContext";
    _objc_getClass();
    pcVar7 = "MMServiceCenter";
    local_1d8 = pcVar6;
    _objc_getClass();
    local_1e8 = (char *)0x0;
    pcVar6 = "CContactMgr";
    local_1e0 = pcVar7;
    _objc_getClass();
    local_1f0 = pcVar6;
    if ((local_1d8 != (char *)0x0) &&
       (pcVar6 = local_1d8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_1d8,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8),
       ((ulong)pcVar6 & 1) != 0)) {
      pcVar6 = local_1d8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_currentContext_0269d5f8);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = pcVar6;
      if ((pcVar6 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar6 & 1) != 0)) {
        pcVar7 = local_1f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f8,PTR_s_getService__0269d170,local_1f0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_1e8;
        local_1e8 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      _objc_storeStrong(&local_1f8,0);
    }
    if (((local_1e8 == (char *)0x0) && (local_1e0 != (char *)0x0)) &&
       (pcVar6 = local_1e0,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_1e0,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar6 & 1) != 0)) {
      pcVar6 = local_1e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e0,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_200 = pcVar6;
      if ((pcVar6 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar6 & 1) != 0)) {
        pcVar7 = local_200;
        (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_getService__0269d170,local_1f0);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_1e8;
        local_1e8 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      _objc_storeStrong(&local_200,0);
    }
    local_208 = (char *)0x0;
    if ((local_1e8 != (char *)0x0) &&
       (pcVar6 = local_1e8,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_1e8,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar6 & 1) != 0)) {
      pcVar7 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_getContactByName__0269d178,local_108);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_208;
      local_208 = pcVar7;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    pcVar6 = local_208;
    if (local_208 == (char *)0x0) {
LAB_01d9c210:
      if (local_208 != (char *)0x0) {
        pcVar6 = local_208;
        (*(code *)PTR__objc_msgSend_02578628)(local_208,PTR_s_valueForKey__0269d128,&cf_m_dtUsrImg);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_230[0] = pcVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
        uVar10 = (ulong)pcVar6 & 0xffffffff;
        if (((ulong)pcVar6 & 1) == 0) {
LAB_01d9c390:
          local_128 = 0;
        }
        else {
          pcVar6 = local_230[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_230[0],PTR_s_length_0269cca0);
          uVar10 = 0;
          if (pcVar6 == (char *)0x0) goto LAB_01d9c390;
          pcVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_230[0]);
          _objc_retainAutoreleasedReturnValue();
          local_238 = pcVar6;
          if (pcVar6 != (char *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_e8 = pcVar6;
          }
          local_128 = (uint)(pcVar6 != (char *)0x0);
          _objc_storeStrong(&local_238,0);
          uVar10 = (ulong)local_128;
          if (local_128 == 0) goto LAB_01d9c390;
        }
        _objc_storeStrong(uVar10,local_230,0);
        if (local_128 != 0) goto LAB_01d9c714;
      }
      pcVar6 = "MMHeadImageMgr";
      _objc_getClass();
      local_250 = PTR_s_getHeadImgPathForNewVersionForLo_026a0a50;
      local_248 = pcVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_respondsToSelector__026ca818,
                 PTR_s_getHeadImgPathForNewVersionForLo_026a0a50);
      if (((ulong)pcVar6 & 1) != 0) {
        local_252[0] = (local_131 & 1) != 0;
        local_252[1] = false;
        iVar8 = 2;
        if ((local_131 & 1) == 0) {
          iVar8 = 1;
        }
        local_260 = (ulong)iVar8;
        for (local_268 = 0; local_268 < local_260; local_268 = local_268 + 1) {
          pcVar6 = local_248;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,local_250,local_108,local_252[local_268],0);
          _objc_retainAutoreleasedReturnValue();
          local_279 = 0;
          puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_270 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar2);
          local_3e8 = 0;
          if (((ulong)pcVar6 & 1) != 0) {
            puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
            _objc_retainAutoreleasedReturnValue();
            local_279 = 1;
            local_278 = puVar2;
            (*(code *)PTR__objc_msgSend_02578628)();
            local_3e8 = (uint)puVar2;
          }
          if ((local_279 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_278);
          }
          if ((local_3e8 & 1) == 0) {
LAB_01d9c694:
            local_128 = 0;
          }
          else {
            pcVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                       local_270);
            _objc_retainAutoreleasedReturnValue();
            local_288 = pcVar6;
            if (pcVar6 != (char *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_e8 = pcVar6;
            }
            local_128 = (uint)(pcVar6 != (char *)0x0);
            _objc_storeStrong(&local_288,0);
            if (local_128 == 0) goto LAB_01d9c694;
          }
          _objc_storeStrong(&local_270,0);
          if (local_128 != 0) goto LAB_01d9c714;
        }
      }
      local_e8 = (char *)0x0;
      local_128 = 1;
    }
    else {
      pcVar3 = &cf_getContactHeadImage;
      _NSSelectorFromString(&cf_getContactHeadImage);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_respondsToSelector__026ca818,pcVar3);
      pcVar7 = local_208;
      if (((ulong)pcVar6 & 1) == 0) goto LAB_01d9c210;
      pcVar3 = &cf_getContactHeadImage;
      _NSSelectorFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,pcVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_210 = pcVar7;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
      pcVar6 = local_210;
      bVar1 = ((ulong)pcVar7 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_e8 = pcVar6;
      }
      local_128 = (uint)bVar1;
      _objc_storeStrong(&local_210,0);
      if (local_128 == 0) goto LAB_01d9c210;
    }
LAB_01d9c714:
    _objc_storeStrong(&local_208);
    _objc_storeStrong(&local_1e8,0);
  }
  else {
    local_149 = 0;
    local_159 = 0;
    local_2c0 = local_130;
    if ((local_131 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customAvatarContactEnabledIDs_026a09d8);
      _objc_retainAutoreleasedReturnValue();
      local_159 = 1;
      local_158 = local_2c0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_customAvatarGroupEnabledIDs_026a09d0);
      _objc_retainAutoreleasedReturnValue();
      local_149 = 1;
      local_148 = local_2c0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_140 = local_2c0;
    if ((local_159 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_158);
    }
    if ((local_149 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_148);
    }
    puVar2 = local_140;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((((ulong)puVar2 & 1) == 0) ||
       (puVar2 = local_140,
       (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_containsObject__0269cbb8,local_108),
       ((ulong)puVar2 & 1) == 0)) {
LAB_01d9bdf0:
      local_128 = 0;
    }
    else {
      _NSHomeDirectory();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_168 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = local_108;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_108,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      local_170 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar2;
      _memset(auStack_1c0,0,0x40);
      local_e0 = &cf_png;
      local_d8 = &cf_jpg;
      local_d0 = &cf_jpeg;
      local_c8 = &cf_gif;
      local_c0 = &cf_webp;
      local_b8 = &cf_heic;
      local_b0 = &cf_bmp;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e0
                 ,7);
      _objc_retainAutoreleasedReturnValue();
      local_2f8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_2f8 != (undefined *)0x0) {
        lVar9 = *local_1b0;
        local_300 = (undefined *)0x0;
        do {
          do {
            if (*local_1b0 - lVar9 != 0) {
              _objc_enumerationMutation(*local_1b0 - lVar9,puVar2);
            }
            puVar4 = local_168;
            local_180 = *(undefined8 *)(local_1b8 + (long)local_300 * 8);
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                       &cf______);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar4,PTR_s_stringByAppendingPathComponent__026cab30);
            _objc_retainAutoreleasedReturnValue();
            local_1c8 = puVar4;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            puVar4 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_178,PTR_s_fileExistsAtPath__026ca630,local_1c8);
            if (((ulong)puVar4 & 1) == 0) {
              local_128 = 3;
            }
            else {
              pcVar6 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                         local_1c8);
              _objc_retainAutoreleasedReturnValue();
              local_1d0 = pcVar6;
              if (pcVar6 != (char *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_e8 = pcVar6;
              }
              local_128 = (uint)(pcVar6 != (char *)0x0);
              _objc_storeStrong(&local_1d0,0);
            }
            _objc_storeStrong(&local_1c8,0);
            if ((local_128 != 0) && (local_128 != 3)) goto LAB_01d9bd90;
            local_300 = local_300 + 1;
          } while (local_300 < local_2f8);
          local_2f8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_a8,
                     0x10);
          local_300 = (undefined *)0x0;
        } while (local_2f8 != (undefined *)0x0);
      }
      local_128 = 0;
LAB_01d9bd90:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_128 == 0) {
        local_128 = 0;
      }
      _objc_storeStrong(&local_178);
      _objc_storeStrong(&local_170,0);
      _objc_storeStrong(&local_168,0);
      if (local_128 == 0) goto LAB_01d9bdf0;
    }
    _objc_storeStrong(&local_140,0);
    if (local_128 == 0) goto LAB_01d9be14;
  }
  _objc_storeStrong(&local_130,0);
LAB_01d9c744:
  _objc_storeStrong(&local_108);
  _objc_storeStrong(&local_100,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_e8;
}

