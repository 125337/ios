// pickTransport @ 01957a58

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

void WCRefineFakeLocationSettingsViewController::pickTransport(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ID IVar9;
  long lVar10;
  long lVar11;
  undefined *local_230;
  undefined *local_228;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  long local_168;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  long local_110;
  undefined1 auStack_108 [8];
  undefined *local_100;
  undefined *local_f8;
  SEL local_f0;
  ID local_e8;
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
  local_f0 = param_2;
  local_e8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,4);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,7);
  _objc_retainAutoreleasedReturnValue();
  local_f8 = puVar8;
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_100 = puVar1;
  _objc_initWeak(auStack_108,local_e8);
  _memset(auStack_150,0,0x40);
  puVar1 = local_f8;
  (*(code *)PTR__objc_retain_02578638)();
  local_228 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_e0,0x10);
  if (local_228 != (undefined *)0x0) {
    lVar10 = *local_140;
    local_230 = (undefined *)0x0;
    do {
      do {
        if (*local_140 - lVar10 != 0) {
          _objc_enumerationMutation(*local_140 - lVar10,puVar1);
        }
        lVar11 = *(long *)(local_148 + (long)local_230 * 8);
        local_110 = lVar11;
        (*(code *)PTR__objc_msgSend_02578628)(lVar11,PTR_s_integerValue_026ca750);
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_170 = (undefined *)0x0;
        local_168 = lVar11;
        if (lVar11 == 6) {
          _objc_storeStrong(0,&local_170,&cf_zf);
        }
        else {
          puVar4 = PTR_WCRefineFakeLocationEngine_026ceb80;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_titleForTransportType__026ac660,
                     lVar11);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineFakeLocationEngine_026ceb80,
                     PTR_s_speedKmhForTransportType__026ac630,local_168);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_stringWithFormat__0269cca8,&cf_____0fkm_h);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_170;
          local_170 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar4);
        }
        IVar9 = local_e8;
        puVar3 = local_100;
        puVar2 = local_170;
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0xc2000000;
        local_194 = 0;
        local_190 = FUN_01958158;
        local_188 = &DAT_025799c0;
        _objc_copyWeak(auStack_180,auStack_108);
        local_178 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)
                  (IVar9,PTR_s_sheetActionTitle_block__026b9be8,puVar2,&local_1a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObject__0269d180);
        (*(code *)PTR__objc_release_02578630)(IVar9);
        _objc_destroyWeak(auStack_180);
        _objc_storeStrong(&local_170,0);
        local_230 = local_230 + 1;
      } while (local_230 < local_228);
      local_228 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_e0,0x10)
      ;
      local_230 = (undefined *)0x0;
    } while (local_228 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e8,PTR_s_showNativeSheetTitle_actions__026b9bf0,&cf_bN_wQ,local_100);
  _objc_destroyWeak(auStack_108);
  _objc_storeStrong(&local_100);
  _objc_storeStrong(&local_f8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

