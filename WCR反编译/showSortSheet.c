// showSortSheet @ 01d17250

/* Function Stack Size: 0x10 bytes */

void WCRefineQuickReplyListViewController::showSortSheet(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
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
  undefined *puVar13;
  undefined *puVar14;
  ID IVar15;
  ID IVar16;
  ID IVar17;
  long lVar18;
  undefined8 uVar19;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_1e8;
  undefined1 local_1d9;
  undefined *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  code *local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined1 auStack_1b0 [8];
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  undefined8 local_168;
  undefined *local_160 [3];
  undefined *local_148;
  undefined1 auStack_140 [8];
  SEL local_138;
  ID local_130;
  undefined1 auStack_128 [128];
  cfstringStruct *local_a8;
  undefined *local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138 = param_2;
  local_130 = param_1;
  _objc_initWeak(auStack_140,param_1);
  puVar2 = PTR__OBJC_CLASS___UIAlertController_026ce178;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertController_026ce178,
             PTR_s_alertControllerWithTitle_message_0269dc00,&cf_c_,0,0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = &cf_Tyz_;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_148 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_58 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60,3);
  _objc_retainAutoreleasedReturnValue();
  local_78 = &cf_TyP_;
  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_68 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,3);
  _objc_retainAutoreleasedReturnValue();
  local_90 = &cf_ez_;
  puVar8 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_40 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_88 = puVar8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_80 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_90,3);
  _objc_retainAutoreleasedReturnValue();
  local_a8 = &cf_eP_;
  puVar11 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_a0 = puVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_98 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_a8,3);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  local_160[0] = puVar14;
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar8);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _memset(auStack_1a8,0,0x40);
  puVar2 = local_160[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_2d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_128,0x10);
  if (local_2d8 != (undefined *)0x0) {
    lVar18 = *local_198;
    local_2e0 = (undefined *)0x0;
    do {
      do {
        if (*local_198 - lVar18 != 0) {
          _objc_enumerationMutation(*local_198 - lVar18,puVar2);
        }
        puVar4 = local_148;
        puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        uVar19 = *(undefined8 *)(local_1a0 + (long)local_2e0 * 8);
        local_168 = uVar19;
        (*(code *)PTR__objc_msgSend_02578628)(uVar19,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_168;
        local_1d8 = PTR___NSConcreteStackBlock_02578660;
        local_1d0 = 0xc2000000;
        local_1cc = 0;
        local_1c8 = FUN_01d17c04;
        local_1c0 = &DAT_0258a148;
        (*(code *)PTR__objc_retain_02578638)();
        local_1b8 = uVar1;
        _objc_copyWeak(auStack_1b0,auStack_140);
        local_1d9 = 1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_actionWithTitle_style_handler__0269dc08,uVar19,0,&local_1d8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
        local_1d9 = 0;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(uVar19);
        _objc_destroyWeak(auStack_1b0);
        _objc_storeStrong(&local_1b8,0);
        local_2e0 = local_2e0 + 1;
      } while (local_2e0 < local_2d8);
      local_2d8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_128,0x10
                );
      local_2e0 = (undefined *)0x0;
    } while (local_2d8 != (undefined *)0x0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_148;
  puVar3 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIAlertAction_026ce180,PTR_s_actionWithTitle_style_handler__0269dc08,
             &cf_Sm,1,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addAction__0269dc10);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar2 = local_148;
  (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_popoverPresentationController_0269fdf0);
  _objc_retainAutoreleasedReturnValue();
  local_1e8 = puVar2;
  if (puVar2 != (undefined *)0x0) {
    IVar15 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    IVar16 = IVar15;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar17 = IVar16;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1e8,PTR_s_setBarButtonItem__026aa230);
    (*(code *)PTR__objc_release_02578630)(IVar17);
    (*(code *)PTR__objc_release_02578630)(IVar16);
    (*(code *)PTR__objc_release_02578630)(IVar15);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_130,PTR_s_presentViewController_animated_c_0269d2b0,local_148,1,0);
  _objc_storeStrong(&local_1e8);
  _objc_storeStrong(local_160,0);
  _objc_storeStrong(&local_148,0);
  _objc_destroyWeak(auStack_140);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

