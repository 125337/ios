// makeSpecialUserCell:cellInfo: @ 01849168

/* WARNING: Removing unreachable block (ram,0x01849888) */
/* WARNING: Removing unreachable block (ram,0x01849ac0) */
/* Function Stack Size: 0x20 bytes */

void WCRefineAvatarFrameSpecialUsersViewController::makeSpecialUserCell_cellInfo_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  ID IVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  undefined *puVar14;
  ID IVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  ulong uVar29;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  ulong local_208;
  ulong local_200;
  undefined *local_190;
  undefined *local_188;
  ID local_180;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  long local_138;
  ulong local_130;
  ulong local_128;
  undefined4 local_11c;
  ulong local_118;
  ulong local_110;
  SEL local_108;
  ID local_100;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_110 = 0;
  local_108 = param_2;
  local_100 = param_1;
  _objc_storeStrong(&local_110,param_3);
  local_118 = 0;
  _objc_storeStrong(&local_118,param_4);
  uVar2 = local_110;
  puVar1 = PTR__OBJC_CLASS___UITableViewCell_026ce200;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITableViewCell_026ce200,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11c = 1;
  }
  else {
    local_128 = 0;
    uVar2 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_getUserInfoValueForKey__026a83f8);
    if ((uVar2 & 1) != 0) {
      uVar2 = local_118;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_118,PTR_s_getUserInfoValueForKey__026a83f8,&cf_username);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      local_130 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar2 & 1) != 0) {
        _objc_storeStrong(&local_128,local_130);
      }
      _objc_storeStrong(&local_130,0);
    }
    uVar2 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      uVar3 = local_118;
      _objc_getAssociatedObject(local_118,"WCRAvatarFrameSpecialUsername");
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_128;
      local_128 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    uVar2 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      local_11c = 1;
    }
    else {
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_textLabel_0269fd00);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_detailTextLabel_0269fd08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_imageView_0269f230);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setAccessoryType__026a3220,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_setSelectionStyle__0269e5f8,3);
      _memset(auStack_178,0,0x40);
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      local_200 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
      if (local_200 != 0) {
        lVar36 = *local_168;
        local_208 = 0;
        do {
          do {
            if (*local_168 - lVar36 != 0) {
              _objc_enumerationMutation(*local_168 - lVar36,uVar4);
            }
            lVar37 = *(long *)(local_170 + local_208 * 8);
            local_138 = lVar37;
            (*(code *)PTR__objc_msgSend_02578628)(lVar37,PTR_s_tag_026cab98);
            if (((lVar37 == 0x16761) ||
                (lVar37 = local_138,
                (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_tag_026cab98),
                lVar37 == 0x16764)) ||
               (lVar37 = local_138,
               (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_tag_026cab98),
               lVar37 == 0x16765)) {
              (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_removeFromSuperview_026ca800);
            }
            local_208 = local_208 + 1;
          } while (local_208 < local_200);
          local_200 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,
                     0x10);
          local_208 = 0;
        } while (local_200 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      IVar5 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_avatarFramePreviewForUsername__026b6800,local_128);
      _objc_retainAutoreleasedReturnValue();
      local_180 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0)
      ;
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
      local_188 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02339d40);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_188,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4030000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar5 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_displayNameForUsername__026ac938,local_128);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)PTR__CGRectZero_025782f0,
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 8),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10),
                 *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18));
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setTag__026caa80,DAT_02339d48);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_190,PTR_s_setTranslatesAutoresizingMaskInt_0269cde8,0);
      puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x402a000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,
                 PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_secondaryLabelColor_026a1020);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setTextColor__026caa98);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      IVar5 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_statusTextForUsername__026b6838,local_128);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_setText__026caa88);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_026ce030;
      IVar5 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar6 = IVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,IVar5,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = local_180;
      local_f8 = IVar6;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_centerYAnchor_0269ce10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar9 = IVar7;
      (*(code *)PTR__objc_msgSend_02578628)(IVar7,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      IVar10 = local_180;
      local_f0 = IVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_widthAnchor_0269ce40);
      _objc_retainAutoreleasedReturnValue();
      IVar11 = IVar10;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar12 = local_180;
      local_e8 = IVar11;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_heightAnchor_0269ce50);
      _objc_retainAutoreleasedReturnValue();
      IVar13 = IVar12;
      (*(code *)PTR__objc_msgSend_02578628)(0x404d000000000000);
      _objc_retainAutoreleasedReturnValue();
      puVar14 = local_188;
      local_e0 = IVar13;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      IVar15 = local_180;
      (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      puVar16 = puVar14;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4024000000000000,puVar14,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar17 = local_188;
      local_d8 = puVar16;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      uVar18 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar19 = uVar18;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar20 = puVar17;
      (*(code *)PTR__objc_msgSend_02578628)(puVar17,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar21 = local_188;
      local_d0 = puVar20;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      uVar22 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar23 = uVar22;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar24 = puVar21;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4032000000000000,puVar21,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar25 = local_190;
      local_c8 = puVar24;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar26 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_leadingAnchor_0269ce20);
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar25;
      (*(code *)PTR__objc_msgSend_02578628)(puVar25,PTR_s_constraintEqualToAnchor__0269ce08);
      _objc_retainAutoreleasedReturnValue();
      puVar28 = local_190;
      local_c0 = puVar27;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_trailingAnchor_0269cf88);
      _objc_retainAutoreleasedReturnValue();
      uVar29 = local_110;
      (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      uVar30 = uVar29;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = puVar28;
      (*(code *)PTR__objc_msgSend_02578628)
                (0xc03c000000000000,puVar28,PTR_s_constraintLessThanOrEqualToAncho_026ab8f0);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = local_190;
      local_b8 = puVar31;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_topAnchor_0269ce30);
      _objc_retainAutoreleasedReturnValue();
      puVar33 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_bottomAnchor_0269ce38);
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar32;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4010000000000000,puVar32,PTR_s_constraintEqualToAnchor_constant_0269ce18);
      _objc_retainAutoreleasedReturnValue();
      puVar35 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar34;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f8
                 ,10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_activateConstraints__0269ce58);
      (*(code *)PTR__objc_release_02578630)(puVar35);
      (*(code *)PTR__objc_release_02578630)(puVar34);
      (*(code *)PTR__objc_release_02578630)(puVar33);
      (*(code *)PTR__objc_release_02578630)(puVar32);
      (*(code *)PTR__objc_release_02578630)(puVar31);
      (*(code *)PTR__objc_release_02578630)(uVar30);
      (*(code *)PTR__objc_release_02578630)(uVar29);
      (*(code *)PTR__objc_release_02578630)(puVar28);
      (*(code *)PTR__objc_release_02578630)(puVar27);
      (*(code *)PTR__objc_release_02578630)(puVar26);
      (*(code *)PTR__objc_release_02578630)(puVar25);
      (*(code *)PTR__objc_release_02578630)(puVar24);
      (*(code *)PTR__objc_release_02578630)(uVar23);
      (*(code *)PTR__objc_release_02578630)(uVar22);
      (*(code *)PTR__objc_release_02578630)(puVar21);
      (*(code *)PTR__objc_release_02578630)(puVar20);
      (*(code *)PTR__objc_release_02578630)(uVar19);
      (*(code *)PTR__objc_release_02578630)(uVar18);
      (*(code *)PTR__objc_release_02578630)(puVar17);
      (*(code *)PTR__objc_release_02578630)(puVar16);
      (*(code *)PTR__objc_release_02578630)(IVar15);
      (*(code *)PTR__objc_release_02578630)(puVar14);
      (*(code *)PTR__objc_release_02578630)(IVar13);
      (*(code *)PTR__objc_release_02578630)(IVar12);
      (*(code *)PTR__objc_release_02578630)(IVar11);
      (*(code *)PTR__objc_release_02578630)(IVar10);
      (*(code *)PTR__objc_release_02578630)(IVar9);
      (*(code *)PTR__objc_release_02578630)(uVar8);
      (*(code *)PTR__objc_release_02578630)(uVar4);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      _objc_storeStrong(&local_190);
      _objc_storeStrong(&local_188,0);
      _objc_storeStrong(&local_180,0);
      local_11c = 0;
    }
    _objc_storeStrong(&local_128,0);
  }
  _objc_storeStrong(&local_118);
  _objc_storeStrong(&local_110,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

