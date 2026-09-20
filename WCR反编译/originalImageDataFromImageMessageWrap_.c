// originalImageDataFromImageMessageWrap: @ 00f3d07c

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::originalImageDataFromImageMessageWrap_
             (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  undefined8 uVar10;
  uint local_38c;
  uint local_35c;
  undefined *local_340;
  undefined *local_338;
  uint local_2f4;
  undefined *local_2d0;
  undefined *local_2c8;
  char *local_2a8;
  byte local_299;
  undefined *local_298;
  char *local_290;
  cfstringStruct *local_288;
  char *local_280;
  cfstringStruct *local_278;
  char *local_270;
  char *local_268;
  byte local_259;
  undefined *local_258;
  ulong local_250;
  undefined8 local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  char *local_1f8;
  byte local_1e9;
  undefined *local_1e8;
  ulong local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  uint local_16c;
  ulong local_168;
  SEL local_160;
  ID local_158;
  char *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  undefined1 auStack_138 [128];
  undefined1 auStack_b8 [128];
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_168 = 0;
  local_160 = param_2;
  local_158 = param_1;
  _objc_storeStrong(&local_168,param_3);
  if (local_168 == 0) {
    local_150 = (char *)0x0;
    local_16c = 1;
    goto LAB_00f3db84;
  }
  local_38 = &cf_m_nsImageHDPath;
  local_30 = &cf_m_nsImagePath;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2);
  _objc_retainAutoreleasedReturnValue();
  local_178 = puVar2;
  _memset(auStack_1c0,0,0x40);
  puVar2 = local_178;
  (*(code *)PTR__objc_retain_02578638)();
  local_2c8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_b8,0x10);
  if (local_2c8 != (undefined *)0x0) {
    lVar9 = *local_1b0;
    local_2d0 = (undefined *)0x0;
    do {
      do {
        if (*local_1b0 - lVar9 != 0) {
          _objc_enumerationMutation(*local_1b0 - lVar9,puVar2);
        }
        local_180 = *(undefined8 *)(local_1b8 + (long)local_2d0 * 8);
        local_1c8 = 0;
        uVar3 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_valueForKey__0269d128,local_180);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = local_1c8;
        local_1c8 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar5);
        uVar5 = local_1c8;
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
        local_1e9 = 0;
        local_2f4 = 0;
        if ((uVar5 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_1e9 = 1;
          local_1e8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_2f4 = (uint)puVar4;
        }
        if ((local_1e9 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e8);
        }
        if ((local_2f4 & 1) == 0) {
LAB_00f3d410:
          local_16c = 0;
        }
        else {
          pcVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,
                     PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_1c8,1,0);
          _objc_retainAutoreleasedReturnValue();
          local_1f8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
          pcVar7 = local_1f8;
          bVar1 = pcVar6 != (char *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_150 = pcVar7;
          }
          local_16c = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_1f8,0);
          if (local_16c == 0) goto LAB_00f3d410;
        }
        _objc_storeStrong(&local_1c8,0);
        if (local_16c != 0) goto LAB_00f3d498;
        local_2d0 = local_2d0 + 1;
      } while (local_2d0 < local_2c8);
      local_2c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_b8,0x10)
      ;
      local_2d0 = (undefined *)0x0;
    } while (local_2c8 != (undefined *)0x0);
  }
  local_16c = 0;
LAB_00f3d498:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_16c == 0) {
    _memset(auStack_240,0,0x40);
    local_148 = &cf_getRawHDThumbImagePath;
    local_140 = &cf_getHDThumbImagePath;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_148,
               2);
    _objc_retainAutoreleasedReturnValue();
    local_338 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_338 != (undefined *)0x0) {
      lVar9 = *local_230;
      local_340 = (undefined *)0x0;
      do {
        do {
          if (*local_230 - lVar9 != 0) {
            _objc_enumerationMutation(*local_230 - lVar9,puVar2);
          }
          uVar10 = *(undefined8 *)(local_238 + (long)local_340 * 8);
          local_200 = uVar10;
          _NSSelectorFromString();
          uVar5 = local_168;
          local_248 = uVar10;
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_respondsToSelector__026ca818,uVar10)
          ;
          if ((uVar5 & 1) != 0) {
            uVar5 = local_168;
            (*(code *)PTR__objc_msgSend_02578628)(local_168,local_248);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_250 = uVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar4);
            local_259 = 0;
            local_35c = 0;
            if ((uVar5 & 1) != 0) {
              puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
              _objc_retainAutoreleasedReturnValue();
              local_259 = 1;
              local_258 = puVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_35c = (uint)puVar4;
            }
            if ((local_259 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_258);
            }
            if ((local_35c & 1) == 0) {
LAB_00f3d788:
              local_16c = 0;
            }
            else {
              pcVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,
                         PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_250,1,0);
              _objc_retainAutoreleasedReturnValue();
              local_268 = pcVar6;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
              pcVar7 = local_268;
              bVar1 = pcVar6 != (char *)0x0;
              if (bVar1) {
                (*(code *)PTR__objc_retain_02578638)();
                local_150 = pcVar7;
              }
              local_16c = (uint)bVar1;
              _objc_storeStrong(bVar1,&local_268,0);
              if (local_16c == 0) goto LAB_00f3d788;
            }
            _objc_storeStrong(&local_250,0);
            if (local_16c != 0) goto LAB_00f3d814;
          }
          local_340 = local_340 + 1;
        } while (local_340 < local_338);
        local_338 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_138,
                   0x10);
        local_340 = (undefined *)0x0;
      } while (local_338 != (undefined *)0x0);
    }
    local_16c = 0;
LAB_00f3d814:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_16c == 0) {
      pcVar7 = "CMessageWrap";
      _objc_getClass();
      pcVar8 = &cf_getMsgHdOrMiddleImgData_;
      local_270 = pcVar7;
      _NSSelectorFromString();
      pcVar7 = local_270;
      local_278 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_respondsToSelector__026ca818,pcVar8);
      if (((ulong)pcVar7 & 1) != 0) {
        pcVar7 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,local_278,local_168);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
        local_280 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((((ulong)pcVar7 & 1) == 0) ||
           (pcVar6 = local_280,
           (*(code *)PTR__objc_msgSend_02578628)(local_280,PTR_s_length_0269cca0),
           pcVar7 = local_280, pcVar6 == (char *)0x0)) {
          local_16c = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_150 = pcVar7;
          local_16c = 1;
        }
        _objc_storeStrong(&local_280,0);
        if (local_16c != 0) goto LAB_00f3db74;
      }
      pcVar8 = &cf_getPathOfMsgImg_;
      _NSSelectorFromString();
      pcVar7 = local_270;
      local_288 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_270,PTR_s_respondsToSelector__026ca818,pcVar8);
      if (((ulong)pcVar7 & 1) != 0) {
        pcVar7 = local_270;
        (*(code *)PTR__objc_msgSend_02578628)(local_270,local_288,local_168);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_290 = pcVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar7,PTR_s_isKindOfClass__0269cd68,puVar2);
        local_299 = 0;
        local_38c = 0;
        if (((ulong)pcVar7 & 1) != 0) {
          puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_299 = 1;
          local_298 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          local_38c = (uint)puVar2;
        }
        if ((local_299 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_298);
        }
        if ((local_38c & 1) == 0) {
LAB_00f3db40:
          local_16c = 0;
        }
        else {
          pcVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSData_026ce1d0,
                     PTR_s_dataWithContentsOfFile_options_e_026a09f0,local_290,1,0);
          _objc_retainAutoreleasedReturnValue();
          local_2a8 = pcVar6;
          (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_length_0269cca0);
          pcVar7 = local_2a8;
          bVar1 = pcVar6 != (char *)0x0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_150 = pcVar7;
          }
          local_16c = (uint)bVar1;
          _objc_storeStrong(bVar1,&local_2a8,0);
          if (local_16c == 0) goto LAB_00f3db40;
        }
        _objc_storeStrong(&local_290,0);
        if (local_16c != 0) goto LAB_00f3db74;
      }
      local_150 = (char *)0x0;
      local_16c = 1;
    }
  }
LAB_00f3db74:
  _objc_storeStrong(&local_178,0);
LAB_00f3db84:
  _objc_storeStrong(&local_168,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_150;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

