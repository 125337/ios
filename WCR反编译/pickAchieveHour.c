// pickAchieveHour @ 01df0eb4

/* Function Stack Size: 0x10 bytes */

void WCRefineStepCountSettingsViewController::pickAchieveHour(ID param_1,SEL param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  ID IVar14;
  long lVar15;
  undefined *local_218;
  undefined *local_210;
  char *local_180;
  undefined *local_178;
  undefined1 auStack_170 [8];
  long local_168;
  long *local_160;
  undefined8 local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  char *local_110;
  char *local_108;
  SEL local_100;
  ID local_f8;
  undefined1 auStack_f0 [128];
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_100 = param_2;
  local_f8 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar1 = "WCActionSheet";
  _objc_getClass();
  pcVar2 = "WCActionSheetItem";
  local_108 = pcVar1;
  _objc_getClass();
  local_110 = pcVar2;
  if ((local_108 == (char *)0x0) || (pcVar2 == (char *)0x0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_USNS_u);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xc);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_70 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0xe);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_68 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x10);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_60 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x12);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_58 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x13);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x14);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = puVar8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x15);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_40 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x16);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_38 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0x17);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = puVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_70,9
              );
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar12;
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_120 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_128 = puVar4;
    _memset(auStack_170,0,0x40);
    puVar3 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_f0,0x10);
    if (local_210 != (undefined *)0x0) {
      lVar15 = *local_160;
      local_218 = (undefined *)0x0;
      do {
        do {
          if (*local_160 - lVar15 != 0) {
            _objc_enumerationMutation(*local_160 - lVar15,puVar3);
          }
          local_130 = *(undefined8 *)(local_168 + (long)local_218 * 8);
          puVar4 = PTR_WCRStepAchieveSheetAction_026cf600;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRStepAchieveSheetAction_026cf600,PTR_s_new_0269d288);
          uVar13 = local_130;
          local_178 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_integerValue_026ca750);
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setHour__026a52f0,uVar13);
          puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_hour_026a44c8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf__ld_00);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_setTitle__0269cef0);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_addObject__0269d180,local_178);
          puVar4 = local_128;
          pcVar1 = local_110;
          _objc_alloc();
          puVar5 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_title_0269d250);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_initWithTitle__0269d2f8);
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
          (*(code *)PTR__objc_release_02578630)(pcVar1);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          _objc_storeStrong(&local_178,0);
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_170,auStack_f0,
                   0x10);
        local_218 = (undefined *)0x0;
      } while (local_210 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_setAchieveSheetActions__026c5a70,local_120)
    ;
    pcVar1 = local_108;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_180 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_setValue_forKey__0269d300,local_128,&cf_buttonTitleList);
    pcVar1 = local_180;
    puVar3 = PTR_s_showInView__0269d310;
    IVar14 = local_f8;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3);
    (*(code *)PTR__objc_release_02578630)(IVar14);
    _objc_storeStrong(&local_180,0);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

