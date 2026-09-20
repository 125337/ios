// wcr_cardCellForTableView:indexPath: @ 01bef77c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

ID WCRefineMomentsDraftListViewController::wcr_cardCellForTableView_indexPath_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  cfstringStruct *local_528;
  cfstringStruct *local_4f0;
  cfstringStruct *local_4b8;
  char *local_400;
  char *local_3f8;
  undefined *local_320;
  undefined4 local_318;
  undefined4 local_314;
  code *local_310;
  undefined *local_308;
  cfstringStruct *local_300;
  undefined1 auStack_2f8 [8];
  long local_2f0;
  undefined *local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  code *local_2d8;
  undefined *local_2d0;
  undefined1 auStack_2c8 [8];
  long local_2c0;
  long local_2b8;
  cfstringStruct *local_2b0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  cfstringStruct *local_288;
  undefined1 auStack_280 [8];
  undefined *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  code *local_268;
  undefined *local_260;
  cfstringStruct *local_258;
  undefined1 auStack_250 [8];
  undefined *local_248;
  undefined4 local_240;
  undefined4 local_23c;
  code *local_238;
  undefined *local_230;
  cfstringStruct *local_228;
  cfstringStruct *local_220;
  undefined1 auStack_218 [14];
  undefined1 local_20a;
  byte local_209;
  cfstringStruct *local_208;
  cfstringStruct *local_200;
  byte local_1f1;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1e8;
  byte local_1d9;
  cfstringStruct *local_1d8;
  byte local_1c9;
  cfstringStruct *local_1c8;
  cfstringStruct *local_1c0 [3];
  undefined1 auStack_1a8 [116];
  undefined4 local_134;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined *local_e8;
  char *local_e0;
  char *local_d8;
  long local_d0;
  char *local_c8;
  SEL local_c0;
  cfstringStruct *local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (char *)0x0;
  local_c0 = param_2;
  local_b8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  pcVar1 = "MMMultiMenuTableViewCell";
  _objc_getClass();
  pcVar2 = local_c8;
  local_d8 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_dequeueReusableCellWithIdentifie_026a2808,DAT_028c67a8);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    if (local_d8 == (char *)0x0) {
      pcVar2 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_e0;
      local_e0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    else {
      pcVar2 = local_d8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar1 = local_e0;
      local_e0 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAccessoryType__026a3220);
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setSelectionStyle__0269e5f8,0);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    pcVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_textLabel_0269fd00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_detailTextLabel_0269fd08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_imageView_0269f230);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setAccessoryType__026a3220,0);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_e8 = (undefined *)0x0;
  _memset(auStack_130,0,0x40);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  local_3f8 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10);
  if (local_3f8 != (char *)0x0) {
    lVar7 = *local_120;
    local_400 = (char *)0x0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,pcVar2);
        }
        uVar8 = *(ulong *)(local_128 + (long)local_400 * 8);
        puVar3 = PTR_WCRMomentsDraftCardView_026cf460;
        local_f0 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRMomentsDraftCardView_026cf460,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar8,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar8 & 1) != 0) {
          _objc_storeStrong(&local_e8,local_f0);
          local_134 = 2;
          goto LAB_01befda4;
        }
        local_400 = local_400 + 1;
      } while (local_400 < local_3f8);
      local_3f8 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,0x10)
      ;
      local_400 = (char *)0x0;
    } while (local_3f8 != (char *)0x0);
  }
  local_134 = 0;
LAB_01befda4:
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_e8 == (undefined *)0x0) {
    puVar4 = PTR_WCRMomentsDraftCardView_026cf460;
    _objc_alloc();
    pcVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_initWithFrame__026ca6e8);
    puVar3 = local_e8;
    local_e8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setAutoresizingMask__026ca878,0x12);
    pcVar1 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar1);
  }
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(in_d0,in_d1,in_d2,in_d3,local_e8,PTR_s_setFrame__026ca960);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_contentView_026ca5a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_wcr_applySwipeActionsToCell_inde_026c0ae0,local_e0,local_d0);
  _objc_initWeak(auStack_1a8,local_b8);
  pcVar5 = local_b8;
  lVar7 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_section_0269e988);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_wcr_isScheduledSection__026c0ac8,lVar7);
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_row_0269e210);
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_objectAtIndexedSubscript__0269cc78,lVar7);
    _objc_retainAutoreleasedReturnValue();
    local_2b0 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    lVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_row_0269e210);
    local_2b8 = lVar7;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_wcr_configureCard_withDraft__026c0b28,local_e8,local_2b0);
    local_2e8 = PTR___NSConcreteStackBlock_02578660;
    local_2e0 = 0xc2000000;
    local_2dc = 0;
    local_2d8 = FUN_01bf0d10;
    local_2d0 = &DAT_025799c0;
    _objc_copyWeak(auStack_2c8,auStack_1a8);
    local_2c0 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setPrimaryHandler__026c0b08,&local_2e8);
    local_320 = PTR___NSConcreteStackBlock_02578660;
    local_318 = 0xc2000000;
    local_314 = 0;
    local_310 = FUN_01bf0d74;
    local_308 = &DAT_0257c708;
    _objc_copyWeak(auStack_2f8,auStack_1a8);
    pcVar5 = local_2b0;
    (*(code *)PTR__objc_retain_02578638)();
    local_300 = pcVar5;
    local_2f0 = local_2b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setSecondaryHandler__026c0b18,&local_320);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setDestructiveHandler__026c0b20,0);
    pcVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    local_134 = 1;
    _objc_storeStrong(&local_300);
    _objc_destroyWeak(auStack_2f8);
    _objc_destroyWeak(auStack_2c8);
    _objc_storeStrong(&local_2b0,0);
  }
  else {
    local_1c9 = 0;
    local_1d9 = 0;
    lVar7 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_row_0269e210);
    pcVar5 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_scheduledTasks_026af460);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (lVar7 < (long)pcVar6) {
      local_4b8 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_scheduledTasks_026af460);
      _objc_retainAutoreleasedReturnValue();
      local_1c9 = 1;
      lVar7 = local_d0;
      local_1c8 = local_4b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_row_0269e210);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_4b8,PTR_s_objectAtIndexedSubscript__0269cc78,lVar7);
      _objc_retainAutoreleasedReturnValue();
      local_1d9 = 1;
      local_1d8 = local_4b8;
    }
    else {
      local_4b8 = (cfstringStruct *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1c0[0] = local_4b8;
    if ((local_1d9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1d8);
    }
    if ((local_1c9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1c8);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b8,PTR_s_wcr_configureCard_withTask__026c0b00,local_e8,local_1c0[0]);
    local_1f1 = 0;
    pcVar5 = local_1c0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar6 & 1) == 0) {
      local_4f0 = &::cf___;
    }
    else {
      local_4f0 = local_1c0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
      _objc_retainAutoreleasedReturnValue();
      local_1f1 = 1;
      local_1f0 = local_4f0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1e8 = local_4f0;
    if ((local_1f1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_1f0);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    local_209 = 0;
    pcVar5 = local_1c0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar6 & 1) == 0) {
      local_528 = &::cf___;
    }
    else {
      local_528 = local_1c0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1c0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
      _objc_retainAutoreleasedReturnValue();
      local_209 = 1;
      local_208 = local_528;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_200 = local_528;
    if ((local_209 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_208);
    }
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_1c0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0[0],PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = local_200;
    local_20a = SUB81(pcVar6,0);
    local_248 = PTR___NSConcreteStackBlock_02578660;
    local_240 = 0xc2000000;
    local_23c = 0;
    local_238 = FUN_01bf0b80;
    local_230 = &DAT_0257c978;
    (*(code *)PTR__objc_retain_02578638)();
    pcVar6 = local_1e8;
    local_228 = pcVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_220 = pcVar6;
    _objc_copyWeak(auStack_218,auStack_1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setPrimaryHandler__026c0b08,&local_248);
    local_278 = PTR___NSConcreteStackBlock_02578660;
    local_270 = 0xc2000000;
    local_26c = 0;
    local_268 = FUN_01bf0c44;
    local_260 = &DAT_02579c60;
    _objc_copyWeak(auStack_250,auStack_1a8);
    pcVar5 = local_1c0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_258 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setSecondaryHandler__026c0b18,&local_278);
    pcVar5 = local_1e8;
    local_2a8 = PTR___NSConcreteStackBlock_02578660;
    local_2a0 = 0xc2000000;
    local_29c = 0;
    local_298 = FUN_01bf0ca8;
    local_290 = &DAT_02579c60;
    (*(code *)PTR__objc_retain_02578638)();
    local_288 = pcVar5;
    _objc_copyWeak(auStack_280,auStack_1a8);
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_setDestructiveHandler__026c0b20,&local_2a8)
    ;
    pcVar1 = local_e0;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = pcVar1;
    local_134 = 1;
    _objc_destroyWeak(auStack_280);
    _objc_storeStrong(&local_288);
    _objc_storeStrong(&local_258,0);
    _objc_destroyWeak(auStack_250);
    _objc_destroyWeak(auStack_218);
    _objc_storeStrong(&local_220,0);
    _objc_storeStrong(&local_228,0);
    _objc_storeStrong(&local_200,0);
    _objc_storeStrong(&local_1e8,0);
    _objc_storeStrong(local_1c0,0);
  }
  _objc_destroyWeak(auStack_1a8);
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_b0;
}

