// makeUserCell:cellInfo: @ 01c503c4

/* WARNING: Removing unreachable block (ram,0x01c50b70) */
/* WARNING: Removing unreachable block (ram,0x01c50db0) */
/* Function Stack Size: 0x20 bytes */

void WCRefineNameplateSpecialUsersViewController::makeUserCell_cellInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  ulong uVar33;
  ulong uVar34;
  undefined *puVar35;
  undefined *puVar36;
  ulong uVar37;
  ulong uVar38;
  undefined *puVar39;
  undefined *puVar40;
  long lVar41;
  ulong uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  ulong local_230;
  ulong local_228;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  byte local_191;
  ID local_190;
  undefined1 auStack_188 [8];
  long local_180;
  long *local_178;
  ulong local_148;
  ulong local_140;
  ulong local_138;
  undefined4 local_12c;
  ulong local_128;
  ulong local_120;
  SEL local_118;
  ID local_110;
  ID local_108;
  ID local_100;
  ID local_f8;
  ID local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  uVar44 = DAT_02323c78;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_120 = 0;
  local_118 = param_2;
  local_110 = param_1;
  _objc_storeStrong(&local_120,param_3);
  local_128 = 0;
  _objc_storeStrong(&local_128,param_4);
  uVar42 = local_120;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar42,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar42 & 1) == 0) {
    local_12c = 1;
  }
  else {
    local_138 = 0;
    uVar42 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_128,PTR_s_respondsToSelector__026ca818,PTR_s_getUserInfoValueForKey__026a83f8);
    if ((uVar42 & 1) != 0) {
      uVar42 = local_128;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_128,PTR_s_getUserInfoValueForKey__026a83f8,&cf_username);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_140 = uVar42;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar42,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar42 & 1) != 0) {
        _objc_storeStrong(&local_138,local_140);
      }
      _objc_storeStrong(&local_140,0);
    }
    uVar42 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (uVar42 == 0) {
      uVar2 = local_128;
      _objc_getAssociatedObject(local_128,"WCRNameplateUsername");
      _objc_retainAutoreleasedReturnValue();
      uVar42 = local_138;
      local_138 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar42);
    }
    uVar42 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (uVar42 == 0) {
      local_12c = 1;
    }
    else {
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_textLabel_0269fd00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_detailTextLabel_0269fd08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setAccessoryType__026a3220,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_setSelectionStyle__0269e5f8,3);
      _memset(auStack_188,0,0x40);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar42;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar42);
      local_228 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,0x10);
      if (local_228 != 0) {
        lVar41 = *local_178;
        local_230 = 0;
        do {
          do {
            if (*local_178 - lVar41 != 0) {
              _objc_enumerationMutation(*local_178 - lVar41,uVar3);
            }
            uVar42 = *(ulong *)(local_180 + local_230 * 8);
            local_148 = uVar42;
            (*(code *)PTR__objc_msgSend_02578628)(uVar42,PTR_s_tag_026cab98);
            if (((uVar42 == 0x24f70c) ||
                (uVar42 = local_148,
                (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_tag_026cab98),
                uVar42 == 0x24f70d)) ||
               (uVar2 = local_148,
               (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_tag_026cab98),
               uVar42 = local_148, uVar2 == 0x24f70e)) {
LAB_01c508cc:
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_removeFromSuperview_026ca800);
            }
            else {
              puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UISwitch_026cea90,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar42,PTR_s_isKindOfClass__0269cd68,puVar1);
              if ((uVar42 & 1) != 0) goto LAB_01c508cc;
            }
            local_230 = local_230 + 1;
          } while (local_230 < local_228);
          local_228 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_188,auStack_a8,
                     0x10);
          local_230 = 0;
        } while (local_228 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar3);
      IVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4044000000000000,local_110,PTR_s_headViewForUsername_size__026c1cd8,local_138);
      _objc_retainAutoreleasedReturnValue();
      local_190 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setTag__026caa80,DAT_0233a370);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      puVar1 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      local_191 = (byte)puVar5;
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_1a0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_0233a378);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineNameplateHelper_026ce5f8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineNameplateHelper_026ce5f8,PTR_s_displayNameForUsername__026ac938,
                 local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      uVar43 = uVar44;
      if ((local_191 & 1) == 0) {
        uVar43 = 0x3ff0000000000000;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar43,local_1a0,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc_init();
      local_1a8 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_0233a380);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_110,PTR_s_statusTextForUsername__026b6838,local_138);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      if ((local_191 & 1) == 0) {
        uVar44 = 0x3ff0000000000000;
      }
      (*(code *)PTR__objc_msgSend_02578628)(uVar44,local_1a8,PTR_s_setAlpha__026ca860);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1a8,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      puVar1 = PTR__OBJC_CLASS___UISwitch_026cea90;
      _objc_alloc_init();
      puVar5 = PTR_WCRefineConfig_026cdf58;
      local_1b0 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_setOn__0269dc80,(uint)puVar1 ^ 1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_setAssociatedObject(local_1b0,DAT_028c6880,local_138,3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_110,
                 PTR_s_togglePaused__026c1ce0,0x1000);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar42);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      IVar4 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      uVar42 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar42;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_190;
      local_108 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      IVar10 = local_190;
      local_100 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar12 = local_190;
      local_f8 = IVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      IVar13 = IVar12;
      (*(code *)PTR__objc_msgSend_02578628)(0x4044000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_1a0;
      local_f0 = IVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      IVar14 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,puVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = local_1a0;
      local_e8 = puVar15;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = uVar17;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,puVar16,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar20 = local_1a0;
      local_e0 = puVar19;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)(puVar20,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar23 = local_1a8;
      local_d8 = puVar22;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar24 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar23;
      (*(code *)PTR__objc_msgSend_02578628)(puVar23,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_1a8;
      local_d0 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = local_1a0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a0,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = puVar26;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4010000000000000,puVar26,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = local_1a8;
      local_c8 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar30 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar29;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc020000000000000,puVar29,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = local_1b0;
      local_c0 = puVar31;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      uVar33 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar34 = uVar33;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar35 = puVar32;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc028000000000000,puVar32,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar36 = local_1b0;
      local_b8 = puVar35;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      uVar37 = local_120;
      (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar38 = uVar37;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar39 = puVar36;
      (*(code *)PTR__objc_msgSend_02578628)(puVar36,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar40 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar39;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                 &local_108,0xc);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar40);
      (*(code *)PTR__objc_release_02578630)(puVar39);
      (*(code *)PTR__objc_release_02578630)(uVar38);
      (*(code *)PTR__objc_release_02578630)(uVar37);
      (*(code *)PTR__objc_release_02578630)(puVar36);
      (*(code *)PTR__objc_release_02578630)(puVar35);
      (*(code *)PTR__objc_release_02578630)(uVar34);
      (*(code *)PTR__objc_release_02578630)(uVar33);
      (*(code *)PTR__objc_release_02578630)(puVar32);
      (*(code *)PTR__objc_release_02578630)(puVar31);
      (*(code *)PTR__objc_release_02578630)(puVar30);
      (*(code *)PTR__objc_release_02578630)(puVar29);
      (*(code *)PTR__objc_release_02578630)(puVar28);
      (*(code *)PTR__objc_release_02578630)(puVar27);
      (*(code *)PTR__objc_release_02578630)(puVar26);
      (*(code *)PTR__objc_release_02578630)(puVar25);
      (*(code *)PTR__objc_release_02578630)(puVar24);
      (*(code *)PTR__objc_release_02578630)(puVar23);
      (*(code *)PTR__objc_release_02578630)(puVar22);
      (*(code *)PTR__objc_release_02578630)(puVar21);
      (*(code *)PTR__objc_release_02578630)(puVar20);
      (*(code *)PTR__objc_release_02578630)(puVar19);
      (*(code *)PTR__objc_release_02578630)(uVar18);
      (*(code *)PTR__objc_release_02578630)(uVar17);
      (*(code *)PTR__objc_release_02578630)(puVar16);
      (*(code *)PTR__objc_release_02578630)(puVar15);
      (*(code *)PTR__objc_release_02578630)(IVar14);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar13);
      (*(code *)PTR__objc_release_02578630)(IVar12);
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar10);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(uVar42);
      (*(code *)PTR__objc_release_02578630)(IVar4);
      _objc_storeStrong(&local_1b0);
      _objc_storeStrong(&local_1a8,0);
      _objc_storeStrong(&local_1a0,0);
      _objc_storeStrong(&local_190,0);
      local_12c = 0;
    }
    _objc_storeStrong(&local_138,0);
  }
  _objc_storeStrong(&local_128);
  _objc_storeStrong(&local_120,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

