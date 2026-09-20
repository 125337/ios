// FUN_003da0f4 @ 003da0f4

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_003da0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,byte param_7)

{
  char *pcVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  cfstringStruct *local_308;
  cfstringStruct *local_2f0;
  cfstringStruct *local_2d8;
  cfstringStruct *local_2c8;
  undefined *local_250;
  undefined *local_248;
  byte local_1b9;
  undefined8 local_1b8 [2];
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  undefined8 local_160;
  long local_158 [4];
  cfstringStruct *local_138;
  char *local_130;
  long local_128;
  long local_120;
  undefined4 local_114;
  char *local_110;
  undefined8 local_108;
  byte local_f9;
  undefined8 local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  long local_d8;
  char *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_2);
  local_e0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e0,param_3);
  local_e8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_e8,param_4);
  local_f0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_f0,param_5);
  pcVar1 = "MainFrameCellData";
  local_f9 = param_7;
  local_108 = param_1;
  local_f8 = param_6;
  _objc_getClass();
  local_110 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_d0 = (char *)0x0;
    local_114 = 1;
  }
  else {
    lVar7 = local_d8;
    FUN_00355e04();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_d8;
    local_120 = lVar7;
    FUN_003dec94(local_108,local_d8,local_e0,local_f8,local_f9 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_130 = (char *)0x0;
    pcVar3 = &cf_initWithSessionInfo_;
    local_128 = lVar2;
    _NSSelectorFromString();
    local_138 = pcVar3;
    if ((local_128 != 0) &&
       (pcVar1 = local_110,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_110,PTR_s_instancesRespondToSelector__0269da90,pcVar3),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar4 = local_110;
      _objc_alloc();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,local_138,local_128);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_130;
      local_130 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (local_130 == (char *)0x0) {
      pcVar4 = local_110;
      _objc_alloc_init();
      pcVar1 = local_130;
      local_130 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    if (local_130 == (char *)0x0) {
      local_d0 = (char *)0x0;
      local_114 = 1;
    }
    else {
      FUN_00367110(local_130,&cf_m_sessionInfo,local_128);
      FUN_00367110(local_130,&cf_m_nsUserName,local_120);
      FUN_00367110(local_130,&cf_m_nsHeadImgUsrName,local_120);
      FUN_00367110(local_130,&cf_m_nsHeadImgUrl,&cf___);
      FUN_00367110(local_130,&cf_m_nsRealUsrName,local_120);
      lVar7 = local_128;
      FUN_003612b8(local_128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      local_158[0] = lVar7;
      if (lVar7 == 0) {
        lVar2 = local_128;
        FUN_003b3da8(local_128,"m_contact");
        _objc_retainAutoreleasedReturnValue();
        lVar7 = local_158[0];
        local_158[0] = lVar2;
        (*(code *)PTR__objc_release_02578630)(lVar7);
      }
      if (local_158[0] != 0) {
        FUN_00367110(local_130,&cf_m_contact,local_158[0]);
      }
      _memset(auStack_1a0,0,0x40);
      local_c8 = &cf_updateDataFieldForUI;
      local_c0 = &cf_makeTextForNameLabel;
      local_b8 = &cf_makeTextForMessageLabel;
      local_b0 = &cf_updateTextForTimeLabel;
      puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_248 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_248 != (undefined *)0x0) {
        lVar7 = *local_190;
        local_250 = (undefined *)0x0;
        do {
          do {
            if (*local_190 - lVar7 != 0) {
              _objc_enumerationMutation(*local_190 - lVar7,puVar6);
            }
            uVar8 = *(undefined8 *)(local_198 + (long)local_250 * 8);
            local_160 = uVar8;
            _NSSelectorFromString();
            pcVar1 = local_130;
            local_1a8 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_130,PTR_s_respondsToSelector__026ca818,uVar8);
            if (((ulong)pcVar1 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_130,local_1a8);
            }
            local_250 = local_250 + 1;
          } while (local_250 < local_248);
          local_248 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_250 = (undefined *)0x0;
        } while (local_248 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_1b8[0] = 0;
      local_1b9 = 0;
      FUN_003db9fc(local_f8,local_f9 & 1,local_1b8,&local_1b9);
      lVar7 = local_128;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_1b8[0]);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(lVar7,&cf_m_uUnReadCount);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      lVar7 = local_128;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_1b9 & 1);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(lVar7,&cf_m_bShowUnReadAsRedDot);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar1 = local_130;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_m_isNeedUpdateDataForUI);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_2c8 = local_e0;
      if (local_e0 == (cfstringStruct *)0x0) {
        local_2c8 = &cf___;
      }
      FUN_00367110(local_130,&cf_m_textForNameLabel,local_2c8);
      pcVar1 = local_130;
      pcVar3 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_2d8 = &cf_0;
      }
      else {
        local_2d8 = local_e8;
      }
      FUN_00367110(pcVar1,&cf_m_textForMessageLabel,local_2d8);
      local_2f0 = local_f0;
      if (local_f0 == (cfstringStruct *)0x0) {
        local_2f0 = &cf___;
      }
      FUN_00367110(local_130,&cf_m_textForTimeLabel,local_2f0);
      local_308 = local_e0;
      if (local_e0 == (cfstringStruct *)0x0) {
        local_308 = &cf___;
      }
      FUN_00367110(local_130,&cf_m_oldTextForNameLabel,local_308);
      pcVar1 = local_130;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 local_f8);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_m_lastUnReadCount);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar1 = local_130;
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      FUN_00367110(pcVar1,&cf_m_bIsNeedSaveCellData);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      pcVar1 = local_130;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = pcVar1;
      local_114 = 1;
      _objc_storeStrong(local_158,0);
    }
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

