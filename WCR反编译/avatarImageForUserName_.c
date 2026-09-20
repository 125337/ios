// avatarImageForUserName: @ 00ff7b50

/* Function Stack Size: 0x18 bytes */

ID WCRefineKeywordAlertDanmakuPresenter::avatarImageForUserName_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  ID IVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *local_478;
  undefined *local_470;
  undefined *local_438;
  undefined *local_430;
  undefined *local_398;
  char *local_388;
  char *local_360;
  char *local_338;
  char *local_328;
  char *local_320;
  undefined1 auStack_318 [8];
  long local_310;
  long *local_308;
  undefined8 local_2d8;
  undefined1 local_2c9;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long *local_2b8;
  undefined8 local_288;
  undefined *local_280;
  byte local_271;
  undefined *local_270;
  byte local_261;
  undefined *local_260;
  byte local_251;
  undefined *local_250;
  byte local_241;
  undefined *local_240;
  byte local_231;
  undefined *local_230;
  byte local_221;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  undefined *local_208;
  undefined1 local_1f9;
  cfstringStruct *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1e0;
  char *local_1d8;
  char *local_1d0;
  byte local_1c1;
  char *local_1c0;
  char *local_1b8;
  char *local_1b0;
  char *local_1a8;
  char *local_1a0;
  char *local_198;
  uint local_18c;
  ID local_188;
  undefined8 local_180;
  SEL local_178;
  ID local_170;
  char *local_168;
  undefined1 auStack_160 [128];
  undefined1 auStack_e0 [128];
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_180 = 0;
  local_178 = param_2;
  local_170 = param_1;
  _objc_storeStrong(&local_180,param_3);
  IVar2 = local_170;
  (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_trimmedString__0269ec98,local_180);
  _objc_retainAutoreleasedReturnValue();
  local_188 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_168 = (char *)0x0;
    local_18c = 1;
    goto LAB_00ff893c;
  }
  pcVar3 = "CContactMgr";
  _objc_getClass();
  local_328 = "MMServiceCenter";
  local_198 = pcVar3;
  _objc_getClass();
  local_1a0 = local_328;
  if ((local_198 != (char *)0x0) && (local_328 != (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_328,PTR_s_performSelector__026ca7b8,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_1a8 = local_328;
    if (local_328 == (char *)0x0) {
      local_328 = (char *)0x0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_328,PTR_s_performSelector_withObject__026ca7c0,PTR_s_getService__0269d170,
                 local_198);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = local_328;
    local_1c1 = 0;
    if ((local_328 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (local_328,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)local_328 & 1) == 0)) {
      local_338 = (char *)0x0;
    }
    else {
      local_338 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_getContactByName__0269d178,local_188);
      _objc_retainAutoreleasedReturnValue();
      local_1c1 = 1;
      local_1c0 = local_338;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1b8 = local_338;
    if ((local_1c1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c0);
    }
    pcVar3 = local_1b8;
    if (local_1b8 == (char *)0x0) {
LAB_00ff7fd4:
      local_18c = 0;
    }
    else {
      pcVar4 = &cf_getContactHeadImage;
      _NSSelectorFromString(&cf_getContactHeadImage);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar4);
      pcVar5 = local_1b8;
      if (((ulong)pcVar3 & 1) == 0) {
LAB_00ff7e48:
        pcVar3 = local_1b8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1b8,PTR_s_respondsToSelector__026ca818,PTR_s_m_dtUsrImg_026ad7c8);
        if (((ulong)pcVar3 & 1) == 0) {
          local_360 = (char *)0x0;
        }
        else {
          local_360 = local_1b8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_1b8,PTR_s_performSelector__026ca7b8,PTR_s_m_dtUsrImg_026ad7c8);
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1d8 = local_360;
        puVar6 = PTR__OBJC_CLASS___NSData_026ce1d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(local_360,PTR_s_isKindOfClass__0269cd68,puVar6);
        if ((((ulong)local_360 & 1) == 0) ||
           (pcVar3 = local_1d8,
           (*(code *)PTR__objc_msgSend_02578628)(local_1d8,PTR_s_length_0269cca0),
           pcVar3 == (char *)0x0)) {
LAB_00ff7fb0:
          local_18c = 0;
        }
        else {
          pcVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,local_1d8);
          _objc_retainAutoreleasedReturnValue();
          local_1e0 = pcVar3;
          if (pcVar3 != (char *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_168 = pcVar3;
          }
          local_18c = (uint)(pcVar3 != (char *)0x0);
          _objc_storeStrong(&local_1e0,0);
          if (local_18c == 0) goto LAB_00ff7fb0;
        }
        _objc_storeStrong(&local_1d8,0);
        if (local_18c == 0) goto LAB_00ff7fd4;
      }
      else {
        pcVar4 = &cf_getContactHeadImage;
        _NSSelectorFromString(&cf_getContactHeadImage);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar5,pcVar4);
        _objc_retainAutoreleasedReturnValue();
        local_1d0 = pcVar5;
        if (pcVar5 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = pcVar5;
        }
        local_18c = (uint)(pcVar5 != (char *)0x0);
        _objc_storeStrong(&local_1d0,0);
        if (local_18c == 0) goto LAB_00ff7e48;
      }
    }
    _objc_storeStrong(&local_1b8);
    _objc_storeStrong(&local_1b0,0);
    _objc_storeStrong(&local_1a8,0);
    if (local_18c != 0) goto LAB_00ff893c;
  }
  pcVar3 = "MMHeadImageCacher";
  _objc_getClass();
  local_1e8 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_168 = (char *)0x0;
    local_18c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30);
    if (((ulong)pcVar3 & 1) == 0) {
      local_388 = (char *)0x0;
    }
    else {
      local_388 = local_1e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1e8,PTR_s_performSelector__026ca7b8,PTR_s_sharedInstance_0269cd30);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1f0 = local_388;
    if (local_388 == (char *)0x0) {
      pcVar5 = local_1e8;
      _objc_alloc_init();
      pcVar3 = local_1f0;
      local_1f0 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar4 = &cf_loadImageFromLocal_withCategory_isHD_;
    _NSSelectorFromString();
    local_1f8 = pcVar4;
    if ((local_1f0 == (char *)0x0) ||
       (pcVar3 = local_1f0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      local_168 = (char *)0x0;
      local_18c = 1;
    }
    else {
      IVar2 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_hasSuffix__0269d018,&cf__chatroom);
      local_1f9 = (undefined1)IVar2;
      local_211 = 0;
      local_221 = 0;
      local_231 = 0;
      local_241 = 0;
      local_251 = 0;
      local_261 = 0;
      local_271 = 0;
      if ((IVar2 & 1) == 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_251 = 1;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_250 = puVar6;
        local_50 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        local_261 = 1;
        local_398 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_260 = puVar7;
        local_48 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_50,2);
        _objc_retainAutoreleasedReturnValue();
        local_271 = 1;
        local_270 = local_398;
      }
      else {
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
        _objc_retainAutoreleasedReturnValue();
        local_211 = 1;
        puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_210 = puVar6;
        local_40 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
        _objc_retainAutoreleasedReturnValue();
        local_221 = 1;
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_220 = puVar7;
        local_38 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
        _objc_retainAutoreleasedReturnValue();
        local_231 = 1;
        local_398 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_230 = puVar6;
        local_30 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_40,3);
        _objc_retainAutoreleasedReturnValue();
        local_241 = 1;
        local_240 = local_398;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_208 = local_398;
      if ((local_271 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_270);
      }
      if ((local_261 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_260);
      }
      if ((local_251 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_250);
      }
      if ((local_241 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_240);
      }
      if ((local_231 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_230);
      }
      if ((local_221 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_220);
      }
      if ((local_211 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_210);
      }
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_60 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_58 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_280 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _memset(auStack_2c8,0,0x40);
      puVar6 = local_208;
      (*(code *)PTR__objc_retain_02578638)();
      local_430 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_e0,0x10)
      ;
      if (local_430 != (undefined *)0x0) {
        lVar9 = *local_2b8;
        local_438 = (undefined *)0x0;
        do {
          do {
            if (*local_2b8 - lVar9 != 0) {
              _objc_enumerationMutation(*local_2b8 - lVar9,puVar6);
            }
            uVar10 = *(undefined8 *)(local_2c0 + (long)local_438 * 8);
            local_288 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_unsignedCharValue_026a0a00);
            local_2c9 = (undefined1)uVar10;
            _memset(auStack_318,0,0x40);
            puVar7 = local_280;
            (*(code *)PTR__objc_retain_02578638)();
            local_470 = puVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,
                       auStack_160,0x10);
            if (local_470 != (undefined *)0x0) {
              lVar11 = *local_308;
              local_478 = (undefined *)0x0;
              do {
                do {
                  if (*local_308 - lVar11 != 0) {
                    _objc_enumerationMutation(*local_308 - lVar11,puVar7);
                  }
                  IVar2 = local_188;
                  pcVar3 = local_1f0;
                  pcVar4 = local_1f8;
                  uVar1 = local_2c9;
                  uVar10 = *(undefined8 *)(local_310 + (long)local_478 * 8);
                  local_2d8 = uVar10;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_boolValue_026ca540);
                  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,pcVar4,IVar2,uVar1,uVar10);
                  _objc_retainAutoreleasedReturnValue();
                  local_320 = pcVar3;
                  if (pcVar3 != (char *)0x0) {
                    (*(code *)PTR__objc_retain_02578638)();
                    local_168 = pcVar3;
                  }
                  local_18c = (uint)(pcVar3 != (char *)0x0);
                  _objc_storeStrong(&local_320,0);
                  if (local_18c != 0) goto LAB_00ff8854;
                  local_478 = local_478 + 1;
                } while (local_478 < local_470);
                local_470 = puVar7;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar7,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_318,
                           auStack_160,0x10);
                local_478 = (undefined *)0x0;
              } while (local_470 != (undefined *)0x0);
            }
            local_18c = 0;
LAB_00ff8854:
            (*(code *)PTR__objc_release_02578630)(puVar7);
            if (local_18c != 0) goto LAB_00ff88dc;
            local_438 = local_438 + 1;
          } while (local_438 < local_430);
          local_430 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c8,auStack_e0,
                     0x10);
          local_438 = (undefined *)0x0;
        } while (local_430 != (undefined *)0x0);
      }
      local_18c = 0;
LAB_00ff88dc:
      (*(code *)PTR__objc_release_02578630)(puVar6);
      if (local_18c == 0) {
        local_168 = (char *)0x0;
        local_18c = 1;
      }
      _objc_storeStrong(&local_280);
      _objc_storeStrong(&local_208,0);
    }
    _objc_storeStrong(&local_1f0,0);
  }
LAB_00ff893c:
  _objc_storeStrong(&local_188);
  _objc_storeStrong(&local_180,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_168;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

