// FUN_0155f7e4 @ 0155f7e4

void FUN_0155f7e4(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined *local_3b0;
  undefined *local_3a8;
  undefined *local_370;
  undefined *local_368;
  undefined *local_2d0;
  char *local_2c8;
  byte local_2b9;
  undefined1 auStack_2b8 [8];
  long local_2b0;
  long *local_2a8;
  undefined8 local_278;
  undefined1 local_269;
  undefined1 auStack_268 [8];
  long local_260;
  long *local_258;
  undefined8 local_228;
  undefined *local_220;
  byte local_211;
  undefined *local_210;
  byte local_201;
  undefined *local_200;
  byte local_1f1;
  undefined *local_1f0;
  byte local_1e1;
  undefined *local_1e0;
  byte local_1d1;
  undefined *local_1d0;
  byte local_1c1;
  undefined *local_1c0;
  byte local_1b1;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined1 local_199;
  cfstringStruct *local_198;
  char *local_190;
  char *local_188;
  uint local_17c;
  ulong local_178;
  ulong local_170;
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
  local_170 = 0;
  _objc_storeStrong(&local_170,param_1);
  uVar1 = local_170;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_178 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_168 = (char *)0x0;
    local_17c = 1;
  }
  else {
    pcVar2 = "MMHeadImageCacher";
    _objc_getClass();
    local_188 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_168 = (char *)0x0;
      local_17c = 1;
    }
    else {
      FUN_01533df4(pcVar2,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_190 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        pcVar3 = local_188;
        _objc_alloc_init();
        pcVar2 = local_190;
        local_190 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      pcVar4 = &cf_loadImageFromLocal_withCategory_isHD_;
      _NSSelectorFromString();
      local_198 = pcVar4;
      if ((local_190 == (char *)0x0) ||
         (pcVar2 = local_190,
         (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_respondsToSelector__026ca818,pcVar4),
         ((ulong)pcVar2 & 1) == 0)) {
        local_168 = (char *)0x0;
        local_17c = 1;
      }
      else {
        uVar1 = local_178;
        (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_hasSuffix__0269d018,&cf__chatroom);
        local_199 = (undefined1)uVar1;
        local_1b1 = 0;
        local_1c1 = 0;
        local_1d1 = 0;
        local_1e1 = 0;
        local_1f1 = 0;
        local_201 = 0;
        local_211 = 0;
        if ((uVar1 & 1) == 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_1f1 = 1;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1f0 = puVar5;
          local_50 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
          _objc_retainAutoreleasedReturnValue();
          local_201 = 1;
          local_2d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_200 = puVar6;
          local_48 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_50,2);
          _objc_retainAutoreleasedReturnValue();
          local_211 = 1;
          local_210 = local_2d0;
        }
        else {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
          _objc_retainAutoreleasedReturnValue();
          local_1b1 = 1;
          puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1b0 = puVar5;
          local_40 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
          _objc_retainAutoreleasedReturnValue();
          local_1c1 = 1;
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_1c0 = puVar6;
          local_38 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
          _objc_retainAutoreleasedReturnValue();
          local_1d1 = 1;
          local_2d0 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_1d0 = puVar5;
          local_30 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_40,3);
          _objc_retainAutoreleasedReturnValue();
          local_1e1 = 1;
          local_1e0 = local_2d0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_1a8 = local_2d0;
        if ((local_211 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_210);
        }
        if ((local_201 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_200);
        }
        if ((local_1f1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1f0);
        }
        if ((local_1e1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1e0);
        }
        if ((local_1d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1d0);
        }
        if ((local_1c1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1c0);
        }
        if ((local_1b1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_1b0);
        }
        puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
        local_60 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_58 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_60,2);
        _objc_retainAutoreleasedReturnValue();
        local_220 = puVar7;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar5);
        _memset(auStack_268,0,0x40);
        puVar5 = local_1a8;
        (*(code *)PTR__objc_retain_02578638)();
        local_368 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_e0,
                   0x10);
        if (local_368 != (undefined *)0x0) {
          lVar8 = *local_258;
          local_370 = (undefined *)0x0;
          do {
            do {
              if (*local_258 - lVar8 != 0) {
                _objc_enumerationMutation(*local_258 - lVar8,puVar5);
              }
              uVar9 = *(undefined8 *)(local_260 + (long)local_370 * 8);
              local_228 = uVar9;
              (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_unsignedCharValue_026a0a00);
              local_269 = (undefined1)uVar9;
              _memset(auStack_2b8,0,0x40);
              puVar6 = local_220;
              (*(code *)PTR__objc_retain_02578638)();
              local_3a8 = puVar6;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,
                         auStack_160,0x10);
              if (local_3a8 != (undefined *)0x0) {
                lVar10 = *local_2a8;
                local_3b0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_2a8 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_2a8 - lVar10,puVar6);
                    }
                    uVar9 = *(undefined8 *)(local_2b0 + (long)local_3b0 * 8);
                    local_278 = uVar9;
                    (*(code *)PTR__objc_msgSend_02578628)(uVar9,PTR_s_boolValue_026ca540);
                    local_2b9 = (byte)uVar9;
                    pcVar2 = local_190;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_190,local_198,local_178,local_269,local_2b9 & 1);
                    _objc_retainAutoreleasedReturnValue();
                    local_2c8 = pcVar2;
                    if (pcVar2 != (char *)0x0) {
                      (*(code *)PTR__objc_retain_02578638)();
                      local_168 = pcVar2;
                    }
                    local_17c = (uint)(pcVar2 != (char *)0x0);
                    _objc_storeStrong(&local_2c8,0);
                    if (local_17c != 0) goto LAB_01560024;
                    local_3b0 = local_3b0 + 1;
                  } while (local_3b0 < local_3a8);
                  local_3a8 = puVar6;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2b8,
                             auStack_160,0x10);
                  local_3b0 = (undefined *)0x0;
                } while (local_3a8 != (undefined *)0x0);
              }
              local_17c = 0;
LAB_01560024:
              (*(code *)PTR__objc_release_02578630)(puVar6);
              if (local_17c != 0) goto LAB_015600ac;
              local_370 = local_370 + 1;
            } while (local_370 < local_368);
            local_368 = puVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_268,auStack_e0
                       ,0x10);
            local_370 = (undefined *)0x0;
          } while (local_368 != (undefined *)0x0);
        }
        local_17c = 0;
LAB_015600ac:
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (local_17c == 0) {
          local_168 = (char *)0x0;
          local_17c = 1;
        }
        _objc_storeStrong(&local_220);
        _objc_storeStrong(&local_1a8,0);
      }
      _objc_storeStrong(&local_190,0);
    }
  }
  _objc_storeStrong(&local_178);
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_168);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

