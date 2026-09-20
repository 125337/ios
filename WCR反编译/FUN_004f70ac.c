// FUN_004f70ac @ 004f70ac

void FUN_004f70ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *local_490;
  undefined *local_488;
  undefined *local_410;
  undefined *local_408;
  undefined *local_3b8;
  undefined *local_3b0;
  undefined1 auStack_378 [8];
  long local_370;
  long *local_368;
  undefined8 local_338;
  undefined *local_330 [2];
  undefined4 local_31c;
  undefined *local_318;
  undefined1 auStack_310 [8];
  long local_308;
  long *local_300;
  undefined8 local_2d0;
  long local_2c8;
  undefined1 auStack_2c0 [8];
  long local_2b8;
  long *local_2b0;
  long local_280;
  undefined *local_278;
  undefined *local_270 [3];
  undefined *local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined1 auStack_238 [128];
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  cfstringStruct *local_180;
  cfstringStruct *local_178;
  cfstringStruct *local_170;
  undefined1 auStack_168 [128];
  undefined1 auStack_e8 [128];
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
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_248 = param_1;
  local_240 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_250 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_68 = &cf_dVN;
  local_60 = &cf__;
  local_58 = &cf__;
  local_50 = &cf__;
  local_48 = &cf__OdVN;
  local_40 = &cf_recalledamessage;
  local_38 = &cf_____recalledamessage;
  local_30 = &cf___recalledamessage;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_258 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSMutableSet_026ce0f0;
  local_270[0] = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSMutableSet_026ce0f0,PTR_s_set_0269d510);
  _objc_retainAutoreleasedReturnValue();
  local_278 = puVar4;
  _memset(auStack_2c0,0,0x40);
  puVar3 = local_270[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_3b0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_e8,0x10);
  if (local_3b0 != (undefined *)0x0) {
    lVar6 = *local_2b0;
    local_3b8 = (undefined *)0x0;
    do {
      do {
        if (*local_2b0 - lVar6 != 0) {
          _objc_enumerationMutation(*local_2b0 - lVar6,puVar3);
        }
        lVar7 = *(long *)(local_2b8 + (long)local_3b8 * 8);
        local_280 = lVar7;
        FUN_004f7a88();
        _objc_retainAutoreleasedReturnValue();
        local_2c8 = lVar7;
        (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
        if (lVar7 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_278,PTR_s_addObject__0269d180,local_2c8);
        }
        _objc_storeStrong(&local_2c8,0);
        local_3b8 = local_3b8 + 1;
      } while (local_3b8 < local_3b0);
      local_3b0 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_2c0,auStack_e8,0x10)
      ;
      local_3b8 = (undefined *)0x0;
    } while (local_3b0 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_310,0,0x40);
  puVar3 = local_278;
  (*(code *)PTR__objc_retain_02578638)();
  local_408 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_168,0x10);
  if (local_408 != (undefined *)0x0) {
    lVar6 = *local_300;
    local_410 = (undefined *)0x0;
    do {
      do {
        if (*local_300 - lVar6 != 0) {
          _objc_enumerationMutation(*local_300 - lVar6,puVar3);
        }
        local_2d0 = *(undefined8 *)(local_308 + (long)local_410 * 8);
        puVar4 = PTR_WCRefineHelper_026ce000;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_localizedStringForKey__026a4498,local_2d0);
        _objc_retainAutoreleasedReturnValue();
        local_318 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_length_0269cca0);
        if (puVar4 == (undefined *)0x0) {
          local_31c = 6;
        }
        else {
          FUN_004f80a8(local_250,local_258,local_318);
          puVar2 = local_250;
          puVar4 = local_258;
          puVar5 = local_318;
          FUN_004f82ec();
          _objc_retainAutoreleasedReturnValue();
          FUN_004f80a8(puVar2,puVar4);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          local_31c = 0;
        }
        _objc_storeStrong(&local_318,0);
        local_410 = local_410 + 1;
      } while (local_410 < local_408);
      local_408 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_310,auStack_168,0x10
                );
      local_410 = (undefined *)0x0;
    } while (local_408 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_278,0);
  local_1b8 = &cf_dVN;
  local_1b0 = &cf_dVN;
  local_1a8 = &cf_dVmo_;
  local_1a0 = &cf_recalledamessage;
  local_198 = &cf_recalledmessage;
  local_190 = &cf_hasrecalledamessage;
  local_188 = &cf_unsendamessage;
  local_180 = &cf_cancelledamessage;
  local_178 = &cf_canceledamessage;
  local_170 = &cf_messagerecalled;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_1b8,10
            );
  _objc_retainAutoreleasedReturnValue();
  local_330[0] = puVar3;
  _memset(auStack_378,0,0x40);
  puVar3 = local_330[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_488 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_238,0x10);
  if (local_488 != (undefined *)0x0) {
    lVar6 = *local_368;
    local_490 = (undefined *)0x0;
    do {
      do {
        if (*local_368 - lVar6 != 0) {
          _objc_enumerationMutation(*local_368 - lVar6,puVar3);
        }
        local_338 = *(undefined8 *)(local_370 + (long)local_490 * 8);
        FUN_004f80a8(local_250,local_258,local_338);
        local_490 = local_490 + 1;
      } while (local_490 < local_488);
      local_488 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_378,auStack_238,0x10
                );
      local_490 = (undefined *)0x0;
    } while (local_488 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = local_250;
  (*(code *)PTR__objc_msgSend_02578628)(local_250,PTR_s_copy_0269d150);
  uVar1 = DAT_028caec0;
  DAT_028caec0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(local_330);
  _objc_storeStrong(local_270,0);
  _objc_storeStrong(&local_258,0);
  _objc_storeStrong(&local_250,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

