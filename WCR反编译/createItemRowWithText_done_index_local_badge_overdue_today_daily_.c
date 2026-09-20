// createItemRowWithText:done:index:local:badge:overdue:today:daily: @ 01e82880

/* Function Stack Size: 0x3c bytes */

ID WCRefineToDoCardView::createItemRowWithText_done_index_local_badge_overdue_today_daily_
             (ID param_1,SEL param_2,ID param_3,bool param_4,unsigned_long_long param_5,bool param_6
             ,ID param_7,bool param_8,bool param_9,bool param_10)

{
  cfstringStruct *pcVar1;
  double dVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  double in_d0;
  undefined8 uVar28;
  double local_428;
  double local_420;
  double local_408;
  double local_400;
  undefined8 local_3e8;
  double local_390;
  cfstringStruct *local_368;
  undefined *local_308;
  undefined8 local_2e8;
  undefined1 *local_2c0;
  undefined *local_2b8;
  undefined1 *local_298;
  undefined1 *local_290;
  double local_280;
  undefined *local_1f0;
  double local_1e8;
  double local_1e0;
  undefined8 local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  byte local_1b9;
  undefined *local_1b8;
  byte local_1a9;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  byte local_179;
  undefined1 *local_178;
  byte local_169;
  undefined1 *local_168;
  byte local_159;
  undefined *local_158;
  byte local_149;
  undefined *local_148;
  undefined *local_140;
  byte local_131;
  undefined1 *local_130;
  byte local_121;
  undefined1 *local_120;
  byte local_111;
  undefined1 *local_110;
  byte local_101;
  undefined1 *local_100;
  undefined1 *local_f8;
  byte local_e9;
  undefined1 *local_e8;
  double local_e0;
  byte local_d1;
  undefined1 *local_d0;
  undefined *local_c8;
  byte local_bb;
  undefined1 local_ba;
  byte local_b9;
  long local_b8;
  byte local_a9;
  unsigned_long_long local_a8;
  byte local_99;
  cfstringStruct *local_98;
  SEL local_90;
  ID local_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_98 = (cfstringStruct *)0x0;
  local_90 = param_2;
  local_88 = param_1;
  _objc_storeStrong(&local_98,param_3);
  local_99 = (byte)param_4;
  local_a9 = (byte)param_6;
  local_b8 = 0;
  local_a8 = param_5;
  _objc_storeStrong(&local_b8,param_7);
  local_b9 = (byte)param_8;
  local_ba = (undefined1)param_9;
  local_bb = param_9._1_1_;
  puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc_init();
  local_c8 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar4 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  IVar5 = local_88;
  local_d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_isDarkModeForBackgroundMedia_026c6fd0);
  local_d1 = (byte)IVar5;
  local_e9 = 0;
  if ((local_a9 & 1) == 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) goto LAB_01e82a10;
    local_280 = 14.0;
  }
  else {
LAB_01e82a10:
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardLocalFontSize_026c6e00);
    local_280 = in_d0;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  local_e0 = local_280;
  local_101 = 0;
  local_111 = 0;
  local_121 = 0;
  local_131 = 0;
  if ((local_a9 & 1) == 0) {
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_101 = 1;
    local_100 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (puVar4 != (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
      local_298 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      local_131 = 1;
      local_130 = local_298;
      goto LAB_01e82be8;
    }
  }
  local_290 = local_d0;
  if ((local_d1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardLocalTextColorLight_026c6fe0);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_290;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardLocalTextColorDark_026c6fd8);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 1;
    local_110 = local_290;
  }
  local_298 = local_290;
LAB_01e82be8:
  (*(code *)PTR__objc_retain_02578638)();
  local_f8 = local_298;
  if ((local_131 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_130);
  }
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  if ((local_111 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_110);
  }
  if ((local_101 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_100);
  }
  puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_140 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletSize_026c6e08);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletEnabled_026c71a8);
  if (((ulong)puVar6 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,&::cf___);
  }
  else {
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletStyle_026c71b0);
    if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_149 = 0;
      local_159 = 0;
      local_2b8 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if ((local_99 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu_);
        _objc_retainAutoreleasedReturnValue();
        local_159 = 1;
        local_158 = local_2b8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
        _objc_retainAutoreleasedReturnValue();
        local_149 = 1;
        local_148 = local_2b8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,local_2b8);
      if ((local_159 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_158);
      }
      if ((local_149 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_148);
      }
    }
    else {
      puVar6 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletStyle_026c71b0);
      if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
        local_169 = 0;
        local_179 = 0;
        local_2c0 = local_d0;
        if ((local_99 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletCustomPending_026c71c0)
          ;
          _objc_retainAutoreleasedReturnValue();
          local_179 = 1;
          local_178 = local_2c0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletCustomDone_026c71b8);
          _objc_retainAutoreleasedReturnValue();
          local_169 = 1;
          local_168 = local_2c0;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,local_2c0);
        if ((local_179 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_178);
        }
        if ((local_169 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_168);
        }
      }
      else {
        puVar6 = local_d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletStyle_026c71b0);
        if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
          pcVar1 = &::cf__;
          if ((local_99 & 1) == 0) {
            pcVar1 = &::cf__;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,pcVar1);
        }
        else {
          pcVar1 = &cf__;
          if ((local_99 & 1) == 0) {
            pcVar1 = &cf__;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setText__026caa88,pcVar1);
        }
      }
    }
  }
  if ((local_99 & 1) == 0) {
    if ((local_b9 & 1) == 0) {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
  }
  else {
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  _objc_alloc_init();
  local_188 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  puVar4 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setFont__026ca958);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setNumberOfLines__026ca9d8,0);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardContentAlignment_026c71c8);
  if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    local_2e8 = 1;
  }
  else {
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardContentAlignment_026c71c8);
    local_2e8 = 2;
    if (puVar6 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      local_2e8 = 0;
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setTextAlignment__026caa90,local_2e8);
  puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_026ce3e8;
  _objc_alloc_init();
  puVar7 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_190 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = local_b8;
  local_198 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
  if (lVar8 != 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    local_1a0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,
               *(undefined8 *)PTR__NSFontAttributeName_02578068);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    if ((local_99 & 1) == 0) {
      local_1a9 = 0;
      local_1b9 = 0;
      local_308 = PTR__OBJC_CLASS___UIColor_026cdf78;
      if ((local_b9 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGrayColor_026a9fa8);
        _objc_retainAutoreleasedReturnValue();
        local_1b9 = 1;
        local_1b8 = local_308;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemRedColor_0269ee10);
        _objc_retainAutoreleasedReturnValue();
        local_1a9 = 1;
        local_1a8 = local_308;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_308,
                 *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
      if ((local_1b9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1b8);
      }
      if ((local_1a9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1a8);
      }
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
                 *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_02578098);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
                 *(undefined8 *)PTR__NSStrikethroughColorAttributeName_02578090);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
                 *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
    }
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    puVar7 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar4,PTR_s_initWithString_attributes__026a02b0,puVar7,local_1a0);
    local_1c8 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_190,PTR_s_appendAttributedString__026a6388,local_1c8);
    _objc_storeStrong(&local_1c8);
    _objc_storeStrong(&local_1a0,0);
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  local_1d0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_e0,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar7,
             *(undefined8 *)PTR__NSFontAttributeName_02578068);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  if ((local_99 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_f8,
               *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,
               *(undefined8 *)PTR__NSStrikethroughStyleAttributeName_02578098);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
               *(undefined8 *)PTR__NSStrikethroughColorAttributeName_02578090);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1d0,PTR_s_setObject_forKeyedSubscript__0269d248,local_198,
               *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070);
  }
  puVar4 = local_190;
  puVar7 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
  _objc_alloc();
  if (local_98 == (cfstringStruct *)0x0) {
    local_368 = &::cf___;
  }
  else {
    local_368 = local_98;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar7,PTR_s_initWithString_attributes__026a02b0,local_368,local_1d0);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendAttributedString__026a6388);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  puVar4 = local_190;
  if (((local_bb & 1) != 0) && ((local_99 & 1) == 0)) {
    puVar7 = PTR__OBJC_CLASS___NSAttributedString_026ce0d8;
    _objc_alloc();
    local_48 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    local_1d8 = 0x4024000000000000;
    local_1e0 = local_e0 - 1.0;
    local_390 = local_1e0;
    if (local_1e0 <= 10.0) {
      local_390 = 10.0;
    }
    local_1e8 = local_390;
    puVar9 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_390,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    local_40 = *(undefined8 *)PTR__NSForegroundColorAttributeName_02578070;
    puVar10 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_38 = puVar9;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemGreenColor_026cab70);
    _objc_retainAutoreleasedReturnValue();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_38,&local_48,2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_initWithString_attributes__026a02b0,&::cf_space_s_);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendAttributedString__026a6388);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar11);
    (*(code *)PTR__objc_release_02578630)(puVar10);
    (*(code *)PTR__objc_release_02578630)(puVar9);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setAttributedText__026a0000,local_190);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setLineBreakMode__026ca988);
  (*(code *)PTR__objc_msgSend_02578628)
            (0x437a0000,local_188,PTR_s_setContentCompressionResistanceP_026c05c8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setContentCompressionResistanceP_026c05c8);
  local_3e8 = 0x447a0000;
  (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setContentHuggingPriority_forAxi_026c05c0,1)
  ;
  _objc_setAssociatedObject(local_c8,&DAT_028e4810,local_188,0);
  puVar4 = PTR__OBJC_CLASS___UIStackView_026ce068;
  _objc_alloc_init();
  local_1f0 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setAxis__0269cf78,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setAlignment__026ca858,2);
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_setDistribution__026aa640,0);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletEnabled_026c71a8);
  if (((ulong)puVar6 & 1) == 0) {
    local_3e8 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletTextSpacing_026c71d0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_3e8,local_1f0,PTR_s_setSpacing__0269cf80);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardContentAlignment_026c71c8);
  bVar3 = puVar6 != (undefined1 *)((long)&MACH_HEADER.magic + 2);
  if (bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addArrangedSubview__026b9d98,local_140);
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addArrangedSubview__026b9d98,local_188);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addArrangedSubview__026b9d98,local_188);
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_addArrangedSubview__026b9d98,local_140);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_addSubview__026ca4c0,local_1f0);
  dVar2 = local_e0;
  local_400 = local_e0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletSize_026c6e08);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
  if (local_400 <= dVar2) {
    local_400 = dVar2;
  }
  local_408 = local_400 + 8.0;
  if (local_408 <= 22.0) {
    local_408 = 22.0;
  }
  puVar7 = local_140;
  (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_widthAnchor_0269ce40);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletEnabled_026c71a8);
  if (((ulong)puVar6 & 1) == 0) {
    local_428 = 0.0;
  }
  else {
    local_420 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletSize_026c6e08);
    local_420 = local_420 + 2.0;
    if (local_420 <= 0.0) {
      local_420 = 0.0;
    }
    local_428 = local_420;
  }
  puVar9 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)(local_428,puVar7,PTR_s_constraintEqualToConstant__0269ce48);
  _objc_retainAutoreleasedReturnValue();
  puVar10 = local_1f0;
  local_80 = puVar9;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_topAnchor_0269ce30);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4010000000000000,puVar10,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar13 = local_1f0;
  local_78 = puVar12;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar14 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bottomAnchor_0269ce38);
  _objc_retainAutoreleasedReturnValue();
  puVar15 = puVar13;
  (*(code *)PTR__objc_msgSend_02578628)
            (0xc010000000000000,puVar13,PTR_s_constraintEqualToAnchor_constant_0269ce18);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = local_1f0;
  local_70 = puVar15;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_leadingAnchor_0269ce20);
  _objc_retainAutoreleasedReturnValue();
  puVar18 = puVar16;
  (*(code *)PTR__objc_msgSend_02578628)(puVar16,PTR_s_constraintGreaterThanOrEqualToAn_0269ce28);
  _objc_retainAutoreleasedReturnValue();
  puVar19 = local_1f0;
  local_68 = puVar18;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_trailingAnchor_0269cf88);
  _objc_retainAutoreleasedReturnValue();
  puVar21 = puVar19;
  (*(code *)PTR__objc_msgSend_02578628)(0,puVar19,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
  _objc_retainAutoreleasedReturnValue();
  puVar22 = local_1f0;
  local_60 = puVar21;
  (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_widthAnchor_0269ce40);
  _objc_retainAutoreleasedReturnValue();
  puVar23 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_widthAnchor_0269ce40);
  _objc_retainAutoreleasedReturnValue();
  puVar24 = puVar22;
  (*(code *)PTR__objc_msgSend_02578628)(puVar22,PTR_s_constraintLessThanOrEqualToAncho_026c71d8);
  _objc_retainAutoreleasedReturnValue();
  puVar25 = local_c8;
  local_58 = puVar24;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_heightAnchor_0269ce50);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  (*(code *)PTR__objc_msgSend_02578628)(local_408);
  _objc_retainAutoreleasedReturnValue();
  puVar27 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_50 = puVar26;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_80,7);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_activateConstraints__0269ce58);
  (*(code *)PTR__objc_release_02578630)(puVar27);
  (*(code *)PTR__objc_release_02578630)(puVar26);
  (*(code *)PTR__objc_release_02578630)(puVar25);
  (*(code *)PTR__objc_release_02578630)(puVar24);
  (*(code *)PTR__objc_release_02578630)(puVar23);
  (*(code *)PTR__objc_release_02578630)(puVar22);
  (*(code *)PTR__objc_release_02578630)(puVar21);
  (*(code *)PTR__objc_release_02578630)(puVar20);
  (*(code *)PTR__objc_release_02578630)(puVar19);
  (*(code *)PTR__objc_release_02578630)(puVar18);
  (*(code *)PTR__objc_release_02578630)(puVar17);
  (*(code *)PTR__objc_release_02578630)(puVar16);
  (*(code *)PTR__objc_release_02578630)(puVar15);
  (*(code *)PTR__objc_release_02578630)(puVar14);
  (*(code *)PTR__objc_release_02578630)(puVar13);
  (*(code *)PTR__objc_release_02578630)(puVar12);
  (*(code *)PTR__objc_release_02578630)(puVar11);
  (*(code *)PTR__objc_release_02578630)(puVar10);
  (*(code *)PTR__objc_release_02578630)(puVar9);
  (*(code *)PTR__objc_release_02578630)(puVar7);
  puVar6 = local_d0;
  (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardContentAlignment_026c71c8);
  if (puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    puVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_centerXAnchor_0269ce00);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_constraintEqualToAnchor__0269ce08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else if (bVar3) {
    puVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_leadingAnchor_0269ce20);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletEnabled_026c71a8);
    uVar28 = 0x4008000000000000;
    if (((ulong)puVar6 & 1) == 0) {
      uVar28 = 0;
    }
    puVar9 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar28,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18,puVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    puVar4 = local_1f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_trailingAnchor_0269cf88);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_d0,PTR_s_toDoCardBulletEnabled_026c71a8);
    uVar28 = 0xc008000000000000;
    if (((ulong)puVar6 & 1) == 0) {
      uVar28 = 0;
    }
    puVar9 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar28,puVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18,puVar7);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar9);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  uVar28 = DAT_02324020;
  if ((local_99 & 1) == 0) {
    uVar28 = 0x3ff0000000000000;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar28,local_c8,PTR_s_setAlpha__026ca860);
  puVar4 = local_c8;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_1f0);
  _objc_storeStrong(&local_1d0,0);
  _objc_storeStrong(&local_198,0);
  _objc_storeStrong(&local_190,0);
  _objc_storeStrong(&local_188,0);
  _objc_storeStrong(&local_140,0);
  _objc_storeStrong(&local_f8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_98,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar4;
}

