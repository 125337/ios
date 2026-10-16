

// #####################################
// ##### initTableViewData @ 00117c1c
// #####################################

/* Function Stack Size: 0x10 bytes */

void BubbleSettingViewController::initTableViewData(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_74;
  
  puVar2 = PTR_s_tableViewManager_00489dc8;
  _objc_msgSend();
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_74 = 0x17cf548b;
  do {
    while( true ) {
      while( true ) {
        while (0x4c34f68f < local_74) {
          if (local_74 < 0x7e3928d3) {
            if (local_74 == 0x4c34f690) {
              uVar1 = DAT_004a0898 ^ DAT_004a089c;
              _objc_msgSend(uVar3,PTR_s_clearAllSection_00489dd0);
              _objc_release(uVar3);
              addBubbleMergeSection(param_1,(SEL)PTR_s_addBubbleMergeSection_0048ace8);
              addAssetsLoadSection(param_1,(SEL)PTR_s_addAssetsLoadSection_0048acf0);
              addMsgTimeSection(param_1,(SEL)PTR_s_addMsgTimeSection_0048acf8);
              local_74 = 0x4c34f690;
              if (uVar1 != 0x753c8696) {
                local_74 = 0x7e3928d3;
              }
            }
            else if (local_74 == 0x6d696192) {
              uVar1 = 0;
              if (DAT_004a08a4 != 0) {
                uVar1 = DAT_004a08a0 / DAT_004a08a4;
              }
              local_74 = -0x7d38eff4;
              if (uVar1 == 0xd08620a6) {
                local_74 = 0x7e9437b8;
              }
            }
          }
          else if (local_74 == 0x7e3928d3) {
            local_74 = 0x6d696192;
          }
          else if (local_74 == 0x7e9437b8) {
            addAvatarSection(param_1,(SEL)PTR_s_addAvatarSection_0048ad00);
            _objc_msgSend(param_1,puVar2);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,PTR_s_reloadTableView_00489e08);
            _objc_release(uVar4);
            local_74 = -0x7d38eff4;
          }
        }
        if (local_74 < -0x4371fe1c) break;
        if (local_74 == -0x4371fe1c) {
          _objc_msgSend(uVar3,PTR_s_clearAllSection_00489dd0);
          _objc_release(uVar3);
          addBubbleMergeSection(param_1,(SEL)PTR_s_addBubbleMergeSection_0048ace8);
          addAssetsLoadSection(param_1,(SEL)PTR_s_addAssetsLoadSection_0048acf0);
          addMsgTimeSection(param_1,(SEL)PTR_s_addMsgTimeSection_0048acf8);
          local_74 = 0x4c34f690;
        }
        else if ((local_74 == 0x17cf548b) &&
                (local_74 = -0x4371fe1c,
                0x25192db < ((DAT_004a0890 & DAT_004a0894) * -0x2c133e3d | 0x210db61) * -0x72febaf0)
                ) {
          local_74 = 0x4c34f690;
        }
      }
      if (local_74 != -0x7d38eff4) break;
      uVar1 = DAT_004a08a8 & DAT_004a08ac;
      addAvatarSection(param_1,(SEL)PTR_s_addAvatarSection_0048ad00);
      _objc_msgSend(param_1,puVar2);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,PTR_s_reloadTableView_00489e08);
      _objc_release(uVar4);
      local_74 = -0x784d1303;
      if (0xe28063cd < ((uVar1 ^ 0x60410) & 0x7bff5d95 | 0x7a585981)) {
        local_74 = 0x7e9437b8;
      }
    }
  } while (local_74 != -0x784d1303);
  return;
}



// #####################################
// ##### addBubbleMergeSection @ 0012d2a8
// #####################################

/* Function Stack Size: 0x10 bytes */

void BubbleSettingViewController::addBubbleMergeSection(ID param_1,SEL param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined *puVar59;
  undefined *puVar60;
  undefined *puVar61;
  undefined *puVar62;
  undefined8 *puVar63;
  bool bVar64;
  bool bVar65;
  int iVar66;
  undefined8 uVar67;
  undefined8 uVar68;
  undefined8 uVar69;
  long lVar70;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  SEL extraout_x1_09;
  SEL extraout_x1_10;
  undefined8 extraout_x1_11;
  SEL extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  SEL extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  SEL extraout_x1_30;
  undefined8 extraout_x1_31;
  SEL extraout_x1_32;
  undefined8 extraout_x1_33;
  SEL extraout_x1_34;
  undefined8 extraout_x1_35;
  uint uVar71;
  int iVar72;
  undefined8 *puVar73;
  undefined8 *puVar74;
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auStack_240 [8];
  int *local_238;
  int local_22c;
  undefined *local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined *puStack_1c0;
  char local_1b1;
  long local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined *local_190;
  char local_181;
  undefined *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined *puStack_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined8 local_108;
  char local_f9;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined8 *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  byte local_7d;
  ushort local_7c;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  puVar74 = (undefined8 *)auStack_240;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = (DAT_004a14e0 ^ DAT_004a14e4) + 0x342226d2;
  local_238 = &local_22c;
  local_22c = 0x68a42c46;
LAB_0012d350:
  puVar63 = local_a0;
  puVar73 = local_a8;
  puVar62 = PTR__OBJC_CLASS___NSString_0048c9b0;
  puVar61 = PTR_s_referGuideTagText_0048aec0;
  puVar60 = PTR_s_referMessageMode_0048ae80;
  puVar59 = PTR_s_mergeLayoutValue_0048ae70;
  auVar81._8_8_ = param_2;
  auVar81._0_8_ = local_e0;
  auVar58._8_8_ = param_2;
  auVar58._0_8_ = local_e0;
  auVar57._8_8_ = param_2;
  auVar57._0_8_ = local_e0;
  auVar56._8_8_ = param_2;
  auVar56._0_8_ = local_e0;
  auVar55._8_8_ = param_2;
  auVar55._0_8_ = local_e0;
  auVar54._8_8_ = param_2;
  auVar54._0_8_ = local_e0;
  auVar78._8_8_ = param_2;
  auVar78._0_8_ = local_1d0;
  auVar77._8_8_ = param_2;
  auVar77._0_8_ = local_210;
  auVar53._8_8_ = param_2;
  auVar53._0_8_ = local_210;
  auVar52._8_8_ = param_2;
  auVar52._0_8_ = local_210;
  auVar51._8_8_ = param_2;
  auVar51._0_8_ = local_210;
  auVar76._8_8_ = param_2;
  auVar76._0_8_ = local_178;
  auVar50._8_8_ = param_2;
  auVar50._0_8_ = local_178;
  auVar45._8_8_ = param_2;
  auVar45._0_8_ = local_1f0;
  auVar44._8_8_ = param_2;
  auVar44._0_8_ = local_1f0;
  auVar39._8_8_ = param_2;
  auVar39._0_8_ = local_1f0;
  auVar38._8_8_ = param_2;
  auVar38._0_8_ = local_1f0;
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = local_1f0;
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = local_1f0;
  auVar75._8_8_ = param_2;
  auVar75._0_8_ = local_1f0;
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = local_1f0;
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = local_1f0;
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = local_1f0;
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = local_1f0;
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = local_1f0;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = local_1f0;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_1f0;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = local_1f0;
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = local_1f0;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = local_1f0;
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = local_1f0;
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = local_1f0;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_1f0;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = local_1f0;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_1f0;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_1f0;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_1f0;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_1f0;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_1f0;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_1f0;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_1f0;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_1f0;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_1f0;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_1f0;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_1f0;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_1f0;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_1f0;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_1f0;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_1f0;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_1f0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_1f0;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_1f0;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_1f0;
  auVar80._8_8_ = param_2;
  auVar80._0_8_ = local_128;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_128;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = local_128;
  auVar79._8_8_ = param_2;
  auVar79._0_8_ = local_128;
  if (local_22c < 0xa661102) {
    if (local_22c < -0x27423485) {
      if (local_22c < -0x55a90666) {
        if (local_22c < -0x6c047183) {
          if (local_22c < -0x7132f148) {
            if (local_22c != -0x7e1b341f) {
              if (local_22c == -0x7b29cdb2) {
                uVar71 = DAT_004a1518 ^ DAT_004a151c;
                _objc_msgSend(param_1,local_b8);
                auVar81 = _objc_retainAutoreleasedReturnValue();
                local_e8 = PTR_s_enabledMergeOnlyRoom_0048ae30;
                bVar65 = 0x61de9c36 < ((uVar71 ^ 0x161c916a) + 0x42f60158 | 0xd136795a);
                iVar66 = -0x6ab37e56;
                iVar72 = 0x5178043f;
                goto LAB_00130fc4;
              }
              if (local_22c == -0x7423bbff) {
                bVar65 = local_f9 == '\0';
                iVar72 = -0x13cb7995;
                iVar66 = 0x5c754c0b;
                goto LAB_0012f830;
              }
              goto LAB_0012d350;
            }
            _objc_msgSend(puStack_130,local_150,local_138,param_1,
                          &PTR____CFConstantStringClassReference_0049fc60,local_148,0);
            local_158 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_b0,local_c8,local_158);
            auVar75._8_8_ = extraout_x1_29;
            auVar75._0_8_ = local_1f0;
            iVar66 = 0x66a6ffaf;
          }
          else if (local_22c < -0x6cfefe95) {
            if (local_22c != -0x7132f148) {
              if (local_22c == -0x6f2ac6e4) {
                iVar66 = DAT_004a1558 * DAT_004a155c;
                *local_120 = &PTR____CFConstantStringClassReference_0049fd40;
                puVar73 = local_90;
                local_90[2] = &PTR____CFConstantStringClassReference_0049fe40;
                _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar73,3);
                auVar80 = _objc_retainAutoreleasedReturnValue();
                bVar65 = 0xdc4cea88 < (iVar66 + 0xcd763d05U ^ 0xa00a528f);
                iVar72 = -0x544cb4c1;
                iVar66 = 0x37557063;
                goto LAB_0013114c;
              }
              goto LAB_0012d350;
            }
            bVar65 = local_79 == '\0';
            iVar72 = 0x1589fc84;
            iVar66 = 0x54e5a10c;
LAB_0012f830:
            auVar49._8_8_ = param_2;
            auVar49._0_8_ = local_1f0;
            auVar75._8_8_ = param_2;
            auVar75._0_8_ = local_1f0;
            if (bVar65) {
              iVar66 = iVar72;
              auVar75 = auVar49;
            }
          }
          else {
            iVar66 = 0x6f0625fd;
            auVar75 = auVar26;
            if (local_22c != -0x6cfefe95) {
              if (local_22c != -0x6cbd542d) goto LAB_0012d350;
              iVar66 = 0xa661102;
              auVar75 = auVar27;
            }
          }
        }
        else if (local_22c < -0x68443f6c) {
          if (local_22c == -0x6c047183) {
            _objc_msgSend(param_1,local_b8);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar67,puVar59);
            _objc_retainAutoreleasedReturnValue();
            param_2 = extraout_x1_30;
LAB_00130b5c:
            auVar75._8_8_ = param_2;
            auVar75._0_8_ = local_1f0;
            iVar66 = -0x453b50b6;
          }
          else if (local_22c == -0x6ab37e56) {
            _objc_msgSend(param_1,local_b8);
            _objc_retainAutoreleasedReturnValue();
            auVar75._8_8_ = extraout_x1_31;
            auVar75._0_8_ = local_1f0;
            iVar66 = -0x7b29cdb2;
          }
          else {
            if (local_22c != -0x696a7bd3) goto LAB_0012d350;
            _objc_msgSend(local_1a0,PTR_s_normalCellForSel_target_title_ri_0048a3c0,local_190,
                          param_1,&PTR____CFConstantStringClassReference_0049fba0,local_198,0);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_b0,local_c8,uVar67);
            _objc_release(uVar67);
            auVar75._8_8_ = extraout_x1_05;
            auVar75._0_8_ = local_1f0;
            iVar66 = 0x477328b9;
          }
        }
        else if (local_22c < -0x5889ea6b) {
          if (local_22c == -0x68443f6c) {
            iVar66 = DAT_004a15e8 - DAT_004a15ec;
            local_1c8 = PTR_s_referGuideLineStyle__0048ae90;
            puStack_1c0 = PTR_BubbleBoxUI_0048ca90;
            *local_a8 = &PTR____CFConstantStringClassReference_0049fbc0;
            puVar73[1] = &PTR____CFConstantStringClassReference_0049fc80;
            _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar73,2);
            auVar78 = _objc_retainAutoreleasedReturnValue();
            bVar65 = iVar66 == -0x7613832e;
            iVar66 = 0x7d0231a5;
            iVar72 = 0x5f655774;
            goto LAB_00130cd4;
          }
          if (local_22c != -0x648b40c6) goto LAB_0012d350;
          iVar66 = 0x1890efaf;
          auVar75 = auVar28;
        }
        else {
          if (local_22c != -0x5889ea6b) {
            if (local_22c == -0x582217eb) {
              uVar71 = DAT_004a1628 - DAT_004a162c;
              _objc_release(local_1e0);
              auVar80._8_8_ = extraout_x1_07;
              auVar80._0_8_ = local_128;
              bVar65 = 0xcd5c53c8 < (uVar71 & 0x3fe7f9ff | 0x3fc739df);
              iVar72 = -0x582217eb;
              iVar66 = -0x212ea8d7;
              goto LAB_0013114c;
            }
            goto LAB_0012d350;
          }
          _objc_msgSend(param_1,local_b8);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          local_190 = PTR_s_referCornerRadius_0048ae88;
          uVar68 = _objc_msgSend();
          *(undefined8 *)((long)puVar74 + -0x10) = uVar68;
          _objc_msgSend(puVar62,PTR_s_stringWithFormat__00489548,
                        &PTR____CFConstantStringClassReference_0049fbe0);
          local_198 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar67);
          auVar75._8_8_ = extraout_x1_17;
          auVar75._0_8_ = local_1f0;
          local_1a0 = PTR_BubbleBoxUI_0048ca90;
          iVar66 = -0x26b3fd18;
        }
      }
      else if (local_22c < -0x3db655b3) {
        if (local_22c < -0x453b50b6) {
          iVar66 = -0x1d2e2c8c;
          auVar75 = auVar25;
          if (local_22c != -0x55a90666) {
            if (local_22c == -0x544cb4c1) {
              *local_120 = &PTR____CFConstantStringClassReference_0049fd40;
              puVar73 = local_90;
              local_90[2] = &PTR____CFConstantStringClassReference_0049fe40;
              _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar73,3);
              _objc_retainAutoreleasedReturnValue();
              auVar75._8_8_ = extraout_x1_33;
              auVar75._0_8_ = local_1f0;
              iVar66 = -0x6f2ac6e4;
            }
            else {
              if (local_22c != -0x46797ea6) goto LAB_0012d350;
              local_110 = PTR_BubbleBoxUI_0048ca90;
              puVar73 = local_90 + 1;
              *local_90 = &PTR____CFConstantStringClassReference_0049fcc0;
              auVar75._0_8_ = local_1f0;
              local_118 = PTR_s_headDisplay__0048ae50;
              iVar66 = 0x240289f7;
              local_120 = puVar73;
            }
          }
        }
        else if (local_22c < -0x41ea4fd7) {
          if (local_22c == -0x453b50b6) {
            uVar71 = (DAT_004a1568 & DAT_004a156c) / 0x73472da4 + 0xcb2bfb0a;
            local_138 = PTR_s_mergeLayoutValue_0048ae70;
            puStack_130 = PTR_BubbleBoxUI_0048ca90;
            _objc_msgSend(param_1,local_b8);
            local_140 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_140,local_138);
            auVar80 = _objc_retainAutoreleasedReturnValue();
            auVar77._8_8_ = auVar80._8_8_;
            auVar77._0_8_ = local_210;
            local_148 = auVar80._0_8_;
            local_150 = PTR_s_normalCellForSel_target_title_ri_0048a3c0;
            bVar64 = 0x30bce4b8 < uVar71;
            bVar65 = uVar71 == 0x30bce4b9;
            iVar72 = -0x6c047183;
            iVar66 = -0x3db655b3;
            goto LAB_001310b8;
          }
          if (local_22c != -0x42a6c541) goto LAB_0012d350;
          uVar67 = _objc_msgSend(local_e0,local_e8);
          _objc_msgSend(puStack_d0,local_c0,local_d8,param_1,
                        &PTR____CFConstantStringClassReference_0049fe80,uVar67,0);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_b0,local_c8,uVar67);
          _objc_release(uVar67);
          _objc_release(local_e0);
          puVar73 = local_88;
          puVar61 = PTR_BubbleBoxUI_0048ca90;
          puVar59 = PTR_s_mergeMode__0048ae38;
          *local_88 = &PTR____CFConstantStringClassReference_0049fe60;
          puVar73[1] = &PTR____CFConstantStringClassReference_0049fdc0;
          _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,
                        puVar73,2);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_1,local_b8);
          uVar68 = _objc_retainAutoreleasedReturnValue();
          puVar60 = PTR_s_mergeMode_0048ae40;
          uVar69 = _objc_msgSend(uVar68,PTR_s_mergeMode_0048ae40);
          _objc_msgSend(puVar61,PTR_s_segmentedCellForSel_target_title_0048a3b0,puVar59,param_1,
                        &PTR____CFConstantStringClassReference_0049fda0,uVar67,uVar69);
          uVar69 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_b0,local_c8,uVar69);
          _objc_release(uVar69);
          _objc_release(uVar68);
          _objc_release(uVar67);
          _objc_msgSend(param_1,local_b8);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar67,puVar60);
          _objc_release(uVar67);
          auVar75._8_8_ = extraout_x1_00;
          auVar75._0_8_ = local_1f0;
          iVar66 = 0x521ab4f9;
        }
        else {
          if (local_22c != -0x41ea4fd7) {
            if (local_22c == -0x412ba54a) {
              uVar71 = DAT_004a15d8 & DAT_004a15dc;
              local_1b1 = local_1b0 == 2;
              _objc_release(local_1a8);
              bVar65 = ((uVar71 ^ 0x486baa7c) / 0x761776e3 | 0x67aadaee) == 0x579b72f0;
              iVar72 = -0x412ba54a;
              iVar66 = -0x21af21e3;
              param_2 = extraout_x1_09;
              goto LAB_0012f830;
            }
            goto LAB_0012d350;
          }
          _objc_release(local_1d8);
          auVar75._8_8_ = extraout_x1_19;
          auVar75._0_8_ = local_1f0;
          iVar66 = -0x137748c0;
        }
      }
      else if (local_22c < -0x38b6926e) {
        if (-0x3a5d0d7d < local_22c) {
          if (local_22c == -0x3a5d0d7c) {
            bVar65 = 0x2c956716 <
                     ((DAT_004a1590 + DAT_004a1594) * 0x44e2c3cf & 0x87d86017U) + 0x7d3d2ce5;
            iVar66 = -0x298d7f5c;
            iVar72 = 0x56d56d5f;
            goto LAB_00130fc4;
          }
          if (local_22c == -0x3a16b224) {
            bVar65 = (uint)(DAT_004a14f8 * DAT_004a14fc) / 0x7b294cb0 == 0xc44a55e;
            iVar66 = -0x3a16b224;
            iVar72 = -0x7132f148;
            goto LAB_00130cd4;
          }
          goto LAB_0012d350;
        }
        if (local_22c == -0x3db655b3) {
          iVar66 = -0x7e1b341f;
          auVar75 = auVar22;
        }
        else {
          if (local_22c != -0x3d330b08) goto LAB_0012d350;
          iVar66 = -0x3a5d0d7c;
          auVar75 = auVar21;
        }
      }
      else if (local_22c < -0x298d7f5c) {
        if (local_22c != -0x38b6926e) {
          if (local_22c == -0x2b5aea1f) goto LAB_00130b5c;
          goto LAB_0012d350;
        }
        iVar66 = 0x5b59877a;
        auVar75 = auVar23;
      }
      else if (local_22c == -0x298d7f5c) {
        uVar67 = _objc_msgSend(local_178,PTR_s_referMessageMode_0048ae80);
        _objc_msgSend(puStack_160,local_f8,local_168,param_1,
                      &PTR____CFConstantStringClassReference_0049fc00,local_170,uVar67);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,local_c8,uVar67);
        _objc_release(uVar67);
        _objc_release(local_178);
        _objc_release(local_170);
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar67,puVar60);
        _objc_release(uVar67);
        auVar75._8_8_ = extraout_x1_25;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0x56d56d5f;
      }
      else {
        if (local_22c != -0x287b01b3) goto LAB_0012d350;
        DAT_0049fad8 = local_7c;
        DAT_0049fada = DAT_0049fa5a ^ 0xadd7;
        DAT_0049fadc = DAT_0049fa5c ^ 0x92e1;
        DAT_0049fade = DAT_0049fa5e ^ 0x1cf1;
        DAT_0049fae0 = DAT_0049fa60 ^ 0xd87b;
        DAT_0049fae2 = DAT_0049fa62 ^ 0xc56e;
        DAT_0049fae4 = DAT_0049fa64 ^ 0xf768;
        DAT_0049fae6 = DAT_0049fa66 ^ 0xc1af;
        DAT_0049f9bc = DAT_0049f9b2 ^ 0x7c35;
        DAT_0049f9be = DAT_0049f9b4 ^ 0x3d0f;
        DAT_0049f9c0 = DAT_0049f9b6 ^ 0x7ba4;
        DAT_0049f9c2 = DAT_0049f9b8 ^ 0x1da;
        DAT_0049f9c4 = DAT_0049f9ba ^ 0xefee;
        DAT_0049f9a8 = DAT_0049f99e ^ 0x9178;
        DAT_0049f9aa = DAT_0049f9a0 ^ 0x8a86;
        DAT_0049f9ac = DAT_0049f9a2 ^ 0xf1c1;
        DAT_0049f9ae = DAT_0049f9a4 ^ 0xec0b;
        DAT_0049f9b0 = DAT_0049f9a6 ^ 0xa573;
        DAT_0049fb12 = DAT_0049fb08 ^ 0xf3c0;
        DAT_0049fb14 = DAT_0049fb0a ^ 0x5900;
        DAT_0049fb16 = DAT_0049fb0c ^ 0x6735;
        DAT_0049fb18 = DAT_0049fb0e ^ 0xb719;
        DAT_0049fb1a = DAT_0049fb10 ^ 0xa1ed;
        DAT_0049f990 = DAT_0049f982 ^ 0x8bf8;
        DAT_0049f992 = DAT_0049f984 ^ 0xc60c;
        DAT_0049f994 = DAT_0049f986 ^ 0xd1af;
        DAT_0049f996 = DAT_0049f988 ^ 0xcd0a;
        DAT_0049f998 = DAT_0049f98a ^ 0x3a43;
        DAT_0049f99a = DAT_0049f98c ^ 0xf7b6;
        DAT_0049f99c = DAT_0049f98e ^ 0x250f;
        DAT_0049f97a = DAT_0049f972 ^ 0x9c1f;
        DAT_0049f97c = DAT_0049f974 ^ 0x2ffe;
        DAT_0049f97e = DAT_0049f976 ^ 0x4f97;
        DAT_0049f980 = DAT_0049f978 ^ 0xd416;
        DAT_0049f8f6 = DAT_0049f8ee ^ 0x322f;
        DAT_0049f8f8 = DAT_0049f8f0 ^ 0x43c;
        DAT_0049f8fa = DAT_0049f8f2 ^ 0x6919;
        DAT_0049f8fc = DAT_0049f8f4 ^ 0xdf5a;
        DAT_0049f964 = DAT_0049f956 ^ 0x7d0a;
        DAT_0049f966 = DAT_0049f958 ^ 0x127b;
        DAT_0049f968 = DAT_0049f95a ^ 0x4990;
        DAT_0049f96a = DAT_0049f95c ^ 0xa7be;
        DAT_0049f96c = DAT_0049f95e ^ 0xde06;
        DAT_0049f96e = DAT_0049f960 ^ 0xd78a;
        DAT_0049f970 = DAT_0049f962 ^ 0xecbf;
        DAT_0049f91c = DAT_0049f912 ^ 0x195e;
        DAT_0049f91e = DAT_0049f914 ^ 0xc747;
        DAT_0049f920 = DAT_0049f916 ^ 0x13fb;
        DAT_0049f922 = DAT_0049f918 ^ 0xb444;
        DAT_0049f924 = DAT_0049f91a ^ 0x5fc2;
        DAT_0049e966 = DAT_0049e962 ^ 0x86;
        local_7d = DAT_0049e963 ^ 0x91;
        iVar66 = -0xb66c43d;
        auVar75 = auVar24;
      }
    }
    else if (local_22c < -0x144b4b59) {
      if (local_22c < -0x212ea8d7) {
        if (local_22c < -0x23f392db) {
          if (local_22c != -0x27423485) {
            if (local_22c == -0x26b3fd18) {
              uVar71 = ((DAT_004a15a0 & DAT_004a15a4) + 0x63f02828 ^ 0xf8f6b843) + 0xc453ccef;
              bVar64 = 0x901011fb < uVar71;
              bVar65 = uVar71 == 0x901011fc;
              iVar72 = -0x696a7bd3;
              iVar66 = 0x477328b9;
              goto LAB_001310b8;
            }
            if (local_22c == -0x2687d707) {
              bVar65 = 0x51c784fe <
                       ((uint)(DAT_004a15e0 - DAT_004a15e4) / 0x1e5db5c1 + 0x7337b79 | 0xb695f048);
              iVar72 = -0x68443f6c;
              iVar66 = 0x7d0231a5;
              goto LAB_0013114c;
            }
            goto LAB_0012d350;
          }
          iVar66 = -0x1d2e2c8c;
          auVar75 = auVar33;
        }
        else {
          if (-0x22e846a4 < local_22c) {
            if (local_22c == -0x22e846a3) {
              bVar65 = 0x42fd1d71 <
                       (DAT_004a15d0 * DAT_004a15d4 * 0x7c4a1341 | 0x441b41c4U) + 0xcd2473f1;
              iVar72 = -0x412ba54a;
              iVar66 = 0x1db6ff9b;
              auVar80 = auVar2;
              goto LAB_0013114c;
            }
            if (local_22c == -0x21af21e3) {
              bVar65 = local_1b1 == '\0';
              iVar72 = 0x6f0625fd;
              iVar66 = -0x2687d707;
              goto LAB_0012f830;
            }
            goto LAB_0012d350;
          }
          if (local_22c == -0x23f392db) {
            _objc_release(local_218);
            _objc_release(local_210);
            _objc_release(local_208);
            auVar75._8_8_ = extraout_x1_16;
            auVar75._0_8_ = local_1f0;
            iVar66 = 0x74ac37bf;
          }
          else {
            if (local_22c != -0x235a99a5) goto LAB_0012d350;
            iVar66 = -0x22e846a3;
            auVar75 = auVar32;
          }
        }
      }
      else if (local_22c < -0x1d2e2c8c) {
        if (local_22c == -0x212ea8d7) {
          iVar66 = 0x3cb8e082;
        }
        else {
          if (local_22c == -0x205047d7) {
            _objc_msgSend(local_1a8,local_180);
            param_2 = extraout_x1_32;
            goto LAB_00130c70;
          }
          if (local_22c != -0x1fe474de) goto LAB_0012d350;
          iVar66 = 0x59aeb521;
          auVar75 = auVar35;
        }
      }
      else if (local_22c < -0x147fd045) {
        if (local_22c == -0x1d2e2c8c) {
          uVar71 = 0;
          if (DAT_004a157c != 0) {
            uVar71 = DAT_004a1578 / DAT_004a157c;
          }
          local_168 = PTR_s_referMessageMode__0048ae78;
          puStack_160 = PTR_BubbleBoxUI_0048ca90;
          iVar66 = -0x1d2e2c8c;
          auVar75 = auVar36;
          if (((uVar71 | 0x149cb97d) + 0x9c71a78d | 0x7dce1f1) != 0x8fe57b97) {
            iVar66 = 0x7600a1a9;
            auVar75 = auVar37;
          }
        }
        else {
          if (local_22c != -0x14956939) goto LAB_0012d350;
          iVar66 = 0x52d5d26;
          auVar75 = auVar34;
        }
      }
      else {
        if (local_22c != -0x147fd045) {
          if (local_22c == -0x146f2c64) {
            uVar71 = 0;
            if (DAT_004a150c != 0) {
              uVar71 = DAT_004a1508 / DAT_004a150c;
            }
            DAT_004d140c = 1;
            local_88 = (undefined8 *)((long)puVar74 + -0x10);
            local_90 = (undefined8 *)((long)puVar74 + -0x30);
            local_98 = (undefined8 *)((long)puVar74 + -0x40);
            local_a0 = (undefined8 *)((long)puVar74 + -0x60);
            puVar74 = (undefined8 *)((long)puVar74 + -0x70);
            local_a8 = puVar74;
            uVar67 = _objc_getClass(&DAT_0049e9f0,param_2);
            _objc_msgSend(uVar67,PTR_s_sectionWithHeader_Footer__00489e30,&cf___,
                          &PTR____CFConstantStringClassReference_0049fde0);
            local_b0 = _objc_retainAutoreleasedReturnValue();
            puVar60 = PTR_BubbleBoxUI_0048ca90;
            puVar59 = PTR_s_enabledMerge__0048ae18;
            local_b8 = PTR_s_config_00489e18;
            _objc_msgSend(param_1);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            uVar68 = _objc_msgSend(uVar67,PTR_s_enabledMerge_0048ae20);
            local_c0 = PTR_s_switchCellForSel_target_title_on_00489e48;
            _objc_msgSend(puVar60,PTR_s_switchCellForSel_target_title_on_00489e48,puVar59,param_1,
                          &PTR____CFConstantStringClassReference_0049fca0,uVar68,0);
            uVar68 = _objc_retainAutoreleasedReturnValue();
            local_c8 = PTR_s_addCell__00489e50;
            _objc_msgSend(local_b0,PTR_s_addCell__00489e50,uVar68);
            _objc_release(uVar68);
            _objc_release(uVar67);
            auVar80._8_8_ = extraout_x1_08;
            auVar80._0_8_ = local_128;
            local_d8 = PTR_s_enabledMergeOnlyRoom__0048ae28;
            puStack_d0 = PTR_BubbleBoxUI_0048ca90;
            bVar65 = 0x9dc0eed6 < ((uVar71 ^ 0x304f0e5) & 0x1305f8e7) + 0x5f0c56f;
            iVar72 = -0x146f2c64;
            iVar66 = -0xa3eac9e;
            goto LAB_0013114c;
          }
          goto LAB_0012d350;
        }
        _objc_msgSend(local_b0,local_c8,local_108);
        _objc_release(local_108);
        auVar75._8_8_ = extraout_x1_18;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0xe53d65a;
      }
    }
    else if (local_22c < -0xa3eac9e) {
      if (local_22c < -0x11abfa8f) {
        if (local_22c == -0x144b4b59) {
          uVar71 = DAT_004a15c8 | DAT_004a15cc;
          auVar80 = _objc_msgSend(local_1a8,local_180);
          auVar78._8_8_ = auVar80._8_8_;
          auVar78._0_8_ = local_1d0;
          local_1b0 = auVar80._0_8_;
          bVar65 = (uVar71 ^ 0x5c64c916) * 0x624db55f == -0x53e91c51;
          iVar66 = -0x205047d7;
          iVar72 = -0x235a99a5;
          goto LAB_00130cd4;
        }
        if (local_22c == -0x13cb7995) goto LAB_0012f784;
        if (local_22c != -0x137748c0) goto LAB_0012d350;
        _objc_release(local_1d8);
        auVar75._8_8_ = extraout_x1_06;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0x4844bc2c;
      }
      else {
        if (local_22c < -0xb66c43d) {
          if (local_22c != -0x11abfa8f) {
            if (local_22c == -0xbca48c0) {
              bVar65 = ((DAT_004a1550 + DAT_004a1554 + 0x51eaf99cU ^ 0x688f5482) & 0xef8f5782) ==
                       0xed1a6f34;
              iVar72 = -0x544cb4c1;
              iVar66 = -0x6f2ac6e4;
              goto LAB_0012f830;
            }
            goto LAB_0012d350;
          }
        }
        else {
          if (local_22c == -0xb66c43d) {
            DAT_0049e967 = local_7d;
            DAT_0049e968 = DAT_0049e964 ^ 0x21;
            DAT_0049e969 = DAT_0049e965 ^ 8;
            DAT_0049f8e8 = DAT_0049f8e2 ^ 0xd48b;
            DAT_0049f8ea = DAT_0049f8e4 ^ 0x7763;
            DAT_0049f8ec = DAT_0049f8e6 ^ 0x5f8;
            DAT_0049f8c8 = DAT_0049f8ba ^ 0xb354;
            DAT_0049f8ca = DAT_0049f8bc ^ 0x3036;
            DAT_0049f8cc = DAT_0049f8be ^ 0x1220;
            DAT_0049f8ce = DAT_0049f8c0 ^ 0x1cb6;
            DAT_0049f8d0 = DAT_0049f8c2 ^ 0x7b25;
            DAT_0049f8d2 = DAT_0049f8c4 ^ 0xa228;
            DAT_0049f8d4 = DAT_0049f8c6 ^ 0x363d;
            DAT_0049f9d4 = DAT_0049f9c6 ^ 0x2ef6;
            DAT_0049f9d6 = DAT_0049f9c8 ^ 0x7584;
            DAT_0049f9d8 = DAT_0049f9ca ^ 0xa9;
            DAT_0049f9da = DAT_0049f9cc ^ 0xc26a;
            DAT_0049f9dc = DAT_0049f9ce ^ 0x46da;
            DAT_0049f9de = DAT_0049f9d0 ^ 0x5aed;
            DAT_0049f9e0 = DAT_0049f9d2 ^ 0x5424;
            DAT_0049f908 = DAT_0049f8fe ^ 0x1f7b;
            DAT_0049f90a = DAT_0049f900 ^ 0xb154;
            DAT_0049f90c = DAT_0049f902 ^ 0x6baf;
            DAT_0049f90e = DAT_0049f904 ^ 0x82e1;
            DAT_0049f910 = DAT_0049f906 ^ 0x678d;
            DAT_0049f8b0 = DAT_0049f8a6 ^ 0x2be7;
            DAT_0049f8b2 = DAT_0049f8a8 ^ 0x665d;
            DAT_0049f8b4 = DAT_0049f8aa ^ 0x67af;
            DAT_0049f8b6 = DAT_0049f8ac ^ 0x95e;
            DAT_0049f8b8 = DAT_0049f8ae ^ 0x497f;
            DAT_0049f87c = DAT_0049f86e ^ 0x5bd6;
            DAT_0049f87e = DAT_0049f870 ^ 0x96d1;
            DAT_0049f880 = DAT_0049f872 ^ 0x1295;
            DAT_0049f882 = DAT_0049f874 ^ 0x8b7d;
            DAT_0049f884 = DAT_0049f876 ^ 0xa704;
            DAT_0049f886 = DAT_0049f878 ^ 0xce0c;
            DAT_0049f888 = DAT_0049f87a ^ 0xc809;
            DAT_0049f7c0 = DAT_0049f7b0 ^ 0x3936;
            DAT_0049f7c2 = DAT_0049f7b2 ^ 0xe34;
            DAT_0049f7c4 = DAT_0049f7b4 ^ 0xc2eb;
            DAT_0049f7c6 = DAT_0049f7b6 ^ 0xca60;
            DAT_0049f7c8 = DAT_0049f7b8 ^ 0xbe34;
            DAT_0049f7ca = DAT_0049f7ba ^ 0x6efc;
            DAT_0049f7cc = DAT_0049f7bc ^ 0x28ee;
            DAT_0049f7ce = DAT_0049f7be ^ 0x4abc;
            DAT_0049f844 = DAT_0049f836 ^ 0x8595;
            DAT_0049f846 = DAT_0049f838 ^ 0x1017;
            DAT_0049f848 = DAT_0049f83a ^ 0xb795;
            DAT_0049f84a = DAT_0049f83c ^ 0x721c;
            DAT_0049f84c = DAT_0049f83e ^ 0x5f45;
            DAT_0049f84e = DAT_0049f840 ^ 0x55e9;
            DAT_0049f850 = DAT_0049f842 ^ 0x41cf;
            DAT_0049f898 = DAT_0049f88a ^ 0x1db6;
            DAT_0049f89a = DAT_0049f88c ^ 0xe516;
            DAT_0049f89c = DAT_0049f88e ^ 0x2804;
            DAT_0049f89e = DAT_0049f890 ^ 0x9603;
            DAT_0049f8a0 = DAT_0049f892 ^ 0x809e;
            DAT_0049f8a2 = DAT_0049f894 ^ 0xc1be;
            DAT_0049f8a4 = DAT_0049f896 ^ 0x635d;
            DAT_0049f85a = DAT_0049f852 ^ 0xb5e0;
            DAT_0049f85c = DAT_0049f854 ^ 0xd3c;
            DAT_0049f85e = DAT_0049f856 ^ 0xddce;
            DAT_0049f860 = DAT_0049f858 ^ 0x833c;
            DAT_0049f868 = DAT_0049f862 ^ 0xf13;
            DAT_0049f86a = DAT_0049f864 ^ 0x2a59;
            DAT_0049f86c = DAT_0049f866 ^ 0x2bd7;
            DAT_0049f948 = DAT_0049f93a ^ 0x605d;
            DAT_0049f94a = DAT_0049f93c ^ 0xb011;
            DAT_0049f94c = DAT_0049f93e ^ 0x660f;
            DAT_0049f94e = DAT_0049f940 ^ 0x4046;
            DAT_0049f950 = DAT_0049f942 ^ 0x10b8;
            DAT_0049f952 = DAT_0049f944 ^ 0x4522;
            DAT_0049f954 = DAT_0049f946 ^ 0x7756;
            DAT_0049f930 = DAT_0049f926 ^ 0x226d;
            DAT_0049f932 = DAT_0049f928 ^ 0xbdd5;
            DAT_0049f934 = DAT_0049f92a ^ 0x3048;
            DAT_0049f936 = DAT_0049f92c ^ 0x9789;
            DAT_0049f938 = DAT_0049f92e ^ 0xc3cd;
            DAT_0049f80e = DAT_0049f802 ^ 0x4d04;
            DAT_0049f810 = DAT_0049f804 ^ 0x89d2;
            DAT_0049f812 = DAT_0049f806 ^ 0xc794;
            DAT_0049f814 = DAT_0049f808 ^ 0x3c00;
            DAT_0049f816 = DAT_0049f80a ^ 0xf4d8;
            DAT_0049f818 = DAT_0049f80c ^ 0x6b6b;
            DAT_0049f7f0 = DAT_0049f7d0 ^ 0xe1bd;
            DAT_0049f7f2 = DAT_0049f7d2 ^ 0x3645;
            DAT_0049f7f4 = DAT_0049f7d4 ^ 0x5e19;
            DAT_0049f7f6 = DAT_0049f7d6 ^ 0x1597;
            DAT_0049f7f8 = DAT_0049f7d8 ^ 0xebad;
            DAT_0049f7fa = DAT_0049f7da ^ 0x799d;
            DAT_0049f7fc = DAT_0049f7dc ^ 0x3178;
            DAT_0049f7fe = DAT_0049f7de ^ 0x800d;
            DAT_0049f800 = DAT_0049f7e0 ^ 0xc79b;
            DAT_0049f8dc = DAT_0049f8d6 ^ 0x7a7c;
            DAT_0049f8de = DAT_0049f8d8 ^ 0x3b38;
            DAT_0049f8e0 = DAT_0049f8da ^ 0x86c4;
            DAT_0049f828 = DAT_0049f81a ^ 0xd3c2;
            DAT_0049f82a = DAT_0049f81c ^ 0xe999;
            DAT_0049f82c = DAT_0049f81e ^ 0x9cb1;
            DAT_0049f82e = DAT_0049f820 ^ 0xa350;
            DAT_0049f830 = DAT_0049f822 ^ 0xe631;
            DAT_0049f832 = DAT_0049f824 ^ 0xa429;
            DAT_0049f834 = DAT_0049f826 ^ 0xcb57;
            iVar66 = 0x1589fc84;
            auVar75 = auVar31;
            goto LAB_00131150;
          }
          if (local_22c != -0xb5b7845) goto LAB_0012d350;
          _objc_msgSend(param_1,local_b8);
          _objc_retainAutoreleasedReturnValue();
          param_2 = extraout_x1_10;
        }
        auVar75._8_8_ = param_2;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0x64bd5495;
      }
    }
    else if (local_22c < -0x1bd2086) {
      if (local_22c < -0x7d57da0) {
        if (local_22c == -0xa3eac9e) {
          iVar66 = 0x2c0c0886;
          auVar75 = auVar29;
        }
        else {
          if (local_22c != -0x9439931) goto LAB_0012d350;
          _objc_msgSend(local_220,local_228,local_b0);
          _objc_release(local_220);
          _objc_release(local_b0);
          auVar75._8_8_ = extraout_x1;
          auVar75._0_8_ = local_1f0;
          iVar66 = 0xaf0c9d5;
        }
      }
      else {
        if (local_22c != -0x7d57da0) {
          if (local_22c == -0x4ef557c) {
            bVar65 = local_181 == '\0';
            iVar66 = -0x11abfa8f;
            iVar72 = -0x5889ea6b;
            goto LAB_001310f0;
          }
          goto LAB_0012d350;
        }
        uVar71 = 0;
        if (DAT_004a153c != 0) {
          uVar71 = DAT_004a1538 / DAT_004a153c;
        }
        _objc_msgSend(PTR_BubbleBoxUI_0048ca90,PTR_s_normalCellForSel_target_title_ri_0048a3c0,
                      PTR_s_mergeSetting_0048ae48,param_1,
                      &PTR____CFConstantStringClassReference_0049fc40,&cf___,0);
        auVar80 = _objc_retainAutoreleasedReturnValue();
        auVar78._8_8_ = auVar80._8_8_;
        auVar78._0_8_ = local_1d0;
        local_108 = auVar80._0_8_;
        bVar65 = (uVar71 * 0x530cfe9c + 0xf925c104 | 0xe50fdb72) == 0x5ee97993;
        iVar66 = -0x7d57da0;
        iVar72 = 0x3bd006d0;
LAB_00130cd4:
        local_1d0 = auVar78._0_8_;
        auVar40._8_8_ = auVar78._8_8_;
        auVar40._0_8_ = local_1f0;
        auVar75._8_8_ = auVar78._8_8_;
        auVar75._0_8_ = local_1f0;
        if (!bVar65) {
          iVar66 = iVar72;
          auVar75 = auVar40;
        }
      }
    }
    else if (local_22c < 0x4ef6924) {
      if (local_22c == -0x1bd2086) {
        DAT_004d140c = 1;
        puVar74 = (undefined8 *)((long)puVar74 + -0x70);
        uVar67 = _objc_getClass(&DAT_0049e9f0,param_2);
        _objc_msgSend(uVar67,PTR_s_sectionWithHeader_Footer__00489e30,&cf___,
                      &PTR____CFConstantStringClassReference_0049fde0);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        puVar60 = PTR_BubbleBoxUI_0048ca90;
        puVar59 = PTR_s_enabledMerge__0048ae18;
        _objc_msgSend(param_1,PTR_s_config_00489e18);
        uVar68 = _objc_retainAutoreleasedReturnValue();
        uVar69 = _objc_msgSend(uVar68,PTR_s_enabledMerge_0048ae20);
        _objc_msgSend(puVar60,PTR_s_switchCellForSel_target_title_on_00489e48,puVar59,param_1,
                      &PTR____CFConstantStringClassReference_0049fca0,uVar69,0);
        uVar69 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar67,PTR_s_addCell__00489e50,uVar69);
        _objc_release(uVar69);
        _objc_release(uVar68);
        auVar75._8_8_ = extraout_x1_24;
        auVar75._0_8_ = local_1f0;
        iVar66 = -0x146f2c64;
      }
      else {
        if (local_22c != 0x406c816) goto LAB_0012d350;
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar67,puVar61);
        _objc_retainAutoreleasedReturnValue();
        auVar75._8_8_ = extraout_x1_01;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0x660505dc;
      }
    }
    else if (local_22c == 0x4ef6924) {
      iVar66 = 0x4ef6924;
      auVar75 = auVar38;
      if (((DAT_004a1638 - DAT_004a163c) + 0x7fa13489U ^ 0x1220d028 | 0xa5d30f96) != 0x3e81ef1b) {
        iVar66 = -0x6cfefe95;
        auVar75 = auVar39;
      }
    }
    else {
      if (local_22c != 0x52d5d26) goto LAB_0012d350;
      iVar66 = 0xbdbef52;
      auVar75 = auVar30;
    }
  }
  else if (local_22c < 0x4b1dd5fe) {
    if (local_22c < 0x2a10bf9a) {
      if (local_22c < 0x18c56493) {
        if (local_22c < 0xed816f9) {
          if (local_22c < 0xbdbef52) {
            if (local_22c == 0xa661102) {
              local_79 = local_78 == 0;
              iVar66 = 0x36cca424;
              auVar75 = auVar8;
              goto LAB_00131150;
            }
            if (local_22c == 0xaf0c9d5) {
              _objc_msgSend(local_220,local_228,local_b0);
              _objc_release(local_220);
              _objc_release(local_b0);
              auVar81._8_8_ = extraout_x1_04;
              auVar81._0_8_ = local_e0;
              bVar65 = true;
              iVar66 = -0x9439931;
              iVar72 = 0x5d2e2d07;
              goto LAB_00130fc4;
            }
          }
          else {
            if (local_22c == 0xe53d65a) {
              uVar71 = (DAT_004a1548 ^ DAT_004a154c) / 0x20af0428 + 0x4f57d881;
              _objc_msgSend(local_b0,local_c8,local_108);
              _objc_release(local_108);
              bVar64 = 0xd2630274 < uVar71;
              bVar65 = uVar71 == 0xd2630275;
              iVar72 = 0x1b4d2687;
              param_2 = extraout_x1_15;
LAB_0012f7f4:
              auVar43._8_8_ = param_2;
              auVar43._0_8_ = local_1f0;
              auVar75._8_8_ = param_2;
              auVar75._0_8_ = local_1f0;
              iVar66 = 0xe53d65a;
              if (!bVar64 || bVar65) {
                iVar66 = iVar72;
                auVar75 = auVar43;
              }
              goto LAB_00131150;
            }
            if (local_22c == 0xbdbef52) {
              if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
              }
              return;
            }
          }
          goto LAB_0012d350;
        }
        if (local_22c < 0x1589fc84) {
          if (local_22c == 0xed816f9) {
            *local_a0 = &PTR____CFConstantStringClassReference_0049fc20;
            puVar63[1] = &PTR____CFConstantStringClassReference_0049fe20;
            puVar63[2] = &PTR____CFConstantStringClassReference_0049fe00;
            _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar63,3);
            _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_1,local_b8);
            _objc_retainAutoreleasedReturnValue();
            auVar75._8_8_ = extraout_x1_23;
            auVar75._0_8_ = local_1f0;
            iVar66 = 0x39284523;
            goto LAB_00131150;
          }
          if (local_22c != 0xfe3cf30) goto LAB_0012d350;
          bVar65 = 0xdbdd919f < ((DAT_004a1650 ^ DAT_004a1654) + 0xfdcdab08 & 0xd636e7b1);
          iVar66 = 0x52d5d26;
          iVar72 = -0x14956939;
          auVar81 = auVar55;
        }
        else {
          if (local_22c != 0x1589fc84) {
            if (local_22c == 0x1890efaf) {
              local_78 = DAT_004d140c;
              bVar65 = 0x8d61fe91 <
                       (((DAT_004a14e8 | DAT_004a14ec) * 0x4eb60bc6 | 0x17ed2e11) ^ 0x831633d1);
              iVar72 = -0x648b40c6;
              iVar66 = -0x6cbd542d;
              auVar80 = auVar79;
              goto LAB_0013114c;
            }
            goto LAB_0012d350;
          }
          bVar65 = 0x9b6d45ae < ((DAT_004a1500 & DAT_004a1504 ^ 0x14808110) & 0x14808318);
          iVar66 = -0x146f2c64;
          iVar72 = -0x1bd2086;
          auVar81 = auVar56;
        }
LAB_00130fc4:
        local_e0 = auVar81._0_8_;
        auVar47._8_8_ = auVar81._8_8_;
        auVar47._0_8_ = local_1f0;
        auVar75._8_8_ = auVar81._8_8_;
        auVar75._0_8_ = local_1f0;
        if (bVar65) {
          iVar66 = iVar72;
          auVar75 = auVar47;
        }
        goto LAB_00131150;
      }
      if (local_22c < 0x1db6ff9b) {
        if (local_22c == 0x18c56493) {
          bVar65 = DAT_004a1600 - DAT_004a1604 == 0x30881dd2;
          iVar66 = 0x77266f60;
          iVar72 = 0x26fe203f;
LAB_001310f0:
          auVar75 = auVar44;
          if (bVar65) {
            iVar66 = iVar72;
            auVar75 = auVar45;
          }
        }
        else {
          iVar66 = -0x13cb7995;
          auVar75 = auVar11;
          if (local_22c != 0x1b4d2687) {
            if (local_22c == 0x1d826be3) {
              bVar65 = (int)((long)((ulong)(uint)((DAT_004a1640 + DAT_004a1644) * 0x3e273812) *
                                   0xb8140ea3) >> 0x3f) == -0x473aee6c;
              iVar72 = -0x9439931;
              iVar66 = 0xaf0c9d5;
              goto LAB_0012f830;
            }
            goto LAB_0012d350;
          }
        }
      }
      else if (local_22c < 0x26fe203f) {
        if (local_22c == 0x1db6ff9b) {
          _objc_release(local_1a8);
          auVar75._8_8_ = extraout_x1_21;
          auVar75._0_8_ = local_1f0;
          iVar66 = -0x412ba54a;
          goto LAB_00131150;
        }
        if (local_22c != 0x240289f7) goto LAB_0012d350;
        iVar66 = -0xbca48c0;
        auVar75 = auVar9;
      }
      else if (local_22c == 0x26fe203f) {
        _objc_msgSend(puStack_1f8,local_1e8,local_200,param_1,
                      &PTR____CFConstantStringClassReference_0049fb20,local_210,0);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,local_c8,uVar67);
        auVar75._8_8_ = extraout_x1_22;
        auVar75._0_8_ = local_1f0;
        iVar66 = 0x77266f60;
      }
      else {
        if (local_22c != 0x29b928a6) goto LAB_0012d350;
        iVar66 = 0x18c56493;
        auVar75 = auVar10;
      }
    }
    else if (local_22c < 0x3b577005) {
      if (local_22c < 0x36cca424) {
        if (local_22c == 0x2a10bf9a) {
          uVar71 = DAT_004a1520 * DAT_004a1524 * 0x32c95ba3 + 0x566104a2;
          bVar64 = 0xc0af19af < uVar71;
          bVar65 = uVar71 == 0xc0af19b0;
          iVar72 = -0x42a6c541;
          iVar66 = 0x521ab4f9;
          auVar77 = auVar51;
          goto LAB_001310b8;
        }
        if (local_22c == 0x2c0c0886) {
          bVar65 = 0x1389ea87 < ((DAT_004a1510 + DAT_004a1514) * -0x2aa9c67c & 0x18105098U);
          iVar66 = -0x6ab37e56;
          iVar72 = -0x7b29cdb2;
          auVar81 = auVar54;
          goto LAB_00130fc4;
        }
        if (local_22c != 0x3331afb8) goto LAB_0012d350;
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        uVar68 = _objc_msgSend(uVar67,PTR_s_referGuideLineStyle_0048ae98);
        _objc_msgSend(puStack_1c0,local_f8,local_1c8,param_1,
                      &PTR____CFConstantStringClassReference_0049fb80,local_1d0,uVar68);
        uVar68 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,local_c8,uVar68);
        _objc_release(uVar68);
        _objc_release(uVar67);
        _objc_release(local_1d0);
        puVar61 = PTR__OBJC_CLASS___NSString_0048c9b0;
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        puVar60 = PTR_s_referGuideOffsetX_0048aea0;
        uVar68 = _objc_msgSend(uVar67,PTR_s_referGuideOffsetX_0048aea0);
        puVar59 = PTR_s_stringWithFormat__00489548;
        *(undefined8 *)((long)puVar74 + -0x10) = uVar68;
        _objc_msgSend(puVar61,PTR_s_stringWithFormat__00489548,
                      &PTR____CFConstantStringClassReference_0049fbe0);
        local_1d8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar67);
        puVar62 = PTR__OBJC_CLASS___NSString_0048c9b0;
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        puVar61 = PTR_s_referGuideCornerRadius_0048aea8;
        uVar68 = _objc_msgSend(uVar67,PTR_s_referGuideCornerRadius_0048aea8);
        *(undefined8 *)((long)puVar74 + -0x10) = uVar68;
        _objc_msgSend(puVar62,puVar59,&PTR____CFConstantStringClassReference_0049fbe0);
        local_1e0 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar67);
        local_1e8 = PTR_s_normalCellForSel_target_title_ri_0048a3c0;
        _objc_msgSend(PTR_BubbleBoxUI_0048ca90,PTR_s_normalCellForSel_target_title_ri_0048a3c0,
                      puVar61,param_1,&PTR____CFConstantStringClassReference_0049fb60,local_1e0,0);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,local_c8,uVar67);
        _objc_release(uVar67);
        _objc_msgSend(PTR_BubbleBoxUI_0048ca90,local_1e8,puVar60,param_1,
                      &PTR____CFConstantStringClassReference_0049fb40,local_1d8,0);
        auVar75 = _objc_retainAutoreleasedReturnValue();
        iVar66 = 0x3ecd60e5;
      }
      else if (local_22c < 0x3910c58b) {
        if (local_22c == 0x36cca424) {
          uVar71 = ((DAT_004a14f0 | DAT_004a14f4) + 0x94cf5d83 | 0x797a391) * 0x435fa820;
          bVar64 = 0xa93a5e1a < uVar71;
          bVar65 = uVar71 == 0xa93a5e1b;
          iVar66 = -0x3a16b224;
          iVar72 = 0x5340e283;
LAB_00130a64:
          local_178 = auVar76._0_8_;
          auVar48._8_8_ = auVar76._8_8_;
          auVar48._0_8_ = local_1f0;
          auVar75._8_8_ = auVar76._8_8_;
          auVar75._0_8_ = local_1f0;
          if (!bVar64 || bVar65) {
            iVar66 = iVar72;
            auVar75 = auVar48;
          }
        }
        else {
          if (local_22c != 0x37557063) goto LAB_0012d350;
          iVar66 = 0x4b1dd5fe;
          auVar75 = auVar6;
        }
      }
      else {
        if (local_22c != 0x3910c58b) {
          if (local_22c == 0x39284523) {
            uVar71 = (DAT_004a1588 | DAT_004a158c | 0x35acf733) * -0x45e19ec;
            *local_a0 = &PTR____CFConstantStringClassReference_0049fc20;
            puVar63[1] = &PTR____CFConstantStringClassReference_0049fe20;
            puVar63[2] = &PTR____CFConstantStringClassReference_0049fe00;
            _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar63,3);
            local_170 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_1,local_b8);
            auVar76 = _objc_retainAutoreleasedReturnValue();
            bVar64 = 0xe3d64e71 < uVar71;
            bVar65 = uVar71 == 0xe3d64e72;
            iVar66 = 0x39284523;
            iVar72 = -0x3d330b08;
            goto LAB_00130a64;
          }
          goto LAB_0012d350;
        }
        iVar66 = 0x5ed24259;
        auVar75 = auVar7;
      }
    }
    else if (local_22c < 0x4446f404) {
      if (0x3cb8e081 < local_22c) {
        if (local_22c == 0x3cb8e082) {
          uVar71 = (DAT_004a1630 * DAT_004a1634 ^ 0x84200400U) & 0xbcb907eb | 0x101903aa;
          bVar64 = 0x5e8c78d < uVar71;
          bVar65 = uVar71 == 0x5e8c78e;
          iVar66 = -0x137748c0;
          iVar72 = -0x41ea4fd7;
          auVar76 = auVar50;
          goto LAB_00130a64;
        }
        if (local_22c == 0x3ecd60e5) {
          _objc_msgSend(local_b0,local_c8,local_1f0);
          _objc_release(local_1f0);
          puVar61 = PTR_BubbleBoxUI_0048ca90;
          puVar59 = PTR_s_enabledReferGuideTag__0048aeb0;
          _objc_msgSend(param_1,local_b8);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          puVar60 = PTR_s_enabledReferGuideTag_0048aeb8;
          uVar68 = _objc_msgSend(uVar67,PTR_s_enabledReferGuideTag_0048aeb8);
          _objc_msgSend(puVar61,local_c0,puVar59,param_1,
                        &PTR____CFConstantStringClassReference_0049fd80,uVar68,0);
          uVar68 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_b0,local_c8,uVar68);
          _objc_release(uVar68);
          _objc_release(uVar67);
          _objc_msgSend(param_1,local_b8);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          iVar66 = _objc_msgSend(uVar67,puVar60);
          _objc_release(uVar67);
          bVar65 = iVar66 == 0;
          iVar72 = 0x5b1fefeb;
          iVar66 = 0x4fab4a0c;
          param_2 = extraout_x1_12;
          goto LAB_0012f830;
        }
        goto LAB_0012d350;
      }
      if (local_22c == 0x3b577005) {
        _objc_msgSend(PTR_BubbleBoxUI_0048ca90,PTR_s_normalCellForSel_target_title_ri_0048a3c0,
                      PTR_s_mergeSetting_0048ae48,param_1,
                      &PTR____CFConstantStringClassReference_0049fc40,&cf___,0);
        _objc_retainAutoreleasedReturnValue();
        auVar75._8_8_ = extraout_x1_26;
        auVar75._0_8_ = local_1f0;
        iVar66 = -0x7d57da0;
        goto LAB_00131150;
      }
      if (local_22c != 0x3bd006d0) goto LAB_0012d350;
      iVar66 = 0x586e7415;
      auVar75 = auVar3;
    }
    else if (local_22c < 0x4797cedc) {
      iVar66 = 0x4ef6924;
      auVar75 = auVar4;
      if (local_22c != 0x4446f404) {
        if (local_22c == 0x477328b9) {
          uVar71 = 0;
          if (DAT_004a15ac != 0) {
            uVar71 = DAT_004a15a8 / DAT_004a15ac;
          }
          uVar71 = (uVar71 + 0x895cd5fa) / 0x2c171d30 & 0xfffffffd;
          _objc_msgSend(local_1a0,PTR_s_normalCellForSel_target_title_ri_0048a3c0,local_190,param_1,
                        &PTR____CFConstantStringClassReference_0049fba0,local_198,0);
          uVar67 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_b0,local_c8,uVar67);
          _objc_release(uVar67);
          auVar76._8_8_ = extraout_x1_02;
          auVar76._0_8_ = local_178;
          bVar64 = 0x2a348b31 < uVar71;
          bVar65 = uVar71 == 0x2a348b32;
          iVar66 = -0x696a7bd3;
          iVar72 = -0x38b6926e;
          goto LAB_00130a64;
        }
        goto LAB_0012d350;
      }
    }
    else if (local_22c == 0x4797cedc) {
      _objc_release(local_1e0);
      auVar75._8_8_ = extraout_x1_27;
      auVar75._0_8_ = local_1f0;
      iVar66 = -0x582217eb;
    }
    else {
      if (local_22c != 0x4844bc2c) goto LAB_0012d350;
      iVar66 = 0x565834ac;
      auVar75 = auVar5;
    }
  }
  else {
    if (local_22c < 0x5c754c0b) {
      if (local_22c < 0x565834ac) {
        if (local_22c < 0x521ab4f9) {
          if (local_22c == 0x4b1dd5fe) {
            _objc_msgSend(param_1,local_b8);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            uVar68 = _objc_msgSend(uVar67,PTR_s_headDisplay_0048ae58);
            _objc_msgSend(local_110,local_f8,local_118,param_1,
                          &PTR____CFConstantStringClassReference_0049fd00,local_128,uVar68);
            uVar68 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_b0,local_c8,uVar68);
            _objc_release(uVar68);
            _objc_release(uVar67);
            _objc_release(local_128);
            puVar73 = local_98;
            puVar61 = PTR_BubbleBoxUI_0048ca90;
            puVar59 = PTR_s_layoutSpace__0048ae60;
            *local_98 = &PTR____CFConstantStringClassReference_0049fd20;
            puVar73[1] = &PTR____CFConstantStringClassReference_0049fce0;
            _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar73,2);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_1,local_b8);
            uVar68 = _objc_retainAutoreleasedReturnValue();
            puVar60 = PTR_s_layoutSpace_0048ae68;
            uVar69 = _objc_msgSend(uVar68,PTR_s_layoutSpace_0048ae68);
            _objc_msgSend(puVar61,local_f8,puVar59,param_1,
                          &PTR____CFConstantStringClassReference_0049fd60,uVar67,uVar69);
            uVar69 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_b0,local_c8,uVar69);
            _objc_release(uVar69);
            _objc_release(uVar68);
            _objc_release(uVar67);
            _objc_msgSend(param_1,local_b8);
            uVar67 = _objc_retainAutoreleasedReturnValue();
            lVar70 = _objc_msgSend(uVar67,puVar60);
            _objc_release(uVar67);
            bVar65 = lVar70 == 1;
            iVar72 = -0x27423485;
            iVar66 = -0x2b5aea1f;
            param_2 = extraout_x1_34;
LAB_00130f5c:
            auVar41._8_8_ = param_2;
            auVar41._0_8_ = local_1f0;
            auVar75._8_8_ = param_2;
            auVar75._0_8_ = local_1f0;
            if (!bVar65) {
              iVar66 = iVar72;
              auVar75 = auVar41;
            }
          }
          else {
            if (local_22c == 0x4fab4a0c) {
              bVar65 = 0xf4df0903 <
                       ((DAT_004a15f0 | DAT_004a15f4 | 0x6e36c2e7) * 0x3ef2c229 & 0x8a7b822b);
              iVar66 = 0x660505dc;
              iVar72 = 0x406c816;
              auVar81 = auVar57;
              goto LAB_00130fc4;
            }
            if (local_22c != 0x5178043f) goto LAB_0012d350;
            iVar66 = 0x2a10bf9a;
            auVar75 = auVar18;
          }
        }
        else {
          if (local_22c < 0x5340e283) {
            if (local_22c == 0x521ab4f9) {
              uVar71 = DAT_004a1528 & DAT_004a152c;
              uVar67 = _objc_msgSend(local_e0,local_e8);
              _objc_msgSend(puStack_d0,local_c0,local_d8,param_1,
                            &PTR____CFConstantStringClassReference_0049fe80,uVar67,0);
              uVar67 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_b0,local_c8,uVar67);
              _objc_release(uVar67);
              _objc_release(local_e0);
              puVar73 = local_88;
              puVar61 = PTR_BubbleBoxUI_0048ca90;
              puVar59 = PTR_s_mergeMode__0048ae38;
              *local_88 = &PTR____CFConstantStringClassReference_0049fe60;
              puVar73[1] = &PTR____CFConstantStringClassReference_0049fdc0;
              local_f0 = PTR_s_arrayWithObjects_count__00489778;
              _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,
                            PTR_s_arrayWithObjects_count__00489778,puVar73,2);
              uVar67 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_1,local_b8);
              uVar68 = _objc_retainAutoreleasedReturnValue();
              puVar60 = PTR_s_mergeMode_0048ae40;
              uVar69 = _objc_msgSend(uVar68,PTR_s_mergeMode_0048ae40);
              local_f8 = PTR_s_segmentedCellForSel_target_title_0048a3b0;
              _objc_msgSend(puVar61,PTR_s_segmentedCellForSel_target_title_0048a3b0,puVar59,param_1,
                            &PTR____CFConstantStringClassReference_0049fda0,uVar67,uVar69);
              uVar69 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_b0,local_c8,uVar69);
              _objc_release(uVar69);
              _objc_release(uVar68);
              _objc_release(uVar67);
              _objc_msgSend(param_1,local_b8);
              uVar67 = _objc_retainAutoreleasedReturnValue();
              lVar70 = _objc_msgSend(uVar67,puVar60);
              local_f9 = lVar70 == 1;
              _objc_release(uVar67);
              auVar80._8_8_ = extraout_x1_20;
              auVar80._0_8_ = local_128;
              bVar65 = 0x3fedf87e < (uVar71 + 0xf3e1eab1) / 0x4a89b07d;
              iVar72 = -0x42a6c541;
              iVar66 = -0x7423bbff;
              goto LAB_0013114c;
            }
            if (local_22c == 0x532bef34) {
              uVar71 = (DAT_004a1540 - DAT_004a1544 ^ 0x1fed5f85U) * 0x34f1dec4 + 0x889b8044;
              bVar64 = 0x233dc2d5 < uVar71;
              bVar65 = uVar71 == 0x233dc2d6;
              iVar72 = -0x147fd045;
              goto LAB_0012f7f4;
            }
            goto LAB_0012d350;
          }
          iVar66 = -0x3a16b224;
          auVar75 = auVar16;
          if (local_22c != 0x5340e283) {
            if (local_22c != 0x54e5a10c) goto LAB_0012d350;
            DAT_0049e9f0 = DAT_0049e9d0 ^ 0x76;
            DAT_0049e9f1 = DAT_0049e9d1 ^ 0x54;
            DAT_0049e9f2 = DAT_0049e9d2 ^ 0x5e;
            DAT_0049e9f3 = DAT_0049e9d3 ^ 0xfe;
            DAT_0049e9f4 = DAT_0049e9d4 ^ 0xe3;
            DAT_0049e9f5 = DAT_0049e9d5 ^ 0xd2;
            DAT_0049e9f6 = ~DAT_0049e9d6;
            DAT_0049e9f7 = DAT_0049e9d7 ^ 0x1a;
            DAT_0049e9f8 = DAT_0049e9d8 ^ 0x2b;
            DAT_0049e9f9 = DAT_0049e9d9 ^ 0xef;
            DAT_0049e9fa = DAT_0049e9da ^ 0xe7;
            DAT_0049e9fb = DAT_0049e9db ^ 0xd0;
            DAT_0049e9fc = DAT_0049e9dc ^ 0x15;
            DAT_0049e9fd = DAT_0049e9dd ^ 0x58;
            DAT_0049e9fe = DAT_0049e9de ^ 200;
            DAT_0049e9ff = DAT_0049e9df ^ 9;
            DAT_0049ea00 = DAT_0049e9e0 ^ 0x8d;
            DAT_0049ea01 = DAT_0049e9e1 ^ 0x7d;
            DAT_0049ea02 = DAT_0049e9e2 ^ 0x90;
            DAT_0049ea03 = DAT_0049e9e3 ^ 0xf4;
            DAT_0049ea04 = DAT_0049e9e4 ^ 0xdc;
            DAT_0049ea05 = DAT_0049e9e5 ^ 0xa5;
            DAT_0049ea06 = DAT_0049e9e6 ^ 0x49;
            DAT_0049ea07 = DAT_0049e9e7 ^ 0x5b;
            DAT_0049ea08 = DAT_0049e9e8 ^ 0x94;
            DAT_0049ea09 = DAT_0049e9e9 ^ 0x16;
            DAT_0049faf8 = DAT_0049fae8 ^ 0xf278;
            DAT_0049fafa = DAT_0049faea ^ 0xbe80;
            DAT_0049fafc = DAT_0049faec ^ 0x2062;
            DAT_0049fafe = DAT_0049faee ^ 0x5cc7;
            DAT_0049fb00 = DAT_0049faf0 ^ 0x4558;
            DAT_0049fb02 = DAT_0049faf2 ^ 0xbbf9;
            DAT_0049fb04 = DAT_0049faf4 ^ 0xf99f;
            DAT_0049fb06 = DAT_0049faf6 ^ 0x9013;
            DAT_0049fa70 = DAT_0049f9f0 ^ 0x170f;
            DAT_0049fa72 = DAT_0049f9f2 ^ 0x7d90;
            DAT_0049fa74 = DAT_0049f9f4 ^ 0x6b6d;
            DAT_0049fa76 = DAT_0049f9f6 ^ 0xa0b3;
            DAT_0049fa78 = DAT_0049f9f8 ^ 0x67fa;
            DAT_0049fa7a = DAT_0049f9fa ^ 0xa6e1;
            DAT_0049fa7c = DAT_0049f9fc ^ 0xbb5a;
            DAT_0049fa7e = DAT_0049f9fe ^ 0x8411;
            DAT_0049fa80 = DAT_0049fa00 ^ 0x1fc5;
            DAT_0049fa82 = DAT_0049fa02 ^ 0x630d;
            DAT_0049fa84 = DAT_0049fa04 ^ 0x692c;
            DAT_0049fa86 = DAT_0049fa06 ^ 0xa4c4;
            DAT_0049fa88 = DAT_0049fa08 ^ 0x9407;
            DAT_0049fa8a = DAT_0049fa0a ^ 0x50f;
            DAT_0049fa8c = DAT_0049fa0c ^ 0xad5a;
            DAT_0049fa8e = DAT_0049fa0e ^ 0x9bb0;
            DAT_0049fa90 = DAT_0049fa10 ^ 0x3d80;
            DAT_0049fa92 = DAT_0049fa12 ^ 0x6548;
            DAT_0049fa94 = DAT_0049fa14 ^ 0x9ed5;
            DAT_0049fa96 = DAT_0049fa16 ^ 0x3a72;
            DAT_0049fa98 = DAT_0049fa18 ^ 0x925e;
            DAT_0049fa9a = DAT_0049fa1a ^ 0x5139;
            DAT_0049fa9c = DAT_0049fa1c ^ 0x4861;
            DAT_0049fa9e = DAT_0049fa1e ^ 0xb079;
            DAT_0049faa0 = DAT_0049fa20 ^ 0x2a04;
            DAT_0049faa2 = DAT_0049fa22 ^ 0x7b2e;
            DAT_0049faa4 = DAT_0049fa24 ^ 0x5752;
            DAT_0049faa6 = DAT_0049fa26 ^ 0x5155;
            DAT_0049faa8 = DAT_0049fa28 ^ 0x4c3;
            DAT_0049faaa = DAT_0049fa2a ^ 0xbd7c;
            DAT_0049faac = DAT_0049fa2c ^ 0x98c4;
            DAT_0049faae = DAT_0049fa2e ^ 0xcbeb;
            DAT_0049fab0 = DAT_0049fa30 ^ 0xbbe2;
            DAT_0049fab2 = DAT_0049fa32 ^ 0x3368;
            DAT_0049fab4 = DAT_0049fa34 ^ 0xaac9;
            DAT_0049fab6 = DAT_0049fa36 ^ 0xff1e;
            DAT_0049fab8 = DAT_0049fa38 ^ 0x2a72;
            DAT_0049faba = DAT_0049fa3a ^ 0xcb06;
            DAT_0049fabc = DAT_0049fa3c ^ 0x2ad6;
            DAT_0049fabe = DAT_0049fa3e ^ 0x9b6a;
            DAT_0049fac0 = DAT_0049fa40 ^ 0xdfda;
            DAT_0049fac2 = DAT_0049fa42 ^ 0x9933;
            DAT_0049fac4 = DAT_0049fa44 ^ 0x96e2;
            DAT_0049fac6 = DAT_0049fa46 ^ 0x8d58;
            DAT_0049fac8 = DAT_0049fa48 ^ 0x7d0d;
            DAT_0049faca = DAT_0049fa4a ^ 0x6627;
            DAT_0049facc = DAT_0049fa4c ^ 0x97f5;
            DAT_0049face = DAT_0049fa4e ^ 0x4443;
            DAT_0049fad0 = DAT_0049fa50 ^ 0x545;
            DAT_0049fad2 = DAT_0049fa52 ^ 0xf1c2;
            DAT_0049fad4 = DAT_0049fa54 ^ 0xdd0d;
            DAT_0049fad6 = DAT_0049fa56 ^ 0x2d03;
            local_7c = DAT_0049fa58 ^ 0x8af4;
            iVar66 = -0x287b01b3;
            auVar75 = auVar17;
          }
        }
        goto LAB_00131150;
      }
      if (0x586e7414 < local_22c) {
        if (local_22c < 0x5b1fefeb) {
          if (local_22c != 0x586e7415) {
            if (local_22c == 0x59aeb521) {
              bVar65 = 0x25da6e81 < ((DAT_004a1610 | DAT_004a1614) / 0x4068b2f) * 0x3f977e7e;
              iVar66 = -0x23f392db;
              iVar72 = 0x74ac37bf;
              auVar81 = auVar58;
              goto LAB_00130fc4;
            }
            goto LAB_0012d350;
          }
          iVar66 = 0x532bef34;
          auVar75 = auVar19;
        }
        else {
          if (local_22c == 0x5b1fefeb) {
            bVar65 = ((DAT_004a1620 ^ DAT_004a1624 ^ 0x15a816d4) + 0xf0987556 | 0x8c7effca) ==
                     0x54f99c9e;
            iVar72 = -0x582217eb;
            iVar66 = 0x4797cedc;
            goto LAB_00130f5c;
          }
          if (local_22c != 0x5b59877a) goto LAB_0012d350;
          _objc_release(local_198);
          auVar75._8_8_ = extraout_x1_11;
          auVar75._0_8_ = local_1f0;
          iVar66 = -0x11abfa8f;
        }
        goto LAB_00131150;
      }
      if (local_22c == 0x565834ac) {
        iVar66 = 0x4ef6924;
        auVar75 = auVar20;
        goto LAB_00131150;
      }
      if (local_22c == 0x56d56d5f) {
        uVar71 = 0;
        if (DAT_004a159c != 0) {
          uVar71 = DAT_004a1598 / DAT_004a159c;
        }
        uVar71 = uVar71 ^ 0x1427d160 | 0xc198069b;
        local_180 = PTR_s_referMessageMode_0048ae80;
        uVar67 = _objc_msgSend(local_178);
        _objc_msgSend(puStack_160,local_f8,local_168,param_1,
                      &PTR____CFConstantStringClassReference_0049fc00,local_170,uVar67);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,local_c8,uVar67);
        _objc_release(uVar67);
        _objc_release(local_178);
        _objc_release(local_170);
        _objc_msgSend(param_1,local_b8);
        uVar67 = _objc_retainAutoreleasedReturnValue();
        lVar70 = _objc_msgSend(uVar67,local_180);
        local_181 = lVar70 == 0;
        _objc_release(uVar67);
        auVar77._8_8_ = extraout_x1_35;
        auVar77._0_8_ = local_210;
        bVar64 = 0x4a28c17b < uVar71;
        bVar65 = uVar71 == 0x4a28c17c;
        iVar72 = -0x298d7f5c;
        iVar66 = -0x4ef557c;
        goto LAB_001310b8;
      }
      if (local_22c != 0x573aa70e) goto LAB_0012d350;
      uVar71 = ((DAT_004a1580 - DAT_004a1584) * -0xe4d42f0 | 0x4c30edf4U) / 0x4cfafb4e;
      bVar64 = 0x307076ee < uVar71;
      bVar65 = uVar71 == 0x307076ef;
      iVar72 = 0x39284523;
      iVar66 = 0xed816f9;
      auVar77 = auVar53;
    }
    else {
      if (local_22c < 0x66a6ffaf) {
        if (local_22c < 0x5f655774) {
          if (local_22c == 0x5c754c0b) {
            bVar65 = 0x5d116975 <
                     (((DAT_004a1530 | DAT_004a1534) ^ 0x66380940) & 0xe7782941 ^ 0xe848057);
            iVar72 = -0x7d57da0;
            iVar66 = 0x3b577005;
            auVar80 = auVar1;
            goto LAB_0013114c;
          }
          if (local_22c == 0x5d2e2d07) {
            iVar66 = 0xfe3cf30;
            auVar75 = auVar15;
          }
          else {
            if (local_22c != 0x5ed24259) goto LAB_0012d350;
LAB_00130c70:
            auVar75._8_8_ = param_2;
            auVar75._0_8_ = local_1f0;
            iVar66 = -0x144b4b59;
          }
        }
        else if (local_22c < 0x64bd5495) {
          if (local_22c == 0x5f655774) {
            iVar66 = 0x3331afb8;
            auVar75 = auVar14;
          }
          else {
            if (local_22c != 0x637e2f19) goto LAB_0012d350;
            *local_90 = &PTR____CFConstantStringClassReference_0049fcc0;
LAB_0012f784:
            auVar75._0_8_ = local_1f0;
            iVar66 = -0x46797ea6;
          }
        }
        else {
          if (local_22c != 0x64bd5495) {
            if (local_22c == 0x660505dc) {
              uVar71 = (uint)(DAT_004a15f8 - DAT_004a15fc) / 0x56be9e39 | 0xbfff5ff6;
              local_200 = PTR_s_referGuideTagText_0048aec0;
              puStack_1f8 = PTR_BubbleBoxUI_0048ca90;
              _objc_msgSend(param_1,local_b8);
              local_208 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_208,local_200);
              auVar77 = _objc_retainAutoreleasedReturnValue();
              bVar64 = 0x9b91f38 < uVar71;
              bVar65 = uVar71 == 0x9b91f39;
              iVar72 = 0x660505dc;
              iVar66 = 0x29b928a6;
              goto LAB_001310b8;
            }
            goto LAB_0012d350;
          }
          iVar66 = DAT_004a15b8 + DAT_004a15bc;
          _objc_msgSend(param_1,local_b8);
          auVar79 = _objc_retainAutoreleasedReturnValue();
          auVar80._8_8_ = auVar79._8_8_;
          auVar80._0_8_ = local_128;
          local_1a8 = auVar79._0_8_;
          bVar65 = 0xefa65cc7 < ((iVar66 + 0x209569e2U) / 0x35761bcb | 0x3dd3eb6e);
          iVar72 = -0xb5b7845;
          iVar66 = 0x3910c58b;
LAB_0013114c:
          auVar42._8_8_ = auVar80._8_8_;
          auVar42._0_8_ = local_1f0;
          auVar75._8_8_ = auVar80._8_8_;
          auVar75._0_8_ = local_1f0;
          local_128 = auVar80._0_8_;
          if (bVar65) {
            iVar66 = iVar72;
            auVar75 = auVar42;
          }
        }
        goto LAB_00131150;
      }
      if (0x7600a1a8 < local_22c) {
        if (local_22c < 0x79096e44) {
          if (local_22c != 0x7600a1a9) {
            if (local_22c == 0x77266f60) {
              uVar71 = DAT_004a1608 & DAT_004a160c;
              _objc_msgSend(puStack_1f8,local_1e8,local_200,param_1,
                            &PTR____CFConstantStringClassReference_0049fb20,local_210,0);
              local_218 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_b0,local_c8,local_218);
              auVar80._8_8_ = extraout_x1_03;
              auVar80._0_8_ = local_128;
              bVar65 = 0xf6b25375 < (uVar71 + 0x34812f11 | 0xbbfb834d);
              iVar72 = 0x77266f60;
              iVar66 = -0x1fe474de;
              goto LAB_0013114c;
            }
            goto LAB_0012d350;
          }
          iVar66 = 0x573aa70e;
          auVar75 = auVar12;
        }
        else {
          iVar66 = 0x5b1fefeb;
          auVar75 = auVar13;
          if (local_22c != 0x79096e44) {
            if (local_22c != 0x7d0231a5) goto LAB_0012d350;
            *local_a8 = &PTR____CFConstantStringClassReference_0049fbc0;
            puVar73[1] = &PTR____CFConstantStringClassReference_0049fc80;
            _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_f0,puVar73,2);
            _objc_retainAutoreleasedReturnValue();
            auVar75._8_8_ = extraout_x1_14;
            auVar75._0_8_ = local_1f0;
            iVar66 = -0x68443f6c;
          }
        }
        goto LAB_00131150;
      }
      if (0x6f0625fc < local_22c) {
        if (local_22c != 0x6f0625fd) {
          if (local_22c == 0x74ac37bf) {
            uVar71 = (DAT_004a1618 & DAT_004a161c ^ 0x313a8e85) + 0xaf26e47d & 0x474abb6f;
            _objc_release(local_218);
            _objc_release(local_210);
            _objc_release(local_208);
            auVar76._8_8_ = extraout_x1_13;
            auVar76._0_8_ = local_178;
            bVar64 = 0x9a49ca4b < uVar71;
            bVar65 = uVar71 == 0x9a49ca4c;
            iVar66 = -0x23f392db;
            iVar72 = 0x79096e44;
            goto LAB_00130a64;
          }
          goto LAB_0012d350;
        }
        _objc_msgSend(param_1,PTR_s_tableViewManager_00489dc8);
        auVar80 = _objc_retainAutoreleasedReturnValue();
        auVar75._8_8_ = auVar80._8_8_;
        auVar75._0_8_ = local_1f0;
        local_220 = auVar80._0_8_;
        local_228 = PTR_s_addSection__00489e80;
        iVar66 = 0x1d826be3;
        goto LAB_00131150;
      }
      if (local_22c == 0x66a6ffaf) {
        _objc_release(local_158);
        _objc_release(local_148);
        _objc_release(local_140);
        auVar75._8_8_ = extraout_x1_28;
        auVar75._0_8_ = local_1f0;
        iVar66 = -0x27423485;
        goto LAB_00131150;
      }
      if (local_22c != 0x68a42c46) goto LAB_0012d350;
      bVar64 = 0xdc1c568d < local_74;
      bVar65 = local_74 == 0xdc1c568e;
      iVar72 = -0x648b40c6;
      iVar66 = 0x1890efaf;
      auVar77 = auVar52;
    }
LAB_001310b8:
    local_210 = auVar77._0_8_;
    auVar46._8_8_ = auVar77._8_8_;
    auVar46._0_8_ = local_1f0;
    auVar75._8_8_ = auVar77._8_8_;
    auVar75._0_8_ = local_1f0;
    if (!bVar64 || bVar65) {
      iVar66 = iVar72;
      auVar75 = auVar46;
    }
  }
LAB_00131150:
  param_2 = auVar75._8_8_;
  local_1f0 = auVar75._0_8_;
  *local_238 = iVar66;
  goto LAB_0012d350;
}



// #####################################
// ##### shouldShowMessageTime: @ 002a1ae0
// #####################################

/* WARNING: Removing unreachable block (ram,0x002a4f94) */
/* Function Stack Size: 0x18 bytes */

bool BubbleBoxUtil::shouldShowMessageTime_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int iVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int local_1d8;
  byte local_1d1;
  long local_1d0;
  ID local_1c8;
  byte local_1b9;
  ID local_1b8;
  byte local_1aa;
  byte local_1a9;
  ID local_1a8;
  byte local_199;
  ID local_198;
  long local_190;
  ID local_188;
  byte local_179;
  undefined8 local_178;
  char local_169;
  undefined *local_168;
  long local_160;
  ID local_158;
  ID local_150;
  undefined *local_148;
  char local_139;
  undefined8 local_138;
  char local_129;
  undefined *local_128;
  char local_119;
  undefined *local_118;
  char local_109;
  long local_108;
  undefined *local_100;
  char local_f1;
  undefined *local_f0;
  int local_e4;
  undefined *local_e0;
  char local_d1;
  undefined *local_d0;
  char local_c1;
  long local_c0;
  char local_b1;
  long local_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined *local_98;
  char local_8a;
  char local_89;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  byte local_6f;
  byte local_6e;
  char local_6d;
  
  iVar23 = DAT_004d1a30;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_a8;
  local_1d8 = -0x4b8355eb;
LAB_002a1ba0:
  uVar27 = auVar29._8_8_;
  auVar31._8_8_ = uVar27;
  auVar31._0_8_ = local_108;
  auVar22._8_8_ = uVar27;
  auVar22._0_8_ = local_108;
  auVar21._8_8_ = uVar27;
  auVar21._0_8_ = local_108;
  auVar20._8_8_ = uVar27;
  auVar20._0_8_ = local_108;
  auVar19._8_8_ = uVar27;
  auVar19._0_8_ = local_108;
  auVar18._8_8_ = uVar27;
  auVar18._0_8_ = local_108;
  auVar30._8_8_ = uVar27;
  auVar30._0_8_ = local_138;
  auVar17._8_8_ = uVar27;
  auVar17._0_8_ = local_138;
  auVar16._8_8_ = uVar27;
  auVar16._0_8_ = local_138;
  auVar15._8_8_ = uVar27;
  auVar15._0_8_ = local_138;
  auVar14._8_8_ = uVar27;
  auVar14._0_8_ = local_138;
  local_a8 = auVar29._0_8_;
  if (-0x55b3b88 < local_1d8) {
    if (local_1d8 < 0x3acd2827) {
      if (local_1d8 < 0x1662da60) {
        if (local_1d8 < 0x49ce0c8) {
          if (local_1d8 < 0x1b48463) {
            if (local_1d8 < -0xb43706) {
              if (local_1d8 == -0x55b3b87) {
                _objc_msgSend(local_1b8,PTR_s_b_isCompleted_0048b668);
                uVar27 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar27,PTR_s_boolValue_0048b240);
                auVar29._8_8_ = extraout_x1_30;
                auVar29._0_8_ = local_a8;
                local_1d8 = -0x757e77e4;
              }
              else if (local_1d8 == -0x3c58c1a) {
                bVar24 = (DAT_004b8f40 | DAT_004b8f44) == 0xf199e919;
                local_1d8 = -0x3029afb3;
                iVar26 = -0x53652617;
                goto LAB_002a3f30;
              }
              goto LAB_002a1ba0;
            }
            if (local_1d8 == -0xb43706) {
              uVar28 = (DAT_004b8f28 + DAT_004b8f2c + 0x2f02fa33U | 0x323f34c5) ^ 0xbdd6b8e9;
              DAT_004d1a30 = 1;
              _objc_retain(param_3);
              bVar25 = 0xf2a2f90e < uVar28;
              bVar24 = uVar28 == 0xf2a2f90f;
              iVar26 = 0x3e2ef09a;
              uVar27 = extraout_x1_31;
              goto LAB_002a4e20;
            }
            if (local_1d8 != -0x5b2d4) goto LAB_002a1ba0;
            uVar28 = ((DAT_004b9058 & DAT_004b905c) + 0x663787e5 | 0xdc63d9fa) * -0x39975629;
            bVar25 = 0xf5b56c11 < uVar28;
            bVar24 = uVar28 == 0xf5b56c12;
            local_1d8 = -0x5b2d4;
            iVar26 = 0x734c6665;
          }
          else {
            if (0x2347f4d < local_1d8) {
              if (local_1d8 == 0x2347f4e) {
                iVar26 = -0x17fd9ee5;
                cVar1 = local_b1;
                goto LAB_002a466c;
              }
              if (local_1d8 == 0x32c93db) {
                _objc_msgSend(local_a8,PTR_s_currentBubble_0048a848);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(local_a8);
                auVar29._8_8_ = extraout_x1_34;
                auVar29._0_8_ = local_a8;
                local_1d8 = 0x3871088d;
              }
              else if (local_1d8 == 0x454670c) {
                _objc_msgSend(local_1b8,PTR_s_b_isLastMessage_0048b508);
                auVar30 = _objc_retainAutoreleasedReturnValue();
                auVar29._8_8_ = auVar30._8_8_;
                auVar29._0_8_ = local_a8;
                local_178 = auVar30._0_8_;
                local_1d8 = 0xd41df5c;
              }
              goto LAB_002a1ba0;
            }
            if (local_1d8 != 0x1b48463) {
              if (local_1d8 == 0x228c53f) {
                local_1d8 = -0x3c58c1a;
                cVar1 = local_89;
                goto LAB_002a504c;
              }
              goto LAB_002a1ba0;
            }
            uVar28 = ((DAT_004b90c0 ^ DAT_004b90c4) & 0x55863055) + 0x251169f1 ^ 0xf84f7176;
            bVar25 = 0x621638e2 < uVar28;
            bVar24 = uVar28 == 0x621638e3;
            local_1d8 = 0x24026079;
            iVar26 = -0x6ca1b38a;
          }
LAB_002a4f20:
          auVar8._8_8_ = uVar27;
          auVar8._0_8_ = local_a8;
          auVar29._8_8_ = uVar27;
          auVar29._0_8_ = local_a8;
          if (!bVar25 || bVar24) {
            local_1d8 = iVar26;
            auVar29 = auVar8;
          }
          goto LAB_002a1ba0;
        }
        if (0xb3b4894 < local_1d8) {
          if (local_1d8 < 0x117e4caa) {
            if (local_1d8 == 0xb3b4895) {
              local_1d8 = 0x5ecdba4;
            }
            else if ((local_1d8 == 0xd41df5c) &&
                    (local_1d8 = -0x690dd356, (DAT_004b90e0 & DAT_004b90e4) != 0x69368e51)) {
              local_1d8 = 0x3866ce08;
            }
          }
          else if (local_1d8 == 0x117e4caa) {
            local_d0 = PTR_s_enabledMsgTime_0048ad10;
            local_1d8 = -0x3214e48e;
          }
          else if (local_1d8 == 0x14e67522) {
            local_e4 = _objc_msgSend(param_3,local_e0);
            auVar29._8_8_ = extraout_x1_26;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x49ce0c8;
          }
          else if (local_1d8 == 0x15acdf8c) {
            bVar24 = ((DAT_004b8f10 + DAT_004b8f14 ^ 0x20d2c9ddU) + 0x16ab6b30 & 0x3b591f3f) ==
                     0x6f250bff;
            local_1d8 = -0x3e7db61f;
            iVar26 = 0x629c0f7a;
            goto LAB_002a4b2c;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < 0x5ecdba4) {
          if (local_1d8 == 0x49ce0c8) {
            local_1d8 = -0x3be5ac67;
            if (local_e4 != 0) {
              local_1d8 = -0x6c796c35;
            }
LAB_002a5050:
            local_1aa = 0;
          }
          else if (local_1d8 == 0x4b78597) {
            local_1d8 = -0x3a20b351;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == 0x5ecdba4) {
          bVar24 = 0x55c1ecc5 <
                   ((uint)((ulong)(DAT_004b8f80 & DAT_004b8f84) * 0xb8f7315 >> 0x3b) | 0x81cd7dae);
          iVar26 = -0x72664890;
          local_1d8 = 0x20bcf069;
          goto LAB_002a531c;
        }
        if (local_1d8 == 0x77f00d2) {
          local_1d8 = -0x6c796c35;
          if (local_109 == '\0') {
            local_1d8 = -0xeb01707;
          }
          goto LAB_002a4824;
        }
        if (local_1d8 != 0x9580687) goto LAB_002a1ba0;
        local_1b8 = local_188;
        uVar28 = 0;
        if (DAT_004b90d4 != 0) {
          uVar28 = DAT_004b90d0 / DAT_004b90d4;
        }
        bVar24 = 0xecd21d00 < (uVar28 + 0xfde9a648 ^ 0x64bd8d50);
        local_1d8 = -0x757e77e4;
        iVar26 = -0x55b3b87;
        auVar31 = auVar19;
      }
      else {
        if (local_1d8 < 0x24026079) {
          if (local_1d8 < 0x1de7694d) {
            if (local_1d8 < 0x1aaf0262) {
              if (local_1d8 == 0x1662da60) {
                _objc_msgSend(param_3,local_148);
                local_150 = _objc_retainAutoreleasedReturnValue();
                local_158 = param_3;
                if (local_150 != 0) {
                  local_158 = local_150;
                }
                _objc_retain();
                auVar29._8_8_ = extraout_x1_19;
                auVar29._0_8_ = local_a8;
                local_1d8 = -0x5d839895;
              }
              else if (local_1d8 == 0x19188008) {
                local_1d8 = -0x5ffa9940;
              }
            }
            else if (local_1d8 == 0x1aaf0262) {
              _objc_release(local_b0,uVar27);
              auVar29._8_8_ = extraout_x1_14;
              auVar29._0_8_ = local_a8;
              local_1d8 = -0x565e1cc1;
            }
            else {
              if (local_1d8 == 0x1d7369d5) {
                bVar24 = local_6d == '\0';
                iVar26 = -0x30d84230;
                local_1d8 = -0x16ab03fa;
                auVar30 = auVar14;
                goto LAB_002a502c;
              }
              if (local_1d8 == 0x1dbde4db) {
                bVar24 = 0xe0c9bc92 <
                         (uint)((ulong)(DAT_004b9020 & DAT_004b9024 ^ 0x24f3d196) * 0x581ed6d1 >>
                               0x3d);
                local_1d8 = 0x27cb0834;
                iVar26 = -0x3f5e9ffd;
                auVar31 = auVar18;
                goto LAB_002a4c48;
              }
            }
          }
          else if (local_1d8 < 0x1ef24739) {
            if (local_1d8 == 0x1de7694d) {
              _objc_release(local_1d0,uVar27);
              auVar29._8_8_ = extraout_x1_20;
              auVar29._0_8_ = local_a8;
              local_1d8 = 0x3ee7bea4;
            }
            else if (local_1d8 == 0x1dfd3ae6) {
              iVar26 = -0x6f468b98;
              cVar1 = local_c1;
LAB_002a466c:
              local_1d8 = 0x2498dc64;
              if (cVar1 == '\0') {
                local_1d8 = iVar26;
              }
              local_198 = local_a0;
              local_190 = local_b0;
              local_199 = 0;
            }
          }
          else if (local_1d8 == 0x1ef24739) {
            local_1d8 = -0x6882102e;
          }
          else if (local_1d8 == 0x20bcf069) {
            _objc_release(local_c0,uVar27);
            auVar29._8_8_ = extraout_x1_23;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x72664890;
          }
          else if (local_1d8 == 0x20dfc9a7) {
            local_98 = PTR_BubbleBoxConfig_0048c990;
            local_1d8 = 0x3b4e43a3;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < 0x2f23ba51) {
          if (local_1d8 < 0x27cb0834) {
            if (local_1d8 == 0x24026079) {
              local_148 = PTR_s_parentModel_0048b558;
              local_1d8 = -0x220e7159;
            }
            else if (local_1d8 == 0x2498dc64) {
              local_1b9 = local_199;
              local_1d0 = local_190;
              local_1c8 = local_198;
              local_1d8 = 0x3ee7bea4;
              if (((DAT_004b90f0 * DAT_004b90f4 ^ 0x6e8d43e6U) * 0x4b72bd5e | 0x5689c39f) ==
                  0x95ea86eb) {
                local_1d8 = 0x1de7694d;
              }
            }
          }
          else if (local_1d8 == 0x27cb0834) {
            local_109 = local_108 == 2;
            local_1d8 = 0x77f00d2;
          }
          else {
            if (local_1d8 == 0x2967f71c) {
              bVar24 = 0x931e14a8 < (DAT_004b9040 + DAT_004b9044) * 0x6c058e70 + 0xd8adcee5U;
              iVar26 = -0x598509f8;
              goto LAB_002a50f4;
            }
            if (local_1d8 == 0x2ce0643f) {
              local_1d8 = 0x7b1e5bc4;
            }
          }
          goto LAB_002a1ba0;
        }
        if (0x356a99e3 < local_1d8) {
          if (local_1d8 == 0x356a99e4) {
            _objc_msgSend(local_80,local_128);
            auVar29._8_8_ = extraout_x1_15;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x4e534c6c;
          }
          else if (local_1d8 == 0x3866ce08) {
            uVar28 = DAT_004b90e8 | DAT_004b90ec;
            local_179 = _objc_msgSend(local_178,local_168);
            _objc_release(local_178);
            auVar2._8_8_ = extraout_x1_24;
            auVar2._0_8_ = local_a8;
            auVar29._8_8_ = extraout_x1_24;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3acd2827;
            if ((uVar28 ^ 0x277c075c) * -0x3d9b95de == 0x7de29974) {
              local_1d8 = 0x3866ce08;
              auVar29 = auVar2;
            }
          }
          else if (local_1d8 == 0x3871088d) {
            uVar28 = (DAT_004b8f68 + DAT_004b8f6c ^ 0xfd96f59cU) * -0x6f2d2a7 + 0x720b63b3;
            _objc_msgSend(local_a8,PTR_s_currentBubble_0048a848);
            local_b0 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_a8);
            local_b1 = local_b0 == 0;
            bVar25 = 0xad79996f < uVar28;
            bVar24 = uVar28 == 0xad799970;
            local_1d8 = 0x3871088d;
            iVar26 = 0x6e56f606;
            uVar27 = extraout_x1_03;
            goto LAB_002a4f20;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == 0x2f23ba51) {
          local_1d8 = 0x2498dc64;
          local_199 = local_179;
          local_190 = local_160;
          local_198 = local_1b8;
          goto LAB_002a1ba0;
        }
        if (local_1d8 != 0x2f24c61e) goto LAB_002a1ba0;
        uVar28 = DAT_004b9018 ^ DAT_004b901c;
        auVar31 = _objc_msgSend(local_80,local_100);
        bVar24 = 0x5a5344e4 < (uVar28 + 0x59735185 & 0x888ea97b) + 0xd69540b3;
        local_1d8 = 0x2f24c61e;
        iVar26 = 0x3ca7e41d;
      }
    }
    else {
      if (0x5569cb39 < local_1d8) {
        if (0x6da0609c < local_1d8) {
          if (local_1d8 < 0x7a0d1725) {
            if (local_1d8 < 0x734c6665) {
              if (local_1d8 == 0x6da0609d) {
                DAT_004d1a10 = '\x01';
                local_1d8 = -0x76900a51;
                if (((DAT_004b8fa8 - DAT_004b8fac) + 0x1ed4379fU & 0x6a50c400) < 0x800cf6a) {
                  local_1d8 = 0x6da0609d;
                }
              }
              else if (local_1d8 == 0x6e56f606) {
                local_1d8 = 0x2347f4e;
              }
            }
            else if (local_1d8 == 0x734c6665) {
              local_1d8 = 0x49cb1331;
              cVar1 = local_119;
LAB_002a464c:
              if (cVar1 == '\0') {
                local_1d8 = -0x6c796c35;
              }
LAB_002a4824:
              local_1aa = 1;
            }
            else if (local_1d8 == 0x745ae111) {
              iVar26 = DAT_004b9048 + DAT_004b904c;
              local_119 = _objc_msgSend(local_80,local_118);
              bVar24 = 0x66688fe5 < (iVar26 * -0x736b55b0 | 0xd6e91bafU) + 0xf0a20576;
              iVar26 = -0x295b397c;
              uVar27 = extraout_x1_33;
LAB_002a50f4:
              auVar10._8_8_ = uVar27;
              auVar10._0_8_ = local_a8;
              auVar29._8_8_ = uVar27;
              auVar29._0_8_ = local_a8;
              local_1d8 = 0x745ae111;
              if (bVar24) {
                local_1d8 = iVar26;
                auVar29 = auVar10;
              }
            }
            else if (local_1d8 == 0x74f72cfa) {
              local_1d8 = -0x5942e29a;
            }
          }
          else if (local_1d8 < 0x7c366f89) {
            if (local_1d8 == 0x7a0d1725) {
              local_1d8 = 0x7c366f89;
            }
            else if (local_1d8 == 0x7b1e5bc4) {
              DAT_004b67bd = local_6f;
              DAT_004b67be = DAT_004b679e ^ 0xdc;
              DAT_004b67bf = DAT_004b679f ^ 0x98;
              DAT_004b67c0 = DAT_004b67a0 ^ 0x4c;
              DAT_004b67c1 = DAT_004b67a1 ^ 0xf1;
              DAT_004b67c2 = DAT_004b67a2 ^ 0xf5;
              DAT_004b67c3 = DAT_004b67a3 ^ 0x72;
              DAT_004b67c4 = DAT_004b67a4 ^ 0xb7;
              DAT_004b67c5 = DAT_004b67a5 ^ 0xf1;
              DAT_004b67c6 = DAT_004b67a6 ^ 0xc0;
              DAT_004b67c7 = DAT_004b67a7 ^ 0x8e;
              local_1d8 = -0x30d84230;
            }
          }
          else if (local_1d8 == 0x7c366f89) {
            _objc_release(local_a0,uVar27);
            auVar29._8_8_ = extraout_x1_37;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x117e4caa;
          }
          else {
            if (local_1d8 == 0x7da9dfe5) {
              local_88 = PTR_s_enabled_0048a890;
              local_89 = _objc_msgSend(local_80);
              bVar24 = false;
              local_1d8 = -0x1ad280af;
              iVar26 = 0x228c53f;
              uVar27 = extraout_x1_05;
              goto LAB_002a4b2c;
            }
            if (local_1d8 == 0x7cb19c3c) {
              return (bool)local_1d1;
            }
          }
          goto LAB_002a1ba0;
        }
        if (0x62077e6c < local_1d8) {
          if (local_1d8 < 0x6701d804) {
            if (local_1d8 == 0x62077e6d) {
              local_1d8 = -0x5167d16a;
              cVar1 = local_d1;
LAB_002a504c:
              if (cVar1 == '\0') {
                local_1d8 = -0x6c796c35;
              }
              goto LAB_002a5050;
            }
            if (local_1d8 == 0x629c0f7a) {
              uVar28 = (DAT_004b8f18 | DAT_004b8f1c) + 0xa875942e ^ 0x7722f07d;
              DAT_004b67b3 = local_6e ^ 3;
              DAT_004b67b4 = DAT_004b6794 ^ 0x15;
              DAT_004b67b5 = DAT_004b6795 ^ 0xb2;
              DAT_004b67b6 = DAT_004b6796 ^ 0x3a;
              DAT_004b67b7 = DAT_004b6797 ^ 0x95;
              DAT_004b67b8 = DAT_004b6798 ^ 0xa0;
              DAT_004b67b9 = DAT_004b6799 ^ 0x3c;
              DAT_004b67ba = DAT_004b679a ^ 0xef;
              DAT_004b67bb = DAT_004b679b ^ 0x28;
              DAT_004b67bc = DAT_004b679c ^ 5;
              local_6f = DAT_004b679d ^ 0xa3;
              bVar25 = 0x8e3a979c < uVar28;
              bVar24 = uVar28 == 0x8e3a979d;
              iVar26 = -0x3e7db61f;
              local_1d8 = 0x2ce0643f;
              goto LAB_002a4af4;
            }
          }
          else if (local_1d8 == 0x6701d804) {
            _objc_msgSend(param_3,PTR_s_chatContact_0048b658);
            _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = extraout_x1_25;
            auVar29._0_8_ = local_a8;
          }
          else if (local_1d8 == 0x69fbc876) {
            iVar26 = DAT_004b90b8 * DAT_004b90bc;
            uVar27 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b67d0);
            local_139 = _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar27);
            auVar4._8_8_ = extraout_x1_35;
            auVar4._0_8_ = local_a8;
            auVar29._8_8_ = extraout_x1_35;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x77244c3f;
            if (0x5124eb2a < (iVar26 * -0x74256734 & 0x3b53e78U) + 0xab8c32d) {
              local_1d8 = -0x202dbab8;
              auVar29 = auVar4;
            }
          }
          else if (local_1d8 == 0x6b81d875) {
            local_78 = PTR_s_shared_00489458;
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990);
            auVar30 = _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = auVar30._8_8_;
            auVar29._0_8_ = local_a8;
            local_80 = auVar30._0_8_;
            local_1d8 = -0x70d3c39b;
          }
          goto LAB_002a1ba0;
        }
        if (0x5853f5a5 < local_1d8) {
          if (local_1d8 == 0x5853f5a6) {
            bVar24 = (uint)((ulong)(DAT_004b9098 - DAT_004b909c & 0xe94feff0) * 0x25ec3d61 >> 0x3d)
                     == 0xbc3b54c2;
            iVar26 = 0x5853f5a6;
            local_1d8 = -0x28aedf8d;
            auVar30 = auVar15;
            goto LAB_002a502c;
          }
          if (local_1d8 == 0x59b3eb12) {
            local_1d8 = 0x2967f71c;
          }
          else if (local_1d8 == 0x60258d3c) {
            iVar26 = DAT_004b8fe8 + DAT_004b8fec;
            local_f1 = _objc_msgSend(local_80,local_f0);
            auVar31._8_8_ = extraout_x1_00;
            bVar24 = 0x7af0481f < (iVar26 + 0xb819452dU ^ 0xcf27dacd);
            local_1d8 = 0x60258d3c;
            iVar26 = 0x482847a9;
            goto LAB_002a4c48;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != 0x5569cb3a) {
          if (local_1d8 == 0x57b9a937) {
            local_1d8 = -0x3532b923;
          }
          goto LAB_002a1ba0;
        }
        local_128 = PTR_s_enabledMergeOnlyRoom_0048ae30;
        bVar24 = (uint)((ulong)(DAT_004b9068 - DAT_004b906c & 0x52a21de6) * 0x6c1437f >> 0x39) ==
                 0x3a9b6e0b;
        iVar26 = -0x30531c23;
        local_1d8 = -0x4727214d;
        auVar30 = auVar16;
LAB_002a502c:
        local_138 = auVar30._0_8_;
        auVar13._8_8_ = auVar30._8_8_;
        auVar13._0_8_ = local_a8;
        auVar29._8_8_ = auVar30._8_8_;
        auVar29._0_8_ = local_a8;
        if (bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar13;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < 0x47625ecf) {
        if (local_1d8 < 0x3ce757c8) {
          if (local_1d8 < 0x3b7265c0) {
            if (local_1d8 == 0x3acd2827) {
              local_1d8 = 0x2f23ba51;
            }
            else if (local_1d8 == 0x3b4e43a3) {
              _objc_msgSend(local_98,local_78);
              auVar30 = _objc_retainAutoreleasedReturnValue();
              auVar29._8_8_ = auVar30._8_8_;
              auVar29._0_8_ = local_a8;
              local_a0 = auVar30._0_8_;
              local_1d8 = -0x295672dc;
            }
          }
          else if (local_1d8 == 0x3b7265c0) {
            local_1d8 = -0x667ca4bb;
            local_1a8 = local_1c8;
            local_1a9 = local_1b9;
          }
          else if (local_1d8 == 0x3ca7e41d) {
            local_1d8 = 0x1dbde4db;
          }
        }
        else if (local_1d8 < 0x3eddaef9) {
          if (local_1d8 == 0x3ce757c8) {
            DAT_004d1a10 = '\x01';
            local_1d8 = 0x6da0609d;
          }
          else if (local_1d8 == 0x3e2ef09a) {
            local_1d8 = 0x6b81d875;
          }
        }
        else if (local_1d8 == 0x3eddaef9) {
          uVar28 = DAT_004b8f78 - DAT_004b8f7c;
          _objc_msgSend(local_b0,PTR_s_name_0048a060);
          auVar30 = _objc_retainAutoreleasedReturnValue();
          auVar3._8_8_ = auVar30._8_8_;
          auVar3._0_8_ = local_a8;
          auVar29._8_8_ = auVar30._8_8_;
          auVar29._0_8_ = local_a8;
          local_c0 = auVar30._0_8_;
          local_c1 = local_c0 == 0;
          local_1d8 = 0x3eddaef9;
          if (0x296e87b4 < (uVar28 & 0xa0ddb4ba) + 0x44ade1ff) {
            local_1d8 = 0xb3b4895;
            auVar29 = auVar3;
          }
        }
        else if (local_1d8 == 0x3ee7bea4) {
          _objc_release(local_1d0,uVar27);
          auVar29._8_8_ = extraout_x1_32;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x3b7265c0;
        }
        else if (local_1d8 == 0x46d468fc) {
          local_1d8 = 0x14e67522;
        }
        goto LAB_002a1ba0;
      }
      if (0x4caf5d21 < local_1d8) {
        if (local_1d8 < 0x4f1b527c) {
          if (local_1d8 != 0x4caf5d22) {
            if (local_1d8 == 0x4e534c6c) {
              uVar28 = DAT_004b9078 - DAT_004b907c;
              local_129 = _objc_msgSend(local_80,local_128);
              auVar31._8_8_ = extraout_x1_08;
              bVar24 = 0x5e788db5 < ((uVar28 | 0x14cc68c7) + 0xb4444d9c & 0xd054745b);
              local_1d8 = 0x356a99e4;
              iVar26 = -0x75c8c75f;
              goto LAB_002a4c48;
            }
            goto LAB_002a1ba0;
          }
          uVar28 = (DAT_004b90a8 | DAT_004b90ac | 0xfff6ff9b) ^ 0x5bff384;
          _objc_retain(param_3);
          bVar25 = 0xb10d253a < uVar28;
          bVar24 = uVar28 == 0xb10d253b;
          iVar26 = 0x47625ecf;
          local_1d8 = -0x66e39b31;
          uVar27 = extraout_x1_18;
        }
        else {
          if (local_1d8 == 0x4f1b527c) {
            iVar26 = _objc_msgSend(local_138,PTR_s_isChatroom_0048b660);
            _objc_release(local_138);
            auVar29._8_8_ = extraout_x1_13;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x1ab5e59c;
            if (iVar26 == 0) {
              local_1d8 = -0x6c796c35;
            }
            local_1aa = 1;
            goto LAB_002a1ba0;
          }
          if (local_1d8 == 0x51e47feb) {
            _objc_release(local_80,uVar27);
            _objc_release(param_3);
            auVar29._8_8_ = extraout_x1_22;
            auVar29._0_8_ = local_a8;
            goto LAB_002a1ba0;
          }
          if (local_1d8 != 0x53abc420) goto LAB_002a1ba0;
          uVar28 = (DAT_004b9070 + DAT_004b9074 | 0x54cf456dU) * 0x7ed9f162 + 0xf47c7630;
          bVar25 = 0xfae9c7b1 < uVar28;
          bVar24 = uVar28 == 0xfae9c7b2;
          iVar26 = 0x4e534c6c;
          local_1d8 = 0x356a99e4;
        }
LAB_002a4af4:
        auVar11._8_8_ = uVar27;
        auVar11._0_8_ = local_a8;
        auVar29._8_8_ = uVar27;
        auVar29._0_8_ = local_a8;
        if (!bVar25 || bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar11;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < 0x49cb1331) {
        if (local_1d8 == 0x47625ecf) {
          _objc_retain(param_3);
          auVar29._8_8_ = extraout_x1_17;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x4caf5d22;
        }
        else if (local_1d8 == 0x482847a9) {
          local_1d8 = -0x49a4cfe0;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != 0x49cb1331) {
        if (local_1d8 == 0x4b4fa4ec) {
          local_1d8 = -0x12145ed7;
        }
        else if (local_1d8 == 0x4baceb4e) {
          local_1d8 = -0x352df735;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b9064 != 0) {
        uVar28 = DAT_004b9060 / DAT_004b9064;
      }
      bVar24 = 0x2242a77b < ((uVar28 | 0x3d2b0a56) ^ 0x7cf2cd46) + 0x59a8299;
      local_1d8 = -0x30531c23;
      iVar26 = 0x5569cb3a;
      auVar31 = auVar20;
    }
LAB_002a4c48:
    local_108 = auVar31._0_8_;
    auVar12._8_8_ = auVar31._8_8_;
    auVar12._0_8_ = local_a8;
    auVar29._8_8_ = auVar31._8_8_;
    auVar29._0_8_ = local_a8;
    if (bVar24) {
      local_1d8 = iVar26;
      auVar29 = auVar12;
    }
    goto LAB_002a1ba0;
  }
  if (local_1d8 < -0x3e565236) {
    if (local_1d8 < -0x5fffda92) {
      if (local_1d8 < -0x6ca1b38a) {
        if (local_1d8 < -0x745971b1) {
          if (local_1d8 < -0x75c8c75f) {
            if (local_1d8 == -0x77244c3f) {
              local_1d8 = -0xae864ec;
            }
            else if (local_1d8 == -0x76900a51) {
              local_1d8 = -0x5b70860f;
            }
          }
          else if (local_1d8 == -0x75c8c75f) {
            local_1d8 = -0xe35fa38;
          }
          else if (local_1d8 == -0x757e77e4) {
            uVar28 = 0;
            if (DAT_004b90dc != 0) {
              uVar28 = DAT_004b90d8 / DAT_004b90dc;
            }
            _objc_msgSend(local_1b8,PTR_s_b_isCompleted_0048b668);
            local_160 = _objc_retainAutoreleasedReturnValue();
            local_168 = PTR_s_boolValue_0048b240;
            local_169 = _objc_msgSend();
            auVar31._8_8_ = extraout_x1_09;
            bVar24 = 0x4f91f1bf < ((uVar28 & 0x4df7fb2) + 0x67e1f777 | 0xef3765a0);
            local_1d8 = -0x757e77e4;
            iVar26 = -0x339affd6;
            goto LAB_002a4c48;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < -0x70d3c39b) {
          if (local_1d8 == -0x745971b1) {
            uVar28 = ((DAT_004b8f00 - DAT_004b8f04) + 0xdbccd432U & 0xe441841) + 0x733cdedf;
            bVar25 = 0x9ce79bcc < uVar28;
            bVar24 = uVar28 == 0x9ce79bcd;
            local_1d8 = -0xea7b7fc;
            iVar26 = -0x629efc3b;
            goto LAB_002a4f20;
          }
          if (local_1d8 == -0x72664890) {
            _objc_release(local_c0,uVar27);
            auVar29._8_8_ = extraout_x1_10;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x19188008;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == -0x70d3c39b) {
          uVar28 = (uint)((ulong)((DAT_004b8f30 & DAT_004b8f34) + 0x35ab6552) * 0x3aca542f >> 0x3d)
                   | 0x61f40d82;
          bVar25 = 0x33d32503 < uVar28;
          bVar24 = uVar28 == 0x33d32504;
          iVar26 = -0x1ad280af;
          local_1d8 = 0x7da9dfe5;
          goto LAB_002a4af4;
        }
        if (local_1d8 == -0x6f468b98) {
          local_1d8 = 0x6da0609d;
          if ((DAT_004b8fa0 ^ DAT_004b8fa4) * 0x1d1352db + 0x9303c84b < 0x774505a3) {
            local_1d8 = 0x3ce757c8;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != -0x6d89edbe) goto LAB_002a1ba0;
        bVar24 = 0xf7b6e8e < ((DAT_004b8fe0 | DAT_004b8fe4) * 0x5d1fd7a7 + 0x4625e563) / 0x1cc19ced;
        local_1d8 = 0x60258d3c;
        iVar26 = -0x10a654c5;
      }
      else {
        if (-0x66e39b32 < local_1d8) {
          if (local_1d8 < -0x65da0ecd) {
            if (local_1d8 == -0x66e39b31) {
              local_1d8 = -0x3fcd6949;
            }
            else if (local_1d8 == -0x667ca4bb) {
              local_1aa = local_1a9;
              _objc_release(local_1a8,uVar27);
              auVar29._8_8_ = extraout_x1_07;
              auVar29._0_8_ = local_a8;
              local_1d8 = -0x6c796c35;
            }
            goto LAB_002a1ba0;
          }
          if (local_1d8 == -0x65da0ecd) {
            local_1d8 = -0x60656bbe;
            cVar1 = local_f1;
            goto LAB_002a464c;
          }
          if (local_1d8 != -0x629efc3b) {
            if (local_1d8 == -0x60656bbe) {
              local_1d8 = -0x5942e29a;
            }
            goto LAB_002a1ba0;
          }
          bVar24 = (uint)(DAT_004b8f08 - DAT_004b8f0c) / 0x2e6434ba == 0x8bde2ad8;
          iVar26 = -0xea7b7fc;
          local_1d8 = 0x1d7369d5;
          goto LAB_002a502c;
        }
        if (local_1d8 < -0x690f9f40) {
          if (local_1d8 == -0x6ca1b38a) {
            local_1d8 = 0x24026079;
          }
          else if (local_1d8 == -0x6c796c35) {
            local_1d1 = local_1aa;
            local_1d8 = -0x3e565236;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != -0x690f9f40) {
          if (local_1d8 == -0x690dd356) {
            _objc_msgSend(local_178,local_168);
            _objc_release(local_178);
            auVar29._8_8_ = extraout_x1_21;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3866ce08;
          }
          else if (local_1d8 == -0x6882102e) {
            bVar24 = ((DAT_004b8ff8 | DAT_004b8ffc) & 0x538a2934) == 0x35a0f2e5;
            local_1d8 = -0x6882102e;
            iVar26 = -0x65da0ecd;
            goto LAB_002a4b2c;
          }
          goto LAB_002a1ba0;
        }
        uVar28 = 0;
        if (DAT_004b9084 != 0) {
          uVar28 = DAT_004b9080 / DAT_004b9084;
        }
        bVar24 = 0x47d5dcaa < (uVar28 & 0x68014a0) * -0x2cd891b5;
        local_1d8 = -0x42d5c918;
        iVar26 = 0x6701d804;
        auVar31 = auVar22;
      }
      goto LAB_002a4c48;
    }
    if (local_1d8 < -0x5167d16a) {
      if (local_1d8 < -0x5b70860f) {
        if (local_1d8 < -0x5d839895) {
          if (local_1d8 == -0x5fffda92) {
            DAT_004d1a30 = 1;
            _objc_retain(param_3);
            auVar29._8_8_ = extraout_x1_27;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0xb43706;
          }
          else if ((local_1d8 == -0x5ffa9940) &&
                  (local_1d8 = -0x2d3839ff,
                  (((DAT_004b8f90 | DAT_004b8f94) ^ 0x25848820) & 0xaffc9960) < 0x4dad3c1f)) {
            local_1d8 = -0x2678bed7;
          }
        }
        else if (local_1d8 == -0x5d839895) {
          _objc_release(param_3,uVar27);
          _objc_release(local_150);
          auVar29._8_8_ = extraout_x1_28;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x9580687;
          local_188 = local_158;
        }
        else if (local_1d8 == -0x5ce1d068) {
          uVar28 = (int)((long)((ulong)(uint)(DAT_004b8fc0 * DAT_004b8fc4) * 0xc1549223) >> 0x3f) *
                   0x58ceacd + 0x61637bfc;
          bVar25 = 0xbb576a31 < uVar28;
          bVar24 = uVar28 == 0xbb576a32;
          iVar26 = -0x12145ed7;
          local_1d8 = 0x4b4fa4ec;
          goto LAB_002a4af4;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x5942e29a) {
        if (local_1d8 == -0x5b70860f) {
          uVar28 = 0;
          if (DAT_004b8fb4 != 0) {
            uVar28 = DAT_004b8fb0 / DAT_004b8fb4;
          }
          local_1d8 = 0x1aaf0262;
          if (0x1958d135 < uVar28 * -0x368d89c8 + 0x1c068900) {
            local_1d8 = -0x565e1cc1;
          }
        }
        else if (local_1d8 == -0x598509f8) {
          _objc_msgSend(local_80,local_118);
          auVar29._8_8_ = extraout_x1_11;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x745ae111;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x5942e29a) {
        if (local_1d8 == -0x565e1cc1) {
          uVar28 = DAT_004b8fb8 ^ DAT_004b8fbc;
          _objc_release(local_b0,uVar27);
          auVar5._8_8_ = extraout_x1_29;
          auVar5._0_8_ = local_a8;
          auVar29._8_8_ = extraout_x1_29;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x7a0d1725;
          if ((uVar28 + 0x9a602ccf | 0x1d8b8ab2) == 0xb3cf92da) {
            local_1d8 = -0x565e1cc1;
            auVar29 = auVar5;
          }
        }
        else if (local_1d8 == -0x53652617) {
          local_1d8 = -0x3029afb3;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b900c != 0) {
        uVar28 = DAT_004b9008 / DAT_004b900c;
      }
      local_100 = PTR_s_msgTimeDisplay_00489ef0;
      bVar24 = uVar28 * -0x4f543a10 == 0x2e03bac2;
      local_1d8 = 0x74f72cfa;
      iVar26 = 0x4b78597;
    }
    else {
      if (local_1d8 < -0x4727214d) {
        if (local_1d8 < -0x4b8355eb) {
          if (local_1d8 == -0x5167d16a) {
            bVar24 = ((DAT_004b8fd0 + DAT_004b8fd4 | 0x3a155f14U) * -0x1ac804f2 & 0x6cb516dc) ==
                     0x84992e7c;
            local_1d8 = -0x3532b923;
            iVar26 = 0x57b9a937;
            goto LAB_002a3f30;
          }
          if (local_1d8 == -0x4d6c0744) {
            _objc_msgSend(local_b0,PTR_s_name_0048a060);
            _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = extraout_x1_06;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3eddaef9;
          }
        }
        else if (local_1d8 == -0x4b8355eb) {
          local_6d = iVar23 == 0;
          local_1d8 = -0x745971b1;
        }
        else if (local_1d8 == -0x49a4cfe0) {
          bVar24 = DAT_004b8ff0 - DAT_004b8ff4 == -0x5c8f59cf;
          iVar26 = -0x6882102e;
          local_1d8 = 0x1ef24739;
LAB_002a4800:
          if (!bVar24) {
            local_1d8 = iVar26;
          }
        }
        else if (local_1d8 == -0x492f0672) {
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_78);
          auVar29 = _objc_retainAutoreleasedReturnValue();
          local_1d8 = -0x13c8c91d;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x3fcd6949) {
        if (local_1d8 == -0x4727214d) {
          local_1d8 = 0x53abc420;
        }
        else if (local_1d8 == -0x42d5c918) {
          uVar28 = 0;
          if (DAT_004b908c != 0) {
            uVar28 = DAT_004b9088 / DAT_004b908c;
          }
          _objc_msgSend(param_3,PTR_s_chatContact_0048b658);
          auVar30 = _objc_retainAutoreleasedReturnValue();
          bVar24 = ((uVar28 ^ 0xd1655c2) + 0xdfe793fc & 0xccf050e0) == 0x55c7ce98;
          iVar26 = -0x42d5c918;
          local_1d8 = -0x29b471c1;
          goto LAB_002a502c;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3fcd6949) {
        if (local_1d8 == -0x3f5e9ffd) {
          local_1d8 = 0x27cb0834;
        }
        else if (local_1d8 == -0x3e7db61f) {
          DAT_004b67b3 = local_6e ^ 3;
          DAT_004b67b4 = DAT_004b6794 ^ 0x15;
          DAT_004b67b5 = DAT_004b6795 ^ 0xb2;
          DAT_004b67b6 = DAT_004b6796 ^ 0x3a;
          DAT_004b67b7 = DAT_004b6797 ^ 0x95;
          DAT_004b67b8 = DAT_004b6798 ^ 0xa0;
          DAT_004b67b9 = DAT_004b6799 ^ 0x3c;
          DAT_004b67ba = DAT_004b679a ^ 0xef;
          DAT_004b67bb = DAT_004b679b ^ 0x28;
          DAT_004b67bc = DAT_004b679c ^ 5;
          local_1d8 = 0x629c0f7a;
        }
        goto LAB_002a1ba0;
      }
      bVar24 = (DAT_004b90b0 - DAT_004b90b4 & 0x4e380f8U ^ 0x10a9ad3f) * -0x7d413e48 == 0x310a1809;
      local_1d8 = -0x202dbab8;
      iVar26 = 0x69fbc876;
    }
  }
  else if (local_1d8 < -0x23472448) {
    if (local_1d8 < -0x30d84230) {
      if (local_1d8 < -0x369afd4b) {
        if (local_1d8 < -0x3a20b351) {
          if (local_1d8 != -0x3e565236) {
            if (local_1d8 == -0x3be5ac67) {
              local_f0 = PTR_s_msgTimeOnlyLast_0048ad38;
              local_1d8 = -0x6d89edbe;
            }
            goto LAB_002a1ba0;
          }
          uVar28 = DAT_004b9108 - DAT_004b910c;
          _objc_release(local_80,uVar27);
          _objc_release(param_3);
          bVar24 = 0xf88796af < (uVar28 ^ 0x88ed2b4c) * -0x58dd21f7;
          iVar26 = 0x51e47feb;
          local_1d8 = 0x7cb19c3c;
          uVar27 = extraout_x1_36;
        }
        else {
          if (local_1d8 != -0x3a20b351) {
            if (local_1d8 == -0x36ffc7bf) {
              local_1d8 = -0x902611d;
            }
            goto LAB_002a1ba0;
          }
          bVar24 = 0x29de5186 <
                   ((DAT_004b9010 - DAT_004b9014) + 0x2f2bae33U ^ 0xadbefdc0) + 0x488be40d;
          iVar26 = 0x2f24c61e;
          local_1d8 = -0x25845f8b;
        }
LAB_002a531c:
        auVar6._8_8_ = uVar27;
        auVar6._0_8_ = local_a8;
        auVar29._8_8_ = uVar27;
        auVar29._0_8_ = local_a8;
        if (bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar6;
        }
        goto LAB_002a1ba0;
      }
      if (-0x352df736 < local_1d8) {
        if (local_1d8 == -0x352df735) {
          local_118 = PTR_s_enabledMerge_0048ae20;
          bVar24 = 0x168f11da <
                   ((DAT_004b9038 + DAT_004b903c) * 0x4f32ed87 & 0xff448faaU) + 0xa4de73de;
          local_1d8 = -0x352df735;
          iVar26 = 0x59b3eb12;
          auVar31 = auVar21;
          goto LAB_002a4c48;
        }
        if (local_1d8 == -0x339affd6) {
          local_1d8 = 0x454670c;
          if (local_169 == '\0') {
            local_1d8 = 0x2498dc64;
          }
          local_198 = local_1b8;
          local_190 = local_160;
          local_199 = 1;
        }
        else if (local_1d8 == -0x3214e48e) {
          local_d1 = _objc_msgSend(local_80,local_d0);
          auVar29._8_8_ = extraout_x1_02;
          auVar29._0_8_ = local_a8;
          local_1d8 = -0x5ce1d068;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x369afd4b) {
        local_1d8 = 0x5853f5a6;
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3532b923) goto LAB_002a1ba0;
      local_e0 = PTR_s_viewModelScene_0048b4c0;
      bVar24 = (DAT_004b8fd8 & DAT_004b8fdc) * -0x1bb0c07d == 0x34da907d;
      local_1d8 = 0x57b9a937;
      iVar26 = 0x46d468fc;
    }
    else {
      if (-0x295b397d < local_1d8) {
        if (local_1d8 < -0x28aedf8d) {
          if (local_1d8 == -0x295b397c) {
            local_1d8 = -0x1d839143;
          }
          else if (local_1d8 == -0x295672dc) {
            iVar26 = _objc_msgSend(local_a0,local_88);
            auVar29._8_8_ = extraout_x1_12;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x492f0672;
            if (iVar26 == 0) {
              local_1d8 = -0x667ca4bb;
            }
            local_1a8 = local_a0;
            local_1a9 = 0;
          }
        }
        else if (local_1d8 == -0x28aedf8d) {
          local_1d8 = 0x4f1b527c;
        }
        else if (local_1d8 == -0x2678bed7) {
          local_1d8 = -0x2678bed7;
          if (0x68ffc371 < (DAT_004b8f98 & DAT_004b8f9c) * 0x1b4cf93e + 0x7003b7fa) {
            local_1d8 = 0x1dfd3ae6;
          }
        }
        else if (local_1d8 == -0x25845f8b) {
          _objc_msgSend(local_80,local_100);
          auVar29._8_8_ = extraout_x1_04;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x2f24c61e;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x3029afb3) {
        if (local_1d8 == -0x30d84230) {
          uVar28 = ((DAT_004b8f20 - DAT_004b8f24) * -0x614c7912 | 0x60c11d9aU) ^ 0x1618d6a0;
          bVar25 = 0x5c393133 < uVar28;
          bVar24 = uVar28 == 0x5c393134;
          iVar26 = -0x5fffda92;
LAB_002a4e20:
          auVar7._8_8_ = uVar27;
          auVar7._0_8_ = local_a8;
          auVar29._8_8_ = uVar27;
          auVar29._0_8_ = local_a8;
          local_1d8 = -0xb43706;
          if (!bVar25 || bVar24) {
            local_1d8 = iVar26;
            auVar29 = auVar7;
          }
        }
        else if (local_1d8 == -0x30531c23) {
          local_1d8 = 0x5569cb3a;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3029afb3) {
        if (local_1d8 == -0x2d3839ff) {
          local_1d8 = -0x2678bed7;
        }
        else if (local_1d8 == -0x29b471c1) {
          local_1d8 = -0x20b5c5fe;
        }
        goto LAB_002a1ba0;
      }
      local_8a = DAT_004d1a10;
      bVar24 = false;
      local_1d8 = -0x3029afb3;
      iVar26 = -0x129033b2;
    }
  }
  else {
    if (local_1d8 < -0x16ab03fa) {
      if (local_1d8 < -0x1d839143) {
        if (local_1d8 < -0x220e7159) {
          if (local_1d8 == -0x23472448) {
            local_1d8 = -0x902611d;
          }
          else if (local_1d8 == -0x22196c0b) {
            local_1d8 = -0x5b2d4;
          }
        }
        else if (local_1d8 == -0x220e7159) {
          local_1d8 = 0x1662da60;
        }
        else {
          if (local_1d8 == -0x20b5c5fe) {
            uVar28 = 0;
            if (DAT_004b9094 != 0) {
              uVar28 = DAT_004b9090 / DAT_004b9094;
            }
            uVar28 = -(int)((long)((ulong)((uVar28 | 0x9d56475) + 0x3ed3ca5c) * 0xda237dd7) >> 0x3f)
            ;
            bVar25 = 0xebe3e4a0 < uVar28;
            bVar24 = uVar28 == 0xebe3e4a1;
            iVar26 = 0x5853f5a6;
            local_1d8 = -0x369afd4b;
            goto LAB_002a4af4;
          }
          if (local_1d8 == -0x202dbab8) {
            uVar27 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b67d0);
            _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar27);
            auVar29._8_8_ = extraout_x1;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x69fbc876;
          }
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x1ad280af) {
        if (local_1d8 == -0x1d839143) {
          bVar24 = 0xe2b90e27 < ((DAT_004b9050 ^ DAT_004b9054) & 0x109207) + 0xf098d934;
          iVar26 = -0x5b2d4;
          local_1d8 = -0x22196c0b;
          goto LAB_002a531c;
        }
        if (local_1d8 == -0x1c1aea93) {
          bVar24 = local_8a == '\0';
          local_1d8 = 0x117e4caa;
          iVar26 = 0x20dfc9a7;
          goto LAB_002a3f30;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x1ad280af) {
        _objc_msgSend(local_80,PTR_s_enabled_0048a890);
        auVar29._8_8_ = extraout_x1_16;
        auVar29._0_8_ = local_a8;
        local_1d8 = 0x7da9dfe5;
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x1ab5e59c) {
        uVar28 = (uint)((ulong)(uint)(DAT_004b90a0 * DAT_004b90a4) * 0x56d81e4f >> 0x3e) +
                 0xd1a24695 | 0x682d93ee;
        bVar25 = 0x8bf7161 < uVar28;
        bVar24 = uVar28 == 0x8bf7162;
        local_1d8 = 0x4caf5d22;
        iVar26 = 0x47625ecf;
        goto LAB_002a4f20;
      }
      if (local_1d8 != -0x17fd9ee5) goto LAB_002a1ba0;
      uVar28 = (uint)((ulong)((DAT_004b8f70 - DAT_004b8f74) + 0x2e0b9a1dU ^ 0x23abcc8) * 0x7e56ccdb
                     >> 0x3e);
      bVar25 = 0x1b8d548e < uVar28;
      bVar24 = uVar28 == 0x1b8d548f;
      iVar26 = 0x3eddaef9;
      local_1d8 = -0x4d6c0744;
      goto LAB_002a4af4;
    }
    if (local_1d8 < -0xeb01707) {
      if (local_1d8 < -0x129033b2) {
        if (local_1d8 == -0x16ab03fa) {
          DAT_004b67b0 = DAT_004b6790 ^ 0x23;
          DAT_004b67b1 = DAT_004b6791 ^ 0x65;
          DAT_004b67b2 = DAT_004b6792 ^ 0x2f;
          local_6e = DAT_004b6793;
          local_1d8 = 0x15acdf8c;
        }
        else if (local_1d8 == -0x13c8c91d) {
          bVar24 = (DAT_004b8f60 & DAT_004b8f64) * 0xfd488d6 == 0x762be8f2;
          local_1d8 = 0x3871088d;
          iVar26 = 0x32c93db;
LAB_002a3f30:
          if (bVar24) {
            local_1d8 = iVar26;
          }
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x129033b2) {
        local_1d8 = -0x23472448;
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x12145ed7) {
        if (local_1d8 == -0x10a654c5) {
          _objc_msgSend(local_80,local_f0);
          auVar29._8_8_ = extraout_x1_01;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x60258d3c;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b8fcc != 0) {
        uVar28 = DAT_004b8fc8 / DAT_004b8fcc;
      }
      bVar24 = uVar28 == 0x30e7a5c6;
      local_1d8 = 0x4b4fa4ec;
      iVar26 = 0x62077e6d;
    }
    else {
      if (local_1d8 < -0xe35fa38) {
        if (local_1d8 == -0xeb01707) {
          bVar24 = (DAT_004b9030 & DAT_004b9034 & 0xc111b026) == 0x409d9e63;
          iVar26 = -0x352df735;
          local_1d8 = 0x4baceb4e;
          goto LAB_002a4800;
        }
        if (local_1d8 == -0xea7b7fc) {
          local_1d8 = -0x629efc3b;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0xe35fa38) {
        bVar24 = local_129 == '\0';
        iVar26 = -0x1ab5e59c;
        local_1d8 = -0x690f9f40;
        auVar30 = auVar17;
        goto LAB_002a502c;
      }
      if (local_1d8 == -0xae864ec) {
        local_1d8 = 0x1b48463;
        local_188 = param_3;
        if (local_139 == '\0') {
          local_1d8 = 0x9580687;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x902611d) goto LAB_002a1ba0;
      bVar24 = ((DAT_004b8f58 ^ DAT_004b8f5c) * -0x5695aa4b | 0x46f78e62) == 0xc4b5e11;
      local_1d8 = -0x902611d;
      iVar26 = -0x1c1aea93;
    }
  }
LAB_002a4b2c:
  auVar9._8_8_ = uVar27;
  auVar9._0_8_ = local_a8;
  auVar29._8_8_ = uVar27;
  auVar29._0_8_ = local_a8;
  if (!bVar24) {
    local_1d8 = iVar26;
    auVar29 = auVar9;
  }
  goto LAB_002a1ba0;
}



// #####################################
// ##### FUN_00425b78 @ 00425b78
// #####################################

void FUN_00425b78(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int local_148;
  char local_142;
  char local_141;
  long local_140;
  long local_138;
  char local_129;
  long local_128;
  long local_120;
  undefined *local_118;
  char local_10a;
  char local_109;
  long local_108;
  char local_fb;
  char local_fa;
  char local_f9;
  undefined *local_f8;
  undefined8 local_f0;
  char local_e1;
  undefined *local_e0;
  undefined *puStack_d8;
  char local_c9;
  undefined *local_c8;
  char local_b9;
  undefined *local_b8;
  long local_b0;
  undefined8 local_a8;
  char local_99;
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined *local_80;
  byte local_72;
  char local_71;
  int local_70;
  
  local_148 = -0x578e7e91;
LAB_00425c20:
  puVar2 = PTR_s_timePolicy_0048bfe8;
  puVar1 = PTR_s_layoutPolicy_0048bfe0;
  if (local_148 < -0x5d9d9ed) {
    if (local_148 < -0x3dabeb84) {
      if (local_148 < -0x578e7e91) {
        if (local_148 < -0x6a75619a) {
          if (local_148 < -0x7456310b) {
            if (local_148 < -0x7c062b91) {
              if (local_148 != -0x7ff59424) {
                if (local_148 == -0x7f068679) {
                  uVar9 = (DAT_004cd8b0 + DAT_004cd8b4 | 0x5affbf7bU) - 0xb5efe5;
                  bVar3 = 0xe9e60b44 < uVar9;
                  bVar4 = uVar9 == 0xe9e60b45;
                  iVar5 = -0x24f945de;
                  iVar10 = -0x7e34b82e;
                  goto LAB_00429504;
                }
                if (local_148 == -0x7e34b82e) {
                  uVar9 = DAT_004cd8b8 | DAT_004cd8bc;
                  FUN_00429830(param_1);
                  local_90 = _objc_retainAutoreleasedReturnValue();
                  bVar4 = (uVar9 * 0x4a1db5c7 + 0x7591427e & 0x9e69863f) == 0x2cb6a29e;
                  iVar10 = -0x24f945de;
                  iVar5 = -0x3dabeb84;
                  goto LAB_004292cc;
                }
                goto LAB_00425c20;
              }
              bVar4 = ((uint)((ulong)(DAT_004cd8c0 * DAT_004cd8c4 + 0x30dabe8) * 0xafa65453 >> 0x3f)
                      | 0x5ebb1c30) == 0x6b55c430;
              iVar5 = -0x2055d64e;
              iVar10 = -0x45695a2c;
LAB_004293e0:
              if (!bVar4) {
                iVar10 = iVar5;
              }
            }
            else {
              if (local_148 == -0x7c062b91) {
                iVar10 = -0x9905f58;
                if ((((DAT_004cda50 | DAT_004cda54) + 0xb3b67f99) / 0x6345ac) * -0x5f67d9fc ==
                    -0x322d275e) {
                  iVar10 = 0x126b83c2;
                }
                goto LAB_004297f4;
              }
              if (local_148 != -0x79d8e3b5) {
                if (local_148 == -0x7588066e) {
                  local_70 = DAT_004d2194;
                  bVar4 = 0xce06af4b <
                          ((DAT_004cd848 ^ DAT_004cd84c) + 0x4e432ee6 & 0x7848c6ad) + 0xe77ab3ad;
                  iVar10 = -0x7588066e;
                  iVar5 = -0x1ac52e13;
                  goto LAB_00429458;
                }
                goto LAB_00425c20;
              }
              local_71 = local_70 == 0;
              iVar10 = -0x347010e5;
              if ((DAT_004cd858 + DAT_004cd85c & 0x67fbeef3U | 0x231b4082) == 0xfb1ed97d) {
                iVar10 = -0x79d8e3b5;
              }
            }
          }
          else {
            if (local_148 < -0x7011900c) {
              iVar10 = 0x52ffcbd2;
              if (local_148 == -0x7456310b) goto LAB_004297f4;
              if (local_148 == -0x742204ba) {
                local_141 = local_138 == local_140;
                bVar4 = ((DAT_004cda08 - DAT_004cda0c) * -0x5ebd1c08 & 0x26b88010U) * 0x731e0c0c ==
                        0x1fb020ed;
                iVar5 = 0x6517bc3d;
                iVar10 = -0xefd0ab9;
                goto LAB_004291b0;
              }
              if (local_148 == -0x72c3b4cd) {
                return;
              }
              goto LAB_00425c20;
            }
            if (local_148 == -0x7011900c) {
              iVar10 = 0x22613837;
            }
            else {
              if (local_148 != -0x6c37a2ef) {
                if (local_148 == -0x6bb5097a) {
                  iVar10 = -0x1915402;
                  goto LAB_004297f4;
                }
                goto LAB_00425c20;
              }
              iVar10 = -0x63e50670;
            }
          }
        }
        else if (local_148 < -0x5ff169a9) {
          if (local_148 < -0x63e50670) {
            if (local_148 == -0x6a75619a) {
              iVar10 = 0x45c6c380;
            }
            else {
              if (local_148 != -0x68410a1a) {
                iVar10 = -0x3e87e934;
                iVar5 = -0x64def166;
                goto LAB_00427aac;
              }
              _objc_msgSend(local_a8,local_c8);
              iVar10 = -0x858a0f3;
            }
          }
          else {
            if (local_148 == -0x63e50670) {
              DAT_004ca49b = DAT_004ca47b ^ 0xf1;
              DAT_004ca49c = DAT_004ca47c ^ 0xe8;
              iVar10 = 0x2d1214ac;
              goto LAB_004297f4;
            }
            if (local_148 == -0x63421970) goto LAB_00428224;
            if (local_148 != -0x610da002) goto LAB_00425c20;
            local_80 = PTR__OBJC_CLASS___NSThread_0048cc90;
            iVar10 = -0x44cbc8ee;
          }
        }
        else if (local_148 < -0x5ad41f38) {
          if (local_148 != -0x5ff169a9) {
            if (local_148 == -0x5e4f74c6) {
              DAT_004ca645 = local_72;
              DAT_004ca646 = DAT_004ca626 ^ 0x3c;
              DAT_004ca480 = DAT_004ca460 ^ 0x95;
              DAT_004ca481 = DAT_004ca461 ^ 0xe6;
              DAT_004ca482 = DAT_004ca462 ^ 0x90;
              DAT_004ca483 = DAT_004ca463 ^ 0x2a;
              DAT_004ca484 = DAT_004ca464 ^ 0x2f;
              DAT_004ca485 = DAT_004ca465 ^ 0x4f;
              DAT_004ca486 = DAT_004ca466 ^ 0xa7;
              DAT_004ca487 = DAT_004ca467 ^ 0x1d;
              DAT_004ca488 = DAT_004ca468 ^ 0x9d;
              DAT_004ca489 = DAT_004ca469 ^ 0x72;
              DAT_004ca48a = DAT_004ca46a ^ 0x6c;
              DAT_004ca48b = DAT_004ca46b ^ 0xf4;
              DAT_004ca48c = DAT_004ca46c ^ 0x73;
              DAT_004ca48d = DAT_004ca46d ^ 0x98;
              DAT_004ca48e = DAT_004ca46e ^ 0x7f;
              DAT_004ca48f = DAT_004ca46f ^ 0xd;
              DAT_004ca490 = DAT_004ca470 ^ 0x8b;
              DAT_004ca491 = DAT_004ca471 ^ 0x76;
              DAT_004ca492 = DAT_004ca472 ^ 0x37;
              DAT_004ca493 = DAT_004ca473 ^ 0x8e;
              DAT_004ca494 = DAT_004ca474 ^ 0x96;
              DAT_004ca495 = DAT_004ca475 ^ 0x29;
              DAT_004ca496 = DAT_004ca476 ^ 0x91;
              DAT_004ca497 = DAT_004ca477 ^ 0x79;
              DAT_004ca498 = DAT_004ca478 ^ 0x2e;
              DAT_004ca499 = DAT_004ca479 ^ 0x2f;
              uVar9 = (DAT_004cd888 * DAT_004cd88c ^ 0x3e3b2a9bU) + 0xd490efc4 & 0x3fd42ad3;
              bVar3 = 0x4b7eef30 < uVar9;
              bVar4 = uVar9 == 0x4b7eef31;
              DAT_004ca49a = DAT_004ca47a ^ 0xa1;
              iVar10 = -0x28cd4553;
              iVar5 = -0x6c37a2ef;
              goto LAB_004297d0;
            }
            if (local_148 == -0x5df68677) {
              uVar9 = 0;
              if (DAT_004cd94c != 0) {
                uVar9 = DAT_004cd948 / DAT_004cd94c;
              }
              _objc_msgSend(puStack_d8,local_e0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              local_e1 = _objc_msgSend(uVar6,PTR_s_enabledMerge_0048ae20);
              _objc_release(uVar6);
              bVar4 = ((uVar9 ^ 0x900a0600) & 0x984ac744) == 0x29f31d79;
              iVar5 = 0x1ed7f23f;
              iVar10 = 0x72330dd5;
              goto LAB_004291b0;
            }
            goto LAB_00425c20;
          }
          DAT_004d2194 = 1;
LAB_00428ec8:
          iVar10 = -0x2878cbe6;
        }
        else {
          if (local_148 != -0x5ad41f38) {
            if (local_148 == -0x58efca3a) {
              bVar4 = local_142 == '\0';
              iVar10 = -0x99097e4;
              iVar5 = -0x7c062b91;
              goto LAB_004297f0;
            }
            if (local_148 == -0x588f1399) {
              uVar9 = DAT_004cd968 - DAT_004cd96c;
              local_f8 = PTR_s_mergeEnabled_0048bfb8;
              local_f9 = _objc_msgSend(local_f0);
              bVar4 = 0x5798566a <
                      (((uint)((ulong)uVar9 * 0xca576c07 >> 0x3c) | 0xffffff81) & 0x1720482);
              iVar5 = -0xf063cc;
              iVar10 = 0xcc7c6e0;
              goto LAB_00428c3c;
            }
            goto LAB_00425c20;
          }
          DAT_004ca630 = DAT_004ca610 ^ 0xd3;
          DAT_004ca631 = DAT_004ca611 ^ 0x59;
          DAT_004ca632 = DAT_004ca612 ^ 0xe4;
          DAT_004ca633 = DAT_004ca613 ^ 0xbe;
          DAT_004ca634 = DAT_004ca614 ^ 0xe1;
          DAT_004ca635 = DAT_004ca615 ^ 0x60;
          DAT_004ca636 = DAT_004ca616 ^ 0x96;
          DAT_004ca637 = DAT_004ca617 ^ 0x48;
          DAT_004ca638 = DAT_004ca618 ^ 0x40;
          DAT_004ca639 = DAT_004ca619 ^ 0xc2;
          DAT_004ca63a = DAT_004ca61a ^ 0x33;
          DAT_004ca63b = DAT_004ca61b ^ 0xc6;
          DAT_004ca63c = DAT_004ca61c ^ 0x3a;
          DAT_004ca63d = DAT_004ca61d ^ 0x60;
          DAT_004ca63e = DAT_004ca61e ^ 0x23;
          DAT_004ca63f = DAT_004ca61f ^ 0x62;
          DAT_004ca640 = DAT_004ca620 ^ 0xc5;
          DAT_004ca641 = DAT_004ca621 ^ 0x68;
          DAT_004ca642 = DAT_004ca622 ^ 0xec;
          DAT_004ca643 = DAT_004ca623 ^ 0x98;
          DAT_004ca644 = DAT_004ca624 ^ 0xf3;
          local_72 = DAT_004ca625 ^ 8;
          iVar10 = -0x1410fbb8;
          if (((DAT_004cd878 ^ DAT_004cd87c) * -0xb2f266e + 0x6de69556 & 0x8bd94c04) == 0xb69efa78)
          {
            iVar10 = -0x5ad41f38;
          }
        }
      }
      else if (local_148 < -0x47707696) {
        if (local_148 < -0x4e18d33f) {
          if (local_148 < -0x562b18af) {
            if (local_148 == -0x578e7e91) {
              bVar4 = false;
              iVar10 = -0x7588066e;
              iVar5 = -0x36f3bd6f;
              goto LAB_00429458;
            }
            iVar10 = 0x396a3a5f;
            iVar5 = -0x571afdfd;
LAB_00427aac:
            if (local_148 != iVar5) goto LAB_00425c20;
          }
          else {
            if (local_148 == -0x562b18af) {
              uVar9 = (DAT_004cd960 + DAT_004cd964 & 0xda94da35U) + 0x39800eed ^ 0x70bb3159;
              bVar3 = 0x5d259422 < uVar9;
              bVar4 = uVar9 == 0x5d259423;
              iVar5 = -0xf063cc;
              iVar10 = -0x588f1399;
              goto LAB_00429504;
            }
            iVar10 = -0x3e3369;
            if (local_148 != -0x55752e85) {
              if (local_148 != -0x50ddd5d8) goto LAB_00425c20;
              iVar10 = 0x1f777b56;
            }
          }
        }
        else if (local_148 < -0x48c93599) {
          if (local_148 == -0x4e18d33f) {
            bVar4 = 0xf16ed9fc <
                    ((DAT_004cd950 | DAT_004cd954 | 0x43f729e7) * 0x7a9d0cb2 ^ 0x5b26e07e);
            iVar5 = -0x47e3eb6;
            iVar10 = 0x2b5b597f;
            goto LAB_00428c3c;
          }
          if (local_148 != -0x4db5bd5c) {
            if (local_148 == -0x49baf00f) {
              bVar4 = local_b0 == 0;
              iVar5 = -0x257efdc0;
              iVar10 = 0x528b22af;
              goto LAB_004293e0;
            }
            goto LAB_00425c20;
          }
          _objc_getAssociatedObject(local_90,&DAT_004d2108);
          local_108 = _objc_retainAutoreleasedReturnValue();
          iVar10 = -0x376e42e6;
        }
        else if (local_148 == -0x48c93599) {
          _objc_release(local_108);
          iVar10 = 0x34e2424a;
        }
        else {
          iVar10 = 0xbce822e;
          if (local_148 != -0x48b55ece) {
            iVar10 = -0x3e35c21d;
            iVar5 = -0x487430e9;
            goto LAB_00427aac;
          }
        }
      }
      else if (local_148 < -0x4336d368) {
        if (local_148 < -0x44ed61ed) {
          if (local_148 == -0x47707696) {
            bVar4 = 0x331bf400 <
                    ((DAT_004cd930 - DAT_004cd934 | 0x4267744U) * -0x55ed39af & 0x41dced9);
            iVar10 = -0x3e3369;
            iVar5 = -0x55752e85;
LAB_00429458:
            if (bVar4) {
              iVar10 = iVar5;
            }
          }
          else {
            iVar10 = -0x7c062b91;
            if (local_148 != -0x473acfa2) {
              if (local_148 == -0x45695a2c) {
                _objc_msgSend(local_90,PTR_s_delegate_0048c100);
                _objc_retainAutoreleasedReturnValue();
                iVar10 = -0x2055d64e;
                goto LAB_004297f4;
              }
              goto LAB_00425c20;
            }
          }
        }
        else if (local_148 == -0x44ed61ed) {
          iVar10 = 0x585370c6;
        }
        else {
          if (local_148 != -0x44cbc8ee) {
            iVar10 = 0x27655405;
            iVar5 = -0x43ecaad5;
            goto LAB_00427aac;
          }
          iVar10 = -0x1ddd97b4;
        }
      }
      else if (local_148 < -0x401b7097) {
        if (local_148 == -0x4336d368) {
          iVar10 = -0x357f57eb;
        }
        else {
          if (local_148 != -0x4309b6c3) {
            if (local_148 == -0x402da626) {
              uVar9 = 0;
              if (DAT_004cd9fc != 0) {
                uVar9 = DAT_004cd9f8 / DAT_004cd9fc;
              }
              uVar9 = uVar9 & 0xebefefff | 0xabe7eff5;
              local_138 = _objc_msgSend(local_a8,PTR_s_layoutPolicy_0048bfe0);
              local_140 = _objc_msgSend(local_f0,puVar1);
              bVar3 = 0xd0eb927a < uVar9;
              bVar4 = uVar9 == 0xd0eb927b;
              iVar10 = -0x402da626;
              iVar5 = -0x2ed06116;
              goto LAB_004297d0;
            }
            goto LAB_00425c20;
          }
          iVar10 = -0x473acfa2;
        }
      }
      else if (local_148 == -0x401b7097) {
        iVar10 = -0x4db5bd5c;
      }
      else {
        if (local_148 != -0x3e87e934) {
          if (local_148 == -0x3e35c21d) {
            local_118 = PTR_s_policy_0048bfd0;
            bVar4 = (DAT_004cd9c8 ^ DAT_004cd9cc) == 0xa0548551;
            iVar5 = -0x487430e9;
            iVar10 = -0x130538b4;
            goto LAB_004291b0;
          }
          goto LAB_00425c20;
        }
        iVar10 = 0x7da1673;
        if ((DAT_004cda98 & DAT_004cda9c) * 0xc9080bc == 0x496e738f) {
          iVar10 = -0x3e87e934;
        }
      }
      goto LAB_004297f4;
    }
    if (local_148 < -0x2063c445) {
      if (local_148 < -0x30d6f0ba) {
        if (local_148 < -0x38290ae0) {
          if (local_148 < -0x3c5dc33e) {
            if (local_148 == -0x3dabeb84) {
              iVar10 = -0x7ff59424;
            }
            else {
              if (local_148 != -0x3cf3057c) goto LAB_00425c20;
              iVar10 = 0x540b36c2;
            }
          }
          else if (local_148 == -0x3c5dc33e) {
            iVar10 = -0x562b18af;
          }
          else {
            if (local_148 == -0x3bd35383) {
              bVar4 = local_129 == '\0';
              iVar5 = 0x12703ddc;
              iVar10 = -0x30d6f0ba;
              goto LAB_004291b0;
            }
            if (local_148 != -0x396240b2) goto LAB_00425c20;
            _objc_msgSend(local_f0,local_f8);
            iVar10 = 0x107a721d;
          }
        }
        else if (local_148 < -0x357f57eb) {
          if (local_148 == -0x38290ae0) {
LAB_00427474:
            iVar10 = 0x5eb98c29;
          }
          else if (local_148 == -0x376e42e6) {
            iVar10 = 0x2f4db0be;
          }
          else {
            if (local_148 != -0x36f3bd6f) goto LAB_00425c20;
            iVar10 = -0x7588066e;
          }
        }
        else {
          if (local_148 == -0x357f57eb) {
            bVar4 = 0xee3deeb3 <
                    (DAT_004cda78 - DAT_004cda7c & 0x33c2f40U) * -0x62437050 + 0xe870a5a0;
            iVar5 = 0x262b09fb;
            iVar10 = -0x571afdfd;
            goto LAB_00428c3c;
          }
          if (local_148 != -0x347010e5) {
            if (local_148 == -0x322373a1) {
              bVar4 = local_f9 == '\0';
              iVar10 = -0x30948d35;
              iVar5 = 0x13a7ba77;
              goto LAB_004297f0;
            }
            goto LAB_00425c20;
          }
          iVar10 = 0x4e1af66e;
        }
      }
      else if (local_148 < -0x28cd4553) {
        if (local_148 < -0x2f1a0aad) {
          if (local_148 != -0x30d6f0ba) {
            if (local_148 == -0x30948d35) {
              bVar4 = 0x4b982601 <
                      ((DAT_004cd990 + DAT_004cd994 ^ 0xceae6b74U) / 0x3fd65e21) * -0x327b2bf0;
              iVar10 = -0x396240b2;
              iVar5 = 0x107a721d;
              goto LAB_00429458;
            }
            if (local_148 == -0x3079e5db) {
              uVar9 = (DAT_004cd920 + DAT_004cd924) * 0x20ed53b6 + 0xd1f0ec92U ^ 0x85abfac4;
              bVar3 = 0x76cc4d8b < uVar9;
              bVar4 = uVar9 == 0x76cc4d8c;
              iVar10 = -0xba59018;
              iVar5 = 0x2babec80;
              goto LAB_004297d0;
            }
            goto LAB_00425c20;
          }
          bVar4 = 0x53519fb < ((DAT_004cd9f0 & DAT_004cd9f4) + 0x47285f71 & 0xb01a827f ^ 0xdd0c7b21)
          ;
          iVar5 = -0x402da626;
          iVar10 = 0x9b85423;
LAB_00428c3c:
          if (bVar4) {
            iVar10 = iVar5;
          }
        }
        else if (local_148 == -0x2f1a0aad) {
          bVar4 = local_b9 == '\0';
          iVar10 = -0x257efdc0;
          iVar5 = -0x22a5c04;
LAB_004297f0:
          if (bVar4) {
            iVar10 = iVar5;
          }
        }
        else if (local_148 == -0x2ed06116) {
          iVar10 = 0x3ff122c;
        }
        else {
          if (local_148 != -0x2b144545) goto LAB_00425c20;
          iVar10 = -0x3079e5db;
        }
      }
      else if (local_148 < -0x25e9733f) {
        if (local_148 == -0x28cd4553) {
          DAT_004ca645 = local_72;
          DAT_004ca646 = DAT_004ca626 ^ 0x3c;
          DAT_004ca480 = DAT_004ca460 ^ 0x95;
          DAT_004ca481 = DAT_004ca461 ^ 0xe6;
          DAT_004ca482 = DAT_004ca462 ^ 0x90;
          DAT_004ca483 = DAT_004ca463 ^ 0x2a;
          DAT_004ca484 = DAT_004ca464 ^ 0x2f;
          DAT_004ca485 = DAT_004ca465 ^ 0x4f;
          DAT_004ca486 = DAT_004ca466 ^ 0xa7;
          DAT_004ca487 = DAT_004ca467 ^ 0x1d;
          DAT_004ca488 = DAT_004ca468 ^ 0x9d;
          DAT_004ca489 = DAT_004ca469 ^ 0x72;
          DAT_004ca48a = DAT_004ca46a ^ 0x6c;
          DAT_004ca48b = DAT_004ca46b ^ 0xf4;
          DAT_004ca48c = DAT_004ca46c ^ 0x73;
          DAT_004ca48d = DAT_004ca46d ^ 0x98;
          DAT_004ca48e = DAT_004ca46e ^ 0x7f;
          DAT_004ca48f = DAT_004ca46f ^ 0xd;
          DAT_004ca490 = DAT_004ca470 ^ 0x8b;
          DAT_004ca491 = DAT_004ca471 ^ 0x76;
          DAT_004ca492 = DAT_004ca472 ^ 0x37;
          DAT_004ca493 = DAT_004ca473 ^ 0x8e;
          DAT_004ca494 = DAT_004ca474 ^ 0x96;
          DAT_004ca495 = DAT_004ca475 ^ 0x29;
          DAT_004ca496 = DAT_004ca476 ^ 0x91;
          DAT_004ca497 = DAT_004ca477 ^ 0x79;
          DAT_004ca498 = DAT_004ca478 ^ 0x2e;
          DAT_004ca499 = DAT_004ca479 ^ 0x2f;
          DAT_004ca49a = DAT_004ca47a ^ 0xa1;
          iVar10 = -0x5e4f74c6;
        }
        else {
          if (local_148 != -0x2878cbe6) {
            if (local_148 == -0x277a947a) {
              uVar9 = 0;
              if (DAT_004cd90c != 0) {
                uVar9 = DAT_004cd908 / DAT_004cd90c;
              }
              uVar9 = uVar9 * -0x64016b4b + 0x3b2efd0d;
              local_c8 = PTR_s_active_0048bfb0;
              bVar3 = 0xc84f2679 < uVar9;
              bVar4 = uVar9 == 0xc84f267a;
              iVar5 = -0xb99b8a9;
              iVar10 = -0x6a75619a;
              goto LAB_00429504;
            }
            goto LAB_00425c20;
          }
          DAT_004d2194 = 1;
          iVar10 = 0x78484f6d;
        }
      }
      else if (local_148 == -0x25e9733f) {
        iVar10 = 0x44dd9123;
      }
      else if (local_148 == -0x257efdc0) {
        _objc_release(local_a8);
        iVar10 = -0x4336d368;
      }
      else {
        if (local_148 != -0x24f945de) goto LAB_00425c20;
        FUN_00429830(param_1);
        _objc_retainAutoreleasedReturnValue();
        iVar10 = -0x7e34b82e;
      }
      goto LAB_004297f4;
    }
    if (-0x16ac857e < local_148) {
      if (local_148 < -0xbc48d80) {
        if (local_148 < -0x11d72ca9) {
          if (local_148 == -0x16ac857d) {
            uVar9 = (DAT_004cd9d0 | DAT_004cd9d4 | 0xfffbedfc) + 0xd2f8fef5;
            bVar3 = 0x83aab671 < uVar9;
            bVar4 = uVar9 == 0x83aab672;
            iVar10 = -0x18110f20;
            iVar5 = 0x30ac0bbe;
            goto LAB_004297d0;
          }
          if (local_148 == -0x1410fbb8) {
            iVar10 = 0x46b43ef9;
          }
          else {
            if (local_148 != -0x130538b4) goto LAB_00425c20;
            iVar10 = -0x16ac857d;
          }
        }
        else if (local_148 == -0x11d72ca9) {
          iVar10 = 0x68511ff3;
        }
        else {
          if (local_148 == -0x114434d5) {
            bVar4 = local_e1 == '\0';
            iVar5 = -0x257efdc0;
            iVar10 = -0x4e18d33f;
            goto LAB_004291b0;
          }
          if (local_148 != -0xefd0ab9) goto LAB_00425c20;
          iVar10 = 0x698dfbae;
        }
      }
      else if (local_148 < -0x99097e4) {
        if (local_148 == -0xbc48d80) {
          iVar10 = 0x4f669ca5;
        }
        else {
          iVar10 = 0x2babec80;
          if (local_148 != -0xba59018) {
            iVar10 = -0x277a947a;
            iVar5 = -0xb99b8a9;
            goto LAB_00427aac;
          }
        }
      }
      else if (local_148 == -0x99097e4) {
        _objc_release(local_f0);
        iVar10 = -0x11d72ca9;
      }
      else {
        if (local_148 != -0x9905f58) {
          if (local_148 == -0x858a0f3) {
            uVar9 = DAT_004cd978 & DAT_004cd97c;
            local_fa = _objc_msgSend(local_a8,local_c8);
            bVar4 = (uint)((ulong)(uVar9 + 0x835580ca | 0x85f7ee18) * 0x15ce7da1 >> 0x3c) ==
                    0x42488717;
            iVar10 = -0x858a0f3;
            iVar5 = -0xbc48d80;
            goto LAB_004292cc;
          }
          goto LAB_00425c20;
        }
        uVar9 = DAT_004cda58 ^ DAT_004cda5c;
        FUN_00414c90(local_98);
        iVar10 = 0x495e58dd;
        if ((uVar9 & 0xebffabdf | 0x6bbe2bc7) == 0x17a0353c) {
          iVar10 = -0x9905f58;
        }
      }
      goto LAB_004297f4;
    }
    if (-0x1ac52e14 < local_148) {
      if (local_148 < -0x19b26547) {
        if (local_148 == -0x1ac52e13) {
          iVar10 = 0x72f36cea;
        }
        else {
          if (local_148 != -0x1ab5b6e4) {
            if (local_148 == -0x1a893712) {
              bVar4 = (DAT_004cd9a8 | DAT_004cd9ac) * -0x32c42efe == -0x18c9a38d;
              iVar5 = -0x1a893712;
              iVar10 = 0x2f3f049f;
              goto LAB_004291b0;
            }
            goto LAB_00425c20;
          }
          _objc_retain(param_1);
          iVar10 = -0x7011900c;
        }
      }
      else {
        iVar10 = -0x1a893712;
        if (local_148 != -0x19b26547) {
          if (local_148 != -0x18621f9a) {
            if (local_148 == -0x18110f20) {
              uVar9 = 0;
              if (DAT_004cd9dc != 0) {
                uVar9 = DAT_004cd9d8 / DAT_004cd9dc;
              }
              local_120 = _objc_msgSend(local_a8,local_118);
              local_128 = _objc_msgSend(local_f0,local_118);
              bVar4 = (uVar9 + 0x1ad6dbb1 & 0xffbb6fc7 | 0xb5180606) == 0x7230dc41;
              iVar10 = -0x18110f20;
              iVar5 = -0x25e9733f;
              goto LAB_004292cc;
            }
            goto LAB_00425c20;
          }
          iVar10 = 0x49c14496;
        }
      }
      goto LAB_004297f4;
    }
    if (local_148 < -0x1ddd97b4) {
      if (local_148 != -0x2063c445) {
        if (local_148 == -0x2055d64e) {
          uVar9 = DAT_004cd8c8 ^ DAT_004cd8cc;
          _objc_msgSend(local_90,PTR_s_delegate_0048c100);
          local_98 = _objc_retainAutoreleasedReturnValue();
          iVar10 = 0x2566e94b;
          if (uVar9 == 0x4869092a) {
            iVar10 = -0x45695a2c;
          }
          goto LAB_004297f4;
        }
        if (local_148 == -0x200bbd03) {
          bVar4 = (DAT_004cdab8 ^ DAT_004cdabc | 0x26f32460) * -0x71cae464 == 0x2fa6e030;
          iVar5 = 0x24410310;
          iVar10 = -0x72c3b4cd;
          goto LAB_004291b0;
        }
        goto LAB_00425c20;
      }
      _objc_retain(param_1);
      iVar10 = -0x1ab5b6e4;
      goto LAB_004297f4;
    }
    if (local_148 != -0x1ddd97b4) {
      if (local_148 == -0x1d11fa83) {
        FUN_004237f4(local_98,&PTR____CFConstantStringClassReference_004ca850);
        iVar10 = 0x24bdb072;
        goto LAB_004297f4;
      }
      if (local_148 == -0x1c968d17) {
        bVar4 = (DAT_004cd8d0 & DAT_004cd8d4 | 0xc18911e1) == 0xd95ff75;
        iVar5 = -0x1d11fa83;
        iVar10 = 0x24bdb072;
        goto LAB_004291b0;
      }
      goto LAB_00425c20;
    }
    local_88 = PTR_s_isMainThread_0048b930;
    bVar4 = (byte)((ulong)(DAT_004cd8a8 ^ DAT_004cd8ac | 0x62af4936) * 0x531cd2f >> 0x38) ==
            0x1e4a4141;
    iVar5 = -0x1ddd97b4;
    iVar10 = -0x6bb5097a;
  }
  else {
    if (0x2f3f049e < local_148) {
      if (local_148 < 0x528b22af) {
        if (local_148 < 0x41e0dec5) {
          if (local_148 < 0x34e2424a) {
            if (local_148 < 0x30685b88) {
              if (local_148 == 0x2f3f049f) {
                bVar4 = local_fb == '\0';
                iVar5 = -0x99097e4;
                iVar10 = -0x401b7097;
                goto LAB_004291b0;
              }
              if (local_148 != 0x2f4db0be) goto LAB_00425c20;
              local_109 = local_108 == 0;
              iVar10 = 0x2c8f7490;
            }
            else if (local_148 == 0x30685b88) {
              _objc_getAssociatedObject(local_90,&DAT_004d2108);
              _objc_retainAutoreleasedReturnValue();
              iVar10 = -0x4db5bd5c;
            }
            else {
              if (local_148 != 0x30ac0bbe) {
                if (local_148 == 0x3375ce33) {
                  bVar4 = (uint)((ulong)((DAT_004cd9c0 - DAT_004cd9c4) + 0xa3fb5817) * 0x41341dc3 >>
                                0x3e) == 0xfe20430f;
                  iVar10 = -0x3e35c21d;
                  iVar5 = -0x487430e9;
                  goto LAB_004297f0;
                }
                goto LAB_00425c20;
              }
              _objc_msgSend(local_a8,local_118);
              _objc_msgSend(local_f0,local_118);
              iVar10 = -0x18110f20;
            }
          }
          else if (local_148 < 0x39f1828c) {
            if (local_148 == 0x34e2424a) {
              uVar9 = DAT_004cda38 - DAT_004cda3c;
              _objc_release(local_108);
              iVar10 = -0x50ddd5d8;
              if (((uVar9 & 0x2f192e9) - 0x59783c | 0xfb522c37) < 0x65daa462) {
                iVar10 = -0x48c93599;
              }
            }
            else if (local_148 == 0x3585f5a8) {
              _objc_release(param_1);
              iVar10 = 0x2138b889;
            }
            else {
              if (local_148 != 0x396a3a5f) goto LAB_00425c20;
              _objc_release(local_98);
              iVar10 = -0x38290ae0;
            }
          }
          else {
            if (local_148 == 0x39f1828c) {
              bVar4 = local_141 == '\0';
              iVar5 = 0x12703ddc;
              iVar10 = 0x14291e0;
              goto LAB_004291b0;
            }
            iVar10 = -0x257efdc0;
            if (local_148 != 0x3a9fedfc) {
              if (local_148 == 0x3ba888af) {
                uVar9 = (uint)((ulong)(DAT_004cda20 & DAT_004cda24 ^ 0xd6d67b97) * 0x2ccdef0f >>
                              0x3d);
                bVar3 = 0xc4a0e54f < uVar9;
                bVar4 = uVar9 == 0xc4a0e550;
                iVar5 = -0x4309b6c3;
                iVar10 = 0x594d5b61;
                goto LAB_00429504;
              }
              goto LAB_00425c20;
            }
          }
        }
        else if (local_148 < 0x49c14496) {
          if (local_148 < 0x46b43ef9) {
            if (local_148 == 0x41e0dec5) {
              iVar10 = -0x5d9d9ed;
            }
            else {
              if (local_148 == 0x44dd9123) {
                bVar4 = 0xf7336df6 < DAT_004cd9e0 * DAT_004cd9e4 * 0x6f8ca57d + 0x5ccc7fa8U;
                iVar10 = 0x27655405;
                iVar5 = -0x43ecaad5;
                goto LAB_00429458;
              }
              if (local_148 != 0x45c6c380) goto LAB_00425c20;
              uVar9 = (DAT_004cd910 ^ DAT_004cd914) - 0xb93205 & 0x2868df90 ^ 0xc51baa6e;
              bVar3 = 0xa75bde1d < uVar9;
              bVar4 = uVar9 == 0xa75bde1e;
              iVar5 = 0x7b8c8b37;
              iVar10 = 0xcd9bfbc;
LAB_00429504:
              if (!bVar3 || bVar4) {
                iVar10 = iVar5;
              }
            }
          }
          else {
            if (local_148 == 0x46b43ef9) {
              bVar4 = (DAT_004cd880 & DAT_004cd884 | 0x3856f05) * 0x10f6ca1c == -0x81b0868;
              iVar5 = -0x28cd4553;
              iVar10 = -0x5e4f74c6;
              goto LAB_004291b0;
            }
            if (local_148 == 0x4916b079) {
              iVar10 = -0x49baf00f;
            }
            else {
              if (local_148 != 0x495e58dd) goto LAB_00425c20;
              iVar10 = 0x63bf7b65;
            }
          }
        }
        else {
          if (0x4f173f72 < local_148) {
            if (local_148 == 0x4f173f73) {
              bVar4 = local_71 == '\0';
              iVar5 = 0x2d1214ac;
              iVar10 = 0x724f0ac1;
              goto LAB_004291b0;
            }
            if (local_148 == 0x4f669ca5) {
              uVar9 = DAT_004cd980 + DAT_004cd984 + 0x3071639fU & 0xcc006500;
              bVar3 = 0x2ea5f8ae < uVar9;
              bVar4 = uVar9 == 0x2ea5f8af;
              iVar5 = -0x48b55ece;
              iVar10 = 0xbce822e;
              goto LAB_00429504;
            }
            if (local_148 == 0x51ff7556) {
              _objc_release(local_90);
              goto LAB_00427474;
            }
            goto LAB_00425c20;
          }
          if (local_148 == 0x49c14496) {
            bVar4 = (DAT_004cd9a0 + DAT_004cd9a4 & 0xc5ea22c6U | 0xc5e202c6) == 0xbcf8c116;
            iVar10 = -0x1a893712;
            iVar5 = -0x19b26547;
            goto LAB_004297f0;
          }
          iVar10 = 0x68511ff3;
          if (local_148 != 0x4af8452a) {
            if (local_148 == 0x4e1af66e) {
              uVar9 = 0;
              if (DAT_004cd864 != 0) {
                uVar9 = DAT_004cd860 / DAT_004cd864;
              }
              bVar4 = (uVar9 * 0x3b80b288 & 0xeef53528) == 0x2425bf30;
              iVar5 = 0x19164c02;
              iVar10 = 0x13244e34;
              goto LAB_004293e0;
            }
            goto LAB_00425c20;
          }
        }
      }
      else if (local_148 < 0x68511ff3) {
        if (local_148 < 0x5eb98c29) {
          if (local_148 < 0x585370c6) {
            if (local_148 == 0x528b22af) {
              local_b8 = PTR_s_synchronizing_0048bfa8;
              iVar10 = 0x2b24af01;
            }
            else {
              if (local_148 != 0x52ffcbd2) {
                if (local_148 == 0x540b36c2) {
                  bVar4 = local_10a == '\0';
                  iVar5 = 0x12703ddc;
                  iVar10 = 0x3375ce33;
                  goto LAB_004291b0;
                }
                goto LAB_00425c20;
              }
              iVar10 = 0x52ffcbd2;
              if (((DAT_004cda48 ^ DAT_004cda4c) & 0x446f5e90) != 0xa07afacd) {
                iVar10 = -0x58efca3a;
              }
            }
          }
          else {
            if (local_148 == 0x585370c6) {
              uVar9 = (uint)((ulong)(uint)(DAT_004cd8f0 - DAT_004cd8f4) * 0x8552559 >> 0x39) *
                      -0xcbbde77 + 0xe3e52e59;
              bVar3 = 0xc871a36 < uVar9;
              bVar4 = uVar9 == 0xc871a37;
              iVar5 = 0x6b8dbd59;
              iVar10 = 0x281f693e;
              goto LAB_00429504;
            }
            iVar10 = -0x4309b6c3;
            if (local_148 != 0x594d5b61) {
              if (local_148 == 0x5b8ea619) {
                FUN_00414474(local_98);
                local_a8 = _objc_retainAutoreleasedReturnValue();
                bVar4 = false;
                iVar5 = 0x5b8ea619;
                iVar10 = -0x44ed61ed;
                goto LAB_004291b0;
              }
              goto LAB_00425c20;
            }
          }
        }
        else if (local_148 < 0x6486bbc5) {
          if (local_148 == 0x5eb98c29) {
            uVar9 = DAT_004cda88 + DAT_004cda8c;
            _objc_release(local_90);
            uVar9 = (uint)((ulong)((uVar9 & 0x5bdcce3b) * 0x11276302) * 0xded1399 >> 0x3b);
            bVar3 = 0x494684ef < uVar9;
            bVar4 = uVar9 == 0x494684f0;
            iVar10 = 0x5eb98c29;
            iVar5 = 0x2c4051eb;
            goto LAB_004297d0;
          }
          iVar10 = -0x99097e4;
          if (local_148 != 0x63bf7b65) {
            if (local_148 != 0x643105e0) goto LAB_00425c20;
            iVar10 = 0x23d912ff;
          }
        }
        else if (local_148 == 0x6486bbc5) {
          _objc_msgSend(local_a8,local_c8);
LAB_00428224:
          iVar10 = 0x14f21881;
        }
        else {
          iVar10 = -0x742204ba;
          if (local_148 != 0x6517bc3d) {
            iVar10 = 0x2198c3db;
            iVar5 = 0x6850c32d;
            goto LAB_00427aac;
          }
        }
      }
      else if (local_148 < 0x724f0ac1) {
        if (local_148 < 0x6f886cc8) {
          if (local_148 == 0x68511ff3) {
            bVar4 = 0xcb40eeed <
                    (DAT_004cda68 * DAT_004cda6c & 0xe9419559U | 0xa9018119) + 0xf6df6136;
            iVar5 = 0x68511ff3;
            iVar10 = 0x3a9fedfc;
            goto LAB_00428c3c;
          }
          if (local_148 == 0x698dfbae) {
            iVar10 = 0x2198c3db;
          }
          else {
            if (local_148 != 0x6b8dbd59) goto LAB_00425c20;
            _objc_msgSend(local_a8,PTR_s_entryDepth_0048bf98);
            iVar10 = 0x281f693e;
          }
        }
        else {
          if (local_148 == 0x6f886cc8) {
            bVar4 = local_c9 == '\0';
            iVar10 = -0x4e18d33f;
            iVar5 = -0x47707696;
            goto LAB_004297f0;
          }
          if (local_148 == 0x711b31d3) {
            bVar4 = local_99 == '\0';
            iVar5 = 0x396a3a5f;
            iVar10 = 0x1b5949a;
            goto LAB_004291b0;
          }
          if (local_148 != 0x72330dd5) goto LAB_00425c20;
          iVar10 = -0x114434d5;
        }
      }
      else if (local_148 < 0x7725fc5d) {
        if (local_148 == 0x724f0ac1) {
          uVar9 = (DAT_004cd870 * DAT_004cd874 * 0x4ee3d5aa ^ 0xc0967c4U) * 0x21516ea8;
          bVar3 = 0x11814a74 < uVar9;
          bVar4 = uVar9 == 0x11814a75;
          iVar10 = -0x5ad41f38;
          iVar5 = 0x123acc99;
          goto LAB_004297d0;
        }
        if (local_148 != 0x72f36cea) {
          iVar10 = -0x1ddd97b4;
          iVar5 = 0x76893ef5;
          goto LAB_00427aac;
        }
        iVar10 = 0xe8f26c6;
        if ((DAT_004cd850 + DAT_004cd854 + 0x6f78ff69U & 0x2cc7fc8b) < 0x2a4cd5df) {
          iVar10 = -0x79d8e3b5;
        }
      }
      else {
        if (local_148 == 0x7725fc5d) {
          bVar4 = ((uint)((ulong)(DAT_004cdaa0 ^ DAT_004cdaa4) * 0x6a5bc137 >> 0x3e) + 0xf6e3f3ad |
                  0xd3bf2eb4) == 0x1264789b;
          iVar5 = 0x2138b889;
          iVar10 = 0x3585f5a8;
          goto LAB_004293e0;
        }
        if (local_148 == 0x78484f6d) {
          iVar10 = 0x13d2687;
        }
        else {
          if (local_148 != 0x7b8c8b37) goto LAB_00425c20;
          _objc_msgSend(local_a8,local_c8);
          iVar10 = 0xcd9bfbc;
        }
      }
      goto LAB_004297f4;
    }
    if (local_148 < 0x13a7ba77) {
      if (local_148 < 0x7da1673) {
        if (local_148 < -0xf063cc) {
          if (local_148 < -0x47e3eb6) {
            if (local_148 == -0x5d9d9ed) {
              bVar4 = 0x51ffed77 <
                      ((uint)((ulong)(uint)(DAT_004cd940 + DAT_004cd944) * 0x4b120cff >> 0x3d) & 2)
                      + 0xdcabe0c2;
              iVar5 = -0x5df68677;
              iVar10 = 0x1ed7f23f;
              goto LAB_00428c3c;
            }
            if (local_148 != -0x517ee17) goto LAB_00425c20;
            FUN_00414474(local_98);
            _objc_retainAutoreleasedReturnValue();
            iVar10 = 0x5b8ea619;
          }
          else {
            if (local_148 != -0x47e3eb6) {
              if (local_148 == -0x22a5c04) {
                uVar9 = 0;
                if (DAT_004cd904 != 0) {
                  uVar9 = DAT_004cd900 / DAT_004cd904;
                }
                uVar9 = (uVar9 + 0x4c9af4f2 & 0xffb49673) + 0x3e700afe;
                bVar3 = 0x12c77b5b < uVar9;
                bVar4 = uVar9 == 0x12c77b5c;
                iVar5 = -0xb99b8a9;
                iVar10 = -0x277a947a;
                goto LAB_00429504;
              }
              if (local_148 == -0x1915402) {
                iVar5 = _objc_msgSend(local_80,local_88);
                bVar4 = iVar5 == 0;
                iVar5 = 0x7725fc5d;
                iVar10 = -0x7f068679;
                goto LAB_004291b0;
              }
              goto LAB_00425c20;
            }
            FUN_0041ebf8(0);
            _objc_retainAutoreleasedReturnValue();
            iVar10 = 0x2b5b597f;
          }
        }
        else if (local_148 < 0x14291e0) {
          if (local_148 == -0xf063cc) {
            _objc_msgSend(local_f0,PTR_s_mergeEnabled_0048bfb8);
            iVar10 = -0x588f1399;
          }
          else if (local_148 == -0x3e3369) {
            local_e0 = PTR_s_shared_00489458;
            puStack_d8 = PTR_BubbleBoxConfig_0048c990;
            iVar10 = 0x41e0dec5;
          }
          else {
            if (local_148 != 0x13d2687) goto LAB_00425c20;
            iVar10 = -0x2063c445;
            if (((uint)((ulong)(DAT_004cd890 - DAT_004cd894 ^ 0x6d07ed3e) * 0xb20959 >> 0x35) & 3)
                != 0x7cbcf24f) {
              iVar10 = -0x1ab5b6e4;
            }
          }
        }
        else {
          if (local_148 != 0x14291e0) {
            if (local_148 == 0x1b5949a) {
              bVar4 = ((DAT_004cd8e0 ^ DAT_004cd8e4) + 0xc26c048b | 0xee7d9dfb) * 0xc5c9c5f ==
                      -0x6f4a8add;
              iVar5 = 0x5b8ea619;
              iVar10 = -0x517ee17;
              goto LAB_004293e0;
            }
            if (local_148 == 0x3ff122c) {
              uVar9 = ((DAT_004cda00 ^ DAT_004cda04) & 0x5822cc80) + 0x8b29b1f9;
              bVar3 = 0xcdf57250 < uVar9;
              bVar4 = uVar9 == 0xcdf57251;
              iVar10 = -0x742204ba;
              iVar5 = 0x6517bc3d;
              goto LAB_004297d0;
            }
            goto LAB_00425c20;
          }
          lVar7 = _objc_msgSend(local_a8,PTR_s_timePolicy_0048bfe8);
          lVar8 = _objc_msgSend(local_f0,puVar2);
          local_142 = lVar7 == lVar8;
          iVar10 = 0x277f38a3;
        }
      }
      else if (local_148 < 0xf849ccc) {
        if (local_148 < 0xcc7c6e0) {
          iVar10 = 0x7725fc5d;
          if (local_148 != 0x7da1673) {
            if (local_148 != 0x9b85423) {
              if (local_148 == 0xbce822e) {
                bVar4 = DAT_004cd988 + DAT_004cd98c == 0x3d664370;
                iVar5 = -0x48b55ece;
                iVar10 = 0x2b85edb9;
                goto LAB_004291b0;
              }
              goto LAB_00425c20;
            }
            _objc_msgSend(local_a8,PTR_s_layoutPolicy_0048bfe0);
            _objc_msgSend(local_f0,puVar1);
            iVar10 = -0x402da626;
          }
        }
        else {
          if (local_148 != 0xcc7c6e0) {
            if (local_148 != 0xcd9bfbc) {
              iVar10 = -0x79d8e3b5;
              iVar5 = 0xe8f26c6;
              goto LAB_00427aac;
            }
            uVar9 = ((DAT_004cd918 & DAT_004cd91c) * -0x3f258684 | 0x462474ad) ^ 0xe70d77f2;
            local_c9 = _objc_msgSend(local_a8,local_c8);
            bVar3 = 0x947f9727 < uVar9;
            bVar4 = uVar9 == 0x947f9728;
            iVar5 = 0x7b8c8b37;
            iVar10 = -0x2b144545;
            goto LAB_00429504;
          }
          iVar10 = -0x322373a1;
        }
      }
      else if (local_148 < 0x126b83c2) {
        if (local_148 == 0xf849ccc) {
          iVar10 = -0x3e87e934;
          if ((DAT_004cda90 - DAT_004cda94) + 0xa6dcdd06U < 0xb4c7814c) {
            iVar10 = -0x64def166;
          }
        }
        else {
          if (local_148 == 0x107a721d) {
            uVar9 = DAT_004cd998 - DAT_004cd99c;
            local_fb = _objc_msgSend(local_f0,local_f8);
            bVar4 = (uVar9 / 0x6b695175 | 0x5d34594a) == 0x7b0cec6;
            iVar10 = -0x396240b2;
            iVar5 = -0x18621f9a;
            goto LAB_004292cc;
          }
          if (local_148 != 0x123acc99) goto LAB_00425c20;
          DAT_004ca630 = DAT_004ca610 ^ 0xd3;
          DAT_004ca631 = DAT_004ca611 ^ 0x59;
          DAT_004ca632 = DAT_004ca612 ^ 0xe4;
          DAT_004ca633 = DAT_004ca613 ^ 0xbe;
          DAT_004ca634 = DAT_004ca614 ^ 0xe1;
          DAT_004ca635 = DAT_004ca615 ^ 0x60;
          DAT_004ca636 = DAT_004ca616 ^ 0x96;
          DAT_004ca637 = DAT_004ca617 ^ 0x48;
          DAT_004ca638 = DAT_004ca618 ^ 0x40;
          DAT_004ca639 = DAT_004ca619 ^ 0xc2;
          DAT_004ca63a = DAT_004ca61a ^ 0x33;
          DAT_004ca63b = DAT_004ca61b ^ 0xc6;
          DAT_004ca63c = DAT_004ca61c ^ 0x3a;
          DAT_004ca63d = DAT_004ca61d ^ 0x60;
          DAT_004ca63e = DAT_004ca61e ^ 0x23;
          DAT_004ca63f = DAT_004ca61f ^ 0x62;
          DAT_004ca640 = DAT_004ca620 ^ 0xc5;
          DAT_004ca641 = DAT_004ca621 ^ 0x68;
          DAT_004ca642 = DAT_004ca622 ^ 0xec;
          DAT_004ca643 = DAT_004ca623 ^ 0x98;
          DAT_004ca644 = DAT_004ca624 ^ 0xf3;
          iVar10 = -0x5ad41f38;
        }
      }
      else if (local_148 == 0x126b83c2) {
        FUN_00414c90(local_98);
        iVar10 = -0x9905f58;
      }
      else if (local_148 == 0x12703ddc) {
        _objc_release(local_108);
        iVar10 = 0x3ba888af;
      }
      else {
        iVar10 = 0x19164c02;
        if (local_148 != 0x13244e34) goto LAB_00425c20;
      }
      goto LAB_004297f4;
    }
    if (0x2566e94a < local_148) {
      if (local_148 < 0x2b5b597f) {
        if (local_148 < 0x277f38a3) {
          if (local_148 == 0x2566e94b) {
            iVar10 = -0x1c968d17;
          }
          else {
            iVar10 = -0x357f57eb;
            if (local_148 != 0x262b09fb) {
              if (local_148 == 0x27655405) {
                local_129 = local_120 == local_128;
                uVar9 = (uint)((ulong)((DAT_004cd9e8 | DAT_004cd9ec) * 0x30e69094 + 0x9652d3ac) *
                               0x5e3e4641 >> 0x3e);
                bVar3 = 0x3353b4ca < uVar9;
                bVar4 = uVar9 == 0x3353b4cb;
                iVar10 = 0x27655405;
                iVar5 = -0x3bd35383;
                goto LAB_004297d0;
              }
              goto LAB_00425c20;
            }
          }
        }
        else {
          if (local_148 == 0x277f38a3) {
            uVar9 = (((DAT_004cda30 ^ DAT_004cda34) + 0x5422ac3e) / 0x77e17c31) * -0x5f75d7f7;
            bVar3 = 0x22158efc < uVar9;
            bVar4 = uVar9 == 0x22158efd;
            iVar10 = -0x48c93599;
            iVar5 = 0x34e2424a;
            goto LAB_004297d0;
          }
          if (local_148 == 0x281f693e) {
            uVar9 = 0;
            if (DAT_004cd8fc != 0) {
              uVar9 = DAT_004cd8f8 / DAT_004cd8fc;
            }
            local_b0 = _objc_msgSend(local_a8,PTR_s_entryDepth_0048bf98);
            bVar4 = ((uVar9 ^ 0x8404820) & 0xe94468a8) == 0x2f7f6692;
            iVar10 = 0x6b8dbd59;
            iVar5 = 0x4916b079;
            goto LAB_004292cc;
          }
          if (local_148 != 0x2b24af01) goto LAB_00425c20;
          local_b9 = _objc_msgSend(local_a8,local_b8);
          iVar10 = -0x2f1a0aad;
        }
      }
      else if (local_148 < 0x2c4051eb) {
        if (local_148 != 0x2b5b597f) {
          if (local_148 == 0x2b85edb9) {
            bVar4 = local_fa == '\0';
            iVar5 = -0x30948d35;
            iVar10 = -0x7c062b91;
            goto LAB_004291b0;
          }
          if (local_148 == 0x2babec80) {
            bVar4 = 0x99a00a34 <
                    (uint)((ulong)(DAT_004cd928 & DAT_004cd92c ^ 0xacc348d3) * 0x2eec02e1 >> 0x3d);
            iVar5 = -0xba59018;
            iVar10 = 0x6f886cc8;
            goto LAB_00428c3c;
          }
          goto LAB_00425c20;
        }
        uVar9 = DAT_004cd958 ^ DAT_004cd95c;
        FUN_0041ebf8(0);
        local_f0 = _objc_retainAutoreleasedReturnValue();
        bVar4 = uVar9 == 0x6ec839b6;
        iVar10 = -0x47e3eb6;
        iVar5 = -0x3c5dc33e;
LAB_004292cc:
        if (!bVar4) {
          iVar10 = iVar5;
        }
      }
      else {
        if (local_148 != 0x2c4051eb) {
          if (local_148 == 0x2c8f7490) {
            bVar4 = local_109 == '\0';
            iVar10 = 0x12703ddc;
            iVar5 = -0x63421970;
            goto LAB_004297f0;
          }
          if (local_148 == 0x2d1214ac) goto LAB_00428ec8;
          goto LAB_00425c20;
        }
        iVar10 = 0xf849ccc;
      }
      goto LAB_004297f4;
    }
    if (local_148 < 0x2138b889) {
      if (local_148 < 0x19164c02) {
        if (local_148 == 0x13a7ba77) {
          uVar9 = ((DAT_004cd970 & DAT_004cd974 | 0xf075c2e4) ^ 0x910b5abf) + 0xd663c2b2;
          bVar3 = 0xe6749eb1 < uVar9;
          bVar4 = uVar9 == 0xe6749eb2;
          iVar5 = -0x858a0f3;
          iVar10 = -0x68410a1a;
          goto LAB_00429504;
        }
        if (local_148 == 0x14f21881) {
          uVar9 = ((DAT_004cd9b8 & DAT_004cd9bc) + 0x6fde996b | 0x97232980) * -0x39bc461b;
          local_10a = _objc_msgSend(local_a8,local_c8);
          bVar3 = 0xeb134ec2 < uVar9;
          bVar4 = uVar9 == 0xeb134ec3;
          iVar10 = 0x14f21881;
          iVar5 = -0x3cf3057c;
LAB_004297d0:
          if (!bVar3 || bVar4) {
            iVar10 = iVar5;
          }
          goto LAB_004297f4;
        }
        goto LAB_00425c20;
      }
      if (local_148 != 0x19164c02) {
        if (local_148 != 0x1ed7f23f) {
          if (local_148 == 0x1f777b56) {
            iVar10 = 0x52ffcbd2;
            goto LAB_004297f4;
          }
          goto LAB_00425c20;
        }
        _objc_msgSend(puStack_d8,local_e0);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,PTR_s_enabledMerge_0048ae20);
        _objc_release(uVar6);
        iVar10 = -0x5df68677;
        goto LAB_004297f4;
      }
      bVar4 = (DAT_004cd868 | DAT_004cd86c) == 0x1e575899;
      iVar5 = 0x19164c02;
      iVar10 = 0x4f173f73;
    }
    else if (local_148 < 0x23d912ff) {
      if (local_148 == 0x2138b889) {
        uVar9 = ((DAT_004cdaa8 ^ DAT_004cdaac) & 0x3b678cb5) * 0x3924b086 + 0xe7694599;
        _objc_release(param_1);
        bVar3 = 0xa387fa3c < uVar9;
        bVar4 = uVar9 == 0xa387fa3d;
        iVar10 = 0x2138b889;
        iVar5 = 0x643105e0;
        goto LAB_004297d0;
      }
      if (local_148 == 0x2198c3db) {
        bVar4 = 0xde10f1ba < (DAT_004cda18 | DAT_004cda1c) * 0xc2b2b6 + 0xeced8b2f;
        iVar10 = 0x6850c32d;
        iVar5 = 0x39f1828c;
        goto LAB_00429458;
      }
      if (local_148 != 0x22613837) goto LAB_00425c20;
      iVar5 = FUN_004237f4(param_1,&PTR____CFConstantStringClassReference_004ca870);
      bVar4 = iVar5 == 0;
      iVar5 = 0x7725fc5d;
      iVar10 = -0x610da002;
    }
    else {
      if (local_148 == 0x23d912ff) {
        uVar9 = ((DAT_004cdab0 | DAT_004cdab4) & 0x1c3821ca) + 0xc18e04a3 ^ 0x929272cc;
        bVar3 = 0xda8df6e6 < uVar9;
        bVar4 = uVar9 == 0xda8df6e7;
        iVar5 = -0x200bbd03;
        iVar10 = 0x24410310;
        goto LAB_00429504;
      }
      if (local_148 == 0x24410310) {
        iVar10 = -0x200bbd03;
        goto LAB_004297f4;
      }
      if (local_148 != 0x24bdb072) goto LAB_00425c20;
      uVar9 = DAT_004cd8d8 - DAT_004cd8dc;
      local_99 = FUN_004237f4(local_98,&PTR____CFConstantStringClassReference_004ca850);
      bVar4 = (uVar9 & 0xe3f7fcdc | 0xe3b7ecd4) == 0xdba97158;
      iVar5 = -0x1d11fa83;
      iVar10 = 0x711b31d3;
    }
  }
LAB_004291b0:
  if (bVar4) {
    iVar10 = iVar5;
  }
LAB_004297f4:
  local_148 = iVar10;
  goto LAB_00425c20;
}



// #####################################
// ##### FUN_0041ebf8 @ 0041ebf8
// #####################################

long FUN_0041ebf8(char param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  int local_164;
  long local_160;
  long local_158;
  long local_150;
  undefined1 local_141;
  long local_140;
  undefined1 local_131;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  char local_109;
  long local_108;
  long local_100;
  byte local_f3;
  byte local_f2;
  char local_f1;
  undefined *local_f0;
  byte local_e1;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  char local_a9;
  long local_a8;
  char local_99;
  long local_98;
  byte local_89;
  long local_88;
  undefined8 local_80;
  
  puVar8 = PTR_BubbleBoxConfig_0048c990;
  puVar3 = PTR_s_shared_00489458;
  local_164 = 0x4e29aa44;
LAB_0041ec9c:
  if (0xa4c4572 < local_164) {
    if (0x3fc65eb9 < local_164) {
      if (local_164 < 0x5c830082) {
        if (0x4fa50aa6 < local_164) {
          if (local_164 < 0x51a485fc) {
            if (local_164 == 0x4fa50aa7) {
              local_164 = 0x1fbf309e;
            }
            else if (local_164 == 0x501b4661) {
              local_164 = 0x79884ed6;
              cVar1 = local_f1;
LAB_00420518:
              if (cVar1 == '\0') {
                local_164 = -0x2481f2bf;
              }
            }
          }
          else {
            if (local_164 == 0x51a485fc) {
              bVar10 = local_99 == '\0';
              local_164 = 0x3cf9667d;
              iVar24 = -0x7ac02479;
              goto LAB_004206dc;
            }
            if (local_164 == 0x57417d18) {
              bVar10 = 0xf892d940 < (DAT_004cd338 | DAT_004cd33c) + 0xcb16e4bd;
              iVar24 = -0x68668ba3;
              local_164 = -0xa67cb01;
              goto LAB_004207fc;
            }
            if (local_164 == 0x59c6e538) {
              local_164 = -0x3bfc50b7;
            }
          }
          goto LAB_0041ec9c;
        }
        if (0x476f1e71 < local_164) {
          if (local_164 == 0x476f1e72) goto LAB_0041fa18;
          if (local_164 == 0x4b849d21) {
            local_164 = 0x447cdb9;
          }
          else if (local_164 == 0x4e29aa44) {
            uVar25 = (DAT_004cd260 & DAT_004cd264) + 0xdd0b8a3c;
            bVar9 = 0xfabe79aa < uVar25;
            bVar10 = uVar25 == 0xfabe79ab;
            iVar24 = 0x7aae1691;
            local_164 = 0x5c830082;
            goto LAB_0041fc78;
          }
          goto LAB_0041ec9c;
        }
        if (local_164 == 0x3fc65eba) {
          local_164 = -0x108363de;
          goto LAB_0041ec9c;
        }
        if (local_164 != 0x41f8e14c) goto LAB_0041ec9c;
        uVar25 = 0;
        if (DAT_004cd34c != 0) {
          uVar25 = DAT_004cd348 / DAT_004cd34c;
        }
        uVar25 = uVar25 * -0x3dd9020c + 0x4882f89b;
        _objc_msgSend(local_120,local_128,local_88);
        _objc_msgSend(local_120,PTR_s_setPluginEnabled__0048c060,local_89);
        bVar9 = 0xc4080bb5 < uVar25;
        bVar10 = uVar25 == 0xc4080bb6;
        local_164 = 0x41f8e14c;
        iVar24 = -0x4c84306a;
      }
      else {
        if (local_164 < 0x75af2d83) {
          if (local_164 < 0x68345957) {
            if (local_164 == 0x5c830082) {
              _objc_msgSend(puVar8,puVar3);
              uVar23 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar23,PTR_s_changeRevision_0048b648);
              FUN_0041db34();
              local_164 = 0x7aae1691;
            }
            else if (local_164 == 0x619b1765) {
              iVar24 = DAT_004cd358 - DAT_004cd35c;
              _objc_release(local_158);
              _objc_release(local_80);
              _objc_autoreleaseReturnValue(local_160);
              bVar10 = 0x1ba89599 < (iVar24 * -0x7f71a516 + 0x2d44c43aU & 0xa80d54e4);
              local_164 = 0x619b1765;
              iVar24 = 0x30714bdf;
LAB_0041fb54:
              if (bVar10) {
                local_164 = iVar24;
              }
            }
          }
          else if (local_164 == 0x68345957) {
            local_164 = 0x82c272c;
            local_140 = local_d8;
          }
          else if (local_164 == 0x705ca7a6) {
            local_b8 = DAT_004d20f0;
            local_164 = 0x4fa50aa7;
            if ((DAT_004cd2a8 + DAT_004cd2ac + 0xc660265bU | 0x51819d51) == 0x8c072e47) {
              local_164 = 0x705ca7a6;
            }
          }
          else if (local_164 == 0x74f4cf51) {
            local_164 = 0x2833ae47;
          }
          goto LAB_0041ec9c;
        }
        if (0x79b902d8 < local_164) {
          if (local_164 == 0x79b902d9) {
            lVar22 = _objc_msgSend(local_e0,local_f0);
            local_f1 = lVar22 == local_88;
            local_164 = 0x75af2d83;
          }
          else if (local_164 == 0x7aae1691) {
            iVar24 = DAT_004cd268 - DAT_004cd26c;
            _objc_msgSend(puVar8,puVar3);
            local_80 = _objc_retainAutoreleasedReturnValue();
            local_88 = _objc_msgSend(local_80,PTR_s_changeRevision_0048b648);
            local_89 = FUN_0041db34();
            local_98 = DAT_004d20f0;
            local_164 = 0x5c830082;
            if ((iVar24 * -0x481fddce + 0xf81531b0U | 0x61a323ba) != 0xbbab12b6) {
              local_164 = 0x114c754;
            }
          }
          else if (local_164 == 0x7b63490b) {
            local_99 = param_1;
            if (local_98 == 0) {
              local_99 = '\x01';
            }
            bVar10 = (DAT_004cd278 + DAT_004cd27c & 0xda3fcde2U) * 0x7568bda7 == 0x631e422f;
            iVar24 = -0x541ae5ad;
            local_164 = 0x51a485fc;
LAB_0041f480:
            if (bVar10) {
              local_164 = iVar24;
            }
          }
          goto LAB_0041ec9c;
        }
        if (local_164 != 0x75af2d83) {
          if (local_164 == 0x75e55555) {
            local_164 = -0x4c0c2812;
            if ((DAT_004cd2a0 + DAT_004cd2a4 + 0xc4806753U ^ 0xc7047779) < 0x94f470ad) {
              local_164 = 0x705ca7a6;
            }
          }
          else if (local_164 == 0x79884ed6) goto LAB_0041f62c;
          goto LAB_0041ec9c;
        }
        uVar25 = (DAT_004cd2f0 + DAT_004cd2f4 & 0x5cd38c2aU) * 0xda14636 | 0x1c287d19;
        bVar9 = 0xb1b4f181 < uVar25;
        bVar10 = uVar25 == 0xb1b4f182;
        local_164 = -0x70ab63e7;
        iVar24 = -0x7493b332;
      }
LAB_004208e4:
      if (!bVar9 || bVar10) {
        local_164 = iVar24;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < 0x1fbf309e) {
      if (local_164 < 0x1361aaa7) {
        if (local_164 < 0xbfce8db) {
          if (local_164 == 0xa4c4573) {
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,puVar3);
            _objc_retainAutoreleasedReturnValue();
            local_164 = 0xadb6047;
          }
          else if (local_164 == 0xadb6047) {
            uVar25 = DAT_004cd2b8 - DAT_004cd2bc;
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,puVar3);
            local_c8 = _objc_retainAutoreleasedReturnValue();
            bVar10 = 0xe2a23b79 < ((uVar25 ^ 0x94a1a7e3) / 0x4dc08f91 | 0x2569c090);
            iVar24 = 0xadb6047;
            local_164 = 0x74f4cf51;
            goto LAB_004207fc;
          }
        }
        else if (local_164 == 0xbfce8db) {
          local_131 = _objc_msgSend(local_80,local_130);
          local_164 = -0x74ffdc21;
        }
        else if (local_164 == 0xd592755) {
          local_100 = DAT_004d20f0;
          local_164 = 0x6766e27;
          if ((DAT_004cd318 & DAT_004cd31c & 0x65eb7cff | 0x21ab788b) == 0x7d13f6fc) {
            local_164 = 0xd592755;
          }
        }
        else if (local_164 == 0xd988494) {
          uVar25 = 0;
          if (DAT_004cd274 != 0) {
            uVar25 = DAT_004cd270 / DAT_004cd274;
          }
          local_164 = -0x541ae5ad;
          if ((uVar25 + 0xd4fed19f) / 0xed8e9b0 != 0xe76b297) {
            local_164 = 0x7b63490b;
          }
        }
      }
      else if (local_164 < 0x164f7cd3) {
        if (local_164 == 0x1361aaa7) {
          local_164 = 0x3fc65eba;
          if (((DAT_004cd290 - DAT_004cd294 | 0x7e40a110U) >> 1) / 0x7cd2209b != 0xe1c6cd7a) {
            local_164 = -0x108363de;
          }
        }
        else if (local_164 == 0x159051a6) {
          local_118 = DAT_004d20f0;
          local_164 = 0x1f0f8730;
        }
      }
      else {
        if (local_164 == 0x164f7cd3) {
          local_e0 = DAT_004d20f0;
          local_e1 = DAT_004d20f0 == 0;
          uVar25 = -(int)((long)((ulong)((DAT_004cd2d8 | DAT_004cd2dc) * -0x5aa1bc3e + 0x845733fb) *
                                0x87974197) >> 0x3f);
          bVar9 = 0xf2b354a3 < uVar25;
          bVar10 = uVar25 == 0xf2b354a4;
          local_164 = -0x57754f2c;
          iVar24 = -0x7721a409;
          goto LAB_004208e4;
        }
        if (local_164 == 0x1b4aa426) {
          local_a8 = _objc_msgSend(local_98,PTR_s_revision_0048c010);
          local_164 = -0x18b26da1;
        }
        else if (local_164 == 0x1f0f8730) {
          _objc_retain(local_118);
          local_164 = 0x2eeed5d6;
        }
      }
    }
    else if (local_164 < 0x2eeed5d6) {
      if (local_164 < 0x29b8245e) {
        if (local_164 == 0x1fbf309e) {
          _objc_msgSend(local_b8,PTR_s_bubble_0048a0c8);
          local_c0 = _objc_retainAutoreleasedReturnValue();
          local_164 = 0x29b8245e;
        }
        else if (local_164 == 0x2833ae47) {
          local_d0 = PTR_s_currentBubble_0048a848;
          local_164 = -0x36035bce;
        }
      }
      else if (local_164 == 0x29b8245e) {
        local_164 = 0x82c272c;
        local_140 = local_c0;
      }
      else if (local_164 == 0x2ba69dcf) {
        _objc_msgSend(local_100,PTR_s_bubble_0048a0c8);
        _objc_retainAutoreleasedReturnValue();
        local_164 = -0x550ac789;
      }
      else if (local_164 == 0x2ed9d48f) {
        local_164 = 0x476f1e72;
      }
    }
    else if (local_164 < 0x340d5a47) {
      if (local_164 == 0x2eeed5d6) {
        uVar25 = DAT_004cd330 + DAT_004cd334 + 0x47bd5e84U ^ 0xe9c6ab9e;
        bVar9 = 0xd1c62758 < uVar25;
        bVar10 = uVar25 == 0xd1c62759;
        local_164 = -0x68668ba3;
        iVar24 = 0x57417d18;
        goto LAB_004208e4;
      }
      if (local_164 == 0x3250ba26) {
        local_164 = -0x45dcfb31;
        if ((uint)((ulong)(DAT_004cd310 * DAT_004cd314 ^ 0x8d6aefb8) * 0x2d39df79 >> 0x3d) *
            -0x7b3fbc8b < 0x92383e47) {
          local_164 = 0xd592755;
        }
      }
      else if (local_164 == 0x30714bdf) {
        return local_160;
      }
    }
    else if (local_164 == 0x340d5a47) {
      local_130 = PTR_s_enabledMerge_0048ae20;
      local_164 = 0xbfce8db;
    }
    else {
      if (local_164 == 0x3cf9667d) {
        bVar10 = 0xa3cd773d < (DAT_004cd2b0 - DAT_004cd2b4 & 0xc3c9fc6U | 0xc0c0340) * -0x6881ab48;
        local_164 = 0xadb6047;
        iVar24 = 0xa4c4573;
        goto LAB_0041fb54;
      }
      if (local_164 == 0x3e3b3b0b) {
        _objc_msgSend(local_c8,local_d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(local_c8);
        local_164 = -0x4fffdf9a;
      }
    }
    goto LAB_0041ec9c;
  }
  if (local_164 < -0x45dcfb31) {
    if (local_164 < -0x636b0748) {
      if (local_164 < -0x70ab63e7) {
        if (local_164 < -0x7721a409) {
          if (local_164 == -0x7bd3c8bf) {
            local_164 = -0x20931a38;
          }
          else if ((local_164 == -0x7ac02479) &&
                  (local_164 = 0x1b4aa426,
                  (DAT_004cd280 + DAT_004cd284 ^ 0x78bc39bdU) + 0xf2d1f4d2 < 0x5b6d8446)) {
            local_164 = -0x1fa7da3c;
          }
        }
        else if (local_164 == -0x7721a409) {
          iVar24 = -0x6b26622b;
          bVar2 = local_e1;
LAB_004205a4:
          local_164 = -0x2481f2bf;
          if (bVar2 == 0) {
            local_164 = iVar24;
          }
        }
        else if (local_164 == -0x74ffdc21) {
          local_164 = -0x4c3cf571;
          local_141 = local_131;
        }
        else if (local_164 == -0x7493b332) {
          local_164 = 0x501b4661;
        }
      }
      else if (local_164 < -0x6b26622b) {
        if (local_164 == -0x70ab63e7) {
          local_164 = -0x7493b332;
        }
        else if (local_164 == -0x6b3a227c) {
          local_128 = PTR_s_setRevision__0048c058;
          local_164 = -0x29e45d3d;
        }
      }
      else if (local_164 == -0x6b26622b) {
        local_164 = -0x7bd3c8bf;
        if ((DAT_004cd2e0 ^ DAT_004cd2e4) * 0xf53aaff != 0x28462832) {
          local_164 = -0x20931a38;
        }
      }
      else if (local_164 == -0x6a68b6a8) {
        _objc_release(local_158);
        _objc_release(local_80);
        _objc_autoreleaseReturnValue(local_160);
        local_164 = 0x619b1765;
      }
      else if (local_164 == -0x68668ba3) {
        local_164 = 0x57417d18;
      }
    }
    else if (local_164 < -0x509caff7) {
      if (local_164 < -0x57754f2c) {
        if (local_164 == -0x636b0748) {
          local_160 = local_150;
          uVar25 = 0;
          if (DAT_004cd354 != 0) {
            uVar25 = DAT_004cd350 / DAT_004cd354;
          }
          local_164 = -0x6a68b6a8;
          if (uVar25 != 0xab9faafd) {
            local_164 = 0x619b1765;
          }
        }
        else if (local_164 == -0x597dc962) {
          bVar10 = ((DAT_004cd320 & DAT_004cd324) + 0x192c57b4 & 0xb1065cde) == 0x508081b0;
          local_164 = -0x550ac789;
          iVar24 = 0x2ba69dcf;
LAB_004206dc:
          if (bVar10) {
            local_164 = iVar24;
          }
        }
      }
      else if (local_164 == -0x57754f2c) {
        local_164 = 0x164f7cd3;
      }
      else if (local_164 == -0x550ac789) {
        uVar25 = (DAT_004cd328 * DAT_004cd32c | 0xaf6c394U) * 0xcc37630 | 0x8f93116c;
        _objc_msgSend(local_100,PTR_s_bubble_0048a0c8);
        local_108 = _objc_retainAutoreleasedReturnValue();
        local_109 = local_108 == local_158;
        bVar9 = 0x5fbdbdcf < uVar25;
        bVar10 = uVar25 == 0x5fbdbdd0;
        iVar24 = 0x2ba69dcf;
        local_164 = 0x59c6e538;
LAB_0041fc78:
        if (!bVar9 || bVar10) {
          local_164 = iVar24;
        }
      }
      else if (local_164 == -0x541ae5ad) {
        local_164 = 0x7b63490b;
      }
    }
    else if (local_164 < -0x4c84306a) {
      if (local_164 == -0x509caff7) {
        _objc_msgSend(local_120,local_128,local_88);
        _objc_msgSend(local_120,PTR_s_setPluginEnabled__0048c060,local_89);
        local_164 = 0x41f8e14c;
      }
      else if (local_164 == -0x4fffdf9a) {
        iVar24 = DAT_004cd2c8 - DAT_004cd2cc;
        _objc_msgSend(local_c8,local_d0);
        local_d8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(local_c8);
        uVar25 = (uint)(iVar24 * 0x783f91d4) / 0x3779ba1;
        bVar9 = 0x295b0c68 < uVar25;
        bVar10 = uVar25 == 0x295b0c69;
        local_164 = -0x4fffdf9a;
        iVar24 = 0x68345957;
        goto LAB_004208e4;
      }
    }
    else if (local_164 == -0x4c84306a) {
      local_164 = 0x340d5a47;
      if (local_89 == 0) {
        local_164 = -0x4c3cf571;
      }
      local_141 = 0;
    }
    else if (local_164 == -0x4c3cf571) {
      _objc_msgSend(local_120,PTR_s_setMergeEnabled__0048c068,local_141);
      uVar23 = _objc_msgSend(local_80,PTR_s_enabledMergeOnlyRoom_0048ae30);
      _objc_msgSend(local_120,PTR_s_setOnlyRoom__0048c070,uVar23);
      lVar22 = _objc_msgSend(local_80,PTR_s_mergeMode_0048ae40);
      _objc_msgSend(local_120,PTR_s_setManual__0048c078,lVar22 != 0);
      puVar4 = PTR_s_timeSeparator_0048a8e0;
      uVar23 = _objc_msgSend(local_80,PTR_s_timeSeparator_0048a8e0);
      _objc_msgSend(local_120,PTR_s_setTimeSeparator__0048a930,uVar23);
      puVar5 = PTR_s_systemSeparator_0048a8f0;
      uVar23 = _objc_msgSend(local_80,PTR_s_systemSeparator_0048a8f0);
      _objc_msgSend(local_120,PTR_s_setSystemSeparator__0048a928,uVar23);
      puVar6 = PTR_s_emoticonSeparator_0048a900;
      uVar23 = _objc_msgSend(local_80,PTR_s_emoticonSeparator_0048a900);
      _objc_msgSend(local_120,PTR_s_setEmoticonSeparator__0048a920,uVar23);
      puVar7 = PTR_s_mediaSeparator_0048a910;
      uVar23 = _objc_msgSend(local_80,PTR_s_mediaSeparator_0048a910);
      _objc_msgSend(local_120,PTR_s_setMediaSeparator__0048a918,uVar23);
      _objc_msgSend(local_120,PTR_s_setBubble__0048a9f8,local_158);
      uVar11 = _objc_msgSend(local_120,PTR_s_mergeEnabled_0048bfb8);
      uVar12 = _objc_msgSend(local_120,PTR_s_onlyRoom_0048c080);
      uVar13 = _objc_msgSend(local_120,PTR_s_manual_0048c088);
      uVar14 = _objc_msgSend(local_120,puVar4);
      uVar15 = _objc_msgSend(local_120,puVar5);
      uVar16 = _objc_msgSend(local_120,puVar6);
      uVar17 = _objc_msgSend(local_120,puVar7);
      _objc_msgSend(local_120,PTR_s_setPolicy__0048c028,
                    (((((((uVar11 & 0xffffffff ^ 0x811c9dc5) * 0x1000193 ^ uVar12 & 0xffffffff) *
                         0x1000193 ^ uVar13 & 0xffffffff) * 0x1000193 ^ uVar14 & 0xffffffff) *
                       0x1000193 ^ uVar15 & 0xffffffff) * 0x1000193 ^ uVar16 & 0xffffffff) *
                     0x1000193 ^ uVar17 & 0xffffffff) * 0x1000193);
      uVar11 = _objc_msgSend(local_80,PTR_s_enabledAvatarCard_0048a258);
      uVar12 = _objc_msgSend(local_80,PTR_s_enabledHideSystemTime_0048ad20);
      uVar13 = _objc_msgSend(local_80,PTR_s_roomHeadHideMode_0048afa8);
      uVar14 = _objc_msgSend(local_80,PTR_s_chatHeadHideMode_0048afb8);
      uVar15 = _objc_msgSend(local_80,PTR_s_headDisplay_0048ae58);
      uVar16 = _objc_msgSend(local_80,PTR_s_layoutSpace_0048ae68);
      _objc_msgSend(local_80,PTR_s_mergeLayoutValue_0048ae70);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_s_hash_0048c090;
      uVar17 = _objc_msgSend(uVar23,PTR_s_hash_0048c090);
      _objc_release(uVar23);
      _objc_msgSend(local_158,PTR_s_bubbleId_0048a090);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar18 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_158,PTR_s_version_0048a080);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar19 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      uVar20 = _objc_msgSend(local_158,PTR_s_space_0048c098);
      uVar21 = _objc_msgSend(local_158,PTR_s_isHeadToBottom_0048b5f0);
      _objc_msgSend(local_120,PTR_s_setLayoutPolicy__0048c030,
                    ((uVar20 ^ (uVar19 ^ (uVar18 ^ (uVar17 ^ ((((((((ulong)local_89 ^ 0x811c9dc5) *
                                                                   0x1000193 ^ uVar11 & 0xffffffff)
                                                                  * 0x1000193 ^ uVar12 & 0xffffffff)
                                                                 * 0x1000193 ^ uVar13) * 0x1000193 ^
                                                               uVar14) * 0x1000193 ^ uVar15) *
                                                              0x1000193 ^ uVar16) * 0x1000193) *
                                                   0x1000193) * 0x1000193) * 0x1000193) * 0x1000193
                    ^ uVar21 & 0xffffffff) * 0x1000193);
      uVar23 = _objc_msgSend(local_80,PTR_s_enabledMsgTime_0048ad10);
      _objc_msgSend(local_120,PTR_s_setTimeEnabled__0048c040,uVar23);
      uVar11 = _objc_msgSend(local_120,PTR_s_timeEnabled_0048c000);
      uVar12 = _objc_msgSend(local_80,PTR_s_msgTimeOnlyLast_0048ad38);
      uVar13 = _objc_msgSend(local_80,PTR_s_msgTimeDisplay_00489ef0);
      _objc_msgSend(local_80,PTR_s_timeOffsetY_0048ad60);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar14 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_80,PTR_s_timeOffsetX_0048ad58);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar15 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      uVar16 = _objc_msgSend(local_80,PTR_s_timeCustomStyle_0048ad48);
      _objc_msgSend(local_80,PTR_s_timeCustomString_0048ad50);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar17 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_120,PTR_s_setTimePolicy__0048c038,
                    (uVar17 ^ (uVar16 ^ (uVar15 ^ (uVar14 ^ (((uVar11 & 0xffffffff ^ 0x811c9dc5) *
                                                              0x1000193 ^ uVar12 & 0xffffffff) *
                                                             0x1000193 ^ uVar13) * 0x1000193) *
                                                  0x1000193) * 0x1000193) * 0x1000193) * 0x1000193);
      _objc_retain(local_120);
      lVar22 = DAT_004d20f0;
      DAT_004d20f0 = local_120;
      _objc_release(lVar22);
      local_164 = -0x636b0748;
      local_150 = local_120;
    }
    else if (local_164 == -0x4c0c2812) {
      local_164 = 0x705ca7a6;
    }
    goto LAB_0041ec9c;
  }
  if (local_164 < -0x18b26da1) {
    if (local_164 < -0x276ced9d) {
      if (local_164 < -0x3bfc50b7) {
        if (local_164 == -0x45dcfb31) {
          local_164 = 0xd592755;
        }
        else if (local_164 == -0x400afe4f) {
          _objc_msgSend(DAT_004d20f0,PTR_s_pluginEnabled_0048c050);
LAB_0041f62c:
          local_164 = 0x44d1b61;
        }
      }
      else {
        if (local_164 == -0x3bfc50b7) {
          _objc_release(local_108);
          local_164 = 0x159051a6;
          cVar1 = local_109;
          goto LAB_00420518;
        }
        if (local_164 == -0x36035bce) {
          bVar10 = 0x3e03aa35 <
                   ((DAT_004cd2c0 | DAT_004cd2c4 | 0x4a9782f) + 0xbde9fb9e & 0x1ebf2c94);
          local_164 = -0x4fffdf9a;
          iVar24 = 0x3e3b3b0b;
          goto LAB_0041fb54;
        }
        if (local_164 == -0x29e45d3d) {
          uVar25 = (byte)((ulong)((DAT_004cd340 | DAT_004cd344) + 0x2bab2ae6) * 0x86e05d7 >> 0x38) +
                   0x8c45adce;
          bVar9 = 0xee387df9 < uVar25;
          bVar10 = uVar25 == 0xee387dfa;
          iVar24 = 0x41f8e14c;
          local_164 = -0x509caff7;
          goto LAB_0041fc78;
        }
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < -0x20931a38) {
      if (local_164 == -0x276ced9d) {
LAB_0041fa18:
        local_164 = -0x20422eb2;
      }
      else if (local_164 == -0x2481f2bf) {
        local_120 = _objc_msgSend(PTR_BBNewOptions_0048ccd8,PTR_s_new_0048b3f0);
        local_164 = -0x6b3a227c;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 != -0x20931a38) {
      if (local_164 == -0x20422eb2) {
        uVar25 = (DAT_004cd308 | DAT_004cd30c | 0xd6710bc) / 0x2cbb27ac ^ 0x79ce97eb;
        local_f3 = (local_89 ^ local_f2) & 1;
        bVar9 = 0xac428e20 < uVar25;
        bVar10 = uVar25 == 0xac428e21;
        local_164 = -0x276ced9d;
        iVar24 = -0x11e77c96;
        goto LAB_004208e4;
      }
      if (local_164 == -0x1fa7da3c) {
        _objc_msgSend(local_98,PTR_s_revision_0048c010);
        local_164 = 0x1b4aa426;
      }
      goto LAB_0041ec9c;
    }
    local_f0 = PTR_s_revision_0048c010;
    bVar10 = 0x90ee3467 <
             ((uint)((ulong)((DAT_004cd2e8 ^ DAT_004cd2ec) & 0xd05972e2) * 0xd3d54785 >> 0x3e) ^
             0x3b478dea);
    iVar24 = -0x7bd3c8bf;
    local_164 = -0x15abfc39;
  }
  else {
    if (local_164 < -0xa67cb01) {
      if (local_164 < -0x11e77c96) {
        if (local_164 == -0x18b26da1) {
          local_164 = 0x1361aaa7;
        }
        else if (local_164 == -0x15abfc39) {
          local_164 = 0x79b902d9;
        }
      }
      else if (local_164 == -0x11e77c96) {
        local_164 = -0xd722c42;
      }
      else if (local_164 == -0x108363de) {
        local_a9 = local_88 == local_a8;
        local_164 = -0x108363de;
        if ((DAT_004cd298 & DAT_004cd29c) * 0x63519300 != -0x54353e0d) {
          local_164 = 0x4b849d21;
        }
      }
      else if (local_164 == -0xd722c42) {
        iVar24 = 0x3250ba26;
        bVar2 = local_f3;
        goto LAB_004205a4;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < 0x44d1b61) {
      if (local_164 == -0xa67cb01) {
        local_164 = -0x636b0748;
        local_150 = local_118;
      }
      else if (local_164 == 0x114c754) {
        local_164 = 0xd988494;
      }
      else if (local_164 == 0x447cdb9) {
        bVar10 = local_a9 == '\0';
        iVar24 = 0x3cf9667d;
        local_164 = 0x75e55555;
        goto LAB_0041f480;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 == 0x44d1b61) {
      uVar25 = DAT_004cd2f8 | DAT_004cd2fc;
      local_f2 = _objc_msgSend(DAT_004d20f0,PTR_s_pluginEnabled_0048c050);
      bVar10 = 0xcad09344 < (uVar25 & 0x21400200) + 0x54fa600d;
      iVar24 = -0x400afe4f;
      local_164 = 0x2ed9d48f;
    }
    else {
      if (local_164 == 0x6766e27) {
        local_164 = -0x597dc962;
        goto LAB_0041ec9c;
      }
      if (local_164 != 0x82c272c) goto LAB_0041ec9c;
      local_158 = local_140;
      bVar10 = 0xfaa2d7a2 < (uint)(DAT_004cd2d0 * DAT_004cd2d4 * 0x3b8fbc0);
      iVar24 = -0x57754f2c;
      local_164 = 0x164f7cd3;
    }
  }
LAB_004207fc:
  if (bVar10) {
    local_164 = iVar24;
  }
  goto LAB_0041ec9c;
}



// #####################################
// ##### FUN_00414c90 @ 00414c90
// #####################################

/* WARNING: Removing unreachable block (ram,0x0041d7ec) */
/* WARNING: Removing unreachable block (ram,0x0041d81c) */
/* WARNING: Removing unreachable block (ram,0x0041d824) */

void FUN_00414c90(long param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  ulong uVar25;
  undefined *puVar26;
  undefined **ppuVar27;
  undefined8 *puVar28;
  undefined *puVar29;
  undefined *local_230;
  undefined *local_228;
  undefined *local_220;
  undefined *local_218;
  undefined *local_210;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1f8;
  undefined *local_1f0;
  long local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  undefined *local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  uint local_11c;
  ulong local_118;
  uint local_10c;
  undefined *local_108;
  undefined8 *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  
  ppuVar24 = &local_230;
  ppuVar27 = &local_230;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  do {
  } while ((DAT_004cbdd8 - DAT_004cbddc & 0x6281dU) == 0x1cd55c3b);
  do {
  } while ((int)((long)((ulong)((DAT_004cbde8 | DAT_004cbdec) + 0x5ee49a9d) * 0xa0b7bf4b) >> 0x3f) *
           -0x3ca27605 == -0xab50027);
  if (DAT_004d2190 == 0) {
    DAT_004ca6b0 = DAT_004ca690 ^ 0x79;
    DAT_004ca6b1 = DAT_004ca691 ^ 0xbd;
    DAT_004ca6b2 = DAT_004ca692 ^ 0xdd;
    DAT_004ca6b3 = DAT_004ca693;
    DAT_004ca6b4 = DAT_004ca694 ^ 0xf2;
    DAT_004ca6b5 = DAT_004ca695 ^ 0x8e;
    DAT_004ca6b6 = DAT_004ca696 ^ 0x2e;
    DAT_004ca6b7 = DAT_004ca697 ^ 0xe2;
    DAT_004ca6b8 = DAT_004ca698 ^ 0xd5;
    DAT_004ca6b9 = DAT_004ca699 ^ 0x30;
    DAT_004ca6ba = DAT_004ca69a ^ 0xc3;
    DAT_004ca6bb = DAT_004ca69b ^ 0x89;
    DAT_004ca6bc = DAT_004ca69c ^ 0x7e;
    DAT_004ca6bd = DAT_004ca69d ^ 0x13;
    DAT_004ca6be = DAT_004ca69e ^ 0x5b;
    DAT_004ca6bf = DAT_004ca69f ^ 0xdf;
    DAT_004ca6c0 = DAT_004ca6a0 ^ 0x28;
    DAT_004ca6c1 = DAT_004ca6a1 ^ 200;
    DAT_004ca6c2 = DAT_004ca6a2 ^ 0x19;
    DAT_004ca6c3 = DAT_004ca6a3 ^ 0x45;
    DAT_004ca6c4 = DAT_004ca6a4 ^ 0x72;
    DAT_004ca6c5 = DAT_004ca6a5 ^ 0xd;
    DAT_004ca6c6 = DAT_004ca6a6 ^ 0xa5;
    DAT_004ca6c7 = DAT_004ca6a7 ^ 0x59;
    DAT_004ca6c8 = DAT_004ca6a8 ^ 0xf;
    DAT_004ca6c9 = DAT_004ca6a9 ^ 0x96;
    DAT_004ca6ca = DAT_004ca6aa ^ 0xd5;
    DAT_004ca6cb = DAT_004ca6ab ^ 0x97;
    DAT_004ca6cc = DAT_004ca6ac ^ 0xee;
    DAT_004ca6cd = DAT_004ca6ad ^ 0xa8;
    DAT_004ca5f0 = DAT_004ca5d0 ^ 0x8f;
    DAT_004ca5f1 = DAT_004ca5d1 ^ 0x2c;
    DAT_004ca5f2 = DAT_004ca5d2 ^ 0xac;
    DAT_004ca5f3 = DAT_004ca5d3 ^ 0xf3;
    DAT_004ca5f4 = DAT_004ca5d4 ^ 0xf0;
    DAT_004ca5f5 = DAT_004ca5d5 ^ 0xb5;
    DAT_004ca5f6 = DAT_004ca5d6 ^ 0x51;
    DAT_004ca5f7 = DAT_004ca5d7 ^ 0x40;
    DAT_004ca5f8 = DAT_004ca5d8 ^ 0x16;
    DAT_004ca5f9 = DAT_004ca5d9 ^ 0xe5;
    DAT_004ca5fa = DAT_004ca5da ^ 0x40;
    DAT_004ca5fb = DAT_004ca5db ^ 0xb7;
    DAT_004ca5fc = DAT_004ca5dc ^ 0x23;
    DAT_004ca5fd = DAT_004ca5dd ^ 0xbf;
    DAT_004ca5fe = DAT_004ca5de ^ 6;
    DAT_004ca5ff = DAT_004ca5df ^ 0x68;
    DAT_004ca600 = DAT_004ca5e0 ^ 0x10;
    DAT_004ca601 = DAT_004ca5e1 ^ 0xeb;
    DAT_004ca602 = DAT_004ca5e2 ^ 0x17;
    DAT_004ca603 = DAT_004ca5e3 ^ 0x3f;
    DAT_004ca604 = DAT_004ca5e4 ^ 0xcb;
    DAT_004ca605 = DAT_004ca5e5 ^ 0xcb;
    DAT_004ca606 = DAT_004ca5e6 ^ 0xbc;
    DAT_004ca607 = DAT_004ca5e7 ^ 0x87;
    DAT_004ca608 = DAT_004ca5e8 ^ 0xf4;
    DAT_004ca570 = DAT_004ca550 ^ 0x49;
    DAT_004ca571 = DAT_004ca551 ^ 0xe9;
    DAT_004ca572 = DAT_004ca552 ^ 0xfb;
    DAT_004ca573 = DAT_004ca553 ^ 0xaf;
    DAT_004ca574 = DAT_004ca554 ^ 0xd8;
    DAT_004ca575 = DAT_004ca555 ^ 0x50;
    DAT_004ca576 = DAT_004ca556 ^ 0xab;
    DAT_004ca577 = DAT_004ca557 ^ 0xb7;
    DAT_004ca578 = DAT_004ca558 ^ 0xc9;
    DAT_004ca579 = DAT_004ca559 ^ 0x54;
    DAT_004ca57a = DAT_004ca55a ^ 0x8b;
    DAT_004ca57b = DAT_004ca55b ^ 0x33;
    DAT_004ca57c = DAT_004ca55c ^ 0x69;
    DAT_004ca57d = DAT_004ca55d ^ 0xf7;
    DAT_004ca57e = DAT_004ca55e ^ 0x12;
    DAT_004ca57f = DAT_004ca55f ^ 0x8e;
    DAT_004ca580 = DAT_004ca560 ^ 0x98;
    DAT_004ca581 = DAT_004ca561 ^ 0x6e;
    DAT_004ca541 = DAT_004ca537 ^ 0x92;
    DAT_004ca542 = DAT_004ca538 ^ 0x9e;
    DAT_004ca543 = DAT_004ca539 ^ 0x43;
    DAT_004ca544 = DAT_004ca53a ^ 0xee;
    DAT_004ca545 = DAT_004ca53b ^ 1;
    DAT_004ca546 = DAT_004ca53c ^ 0xeb;
    DAT_004ca547 = DAT_004ca53d ^ 0xf;
    DAT_004ca548 = DAT_004ca53e ^ 0xfb;
    DAT_004ca549 = DAT_004ca53f;
    DAT_004ca54a = DAT_004ca540 ^ 0x8c;
    DAT_004ca520 = DAT_004ca500 ^ 0x60;
    DAT_004ca521 = DAT_004ca501 ^ 0xbb;
    DAT_004ca522 = DAT_004ca502 ^ 0xaa;
    DAT_004ca523 = DAT_004ca503 ^ 0x27;
    DAT_004ca524 = DAT_004ca504 ^ 0x38;
    DAT_004ca525 = DAT_004ca505 ^ 0x5c;
    DAT_004ca526 = DAT_004ca506 ^ 0xdf;
    DAT_004ca527 = DAT_004ca507 ^ 0x92;
    DAT_004ca528 = DAT_004ca508 ^ 0x31;
    DAT_004ca529 = DAT_004ca509 ^ 0x48;
    DAT_004ca52a = DAT_004ca50a ^ 0xd3;
    DAT_004ca52b = DAT_004ca50b ^ 0xd3;
    DAT_004ca52c = DAT_004ca50c ^ 0xd5;
    DAT_004ca52d = DAT_004ca50d ^ 0x2d;
    DAT_004ca52e = DAT_004ca50e ^ 0xed;
    DAT_004ca52f = DAT_004ca50f ^ 0xd2;
    DAT_004ca530 = DAT_004ca510 ^ 0xfe;
    DAT_004ca531 = DAT_004ca511 ^ 0x35;
    DAT_004ca532 = DAT_004ca512 ^ 0x83;
    DAT_004ca533 = DAT_004ca513 ^ 0x7f;
    DAT_004ca534 = DAT_004ca514 ^ 0xb1;
    DAT_004ca535 = DAT_004ca515 ^ 0x7e;
    DAT_004ca536 = DAT_004ca516 ^ 0x40;
    DAT_004ca670 = DAT_004ca650 ^ 0x84;
    DAT_004ca671 = DAT_004ca651 ^ 0x71;
    DAT_004ca672 = DAT_004ca652 ^ 0xc3;
    DAT_004ca673 = DAT_004ca653 ^ 0xd1;
    DAT_004ca674 = DAT_004ca654 ^ 0xd2;
    DAT_004ca675 = DAT_004ca655 ^ 0xce;
    DAT_004ca677 = DAT_004ca657 ^ 0x67;
    DAT_004ca678 = DAT_004ca658 ^ 0x36;
    DAT_004ca679 = DAT_004ca659 ^ 0xb7;
    DAT_004ca67c = DAT_004ca65c ^ 0xd3;
    DAT_004ca676 = DAT_004ca656 ^ 0x60;
    DAT_004ca67a = DAT_004ca65a ^ 0xe;
    DAT_004ca67b = DAT_004ca65b ^ 0xdf;
    do {
      DAT_004ca67d = DAT_004ca65d ^ 0xa7;
      DAT_004ca67e = DAT_004ca65e ^ 0x12;
      DAT_004ca67f = DAT_004ca65f ^ 0x87;
      DAT_004ca680 = DAT_004ca660 ^ 0x87;
      DAT_004ca681 = DAT_004ca661 ^ 0xf5;
      DAT_004ca682 = DAT_004ca662 ^ 0xbd;
      DAT_004ca683 = DAT_004ca663 ^ 0x3a;
      DAT_004ca684 = DAT_004ca664 ^ 0x89;
      DAT_004ca685 = DAT_004ca665 ^ 0x2a;
      DAT_004ca686 = DAT_004ca666 ^ 0x39;
      DAT_004ca630 = DAT_004ca610 ^ 0xd3;
      DAT_004ca631 = DAT_004ca611 ^ 0x59;
      DAT_004ca632 = DAT_004ca612 ^ 0xe4;
      DAT_004ca633 = DAT_004ca613 ^ 0xbe;
      DAT_004ca634 = DAT_004ca614 ^ 0xe1;
      DAT_004ca635 = DAT_004ca615 ^ 0x60;
      DAT_004ca636 = DAT_004ca616 ^ 0x96;
      DAT_004ca637 = DAT_004ca617 ^ 0x48;
      DAT_004ca638 = DAT_004ca618 ^ 0x40;
      DAT_004ca639 = DAT_004ca619 ^ 0xc2;
      DAT_004ca63a = DAT_004ca61a ^ 0x33;
      DAT_004ca63b = DAT_004ca61b ^ 0xc6;
      DAT_004ca63c = DAT_004ca61c ^ 0x3a;
      DAT_004ca63d = DAT_004ca61d ^ 0x60;
      DAT_004ca63e = DAT_004ca61e ^ 0x23;
      DAT_004ca63f = DAT_004ca61f ^ 0x62;
      DAT_004ca640 = DAT_004ca620 ^ 0xc5;
      DAT_004ca641 = DAT_004ca621 ^ 0x68;
      DAT_004ca642 = DAT_004ca622 ^ 0xec;
      DAT_004ca643 = DAT_004ca623 ^ 0x98;
      DAT_004ca644 = DAT_004ca624 ^ 0xf3;
      DAT_004ca645 = DAT_004ca625 ^ 8;
      DAT_004ca646 = DAT_004ca626 ^ 0x3c;
      DAT_004ca5b0 = DAT_004ca590 ^ 0x8a;
      DAT_004ca5b1 = DAT_004ca591 ^ 99;
      DAT_004ca5b2 = DAT_004ca592 ^ 0x7a;
      DAT_004ca5b3 = DAT_004ca593 ^ 0xd0;
      DAT_004ca5b4 = DAT_004ca594 ^ 0x7f;
      DAT_004ca5b5 = DAT_004ca595 ^ 0xb3;
      DAT_004ca5b6 = DAT_004ca596 ^ 0x3a;
      DAT_004ca5b7 = DAT_004ca597 ^ 0xbc;
      DAT_004ca5b8 = DAT_004ca598 ^ 0x4b;
      DAT_004ca5b9 = DAT_004ca599 ^ 0x26;
      DAT_004ca5ba = DAT_004ca59a ^ 0xcf;
      DAT_004ca5bb = DAT_004ca59b ^ 0x6e;
    } while (((DAT_004cbdf8 ^ DAT_004cbdfc ^ 0x322bf590) >> 3) / 0x1b04e9dd == 0x8696ee12);
    DAT_004ca5bc = DAT_004ca59c ^ 0x2d;
    DAT_004ca5bd = DAT_004ca59d ^ 3;
    DAT_004ca5be = DAT_004ca59e ^ 0x49;
    DAT_004ca5bf = DAT_004ca59f ^ 0xbc;
    DAT_004ca5c0 = DAT_004ca5a0 ^ 0x2c;
    DAT_004ca5c1 = DAT_004ca5a1 ^ 4;
    DAT_004ca5c2 = DAT_004ca5a2 ^ 0x82;
    DAT_004ca5c3 = DAT_004ca5a3 ^ 0xe7;
    DAT_004ca5c4 = DAT_004ca5a4 ^ 0x9c;
    DAT_004ca5c5 = DAT_004ca5a5 ^ 0xe0;
    DAT_004ca5c6 = DAT_004ca5a6 ^ 0x6b;
    DAT_004ca6f0 = DAT_004ca6d0 ^ 0x6c;
    DAT_004ca6f1 = DAT_004ca6d1 ^ 0x59;
    DAT_004ca6f2 = DAT_004ca6d2 ^ 0xdd;
    DAT_004ca6f3 = DAT_004ca6d3 ^ 0xdf;
    DAT_004ca6f4 = DAT_004ca6d4 ^ 0x4f;
    DAT_004ca6f5 = DAT_004ca6d5 ^ 0x3e;
    DAT_004ca6f6 = DAT_004ca6d6 ^ 0xd8;
    DAT_004ca6f7 = DAT_004ca6d7 ^ 0x97;
    DAT_004ca6f8 = DAT_004ca6d8 ^ 0xbb;
    DAT_004ca6f9 = DAT_004ca6d9 ^ 0xc9;
    DAT_004ca6fa = DAT_004ca6da ^ 0xb3;
    DAT_004ca6fb = DAT_004ca6db ^ 0x4f;
    DAT_004ca6fc = DAT_004ca6dc ^ 0x37;
    DAT_004ca6fd = DAT_004ca6dd ^ 0x73;
    DAT_004ca6fe = DAT_004ca6de ^ 0x5c;
    DAT_004ca6ff = DAT_004ca6df ^ 0x50;
    DAT_004ca700 = DAT_004ca6e0 ^ 0x25;
    DAT_004ca701 = DAT_004ca6e1 ^ 0xb4;
    DAT_004ca702 = DAT_004ca6e2 ^ 0xbb;
    DAT_004ca703 = DAT_004ca6e3 ^ 0x55;
    DAT_004ca704 = DAT_004ca6e4 ^ 0x39;
    DAT_004ca4e0 = DAT_004ca4c0 ^ 0x4b;
    DAT_004ca4e1 = DAT_004ca4c1 ^ 0xf;
    DAT_004ca4e2 = DAT_004ca4c2 ^ 0xa2;
    DAT_004ca4e3 = DAT_004ca4c3 ^ 0x96;
    DAT_004ca4e4 = DAT_004ca4c4 ^ 0x2a;
    DAT_004ca4e5 = DAT_004ca4c5 ^ 0xb7;
    DAT_004ca4e6 = DAT_004ca4c6 ^ 0x83;
    DAT_004ca4e7 = DAT_004ca4c7 ^ 0xc0;
    DAT_004ca4e8 = DAT_004ca4c8 ^ 0x1b;
    DAT_004ca4e9 = DAT_004ca4c9 ^ 0x54;
    DAT_004ca4ea = DAT_004ca4ca ^ 0xb3;
    DAT_004ca4eb = DAT_004ca4cb ^ 0x43;
    DAT_004ca4ec = DAT_004ca4cc ^ 0x55;
    DAT_004ca4ed = DAT_004ca4cd ^ 0x3a;
    DAT_004ca4ee = DAT_004ca4ce ^ 0x9f;
    DAT_004ca4ef = DAT_004ca4cf ^ 0x95;
    DAT_004ca4f0 = DAT_004ca4d0 ^ 0x5d;
    DAT_004ca4f1 = DAT_004ca4d1 ^ 0x7a;
    DAT_004ca4f2 = DAT_004ca4d2 ^ 0x1a;
    DAT_004ca4f3 = DAT_004ca4d3 ^ 0xa1;
    DAT_004ca4f4 = DAT_004ca4d4 ^ 0x4c;
    DAT_004ca4f5 = DAT_004ca4d5 ^ 0xe0;
    DAT_004ca4f6 = DAT_004ca4d6 ^ 0x5c;
    local_1e8 = param_1;
  }
  if (0x9945d0fd <
      (uint)((ulong)(((DAT_004cbe10 ^ DAT_004cbe14) / 0x52cfee6d) * 0x71e1dad6 >> 1) * 0x8a07b57 >>
            0x3a)) goto LAB_004161e0;
  while( true ) {
    DAT_004d2190 = 1;
    ppuVar27 = (undefined **)((long)ppuVar24 + -0xc0);
    if ((uint)((ulong)((DAT_004cbe18 | DAT_004cbe1c) + 0x75cf7fe1 >> 1) * 0x2002f045 >> 0x3c) !=
        0x36ddaf5) break;
LAB_004161e0:
    ppuVar24 = (undefined **)((long)ppuVar27 + -0xc0);
  }
  puVar23 = (undefined *)ppuVar27;
  puVar26 = (undefined *)ppuVar27;
  if (0x927bc151 < (DAT_004cbe20 * DAT_004cbe24 ^ 0x47010082U | 0x2876f66c) + 0x9caf7be1)
  goto LAB_004162a8;
  while( true ) {
    puVar26 = puVar23 + -0xc0;
    if (((DAT_004cbe28 + DAT_004cbe2c + 0xdb34e2a1U) / 0x49b62c7 | 0x77caec7d) != 0x2f4b64f8) break;
LAB_004162a8:
    puVar23 = puVar26 + -0xc0;
  }
  puVar28 = (undefined8 *)(puVar23 + -0x100);
  puVar29 = puVar23 + -0x180;
  _objc_retain(param_1);
  if (param_1 == 0) goto LAB_0041da98;
  do {
  } while (0x530fd17f < (DAT_004cbe38 & DAT_004cbe3c ^ 0xe3364e31) + 0xf378ec4b);
  do {
  } while (((DAT_004cbe48 & DAT_004cbe4c ^ 0x500002) & 0xa577382) + 0xd5c59498 < 0x32effe1d);
  iVar2 = _objc_msgSend(PTR__OBJC_CLASS___NSThread_0048cc90,PTR_s_isMainThread_0048b930);
  if (iVar2 == 0) goto LAB_0041da98;
  local_80 = (undefined8 *)((long)ppuVar24 + -0x40);
  if (((uint)((ulong)(uint)(DAT_004cbe50 + DAT_004cbe54) * 0x7f33af61 >> 0x3e) | 0x4005d5dc) <
      0x17606aff) goto LAB_00416414;
  while( true ) {
    uVar3 = DAT_004cbe58 + DAT_004cbe5c;
    FUN_00414474(param_1);
    local_150 = _objc_retainAutoreleasedReturnValue();
    if (0x904a8c54 < ((uint)((ulong)uVar3 * 0xce5c187 >> 0x39) * 0x57eff526 ^ 0x8f7205ca)) break;
LAB_00416414:
    FUN_00414474(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  local_1e8 = param_1;
  local_128 = puVar26;
  local_108 = (undefined *)ppuVar27;
  local_100 = (undefined8 *)(puVar23 + -0x40);
  uVar9 = local_150;
  puVar26 = PTR_s_synchronizing_0048bfa8;
  if (0x70fa134a < (uint)((ulong)(DAT_004cbe60 * DAT_004cbe64 & 0x6001e890) * 0x30dcda45 >> 0x3c)) {
    _objc_msgSend(local_150,PTR_s_synchronizing_0048bfa8);
    uVar9 = local_150;
    puVar26 = PTR_s_synchronizing_0048bfa8;
  }
  do {
    uVar3 = DAT_004cbe68 | DAT_004cbe6c;
    uVar8 = _objc_msgSend(uVar9,puVar26);
    puVar23 = PTR_s_active_0048bfb0;
  } while (0x35692e9f < (uint)((ulong)(uVar3 * -0x2f3ba650) * 0x101d7561 >> 0x3a));
  do {
  } while (0xc901b502 < (((DAT_004cbe78 | DAT_004cbe7c) * 0xf5c000 ^ 0xfe0fffff) & 0x23b90000));
  param_1 = local_1e8;
  if ((uVar8 & 1) == 0) {
    uVar8 = _objc_msgSend(local_150,PTR_s_active_0048bfb0);
    do {
    } while (0xca056f55 < (DAT_004cbe88 + DAT_004cbe8c ^ 0xefab746U) * -0x2415ae0c + 0x5fe812c);
    local_220 = puVar29;
    local_b8 = puVar28;
    if ((uVar8 & 1) == 0) {
      puVar26 = PTR_s_shared_00489458;
      if ((DAT_004cbe90 * DAT_004cbe94 ^ 0xe00c40e0U | 0x1f42170d) < 0x568d3d32) {
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
        _objc_retainAutoreleasedReturnValue();
        puVar26 = PTR_s_shared_00489458;
      }
      do {
        uVar3 = DAT_004cbe98 ^ DAT_004cbe9c;
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,puVar26);
        uVar9 = _objc_retainAutoreleasedReturnValue();
      } while ((uVar3 * -0x1d0d68fd ^ 0xe0e0e0e | 0xee2ba3fc) < 0x714d51aa);
      uVar8 = _objc_msgSend(uVar9,PTR_s_enabledMerge_0048ae20);
      param_1 = local_1e8;
      if ((uVar8 & 1) == 0) {
        if (0x5fb39b77 < ((DAT_004cbea0 ^ DAT_004cbea4) * -0x6bc905e4) / 0x3612c41b)
        goto LAB_00416e40;
        while (uVar3 = DAT_004cbea8 | DAT_004cbeac, _objc_release(uVar9),
              (uint)((ulong)((uVar3 ^ 0x925e1388) + 0x769908dd >> 4) * 0x9a4c2eb >> 0x34) ==
              0xe9b2b12a) {
LAB_00416e40:
          _objc_release(uVar9);
        }
        do {
        } while (((uint)((ulong)(uint)(DAT_004cbeb8 * DAT_004cbebc) * 0xa3c99c61 >> 0x3f) |
                 0x59efa488) < 0x209a40c7);
      }
      else {
        if ((DAT_004cbec0 + DAT_004cbec4 + 0xb95df71U ^ 0x99858930) < 0x5e59b930) goto LAB_00416d7c;
        while (uVar3 = DAT_004cbec8 ^ DAT_004cbecc, iVar2 = FUN_0041db34(),
              (uVar3 + 0x397013f4 | 0x81800b0d) + 0x25373a47 < 0x5f773943) {
LAB_00416d7c:
          FUN_0041db34();
        }
        _objc_release(uVar9);
        param_1 = local_1e8;
        if (iVar2 != 0) goto LAB_004165a8;
      }
    }
    else {
LAB_004165a8:
      if (0xd785e031 < (DAT_004cbee0 * DAT_004cbee4 + 0x98059736U ^ 0x44e40206 | 0xba1be859)) {
        FUN_0041ebf8(1);
        _objc_retainAutoreleasedReturnValue();
      }
      FUN_0041ebf8(1);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      do {
      } while (((uint)((ulong)((DAT_004cbee8 & DAT_004cbeec) * 0x1b7345bf) * 0x8e65a6f >> 0x3b) |
               0xeec69f84) < 0xa17b6560);
      local_90 = uVar9;
      if (0xe86246a2 < ((DAT_004cbef0 + DAT_004cbef4) * -0x69593ba + 0x4a6e18d8U) / 0x654a39e9)
      goto LAB_00416874;
      while (puVar26 = PTR_s_mergeEnabled_0048bfb8, uVar3 = DAT_004cbef8 + DAT_004cbefc,
            uVar8 = _objc_msgSend(uVar9,PTR_s_mergeEnabled_0048bfb8),
            (uVar3 ^ 0xd515b389) * 0x7273883b + 0x9e3b829e < 0x244607f2) {
LAB_00416874:
        _objc_msgSend(uVar9,PTR_s_mergeEnabled_0048bfb8);
      }
      if ((uVar8 & 1) == 0) {
        uVar9 = local_150;
        if (0xfff24c6d < (DAT_004cbf00 * DAT_004cbf04 & 0xdff5fff3U | 0x9fb5fdb3)) {
          _objc_msgSend(local_150,puVar23);
          uVar9 = local_150;
        }
        do {
          uVar3 = DAT_004cbf08 ^ DAT_004cbf0c;
          iVar2 = _objc_msgSend(uVar9,puVar23);
        } while (0xc62a09ae < (uVar3 & 0xddb1d51 | 0x8481410) * -0x418b3c74);
        do {
        } while (((DAT_004cbf18 ^ DAT_004cbf1c) * 0x35a4a1a0 & 0xf5efd800) == 0x9fdbb230);
        if (iVar2 != 0) goto LAB_00416978;
      }
      else {
LAB_00416978:
        puVar29 = PTR_s_setSynchronizing__0048bfc0;
        local_228 = puVar26;
        uVar9 = local_150;
        puVar23 = PTR_s_valueForKey__0048b4d8;
        if (((DAT_004cbf20 + DAT_004cbf24 + 0x7ab32dd9U | 0x633afad6) ^ 0xa982e75d) < 0x314dff69) {
          _objc_msgSend(local_150,PTR_s_setSynchronizing__0048bfc0,1);
          uVar9 = local_150;
          puVar23 = PTR_s_valueForKey__0048b4d8;
        }
        do {
          uVar3 = DAT_004cbf28 * DAT_004cbf2c;
          _objc_msgSend(uVar9,puVar29,1);
        } while ((uVar3 & 0x7ddd52c) * -0x770360c6 + 0xbfcd4a18 < 0xca1d48c1);
        local_230 = puVar29;
        uVar3 = 0;
        if (DAT_004cbf3c != 0) {
          uVar3 = DAT_004cbf38 / DAT_004cbf3c;
        }
        do {
        } while (0xf7c7751d < (uVar3 & 0x853ad35e) * -0x2fb57e09 + 0x7f7d7715);
        _objc_msgSend(local_1e8,puVar23,&PTR____CFConstantStringClassReference_004ca830);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        do {
        } while (0x5f34a7c7 <
                 (uint)((ulong)((DAT_004cbf48 + DAT_004cbf4c + 0x106d8e9fU | 0xffc46b8) >> 3) *
                        0x16457a7f >> 0x39));
        local_180 = PTR_s_class_00489650;
        do {
        } while (((DAT_004cbf58 | DAT_004cbf5c) & 0x57a433c9) * 0x2d6cbdc3 + 0x5e6e0de2 < 0x2b6e5c55
                );
        uVar3 = 0;
        if (DAT_004cbf6c != 0) {
          uVar3 = DAT_004cbf68 / DAT_004cbf6c;
        }
        do {
        } while ((uVar3 + 0x2f5a3a11 | 0x84c279c) == 0x5ca3fd9f);
        uVar10 = _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_class_00489650);
        local_188 = PTR_s_isKindOfClass__00489c00;
        do {
        } while (0xb06d444f < ((DAT_004cbf78 & DAT_004cbf7c) + 0xb519ca53 | 0xa1d95138) + 0x6f339d8e
                );
        uVar8 = _objc_msgSend(uVar9,PTR_s_isKindOfClass__00489c00,uVar10);
        uVar3 = 0;
        if (DAT_004cbf8c != 0) {
          uVar3 = DAT_004cbf88 / DAT_004cbf8c;
        }
        do {
        } while ((int)((long)((ulong)(uVar3 + 0xf0fb85ff) * 0xe6a11a27) >> 0x3f) == 0x70cfa33b);
        local_d0 = uVar9;
        if ((uVar8 & 1) != 0) {
          do {
          } while (((DAT_004cbfa8 - DAT_004cbfac) + 0x67aa5e37U | 0xfb8fffc5) < 0x6a08d3ee);
          uVar3 = 0;
          if (DAT_004cbfb4 != 0) {
            uVar3 = DAT_004cbfb0 / DAT_004cbfb4;
          }
          if ((uVar3 & 0x4400c103) * 0x505489d2 == 0x21598af5) goto LAB_00416ee4;
          while (uVar3 = DAT_004cbfb8 & DAT_004cbfbc, _objc_retain(uVar9), puVar28 = local_80,
                puVar23 = PTR_s_count_00489538,
                0xb90fc693 < ((uVar3 >> 2) / 0x3d443e99) * 0x1a96187 + 0xaa03655e) {
LAB_00416ee4:
            _objc_retain(uVar9);
          }
          do {
          } while (DAT_004cbfc8 + DAT_004cbfcc == 0x3b50afc0);
          uVar8 = _objc_msgSend(uVar9,PTR_s_count_00489538);
          uVar8 = (uVar8 ^ 0x811c9dc5) * 0x1000193;
          do {
          } while (0x70f4c16a <
                   ((DAT_004cbfd8 ^ DAT_004cbfdc) * -0x7a6ff219 | 0x9ca07e88) * 0x5dc0880f);
          puVar28[5] = 0;
          puVar28[4] = 0;
          puVar28[7] = 0;
          puVar28[6] = 0;
          puVar28[1] = 0;
          *puVar28 = 0;
          puVar28[3] = 0;
          puVar28[2] = 0;
          _objc_retain(uVar9);
          local_1f8 = PTR_s_countByEnumeratingWithState_obje_00489c48;
          uVar3 = 0;
          if (DAT_004cbfec != 0) {
            uVar3 = DAT_004cbfe8 / DAT_004cbfec;
          }
          do {
          } while (0x1cc63431 < (uint)((ulong)(uVar3 + 0x63ff1ae9) * 0x536dc209 >> 0x3e));
          lVar11 = _objc_msgSend(uVar9,PTR_s_countByEnumeratingWithState_obje_00489c48,puVar28,
                                 local_108,0x10);
          local_130 = puVar23;
          if (lVar11 != 0) {
            do {
            } while (((uint)((ulong)(DAT_004cbff8 * DAT_004cbffc + 0x2d81e1c3) * 0x60195eff >> 0x3e)
                     | 0x7fde308a) == 0x247d5821);
            uVar3 = 0;
            if (DAT_004cc00c != 0) {
              uVar3 = DAT_004cc008 / DAT_004cc00c;
            }
            local_a0 = *(undefined **)puVar28[2];
            do {
            } while (((uVar3 | 0x57332b0d) + 0xf58b626f | 0xaa4ca214) == 0xf90fc7c8);
            do {
              local_b0 = PTR_s_m_uiMessageType_0048b840;
              local_a8 = PTR_s_messageWrap_0048b8c8;
              local_c8 = PTR_s_m_nsFromUsr_0048b860;
              local_c0 = PTR_s_m_uiAppMsgInnerType_0048b848;
              local_88 = (undefined8 *)PTR_s_hash_0048c090;
              local_e0 = PTR_s_isSender_0048b4e0;
              local_d8 = PTR_s_m_nsRealChatUsr_0048b868;
              local_f0 = PTR_s_chatContact_0048b658;
              local_e8 = PTR_s_viewModelScene_0048b4c0;
              local_f8 = PTR_s_isChatroom_0048b660;
              do {
              } while (0xe499cd94 <
                       (DAT_004cc028 - DAT_004cc02c ^ 0x5bc5122bU) * -0x165c201a + 0x95962bea);
              local_78 = 0;
              local_98 = lVar11;
              do {
                uVar3 = 0;
                if (DAT_004cc03c != 0) {
                  uVar3 = DAT_004cc038 / DAT_004cc03c;
                }
                do {
                } while (0xecb6d0e1 < (uVar3 & 0xe0012c81) + 0x6951007c);
                if (*(undefined **)local_80[2] != local_a0) {
                  do {
                  } while (0x93372815 <
                           ((DAT_004cc048 | DAT_004cc04c) ^ 0x183ced6f) * -0x460e12b8 + 0x7b454946);
                  _objc_enumerationMutation(local_d0);
                }
                uVar25 = *(ulong *)(local_80[1] + local_78 * 8);
                do {
                } while (0x92af5976 < (DAT_004cc058 & DAT_004cc05c & 0xbc7afa43) + 0xa7530dc9);
                uVar8 = (uVar8 ^ uVar25) * 0x1000193;
                do {
                } while (((uint)((ulong)(DAT_004cc068 & DAT_004cc06c ^ 0x4a5bf526) * 0x8c6cc68f >>
                                0x3f) ^ 0xcc090fd5) < 0x8f2e2c3e);
                iVar2 = FUN_004237f4(uVar25,&PTR____CFConstantStringClassReference_004ca7f0);
                do {
                } while (((DAT_004cc078 + DAT_004cc07c + 0x7cade072U | 0xed45c063) ^ 0x42b59cfc) <
                         0x9a97d959);
                if (iVar2 != 0) {
                  if ((DAT_004cc080 + DAT_004cc084 | 0x7f1417cU) * -0x21128f8 == 0x4f316d5a) {
                    _objc_retain(uVar25);
                  }
                  _objc_retain(uVar25);
                  uVar3 = 0;
                  if (DAT_004cc08c != 0) {
                    uVar3 = DAT_004cc088 / DAT_004cc08c;
                  }
                  do {
                  } while (uVar3 * -0x5c89ce17 == -0x6e289e3f);
                  _objc_msgSend(uVar25,local_a8);
                  uVar12 = _objc_retainAutoreleasedReturnValue();
                  uVar3 = 0;
                  if (DAT_004cc09c != 0) {
                    uVar3 = DAT_004cc098 / DAT_004cc09c;
                  }
                  do {
                  } while (uVar3 * 0x40a714e8 + 0x8d1548f0 < 0x6ee5d1dc);
                  do {
                  } while (0xaf4189e9 < ((DAT_004cc0a8 - DAT_004cc0ac | 0xfabc1eb9U) ^ 0x64d88dc5));
                  uVar13 = _objc_msgSend(uVar12,local_b0);
                  uVar14 = _objc_msgSend(uVar12,local_c0);
                  do {
                  } while (((DAT_004cc0b8 | DAT_004cc0bc) + 0xf14891af | 0xb7ace67b) + 0x8d3ca8f <
                           0x88e0789c);
                  uVar3 = 0;
                  if (DAT_004cc0cc != 0) {
                    uVar3 = DAT_004cc0c8 / DAT_004cc0cc;
                  }
                  do {
                  } while ((uVar3 + 0x5943faff | 0xc424c490) + 0xcad25c25 < 0x208acf7b);
                  _objc_msgSend(uVar12,local_c8);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  uVar15 = _objc_msgSend(uVar9,local_88);
                  _objc_release(uVar9);
                  do {
                  } while (((DAT_004cc0d8 ^ DAT_004cc0dc) * 0x3502434f | 0xdffd77ff) == 0xd392f204);
                  _objc_msgSend(uVar12,local_d8);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  uVar16 = _objc_msgSend(uVar9,local_88);
                  if (0x6276b8d0 <
                      ((DAT_004cc0e0 + DAT_004cc0e4 + 0xdc9b046aU) / 0x29eb5469) * 0x1aaa064f)
                  goto LAB_00417984;
                  while (uVar3 = DAT_004cc0e8 + DAT_004cc0ec, _objc_release(uVar9),
                        0x9e6dab05 < ((uVar3 / 0x32904224 | 0xdb751170) ^ 0xb9bce7c7)) {
LAB_00417984:
                    _objc_release(uVar9);
                  }
                  do {
                  } while ((DAT_004cc0f8 & DAT_004cc0fc | 0xfdbcef26) == 0xbfebbf3d);
                  uVar17 = _objc_msgSend(uVar25,local_e0);
                  iVar2 = _objc_msgSend(uVar25,local_e8);
                  do {
                  } while (0x19624f23 <
                           ((DAT_004cc108 - DAT_004cc10c & 0x13e7f57fU) * -0x479f3988 & 0x228e3850))
                  ;
                  do {
                  } while ((DAT_004cc118 + DAT_004cc11c | 0xff11ffffU) == 0x2ea1aeab);
                  do {
                  } while (((DAT_004cc128 - DAT_004cc12c | 0x13b3054dU) * 0x2c41da4c ^ 0x1c96d9c7) <
                           0x5a881d7);
                  _objc_msgSend(uVar25,local_f0);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  do {
                  } while (((DAT_004cc138 | DAT_004cc13c) * -0x507d2a75 ^ 0x2cd37f1d) < 0x2abbbfc0);
                  uVar18 = _objc_msgSend(uVar9,local_f8);
                  _objc_release(uVar9);
                  _objc_release(uVar12);
                  if (((DAT_004cc140 | DAT_004cc144) * -0x37348624 & 0xfb005f20) < 0xe7bf9c9) {
                    _objc_release(uVar25);
                  }
                  uVar8 = ((((uVar16 ^ (uVar15 ^ (((uVar8 ^ uVar12) * 0x1000193 ^
                                                  uVar13 & 0xffffffff) * 0x1000193 ^
                                                 uVar14 & 0xffffffff) * 0x1000193) * 0x1000193) *
                             0x1000193 ^ uVar17 & 0xffffffff) * 0x1000193 ^ (long)iVar2) * 0x1000193
                          ^ uVar18 & 0xffffffff) * 0x1000193;
                  do {
                    uVar3 = 0;
                    if (DAT_004cc14c != 0) {
                      uVar3 = DAT_004cc148 / DAT_004cc14c;
                    }
                    _objc_release(uVar25);
                  } while (((uVar3 | 0x5c2cedda) * -0x5e6b95ee & 0x4132a45c) == 0x348ac5dc);
                }
                uVar9 = local_d0;
                do {
                } while (0x85fe4e0a <
                         (uint)((ulong)(DAT_004cc158 ^ DAT_004cc15c) * 0xa2606e5 >> 0x3b) +
                         0x57848b5f);
                local_78 = local_78 + 1;
              } while (local_78 != local_98);
              lVar11 = _objc_msgSend(local_d0,local_1f8,local_80,local_108,0x10);
              do {
              } while (((DAT_004cc168 - DAT_004cc16c | 0x20045029U) ^ 0xe004c968 | 0x1ee92492) <
                       0x7a485884);
              uVar3 = 0;
              if (DAT_004cc17c != 0) {
                uVar3 = DAT_004cc178 / DAT_004cc17c;
              }
              do {
              } while (uVar3 * -0x1e469002 == 0x32cd7aae);
            } while (lVar11 != 0);
          }
          if (((DAT_004cc180 - DAT_004cc184 & 0x5c1622dU) * -0x67d22aa6 | 0x46c87c1e) < 0x4d29bc9f)
          goto LAB_00417b78;
          while( true ) {
            uVar3 = DAT_004cc188 | DAT_004cc18c;
            _objc_release(uVar9);
            _objc_release(uVar9);
            puVar23 = PTR_s_initialized_0048bfc8;
            if ((uint)((ulong)(uVar3 + 0xe247b09e | 0x8c538ac2) * 0x4a5749ff >> 0x3e) != 0xdb43e838)
            break;
LAB_00417b78:
            _objc_release(uVar9);
            _objc_release(uVar9);
          }
          iVar2 = _objc_msgSend(local_150,PTR_s_initialized_0048bfc8);
          puVar26 = PTR_s_policy_0048bfd0;
          do {
          } while (((DAT_004cc198 ^ DAT_004cc19c) & 0xa151d48f) + 0x6f9a9fd3 < 0x26bd8f72);
          if (iVar2 == 0) {
LAB_00417d84:
            bVar1 = true;
          }
          else {
            do {
            } while (0x95d2c3e1 <
                     ((DAT_004cc1a8 - DAT_004cc1ac) + 0x9618a276U | 0x615a3255) + 0xd4412ef1);
            lVar11 = _objc_msgSend(local_150,PTR_s_policy_0048bfd0);
            do {
            } while (((DAT_004cc1b8 & DAT_004cc1bc) + 0x56a8870f | 0x44af8a0c) < 0x226ccbb5);
            lVar19 = _objc_msgSend(local_90,puVar26);
            do {
            } while (0x4a33a1b9 < ((DAT_004cc1c8 & DAT_004cc1cc) * -0x7054fc60 & 0x2442800));
            if (lVar11 != lVar19) goto LAB_00417d84;
            uVar3 = 0;
            if (DAT_004cc1dc != 0) {
              uVar3 = DAT_004cc1d8 / DAT_004cc1dc;
            }
            do {
            } while (uVar3 == 0xea87f5f1);
            uVar25 = _objc_msgSend(local_150,PTR_s_fingerprint_0048bfd8);
            bVar1 = uVar25 != uVar8;
            do {
            } while (((DAT_004cc1e8 | DAT_004cc1ec) & 0xacff95f ^ 0x17dd2ba0) * 0x3e21e8a8 ==
                     -0x57dc18b1);
          }
          puVar28 = local_b8;
          puVar26 = local_220;
          uVar3 = 0;
          if (DAT_004cc1fc != 0) {
            uVar3 = DAT_004cc1f8 / DAT_004cc1fc;
          }
          do {
          } while (0xe62e2a6c < (uVar3 + 0xaa2ca436 ^ 0xf39c64b));
          iVar2 = _objc_msgSend(local_150,puVar23);
          puVar29 = PTR_s_layoutPolicy_0048bfe0;
          do {
          } while ((((DAT_004cc208 ^ DAT_004cc20c) & 0xfc7ac276) + 0x22347da0 | 0x1cee6582) ==
                   0xec2d349d);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            do {
            } while (((DAT_004cc218 * DAT_004cc21c ^ 0x1a367270U) + 0xdd0139bc | 0x1a8fd4f1) ==
                     0x17829206);
            do {
            } while (0xd6cb3aa < (((DAT_004cc228 | DAT_004cc22c) & 0x9f9ece03) / 0x8ae0e44 & 0x12));
            lVar11 = _objc_msgSend(local_150,PTR_s_layoutPolicy_0048bfe0);
            do {
            } while (0xbab6c39f <
                     ((DAT_004cc238 - DAT_004cc23c ^ 0xee2e82e5U) / 0x3ddf2fc1 & 0xfffffffd));
            lVar19 = _objc_msgSend(local_90,puVar29);
            do {
              uVar3 = (uint)(lVar11 != lVar19);
            } while (((uint)(DAT_004cc248 + DAT_004cc24c) >> 1) / 0x634f5107 + 0x75122363 <
                     0x735c2128);
            do {
            } while ((DAT_004cc258 * DAT_004cc25c * -0x61ed8cc4 | 0xaf640774U) == 0xb63201c);
          }
          do {
          } while (DAT_004cc268 * DAT_004cc26c == 0x3242e9d9);
          iVar2 = _objc_msgSend(local_150,puVar23);
          puVar23 = PTR_s_timePolicy_0048bfe8;
          do {
          } while (((DAT_004cc278 & DAT_004cc27c) / 0x303b7247 & 2 | 0x90ab5ec8) < 0x6f11d37f);
          if (iVar2 == 0) {
            local_10c = 0;
          }
          else {
            do {
            } while (0x52de4f7c <
                     (uint)-(int)((long)((ulong)(0xcfc7d59f -
                                                (int)((long)((ulong)(uint)(DAT_004cc288 -
                                                                          DAT_004cc28c) * 0xc1d1bad5
                                                            ) >> 0x3f)) * 0xa0e11851) >> 0x3f));
            do {
            } while (0x3f0d9f99 <
                     (uint)((ulong)((DAT_004cc298 | DAT_004cc29c) * -0x6dc2f75 & 0xefef5aa3) *
                            0x50e29c71 >> 0x3d));
            lVar11 = _objc_msgSend(local_150,PTR_s_timePolicy_0048bfe8);
            lVar19 = _objc_msgSend(local_90,puVar23);
            do {
            } while (0x6f28c587 <
                     ((DAT_004cc2a8 ^ DAT_004cc2ac) * -0x350d85d2 & 0x240e0322) + 0xe3edbb3a);
            local_10c = (uint)(lVar11 != lVar19);
            uVar6 = 0;
            if (DAT_004cc2bc != 0) {
              uVar6 = DAT_004cc2b8 / DAT_004cc2bc;
            }
            do {
            } while (0x452ffe83 <
                     ((uint)((ulong)uVar6 * 0x1636c801 >> 0x39) * -0x515d3008 & 0x7d3bb2f0));
          }
          if ((bVar1 || uVar3 != 0) || (local_10c != 0)) {
            do {
            } while (((uint)((ulong)((DAT_004cc308 | DAT_004cc30c) + 0x6d315490) * 0xab17b7eb >>
                            0x3f) | 0xe1d1fc3c) < 0x7ddeb04e);
            _objc_msgSend(local_150,PTR_s_entries_0048bff0);
            puVar23 = (undefined *)_objc_retainAutoreleasedReturnValue();
            uVar9 = local_d0;
            puVar29 = PTR__OBJC_CLASS___NSMutableArray_0048ca60;
            do {
            } while (0x941c1fff <
                     (DAT_004cc318 * DAT_004cc31c + 0x5f74e2d7U | 0x19f90fc4) + 0x47db3562);
            do {
            } while (0x9fcb96f0 <
                     ((DAT_004cc328 ^ DAT_004cc32c | 0x2629328) ^ 0x8272d223 | 0x7d8d24c4));
            local_11c = uVar3;
            local_118 = uVar8;
            if (bVar1) {
              uVar3 = 0;
              if (DAT_004cc33c != 0) {
                uVar3 = DAT_004cc338 / DAT_004cc33c;
              }
              do {
              } while (uVar3 == 0x95648f61);
              uVar10 = _objc_msgSend(local_d0,local_130);
              puVar28 = local_100;
              do {
              } while (((DAT_004cc348 - DAT_004cc34c ^ 0x4022U) & 0xf7547e32 | 0x43543400) <
                       0x28934b88);
              do {
              } while (((uint)((ulong)(DAT_004cc358 & DAT_004cc35c) * 0x40d88101 >> 0x3d) ^
                       0x91f234cd) * -0x6d0dfbb7 < 0x376dd0b);
              _objc_msgSend(puVar29,PTR_s_arrayWithCapacity__0048bff8,uVar10);
              puVar26 = (undefined *)_objc_retainAutoreleasedReturnValue();
              if (((DAT_004cc360 ^ DAT_004cc364) + 0x148d88c2 & 0x858d0145) == 0x9378f4ce) {
                puVar28[5] = 0;
                puVar28[4] = 0;
                puVar28[7] = 0;
                puVar28[6] = 0;
                puVar28[1] = 0;
                *puVar28 = 0;
                puVar28[3] = 0;
                puVar28[2] = 0;
              }
              puVar28[1] = 0;
              *puVar28 = 0;
              puVar28[3] = 0;
              puVar28[2] = 0;
              puVar28[5] = 0;
              puVar28[4] = 0;
              puVar28[7] = 0;
              puVar28[6] = 0;
              _objc_retain(uVar9);
              do {
              } while (0x4ed1bdaa < (DAT_004cc368 * DAT_004cc36c + 0x72204c60U) / 0x14249da7);
              local_98 = _objc_msgSend(uVar9,local_1f8,puVar28,local_128,0x10);
              do {
              } while (0x58aa6ca1 <
                       ((DAT_004cc378 ^ DAT_004cc37c ^ 0xfb7b62a7) * -0x55781e83 ^ 0x44d751fc));
              local_1c0 = puVar23;
              local_c0 = puVar26;
              if (local_98 != 0) {
                local_c8 = *(undefined **)puVar28[2];
                do {
                } while ((DAT_004cc388 * DAT_004cc38c & 0x2ce9f7f6U) * 0x17434993 + 0x57806b19 <
                         0xadf849ee);
                do {
                } while (0xd1216b39 < ((DAT_004cc398 * DAT_004cc39c ^ 0x90080040U) & 0x910a014c));
                do {
                  local_a8 = PTR_s_new_0048b3f0;
                  local_a0 = PTR_s_manual_0048c088;
                  local_88 = (undefined8 *)PTR_s_setKind__0048c0a0;
                  local_f0 = PTR_s_viewModelScene_0048b4c0;
                  local_e8 = PTR_s_setModel__0048c0a8;
                  local_108 = PTR_s_onlyRoom_0048c080;
                  local_138 = PTR_s_chatContact_0048b658;
                  local_140 = PTR_s_isChatroom_0048b660;
                  local_f8 = PTR_s_messageWrap_0048b8c8;
                  local_130 = PTR_s_m_uiMessageType_0048b840;
                  local_158 = PTR_s_m_uiAppMsgInnerType_0048b848;
                  local_148 = PTR_s_m_nsFromUsr_0048b860;
                  local_160 = PTR_s_hasSuffix__0048aba8;
                  local_168 = PTR_s_setSender__0048c0b0;
                  local_170 = PTR_s_sender_0048c0b8;
                  local_178 = PTR_s_length_00489d78;
                  local_190 = PTR_s_isSender_0048b4e0;
                  local_198 = PTR_s_setOutgoing__0048c0c0;
                  local_1a0 = PTR_s_emoticonSeparator_0048a900;
                  local_1a8 = PTR_s_mediaSeparator_0048a910;
                  local_e0 = PTR_s_systemSeparator_0048a8f0;
                  local_d8 = PTR_s_timeSeparator_0048a8e0;
                  local_b0 = PTR_s_addObject__00489ba8;
                  do {
                  } while (((DAT_004cc3a8 - DAT_004cc3ac ^ 0xdf902fbfU) * -0x70aa9687 & 0xd9d927b7)
                           == 0xb1b23e3d);
                  local_78 = 0;
                  do {
                    uVar9 = 0x67103452;
                    if (*(undefined **)puVar28[2] != local_c8) {
                      _objc_enumerationMutation(local_d0);
                    }
                    puVar28 = *(undefined8 **)(puVar28[1] + local_78 * 8);
                    _objc_retain(puVar28);
                    _objc_retain(local_90);
                    iVar2 = _objc_msgSend(local_90,local_a0);
                    do {
                    } while (((DAT_004cc3b8 ^ DAT_004cc3bc) + 0x336a0be0 & 0xf904abeb) + 0x7a0698f7
                             < 0x67103452);
                    uVar10 = _objc_msgSend(PTR_BBNewEntry_0048cce0,local_a8);
                    do {
                    } while (((DAT_004cc3c8 * DAT_004cc3cc ^ 0x2bd8410U) & 0xabbda778) == 0xa6a9ee7a
                            );
                    _objc_msgSend(uVar10,local_88,0);
                    uVar8 = FUN_004237f4(puVar28,&PTR____CFConstantStringClassReference_004ca7b0);
                    do {
                    } while ((DAT_004cc3d8 ^ DAT_004cc3dc | 0x274792e5) / 0x4beb0103 == 0xd3bb9148);
                    local_80 = puVar28;
                    if ((uVar8 & 1) == 0) {
                      uVar8 = FUN_004237f4(puVar28,&PTR____CFConstantStringClassReference_004ca810);
                      do {
                      } while (((DAT_004cc438 | DAT_004cc43c) + 0x49227926) / 0x4d0f8478 ==
                               0xac30c379);
                      if ((uVar8 & 1) == 0) {
                        do {
                        } while ((DAT_004cc448 ^ DAT_004cc44c) * 0x1625a219 + 0xee10eec9 <
                                 0x4809a57b);
                        uVar8 = FUN_004237f4(puVar28,&PTR____CFConstantStringClassReference_004ca7d0
                                            );
                        if ((uVar8 & 1) == 0) {
                          do {
                          } while ((((DAT_004cc498 & DAT_004cc49c) + 0x632718e6 ^ 0x26330aa2) &
                                   0xbfb73baa) < 0x68d6362a);
                          uVar8 = FUN_004237f4(puVar28,&
                                                  PTR____CFConstantStringClassReference_004ca7f0);
                          do {
                          } while (((DAT_004cc4a8 & DAT_004cc4ac) + 0x506fbe4f | 0x800a8c69) ==
                                   0x63b0663f);
                          if ((uVar8 & 1) == 0) {
                            if (0xdeecd1d2 <
                                ((DAT_004cc4b0 ^ DAT_004cc4b4) * 0x13e40762 + 0xfbe4e168 ^
                                0xf480788b)) goto LAB_00418e50;
                            while (uVar3 = DAT_004cc4b8 * DAT_004cc4bc, _objc_retain(uVar10),
                                  (uVar3 | 0x5c376d6) * -0x592f72c == 0x4bd7e35e) {
LAB_00418e50:
                              _objc_retain(uVar10);
                            }
                            goto LAB_00418d7c;
                          }
                          if ((DAT_004cc4c0 | DAT_004cc4c4) * 0x39bdf7dd == 0x7a99c28f)
                          goto LAB_00418eb0;
                          while (iVar4 = DAT_004cc4c8 + DAT_004cc4cc, _objc_retain(puVar28),
                                0xa207a269 < (iVar4 * -0x52afb65 ^ 0x8b08bc2fU) / 0x244d3cf3) {
LAB_00418eb0:
                            _objc_retain(puVar28);
                          }
                          _objc_msgSend(uVar10,local_e8,puVar28);
                          uVar3 = 0;
                          if (DAT_004cc4dc != 0) {
                            uVar3 = DAT_004cc4d8 / DAT_004cc4dc;
                          }
                          do {
                          } while (0xb7789965 < ((uVar3 ^ 0x57ccca08) + 0x38866126 | 0x859595da));
                          iVar4 = _objc_msgSend(local_90,local_228);
                          if (iVar4 == 0) {
LAB_00418f78:
                            if ((DAT_004cc5b0 ^ DAT_004cc5b4) * -0x677b1567 == 0x6f00e6e2) {
                              _objc_retain(uVar10);
                            }
                            do {
                              iVar2 = DAT_004cc5b8 + DAT_004cc5bc;
                              _objc_retain(uVar10);
                            } while ((uint)(iVar2 * 0x2745c2a1) < 0x48766755);
                          }
                          else {
                            iVar4 = _objc_msgSend(puVar28,local_f0);
                            do {
                            } while (0x5018a61b <
                                     ((uint)(DAT_004cc4e8 - DAT_004cc4ec) / 0x37cafb02) *
                                     -0x5460232e);
                            if (iVar4 != 0) goto LAB_00418f78;
                            do {
                            } while (((DAT_004cc4f8 & DAT_004cc4fc ^ 0x16063592) & 0x96eefdda) +
                                     0x594eb913 < 0x3c48a670);
                            uVar3 = _objc_msgSend(local_90,local_108);
                            do {
                            } while (((DAT_004cc508 | DAT_004cc50c) * 0x1f7c29b0 & 0xfd0de430 ^
                                     0x65a13e0f) < 0x96714c58);
                            if (uVar3 != 0) {
                              do {
                              } while ((DAT_004cc518 ^ DAT_004cc51c | 0xce5970) * -0x2fed3500 ==
                                       0x234bc491);
                              _objc_msgSend(puVar28,local_138);
                              uVar9 = _objc_retainAutoreleasedReturnValue();
                              do {
                              } while (((DAT_004cc528 & DAT_004cc52c) + 0x9bbb26cf & 0x6d65b913) <
                                       0x80c6d58);
                              uVar8 = _objc_msgSend(uVar9,local_140);
                              do {
                              } while (((DAT_004cc538 & DAT_004cc53c) + 0x99641c5d & 0x99dcf8e9) ==
                                       0xfb6e59b3);
                              if ((uVar8 & 1) == 0) {
                                if ((((DAT_004cc540 | DAT_004cc544) * 0x3389fa22) / 0x6de5df05 |
                                    0x4d46525c) == 0x56fb8da2) goto LAB_00419388;
                                while (iVar2 = DAT_004cc548 * DAT_004cc54c, _objc_release(uVar9),
                                      (iVar2 * -0x941da9a + 0xeadeb22cU | 0xba3d7503) < 0xfac6380e)
                                {
LAB_00419388:
                                  _objc_release(uVar9);
                                }
                                goto LAB_00418f78;
                              }
                            }
                            do {
                            } while (((uint)((ulong)((DAT_004cc558 - DAT_004cc55c) + 0x3ab992d8) *
                                             0x73ac4d0b >> 0x3e) ^ 0xdec7d721) < 0x1f65afd0);
                            _objc_msgSend(puVar28,local_f8);
                            lVar11 = _objc_retainAutoreleasedReturnValue();
                            do {
                            } while (((DAT_004cc568 * DAT_004cc56c ^ 0x8000a0U) & 0xc5b81ebd |
                                     0xc508040c) < 0xbc2a5525);
                            do {
                            } while ((DAT_004cc578 & DAT_004cc57c) * -0x4b65e5d0 < 0x3d7f03a7);
                            if (((DAT_004cc580 ^ DAT_004cc584) / 0x74638f78 & 2) == 0xf635269b)
                            goto LAB_00419d00;
                            while (uVar6 = DAT_004cc588 * DAT_004cc58c, _objc_release(lVar11),
                                  (uVar6 / 0x556620ed + 0xd7da2e02 | 0x96c5685) < 0xa578976c) {
LAB_00419d00:
                              _objc_release(lVar11);
                            }
                            if ((uVar3 & 1) == 0) {
                              do {
                              } while (((DAT_004cc5a8 + DAT_004cc5ac) * -0x4b2df9a7 & 0x201ea8d3U) *
                                       0x495693e1 == 0x16ceecf8);
                            }
                            else {
                              _objc_release(uVar9);
                              do {
                              } while (((uint)((DAT_004cc598 + DAT_004cc59c) * -0x4b2bba2b) /
                                        0x9812ff4 ^ 0xb6bfc6ba) < 0x16393bb0);
                            }
                            puVar28 = local_80;
                            if (lVar11 == 0) goto LAB_00418f78;
                            do {
                              uVar3 = 0;
                              if (DAT_004cc5cc != 0) {
                                uVar3 = DAT_004cc5c8 / DAT_004cc5cc;
                              }
                            } while (uVar3 == 0xa07e7876);
                            _objc_msgSend(local_80,local_f8);
                            uVar9 = _objc_retainAutoreleasedReturnValue();
                            do {
                            } while (((uint)(DAT_004cc5d8 * DAT_004cc5dc) / 0x2c9e5f43) * 0x49c115a9
                                     == -0x40ebc969);
                            uVar3 = _objc_msgSend(uVar9,local_130);
                            do {
                            } while (0x90a20eeb <
                                     (DAT_004cc5e8 + DAT_004cc5ec ^ 0x6cccb225U) * 0x6563f2b +
                                     0x4dae6dad);
                            do {
                            } while (((uint)(DAT_004cc5f8 * DAT_004cc5fc) / 0x57cc33f2) * 0x57992db6
                                     + 0xbe09ae66 < 0x100c4acb);
                            if (uVar3 < 1000) {
                              do {
                              } while (0x7c25e486 <
                                       DAT_004cc638 * DAT_004cc63c * -0x75427c25 + 0xc443ec0eU);
                              uVar8 = FUN_004237f4(puVar28,&
                                                  PTR____CFConstantStringClassReference_004ca790);
                              if ((uVar8 & 1) == 0) {
                                iVar2 = _objc_msgSend(uVar9,local_130);
                                if (iVar2 == 0x31) {
                                  do {
                                  } while (0xf47d064c <
                                           ((DAT_004cc648 + DAT_004cc64c + 0x23444edU ^ 0x24d06290)
                                           & 0x67dae791));
                                  iVar2 = _objc_msgSend(uVar9,local_158);
                                  do {
                                  } while (((DAT_004cc658 ^ DAT_004cc65c) + 0xb7d80600 | 0x89db69f8)
                                           < 0x44cf88c1);
                                  do {
                                  } while (0xe02b0b4d <
                                           ((DAT_004cc668 | DAT_004cc66c) & 0x60150502) * 0x7bf042c2
                                          );
                                  if ((iVar2 == 0x3e4) ||
                                     (iVar2 = _objc_msgSend(uVar9,local_158), iVar2 == 0x3e))
                                  goto LAB_00419d1c;
                                }
                                do {
                                } while ((uint)((ulong)(DAT_004cc678 - DAT_004cc67c ^ 0xa1bef364) *
                                                0x4adce87 >> 0x3a) == 0xe352b918);
                                _objc_msgSend(uVar9,local_148);
                                uVar20 = _objc_retainAutoreleasedReturnValue();
                                do {
                                } while (((DAT_004cc688 ^ DAT_004cc68c | 0xdfffffff) & 0xf69d71a6) <
                                         0x6f1861d);
                                do {
                                } while ((DAT_004cc698 + DAT_004cc69c + 0x3c7d065aU & 0x650c5cca |
                                         0x410c444a) == 0x4fb598ec);
                                iVar2 = _objc_msgSend(uVar20,local_160,
                                                      &
                                                  PTR____CFConstantStringClassReference_004ca770);
                                do {
                                } while (((DAT_004cc6a8 & DAT_004cc6ac ^ 0x46030c01) & 0x5667ed39) *
                                         0x1e78061a < 0x56c626e1);
                                puVar23 = PTR_s_m_nsRealChatUsr_0048b868;
                                if (iVar2 == 0) {
                                  puVar23 = local_148;
                                }
                                do {
                                } while (((uint)((ulong)(DAT_004cc6b8 & DAT_004cc6bc) * 0x22fb130d
                                                >> 0x3c) * -0xae32e7a | 0x3bb72497) < 0xf1ef159);
                                _objc_msgSend(uVar9,puVar23);
                                uVar21 = _objc_retainAutoreleasedReturnValue();
                                do {
                                } while (((DAT_004cc6c8 | DAT_004cc6cc) * -0x9f07752 + 0x88b0d638 |
                                         0xc429dd91) < 0x557bf025);
                                _objc_msgSend(uVar10,local_168,uVar21);
                                _objc_release(uVar21);
                                _objc_release(uVar20);
                                do {
                                } while (((DAT_004cc6d8 - DAT_004cc6dc | 0x86feb4e8U) * 0x1f0a3d2e |
                                         0x19361024) == 0x3305e39d);
                                _objc_msgSend(uVar10,local_170);
                                uVar20 = _objc_retainAutoreleasedReturnValue();
                                do {
                                } while ((DAT_004cc6e8 * DAT_004cc6ec + 0xda1246abU & 0x1eafd5f0) *
                                         -0x266c46e8 == 0x3c72e6e4);
                                do {
                                } while (((DAT_004cc6f8 + DAT_004cc6fc) * -0x37bfc678 + 0x179de2e4U
                                         | 0xe99dee2a) < 0x300f1b66);
                                lVar11 = _objc_msgSend(uVar20,local_178);
                                if (((DAT_004cc700 ^ DAT_004cc704) & 0xf6fbde27 | 0xd25ad427) ==
                                    0x169f5f9) {
                                  _objc_release(uVar20);
                                }
                                do {
                                  uVar3 = DAT_004cc708 & DAT_004cc70c;
                                  _objc_release(uVar20);
                                  puVar28 = local_80;
                                } while ((uVar3 + 0xfdb610de | 0x78f511eb) < 0x8434e179);
                                do {
                                } while (0x393dacc5 < (DAT_004cc718 ^ DAT_004cc71c) + 0x65618101);
                                if (lVar11 != 0) {
                                  do {
                                  } while (0x366f0fb9 <
                                           (uint)((ulong)(DAT_004cc728 * DAT_004cc72c * -0x66711823
                                                         + 0x81a43c45) * 0x67a637f7 >> 0x3e));
                                  uVar20 = _objc_msgSend(local_80,local_190);
                                  _objc_msgSend(uVar10,local_198,uVar20);
                                  do {
                                  } while ((DAT_004cc738 + DAT_004cc73c ^ 0x8beaba7dU) + 0x60a9a6d5
                                           < 0xef4bdc7f);
                                  iVar2 = _objc_msgSend(uVar9,local_130);
                                  do {
                                  } while (((uint)((ulong)((DAT_004cc748 ^ DAT_004cc74c) *
                                                          0x4191f090) * 0x214a7dff >> 0x3d) |
                                           0x9eb03802) < 0x95e8f260);
                                  if (iVar2 == 0x2f) {
                                    uVar3 = 1;
                                  }
                                  else {
                                    do {
                                    } while (0x3dabbb6b <
                                             (uint)((ulong)((DAT_004cc758 - DAT_004cc75c) *
                                                            -0x47f52853 | 0xc37941e6) * 0x4ee9f485
                                                   >> 0x3e));
                                    uVar3 = FUN_004237f4(puVar28,&
                                                  PTR____CFConstantStringClassReference_004ca710);
                                  }
                                  iVar2 = _objc_msgSend(uVar9,local_130);
                                  do {
                                  } while ((DAT_004cc768 - DAT_004cc76c) * -0x40391200 == 0x114f0a41
                                          );
                                  if (iVar2 == 3) {
LAB_00419ee8:
                                    uVar6 = 1;
                                  }
                                  else {
                                    do {
                                    } while ((uint)((ulong)(uint)(DAT_004cc778 - DAT_004cc77c) *
                                                    0x31b4dda1 >> 0x3d) == 0x57375784);
                                    iVar2 = _objc_msgSend(uVar9,local_130);
                                    do {
                                    } while (0x6a77dbbb <
                                             (((DAT_004cc788 | DAT_004cc78c) ^ 0x3a5f8cda) +
                                              0xd46ee431 & 0x24dce00e));
                                    if (iVar2 == 0x2b) goto LAB_00419ee8;
                                    do {
                                    } while (((DAT_004cc798 - DAT_004cc79c) + 0x68fb28abU |
                                             0xdc9e9219) == 0x27d73132);
                                    uVar6 = FUN_004237f4(puVar28,&
                                                  PTR____CFConstantStringClassReference_004ca750);
                                  }
                                  uVar5 = 0;
                                  if (DAT_004cc7ac != 0) {
                                    uVar5 = DAT_004cc7a8 / DAT_004cc7ac;
                                  }
                                  do {
                                  } while ((uVar5 + 0xf2019387 & 0xf4cce098) < 0x448fb250);
                                  uVar5 = _objc_msgSend(local_90,local_1a0);
                                  do {
                                  } while ((int)((long)((ulong)((DAT_004cc7b8 ^ DAT_004cc7bc) +
                                                                0x89777727 | 0xe3a2f559) *
                                                       0x8ba977bb) >> 0x3f) == 0x742c4aee);
                                  do {
                                  } while ((uint)((ulong)((DAT_004cc7c8 & DAT_004cc7cc) + 0x910f655e
                                                         ) * 0x4bb85a29 >> 0x3d) == 0xeeb3a7a2);
                                  if ((uVar5 & uVar3 & 1) == 0) {
                                    uVar3 = 0;
                                    if (DAT_004cc7dc != 0) {
                                      uVar3 = DAT_004cc7d8 / DAT_004cc7dc;
                                    }
                                    do {
                                    } while (0x9d126703 <
                                             (uint)-(int)((long)((ulong)(uVar3 * 0x21a2bbf +
                                                                        0x918b05d5) * 0xab9f7f87) >>
                                                         0x3f));
                                    uVar3 = _objc_msgSend(local_90,local_1a8);
                                    do {
                                    } while (((uint)((ulong)(uint)(DAT_004cc7e8 - DAT_004cc7ec) *
                                                     0x2bdf67d7 >> 0x39) + 0xd28d6289 & 0xd08502b8)
                                             == 0x5716cf9f);
                                    do {
                                      uVar5 = 2;
                                      if ((uVar3 & uVar6) != 0) {
                                        uVar5 = 3;
                                      }
                                    } while ((((DAT_004cc7f8 | DAT_004cc7fc) ^ 0xe2146d) *
                                              -0x5d4f540 ^ 0xe422da06) < 0x3c7f7910);
                                    do {
                                    } while (0x7dc20988 <
                                             (uint)((ulong)(DAT_004cc808 * DAT_004cc80c + 0x5688222)
                                                    * 0xd863318f >> 0x3c));
                                  }
                                  else {
                                    uVar5 = 3;
                                  }
                                  goto LAB_00419d10;
                                }
                              }
                            }
                            else {
                              if (iVar2 == 0) {
                                uVar5 = 0;
                              }
                              else {
                                uVar5 = _objc_msgSend(local_90,local_e0);
                                uVar5 = uVar5 ^ 1;
                                do {
                                } while ((DAT_004cc608 - DAT_004cc60c ^ 0x71ca5c20U | 0x8e31239f) *
                                         0x748ba7e5 == 0xc118645);
                                do {
                                } while (0x4e1535ba <
                                         (uint)((ulong)((DAT_004cc618 + DAT_004cc61c ^ 0x98b87178U)
                                                       + 0xa188df8f) * 0x4fe47107 >> 0x3e));
                                do {
                                } while (((DAT_004cc628 * DAT_004cc62c ^ 0x1ff01ffU) & 0xe289cbff |
                                         0xe0884bfa) == 0x560db149);
                              }
LAB_00419d10:
                              _objc_msgSend(uVar10,local_88,uVar5);
                            }
LAB_00419d1c:
                            _objc_retain(uVar10);
                            if (0x7eee251f <
                                (DAT_004cc810 + DAT_004cc814 & 0xd676d500U ^ 0xf787853e) / 0xdd8e42c
                               ) {
                              _objc_release(uVar9);
                            }
                            _objc_release(uVar9);
                          }
                          puVar28 = local_80;
                          if (((DAT_004cc820 ^ DAT_004cc824) + 0xdb1e1591 ^ 0x2b1bec3f) *
                              -0x5efaf494 == -0x4c6c4db) goto LAB_0041a1bc;
                          while (uVar3 = DAT_004cc828 ^ DAT_004cc82c, _objc_release(puVar28),
                                0x54e26b4d < ((uVar3 ^ 0x80180804) & 0xc83e0b26)) {
LAB_0041a1bc:
                            _objc_release(puVar28);
                          }
                          goto LAB_00418d7c;
                        }
                      }
                      if (iVar2 == 0) {
                        uVar3 = 0;
                      }
                      else {
                        uVar3 = _objc_msgSend(local_90,local_e0);
                        uVar3 = uVar3 ^ 1;
                        do {
                        } while ((DAT_004cc458 | DAT_004cc45c) + 0xcdb4eef < 0x17bba740);
                        uVar6 = 0;
                        if (DAT_004cc46c != 0) {
                          uVar6 = DAT_004cc468 / DAT_004cc46c;
                        }
                        do {
                        } while (0xdae55924 < ((uVar6 ^ 0x7f38d6fb) + 0xb94d6d7c ^ 0x7ae71fea));
                      }
                      do {
                      } while (0x32e482a1 <
                               (((DAT_004cc478 ^ DAT_004cc47c) & 0x11e8d85f) * -0x4a64b17d &
                               0xbea1addb));
                      _objc_msgSend(uVar10,local_88,uVar3);
                      _objc_retain(uVar10);
                      do {
                      } while (((uint)((ulong)(DAT_004cc488 | DAT_004cc48c) * 0x3af997c5 >> 0x3d) ^
                               0xcbcf84af) + 0x70d5efad < 0x3c87d6f6);
                    }
                    else {
                      do {
                      } while (0xbbdc7bfe <
                               ((DAT_004cc3e8 | DAT_004cc3ec) & 0x1043c146) * 0x67899a4c +
                               0xc4edae3a);
                      if (iVar2 == 0) {
                        uVar3 = 1;
                      }
                      else {
                        uVar3 = _objc_msgSend(local_90,local_d8);
                        uVar3 = uVar3 ^ 1;
                        do {
                        } while (((DAT_004cc3f8 ^ DAT_004cc3fc) / 0x12fc086e ^ 0x59b8bcb8) +
                                 0x9bd8c949 < 0x62a16407);
                        do {
                        } while (((DAT_004cc408 | DAT_004cc40c) ^ 0x51e62409 | 0x9c0c6097) *
                                 0x2f2d612 == 0x64f703de);
                      }
                      do {
                      } while ((uint)((ulong)((DAT_004cc418 & DAT_004cc41c) + 0xeba244ac) *
                                      0x785b0537 >> 0x3e) == 0x630a0968);
                      _objc_msgSend(uVar10,local_88,uVar3);
                      _objc_retain(uVar10);
                      uVar3 = 0;
                      if (DAT_004cc42c != 0) {
                        uVar3 = DAT_004cc428 / DAT_004cc42c;
                      }
                      do {
                      } while (((uVar3 | 0x61b904fe) * 0x720f6142 ^ 0x596fd468) < 0xc0c04d77);
                    }
LAB_00418d7c:
                    if (0xf0d0f0c6 <
                        ((DAT_004cc830 ^ DAT_004cc834) + 0x6858a7a2 & 0xfcf6bdb7 | 0x6cb29db5))
                    goto LAB_0041a25c;
                    while (iVar2 = DAT_004cc838 * DAT_004cc83c, _objc_release(uVar10),
                          puVar28 = local_80, uVar9 = local_90,
                          (iVar2 + 0xdba7832dU | 0x1de7a60e) == 0xd737d920) {
LAB_0041a25c:
                      _objc_release(uVar10);
                    }
                    uVar3 = 0;
                    if (DAT_004cc844 != 0) {
                      uVar3 = DAT_004cc840 / DAT_004cc844;
                    }
                    if (0xcddbf270 < (uVar3 & 0x3c38f9e1 ^ 0x1c9261d4) + 0x47f06a09)
                    goto LAB_0041a348;
                    while( true ) {
                      uVar3 = DAT_004cc848 | DAT_004cc84c;
                      _objc_release(uVar9);
                      _objc_release(puVar28);
                      if ((uVar3 / 0xf69bb3b ^ 0xbd4f0f38) + 0x9ca54f70 < 0xf5147f9e) break;
LAB_0041a348:
                      _objc_release(uVar9);
                      _objc_release(puVar28);
                    }
                    _objc_msgSend(local_c0,local_b0,uVar10);
                    puVar28 = local_100;
                    _objc_release(uVar10);
                    do {
                    } while (0xb799f4c1 <
                             (DAT_004cc858 - DAT_004cc85c & 0x30c16dbcU) * -0x2521df04 + 0xa500c75c)
                    ;
                    local_78 = local_78 + 1;
                  } while (local_78 != local_98);
                  do {
                  } while (((DAT_004cc868 & DAT_004cc86c & 0x471fc1bd) + 0x27059dd9 | 0x3793d836) ==
                           0xb6ee083a);
                  local_98 = _objc_msgSend(local_d0,local_1f8,puVar28,local_128,0x10);
                  do {
                  } while (DAT_004cc878 * DAT_004cc87c * -0x3767197e == -0x52d7798d);
                  do {
                  } while (((DAT_004cc888 ^ DAT_004cc88c) & 0x70f6c2f3) + 0x3e150f59 < 0x728b0e16);
                } while (local_98 != 0);
              }
              puVar28 = local_b8;
              uVar9 = local_d0;
              puVar26 = local_220;
              if (0x83f87bbf <
                  (uint)((ulong)((uint)((ulong)(uint)(DAT_004cc890 + DAT_004cc894) * 0x87bc9ff >>
                                       0x39) ^ 0xfd17f8dd) * 0x31930007 >> 0x3d)) {
                _objc_release(local_d0);
                puVar28 = local_b8;
                uVar9 = local_d0;
                puVar26 = local_220;
              }
              do {
                uVar3 = DAT_004cc898 ^ DAT_004cc89c;
                _objc_release(uVar9);
                puVar23 = local_c0;
              } while (0x41126434 < (uVar3 * -0x1b5ef385 + 0xb04d53e3 & 0x9c94200b));
              do {
              } while (0xdae846c9 < (DAT_004cc8a8 - DAT_004cc8ac & 0x28511U) + 0x697895f4);
              FUN_004209e0(local_c0);
              puVar29 = local_1c0;
              uVar3 = 0;
              if (DAT_004cc8b4 != 0) {
                uVar3 = DAT_004cc8b0 / DAT_004cc8b4;
              }
              if (0xa1e754c2 <
                  (uint)-(int)((long)((ulong)(uVar3 | 0xb7fb5683) * 0x87d9d25f) >> 0x3f))
              goto LAB_0041a6cc;
              while( true ) {
                uVar3 = 0;
                if (DAT_004cc8bc != 0) {
                  uVar3 = DAT_004cc8b8 / DAT_004cc8bc;
                }
                _objc_retain(puVar23);
                if (uVar3 / 0x3b436064 != 0x266af1e2) break;
LAB_0041a6cc:
                _objc_retain(puVar23);
              }
              if ((DAT_004cc8c0 * DAT_004cc8c4 | 0xfb43U) * 0x29f2e000 == -0x28dfdb1b) {
                _objc_release(puVar29);
              }
              do {
                uVar3 = DAT_004cc8c8 & DAT_004cc8cc;
                _objc_release(puVar29);
              } while (((uVar3 | 0x11143383) ^ 0x57ff5ce7) * -0x6bb4536d == -0x16fa910b);
              uVar3 = 0;
              if (DAT_004cc8d4 != 0) {
                uVar3 = DAT_004cc8d0 / DAT_004cc8d4;
              }
              puVar23 = local_c0;
              if (((uVar3 ^ 0x81c922) & 0x10c3dd23) == 0xcc5d9692) {
                _objc_release(local_c0);
                puVar23 = local_c0;
              }
              do {
                iVar2 = DAT_004cc8d8 * DAT_004cc8dc;
                _objc_release(puVar23);
              } while ((iVar2 + 0x158166b3U & 0xfff5ef7f | 0x6af56e3a) < 0x2063b6ca);
            }
            uVar8 = local_118;
            if (((DAT_004cc930 * DAT_004cc934 | 0x137a9cb7U) ^ 0x367b819d) + 0x44f73674 < 0x35f2c8ec
               ) {
              puVar28[5] = 0;
              puVar28[4] = 0;
              puVar28[7] = 0;
              puVar28[6] = 0;
              puVar28[1] = 0;
              *puVar28 = 0;
              puVar28[3] = 0;
              puVar28[2] = 0;
              _objc_retain(puVar23);
            }
            puVar28[1] = 0;
            *puVar28 = 0;
            puVar28[3] = 0;
            puVar28[2] = 0;
            puVar28[5] = 0;
            puVar28[4] = 0;
            puVar28[7] = 0;
            puVar28[6] = 0;
            _objc_retain(puVar23);
            local_100 = (undefined8 *)_objc_msgSend(puVar23,local_1f8,puVar28,puVar26,0x10);
            do {
            } while ((DAT_004cc938 & DAT_004cc93c & 0x46097bfa ^ 0x426d798e) + 0xc2e57d17 <
                     0xbc1539bb);
            uVar3 = 0;
            if (DAT_004cc94c != 0) {
              uVar3 = DAT_004cc948 / DAT_004cc94c;
            }
            do {
            } while (0xaa71b8ca < ((uVar3 ^ 0x6a1fbde1) + 0xd1f2aeeb) / 0x56ef6d5e);
            local_1c0 = puVar23;
            if (local_100 != (undefined8 *)0x0) {
              local_128 = *(undefined **)local_b8[2];
              do {
              } while (0x47fcea49 <
                       ((DAT_004cc958 ^ DAT_004cc95c) * 0x299ead2 & 0x674567a1 | 0x240461a1));
              do {
              } while (0xf3b7d5c8 < DAT_004cc968 * DAT_004cc96c + 0x6a0bea73U);
              do {
                local_148 = PTR_s_timeEnabled_0048c000;
                local_a0 = PTR_s_model_0048c008;
                local_1d8 = PTR_s_viewModelScene_0048b4c0;
                local_200 = PTR_s_messageWrap_0048b8c8;
                local_208 = PTR_s_m_uiMessageType_0048b840;
                local_158 = PTR_s_unsignedIntegerValue_0048b060;
                local_160 = PTR_s_revision_0048c010;
                local_108 = PTR_s_policy_0048bfd0;
                local_130 = PTR_s_kind_0048c0d8;
                local_e0 = PTR_s_joinsPrevious_0048c0e8;
                local_138 = PTR_s_joinsNext_0048c0f0;
                local_1c8 = PTR_s_b_isFirstMessage_0048b910;
                local_140 = PTR_s_boolValue_0048b240;
                local_1e0 = PTR_s_b_isLastMessage_0048b508;
                local_1f0 = PTR_s_b_isMiddleMessage_0048b908;
                local_210 = PTR_s_b_isNeedHideHead_0048b520;
                local_218 = PTR_s_b_isCompleted_0048b668;
                local_a8 = PTR_s_numberWithBool__0048b600;
                local_190 = PTR_s_setB_isFirstMessage__0048b8a8;
                local_198 = PTR_s_setB_isLastMessage__0048b8b8;
                local_1a0 = PTR_s_setB_isMiddleMessage__0048b8b0;
                local_1a8 = PTR_s_numberWithInt__0048bd20;
                local_1b0 = PTR_s_setB_isNeedHideHead__0048b8c0;
                local_1b8 = PTR_s_setB_isCompleted__0048b940;
                local_168 = PTR_s_numberWithUnsignedInteger__0048b650;
                local_c8 = PTR_s_resetLayoutCache_0048b630;
                local_170 = PTR_s_cellView_0048b638;
                local_178 = PTR_s_respondsToSelector__0048ab28;
                local_1d0 = PTR_s_setNeedsLayout_0048b640;
                do {
                } while (((DAT_004cc978 + DAT_004cc97c + 0xbafcfee7U) / 0x3df35baf | 0xbe45bc26) <
                         0x1bd69af6);
                local_88 = (undefined8 *)0x0;
                do {
                  uVar3 = local_10c;
                  do {
                  } while (0xc1cf3779 < DAT_004cc988 * DAT_004cc98c * -0x7374a729 + 0x3634ef2cU);
                  if (*(undefined **)local_b8[2] != local_128) {
                    do {
                    } while ((DAT_004cc998 * DAT_004cc99c ^ 0x5996fc76U) * -0x42be4bfa ==
                             -0x22d6e333);
                    _objc_enumerationMutation(local_1c0);
                  }
                  local_80 = *(undefined8 **)(local_b8[1] + (long)local_88 * 8);
                  if (uVar3 == 0) {
LAB_0041af70:
                    uVar3 = 0;
                  }
                  else {
                    uVar8 = _objc_msgSend(local_150,local_148);
                    do {
                    } while (((DAT_004cc9b8 ^ DAT_004cc9bc) + 0xa21cb5bc | 0x7f951f09) == 0x6ccc2acd
                            );
                    if (((uVar8 & 1) == 0) &&
                       (iVar2 = _objc_msgSend(local_90,local_148), iVar2 == 0)) goto LAB_0041af70;
                    do {
                    } while (((DAT_004cc9c8 - DAT_004cc9cc) * -0x677f1221 ^ 0x6a81d835U) +
                             0x66d6cdb6 < 0x94b735c3);
                    _objc_msgSend(local_80,local_a0);
                    lVar11 = _objc_retainAutoreleasedReturnValue();
                    do {
                    } while (0x70c8d219 < (DAT_004cc9d8 - DAT_004cc9dc & 0xbe6f98a9U) + 0xc5d9d266);
                    do {
                    } while (0x995cf0ec < ((DAT_004cc9e8 | DAT_004cc9ec) + 0x6ede7169 ^ 0x12e8c616))
                    ;
                    if (lVar11 == 0) {
                      uVar3 = 0;
                    }
                    else {
                      do {
                      } while (((DAT_004cc9f8 ^ DAT_004cc9fc | 0x706ead24) + 0x7195f4e6 | 0x85efb8f5
                               ) < 0x7e8acf3b);
                      _objc_msgSend(local_80,local_a0);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      uVar3 = 0;
                      if (DAT_004cca0c != 0) {
                        uVar3 = DAT_004cca08 / DAT_004cca0c;
                      }
                      do {
                      } while (((byte)((ulong)(uVar3 + 0xd667b926) * 0x54205d1 >> 0x38) & 0xfffffffd
                               ) == 0x63978247);
                      iVar2 = _objc_msgSend(uVar9,local_1d8);
                      do {
                      } while (0x283f9e66 < (DAT_004cca18 + DAT_004cca1c + 0x252c1d18U & 0xfa2af4b7)
                              );
                      do {
                      } while (0xd29ca05c < ((DAT_004cca28 ^ DAT_004cca2c ^ 0x88109) & 0x19a309));
                      if (iVar2 == 0) {
                        do {
                        } while ((DAT_004cca38 * DAT_004cca3c * 0x1f9ce049 + 0x2b69589eU |
                                 0x7b5c457f) == 0xefd694c4);
                        _objc_msgSend(local_80,local_a0);
                        uVar10 = _objc_retainAutoreleasedReturnValue();
                        _objc_msgSend(uVar10,local_200);
                        uVar20 = _objc_retainAutoreleasedReturnValue();
                        do {
                        } while (((DAT_004cca48 | DAT_004cca4c) & 0xa0111288) + 0xc8009b7a <
                                 0x29e2e8ae);
                        do {
                        } while (((DAT_004cca58 | DAT_004cca5c) + 0xf822545c & 0x63be6038) ==
                                 0x9c62c42c);
                        uVar6 = _objc_msgSend(uVar20,local_208);
                        do {
                          uVar3 = (uint)(uVar6 < 1000);
                        } while ((DAT_004cca68 - DAT_004cca6c) * 0x6e841544 + 0xe0277488U <
                                 0xa98f258);
                        _objc_release(uVar20);
                        _objc_release(uVar10);
                        do {
                        } while ((DAT_004cca78 * DAT_004cca7c & 0x9fe3f2bbU | 0x9c4262ba) ==
                                 0x863c90c4);
                      }
                      else {
                        uVar3 = 0;
                      }
                      _objc_release(uVar9);
                    }
                    _objc_release(lVar11);
                  }
                  _objc_msgSend(local_80,local_a0);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  do {
                  } while (0xd318a9bc <
                           ((DAT_004cca88 | DAT_004cca8c) * 0x3d3966c7 + 0x26a3c3b1 & 0xaf4af742));
                  uVar10 = _NSSelectorFromString(&PTR____CFConstantStringClassReference_004ca730);
                  do {
                  } while (0xff0d6c71 < DAT_004cca98 * DAT_004cca9c * -0x3f087bc0 + 0xa9a6e5abU);
                  _objc_getAssociatedObject(uVar9,uVar10);
                  local_98 = _objc_retainAutoreleasedReturnValue();
                  if (((DAT_004ccaa0 ^ DAT_004ccaa4 ^ 0xfe3e999e) + 0x59a894a & 0xa84ce5ec) ==
                      0x7f0e3d5f) {
                    _objc_release(uVar9);
                  }
                  _objc_release(uVar9);
                  do {
                  } while (0xe6f4b27d < (DAT_004ccaa8 + DAT_004ccaac + 0x77ea2d3eU ^ 0xb1ce7e02));
                  if (local_98 == 0) {
                    uVar6 = 1;
                  }
                  else {
                    do {
                    } while (0xb66d7876 <
                             (DAT_004ccab8 - DAT_004ccabc & 0x38632bafU) * -0x77e9f35c + 0x273f6b6a)
                    ;
                    lVar11 = _objc_msgSend(local_98,local_158);
                    do {
                    } while ((DAT_004ccac8 - DAT_004ccacc ^ 0xda5a647U) * -0x5fc82f4c == 0x68fdde73)
                    ;
                    lVar19 = _objc_msgSend(local_90,local_160);
                    do {
                      uVar6 = (uint)(lVar11 != lVar19);
                    } while (0xf35115d2 <
                             (DAT_004ccad8 & DAT_004ccadc ^ 0xa55dc1fd) / 0xdfdd808 + 0xc64ada06);
                    do {
                    } while (((DAT_004ccae8 - DAT_004ccaec) + 0xc61d09e0U & 0x9846a3e0) + 0xd2a22879
                             < 0x9ff70ffc);
                  }
                  uVar5 = 0;
                  if (DAT_004ccafc != 0) {
                    uVar5 = DAT_004ccaf8 / DAT_004ccafc;
                  }
                  do {
                  } while (uVar5 * 0x3e95ba7a + 0xe3b6d98e < 0x91fe13ef);
                  local_c0 = (undefined *)_objc_msgSend(local_90,local_108);
                  local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(local_11c | uVar3) & uVar6);
                  do {
                  } while ((int)((long)((ulong)((DAT_004ccb08 ^ DAT_004ccb0c) * 0x4a585343 +
                                               0xa8e27862) * 0x9811ca93) >> 0x3f) == 0x65a70d25);
                  _objc_retain(local_80);
                  do {
                  } while ((DAT_004ccb18 | DAT_004ccb1c) * 0x7d19fff9 == 0x371922bf);
                  _objc_msgSend(local_80,local_a0);
                  local_78 = _objc_retainAutoreleasedReturnValue();
                  do {
                  } while (0xfdcc0c8e <
                           ((uint)((ulong)(DAT_004ccb28 & DAT_004ccb2c) * 0x40e95115 >> 0x3e) *
                            -0x57ebf77e | 0xd2d86cf1));
                  do {
                  } while (((DAT_004ccb38 | DAT_004ccb3c | 0xc000000) ^ 0x46001800 | 0x81bde75b) ==
                           0x51885ba2);
                  if (local_78 != 0) {
                    lVar11 = _objc_msgSend(local_80,local_130);
                    if (lVar11 == 2) {
                      uVar3 = 1;
                    }
                    else {
                      do {
                      } while (0xd600c3da <
                               (uint)((ulong)((DAT_004ccb58 & DAT_004ccb5c | 0xe1680f1) + 0xb3f05dec
                                             ) * 0x4465a89 >> 0x39));
                      lVar11 = _objc_msgSend(local_80,local_130);
                      do {
                        uVar3 = (uint)(lVar11 == 3);
                      } while (((uint)(DAT_004ccb68 + DAT_004ccb6c) / 0x32f23f67 | 0x9cadc129) <
                               0x71ad3af);
                    }
                    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,uVar3);
                    do {
                    } while (((DAT_004ccb78 & DAT_004ccb7c & 0x6d775968) / 0x2735bce9) * -0x58f90bb
                             == -0x67a3ccb4);
                    uVar7 = _objc_msgSend(local_80,local_e0);
                    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar7);
                    do {
                    } while (0xba033361 <
                             ((uint)((ulong)(DAT_004ccb88 ^ DAT_004ccb8c) * 0x2141765b >> 0x3d) |
                             0x1a50ba76));
                    uVar7 = _objc_msgSend(local_80,local_138);
                    local_d8 = (undefined *)CONCAT44(local_d8._4_4_,uVar7);
                    do {
                    } while (((DAT_004ccba8 | DAT_004ccbac) + 0x6caa81cb ^ 0x94006103) < 0x6f6ac801)
                    ;
                    iVar2 = _objc_msgSend(local_80,local_e0);
                    do {
                    } while (0xc9a39df1 <
                             ((DAT_004ccbb8 - DAT_004ccbbc | 0xd33446d9U) + 0x499709ee | 0x4652de7a)
                            );
                    if (iVar2 == 0) {
                      local_e8 = (undefined *)((ulong)local_e8 & 0xffffffff00000000);
                    }
                    else {
                      do {
                      } while ((DAT_004ccbc8 * DAT_004ccbcc * 0x6dfc3718 | 0xbcb6b933U) ==
                               0x65baa534);
                      uVar7 = _objc_msgSend(local_80,local_138);
                      local_e8 = (undefined *)CONCAT44(local_e8._4_4_,uVar7);
                    }
                    _objc_getAssociatedObject(local_78,&DAT_004d2108);
                    lVar11 = _objc_retainAutoreleasedReturnValue();
                    uVar3 = 0;
                    if (DAT_004ccbdc != 0) {
                      uVar3 = DAT_004ccbd8 / DAT_004ccbdc;
                    }
                    do {
                    } while ((uVar3 * 0x46893350 & 0x4100400) == 0xd7d31e86);
                    uVar3 = 0;
                    if (DAT_004ccbec != 0) {
                      uVar3 = DAT_004ccbe8 / DAT_004ccbec;
                    }
                    do {
                    } while (0xdb7437e < (uVar3 * -0x72b3cb37 & 0x26eb1342));
                    if (lVar11 == 0) {
LAB_0041bf74:
                      do {
                      } while ((DAT_004ccd28 * DAT_004ccd2c ^ 0x60c00711U | 0x535f08e) == 0x98edc24c
                              );
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_a8,(uint)local_b0 ^ 1)
                      ;
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while ((DAT_004ccd38 & DAT_004ccd3c & 0x30000000) + 0x71505599 < 0x6d9a2066)
                      ;
                      uVar3 = 0;
                      if (DAT_004ccd4c != 0) {
                        uVar3 = DAT_004ccd48 / DAT_004ccd4c;
                      }
                      do {
                      } while (0x42698fe0 < (uVar3 * 0x57cc8149 + 0x1cd6c0b9 & 0x3bfc88dd));
                      _objc_msgSend(local_78,local_190,uVar9);
                      if ((DAT_004ccd50 & DAT_004ccd54) * -0x5d3b161 == 0x1ad4d48c) {
                        _objc_release(uVar9);
                      }
                      do {
                        uVar3 = DAT_004ccd58 | DAT_004ccd5c;
                        _objc_release(uVar9);
                      } while (0xbb5c1ac < (uVar3 * -0x123e64c5 + 0x352534eb) / 0x1047fcff);
                      uVar3 = 0;
                      if (DAT_004ccd6c != 0) {
                        uVar3 = DAT_004ccd68 / DAT_004ccd6c;
                      }
                      do {
                      } while ((uVar3 | 0xd053b796) == 0xb8804bb8);
                      uVar3 = 0;
                      if (DAT_004ccd7c != 0) {
                        uVar3 = DAT_004ccd78 / DAT_004ccd7c;
                      }
                      do {
                      } while ((int)((long)((ulong)(uVar3 + 0x97d1d78e) * 0xcc5162fd) >> 0x3f) *
                               0x2eec5ff == -0x9474d1);
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_a8,(uint)local_d8 ^ 1)
                      ;
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while ((int)((long)((ulong)(DAT_004ccd88 + DAT_004ccd8c + 0x27242f4e) *
                                           0xbe9b9b8f) >> 0x3f) == 0x2ea0fca3);
                      do {
                      } while (((DAT_004ccd98 ^ DAT_004ccd9c) / 0x999feb5) * 0x38978778 ==
                               0x11092994);
                      _objc_msgSend(local_78,local_198,uVar9);
                      _objc_release(uVar9);
                      do {
                      } while (((DAT_004ccda8 ^ DAT_004ccdac) & 0x840800c5) * 0x1d32f2b7 <
                               0x15334c4a);
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_a8,
                                    (ulong)local_e8 & 0xffffffff);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      uVar3 = 0;
                      if (DAT_004ccdbc != 0) {
                        uVar3 = DAT_004ccdb8 / DAT_004ccdbc;
                      }
                      do {
                      } while (0x79109422 < uVar3 + 0x673b1ae4);
                      _objc_msgSend(local_78,local_1a0,uVar9);
                      _objc_release(uVar9);
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_1a8,
                                    (ulong)local_b0 & 0xffffffff);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while (0x8323a937 <
                               ((DAT_004ccdc8 ^ DAT_004ccdcc) * -0x47de94fe ^ 0x50bacde2));
                      do {
                      } while ((DAT_004ccdd8 | DAT_004ccddc) * 0x7539e2c0 == -0x38badca);
                      _objc_msgSend(local_78,local_1b0,uVar9);
                      if (((DAT_004ccde0 | DAT_004ccde4) * -0x7984e05b & 0x1321eb7c | 0x1320a334) ==
                          0x66f77db1) goto LAB_0041c6c8;
                      while (uVar3 = DAT_004ccde8 ^ DAT_004ccdec, _objc_release(uVar9),
                            (uVar3 / 0x31dc4e96 & 4) == 0x8201a2ec) {
LAB_0041c6c8:
                        _objc_release(uVar9);
                      }
                      do {
                      } while (0x6074c978 <
                               (uint)((ulong)(DAT_004ccdf8 * DAT_004ccdfc + 0x16da2041U ^ 0xae32506)
                                      * 0xf22bd3 >> 0x37));
                      uVar3 = 0;
                      if (DAT_004cce0c != 0) {
                        uVar3 = DAT_004cce08 / DAT_004cce0c;
                      }
                      do {
                      } while ((uVar3 & 0xd5d68a11 | 0x85440010) + 0x6438554c < 0xb79cef59);
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_a8,
                                    (ulong)local_f0 & 0xffffffff);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while (((uint)((ulong)(DAT_004cce18 * DAT_004cce1c + 0x681554e) * 0x310af9b
                                      >> 0x39) | 0x42738712) < 0x346829d2);
                      do {
                      } while ((DAT_004cce28 ^ DAT_004cce2c) == 0x6de2f01b);
                      _objc_msgSend(local_78,local_1b8,uVar9);
                      if (((uint)((ulong)((uint)(DAT_004cce30 * DAT_004cce34) >> 3) * 0x4719195 >>
                                 0x35) ^ 0x35dda24a) + 0x980989b1 < 0x604b0c1) goto LAB_0041ccd0;
                      while (iVar2 = DAT_004cce38 + DAT_004cce3c, _objc_release(uVar9),
                            0xb2ccd5f1 <
                            (((uint)(iVar2 * 0x25a81903) >> 4) / 0xea8699d ^ 0x34750e57)) {
LAB_0041ccd0:
                        _objc_release(uVar9);
                      }
                      do {
                      } while ((int)((long)((ulong)((DAT_004cce48 & DAT_004cce4c) + 0xd45b5314) *
                                           0xeabb284f) >> 0x3f) == 0x686bd2c1);
LAB_0041c76c:
                      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_168,local_c0);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      _objc_setAssociatedObject(local_78,&DAT_004d2108,uVar9,1);
                      _objc_release(uVar9);
                      do {
                      } while (((DAT_004cce58 + DAT_004cce5c) * 0x10e1e910 + 0x194d54c0U |
                               0x75f51eb2) == 0x38776114);
                      _objc_msgSend(local_78,local_c8);
                      do {
                      } while (0x8b996893 < (DAT_004cce68 - DAT_004cce6c) + 0x61b0c572U);
                      _objc_msgSend(local_78,local_170);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while (((DAT_004cce78 & DAT_004cce7c) / 0x7e905db9 | 0xce753a4) *
                               -0x25bc3e10 < 0xc72c0ba5);
                      do {
                      } while (((DAT_004cce88 & DAT_004cce8c) * -0xd7ad007 & 0x28f3af7f) *
                               0x46642c44 == -0x63f3b10b);
                      iVar2 = _objc_msgSend(uVar9,local_178,local_c8);
                      do {
                      } while (0xabeecea5 <
                               (DAT_004cce98 - DAT_004cce9c | 0x708822eeU) * -0x28c015f2 +
                               0xfcd5aa0e);
                      if (iVar2 != 0) {
                        uVar3 = 0;
                        if (DAT_004cceac != 0) {
                          uVar3 = DAT_004ccea8 / DAT_004cceac;
                        }
                        do {
                        } while ((uVar3 | 0x444a5ca1) / 0x309252fd + 0xb411607e < 0x6ed967b1);
                        _objc_msgSend(uVar9,local_c8);
                      }
                      do {
                      } while ((DAT_004cceb8 ^ DAT_004ccebc) / 0x7ee7b54 == 0x9785e494);
                      do {
                      } while (0xc6092476 <
                               (DAT_004ccec8 + DAT_004ccecc + 0x80228a03U & 0xef3f312d ^ 0xec2f8f9a)
                              );
                      uVar10 = _objc_msgSend(PTR__OBJC_CLASS___UIView_0048ca10,local_180);
                      do {
                      } while ((((DAT_004cced8 | DAT_004ccedc) + 0xcfba8582 | 0x46a66948) ^
                               0x76349fe5) < 0x60c29b73);
                      iVar2 = _objc_msgSend(uVar9,local_188,uVar10);
                      if (iVar2 != 0) {
                        do {
                        } while ((DAT_004ccee8 | DAT_004cceec | 0xc3cc302c) == 0x6c6154ba);
                        _objc_msgSend(uVar9,local_1d0);
                      }
                      if (0xe5d06580 <
                          ((DAT_004ccef0 - DAT_004ccef4) + 0xde6a404bU ^ 0x98a290a0) + 0x9be308e8) {
                        _objc_release(uVar9);
                      }
                      do {
                        uVar3 = DAT_004ccef8 | DAT_004ccefc;
                        _objc_release(uVar9);
                      } while ((uVar3 + 0x3f2039e0 | 0xf9f96d7f) < 0xdc26cffa);
                    }
                    else {
                      do {
                      } while (0x2d2a0167 <
                               ((DAT_004ccbf8 * DAT_004ccbfc & 0xe32e904aU) / 0x34c0801b & 4));
                      _objc_msgSend(local_78,local_1c8);
                      uVar9 = _objc_retainAutoreleasedReturnValue();
                      uVar3 = 0;
                      if (DAT_004ccc0c != 0) {
                        uVar3 = DAT_004ccc08 / DAT_004ccc0c;
                      }
                      do {
                      } while (((uVar3 ^ 0xd1146810) & 0xd114e851) < 0x74f66d01);
                      iVar2 = _objc_msgSend(uVar9,local_140);
                      uVar3 = 0;
                      if (DAT_004ccc1c != 0) {
                        uVar3 = DAT_004ccc18 / DAT_004ccc1c;
                      }
                      do {
                      } while (0xeab6c9dc < (uVar3 + 0x801f12f6 | 0x321866f));
                      if ((uint)local_b0 == iVar2) {
LAB_0041bf30:
                        _objc_release(uVar9);
                        uVar3 = 0;
                        if (DAT_004ccd1c != 0) {
                          uVar3 = DAT_004ccd18 / DAT_004ccd1c;
                        }
                        do {
                        } while ((uVar3 + 0xccceff70 & 0x8be6f8f8) < 0x5eebdfec);
                        goto LAB_0041bf74;
                      }
                      uVar3 = 0;
                      if (DAT_004ccc2c != 0) {
                        uVar3 = DAT_004ccc28 / DAT_004ccc2c;
                      }
                      do {
                      } while ((uVar3 & 0x4d640018) == 0xd18d2826);
                      _objc_msgSend(local_78,local_1e0);
                      uVar10 = _objc_retainAutoreleasedReturnValue();
                      do {
                      } while ((DAT_004ccc38 * DAT_004ccc3c * -0x1f86640 + 0x30e70400U & 0xc12ea800)
                               < 0x22bc31de);
                      iVar2 = _objc_msgSend(uVar10,local_140);
                      do {
                      } while (0xca878fa5 <
                               (uint)((ulong)((uint)((ulong)(DAT_004ccc48 & DAT_004ccc4c) *
                                                     0x52d428d5 >> 0x3e) | 0xd94fa264) * 0x1b06ed53
                                     >> 0x3c));
                      if ((uint)local_d8 == iVar2) {
                        if ((DAT_004ccc50 * DAT_004ccc54 * 0x3ba48448 & 0xa0c731b0U | 0x22190) !=
                            0xeef374a) goto LAB_0041bee0;
                        do {
                          _objc_release(uVar10);
LAB_0041bee0:
                          uVar3 = DAT_004ccc58 | DAT_004ccc5c;
                          _objc_release(uVar10);
                        } while (((uVar3 ^ 0x4a405060) & 0x4a4b587d ^ 0xf7c34711) < 0xd166fd1f);
                        goto LAB_0041bf30;
                      }
                      do {
                        uVar3 = 0;
                        if (DAT_004ccc6c != 0) {
                          uVar3 = DAT_004ccc68 / DAT_004ccc6c;
                        }
                      } while (uVar3 * -0x554f00df + 0x7503188 < 0x131f8cb7);
                      _objc_msgSend(local_78,local_1f0);
                      uVar20 = _objc_retainAutoreleasedReturnValue();
                      uVar3 = _objc_msgSend(uVar20,local_140);
                      do {
                      } while (0x15f45606 <
                               ((DAT_004ccc78 - DAT_004ccc7c) + 0x4de0078aU ^ 0xbe06adc7) /
                               0x152337cf);
                      do {
                      } while ((DAT_004ccc88 - DAT_004ccc8c ^ 0xcd20da71U) * -0x4940072f ==
                               0x66cce744);
                      if ((((uint)local_e8 ^ uVar3) & 1) == 0) {
                        _objc_msgSend(local_78,local_210);
                        uVar21 = _objc_retainAutoreleasedReturnValue();
                        do {
                        } while ((uint)((DAT_004ccca8 - DAT_004cccac) * 0x32ba4ca7) < 0x29d2154d);
                        uVar3 = _objc_msgSend(uVar21,local_140);
                        do {
                        } while ((DAT_004cccb8 & DAT_004cccbc ^ 0x62740022 | 0x948ac859) *
                                 -0x48660c0a == 0x19000699);
                        if ((((uint)local_b0 ^ uVar3) & 1) == 0) {
                          do {
                          } while (0xf6dfa0cb <
                                   ((DAT_004cccc8 - DAT_004ccccc) + 0xaaffbed7U ^ 0x43638806) +
                                   0x188fb302);
                          _objc_msgSend(local_78,local_218);
                          uVar22 = _objc_retainAutoreleasedReturnValue();
                          uVar3 = 0;
                          if (DAT_004cccdc != 0) {
                            uVar3 = DAT_004cccd8 / DAT_004cccdc;
                          }
                          do {
                          } while (((uint)((ulong)(uVar3 >> 2) * 0x12d679f9 >> 0x39) * 0x1e0dd8bc ^
                                   0xadc68d0f) < 0x5806694c);
                          uVar3 = _objc_msgSend(uVar22,local_140);
                          uVar3 = (uint)local_f0 ^ uVar3;
                          do {
                          } while ((DAT_004ccce8 + DAT_004cccec + 0x1d227beeU | 0x8bfcedac) ==
                                   0x4f988d83);
                          if (0xe5315636 <
                              (uint)((ulong)((uint)(DAT_004cccf0 * DAT_004cccf4 * 0x51397db2) >> 2)
                                     * 0x8106373 >> 0x37)) goto LAB_0041c448;
                          while (uVar6 = DAT_004cccf8 | DAT_004cccfc, _objc_release(uVar22),
                                0xdb337b97 < (uVar6 * -0x5c147177 & 0xf0437b25) + 0x579504f9) {
LAB_0041c448:
                            _objc_release(uVar22);
                          }
                        }
                        else {
                          uVar3 = 1;
                        }
                        _objc_release(uVar21);
                      }
                      else {
                        uVar3 = 1;
                      }
                      if (0xa2441da6 < (DAT_004ccd00 & DAT_004ccd04) + 0x417de398)
                      goto LAB_0041c4e8;
                      while( true ) {
                        uVar6 = DAT_004ccd08 | DAT_004ccd0c;
                        _objc_release(uVar20);
                        _objc_release(uVar10);
                        _objc_release(uVar9);
                        if (uVar6 + 0x716cf280 < 0xf37abedc) break;
LAB_0041c4e8:
                        _objc_release(uVar20);
                        _objc_release(uVar10);
                        _objc_release(uVar9);
                      }
                      if ((((uint)local_f8 | uVar3) & 1) != 0) {
                        if ((uVar3 & 1) != 0) goto LAB_0041bf74;
                        goto LAB_0041c76c;
                      }
                    }
                    if (0x7051b30e <
                        (uint)-(int)((long)((ulong)((uint)((ulong)(uint)(DAT_004ccf00 * DAT_004ccf04
                                                                        ) * 0x172309d3 >> 0x3b) *
                                                   -0x7eca522) * 0xce19b673) >> 0x3f)) {
                      _objc_release(lVar11);
                    }
                    do {
                      uVar3 = DAT_004ccf08 & DAT_004ccf0c;
                      _objc_release(lVar11);
                    } while ((uVar3 + 0xc6c8b46f | 0x54116459) * -0x7e053fce == 0x6c00bee0);
                  }
                  _objc_release(local_78);
                  _objc_release(local_80);
                  _objc_release(local_98);
                  uVar8 = local_118;
                  do {
                  } while ((((DAT_004ccf18 | DAT_004ccf1c) ^ 0xc07fffff) & 0xdad8c990 | 0x1a50c890)
                           < 0x124b9ed5);
                  local_88 = (undefined8 *)((long)local_88 + 1);
                  uVar3 = 0;
                  if (DAT_004ccf2c != 0) {
                    uVar3 = DAT_004ccf28 / DAT_004ccf2c;
                  }
                  do {
                  } while (0x9850fa47 < uVar3 * 0x19442c36 + 0xb9f8c05e);
                } while (local_88 != local_100);
                do {
                } while ((DAT_004ccf38 + DAT_004ccf3c | 0xca501978U) == 0x22df7cf9);
                local_100 = (undefined8 *)_objc_msgSend(local_1c0,local_1f8,local_b8,local_220,0x10)
                ;
                do {
                } while (((DAT_004ccf48 ^ DAT_004ccf4c) / 0x35f74a8e) * -0x29615392 == -0x33d877ea);
              } while (local_100 != (undefined8 *)0x0);
            }
            puVar23 = local_1c0;
            if (0xbaad40c2 <
                (uint)((ulong)(DAT_004ccf50 & DAT_004ccf54 | 0x25599b0a) * 0x1d300d41 >> 0x3c))
            goto LAB_0041cfd8;
            while (iVar2 = DAT_004ccf58 - DAT_004ccf5c, _objc_release(puVar23), puVar26 = local_228,
                  0xe506e4a7 < ((uint)(iVar2 * 0x7c6a26ad) / 0x563cffbe | 0x7c51a8ed)) {
LAB_0041cfd8:
              _objc_release(puVar23);
            }
            iVar2 = _objc_msgSend(local_90,local_228);
            do {
              puVar29 = puVar23;
              if (iVar2 == 0) {
                puVar29 = (undefined *)0x0;
              }
            } while (((DAT_004ccf68 - DAT_004ccf6c) * -0x266724c1 & 0xf9fe7e9fU | 0xe0b87e9f) <
                     0x357d6bf5);
            do {
            } while (((DAT_004ccf78 ^ DAT_004ccf7c) * -0x3d56fd6 | 0xff7f36ef) < 0x5ae1e88d);
            do {
            } while (0x8c720fd6 <
                     (uint)((ulong)((DAT_004ccf88 - DAT_004ccf8c & 0xcbd2da36U) + 0x9ea98e5d) *
                            0x839c181d >> 0x3e));
            _objc_msgSend(local_150,PTR_s_setEntries__0048c018,puVar29);
            do {
            } while (((DAT_004ccf98 & DAT_004ccf9c) * -0x7ec39be1 ^ 0xda40a84e) + 0x7598bcdb <
                     0x51b2a71d);
            _objc_msgSend(local_150,PTR_s_setFingerprint__0048c020,uVar8);
            do {
            } while ((DAT_004ccfa8 ^ DAT_004ccfac ^ 0x25859ddc) * 0x58c412e3 < 0x428e8549);
            do {
            } while (0xa5f3c112 <
                     ((DAT_004ccfb8 - DAT_004ccfbc ^ 0x48008bc2U) & 0x4e799bda) / 0x18f51a8);
            uVar9 = _objc_msgSend(local_90,PTR_s_policy_0048bfd0);
            do {
            } while (((DAT_004ccfc8 * DAT_004ccfcc | 0x23f95723U) * -0x2c0d35f6 & 0x64ce594e) ==
                     0x74a239a9);
            do {
            } while (((DAT_004ccfd8 ^ DAT_004ccfdc) + 0x3e0fb6f0 | 0x19f87152) == 0x2e59180f);
            _objc_msgSend(local_150,PTR_s_setPolicy__0048c028,uVar9);
            do {
            } while (0xc69686c2 <
                     ((DAT_004ccfe8 & DAT_004ccfec) / 0x9cc3dfc | 0x176b4dc0) * -0x496d854b);
            do {
            } while ((DAT_004ccff8 | DAT_004ccffc) * 0x21757fb1 + 0xd50a2813 < 0x32d972e3);
            uVar9 = _objc_msgSend(local_90,PTR_s_layoutPolicy_0048bfe0);
            do {
            } while (0xf0957e4a <
                     (uint)((ulong)((DAT_004cd008 - DAT_004cd00c) * -0x54e125b0 & 0xeb990020) *
                            0x6894275f >> 0x3e));
            uVar3 = 0;
            if (DAT_004cd01c != 0) {
              uVar3 = DAT_004cd018 / DAT_004cd01c;
            }
            do {
            } while ((uVar3 * 0x2949f284 + 0x8ac1d000 & 0x645109c4) == 0xb5264549);
            _objc_msgSend(local_150,PTR_s_setLayoutPolicy__0048c030,uVar9);
            do {
            } while (0x5bfd55ff <
                     (uint)((int)((long)((ulong)((DAT_004cd028 ^ DAT_004cd02c) + 0xfecb324e) *
                                        0x9a607d1d) >> 0x3f) * 0x2152c9c1));
            do {
            } while (0xd309fd8f <
                     (DAT_004cd038 - DAT_004cd03c ^ 0x1687f1e3U) * -0x3c9f0e0b + 0x6e40b880);
            uVar9 = _objc_msgSend(local_90,PTR_s_timePolicy_0048bfe8);
            do {
            } while ((DAT_004cd048 & DAT_004cd04c) == 0xa350cc4);
            _objc_msgSend(local_150,PTR_s_setTimePolicy__0048c038,uVar9);
            uVar3 = 0;
            if (DAT_004cd05c != 0) {
              uVar3 = DAT_004cd058 / DAT_004cd05c;
            }
            do {
            } while (((uint)((ulong)uVar3 * 0x3ef81213 >> 0x3d) | 0xbf37fffe) == 0xaa3c6413);
            uVar9 = _objc_msgSend(local_90,PTR_s_timeEnabled_0048c000);
            do {
            } while ((((DAT_004cd068 & DAT_004cd06c) + 0x945f7f3d ^ 0xe0e0e0e) & 0x3f3e349a) ==
                     0x67e61a5c);
            do {
            } while ((uint)((ulong)(DAT_004cd078 & DAT_004cd07c) * 0x2760a18f >> 0x3d) * 0x146d1aeb
                     + 0x654c6263 < 0x388d982a);
            _objc_msgSend(local_150,PTR_s_setTimeEnabled__0048c040,uVar9);
            do {
            } while ((int)((long)((ulong)((DAT_004cd088 + DAT_004cd08c | 0x41f7b9e9U) + 0x28807f55)
                                 * 0xad2afad9) >> 0x3f) == 0x3aae705a);
            uVar3 = 0;
            if (DAT_004cd09c != 0) {
              uVar3 = DAT_004cd098 / DAT_004cd09c;
            }
            do {
            } while (0xd8d4a7ae <
                     0x5b4c53bU - (int)((long)((ulong)(uVar3 * 0x6e4737f0) * 0xac93d605) >> 0x3f));
            _objc_msgSend(local_150,PTR_s_setInitialized__0048c048,1);
            uVar9 = _objc_msgSend(local_90,puVar26);
            _objc_msgSend(local_150,PTR_s_setActive__00489b08,uVar9);
            if (((DAT_004cd0a0 | DAT_004cd0a4) & 0xe100708) * 0xe6b91ec < 0x67146317) {
              _objc_release(puVar23);
            }
            do {
              iVar2 = DAT_004cd0a8 - DAT_004cd0ac;
              _objc_release(puVar23);
            } while (0xdc164960 < (iVar2 + 0x9f3b5fb6U ^ 0x6ad05349));
            do {
            } while ((DAT_004cd0b8 ^ DAT_004cd0bc) * 0x16d2c420 + 0xb4b25340 < 0x16af0fc8);
          }
        }
        _objc_release(local_d0);
        do {
        } while (0x7eece706 <
                 ((DAT_004cd0c8 + DAT_004cd0cc & 0x2e6e925bU) + 0x6824045f & 0xc89686bf));
        _objc_msgSend(local_150,local_230,0);
      }
      param_1 = local_1e8;
      _objc_release(local_90);
    }
  }
  uVar9 = local_150;
  if ((DAT_004cd0f0 & DAT_004cd0f4 & 0xa2fd5838) == 0xe6db977e) goto LAB_0041da34;
  while (iVar2 = DAT_004cd0f8 - DAT_004cd0fc, _objc_release(uVar9),
        iVar2 * -0x6d84144c == -0x5a907615) {
LAB_0041da34:
    _objc_release(uVar9);
  }
  do {
  } while (((DAT_004cd108 * DAT_004cd10c & 0xdba2a253U) + 0xc904a7f9 | 0x6b32c5a4) < 0x76dc2831);
LAB_0041da98:
  while (uVar3 = DAT_004cd118 | DAT_004cd11c, _objc_release(param_1),
        (uVar3 + 0x8798935b | 0xd3ff8e47) / 0x2c9a1318 == 0xed0f2b76) {
    _objc_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_00481638 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// #####################################
// ##### FUN_0042bf78 @ 0042bf78
// #####################################

undefined1 FUN_0042bf78(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int local_b8;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined *local_b0;
  undefined8 local_a8;
  char local_99;
  undefined *local_98;
  char local_8d;
  int local_8c;
  undefined *local_88;
  char local_79;
  undefined *local_78;
  char local_69;
  
  _objc_retain();
  _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_b8 = 0x2820be80;
LAB_0042c02c:
  if (local_b8 < 0xd3c4268) {
    if (-0x33d8f17c < local_b8) {
      if (local_b8 < -0x12bee49d) {
        if (local_b8 < -0x29cd2fca) {
          if (local_b8 == -0x2bf8e84a) {
            local_b8 = -0x22f3a2a2;
            if ((DAT_004cdc90 + DAT_004cdc94 + 0x2f57b7aU & 0x8a694d48) == 0x3155e462) {
              local_b8 = 0xd3c4268;
            }
          }
          else if (local_b8 == -0x2a10cc27) {
            local_78 = PTR_s_enabledMerge_0048ae20;
            local_b8 = -0x29cd2fca;
          }
          else if (local_b8 == -0x33d8f17b) {
            return local_b2;
          }
        }
        else if (local_b8 == -0x29cd2fca) {
          local_79 = _objc_msgSend(uVar3,local_78);
          local_b8 = -0x2bf8e84a;
        }
        else if (local_b8 == -0x22f3a2a2) {
          local_b8 = -0x12bee49d;
          if (0x433f6901 <
              (uint)((ulong)((DAT_004cdc98 - DAT_004cdc9c | 0xcf6f816fU) ^ 0x453e2316) * 0x37b774d9
                    >> 0x3c)) {
            local_b8 = -0x22f3a2a2;
          }
        }
        else if (local_b8 == -0x20bfec62) {
          local_b8 = -0x3a76475b;
        }
      }
      else if (local_b8 < 0xadce028) {
        if (local_b8 == -0x12bee49d) {
          bVar1 = local_79 == '\0';
          local_b8 = 0x22c87912;
          goto LAB_0042ce14;
        }
        if (local_b8 == 0x30eea4a) {
          local_b8 = -0x6cef3ffb;
          if (local_99 == '\0') {
            local_b8 = -0x5ad64a68;
          }
          local_b1 = 1;
        }
        else if (local_b8 == 0x39b003d) {
          local_b8 = 0x5e489365;
        }
      }
      else if (local_b8 == 0xadce028) {
        local_b8 = 0xeab75d1;
      }
      else if (local_b8 == 0xaf0330c) {
        _objc_msgSend(param_1,local_88);
        local_b8 = 0x27388265;
      }
      else if (local_b8 == 0xbc622f0) {
        local_b8 = 0x7273f9c2;
      }
      goto LAB_0042c02c;
    }
    if (-0x5ad64a69 < local_b8) {
      if (local_b8 < -0x4220dacc) {
        if (local_b8 == -0x5ad64a68) {
          local_b2 = local_b1;
          uVar5 = (DAT_004cdd10 - DAT_004cdd14) + 0x582f70f2U ^ 0x648f8557;
          bVar2 = 0xca818021 < uVar5;
          bVar1 = uVar5 == 0xca818022;
          local_b8 = -0x53c1aac0;
          iVar4 = 0x5b03ab66;
          goto LAB_0042cc30;
        }
        if (local_b8 == -0x5aa6de98) {
          local_b8 = 0x3df67150;
        }
        else if (local_b8 == -0x53c1aac0) {
          _objc_release(uVar3);
          _objc_release(param_1);
          local_b8 = 0x5b03ab66;
        }
      }
      else if (local_b8 == -0x4220dacc) {
        local_b8 = -0x77624cfd;
      }
      else if (local_b8 == -0x3e918828) {
        local_b8 = 0x3505ed3e;
      }
      else if (local_b8 == -0x3a76475b) {
        local_99 = _objc_msgSend(uVar3,local_98);
        local_b8 = 0x447e417b;
      }
      goto LAB_0042c02c;
    }
    if (local_b8 < -0x6cef3ffb) {
      if (local_b8 != -0x77624cfd) {
        if (local_b8 == -0x729fc69d) {
          uVar5 = (DAT_004cdcc0 * DAT_004cdcc4 | 0xbbbec059U) + 0xe0834ea7 & 0x98c35a06;
          bVar2 = 0x93df80d2 < uVar5;
          bVar1 = uVar5 == 0x93df80d3;
          iVar4 = -0x6cc24162;
          local_b8 = 0x372674a1;
          goto LAB_0042cc7c;
        }
        if (local_b8 == -0x6fffbcc7) {
          local_b8 = -0x729fc69d;
        }
        goto LAB_0042c02c;
      }
      bVar1 = (DAT_004cdc80 + DAT_004cdc84 + 0x9a71bc32U | 0x85ef1db1) == 0x30863ea0;
      iVar4 = 0x67160996;
      local_b8 = 0x2c437bd0;
    }
    else {
      if (local_b8 != -0x6cef3ffb) {
        if (local_b8 == -0x6cc24162) {
          local_b8 = 0x372674a1;
        }
        else if (local_b8 == -0x60aa068f) {
          _objc_msgSend(param_1,PTR_s_chatContact_0048b658);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = 0x3f3dd688;
        }
        goto LAB_0042c02c;
      }
      bVar1 = DAT_004cdcf0 - DAT_004cdcf4 == -0x27149c7f;
      iVar4 = -0x60aa068f;
      local_b8 = 0x3f3dd688;
    }
    if (bVar1) {
      local_b8 = iVar4;
    }
    goto LAB_0042c02c;
  }
  if (local_b8 < 0x37b462f4) {
    if (local_b8 < 0x27388265) {
      if (local_b8 < 0x19dedf69) {
        if (local_b8 == 0xd3c4268) {
          local_b8 = -0x22f3a2a2;
          goto LAB_0042c02c;
        }
        if (local_b8 == 0xeab75d1) {
          local_88 = PTR_s_viewModelScene_0048b4c0;
          local_b8 = 0x39b003d;
          goto LAB_0042c02c;
        }
        if (local_b8 != 0x1099cdbb) goto LAB_0042c02c;
        local_b0 = PTR_s_isChatroom_0048b660;
        bVar1 = 0x6c304662 < ((DAT_004cdd08 + DAT_004cdd0c | 0x6b83d685U) ^ 0x5d079e05) * 0x3f300e52
        ;
        local_b8 = 0x69369158;
        iVar4 = 0x1e9a8394;
      }
      else {
        if (local_b8 == 0x19dedf69) {
          local_b8 = -0x3e918828;
          if (((DAT_004cdcd0 + DAT_004cdcd4 + 0x9d44e482U) / 0x3561b7c | 0xe7f34e3c) != 0x8728b375)
          {
            local_b8 = 0x3505ed3e;
          }
          goto LAB_0042c02c;
        }
        if (local_b8 == 0x1e9a8394) {
          local_b8 = 0x6290316d;
          goto LAB_0042c02c;
        }
        if (local_b8 != 0x22c87912) goto LAB_0042c02c;
        bVar1 = 0xfe09bfc3 <
                (uint)(byte)((ulong)(DAT_004cdca0 * DAT_004cdca4 & 0x9212d607) * 0x9fa0519 >> 0x38)
                * -0x3d6c22e3;
        local_b8 = 0xeab75d1;
        iVar4 = 0xadce028;
      }
      if (bVar1) {
        local_b8 = iVar4;
      }
      goto LAB_0042c02c;
    }
    if (local_b8 < 0x2ef3340c) {
      if (local_b8 == 0x27388265) {
        uVar5 = (DAT_004cdcb8 + DAT_004cdcbc | 0x2dbeaa14U) + 0x1a39d646 & 0x45bea4f4;
        local_8c = _objc_msgSend(param_1,local_88);
        bVar2 = 0xa80869a8 < uVar5;
        bVar1 = uVar5 == 0xa80869a9;
        local_b8 = 0xaf0330c;
        iVar4 = -0x6fffbcc7;
        goto LAB_0042cc30;
      }
      if (local_b8 == 0x2820be80) {
        local_b8 = -0x5aa6de98;
        if ((DAT_004cdc70 * DAT_004cdc74 | 0xe5933c7aU) * 0x6436f063 != 0x24a815d6) {
          local_b8 = 0x3df67150;
        }
        goto LAB_0042c02c;
      }
      if (local_b8 != 0x2c437bd0) goto LAB_0042c02c;
      uVar5 = DAT_004cdc88 - DAT_004cdc8c & 0xf5ef7effU | 0xf5e93edf;
      local_69 = FUN_0041db34();
      bVar2 = 0xb0d6c58 < uVar5;
      bVar1 = uVar5 == 0xb0d6c59;
      iVar4 = 0x67160996;
      local_b8 = 0x6df75385;
    }
    else {
      if (local_b8 == 0x2ef3340c) {
        bVar1 = (DAT_004cdce8 + DAT_004cdcec & 0x213ebc8dU | 0x2026b48d) == 0xec9e53b1;
        local_b8 = 0x583b90bf;
        iVar4 = 0x30eea4a;
LAB_0042cd88:
        if (!bVar1) {
          local_b8 = iVar4;
        }
        goto LAB_0042c02c;
      }
      if (local_b8 == 0x3505ed3e) {
        local_98 = PTR_s_enabledMergeOnlyRoom_0048ae30;
        local_b8 = 0x3505ed3e;
        if ((DAT_004cdcd8 & DAT_004cdcdc & 0xbcbf93ab) != 0x3cc45ad6) {
          local_b8 = -0x20bfec62;
        }
        goto LAB_0042c02c;
      }
      if (local_b8 != 0x372674a1) goto LAB_0042c02c;
      uVar5 = 0;
      if (DAT_004cdccc != 0) {
        uVar5 = DAT_004cdcc8 / DAT_004cdccc;
      }
      uVar5 = (uVar5 ^ 0xe1c6a43) * 0x61d7e338;
      local_8d = local_8c == 0;
      bVar2 = 0x81f66e4e < uVar5;
      bVar1 = uVar5 == 0x81f66e4f;
      iVar4 = -0x6cc24162;
      local_b8 = 0x37b462f4;
    }
  }
  else {
    if (local_b8 < 0x5e489365) {
      if (local_b8 < 0x447e417b) {
        if (local_b8 == 0x37b462f4) {
          bVar1 = local_8d == '\0';
          local_b8 = 0x19dedf69;
          goto LAB_0042ce14;
        }
        if (local_b8 == 0x3df67150) {
          uVar5 = 0;
          if (DAT_004cdc7c != 0) {
            uVar5 = DAT_004cdc78 / DAT_004cdc7c;
          }
          local_b8 = 0x3df67150;
          if (0x1df73e77 < (uVar5 | 0xdb3bf8fb) + 0x14d8f36b) {
            local_b8 = -0x4220dacc;
          }
          goto LAB_0042c02c;
        }
        if (local_b8 != 0x3f3dd688) goto LAB_0042c02c;
        uVar5 = DAT_004cdcf8 | DAT_004cdcfc;
        _objc_msgSend(param_1,PTR_s_chatContact_0048b658);
        local_a8 = _objc_retainAutoreleasedReturnValue();
        uVar5 = -(int)((long)((ulong)(uVar5 * 0x3d0a64df + 0xb52e7092) * 0x8446b90d) >> 0x3f);
        bVar2 = 0xbe2845c5 < uVar5;
        bVar1 = uVar5 == 0xbe2845c6;
        local_b8 = -0x60aa068f;
        iVar4 = 0xbc622f0;
      }
      else {
        if (local_b8 == 0x447e417b) {
          local_b8 = 0x2ef3340c;
          if (0xb8d7f2dd <
              ((uint)((ulong)(uint)(DAT_004cdce0 * DAT_004cdce4) * 0xb1197bef >> 0x3e) + 0x5872deed
              & 0x1032c6d7)) {
            local_b8 = 0x583b90bf;
          }
          goto LAB_0042c02c;
        }
        if (local_b8 == 0x583b90bf) {
          local_b8 = 0x2ef3340c;
          goto LAB_0042c02c;
        }
        if (local_b8 != 0x5b03ab66) goto LAB_0042c02c;
        uVar5 = DAT_004cdd18 + DAT_004cdd1c;
        _objc_release(uVar3);
        _objc_release(param_1);
        uVar5 = (uint)((ulong)((uVar5 | 0x25870e31) + 0x698ed5c2) * 0xb0b99327 >> 0x3e);
        bVar2 = 0x7ab17826 < uVar5;
        bVar1 = uVar5 == 0x7ab17827;
        local_b8 = -0x53c1aac0;
        iVar4 = -0x33d8f17b;
      }
LAB_0042cc30:
      if (!bVar2 || bVar1) {
        local_b8 = iVar4;
      }
      goto LAB_0042c02c;
    }
    if (0x69369157 < local_b8) {
      if (local_b8 == 0x69369158) {
        local_b8 = 0x1099cdbb;
      }
      else if (local_b8 == 0x6df75385) {
        bVar1 = local_69 == '\0';
        local_b8 = -0x2a10cc27;
LAB_0042ce14:
        if (bVar1) {
          local_b8 = -0x5ad64a68;
        }
        local_b1 = 0;
      }
      else if (local_b8 == 0x7273f9c2) {
        bVar1 = (DAT_004cdd00 | DAT_004cdd04 | 0xc7f57cf4) == 0x8949f213;
        local_b8 = 0x69369158;
        iVar4 = 0x1099cdbb;
        goto LAB_0042cd88;
      }
      goto LAB_0042c02c;
    }
    if (local_b8 != 0x5e489365) {
      if (local_b8 == 0x6290316d) {
        local_b1 = _objc_msgSend(local_a8,local_b0);
        _objc_release(local_a8);
        local_b8 = -0x5ad64a68;
      }
      else if (local_b8 == 0x67160996) {
        FUN_0041db34();
        local_b8 = 0x2c437bd0;
      }
      goto LAB_0042c02c;
    }
    uVar5 = (DAT_004cdcb0 | DAT_004cdcb4) * 0x39e694be + 0x2986ede4;
    bVar2 = 0xa07860ec < uVar5;
    bVar1 = uVar5 == 0xa07860ed;
    iVar4 = 0x27388265;
    local_b8 = 0xaf0330c;
  }
LAB_0042cc7c:
  if (!bVar2 || bVar1) {
    local_b8 = iVar4;
  }
  goto LAB_0042c02c;
}



// #####################################
// ##### FUN_003dd7f4 @ 003dd7f4
// #####################################

long FUN_003dd7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined8 uVar4;
  uint uVar5;
  int iVar6;
  int local_17c;
  long local_178;
  long local_170;
  undefined8 local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  long local_130;
  undefined *local_128;
  code *local_120;
  byte local_111;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  char local_d9;
  long local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  byte local_bb;
  byte local_ba;
  char local_b9;
  long local_b8;
  char local_a9;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  char local_89;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  char local_69;
  
  _objc_retain();
  _objc_retain(param_3);
  local_17c = 0x5434064a;
LAB_003dd8dc:
  if (local_17c < 0x853999f) {
    if (-0x41bda088 < local_17c) {
      if (-0x15fc7f69 < local_17c) {
        if (local_17c < -0x455dd22) {
          if (local_17c < -0xd9eac37) {
            if (local_17c < -0x120a7902) {
              if (local_17c == -0x15fc7f68) {
                uVar5 = DAT_004c93b0 * DAT_004c93b4 + 0xb6248350U | 0xad3ac062;
                bVar1 = 0x3e5dcdcb < uVar5;
                bVar2 = uVar5 == 0x3e5dcdcc;
                local_17c = 0x552604d8;
                iVar6 = 0x51242d4c;
                goto LAB_003e0220;
              }
              if (local_17c == -0x15f8cd10) {
                local_b9 = local_b8 == 0;
                bVar2 = 0xa528a07d < DAT_004c93e8 * DAT_004c93ec + 0xf7d042abU;
                iVar6 = -0x15f8cd10;
                local_17c = -0x590786c5;
                goto LAB_003e01d4;
              }
            }
            else if (local_17c == -0x120a7902) {
              _objc_release(local_e8);
              DAT_004d2009 = _objc_msgSend(local_f8,PTR_s_isMergeBubble_0048bef0);
              _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c8);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar4,local_f0);
              _objc_retainAutoreleasedReturnValue();
              local_17c = 0x406c0285;
            }
            else if (local_17c == -0xf1225df) {
              local_17c = 0xb206a30;
            }
          }
          else if (local_17c < -0xb1ad050) {
            if (local_17c == -0xd9eac37) {
              bVar2 = local_140 == 0;
              iVar6 = 0x42c5155a;
              local_17c = 0x497e1c80;
LAB_003e02a0:
              if (!bVar2) {
                local_17c = iVar6;
              }
            }
            else if (local_17c == -0xd2923a8) {
              local_bb = local_ba & 1;
              bVar2 = ((DAT_004c9448 - DAT_004c944c ^ 0x2322714bU) * -0x20270fab | 0x21b13793) ==
                      0xaebb8001;
              iVar6 = -0x31ab4cc1;
              local_17c = -0x6e0cd5b7;
              goto LAB_003e098c;
            }
          }
          else {
            if (local_17c != -0xb1ad050) {
              iVar6 = -0x7368410;
              goto LAB_003df3d4;
            }
            local_17c = 0x6866a9e2;
          }
        }
        else if (local_17c < 0x18e415) {
          if (local_17c < -0x3fcecef) {
            if (local_17c == -0x455dd22) {
              local_17c = 0x5c2cd676;
              if ((DAT_004c9400 | DAT_004c9404 | 0x44e8ca7f) + 0x4b7fd1ce < 0xd53f59d1) {
                local_17c = -0x63e6590f;
              }
            }
            else if (local_17c == -0x421a32b) {
              (*DAT_004d2018)(param_1,PTR_s_imageNamed_fromConfig__0048bf08,param_3,param_4);
              _objc_retainAutoreleasedReturnValue();
              local_17c = -0x6a1dda44;
            }
          }
          else if (local_17c == -0x3fcecef) {
            local_17c = -0x44352435;
            if (0x7868d0d5 < ((DAT_004c9360 + DAT_004c9364 ^ 0x11f30039U) & 0x1bff2d3d) + 0x68f8b23e
               ) {
              local_17c = -0x25398977;
            }
          }
          else if (local_17c == -0x2cb459c) {
            local_17c = -0x70dc2c2e;
          }
        }
        else if (local_17c < 0x266bdbc) {
          if (local_17c == 0x18e415) {
            local_17c = 0x38a23848;
            if ((DAT_004c9470 | DAT_004c9474) == 0xd8add684) {
              local_17c = 0x667a678c;
            }
          }
          else if (local_17c == 0x1e5b6e4) {
            bVar2 = local_b9 == '\0';
            local_17c = 0x703e7c12;
            iVar6 = 0x4d46ad57;
            goto LAB_003dfb20;
          }
        }
        else if (local_17c == 0x266bdbc) {
          local_17c = 0x5635d848;
        }
        else if (local_17c == 0x4d79d0b) {
          _objc_msgSend(local_a8,PTR_s_name_0048a060);
          _objc_retainAutoreleasedReturnValue();
          local_17c = 0x554c0967;
        }
        else if (local_17c == 0x5d4710a) {
          _objc_retain(param_4);
          local_17c = 0x4a6bf22d;
        }
        goto LAB_003dd8dc;
      }
      if (local_17c < -0x306d98ae) {
        if (local_17c < -0x387d85b6) {
          if (local_17c < -0x3e58253d) {
            if (local_17c == -0x41bda087) {
              bVar2 = 0x6fa25172 <
                      ((DAT_004c9440 * DAT_004c9444 & 0x3a8d5fffU) + 0x429c179a | 0xc44cab0b);
              iVar6 = -0xd2923a8;
              local_17c = -0x31ab4cc1;
              goto LAB_003e01d4;
            }
            if (local_17c == -0x412db251) {
              bVar2 = (((uint)(DAT_004c94e0 * DAT_004c94e4) / 0x1259de2) * 0x285354b6 | 0x8d46e850)
                      == 0x9c31ff56;
              iVar6 = -0x774edf16;
              local_17c = 0x27613d64;
              goto LAB_003e02a0;
            }
          }
          else if (local_17c == -0x3e58253d) {
            uVar5 = DAT_004c9418 ^ DAT_004c941c;
            DAT_004d2008 = '\x01';
            _objc_release(local_a8);
            local_17c = 0x4bc69d30;
            if ((uVar5 & 0x420282 ^ 0xab4ffc25) < 0x3827c79f) {
              local_17c = -0x3e58253d;
            }
          }
          else if (local_17c == -0x3d85739e) {
            local_17c = -0x15f8cd10;
          }
          goto LAB_003dd8dc;
        }
        if (-0x31ab4cc2 < local_17c) {
          if (local_17c == -0x31ab4cc1) {
            local_17c = -0xd2923a8;
          }
          else if (local_17c == -0x31455ae7) {
            local_17c = -0xd9eac37;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c != -0x387d85b6) {
          if (local_17c == -0x327f84e4) {
            _objc_msgSend(local_110,local_100);
            _objc_release(local_110);
            _objc_release(local_108);
            _objc_release(local_f8);
            _objc_release(local_d0);
            local_17c = -0x5e9c2b9a;
          }
          goto LAB_003dd8dc;
        }
        local_120 = DAT_004d2018;
        local_128 = PTR_s_imageNamed_fromConfig__0048bf08;
        bVar2 = 0x7f72ed9 < (DAT_004c94b8 & DAT_004c94bc) * 0x105f4ae9 + 0x32990a6;
        local_17c = -0x4514b142;
        iVar6 = 0x9159dfe;
      }
      else {
        if (-0x227f61b4 < local_17c) {
          if (local_17c < -0x21ef9367) {
            if (local_17c == -0x227f61b3) {
              local_17c = -0x227f61b3;
              if (0x22ba128b <
                  ((DAT_004c9508 * DAT_004c950c ^ 0x8080a275U | 0x741f5c08) ^ 0xff13bff9)) {
                local_17c = 0x34ff972a;
              }
            }
            else if (local_17c == -0x22168c07) {
              _objc_release(param_4);
              _objc_release(param_3);
              _objc_release(param_1);
              _objc_autoreleaseReturnValue(local_178);
              local_17c = -0x6be477e1;
            }
          }
          else {
            if (local_17c == -0x21ef9367) goto LAB_003de69c;
            if (local_17c == -0x1ed040d6) {
              local_17c = -0x6ec4d9be;
            }
            else if (local_17c == -0x1cd07521) {
              _objc_msgSend(local_80,local_88);
              local_17c = 0x6c2f6062;
            }
          }
          goto LAB_003dd8dc;
        }
        if (-0x25398978 < local_17c) {
          if (local_17c == -0x25398977) {
            local_17c = -0x25398977;
            if (0x7650b03 <
                ((uint)((ulong)(DAT_004c9368 ^ DAT_004c936c | 0xfe0c4b91) * 0xa8416f19 >> 0x3f) ^
                0xa46df8f9)) {
              local_17c = 0x4b0b14c0;
            }
          }
          else if (local_17c == -0x230e225c) {
            _objc_release(local_80);
            local_17c = 0x3c0acd8b;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c != -0x306d98ae) {
          if (local_17c == -0x2883513c) {
            (*local_120)(param_1,local_128,param_3,param_4);
            _objc_retainAutoreleasedReturnValue();
            local_17c = 0x1b619345;
          }
          goto LAB_003dd8dc;
        }
        iVar6 = DAT_004c93a8 - DAT_004c93ac;
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_78);
        local_98 = _objc_retainAutoreleasedReturnValue();
        bVar2 = 0x42d291e4 < (iVar6 + 0x8b2b7e9fU & 0x77d9dbff | 0x6389dbce);
        local_17c = -0x54bd6c73;
        iVar6 = 0x4edd55f4;
      }
LAB_003e0cb8:
      if (bVar2) {
        local_17c = iVar6;
      }
      goto LAB_003dd8dc;
    }
    if (local_17c < -0x6568531d) {
      if (local_17c < -0x6e84ca3d) {
        if (local_17c < -0x70792f46) {
          if (local_17c < -0x72c50808) {
            if (local_17c == -0x7af721fb) {
              local_17c = -0x7af721fb;
              if (((DAT_004c9518 + DAT_004c951c) * -0x79f4cca7 + 0x84e3fbf3U | 0xd38e5cf) <
                  0x6edcebac) {
                local_17c = 0x5405439a;
              }
            }
            else if (local_17c == -0x774edf16) {
              uVar5 = DAT_004c94e8 - DAT_004c94ec;
              _objc_msgSend(local_138,PTR_s_svgImageNamed_fromConfig__0048b0e0,param_3,param_4);
              local_140 = _objc_retainAutoreleasedReturnValue();
              bVar2 = (~uVar5 & 0x93180408 | 8) == 0xdcba70a4;
              iVar6 = -0x774edf16;
              local_17c = -0x31455ae7;
              goto LAB_003e098c;
            }
          }
          else if (local_17c == -0x72c50808) {
LAB_003df670:
            local_17c = 0x3f37c45f;
          }
          else if (local_17c == -0x70dc2c2e) {
            local_ba = DAT_004d2009;
            bVar2 = 0x33048e63 <
                    ((DAT_004c9438 - DAT_004c943c) + 0x2d54fc2dU ^ 0x17a0a78a) * -0x5e62bd29;
            local_17c = -0x2cb459c;
            iVar6 = 0x853999f;
            goto LAB_003e0cb8;
          }
        }
        else if (local_17c < -0x6f22dc11) {
          if (local_17c == -0x70792f46) {
            local_178 = local_160;
            bVar2 = (DAT_004c9530 * DAT_004c9534 * 0x38bf219c + 0xaaef75d8U) / 0x27ff3c51 ==
                    0xb828b704;
            iVar6 = -0x22168c07;
            local_17c = 0x70d9aa6b;
            goto LAB_003e02a0;
          }
          if (local_17c == -0x6f715d41) {
            local_138 = PTR_BubbleBoxAssets_0048cad0;
            local_17c = -0x412db251;
          }
        }
        else {
          if (local_17c == -0x6f22dc11) {
            uVar5 = (DAT_004c94a0 & DAT_004c94a4) * -0x2e4212da & 0xa2fb9226 | 0x22018226;
            bVar1 = 0x2ebe9efc < uVar5;
            bVar2 = uVar5 == 0x2ebe9efd;
            local_17c = -0x5e9c2b9a;
            iVar6 = -0x327f84e4;
            goto LAB_003e0220;
          }
          if (local_17c == -0x6ec4d9be) {
            uVar5 = 0;
            if (DAT_004c94d4 != 0) {
              uVar5 = DAT_004c94d0 / DAT_004c94d4;
            }
            uVar5 = (uVar5 & 0x30d58bff ^ 0x6a5025cf) / 0xf110429;
            bVar1 = 0x796f9cad < uVar5;
            bVar2 = uVar5 == 0x796f9cae;
            iVar6 = 0x4d100cee;
            local_17c = 0x29b2f1c4;
            goto LAB_003e0c10;
          }
        }
      }
      else if (local_17c < -0x69d8f872) {
        if (local_17c < -0x6be477e1) {
          if (local_17c == -0x6e84ca3d) {
            local_17c = 0x18ef6e16;
            if (local_89 == '\0') {
              local_17c = 0x6fb5c771;
            }
            goto LAB_003dfd94;
          }
          if (local_17c == -0x6e0cd5b7) {
            local_17c = 0x4130796d;
          }
        }
        else if (local_17c == -0x6b29e6e9) {
          _objc_release(local_168);
          local_17c = -0x49d7c767;
        }
        else {
          if (local_17c == -0x6a1dda44) {
            uVar5 = 0;
            if (DAT_004c94fc != 0) {
              uVar5 = DAT_004c94f8 / DAT_004c94fc;
            }
            (*DAT_004d2018)(param_1,PTR_s_imageNamed_fromConfig__0048bf08,param_3,param_4);
            local_148 = _objc_retainAutoreleasedReturnValue();
            bVar2 = (uVar5 & 0x40a07208) == 0xe82c92e5;
            local_17c = -0x421a32b;
            iVar6 = 0x524eefd0;
            goto LAB_003dddf0;
          }
          if (local_17c == -0x6be477e1) {
            return local_178;
          }
        }
      }
      else if (local_17c < -0x67b1cddd) {
        if (local_17c == -0x69d8f872) {
          local_17c = -0x6f22dc11;
        }
        else if (local_17c == -0x688aeb13) {
          local_17c = 0x24f574eb;
        }
      }
      else {
        if (local_17c == -0x67b1cddd) {
          bVar2 = local_a9 == '\0';
          local_17c = 0x703e7c12;
          iVar6 = 0x37bb4f21;
          goto LAB_003dfb20;
        }
        if (local_17c == -0x673a946b) {
          uVar5 = DAT_004c93f8 - DAT_004c93fc;
          _objc_release(local_b8);
          bVar2 = 0xe3d18379 <
                  ((uint)((ulong)(uVar5 | 0x1b493c09) * 0x100759cd >> 0x3c) | 0x9a9ba098);
          iVar6 = -0x673a946b;
          local_17c = 0x1e5b6e4;
          goto LAB_003e01d4;
        }
      }
      goto LAB_003dd8dc;
    }
    if (-0x577b99f4 < local_17c) {
      if (local_17c < -0x46fde0b4) {
        if (local_17c < -0x54bd6c73) {
          if (local_17c == -0x577b99f3) {
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c8);
            local_e8 = _objc_retainAutoreleasedReturnValue();
            local_f0 = PTR_s_currentBubble_0048a848;
            _objc_msgSend();
            local_f8 = _objc_retainAutoreleasedReturnValue();
            local_17c = 0x77e66a91;
          }
          else if (local_17c == -0x5668f78b) {
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
            _objc_retainAutoreleasedReturnValue();
LAB_003de69c:
            local_17c = 0x367dc746;
          }
        }
        else if (local_17c == -0x54bd6c73) {
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_78);
          _objc_retainAutoreleasedReturnValue();
          local_17c = -0x306d98ae;
        }
        else if (local_17c == -0x49d7c767) {
          local_17c = -0x7368410;
        }
      }
      else if (local_17c < -0x44352435) {
        if (local_17c == -0x46fde0b4) {
          local_17c = -0x7af721fb;
        }
        else {
          iVar6 = -0x4514b142;
LAB_003df3d4:
          if (local_17c == iVar6) {
            local_17c = -0x387d85b6;
          }
        }
      }
      else if (local_17c == -0x44352435) {
        local_17c = -0x25398977;
      }
      else if (local_17c == -0x436ea27f) {
        local_17c = 0x29636d75;
      }
      else if (local_17c == -0x423536cf) {
        local_17c = 0x17b964d2;
      }
      goto LAB_003dd8dc;
    }
    if (local_17c < -0x5f35b339) {
      if (local_17c < -0x63e6590f) {
        if (local_17c == -0x6568531d) {
          local_17c = 0x6fb5c771;
LAB_003dfd94:
          local_150 = local_80;
        }
        else if (local_17c == -0x6429d9fb) {
          _objc_release(local_168);
          local_17c = -0x6b29e6e9;
        }
      }
      else if (local_17c == -0x63e6590f) {
        local_17c = -0x6568531d;
        if (0x3977b39b < (((DAT_004c9408 | DAT_004c940c) * -0xbe8e6fd ^ 0x568d8010) & 0x768f8230)) {
          local_17c = -0x63e6590f;
        }
      }
      else if (local_17c == -0x626a2070) {
        local_17c = -0x70792f46;
        local_160 = local_170;
      }
      goto LAB_003dd8dc;
    }
    if (-0x5de0b6e0 < local_17c) {
      if (local_17c == -0x5de0b6df) {
        DAT_004d2008 = '\x01';
        _objc_release(local_a8);
        local_17c = -0x3e58253d;
      }
      else if (local_17c == -0x590786c5) {
        local_17c = 0x263eb661;
      }
      goto LAB_003dd8dc;
    }
    if (local_17c == -0x5f35b339) {
      local_17c = 0x167ae0bf;
      goto LAB_003dd8dc;
    }
    if (local_17c != -0x5e9c2b9a) goto LAB_003dd8dc;
    uVar5 = (uint)((ulong)(DAT_004c94a8 & DAT_004c94ac ^ 0x2eec930b) * 0x47f732b3 >> 0x3d) +
            0xdfca6f02;
    bVar3 = _objc_msgSend(local_110,local_100);
    _objc_release(local_110);
    _objc_release(local_108);
    local_111 = bVar3 & DAT_004d2009;
    _objc_release(local_f8);
    _objc_release(local_d0);
    bVar1 = 0x56acf113 < uVar5;
    bVar2 = uVar5 == 0x56acf114;
    iVar6 = -0x5e9c2b9a;
    local_17c = 0x7668ffd9;
  }
  else {
    if (0x42c51559 < local_17c) {
      if (local_17c < 0x57a23124) {
        if (0x4d46ad56 < local_17c) {
          if (local_17c < 0x5405439a) {
            if (local_17c < 0x51242d4c) {
              if (local_17c == 0x4d46ad57) {
                local_17c = -0x5de0b6df;
                if ((DAT_004c9410 * DAT_004c9414 & 0x4c81025aU) != 0x652aa074) {
                  local_17c = -0x3e58253d;
                }
              }
              else if (local_17c == 0x4edd55f4) {
                local_17c = -0x15fc7f68;
              }
            }
            else if (local_17c == 0x51242d4c) {
              local_17c = 0x552604d8;
            }
            else if (local_17c == 0x524eefd0) {
              local_17c = 0x3f07d569;
            }
          }
          else if (local_17c < 0x552604d8) {
            if (local_17c == 0x5405439a) {
              local_17c = 0x4206a0a3;
              local_158 = local_148;
            }
            else if (local_17c == 0x5434064a) {
              uVar5 = DAT_004c9350 * DAT_004c9354 + 0xcbf040d3U & 0xf474fabf | 0xf064aab7;
              bVar1 = 0x51b9e960 < uVar5;
              bVar2 = uVar5 == 0x51b9e961;
              local_17c = 0x4a6bf22d;
              iVar6 = 0x5d4710a;
LAB_003e0220:
              if (!bVar1 || bVar2) {
                local_17c = iVar6;
              }
            }
          }
          else {
            if (local_17c == 0x552604d8) {
              uVar5 = ((DAT_004c93b8 * DAT_004c93bc | 0x6aacd778U) ^ 0xaba67d31) + 0x2d334a36;
              local_a0 = PTR_s_currentBubble_0048a848;
              bVar1 = 0x665d32a9 < uVar5;
              bVar2 = uVar5 == 0x665d32aa;
              iVar6 = 0x552604d8;
              local_17c = -0x436ea27f;
              goto LAB_003e0c10;
            }
            if (local_17c == 0x554c0967) {
              uVar5 = DAT_004c93d8 - DAT_004c93dc;
              _objc_msgSend(local_a8,PTR_s_name_0048a060);
              local_b8 = _objc_retainAutoreleasedReturnValue();
              local_17c = -0x423536cf;
              if (0xa310425b <
                  (uint)((ulong)((uVar5 & 0x7ad1df1) * -0x47dc55ee) * 0x4c3622cf >> 0x3d)) {
                local_17c = 0x554c0967;
              }
            }
            else if (local_17c == 0x5635d848) {
              bVar2 = (int)((long)((ulong)(uint)(DAT_004c9428 * DAT_004c942c * -0x7d565499) *
                                  0xd87c9297) >> 0x3f) == -0x435c6196;
              local_17c = 0x266bdbc;
              iVar6 = -0x5f35b339;
LAB_003dddf0:
              if (!bVar2) {
                local_17c = iVar6;
              }
            }
          }
          goto LAB_003dd8dc;
        }
        if (local_17c < 0x4a6bf22d) {
          if (local_17c < 0x4923ee64) {
            if (local_17c == 0x42c5155a) {
              _objc_retain(local_140);
              local_17c = 0x7c29248c;
            }
            else if (local_17c == 0x47f434b7) {
              local_17c = -0x72c50808;
            }
          }
          else if (local_17c == 0x4923ee64) {
            local_17c = -0x3fcecef;
          }
          else if (local_17c == 0x497e1c80) {
            bVar2 = 0xb776aa75 <
                    ((uint)((ulong)(DAT_004c94f0 ^ DAT_004c94f4) * 0xb214dbd >> 0x3b) + 0x41d66ae7 ^
                    0x3faf96cd);
            iVar6 = -0x421a32b;
            local_17c = -0x6a1dda44;
LAB_003e01d4:
            if (bVar2) {
              local_17c = iVar6;
            }
          }
          goto LAB_003dd8dc;
        }
        if (0x4bc69d2f < local_17c) {
          if (local_17c == 0x4bc69d30) {
            local_17c = -0x230e225c;
          }
          else if (local_17c == 0x4d100cee) {
            local_17c = 0x62c336b1;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c != 0x4a6bf22d) {
          if (local_17c == 0x4b0b14c0) {
            bVar2 = local_69 == '\0';
            local_17c = 0x167ae0bf;
            iVar6 = 0x2a1dd0e7;
            goto LAB_003dfb20;
          }
          goto LAB_003dd8dc;
        }
        uVar5 = DAT_004c9358 & DAT_004c935c;
        _objc_retain(param_4);
        local_69 = DAT_004d2008;
        bVar2 = (uVar5 | 0x29704402) * -0x41ac0c02 == -0x6455827e;
        iVar6 = 0x5d4710a;
        local_17c = 0x4923ee64;
      }
      else {
        if (local_17c < 0x703e7c12) {
          if (local_17c < 0x667a678c) {
            if (local_17c < 0x5c2cd676) {
              if (local_17c == 0x57a23124) {
                _objc_release(local_140);
                local_17c = 0x7ce10813;
              }
              else if (local_17c == 0x5a989ceb) {
                local_17c = 0x18e415;
              }
            }
            else if (local_17c == 0x5c2cd676) {
              local_17c = -0x63e6590f;
            }
            else if (local_17c == 0x62c336b1) {
              local_17c = -0x70792f46;
              local_160 = local_130;
            }
          }
          else if (local_17c < 0x6c2f6062) {
            if (local_17c == 0x667a678c) {
              _objc_msgSend(local_d0,PTR_s_assetsLoadMode_0048af40);
              local_17c = 0x38a23848;
            }
            else if (local_17c == 0x6866a9e2) {
              uVar5 = 0;
              if (DAT_004c9394 != 0) {
                uVar5 = DAT_004c9390 / DAT_004c9394;
              }
              bVar2 = 0xfd83d84c < (uVar5 / 0x234a968b & 3) + 0x2f3ed5c1;
              iVar6 = -0x1cd07521;
              local_17c = 0x6c2f6062;
              goto LAB_003e01d4;
            }
          }
          else if (local_17c == 0x6c2f6062) {
            local_89 = _objc_msgSend(local_80,local_88);
            local_17c = -0x6e84ca3d;
          }
          else if (local_17c == 0x6fb5c771) {
            local_168 = local_150;
            uVar5 = 0;
            if (DAT_004c94b4 != 0) {
              uVar5 = DAT_004c94b0 / DAT_004c94b4;
            }
            uVar5 = (uVar5 | 0x9e3ebd6f) + 0xe0aafaa8;
            bVar1 = 0xd3cc2395 < uVar5;
            bVar2 = uVar5 == 0xd3cc2396;
            iVar6 = -0x6b29e6e9;
            local_17c = -0x6429d9fb;
            goto LAB_003e0c10;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c < 0x77e66a91) {
          if (local_17c < 0x7151add7) {
            if (local_17c == 0x703e7c12) {
              _objc_release(local_a8);
              local_17c = -0x455dd22;
            }
            else if (local_17c == 0x70d9aa6b) {
              _objc_release(param_4);
              _objc_release(param_3);
              _objc_release(param_1);
              _objc_autoreleaseReturnValue(local_178);
              local_17c = -0x22168c07;
            }
            goto LAB_003dd8dc;
          }
          if (local_17c == 0x7151add7) {
            local_17c = 0x6fb5c771;
            if (local_d9 == '\0') {
              local_17c = -0x577b99f3;
            }
            local_150 = local_d0;
            goto LAB_003dd8dc;
          }
          if (local_17c != 0x7668ffd9) goto LAB_003dd8dc;
          bVar2 = local_111 == 0;
          iVar6 = -0x7368410;
          local_17c = -0x6f715d41;
        }
        else {
          if (0x7ce10812 < local_17c) {
            if (local_17c == 0x7ce10813) {
              iVar6 = DAT_004c9528 + DAT_004c952c;
              _objc_release(local_140);
              bVar2 = 0xe1e4d8f < (iVar6 * -0x4eac5c58 ^ 0xabd8c8d3U);
              local_17c = 0x7ce10813;
              iVar6 = -0x626a2070;
              goto LAB_003e0cb8;
            }
            if (local_17c == 0x7d386b34) goto LAB_003df670;
            if (local_17c == 0x7e67e26c) {
              local_17c = 0x1f79f59b;
            }
            goto LAB_003dd8dc;
          }
          if (local_17c != 0x77e66a91) {
            if (local_17c == 0x7c29248c) {
              local_17c = 0x4206a0a3;
              local_158 = local_140;
            }
            goto LAB_003dd8dc;
          }
          bVar2 = (int)((long)((ulong)(DAT_004c9490 * DAT_004c9494 ^ 0x90005800U | 0x6b6501b7) *
                              0xc1967c0f) >> 0x3f) == -0x26a216b;
          iVar6 = -0x120a7902;
          local_17c = 0x406c0285;
        }
      }
LAB_003e098c:
      if (bVar2) {
        local_17c = iVar6;
      }
      goto LAB_003dd8dc;
    }
    if (0x29b330cc < local_17c) {
      if (local_17c < 0x38a23848) {
        if (0x33f8820a < local_17c) {
          if (local_17c < 0x367dc746) {
            if (local_17c == 0x33f8820b) {
              _objc_release(local_b8);
              local_17c = -0x673a946b;
            }
            else if (local_17c == 0x34ff972a) {
              local_17c = 0x41ed8329;
            }
          }
          else {
            if (local_17c == 0x367dc746) {
              uVar5 = (uint)(DAT_004c9468 - DAT_004c946c) / 0x57f6ee19 + 0xaa134bc5;
              local_c8 = PTR_s_shared_00489458;
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990);
              local_d0 = _objc_retainAutoreleasedReturnValue();
              bVar1 = 0x16121644 < uVar5;
              bVar2 = uVar5 == 0x16121645;
              iVar6 = -0x5668f78b;
              local_17c = 0x5a989ceb;
              goto LAB_003e0c10;
            }
            if ((local_17c == 0x37bb4f21) &&
               (local_17c = 0x554c0967,
               0xab26b7db < ((DAT_004c93d0 * DAT_004c93d4 | 0xe997538aU) + 0xae256de7 & 0x8d456de1))
               ) {
              local_17c = 0x4d79d0b;
            }
          }
          goto LAB_003dd8dc;
        }
        if (local_17c < 0x2dd8bd91) {
          if (local_17c == 0x29b330cd) {
            _objc_msgSend(local_98,local_a0);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(local_98);
            local_17c = 0x3e5be53b;
            goto LAB_003dd8dc;
          }
          if (local_17c != 0x2a1dd0e7) goto LAB_003dd8dc;
          bVar2 = (DAT_004c9370 & DAT_004c9374 | 0xbdffcdfd) == 0xb124d330;
          local_17c = 0x2dd8bd91;
          iVar6 = 0x1f0d59dd;
        }
        else {
          if (local_17c == 0x2dd8bd91) {
            uVar5 = 0;
            if (DAT_004c937c != 0) {
              uVar5 = DAT_004c9378 / DAT_004c937c;
            }
            local_78 = PTR_s_shared_00489458;
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990);
            local_80 = _objc_retainAutoreleasedReturnValue();
            bVar2 = uVar5 * -0x30a72c90 == 0x76e27bb2;
            iVar6 = 0x1f0d59dd;
            local_17c = -0x688aeb13;
            goto LAB_003e098c;
          }
          if (local_17c != 0x3068b854) goto LAB_003dd8dc;
          bVar2 = local_bb == 0;
          local_17c = -0x6f715d41;
          iVar6 = -0x21ef9367;
        }
      }
      else {
        if (local_17c < 0x3f37c45f) {
          if (local_17c < 0x3e5be53b) {
            if (local_17c == 0x38a23848) {
              uVar5 = DAT_004c9478 ^ DAT_004c947c;
              local_d8 = _objc_msgSend(local_d0,PTR_s_assetsLoadMode_0048af40);
              local_17c = 0x47f434b7;
              if (0xfeaad4ca < (uVar5 * -0x59d027ee | 0x7273db2a) * -0x36a0c4fe) {
                local_17c = 0x38a23848;
              }
            }
            else if (local_17c == 0x3c0acd8b) {
              local_17c = 0x5635d848;
            }
          }
          else if (local_17c == 0x3e5be53b) {
            uVar5 = DAT_004c93c8 - DAT_004c93cc;
            _objc_msgSend(local_98,local_a0);
            local_a8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_98);
            local_a9 = local_a8 == 0;
            local_17c = -0x67b1cddd;
            if ((uVar5 | 0x5f1f03) * -0x525c9824 + 0x8798b875 < 0x5c958a5b) {
              local_17c = 0x3e5be53b;
            }
          }
          else if ((local_17c == 0x3f07d569) &&
                  (local_17c = 0x23d49803,
                  0xe4d644fc <
                  ((DAT_004c9500 - DAT_004c9504 & 0xbc761eedU) + 0x41980121 | 0x3964d0cd))) {
            local_17c = -0x227f61b3;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c < 0x4130796d) {
          if (local_17c == 0x3f37c45f) {
            uVar5 = 0;
            if (DAT_004c948c != 0) {
              uVar5 = DAT_004c9488 / DAT_004c948c;
            }
            local_d9 = local_d8 == 1;
            local_17c = 0x3f37c45f;
            if ((uVar5 + 0x963e3dc8 | 0x7fd1350d) != 0xdb1ff786) {
              local_17c = 0x7151add7;
            }
          }
          else if (local_17c == 0x406c0285) {
            uVar5 = (DAT_004c9498 - DAT_004c949c | 0xffff80ffU) & 0x6058108;
            _objc_release(local_e8);
            local_100 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(local_f8);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c8);
            local_108 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_108,local_f0);
            local_110 = _objc_retainAutoreleasedReturnValue();
            bVar1 = 0x605e275a < uVar5;
            bVar2 = uVar5 == 0x605e275b;
            local_17c = -0x120a7902;
            iVar6 = -0x69d8f872;
            goto LAB_003e0220;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c == 0x4130796d) {
          local_17c = -0xf1225df;
          if ((((DAT_004c9450 | DAT_004c9454) ^ 0xc330b015) & 0xc33af035 ^ 0x305a6db6) < 0x5aa25e9a)
          {
            local_17c = 0xb206a30;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c == 0x41ed8329) {
          local_17c = -0x7af721fb;
          if (0xf8749140 < ((DAT_004c9510 + DAT_004c9514) * -0x3c62b1f5 & 0x859089a4U ^ 0xa37a1984))
          {
            local_17c = -0x46fde0b4;
          }
          goto LAB_003dd8dc;
        }
        if (local_17c != 0x4206a0a3) goto LAB_003dd8dc;
        local_170 = local_158;
        bVar2 = (uint)(byte)((ulong)(uint)(DAT_004c9520 * DAT_004c9524 * -0x7c5c5253) * 0x3573421 >>
                            0x38) * -0x44751ebe == -0x53bde7fb;
        local_17c = 0x7ce10813;
        iVar6 = 0x57a23124;
      }
LAB_003dfb20:
      if (bVar2) {
        local_17c = iVar6;
      }
      goto LAB_003dd8dc;
    }
    if (local_17c < 0x1f0d59dd) {
      if (local_17c < 0x17b964d2) {
        if (local_17c < 0xb206a30) {
          if (local_17c == 0x853999f) {
            local_17c = -0x41bda087;
          }
          else if (local_17c == 0x9159dfe) {
            local_17c = 0x1c7c3b8c;
          }
        }
        else if (local_17c == 0xb206a30) {
          local_17c = 0x3068b854;
          if (0xfa178dc3 < ((DAT_004c9458 - DAT_004c945c) + 0x2369a3beU) / 0x1338e9c + 0xad0b085e) {
            local_17c = 0xb206a30;
          }
        }
        else if (local_17c == 0x167ae0bf) {
          uVar5 = (DAT_004c9430 * DAT_004c9434 & 0x4a110211U) * 0x296a568d + 0x589cf0e;
          bVar1 = 0x4ba752df < uVar5;
          bVar2 = uVar5 == 0x4ba752e0;
          iVar6 = -0x2cb459c;
          local_17c = -0x70dc2c2e;
          goto LAB_003e0c10;
        }
        goto LAB_003dd8dc;
      }
      if (0x1b619344 < local_17c) {
        if (local_17c == 0x1b619345) {
          uVar5 = DAT_004c94c8 | DAT_004c94cc;
          (*local_120)(param_1,local_128,param_3,param_4);
          local_130 = _objc_retainAutoreleasedReturnValue();
          local_17c = -0x1ed040d6;
          if (0xd38ecb69 < ((uVar5 + 0x5b20d6da | 0xc6580148) ^ 0x55d62393)) {
            local_17c = 0x1b619345;
          }
        }
        else if (local_17c == 0x1c7c3b8c) {
          local_17c = 0x1b619345;
        }
        goto LAB_003dd8dc;
      }
      if (local_17c != 0x17b964d2) {
        if (local_17c == 0x18ef6e16) {
          bVar2 = 0xe45d502d < (DAT_004c93a0 ^ DAT_004c93a4 ^ 0xc5a02240 | 0x385ad5b7);
          iVar6 = -0x306d98ae;
          local_17c = -0x54bd6c73;
          goto LAB_003e01d4;
        }
        goto LAB_003dd8dc;
      }
      uVar5 = ((DAT_004c93e0 ^ DAT_004c93e4) & 0x2217108) * 0x5d899125;
      bVar1 = 0xb7083b14 < uVar5;
      bVar2 = uVar5 == 0xb7083b15;
      iVar6 = -0x15f8cd10;
      local_17c = -0x3d85739e;
    }
    else {
      if (local_17c < 0x263eb661) {
        if (local_17c < 0x23d49803) {
          if (local_17c == 0x1f0d59dd) {
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
            _objc_retainAutoreleasedReturnValue();
            local_17c = 0x2dd8bd91;
          }
          else if (local_17c == 0x1f79f59b) {
            local_88 = PTR_s_enabled_0048a890;
            bVar2 = ((DAT_004c9388 - DAT_004c938c) + 0xd427d025U ^ 0x30422 | 0xb6ecdb05) ==
                    0xc1aa2dd6;
            iVar6 = 0x1f79f59b;
            local_17c = -0xb1ad050;
            goto LAB_003e098c;
          }
        }
        else if (local_17c == 0x23d49803) {
          local_17c = -0x227f61b3;
        }
        else if (local_17c == 0x24f574eb) {
          bVar2 = false;
          local_17c = 0x1f79f59b;
          iVar6 = 0x7e67e26c;
          goto LAB_003dfb20;
        }
        goto LAB_003dd8dc;
      }
      if (0x29636d74 < local_17c) {
        if (local_17c == 0x29636d75) {
          local_17c = 0x3e5be53b;
          if ((uint)((ulong)(DAT_004c93c0 | DAT_004c93c4 | 0xb8328936) * 0x3dfe93f3 >> 0x3d) ==
              0x43dc3aab) {
            local_17c = 0x29b330cd;
          }
        }
        else if (local_17c == 0x29b2f1c4) {
          local_17c = 0x4d100cee;
        }
        goto LAB_003dd8dc;
      }
      if (local_17c != 0x263eb661) {
        if (local_17c == 0x27613d64) {
          _objc_msgSend(local_138,PTR_s_svgImageNamed_fromConfig__0048b0e0,param_3,param_4);
          _objc_retainAutoreleasedReturnValue();
          local_17c = -0x774edf16;
        }
        goto LAB_003dd8dc;
      }
      uVar5 = (DAT_004c93f0 * DAT_004c93f4 ^ 0x70007U) & 0x54bcc0c5;
      bVar1 = 0x5ce01a00 < uVar5;
      bVar2 = uVar5 == 0x5ce01a01;
      iVar6 = -0x673a946b;
      local_17c = 0x33f8820b;
    }
  }
LAB_003e0c10:
  if (!bVar1 || bVar2) {
    local_17c = iVar6;
  }
  goto LAB_003dd8dc;
}



// #####################################
// ##### FUN_003d298c @ 003d298c
// #####################################

void FUN_003d298c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  int local_214;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  long local_1e0;
  undefined *local_1d8;
  undefined *local_1d0;
  long local_1c8;
  undefined *local_1c0;
  undefined *local_1b8;
  char local_1a9;
  undefined *local_1a8;
  char local_199;
  long local_198;
  undefined *local_190;
  code *local_188;
  char local_17c;
  char local_17b;
  char local_17a;
  char local_179;
  undefined *local_178;
  char local_16b;
  char local_16a;
  char local_169;
  undefined *local_168;
  char local_159;
  undefined8 local_158;
  long local_150;
  undefined *local_148;
  code *pcStack_140;
  byte local_132;
  byte local_131;
  undefined8 local_130;
  undefined8 local_128;
  undefined *local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  char local_f9;
  long local_f8;
  undefined8 local_f0;
  byte local_e2;
  byte local_e1;
  long local_e0;
  code *local_d8;
  char local_c9;
  long local_c8;
  undefined *local_c0;
  char local_b1;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  char local_91;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  char local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  iVar1 = DAT_004c8de0 - DAT_004c8de4;
  local_214 = 0x1d426d71;
LAB_003d2ac8:
  if (0x5fa7185 < local_214) {
    if (local_214 < 0x4a1308ab) {
      if (local_214 < 0x2648478d) {
        if (local_214 < 0x1218eb8a) {
          if (local_214 < 0xa4a56f3) {
            if (local_214 < 0x77f4983) {
              if (local_214 == 0x5fa7186) {
                local_214 = 0x3cc02fd;
                local_200 = local_e0;
                goto LAB_003d2ac8;
              }
              if (local_214 != 0x60899f5) {
                if (local_214 == 0x68e187d) {
                  local_214 = 0x7472b1d4;
                }
                goto LAB_003d2ac8;
              }
              bVar3 = local_159 == '\0';
              iVar7 = 0x7715ab28;
              local_214 = -0x6ebe9dc9;
            }
            else {
              if (0x907d6dc < local_214) {
                if (local_214 == 0x907d6dd) {
                  uVar8 = 0;
                  if (DAT_004c90f4 != 0) {
                    uVar8 = DAT_004c90f0 / DAT_004c90f4;
                  }
                  local_214 = 0x19cdd165;
                  if (0xb95ac903 < (uVar8 * -0x72cda180 + 0xcd613900) / 0x7171bb38) {
                    local_214 = -0x12d0362d;
                  }
                }
                else if (local_214 == 0x97f97e8) {
                  _objc_release(local_1e0);
                  local_214 = -0x6197547a;
                }
                goto LAB_003d2ac8;
              }
              if (local_214 == 0x77f4983) {
                local_178 = PTR_s_containsString__0048b098;
                local_214 = 0x22da03fa;
                goto LAB_003d2ac8;
              }
              if (local_214 != 0x795b6f7) goto LAB_003d2ac8;
              uVar8 = DAT_004c9118 + DAT_004c911c;
              _objc_release(local_158);
              bVar3 = ((uVar8 ^ 0x4300398) & 0x47403ba) * -0x2f3d5360 == -0x2fc1f09c;
              iVar7 = 0x795b6f7;
              local_214 = -0x25886f57;
            }
          }
          else {
            if (local_214 < 0xdfaa918) {
              if (local_214 == 0xa4a56f3) {
                uVar8 = -(int)((long)((ulong)((DAT_004c8e90 ^ DAT_004c8e94 | 0x240cb0f9) +
                                             0x8db0b406) * 0xb1aa3c5b) >> 0x3f);
                bVar2 = 0x849a829 < uVar8;
                bVar3 = uVar8 == 0x849a82a;
                local_214 = -0xe7760fa;
                iVar7 = 0x61dbdebd;
                goto LAB_003d9304;
              }
              if (local_214 == 0xa510cb8) {
                local_214 = -0x2c617e68;
              }
              else if (local_214 == 0xb2445e5) {
                bVar3 = local_17b == '\0';
                local_214 = 0x2ad3afe5;
                iVar7 = -0x2d3a73ed;
                goto LAB_003d9e68;
              }
              goto LAB_003d2ac8;
            }
            if (0x10c26ed2 < local_214) {
              if (local_214 == 0x10c26ed3) {
                DAT_004c8130 = DAT_004c8110 ^ 0x8e;
                DAT_004c8131 = DAT_004c8111 ^ 0x3b;
                DAT_004c8132 = DAT_004c8112 ^ 0xf2;
                DAT_004c8133 = DAT_004c8113 ^ 0x4e;
                DAT_004c8134 = DAT_004c8114 ^ 0xd4;
                DAT_004c8135 = DAT_004c8115 ^ 0x56;
                DAT_004c8136 = DAT_004c8116 ^ 0x6c;
                DAT_004c8137 = DAT_004c8117 ^ 0x1d;
                DAT_004c8138 = DAT_004c8118 ^ 0xc2;
                DAT_004c8139 = DAT_004c8119 ^ 0xea;
                DAT_004c813a = DAT_004c811a ^ 0x58;
                DAT_004c813b = DAT_004c811b ^ 0xdd;
                DAT_004c813c = DAT_004c811c ^ 0xdc;
                DAT_004c813d = DAT_004c811d ^ 0x4d;
                DAT_004c813e = DAT_004c811e ^ 0xc5;
                DAT_004c813f = DAT_004c811f ^ 0xda;
                DAT_004c8140 = DAT_004c8120 ^ 0x23;
                DAT_004c8141 = DAT_004c8121 ^ 0xaf;
                DAT_004c8142 = DAT_004c8122 ^ 0xca;
                DAT_004c8143 = DAT_004c8123 ^ 0x41;
                DAT_004c8144 = DAT_004c8124 ^ 0x3c;
                DAT_004c8145 = DAT_004c8125 ^ 0x5a;
                DAT_004c8146 = DAT_004c8126 ^ 0xac;
                local_214 = 0x10c26ed3;
                if (0xd1d4ead4 < ((DAT_004c8df8 & DAT_004c8dfc) + 0x4a8eee30 | 0xc9efeffc)) {
                  local_214 = -0x245634dd;
                }
              }
              else if (local_214 == 0x119318b2) {
                _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_80);
                _objc_retainAutoreleasedReturnValue();
                local_214 = 0x13834da3;
              }
              goto LAB_003d2ac8;
            }
            if (local_214 == 0xdfaa918) {
              local_214 = 0x4bd7bc71;
              if (0x759a38c2 < (DAT_004c8ef8 + DAT_004c8efc + 0x479425bU ^ 0xd34e8b91)) {
                local_214 = 0xdfaa918;
              }
              goto LAB_003d2ac8;
            }
            if (local_214 != 0x106f5ca0) goto LAB_003d2ac8;
            bVar3 = (int)((long)((ulong)((DAT_004c9058 + DAT_004c905c) * 0x75117029 ^ 0x7feb830d) *
                                0xa250b699) >> 0x3f) == 0x2d588623;
            iVar7 = -0x6dd35c3d;
            local_214 = -0x85169ee;
          }
        }
        else {
          if (local_214 < 0x1d592ecf) {
            if (local_214 < 0x16997cff) {
              if (local_214 == 0x1218eb8a) {
                local_214 = -0x7440587f;
                if ((DAT_004c8ea0 * DAT_004c8ea4 ^ 0x60192082U | 0x83e0d730) / 0x7b97f6fd !=
                    0x84106754) {
                  local_214 = -0x78921213;
                }
              }
              else if (local_214 == 0x13834da3) {
                uVar8 = DAT_004c8e38 | DAT_004c8e3c;
                _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_80);
                local_88 = _objc_retainAutoreleasedReturnValue();
                local_214 = 0x13834da3;
                if ((uVar8 + 0x3603510d ^ 0x4cc200 | 0xca3330a6) != 0x8bc6b3f7) {
                  local_214 = 0x7c29521e;
                }
              }
              else if (local_214 == 0x152ba34b) {
                local_214 = 0x61b71875;
              }
            }
            else if (local_214 < 0x19cdd165) {
              if (local_214 == 0x16997cff) {
                local_214 = -0x7584d0d5;
                if (0x7ff6e413 <
                    (((DAT_004c9040 & DAT_004c9044) / 0x6c18f517) * 0xd5ff478 | 0xfacf5d48)) {
                  local_214 = 0x44e9e7b;
                }
              }
              else if (local_214 == 0x18c3ce24) {
                uVar8 = 0;
                if (DAT_004c90bc != 0) {
                  uVar8 = DAT_004c90b8 / DAT_004c90bc;
                }
                uVar8 = uVar8 & 0xc9010a51 | 0x41010a10;
                local_1d8 = PTR_s_imageNamed__0048a288;
                _objc_msgSend(local_1d0,PTR_s_imageNamed__0048a288,param_3);
                local_1e0 = _objc_retainAutoreleasedReturnValue();
                bVar2 = 0x18adccdf < uVar8;
                bVar3 = uVar8 == 0x18adcce0;
                iVar7 = -0x21bb2a5d;
                local_214 = 0x3abb06f0;
LAB_003d8eb8:
                if (!bVar2 || bVar3) {
                  local_214 = iVar7;
                }
              }
            }
            else if (local_214 == 0x19cdd165) {
              local_214 = -0x7c288c87;
              if (0xdbe69039 < (DAT_004c90f8 & DAT_004c90fc ^ 0x300c015a | 0x46f3f621) + 0xbf091c27)
              {
                local_214 = 0x19cdd165;
              }
            }
            else if ((local_214 == 0x1d426d71) &&
                    (local_214 = 0x1667a6d,
                    0xd9c43376 < (iVar1 * 0x2fa1235a + 0xbb66d41eU & 0xc18f8ab6))) {
              local_214 = -0x12553988;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 < 0x2257f168) {
            if (local_214 < 0x1f75d7d2) {
              if (local_214 == 0x1d592ecf) {
                DAT_004c8080 = local_72;
                DAT_004c8081 = DAT_004c8075 ^ 0xf9;
                DAT_004c8082 = DAT_004c8076 ^ 0xc5;
                DAT_004c8083 = DAT_004c8077 ^ 0xb;
                DAT_004c8084 = DAT_004c8078 ^ 0xee;
                DAT_004c8085 = DAT_004c8079 ^ 0xb;
                DAT_004c8086 = DAT_004c807a ^ 0xa4;
                DAT_004c8087 = DAT_004c807b ^ 0xe2;
                DAT_004c8088 = DAT_004c807c ^ 0x72;
                DAT_004c8089 = DAT_004c807d ^ 0x79;
                DAT_004c808a = DAT_004c807e ^ 0xc9;
                DAT_004c8108 = DAT_004c8103 ^ 7;
                DAT_004c8109 = DAT_004c8104 ^ 0x76;
                DAT_004c810a = DAT_004c8105 ^ 0xe1;
                DAT_004c810b = DAT_004c8106 ^ 0x8d;
                DAT_004c810c = DAT_004c8107 ^ 0xb;
                DAT_004c8063 = DAT_004c8053 ^ 200;
                DAT_004c8064 = DAT_004c8054 ^ 0x85;
                DAT_004c8065 = DAT_004c8055 ^ 0xb3;
                DAT_004c8066 = DAT_004c8056 ^ 0x50;
                DAT_004c8067 = DAT_004c8057 ^ 0x17;
                DAT_004c8068 = DAT_004c8058 ^ 0x95;
                DAT_004c8069 = DAT_004c8059 ^ 0x53;
                DAT_004c806a = DAT_004c805a ^ 0x60;
                DAT_004c806b = DAT_004c805b ^ 0xbf;
                DAT_004c806c = DAT_004c805c ^ 0xf;
                DAT_004c806d = DAT_004c805d ^ 199;
                DAT_004c806e = DAT_004c805e ^ 0xe6;
                DAT_004c806f = DAT_004c805f ^ 0x28;
                DAT_004c8070 = DAT_004c8060 ^ 0xfc;
                DAT_004c8071 = DAT_004c8061 ^ 0xba;
                DAT_004c8072 = DAT_004c8062 ^ 0x4e;
                local_214 = 0x59d72889;
              }
              else if (local_214 == 0x1e6a2026) {
                local_214 = -0x4f921635;
              }
            }
            else if (local_214 == 0x1f75d7d2) {
              _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_80);
              _objc_retainAutoreleasedReturnValue();
              local_214 = 0x2e75d1f8;
            }
            else if (local_214 == 0x1fce1332) {
              local_214 = -0x19e7284;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 < 0x24672aa3) {
            if (local_214 == 0x2257f168) {
              local_214 = -0x7f6b6cff;
            }
            else if (local_214 == 0x22da03fa) {
              local_179 = _objc_msgSend(param_3,local_178,
                                        &PTR____CFConstantStringClassReference_004c8220);
              local_214 = -0x4dc78d67;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x24672aa3) {
            uVar8 = DAT_004c90a8 + DAT_004c90ac;
            local_1c8 = _objc_msgSend(local_1b8,local_1c0);
            local_214 = 0x2c788841;
            if ((uVar8 & 0xdfff7fff | 0xdac73fff) == 0x26ac121f) {
              local_214 = 0x24672aa3;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 != 0x260b187a) goto LAB_003d2ac8;
          uVar8 = DAT_004c8e28 + DAT_004c8e2c;
          _objc_retain(param_1);
          _objc_retain(param_3);
          local_73 = DAT_004d2008;
          bVar3 = (uint)((ulong)uVar8 * 0x5f97cf0d >> 0x3e) * -0x4c60479 == -0x5c84312d;
          iVar7 = 0x260b187a;
          local_214 = -0x790379ff;
        }
      }
      else {
        if (local_214 < 0x3abb06f0) {
          if (local_214 < 0x31568bce) {
            if (local_214 < 0x2c788841) {
              if (local_214 == 0x2648478d) {
                local_c0 = PTR_s_name_0048a060;
                bVar3 = 0x1e855830 < (DAT_004c8e78 + DAT_004c8e7c) * -0x3acef773 + 0xfc30ca98U;
                iVar7 = 0x2648478d;
                local_214 = -0x310243ea;
                goto LAB_003d93a8;
              }
              if (local_214 == 0x2801c458) {
                _objc_msgSend(local_1b8,local_1c0);
                local_214 = 0x24672aa3;
              }
              else if (local_214 == 0x2ad3afe5) {
                uVar8 = (DAT_004c9020 | DAT_004c9024) + 0x8c7ccf86 & 0x6d8ba7e9 | 0x6808a020;
                bVar2 = 0x50b234b5 < uVar8;
                bVar3 = uVar8 == 0x50b234b6;
                local_214 = 0x41f2a6fc;
                iVar7 = 0x2874378;
                goto LAB_003d9304;
              }
            }
            else if (local_214 < 0x2dea94a1) {
              if (local_214 == 0x2c788841) {
                local_214 = -0x5541d64d;
                local_1f8 = local_1c8;
              }
              else if ((local_214 == 0x2ce50d7f) &&
                      (local_214 = 0x13834da3,
                      (0xd86be5c3U -
                       (int)((long)((ulong)(uint)(DAT_004c8e30 - DAT_004c8e34) * 0xa8fb140f) >> 0x3f
                            ) & 0x886840c3) < 0x6a68ef98)) {
                local_214 = 0x119318b2;
              }
            }
            else {
              if (local_214 == 0x2dea94a1) {
                uVar8 = (uint)((ulong)(DAT_004c9018 & DAT_004c901c | 0xa2aa21d3) * 0x6fbab587 >>
                              0x3e) | 0x2a12895e;
                bVar2 = 0x26e7b4c2 < uVar8;
                bVar3 = uVar8 == 0x26e7b4c3;
                iVar7 = -0x655073ce;
                local_214 = -0x1d173d86;
                goto LAB_003d8eb8;
              }
              if (local_214 == 0x2e75d1f8) {
                uVar8 = DAT_004c8e58 ^ DAT_004c8e5c;
                _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_80);
                local_a0 = _objc_retainAutoreleasedReturnValue();
                local_a8 = PTR_s_currentBubble_0048a848;
                bVar3 = (uVar8 + 0xd3e7dd58) / 0x15e110d9 == 0xdab856ba;
                local_214 = 0x1f75d7d2;
                iVar7 = -0x72fc52bc;
                goto LAB_003d94c4;
              }
            }
            goto LAB_003d2ac8;
          }
          if (local_214 < 0x39109474) {
            if (local_214 < 0x32d73168) {
              if (local_214 == 0x31568bce) {
                bVar3 = local_b1 == '\0';
                local_214 = 0x662d02b8;
                iVar7 = -0x7ed59ef5;
                goto LAB_003d9e68;
              }
              if (local_214 == 0x325534ec) {
                _objc_msgSend(param_3,local_168,&PTR____CFConstantStringClassReference_004c8200);
                local_214 = 0x612bdf84;
              }
              goto LAB_003d2ac8;
            }
            if (local_214 != 0x32d73168) {
              if (local_214 == 0x36c1ec3f) {
                iVar7 = DAT_004c8ed8 + DAT_004c8edc;
                _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_80);
                local_f0 = _objc_retainAutoreleasedReturnValue();
                local_f8 = _objc_msgSend(local_f0,PTR_s_assetsLoadMode_0048af40);
                bVar3 = 0x7e62f12 < (uint)((ulong)(iVar7 + 0x39c9f5e) * 0x375bec1d >> 0x3d);
                iVar7 = 0x40d8e820;
                local_214 = -0x17dcbc4e;
                goto LAB_003d93a8;
              }
              goto LAB_003d2ac8;
            }
            local_208 = local_1f0;
            uVar8 = 0;
            if (DAT_004c9104 != 0) {
              uVar8 = DAT_004c9100 / DAT_004c9104;
            }
            bVar3 = (uVar8 ^ 0xc529e6f) * 0x1e4cc9ec == 0x17872621;
            local_214 = -0x6197547a;
            iVar7 = 0x97f97e8;
          }
          else {
            if (0x3a6034ae < local_214) {
              if (local_214 == 0x3a6034af) {
                local_214 = -0x3a57cef8;
                if ((uint)((ulong)((DAT_004c8fb0 | DAT_004c8fb4) * -0x6dd8895e + 0x4aca6328) *
                           0xaa7cc38b >> 0x3e) == 0xae5a77b1) {
                  local_214 = 0x7afd980c;
                }
              }
              else if (local_214 == 0x3a9338d3) {
                uVar8 = (DAT_004c8f00 ^ DAT_004c8f04 ^ 0x91c854cc) + 0x9592c613;
                bVar2 = 0xa9345ebe < uVar8;
                bVar3 = uVar8 == 0xa9345ebf;
                local_214 = 0x4a1308ab;
                goto LAB_003d7b8c;
              }
              goto LAB_003d2ac8;
            }
            if (local_214 != 0x39109474) {
              if (local_214 == 0x392b1c55) {
                local_214 = 0xdfaa918;
              }
              goto LAB_003d2ac8;
            }
            bVar3 = local_132 == 0;
            local_214 = -0x50a25c6f;
            iVar7 = 0x3fd92025;
          }
          goto LAB_003d9e68;
        }
        if (local_214 < 0x40e6d5be) {
          if (0x3e29a343 < local_214) {
            if (local_214 < 0x3fd92025) {
              if (local_214 == 0x3e29a344) {
                local_168 = PTR_s_hasPrefix__00489d80;
                local_214 = 0x65dd6c56;
                if (((DAT_004c8f78 - DAT_004c8f7c & 0x51c7e6e6U) + 0x6ecf187b ^ 0xc4517ce1) <
                    0x37a37e71) {
                  local_214 = 0x3e29a344;
                }
              }
              else if (local_214 == 0x3f109357) {
                uVar8 = 0;
                if (DAT_004c8f9c != 0) {
                  uVar8 = DAT_004c8f98 / DAT_004c8f9c;
                }
                bVar3 = 0x67a55217 <
                        ((uint)((ulong)uVar8 * 0x71922e47 >> 0x3e) ^ 0x70ee76db) + 0xbb369725;
                iVar7 = 0x3f109357;
                local_214 = 0x4d259777;
                goto LAB_003d93a8;
              }
            }
            else if (local_214 == 0x3fd92025) {
              local_148 = PTR_s_imageNamed__0048a288;
              pcStack_140 = DAT_004d2000;
              local_214 = -0x20be0b37;
            }
            else if (local_214 == 0x40d8e820) {
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_80);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,PTR_s_assetsLoadMode_0048af40);
              local_214 = 0x36c1ec3f;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x3abb06f0) {
            local_214 = 0x6b7208c1;
            goto LAB_003d2ac8;
          }
          if (local_214 != 0x3c22a2b2) {
            if (local_214 == 0x3e005c68) {
              local_214 = 0x16997cff;
            }
            goto LAB_003d2ac8;
          }
          bVar3 = local_71 == '\0';
          iVar7 = 0x5343f7cf;
          local_214 = 0x54c14c05;
        }
        else {
          if (local_214 < 0x43f0c4fa) {
            if (local_214 < 0x41e4e2c0) {
              if (local_214 == 0x40e6d5be) {
                local_214 = 0xdfaa918;
              }
              else if (local_214 == 0x413d9bd7) {
                bVar3 = local_e2 == 0;
                local_214 = -0x50a25c6f;
                iVar7 = 0x74c405b0;
                goto LAB_003d9e68;
              }
            }
            else if (local_214 == 0x41e4e2c0) {
              local_214 = -0x5541d64d;
              local_1f8 = local_208;
            }
            else if (local_214 == 0x41f2a6fc) {
              uVar8 = (uint)((ulong)(DAT_004c9028 | DAT_004c902c) * 0x364f50c3 >> 0x3d) | 0x861dde96
              ;
              local_188 = DAT_004d2000;
              local_190 = PTR_s_imageNamed__0048a288;
              bVar2 = 0xca9947a6 < uVar8;
              bVar3 = uVar8 == 0xca9947a7;
              local_214 = 0x2874378;
              iVar7 = -0x679ebff6;
              goto LAB_003d9304;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 < 0x4839ff9a) {
            if (local_214 == 0x43f0c4fa) {
              _objc_msgSend(local_88,local_90);
              local_214 = 0x7125f76c;
            }
            else if (local_214 == 0x48272c06) {
              (*DAT_004d2000)(param_1,local_1d8,param_3);
              _objc_retainAutoreleasedReturnValue();
              local_214 = -0x51629009;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 != 0x4839ff9a) {
            if ((local_214 == 0x48e9d4f7) &&
               (local_214 = -0x34763f77,
               (uint)((ulong)(DAT_004c9030 - DAT_004c9034 ^ 0xe0a2a1d) * 0x55828929 >> 0x3d) *
               0x6e672d24 == -0x380a0fe3)) {
              local_214 = 0x7d6e3e48;
            }
            goto LAB_003d2ac8;
          }
          iVar7 = DAT_004c8e68 - DAT_004c8e6c;
          _objc_release(local_a0);
          local_b1 = local_b0 == 0;
          bVar3 = iVar7 == 0x4bd9d4a;
          iVar7 = -0x377e889;
          local_214 = 0x31568bce;
        }
      }
LAB_003da0c4:
      if (bVar3) {
        local_214 = iVar7;
      }
      goto LAB_003d2ac8;
    }
    if (local_214 < 0x662d02b8) {
      if (local_214 < 0x552788d2) {
        if (0x50c7244a < local_214) {
          if (local_214 < 0x5343f7cf) {
            if (local_214 < 0x51593d91) {
              if (local_214 == 0x50c7244b) {
                _objc_retain(param_1);
                _objc_retain(param_3);
                local_214 = 0x260b187a;
              }
              else if (local_214 == 0x5120a705) {
                bVar3 = local_91 == '\0';
                iVar7 = -0x456c15d7;
                local_214 = 0x64b46b8f;
                goto LAB_003da0c4;
              }
            }
            else if (local_214 == 0x51593d91) {
              local_214 = -0x4f921635;
              if (((DAT_004c8f60 - DAT_004c8f64) + 0x3cb5dd8fU ^ 0x8053d604) + 0x55be7957 <
                  0x49cac178) {
                local_214 = 0x1e6a2026;
              }
            }
            else if (local_214 == 0x51864f50) {
              local_214 = -0x1997f3e0;
            }
          }
          else if (local_214 < 0x5476f77e) {
            if (local_214 == 0x5343f7cf) {
              DAT_004d2050 = 1;
              local_214 = -0x5cec5357;
            }
            else if (local_214 == 0x537566b2) {
              local_214 = 0xa510cb8;
            }
          }
          else if (local_214 == 0x5476f77e) {
            uVar8 = (DAT_004c8f08 | DAT_004c8f0c) + 0x6e2fad0f ^ 0x318f43 | 0x2fc47018;
            _objc_release(local_f0);
            bVar2 = 0xf93156f9 < uVar8;
            bVar3 = uVar8 == 0xf93156fa;
            local_214 = -0xf8b46d0;
LAB_003d7b8c:
            if (!bVar2 || bVar3) {
              local_214 = 0x5476f77e;
            }
          }
          else if (local_214 == 0x54c14c05) {
            local_214 = 0x10c26ed3;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 < 0x4bd7bc71) {
          if (local_214 == 0x4a1308ab) {
            _objc_release(local_f0);
            local_214 = 0x5476f77e;
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x4a5f1c06) {
            uVar8 = 0;
            if (DAT_004c8f94 != 0) {
              uVar8 = DAT_004c8f90 / DAT_004c8f94;
            }
            bVar3 = (int)((long)((ulong)uVar8 * 0xb88e589f) >> 0x3f) == -0x77249f7e;
            iVar7 = 0x3f109357;
            local_214 = 0x6f3539c6;
            goto LAB_003d7cac;
          }
          if (local_214 != 0x4a817fba) goto LAB_003d2ac8;
          uVar8 = ((DAT_004c8ec0 | DAT_004c8ec4) & 0x9e4034c5) + 0xef327d15;
          bVar2 = 0x6c1a8f31 < uVar8;
          bVar3 = uVar8 == 0x6c1a8f32;
          local_214 = -0x40c78a1;
          iVar7 = -0x70052792;
        }
        else {
          if (local_214 < 0x4d259777) {
            if (local_214 == 0x4bd7bc71) {
              bVar3 = local_f9 == '\0';
              iVar7 = -0x61a6c34f;
              local_214 = 0x3a9338d3;
              goto LAB_003da0c4;
            }
            if (local_214 == 0x4c12fa8a) {
              local_214 = 0x3cc02fd;
              local_200 = local_150;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x4d259777) {
            bVar3 = local_169 == '\0';
            local_214 = 0x2ad3afe5;
            iVar7 = -0x71c7f87e;
            goto LAB_003d9e68;
          }
          if (local_214 != 0x4d5dcea8) goto LAB_003d2ac8;
          uVar8 = ((DAT_004c9090 - DAT_004c9094) + 0x1118dd26U) / 0xf23026b + 0x36228136;
          bVar2 = 0x2a30b012 < uVar8;
          bVar3 = uVar8 == 0x2a30b013;
          local_214 = 0x7376241a;
          iVar7 = 0x6c9c22b7;
        }
LAB_003d9304:
        if (!bVar2 || bVar3) {
          local_214 = iVar7;
        }
        goto LAB_003d2ac8;
      }
      if (0x5fc3c15c < local_214) {
        if (local_214 < 0x61dbdebd) {
          if (local_214 < 0x612bdf84) {
            if (local_214 == 0x5fc3c15d) {
              local_214 = -0x67d8624;
            }
            else if (local_214 == 0x60cc9123) {
              local_214 = 0x3a6034af;
            }
          }
          else if (local_214 == 0x612bdf84) {
            uVar8 = 0;
            if (DAT_004c8f8c != 0) {
              uVar8 = DAT_004c8f88 / DAT_004c8f8c;
            }
            local_169 = _objc_msgSend(param_3,local_168,
                                      &PTR____CFConstantStringClassReference_004c8200);
            local_214 = 0x5bf0a2ff;
            if ((uVar8 * -0x3c4970ce & 0x2e7d496c) == 0x78aa3e2e) {
              local_214 = 0x612bdf84;
            }
          }
          else if (local_214 == 0x61b71875) {
            local_214 = 0x32d73168;
            local_1f0 = local_1e0;
          }
        }
        else if (local_214 < 0x64b46b8f) {
          if (local_214 == 0x61dbdebd) {
            uVar8 = 0;
            if (DAT_004c8e9c != 0) {
              uVar8 = DAT_004c8e98 / DAT_004c8e9c;
            }
            uVar8 = (uVar8 ^ 0x386b8022) / 0x1633bf32 | 0x167efae8;
            bVar2 = 0x7d3e3230 < uVar8;
            bVar3 = uVar8 == 0x7d3e3231;
            local_214 = -0xe7760fa;
            iVar7 = -0x22487e4e;
            goto LAB_003d9304;
          }
          if (local_214 == 0x621ac8ab) {
            bVar3 = (int)((long)((ulong)(DAT_004c90e8 + DAT_004c90ec ^ 0x5427ce06) * 0x8f682f85) >>
                         0x3f) == 0x17e1ba32;
            local_214 = -0x781501ef;
            iVar7 = 0x56530ce;
            goto LAB_003d94c4;
          }
        }
        else {
          if (local_214 == 0x64b46b8f) {
            uVar8 = 0;
            if (DAT_004c8e54 != 0) {
              uVar8 = DAT_004c8e50 / DAT_004c8e54;
            }
            bVar3 = (uVar8 + 0xdb4e124e | 0xdbe78b00) == 0x968668ed;
            local_214 = 0x2e75d1f8;
            iVar7 = 0x1f75d7d2;
            goto LAB_003d9e68;
          }
          if (local_214 == 0x65dd6c56) {
            local_214 = 0x60899f5;
          }
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < 0x59d72889) {
        if (local_214 == 0x552788d2) {
          local_214 = -0x7f886d05;
        }
        else if (local_214 == 0x5739cc05) {
          bVar3 = ((uint)((ulong)(DAT_004c9060 ^ DAT_004c9064) * 0xeedc7ea9 >> 0x3e) & 2) ==
                  0x1e9bc01d;
          iVar7 = -0x1997f3e0;
          local_214 = 0x51864f50;
LAB_003d7cac:
          if (!bVar3) {
            local_214 = iVar7;
          }
        }
        else if (local_214 == 0x58af61a6) {
          uVar8 = 0;
          if (DAT_004c9074 != 0) {
            uVar8 = DAT_004c9070 / DAT_004c9074;
          }
          local_214 = -0x76b82897;
          if (0xbcd392f5 < (uVar8 * 0x468366df ^ 0x98fa57b1)) {
            local_214 = -0x50194976;
          }
        }
        goto LAB_003d2ac8;
      }
      if (0x5c58afb6 < local_214) {
        if (local_214 == 0x5c58afb7) {
          local_214 = 0x76933d36;
        }
        else if (local_214 == 0x5c9ae221) {
          (*local_d8)(param_1,PTR_s_imageNamed__0048a288,param_3);
          _objc_retainAutoreleasedReturnValue();
          local_214 = -0x5cc4bc6c;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 != 0x59d72889) {
        if (local_214 == 0x5bf0a2ff) {
          local_214 = 0x4a5f1c06;
        }
        goto LAB_003d2ac8;
      }
      DAT_004c8080 = local_72;
      DAT_004c8081 = DAT_004c8075 ^ 0xf9;
      DAT_004c8082 = DAT_004c8076 ^ 0xc5;
      DAT_004c8083 = DAT_004c8077 ^ 0xb;
      DAT_004c8084 = DAT_004c8078 ^ 0xee;
      DAT_004c8085 = DAT_004c8079 ^ 0xb;
      DAT_004c8086 = DAT_004c807a ^ 0xa4;
      DAT_004c8087 = DAT_004c807b ^ 0xe2;
      DAT_004c8088 = DAT_004c807c ^ 0x72;
      DAT_004c8089 = DAT_004c807d ^ 0x79;
      DAT_004c808a = DAT_004c807e ^ 0xc9;
      DAT_004c8108 = DAT_004c8103 ^ 7;
      DAT_004c8109 = DAT_004c8104 ^ 0x76;
      DAT_004c810a = DAT_004c8105 ^ 0xe1;
      DAT_004c810b = DAT_004c8106 ^ 0x8d;
      DAT_004c810c = DAT_004c8107 ^ 0xb;
      DAT_004c8063 = DAT_004c8053 ^ 200;
      DAT_004c8064 = DAT_004c8054 ^ 0x85;
      DAT_004c8065 = DAT_004c8055 ^ 0xb3;
      DAT_004c8066 = DAT_004c8056 ^ 0x50;
      DAT_004c8067 = DAT_004c8057 ^ 0x17;
      DAT_004c8068 = DAT_004c8058 ^ 0x95;
      DAT_004c8069 = DAT_004c8059 ^ 0x53;
      DAT_004c806a = DAT_004c805a ^ 0x60;
      DAT_004c806b = DAT_004c805b ^ 0xbf;
      DAT_004c806c = DAT_004c805c ^ 0xf;
      DAT_004c806d = DAT_004c805d ^ 199;
      DAT_004c806e = DAT_004c805e ^ 0xe6;
      DAT_004c806f = DAT_004c805f ^ 0x28;
      DAT_004c8070 = DAT_004c8060 ^ 0xfc;
      DAT_004c8071 = DAT_004c8061 ^ 0xba;
      DAT_004c8072 = DAT_004c8062 ^ 0x4e;
      bVar3 = 0x5c50b3b3 <
              0xf763c35U -
              (int)((long)((ulong)((DAT_004c8e18 ^ DAT_004c8e1c) + 0x18bce8bd) * 0xa5588033) >> 0x3f
                   );
      iVar7 = 0x1d592ecf;
      local_214 = -0x7139ba4d;
    }
    else {
      if (0x72e2d81f < local_214) {
        if (0x7715ab27 < local_214) {
          if (local_214 < 0x7afd980c) {
            if (local_214 < 0x780016cf) {
              if (local_214 == 0x7715ab28) {
                local_199 = _objc_msgSend(param_3,local_168,
                                          &PTR____CFConstantStringClassReference_004c81a0);
                local_214 = -0x231cc694;
              }
              else if (local_214 == 0x77ac68e5) {
                local_214 = 0x3fd92025;
              }
            }
            else if (local_214 == 0x780016cf) {
              local_214 = 0x621ac8ab;
            }
            else if (local_214 == 0x784c27b6) {
              local_214 = 0x2648478d;
            }
          }
          else if (local_214 < 0x7c29521e) {
            if (local_214 == 0x7afd980c) {
              local_214 = -0x3a57cef8;
            }
            else if (local_214 == 0x7b985fb0) {
              bVar3 = local_16a == '\0';
              local_214 = 0x2ad3afe5;
              iVar7 = -0x73452eed;
              goto LAB_003d9e68;
            }
          }
          else if (local_214 == 0x7c29521e) {
            local_214 = -0x476e57a5;
          }
          else if (local_214 == 0x7d6e3e48) {
            (*local_188)(param_1,local_190,param_3);
            _objc_retainAutoreleasedReturnValue();
            local_214 = -0x34763f77;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 < 0x74748b5c) {
          if (local_214 == 0x72e2d820) {
            _objc_msgSend(local_a0,local_a8);
            local_b0 = _objc_retainAutoreleasedReturnValue();
            local_214 = -0x924fbf7;
          }
          else {
            if (local_214 == 0x7376241a) {
              uVar8 = (DAT_004c9098 - DAT_004c909c) * -0x7780a48a + 0xcc79aef2U | 0x50b6dfc4;
              local_1c0 = PTR_s_new_0048b3f0;
              bVar2 = 0xabe76201 < uVar8;
              bVar3 = uVar8 == 0xabe76202;
              iVar7 = 0x6c9c22b7;
              local_214 = -0x625fb830;
              goto LAB_003d8eb8;
            }
            if (local_214 == 0x7472b1d4) {
              bVar3 = (DAT_004c8ff8 * DAT_004c8ffc & 0xc6d41498U) == 0x88add1e1;
              iVar7 = 0x68e187d;
              local_214 = -0x212a02ac;
              goto LAB_003da0c4;
            }
          }
          goto LAB_003d2ac8;
        }
        if (0x74e115ef < local_214) {
          if (local_214 == 0x74e115f0) {
            local_214 = 0xa4a56f3;
          }
          else if (local_214 == 0x76933d36) {
            bVar3 = 0xde79c253 < (DAT_004c8fd8 - DAT_004c8fdc | 0x5fd5bddbU) + 0xdf9d5278;
            iVar7 = 0x5c58afb7;
            local_214 = -0x4e98a759;
            goto LAB_003d93a8;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 == 0x74748b5c) {
          local_214 = 0x413d9bd7;
          goto LAB_003d2ac8;
        }
        if (local_214 != 0x74c405b0) goto LAB_003d2ac8;
        bVar3 = ((DAT_004c8ed0 | DAT_004c8ed4) + 0x1ffe3b2b & 0xfbbfc9ba) == 0x6cbb0a0c;
        iVar7 = 0x40d8e820;
        local_214 = 0x36c1ec3f;
        goto LAB_003da0c4;
      }
      if (local_214 < 0x6f3539c6) {
        if (0x674f6a83 < local_214) {
          if (0x6c9c22b6 < local_214) {
            if (local_214 == 0x6c9c22b7) {
              local_214 = 0x7376241a;
            }
            else if (local_214 == 0x6e8e776b) {
              bVar3 = (uint)((ulong)((DAT_004c8f10 & DAT_004c8f14) * -0x4e92ef4d + 0x5df6214) *
                             0x75c49dd9 >> 0x3e) == 0xeb91a4f0;
              local_214 = -0x609c7ba1;
              iVar7 = 0x723b6c4b;
              goto LAB_003d94c4;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x674f6a84) {
            local_214 = 0x3e29a344;
            goto LAB_003d2ac8;
          }
          if (local_214 != 0x6b7208c1) goto LAB_003d2ac8;
          bVar3 = local_1e0 == 0;
          local_214 = -0x2f190b1c;
          iVar7 = -0x500aecd6;
          goto LAB_003d94c4;
        }
        if (local_214 == 0x662d02b8) {
          uVar8 = (DAT_004c8e80 ^ DAT_004c8e84 | 0xf1fd3e7d) ^ 0x7d8910cc;
          bVar2 = 0xeca4c06a < uVar8;
          bVar3 = uVar8 == 0xeca4c06b;
          iVar7 = -0x3ef52115;
          local_214 = 0x6ffeeb00;
          goto LAB_003d8eb8;
        }
        if (local_214 == 0x6643a7ed) {
          local_214 = -0x5541d64d;
          local_1f8 = local_198;
          goto LAB_003d2ac8;
        }
        if (local_214 != 0x6749d553) goto LAB_003d2ac8;
        uVar8 = DAT_004c8f58 + DAT_004c8f5c;
        (*pcStack_140)(param_1,local_148,param_3);
        local_150 = _objc_retainAutoreleasedReturnValue();
        bVar3 = 0x49495a2c < ((uVar8 & 0x99ab7835) / 0x4130be46) * -0x71f3f95e;
        iVar7 = 0x6749d553;
        local_214 = 0x5bc0a1c;
      }
      else {
        if (0x7125f76b < local_214) {
          if (0x7279cfdc < local_214) {
            if (local_214 == 0x7279cfdd) {
              local_214 = 0x4d5dcea8;
            }
            else if (local_214 == 0x72af7d9b) {
              local_214 = -0x10d829bc;
            }
            goto LAB_003d2ac8;
          }
          if (local_214 == 0x7125f76c) {
            uVar8 = DAT_004c8e48 & DAT_004c8e4c;
            local_91 = _objc_msgSend(local_88,local_90);
            bVar3 = 0x249269bc < (uVar8 + 0x5b427560 & 0x60e503f) + 0xea655858;
            local_214 = 0x43f0c4fa;
            iVar7 = 0x5120a705;
            goto LAB_003da0a4;
          }
          if (local_214 != 0x723b6c4b) goto LAB_003d2ac8;
          bVar3 = 0x6e7de33b <
                  ((uint)((ulong)((DAT_004c8f18 - DAT_004c8f1c) + 0xc54e7589) * 0x23377a2f >> 0x3d)
                  | 0xd170513e);
          local_214 = -0x609c7ba1;
          iVar7 = 0x77ac68e5;
          goto LAB_003da0a4;
        }
        if (0x6ffeeaff < local_214) {
          if (local_214 == 0x6ffeeb00) {
            _objc_release(local_b0);
            local_214 = -0x3ef52115;
          }
          else if (local_214 == 0x70f31df8) {
            local_d8 = DAT_004d2000;
            local_214 = -0x6ff71af6;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 == 0x6f3539c6) {
          local_214 = 0x3f109357;
          goto LAB_003d2ac8;
        }
        if (local_214 != 0x6feab95f) goto LAB_003d2ac8;
        uVar8 = 0;
        if (DAT_004c900c != 0) {
          uVar8 = DAT_004c9008 / DAT_004c900c;
        }
        local_17c = _objc_msgSend(param_3,local_178,&PTR____CFConstantStringClassReference_004c8260)
        ;
        bVar3 = 0xbd34ff25 < (uint)((ulong)((uVar8 & 0x1972a448) + 0xc84148a3) * 0x720d2d17 >> 0x3e)
        ;
        iVar7 = 0x6feab95f;
        local_214 = 0x552788d2;
      }
    }
LAB_003d93a8:
    if (bVar3) {
      local_214 = iVar7;
    }
    goto LAB_003d2ac8;
  }
  if (local_214 < -0x456c15d7) {
    if (local_214 < -0x625fb830) {
      if (local_214 < -0x73452eed) {
        if (local_214 < -0x7ae69c94) {
          if (local_214 < -0x7ed59ef5) {
            if (local_214 == -0x7ffd9416) {
              DAT_004c8147 = DAT_004c8127 ^ 0x6b;
              DAT_004c8148 = DAT_004c8128 ^ 0xed;
              DAT_004c8149 = DAT_004c8129 ^ 0xb5;
              DAT_004c814a = DAT_004c812a ^ 0x77;
              DAT_004c8180 = DAT_004c8160 ^ 0x62;
              DAT_004c8181 = DAT_004c8161 ^ 0xd4;
              DAT_004c8182 = DAT_004c8162 ^ 0xa5;
              DAT_004c8183 = DAT_004c8163 ^ 0x36;
              DAT_004c8184 = DAT_004c8164 ^ 0x12;
              DAT_004c8185 = DAT_004c8165 ^ 0xf3;
              DAT_004c8186 = DAT_004c8166 ^ 0x1a;
              DAT_004c8187 = DAT_004c8167 ^ 0xc2;
              DAT_004c8188 = DAT_004c8168 ^ 0x67;
              DAT_004c8189 = DAT_004c8169 ^ 0x32;
              DAT_004c818a = DAT_004c816a ^ 0xc9;
              DAT_004c818b = DAT_004c816b ^ 0xb1;
              DAT_004c818c = DAT_004c816c ^ 0xc;
              DAT_004c818d = DAT_004c816d ^ 0x5e;
              DAT_004c818e = DAT_004c816e ^ 0x82;
              DAT_004c818f = DAT_004c816f ^ 0xce;
              DAT_004c8190 = DAT_004c8170 ^ 0x27;
              DAT_004c8191 = DAT_004c8171 ^ 0x27;
              DAT_004c8192 = DAT_004c8172 ^ 0x7b;
              DAT_004c80f0 = DAT_004c80d0 ^ 0xd7;
              DAT_004c80f1 = DAT_004c80d1 ^ 0x5e;
              DAT_004c80f2 = DAT_004c80d2 ^ 0x14;
              DAT_004c80f3 = DAT_004c80d3 ^ 0x39;
              DAT_004c80f4 = DAT_004c80d4 ^ 100;
              DAT_004c80f5 = DAT_004c80d5 ^ 0xbc;
              DAT_004c80f6 = DAT_004c80d6 ^ 0x95;
              DAT_004c80f7 = DAT_004c80d7 ^ 0x4f;
              DAT_004c80f8 = DAT_004c80d8 ^ 0xc0;
              DAT_004c80f9 = DAT_004c80d9 ^ 0x5e;
              DAT_004c80fa = DAT_004c80da ^ 0x21;
              DAT_004c80fb = DAT_004c80db ^ 0xea;
              DAT_004c80fc = DAT_004c80dc ^ 0x85;
              DAT_004c80fd = DAT_004c80dd ^ 0x11;
              DAT_004c80fe = DAT_004c80de ^ 0x9d;
              DAT_004c80ff = DAT_004c80df ^ 0xd;
              DAT_004c8100 = DAT_004c80e0 ^ 0x16;
              DAT_004c8101 = DAT_004c80e1 ^ 0x74;
              DAT_004c8102 = DAT_004c80e2 ^ 0xd5;
              DAT_004c80b0 = DAT_004c8090 ^ 0x72;
              DAT_004c80b1 = DAT_004c8091 ^ 0x96;
              DAT_004c80b2 = DAT_004c8092 ^ 0xfb;
              DAT_004c80b3 = DAT_004c8093 ^ 0xf0;
              DAT_004c80b4 = DAT_004c8094 ^ 0x49;
              DAT_004c80b5 = DAT_004c8095 ^ 0x89;
              DAT_004c80b6 = DAT_004c8096 ^ 0x21;
              DAT_004c80b7 = DAT_004c8097 ^ 0x6a;
              DAT_004c80b8 = DAT_004c8098 ^ 0x68;
              DAT_004c80b9 = DAT_004c8099 ^ 0xfd;
              DAT_004c80ba = DAT_004c809a ^ 7;
              DAT_004c80bb = DAT_004c809b ^ 0xbf;
              DAT_004c80bc = DAT_004c809c ^ 0xc2;
              DAT_004c80bd = DAT_004c809d ^ 0x2e;
              DAT_004c80be = DAT_004c809e ^ 0x6e;
              DAT_004c80bf = DAT_004c809f ^ 0x8a;
              DAT_004c80c0 = DAT_004c80a0 ^ 0x1b;
              DAT_004c80c1 = DAT_004c80a1 ^ 0xf4;
              DAT_004c80c2 = DAT_004c80a2 ^ 0x2e;
              DAT_004c80c3 = DAT_004c80a3 ^ 0x99;
              DAT_004c80c4 = DAT_004c80a4 ^ 0x66;
              DAT_004c80c9 = DAT_004c80c5 ^ 0xbf;
              DAT_004c80ca = DAT_004c80c6 ^ 0xd2;
              DAT_004c80cb = DAT_004c80c7 ^ 0xd7;
              DAT_004c80cc = DAT_004c80c8 ^ 8;
              DAT_004c814f = DAT_004c814b ^ 0x58;
              DAT_004c8150 = DAT_004c814c ^ 0x7c;
              DAT_004c8151 = DAT_004c814d ^ 0x6b;
              DAT_004c8152 = DAT_004c814e ^ 0x5c;
              DAT_004c807f = DAT_004c8073 ^ 1;
              local_214 = -0x5eceea44;
            }
            else {
              if (local_214 == -0x7f886d05) {
                bVar3 = ((DAT_004c9010 + DAT_004c9014 ^ 0x99ba7dc7U) + 0xc8af1bc3) / 0x188f94b1 ==
                        0x6fd0debe;
                local_214 = -0x655073ce;
                iVar7 = 0x2dea94a1;
                goto LAB_003d94c4;
              }
              if (local_214 == -0x7f6b6cff) {
                bVar3 = 0x857c0343 <
                        ((DAT_004c8e10 * DAT_004c8e14 | 0x390ff6ddU) ^ 0xf9922b34) + 0x9fa7b5a0;
                iVar7 = 0x59d72889;
                local_214 = 0x1d592ecf;
                goto LAB_003d93a8;
              }
            }
          }
          else if (local_214 < -0x7c288c87) {
            if (local_214 == -0x7ed59ef5) {
              local_214 = 0x2648478d;
            }
            else if (local_214 == -0x7e925856) {
              _objc_release(local_130);
              _objc_release(local_128);
              _objc_release(local_110);
              _objc_release(local_f0);
              local_214 = -0x2c617e68;
            }
          }
          else if (local_214 == -0x7c288c87) {
            local_214 = 0x32d73168;
            local_1f0 = local_1e8;
          }
          else if (local_214 == -0x7b86b611) {
            local_214 = -0x18a35bdf;
          }
          goto LAB_003d2ac8;
        }
        if (-0x76b82898 < local_214) {
          if (local_214 < -0x7440587f) {
            if (local_214 == -0x76b82897) {
              local_214 = -0x76b82897;
              if ((DAT_004c9078 + DAT_004c907c ^ 0x23c9f981U) * 0x220a0c4e < 0xc1597015) {
                local_214 = -0x36970df;
              }
            }
            else if (local_214 == -0x7584d0d5) {
              local_214 = 0x44e9e7b;
            }
          }
          else if (local_214 == -0x7440587f) {
            _objc_release(local_b0);
            _objc_release(local_88);
            local_214 = -0x78921213;
          }
          else if (local_214 == -0x735d3100) {
            local_214 = 0x3c22a2b2;
          }
          goto LAB_003d2ac8;
        }
        if (-0x78921214 < local_214) {
          if (local_214 == -0x78921213) {
            uVar8 = 0;
            if (DAT_004c8eac != 0) {
              uVar8 = DAT_004c8ea8 / DAT_004c8eac;
            }
            _objc_release(local_b0);
            _objc_release(local_88);
            local_214 = -0x58da5a01;
            if ((uVar8 + 0xf3191e26 & 0xd4869d67) == 0x928c725f) {
              local_214 = -0x78921213;
            }
          }
          else if (local_214 == -0x781501ef) {
            local_214 = 0x621ac8ab;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 != -0x7ae69c94) {
          if (local_214 == -0x790379ff) {
            local_214 = -0x6191e980;
          }
          goto LAB_003d2ac8;
        }
        uVar8 = 0;
        if (DAT_004c908c != 0) {
          uVar8 = DAT_004c9088 / DAT_004c908c;
        }
        local_1b8 = PTR__OBJC_CLASS___UIImage_0048c9c8;
        bVar3 = 0x6c0a4025 < ((uVar8 + 0x563bb151) / 0x72792ce3) * 0x5b0cfda7;
        iVar7 = -0x5c1a1a96;
        local_214 = 0x7279cfdd;
        goto LAB_003d93a8;
      }
      if (local_214 < -0x6ebe9dc9) {
        if (-0x7139ba4e < local_214) {
          if (local_214 < -0x7000ede9) {
            if (local_214 == -0x7139ba4d) {
              local_214 = 0x5343f7cf;
            }
            else if (local_214 == -0x70052792) {
              local_214 = -0x40c78a1;
            }
          }
          else {
            if (local_214 == -0x7000ede9) {
              bVar3 = (uint)((ulong)((DAT_004c90b0 + DAT_004c90b4) * 0x1f9d36ee + 0x7f528782) *
                             0x36e48013 >> 0x3d) == 0x1a931ea4;
              iVar7 = -0x21bb2a5d;
              local_214 = 0x18c3ce24;
              goto LAB_003da0c4;
            }
            if (local_214 == -0x6ff71af6) {
              uVar8 = (DAT_004c8eb0 & DAT_004c8eb4 ^ 0x97c04c69) * 0xe29e4f | 0x16e1142c;
              bVar2 = 0x897882f3 < uVar8;
              bVar3 = uVar8 == 0x897882f4;
              iVar7 = -0x5cc4bc6c;
              local_214 = 0x5c9ae221;
              goto LAB_003d8eb8;
            }
          }
          goto LAB_003d2ac8;
        }
        if (local_214 != -0x73452eed) {
          if (local_214 == -0x72fc52bc) {
            local_214 = 0x72e2d820;
          }
          else if (local_214 == -0x71c7f87e) {
            bVar3 = DAT_004c8fa0 - DAT_004c8fa4 == 0x5b9faa64;
            local_214 = -0x382e6af5;
            iVar7 = -0x4e1d7014;
            goto LAB_003d94c4;
          }
          goto LAB_003d2ac8;
        }
        bVar3 = ((DAT_004c8fc0 ^ DAT_004c8fc4 | 0x10449158) / 0xd880194) * 0x5b05c999 == -0x51031e3a
        ;
        local_214 = -0x6bc68322;
        iVar7 = -0x6c6db19b;
      }
      else {
        if (local_214 < -0x68607b78) {
          if (local_214 < -0x6c6db19b) {
            if (local_214 == -0x6ebe9dc9) {
              uVar8 = 0;
              if (DAT_004c8f84 != 0) {
                uVar8 = DAT_004c8f80 / DAT_004c8f84;
              }
              local_214 = 0x325534ec;
              if (0x4d52d8d4 < (uVar8 * 0x5bfbfa4a ^ 0x86dd91f) * 0x2ee77e98) {
                local_214 = 0x612bdf84;
              }
            }
            else if (local_214 == -0x6dd35c3d) {
              local_214 = 0x106f5ca0;
            }
          }
          else if (local_214 == -0x6c6db19b) {
            _objc_msgSend(param_3,local_168,&PTR____CFConstantStringClassReference_004c8240);
            local_214 = -0x6bc68322;
          }
          else if (local_214 == -0x6bc68322) {
            uVar8 = DAT_004c8fc8 + DAT_004c8fcc;
            local_16b = _objc_msgSend(param_3,local_168,
                                      &PTR____CFConstantStringClassReference_004c8240);
            bVar3 = (uVar8 ^ 0x285f0180) * 0x6752d20c == 0x3a9723a5;
            iVar7 = -0x6c6db19b;
            local_214 = 0x1fce1332;
            goto LAB_003da0c4;
          }
          goto LAB_003d2ac8;
        }
        if (-0x679ebff7 < local_214) {
          if (local_214 == -0x679ebff6) {
            local_214 = 0x48e9d4f7;
          }
          else if (local_214 == -0x655073ce) {
            local_214 = 0x2dea94a1;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 == -0x68607b78) {
          uVar8 = DAT_004c90c8 | DAT_004c90cc;
          _objc_retain(local_1e0);
          local_214 = 0x152ba34b;
          if ((uVar8 | 0xf58667c6) == 0x75376270) {
            local_214 = -0x68607b78;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 != -0x67d8a5eb) goto LAB_003d2ac8;
        _objc_release(local_c8);
        bVar3 = local_c9 == '\0';
        local_214 = 0x662d02b8;
        iVar7 = -0xdcdee4e;
      }
    }
    else if (local_214 < -0x5541d64d) {
      if (-0x5fae509f < local_214) {
        if (local_214 < -0x5cc4bc6c) {
          if (local_214 < -0x5ec4f34d) {
            if (local_214 == -0x5fae509e) {
              DAT_004c8130 = DAT_004c8110 ^ 0x8e;
              DAT_004c8131 = DAT_004c8111 ^ 0x3b;
              DAT_004c8132 = DAT_004c8112 ^ 0xf2;
              DAT_004c8133 = DAT_004c8113 ^ 0x4e;
              DAT_004c8134 = DAT_004c8114 ^ 0xd4;
              DAT_004c8135 = DAT_004c8115 ^ 0x56;
              DAT_004c8136 = DAT_004c8116 ^ 0x6c;
              DAT_004c8137 = DAT_004c8117 ^ 0x1d;
              DAT_004c8138 = DAT_004c8118 ^ 0xc2;
              DAT_004c8139 = DAT_004c8119 ^ 0xea;
              DAT_004c813a = DAT_004c811a ^ 0x58;
              DAT_004c813b = DAT_004c811b ^ 0xdd;
              DAT_004c813c = DAT_004c811c ^ 0xdc;
              DAT_004c813d = DAT_004c811d ^ 0x4d;
              DAT_004c813e = DAT_004c811e ^ 0xc5;
              DAT_004c813f = DAT_004c811f ^ 0xda;
              DAT_004c8140 = DAT_004c8120 ^ 0x23;
              DAT_004c8141 = DAT_004c8121 ^ 0xaf;
              DAT_004c8142 = DAT_004c8122 ^ 0xca;
              DAT_004c8143 = DAT_004c8123 ^ 0x41;
              DAT_004c8144 = DAT_004c8124 ^ 0x3c;
              DAT_004c8145 = DAT_004c8125 ^ 0x5a;
              DAT_004c8146 = DAT_004c8126 ^ 0xac;
              local_214 = 0x10c26ed3;
            }
            else if (local_214 == -0x5eceea44) {
              DAT_004c8147 = DAT_004c8127 ^ 0x6b;
              DAT_004c8148 = DAT_004c8128 ^ 0xed;
              DAT_004c8149 = DAT_004c8129 ^ 0xb5;
              DAT_004c814a = DAT_004c812a ^ 0x77;
              DAT_004c8180 = DAT_004c8160 ^ 0x62;
              DAT_004c8181 = DAT_004c8161 ^ 0xd4;
              DAT_004c8182 = DAT_004c8162 ^ 0xa5;
              DAT_004c8183 = DAT_004c8163 ^ 0x36;
              DAT_004c8184 = DAT_004c8164 ^ 0x12;
              DAT_004c8185 = DAT_004c8165 ^ 0xf3;
              DAT_004c8186 = DAT_004c8166 ^ 0x1a;
              DAT_004c8187 = DAT_004c8167 ^ 0xc2;
              DAT_004c8188 = DAT_004c8168 ^ 0x67;
              DAT_004c8189 = DAT_004c8169 ^ 0x32;
              DAT_004c818a = DAT_004c816a ^ 0xc9;
              DAT_004c818b = DAT_004c816b ^ 0xb1;
              DAT_004c818c = DAT_004c816c ^ 0xc;
              DAT_004c818d = DAT_004c816d ^ 0x5e;
              DAT_004c818e = DAT_004c816e ^ 0x82;
              DAT_004c818f = DAT_004c816f ^ 0xce;
              DAT_004c8190 = DAT_004c8170 ^ 0x27;
              DAT_004c8191 = DAT_004c8171 ^ 0x27;
              DAT_004c8192 = DAT_004c8172 ^ 0x7b;
              DAT_004c80f0 = DAT_004c80d0 ^ 0xd7;
              DAT_004c80f1 = DAT_004c80d1 ^ 0x5e;
              DAT_004c80f2 = DAT_004c80d2 ^ 0x14;
              DAT_004c80f3 = DAT_004c80d3 ^ 0x39;
              DAT_004c80f4 = DAT_004c80d4 ^ 100;
              DAT_004c80f5 = DAT_004c80d5 ^ 0xbc;
              DAT_004c80f6 = DAT_004c80d6 ^ 0x95;
              DAT_004c80f7 = DAT_004c80d7 ^ 0x4f;
              DAT_004c80f8 = DAT_004c80d8 ^ 0xc0;
              DAT_004c80f9 = DAT_004c80d9 ^ 0x5e;
              DAT_004c80fa = DAT_004c80da ^ 0x21;
              DAT_004c80fb = DAT_004c80db ^ 0xea;
              DAT_004c80fc = DAT_004c80dc ^ 0x85;
              DAT_004c80fd = DAT_004c80dd ^ 0x11;
              DAT_004c80fe = DAT_004c80de ^ 0x9d;
              DAT_004c80ff = DAT_004c80df ^ 0xd;
              DAT_004c8100 = DAT_004c80e0 ^ 0x16;
              DAT_004c8101 = DAT_004c80e1 ^ 0x74;
              DAT_004c8102 = DAT_004c80e2 ^ 0xd5;
              DAT_004c80b0 = DAT_004c8090 ^ 0x72;
              DAT_004c80b1 = DAT_004c8091 ^ 0x96;
              DAT_004c80b2 = DAT_004c8092 ^ 0xfb;
              DAT_004c80b3 = DAT_004c8093 ^ 0xf0;
              DAT_004c80b4 = DAT_004c8094 ^ 0x49;
              DAT_004c80b5 = DAT_004c8095 ^ 0x89;
              DAT_004c80b6 = DAT_004c8096 ^ 0x21;
              DAT_004c80b7 = DAT_004c8097 ^ 0x6a;
              DAT_004c80b8 = DAT_004c8098 ^ 0x68;
              DAT_004c80b9 = DAT_004c8099 ^ 0xfd;
              DAT_004c80ba = DAT_004c809a ^ 7;
              DAT_004c80bb = DAT_004c809b ^ 0xbf;
              DAT_004c80bc = DAT_004c809c ^ 0xc2;
              DAT_004c80bd = DAT_004c809d ^ 0x2e;
              DAT_004c80be = DAT_004c809e ^ 0x6e;
              DAT_004c80bf = DAT_004c809f ^ 0x8a;
              DAT_004c80c0 = DAT_004c80a0 ^ 0x1b;
              DAT_004c80c1 = DAT_004c80a1 ^ 0xf4;
              DAT_004c80c2 = DAT_004c80a2 ^ 0x2e;
              DAT_004c80c3 = DAT_004c80a3 ^ 0x99;
              DAT_004c80c4 = DAT_004c80a4 ^ 0x66;
              DAT_004c80c9 = DAT_004c80c5 ^ 0xbf;
              DAT_004c80ca = DAT_004c80c6 ^ 0xd2;
              DAT_004c80cb = DAT_004c80c7 ^ 0xd7;
              DAT_004c80cc = DAT_004c80c8 ^ 8;
              DAT_004c814f = DAT_004c814b ^ 0x58;
              DAT_004c8150 = DAT_004c814c ^ 0x7c;
              DAT_004c8151 = DAT_004c814d ^ 0x6b;
              DAT_004c8152 = DAT_004c814e ^ 0x5c;
              DAT_004c807f = DAT_004c8073 ^ 1;
              local_214 = -0x5eceea44;
              if (((DAT_004c8e08 + DAT_004c8e0c ^ 0x72d4f3bU) + 0x267f0d88 | 0x98de4467) <
                  0xbbb7b33e) {
                local_214 = 0x2257f168;
              }
              local_72 = DAT_004c8074 ^ 0xd9;
            }
          }
          else if (local_214 == -0x5ec4f34d) {
            local_214 = 0x3e29a344;
          }
          else if (local_214 == -0x5cec5357) {
            uVar8 = (DAT_004c8e20 * DAT_004c8e24 + 0xfef4ec7cU & 0x615d98ba) + 0x8044eecd;
            bVar2 = 0x4b5213e0 < uVar8;
            bVar3 = uVar8 == 0x4b5213e1;
            local_214 = 0x260b187a;
            iVar7 = 0x50c7244b;
            goto LAB_003d9304;
          }
          goto LAB_003d2ac8;
        }
        if (-0x5b9c92eb < local_214) {
          if (local_214 == -0x5b9c92ea) {
            local_17b = _objc_msgSend(param_3,local_168,
                                      &PTR____CFConstantStringClassReference_004c81c0);
            local_214 = 0xb2445e5;
          }
          else if (local_214 == -0x58da5a01) {
            local_214 = -0x327e68cd;
          }
          goto LAB_003d2ac8;
        }
        if (local_214 != -0x5cc4bc6c) {
          if (local_214 == -0x5c1a1a96) {
            local_214 = -0x7ae69c94;
          }
          goto LAB_003d2ac8;
        }
        uVar8 = (DAT_004c8eb8 - DAT_004c8ebc) * -0x38d2a732 & 0x3d6efef1U | 0x3944fc11;
        (*local_d8)(param_1,PTR_s_imageNamed__0048a288,param_3);
        local_e0 = _objc_retainAutoreleasedReturnValue();
        bVar2 = 0x89d1bc16 < uVar8;
        bVar3 = uVar8 == 0x89d1bc17;
        local_214 = 0x5c9ae221;
        iVar7 = 0x5fa7186;
        goto LAB_003d9304;
      }
      if (local_214 < -0x6191e980) {
        if (local_214 == -0x625fb830) {
          local_214 = -0x217bb0be;
        }
        else if (local_214 == -0x61a6c34f) {
          local_214 = -0x40867dd5;
          if (0xe36bf3c5 < (((DAT_004c8f20 | DAT_004c8f24) / 0x2d8c9ada | 0xa3bd7fb9) ^ 0x8419aca8))
          {
            local_214 = -0x48cfeae2;
          }
        }
        else if (local_214 == -0x6197547a) {
          uVar8 = DAT_004c9108 & DAT_004c910c;
          _objc_release(local_1e0);
          bVar3 = 0xe2db449a < uVar8 * 0x71dedeee + 0xa69fa02d;
          iVar7 = -0x6197547a;
          local_214 = 0x41e4e2c0;
          goto LAB_003d93a8;
        }
        goto LAB_003d2ac8;
      }
      if (-0x5fc60662 < local_214) {
        if (local_214 == -0x5fc60661) {
          _objc_release(local_158);
          local_214 = 0x795b6f7;
        }
        else if (local_214 == -0x5fbeaad4) {
          (*pcStack_140)(param_1,local_148,param_3);
          _objc_retainAutoreleasedReturnValue();
          local_214 = 0x6749d553;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 != -0x6191e980) {
        if (local_214 == -0x609c7ba1) {
          local_214 = 0x723b6c4b;
        }
        goto LAB_003d2ac8;
      }
      local_80 = PTR_s_shared_00489458;
      bVar3 = local_73 == '\0';
      local_214 = -0x85d268f;
      iVar7 = 0x2ce50d7f;
    }
    else {
      if (-0x4e1d7015 < local_214) {
        if (local_214 < -0x48cfeae2) {
          if (local_214 < -0x4d0bb0a5) {
            if (local_214 == -0x4e1d7014) {
              uVar8 = 0;
              if (DAT_004c8fac != 0) {
                uVar8 = DAT_004c8fa8 / DAT_004c8fac;
              }
              local_16a = _objc_msgSend(param_3,local_168,
                                        &PTR____CFConstantStringClassReference_004c82a0);
              bVar2 = 0x743b186a < uVar8 + 0x70af34e;
              bVar3 = uVar8 + 0x70af34e == 0x743b186b;
              local_214 = -0x382e6af5;
              iVar7 = 0x60cc9123;
              goto LAB_003d9304;
            }
            if (local_214 == -0x4dc78d67) {
              bVar3 = 0xe5182e97 <
                      ((DAT_004c8fe0 - DAT_004c8fe4 ^ 0xe3e2e6c1U) / 0x18ce36eb) * 0x31f7dd11;
              iVar7 = -0x307e96b3;
              local_214 = -0x43cf5ecf;
              goto LAB_003d93a8;
            }
          }
          else if (local_214 == -0x4d0bb0a5) {
            local_1d0 = PTR_BubbleBoxAssets_0048cad0;
            local_214 = -0x7000ede9;
          }
          else if (local_214 == -0x4cfb7706) {
            local_214 = 0x780016cf;
          }
        }
        else if (local_214 < -0x476e57a5) {
          if (local_214 == -0x48cfeae2) {
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_80);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,PTR_s_currentBubble_0048a848);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            DAT_004d2009 = _objc_msgSend(uVar6,PTR_s_isMergeBubble_0048bef0);
            local_214 = -0x40867dd5;
          }
          else if (local_214 == -0x48c06059) {
            local_214 = -0x46aa2d00;
          }
        }
        else if (local_214 == -0x476e57a5) {
          local_90 = PTR_s_enabled_0048a890;
          local_214 = -0x1c016b66;
        }
        else if (local_214 == -0x46aa2d00) {
          uVar8 = 0;
          if (DAT_004c8df4 != 0) {
            uVar8 = DAT_004c8df0 / DAT_004c8df4;
          }
          bVar3 = (uint)((ulong)(uVar8 * -0x3ac3ebb5) * 0x3a6bc223 >> 0x3d) * 0xa5e5051 ==
                  0x65ee14da;
          local_214 = -0x18a35bdf;
          iVar7 = -0x7b86b611;
          goto LAB_003d9e68;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < -0x50194976) {
        if (local_214 == -0x5541d64d) {
          local_210 = local_1f8;
          local_214 = 0x795b6f7;
        }
        else {
          if (local_214 == -0x51629009) {
            uVar8 = DAT_004c90d8 ^ DAT_004c90dc;
            (*DAT_004d2000)(param_1,local_1d8,param_3);
            local_1e8 = _objc_retainAutoreleasedReturnValue();
            bVar3 = ((uVar8 * -0x799609ac ^ 0x720003a0) & 0xf2100bf4) == 0xa21f02fb;
            local_214 = 0x48272c06;
            iVar7 = -0x4cfb7706;
            goto LAB_003d94c4;
          }
          if (local_214 == -0x50a25c6f) {
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_80);
            local_158 = _objc_retainAutoreleasedReturnValue();
            lVar4 = _objc_msgSend(local_158,PTR_s_payMsgAssets_0048af50);
            local_159 = lVar4 == 1;
            local_214 = -0x5ec4f34d;
          }
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < -0x4f921635) {
        if (local_214 == -0x50194976) {
          local_214 = -0x76b82897;
        }
        else if ((local_214 == -0x500aecd6) &&
                (local_214 = -0x3d6fd304,
                0xa87fa116 < ((DAT_004c90c0 * DAT_004c90c4 + 0x40508d9U | 0xb58caf78) ^ 0xbce6a18)))
        {
          local_214 = -0x68607b78;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 == -0x4f921635) {
        local_214 = -0x4f921635;
        if ((DAT_004c8f68 * DAT_004c8f6c & 0x10b80cfU) * 0x5ce35a2f != -0x37c1f8d7) {
          local_214 = 0x4c12fa8a;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 != -0x4e98a759) goto LAB_003d2ac8;
      bVar3 = local_16b == '\0';
      local_214 = 0x2ad3afe5;
      iVar7 = 0x77f4983;
    }
LAB_003d9e68:
    if (bVar3) {
      local_214 = iVar7;
    }
    goto LAB_003d2ac8;
  }
  if (local_214 < -0x1d173d86) {
    if (-0x2d3a73ee < local_214) {
      if (local_214 < -0x245634dd) {
        if (-0x2b4df35d < local_214) {
          if (local_214 < -0x2628e00d) {
            if (local_214 == -0x2b4df35c) {
              bVar3 = local_179 == '\0';
              local_214 = 0x2ad3afe5;
              iVar7 = -0x2b6e4d93;
              goto LAB_003d9e68;
            }
            if (local_214 == -0x2a6b52af) {
              _objc_msgSend(local_b0,local_c0);
              local_c8 = _objc_retainAutoreleasedReturnValue();
              local_c9 = local_c8 == 0;
              local_214 = -0x67d8a5eb;
            }
          }
          else {
            if (local_214 == -0x2628e00d) {
              bVar3 = 0x11a20f4d <
                      ((DAT_004c8ee0 ^ DAT_004c8ee4 | 0x5045000) ^ 0x51020 | 0x5abaaddf);
              local_214 = -0x3aa4d08b;
              iVar7 = -0x4120e0b2;
              goto LAB_003da0a4;
            }
            if (local_214 == -0x25886f57) {
              local_214 = 0x3cc02fd;
              local_200 = local_210;
            }
          }
          goto LAB_003d2ac8;
        }
        if (local_214 == -0x2d3a73ed) {
          local_214 = 0x6feab95f;
          goto LAB_003d2ac8;
        }
        if (local_214 != -0x2c617e68) {
          if (local_214 == -0x2b6e4d93) {
            local_17a = _objc_msgSend(param_3,local_178,
                                      &PTR____CFConstantStringClassReference_004c8280);
            local_214 = 0x3ccf5cb;
          }
          goto LAB_003d2ac8;
        }
        iVar7 = DAT_004c8f48 - DAT_004c8f4c;
        _objc_release(local_130);
        _objc_release(local_128);
        local_132 = local_131 & DAT_004d2009 & 1;
        _objc_release(local_110);
        _objc_release(local_f0);
        bVar3 = (iVar7 * 0x591b1fa8 ^ 0xf24c707fU) * -0x6019c077 == 0x72fcaab4;
        local_214 = -0x7e925856;
        iVar7 = 0x39109474;
LAB_003d94c4:
        if (!bVar3) {
          local_214 = iVar7;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < -0x217bb0be) {
        if (local_214 < -0x22487e4e) {
          if (local_214 == -0x245634dd) {
            local_214 = -0x9834de5;
          }
          else if (local_214 == -0x231cc694) {
            uVar8 = DAT_004c9050 * DAT_004c9054 * 0x312b33b9 & 0xf66edd7dU | 0x664e9964;
            bVar2 = 0xa345cf68 < uVar8;
            bVar3 = uVar8 == 0xa345cf69;
            iVar7 = -0x6dd35c3d;
            local_214 = 0x106f5ca0;
            goto LAB_003d8eb8;
          }
        }
        else if (local_214 == -0x22487e4e) {
          local_214 = -0x456c15d7;
        }
        else if (local_214 == -0x21bb2a5d) {
          _objc_msgSend(local_1d0,PTR_s_imageNamed__0048a288,param_3);
          _objc_retainAutoreleasedReturnValue();
          local_214 = 0x18c3ce24;
        }
        goto LAB_003d2ac8;
      }
      if (-0x20be0b38 < local_214) {
        if (local_214 == -0x20be0b37) {
          uVar8 = ((DAT_004c8f50 ^ DAT_004c8f54) & 0x2a576845) * -0xa74951 | 0xcf664523;
          bVar2 = 0x57e361e5 < uVar8;
          bVar3 = uVar8 == 0x57e361e6;
          local_214 = 0x6749d553;
          iVar7 = -0x5fbeaad4;
          goto LAB_003d9304;
        }
        if (local_214 == -0x1e74cf4d) {
          local_214 = 0x40e6d5be;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 == -0x217bb0be) {
        local_214 = 0x24672aa3;
        goto LAB_003d2ac8;
      }
      if (local_214 != -0x212a02ac) goto LAB_003d2ac8;
      bVar3 = local_17a == '\0';
      local_214 = 0x2ad3afe5;
      iVar7 = -0x5b9c92ea;
      goto LAB_003d9e68;
    }
    if (local_214 < -0x3a57cef8) {
      if (local_214 < -0x40867dd5) {
        if (local_214 == -0x456c15d7) {
          _objc_release(local_88);
          local_214 = 0x70f31df8;
        }
        else {
          if (local_214 == -0x43cf5ecf) {
            uVar8 = 0;
            if (DAT_004c8fec != 0) {
              uVar8 = DAT_004c8fe8 / DAT_004c8fec;
            }
            bVar3 = 0xff1dda08 < (uVar8 + 0x41b7ab64 ^ 0x64414e21);
            iVar7 = -0x307e96b3;
            local_214 = -0x2b4df35c;
            goto LAB_003d93a8;
          }
          if (local_214 == -0x4120e0b2) {
            local_f9 = local_f8 == 1;
            bVar3 = ((DAT_004c8ee8 | DAT_004c8eec) & 0x2cdec5b6 | 0xc404a4) == 0xb4c502c7;
            local_214 = -0x3aa4d08b;
            iVar7 = -0x1e74cf4d;
            goto LAB_003d94c4;
          }
        }
        goto LAB_003d2ac8;
      }
      if (-0x3d6fd305 < local_214) {
        if (local_214 == -0x3d6fd304) {
          _objc_retain(local_1e0);
          local_214 = -0x68607b78;
        }
        else if (local_214 == -0x3aa4d08b) {
          local_214 = -0x4120e0b2;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 == -0x40867dd5) {
        uVar8 = DAT_004c8f28 + DAT_004c8f2c;
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_80);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_108 = PTR_s_currentBubble_0048a848;
        _objc_msgSend();
        local_110 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        local_118 = PTR_s_isMergeBubble_0048bef0;
        DAT_004d2009 = _objc_msgSend(local_110);
        local_120 = PTR_BubbleBoxMgr_0048c9a8;
        local_214 = -0x40867dd5;
        if ((uint)((ulong)(uVar8 >> 1) * 0x1001a18d >> 0x3b) + 0x986dbec7 < 0xcdf5c7f4) {
          local_214 = 0x72af7d9b;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 != -0x3ef52115) goto LAB_003d2ac8;
      uVar8 = DAT_004c8e88 - DAT_004c8e8c;
      _objc_release(local_b0);
      bVar3 = 0x8f2605a5 < (uVar8 / 0xdaa1737 & 6) * 0x5b986eea;
      iVar7 = 0x6ffeeb00;
      local_214 = 0x74e115f0;
      goto LAB_003d93a8;
    }
    if (local_214 < -0x3276337d) {
      if (local_214 < -0x34763f77) {
        if (local_214 == -0x3a57cef8) {
          local_214 = 0x7b985fb0;
          if (0xfe7360d5 < ((DAT_004c8fb8 ^ DAT_004c8fbc) & 0x40948c02) + 0xc6167576) {
            local_214 = -0x3a57cef8;
          }
        }
        else if (local_214 == -0x382e6af5) {
          _objc_msgSend(param_3,local_168,&PTR____CFConstantStringClassReference_004c82a0);
          local_214 = -0x4e1d7014;
        }
      }
      else if (local_214 == -0x34763f77) {
        uVar8 = DAT_004c9038 ^ DAT_004c903c;
        (*local_188)(param_1,local_190,param_3);
        local_198 = _objc_retainAutoreleasedReturnValue();
        local_214 = -0x34763f77;
        if ((uVar8 * 0x4625df7e ^ 0x452a44c8) + 0xe094f873 < 0x55145c58) {
          local_214 = 0x3e005c68;
        }
      }
      else if (local_214 == -0x327e68cd) {
        local_214 = -0x85d268f;
      }
      goto LAB_003d2ac8;
    }
    if (local_214 < -0x307e96b3) {
      if (local_214 == -0x3276337d) {
        uVar8 = (DAT_004c8f38 * DAT_004c8f3c & 0xa537ad15U) * -0x44f60587 + 0x4b4121f3;
        _objc_msgSend(local_120,local_80);
        local_128 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_128,local_108);
        local_130 = _objc_retainAutoreleasedReturnValue();
        local_131 = _objc_msgSend(local_130,local_118);
        bVar2 = 0xbf3efaed < uVar8;
        bVar3 = uVar8 == 0xbf3efaee;
        local_214 = -0x3276337d;
        iVar7 = 0x537566b2;
        goto LAB_003d9304;
      }
      if (local_214 == -0x310243ea) {
        local_214 = -0x2a6b52af;
      }
      goto LAB_003d2ac8;
    }
    if (local_214 == -0x307e96b3) {
      local_214 = -0x43cf5ecf;
      goto LAB_003d2ac8;
    }
    if (local_214 != -0x2f190b1c) goto LAB_003d2ac8;
    uVar8 = 0;
    if (DAT_004c90d4 != 0) {
      uVar8 = DAT_004c90d0 / DAT_004c90d4;
    }
    bVar3 = 0x1c5a3929 <
            (uint)((ulong)((uVar8 | 0xdff7e0b1) * -0x69bb9ff9 >> 1) * 0x53d80cd9 >> 0x3d);
    local_214 = -0x51629009;
    iVar7 = 0x48272c06;
  }
  else {
    if (-0x85d2690 < local_214) {
      if (0x1667a6c < local_214) {
        if (local_214 < 0x44e9e7b) {
          if (local_214 < 0x3cc02fd) {
            if (local_214 == 0x1667a6d) {
              local_70 = DAT_004d2050;
              local_214 = -0x48c06059;
              if (((DAT_004c8de8 + DAT_004c8dec + 0xe4c91f8cU) / 0x7c9b653) * -0x5f08864e <
                  0x97ec35c4) {
                local_214 = 0x1667a6d;
              }
            }
            else if (local_214 == 0x2874378) {
              local_214 = 0x41f2a6fc;
            }
          }
          else {
            if (local_214 == 0x3ccf5cb) {
              bVar3 = (DAT_004c8ff0 - DAT_004c8ff4 | 0x4040a4b6U) == 0x811ad2bf;
              local_214 = 0x7472b1d4;
              iVar7 = 0x68e187d;
              goto LAB_003d9e68;
            }
            if (local_214 == 0x3cc02fd) {
              _objc_release(param_3);
              _objc_release(param_1);
              _objc_autoreleaseReturnValue(local_200);
              return;
            }
          }
        }
        else if (local_214 < 0x56530ce) {
          if (local_214 == 0x44e9e7b) {
            local_214 = 0x44e9e7b;
            if ((((DAT_004c9048 ^ DAT_004c904c) & 0x60d048cd) * 0x441d713b | 0x3135caf5) !=
                0xa190dffc) {
              local_214 = 0x6643a7ed;
            }
          }
          else if (local_214 == 0x513c7a3) {
            _objc_msgSend(param_3,local_178,&PTR____CFConstantStringClassReference_004c8260);
            local_214 = 0x6feab95f;
          }
        }
        else if (local_214 == 0x56530ce) {
          local_214 = 0x907d6dd;
        }
        else if (local_214 == 0x5bc0a1c) {
          local_214 = 0x51593d91;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < -0x40c78a1) {
        if (local_214 == -0x85d268f) {
          local_e1 = DAT_004d2009;
          local_214 = 0x4a817fba;
        }
        else {
          if (local_214 == -0x85169ee) {
            bVar3 = local_199 == '\0';
            iVar7 = -0x4d0bb0a5;
            local_214 = 0x5739cc05;
            goto LAB_003da0c4;
          }
          if (local_214 == -0x67d8624) {
            local_1a9 = _objc_msgSend(param_3,local_1a8,
                                      &PTR____CFConstantStringClassReference_004c81e0);
            local_214 = 0x58af61a6;
          }
        }
        goto LAB_003d2ac8;
      }
      if (local_214 < -0x36970df) {
        if (local_214 == -0x40c78a1) {
          local_e2 = local_e1 & 1;
          bVar3 = 0xe03e6aa < ((DAT_004c8ec8 + DAT_004c8ecc | 0x13730c2eU) / 0x731ac85 | 0x52d5abef)
          ;
          local_214 = -0x70052792;
          iVar7 = 0x74748b5c;
          goto LAB_003da0a4;
        }
        if (local_214 == -0x377e889) {
          _objc_release(local_a0);
          local_214 = 0x4839ff9a;
        }
        goto LAB_003d2ac8;
      }
      if (local_214 != -0x36970df) {
        if (local_214 == -0x19e7284) {
          bVar3 = ((uint)((ulong)(uint)(DAT_004c8fd0 - DAT_004c8fd4) * 0x844d0b3 >> 0x3b) | 0x1600b0
                  ) == 0xa260be24;
          local_214 = 0x76933d36;
          iVar7 = 0x5c58afb7;
          goto LAB_003d9e68;
        }
        goto LAB_003d2ac8;
      }
      bVar3 = local_1a9 == '\0';
      iVar7 = -0x4d0bb0a5;
      local_214 = -0x1126d790;
      goto LAB_003da0c4;
    }
    if (-0x1126d791 < local_214) {
      if (local_214 < -0xdcdee4e) {
        if (local_214 < -0xf8b46d0) {
          if (local_214 == -0x1126d790) {
            bVar3 = 0x2780602e < ((DAT_004c9080 + DAT_004c9084) * 0x10d27998 ^ 0x210dd98cU);
            local_214 = -0x5c1a1a96;
            iVar7 = -0x7ae69c94;
            goto LAB_003da0a4;
          }
          if (local_214 == -0x10d829bc) {
            uVar8 = (DAT_004c8f30 + DAT_004c8f34) * 0x1bc9ce95 + 0x3cd09ddf;
            bVar2 = 0xeb85fb7a < uVar8;
            bVar3 = uVar8 == 0xeb85fb7b;
            iVar7 = -0x3276337d;
            local_214 = -0x88336f2;
            goto LAB_003d8eb8;
          }
        }
        else if (local_214 == -0xf8b46d0) {
          local_214 = 0x6e8e776b;
        }
        else if (local_214 == -0xe7760fa) {
          local_214 = 0x61dbdebd;
        }
      }
      else if (local_214 < -0x924fbf7) {
        if (local_214 == -0xdcdee4e) {
          DAT_004d2008 = '\x01';
          local_214 = 0x1218eb8a;
        }
        else if (local_214 == -0x9834de5) {
          local_214 = -0x5eceea44;
        }
      }
      else if (local_214 == -0x924fbf7) {
        local_214 = 0x4839ff9a;
      }
      else if (local_214 == -0x88336f2) {
        _objc_msgSend(local_120,local_80);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,local_108);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,local_118);
        local_214 = -0x3276337d;
      }
      goto LAB_003d2ac8;
    }
    if (-0x18a35be0 < local_214) {
      if (local_214 < -0x12d0362d) {
        if (local_214 == -0x18a35bdf) {
          local_71 = local_70 == 0;
          local_214 = -0x735d3100;
        }
        else if (local_214 == -0x17dcbc4e) {
          local_214 = -0x2628e00d;
        }
      }
      else if (local_214 == -0x12d0362d) {
        local_214 = 0x19cdd165;
      }
      else if (local_214 == -0x12553988) {
        local_214 = 0x1667a6d;
      }
      goto LAB_003d2ac8;
    }
    if (local_214 == -0x1d173d86) {
      bVar3 = local_17c == '\0';
      iVar7 = 0x7715ab28;
      local_214 = 0x2ad3afe5;
      goto LAB_003da0c4;
    }
    if (local_214 != -0x1c016b66) {
      if (local_214 == -0x1997f3e0) {
        uVar8 = 0;
        if (DAT_004c906c != 0) {
          uVar8 = DAT_004c9068 / DAT_004c906c;
        }
        uVar8 = ((uVar8 | 0xd4fec35f) ^ 0x6777c205) + 0xf2f2e1d1;
        local_1a8 = PTR_s_containsString__0048b098;
        bVar2 = 0xd8a8e0da < uVar8;
        bVar3 = uVar8 == 0xd8a8e0db;
        local_214 = -0x1997f3e0;
        iVar7 = 0x5fc3c15d;
        goto LAB_003d9304;
      }
      goto LAB_003d2ac8;
    }
    bVar3 = 0x316057cd < ((DAT_004c8e40 ^ DAT_004c8e44) * -0x40ff3187 + 0xcef62a41 & 0x3ae5b85);
    local_214 = 0x7125f76c;
    iVar7 = 0x43f0c4fa;
  }
LAB_003da0a4:
  if (bVar3) {
    local_214 = iVar7;
  }
  goto LAB_003d2ac8;
}



// #####################################
// ##### FUN_003e0d10 @ 003e0d10
// #####################################

void FUN_003e0d10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int local_12c;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  undefined *local_108;
  code *local_100;
  char local_f1;
  long local_f0;
  long local_e8;
  byte local_d9;
  undefined8 local_d8;
  long local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  byte local_ab;
  byte local_aa;
  char local_a9;
  long local_a8;
  char local_99;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  
  uVar1 = DAT_004c9540 & DAT_004c9544;
  local_12c = -0x1bc26271;
LAB_003e0dd4:
  puVar2 = PTR_s_currentBubble_0048a848;
  if (local_12c < 0x1c862720) {
    if (-0x3c06c6d1 < local_12c) {
      if (local_12c < -0x1c2b982d) {
        if (local_12c < -0x2664f3ae) {
          if (local_12c < -0x2cfcc59e) {
            if (local_12c == -0x3c06c6d0) {
              uVar11 = (uint)((ulong)(uint)(DAT_004c9648 * DAT_004c964c * -0x41385f87) * 0x4de8e319
                             >> 0x3e) ^ 0xc2863e69;
              (*DAT_004d2020)(param_1,PTR_s_adaptedWeSVGImageWithName_data_c_0048bf10,param_3,
                              param_4,param_5);
              local_e8 = _objc_retainAutoreleasedReturnValue();
              bVar4 = 0xf6d6aa9f < uVar11;
              bVar5 = uVar11 == 0xf6d6aaa0;
              local_12c = -0x1d766a0c;
              iVar7 = 0x5c72373e;
              goto LAB_003e26c8;
            }
            if (local_12c == -0x32b69840) {
              local_aa = DAT_004d2009;
              local_12c = 0x4dedf1c8;
              if (((DAT_004c95e8 | DAT_004c95ec | 0x27e2e627) ^ 0xe9dca4e) * 0x23c4c5c < 0x1169d0e)
              {
                local_12c = -0x116396fe;
              }
              goto LAB_003e0dd4;
            }
            if (local_12c != -0x2f071058) goto LAB_003e0dd4;
            bVar5 = 0xb1cc42a9 <
                    ((DAT_004c95f0 ^ DAT_004c95f4) * -0x4e131e54 & 0xa5606268) + 0xe3c1b5d3;
            local_12c = 0x49087cf1;
            iVar7 = 0x55c3ff89;
          }
          else {
            if (local_12c != -0x2cfcc59e) {
              if (local_12c == -0x2bd22df3) {
                local_12c = 0x7664dcab;
              }
              else if (local_12c == -0x2b09d721) {
                local_12c = 0x306b058a;
              }
              goto LAB_003e0dd4;
            }
            bVar5 = 0x8348fc18 < (DAT_004c9640 - DAT_004c9644) * -0x1f96759e + 0xb8a4bc82U;
            local_12c = -0x1d766a0c;
            iVar7 = -0x3c06c6d0;
          }
          goto LAB_003e3080;
        }
        if (local_12c < -0x22b78cb5) {
          if (local_12c == -0x2664f3ae) {
            _objc_retain(param_1);
            local_12c = -0x537f3e27;
          }
          else if (local_12c == -0x26485ac0) {
            local_12c = 0x44c7254d;
          }
          else if (local_12c == -0x2603c8e6) {
            local_12c = -0x4da34d35;
            if (local_d0 != 1) {
              local_12c = -0x1ed57737;
            }
            local_110 = local_c8;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c < -0x1ed57737) {
          if (local_12c == -0x22b78cb5) {
            bVar5 = (DAT_004c9590 * DAT_004c9594 & 0x351a536cU) == 0x7b48f3ed;
            iVar7 = -0x1acdd44;
            local_12c = 0x1f4d42ac;
            goto LAB_003e24d0;
          }
          if (local_12c == -0x21cf0b81) {
LAB_003e20a8:
            local_12c = 0x36ca861e;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c != -0x1ed57737) {
          if (local_12c == -0x1d766a0c) {
            (*DAT_004d2020)(param_1,PTR_s_adaptedWeSVGImageWithName_data_c_0048bf10,param_3,param_4,
                            param_5);
            _objc_retainAutoreleasedReturnValue();
            local_12c = -0x3c06c6d0;
          }
          goto LAB_003e0dd4;
        }
        uVar11 = ((DAT_004c9620 + DAT_004c9624 | 0x60606060U) ^ 0x10040898) & 0x9024389b;
        bVar4 = 0x2a28df37 < uVar11;
        bVar5 = uVar11 == 0x2a28df38;
        local_12c = -0x3f80c2d1;
        iVar7 = 0x2f50e417;
      }
      else {
        if (-0x1acdd45 < local_12c) {
          if (local_12c < 0x40899e3) {
            if (local_12c == -0x1acdd44) {
              uVar11 = DAT_004c9598 | DAT_004c959c;
              _objc_msgSend(local_90,local_80);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,PTR_s_currentBubble_0048a848);
              local_98 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar8);
              bVar5 = 0xfbbaf3ef < (uVar11 * 0x4d8bd844 + 0xd421fa5c | 0x588d4a8e);
              iVar7 = -0x1acdd44;
              local_12c = -0x6dfa82c0;
              goto LAB_003e2d9c;
            }
            if (local_12c == -0x101753d) {
              local_12c = -0x5d7c4b40;
              local_120 = local_128;
            }
            else if (local_12c == 0x2001551) {
              local_128 = local_118;
              local_12c = -0x7141881a;
              if ((DAT_004c96a0 + DAT_004c96a4) * -0x1e4b1925 + 0x3bee8120U < 0x8c728f3a) {
                local_12c = -0x418fbbcf;
              }
            }
          }
          else if (local_12c < 0xaea2169) {
            if (local_12c == 0x40899e3) {
              local_12c = 0x67d3e684;
            }
            else if (local_12c == 0x4cc5924) {
              (*local_100)(param_1,local_108,param_3,param_4,param_5);
              local_118 = _objc_retainAutoreleasedReturnValue();
              local_12c = 0x2001551;
            }
          }
          else {
            if (local_12c == 0xaea2169) {
              bVar5 = local_ab == 0;
              local_12c = -0x3e3c0eca;
              iVar7 = 0x64d0613a;
              goto LAB_003e2ec0;
            }
            if (local_12c == 0x1bb6801d) {
              local_12c = 0x4dbb8868;
            }
          }
          goto LAB_003e0dd4;
        }
        if (local_12c < -0x7c3d733) {
          if (local_12c == -0x1c2b982d) {
            _objc_msgSend(local_d8,PTR_s_currentBubble_0048a848);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_d8);
            puVar3 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(uVar8,PTR_s_isMergeBubble_0048bef0);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar9,puVar2);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar10,puVar3);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            local_12c = 0x1c862720;
          }
          else if (local_12c == -0x1bc26271) {
            local_12c = -0x2664f3ae;
            if ((uVar1 | 0xbbed4bd7) != 0xb8395827) {
              local_12c = -0x537f3e27;
            }
          }
          else if (local_12c == -0x116396fe) {
LAB_003e20bc:
            local_12c = -0x32b69840;
          }
          goto LAB_003e0dd4;
        }
        if (-0x26a4146 < local_12c) {
          if (local_12c == -0x26a4145) goto LAB_003e20a8;
          if (local_12c == -0x210a126) {
            uVar11 = DAT_004c95d8 & DAT_004c95dc;
            _objc_release(local_88);
            bVar5 = (uVar11 & 0xb65d8390 ^ 0x256e46d3) / 0x3fe71727 < 0x3a0eb5f1;
            local_12c = 0x4228df5e;
            iVar7 = -0x48058170;
            goto LAB_003e3080;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c == -0x7c3d733) {
          local_12c = 0x40736f73;
          goto LAB_003e0dd4;
        }
        if (local_12c != -0x7472672) goto LAB_003e0dd4;
        uVar11 = (DAT_004c9570 + DAT_004c9574 & 0x38036f40U) * -0x422f2d42;
        bVar4 = 0xfa90f82a < uVar11;
        bVar5 = uVar11 == 0xfa90f82b;
        local_12c = 0x6723af55;
        iVar7 = 0x636ae638;
      }
LAB_003e26c8:
      if (!bVar4 || bVar5) {
        local_12c = iVar7;
      }
      goto LAB_003e0dd4;
    }
    if (-0x54cfb96c < local_12c) {
      if (local_12c < -0x4785c7ce) {
        if (local_12c < -0x4f4506df) {
          if (local_12c == -0x54cfb96b) {
            _objc_msgSend(local_98,PTR_s_name_0048a060);
            local_a8 = _objc_retainAutoreleasedReturnValue();
            local_12c = 0x4e1c7a7c;
          }
          else if (local_12c == -0x537f3e27) {
            uVar11 = DAT_004c9548 & DAT_004c954c;
            _objc_retain(param_1);
            local_12c = -0x2b09d721;
            if (((uVar11 | 0x3cb86678) ^ 0x75c828fd) + 0x335e8387 < 0x53152973) {
              local_12c = -0x537f3e27;
            }
          }
          else if (local_12c == -0x50256e17) {
LAB_003e1d44:
            local_12c = -0x7d996114;
          }
        }
        else if (local_12c < -0x4da34d35) {
          if (local_12c == -0x4f4506df) {
            _objc_retain(param_3);
            _objc_retain(param_4);
            _objc_retain(param_5);
            local_12c = -0x5e384901;
          }
          else if (local_12c == -0x4dba4deb) {
            local_12c = -0x7472672;
          }
        }
        else if (local_12c == -0x4da34d35) {
          _objc_release(local_110);
          local_12c = -0x2cfcc59e;
        }
        else if (local_12c == -0x48058170) {
          local_12c = 0x390bfd3b;
        }
      }
      else if (local_12c < -0x418fbbcf) {
        if (local_12c == -0x4785c7ce) {
          local_12c = 0x711fd818;
        }
        else if (local_12c == -0x472630bc) {
          local_12c = 0x3a21c43e;
        }
        else if (local_12c == -0x42930a9b) {
          uVar11 = 0;
          if (DAT_004c967c != 0) {
            uVar11 = DAT_004c9678 / DAT_004c967c;
          }
          _objc_retain(local_f0);
          uVar11 = (uint)((ulong)((uint)((ulong)uVar11 * 0x6046bfa3 >> 0x3e) * 0x3acb231a) *
                          0x353c3b5f >> 0x3b);
          bVar4 = 0x1b80837b < uVar11;
          bVar5 = uVar11 == 0x1b80837c;
          local_12c = 0x3c34438d;
          iVar7 = -0x472630bc;
          goto LAB_003e26c8;
        }
      }
      else if (local_12c < -0x3f80c2d1) {
        if (local_12c == -0x418fbbcf) {
          _objc_release(local_f0);
          local_12c = -0x7141881a;
        }
        else if (local_12c == -0x4096fba2) {
          local_12c = 0x69aa149f;
        }
      }
      else if (local_12c == -0x3f80c2d1) {
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c0);
        _objc_retainAutoreleasedReturnValue();
        local_12c = 0x2f50e417;
      }
      else if (local_12c == -0x3e3c0eca) {
        _objc_msgSend(PTR_BubbleBoxAssets_0048cad0,PTR_s_svgImageNamed_fromConfig__0048b0e0,param_3,
                      param_5);
        local_f0 = _objc_retainAutoreleasedReturnValue();
        local_12c = 0x333390b8;
      }
      goto LAB_003e0dd4;
    }
    if (-0x6b98f0cb < local_12c) {
      if (local_12c < -0x5e384901) {
        if (local_12c == -0x6b98f0ca) {
          local_12c = -0x5d7c4b40;
          local_120 = local_e8;
        }
        else {
          if (local_12c == -0x6ac87f09) {
            bVar5 = local_f1 == '\0';
            iVar7 = 0x201bc5f6;
            local_12c = 0x56b54a5f;
            goto LAB_003e2d40;
          }
          if (local_12c == -0x630870b4) {
            local_100 = DAT_004d2020;
            bVar5 = 0x3994b0d2 < (DAT_004c9698 ^ DAT_004c969c) * 0x33e8d64e + 0x5ee8c6c2;
            local_12c = -0x630870b4;
            iVar7 = -0x4785c7ce;
            goto LAB_003e3080;
          }
        }
      }
      else if (local_12c < -0x579c0394) {
        if (local_12c == -0x5e384901) {
          uVar11 = DAT_004c9558 ^ DAT_004c955c;
          _objc_retain(param_3);
          _objc_retain(param_4);
          _objc_retain(param_5);
          bVar5 = (uVar11 & 0xb10a1461) == 0x7438b182;
          iVar7 = -0x7c3d733;
LAB_003e214c:
          local_12c = -0x4f4506df;
          if (!bVar5) {
            local_12c = iVar7;
          }
        }
        else if (local_12c == -0x5d7c4b40) {
          _objc_release(param_5);
          _objc_release(param_4);
          _objc_release(param_3);
          _objc_release(param_1);
          _objc_autoreleaseReturnValue(local_120);
          return;
        }
      }
      else if (local_12c == -0x579c0394) {
        local_12c = -0x4da34d35;
LAB_003e2164:
        local_110 = local_88;
      }
      else if (local_12c == -0x56df0a8a) {
        local_12c = 0x69d14747;
      }
      goto LAB_003e0dd4;
    }
    if (-0x7b4ca7ff < local_12c) {
      if (local_12c < -0x7141881a) {
        if (local_12c == -0x7b4ca7fe) {
          bVar5 = 0x23696718 < (DAT_004c95d0 + DAT_004c95d4 + 0xf0c04bc8U & 0xbffed76d | 0x8ffa134c)
          ;
          iVar7 = -0x210a126;
          local_12c = 0x4228df5e;
          goto LAB_003e2d9c;
        }
        if (local_12c == -0x78f5cb04) {
          uVar11 = 0;
          if (DAT_004c9564 != 0) {
            uVar11 = DAT_004c9560 / DAT_004c9564;
          }
          bVar5 = ((uVar11 ^ 0xc09b88d) + 0x68f8b697 | 0xe645aadd) == 0x78c282fe;
          iVar7 = 0x481ec651;
          local_12c = 0x206087d9;
          goto LAB_003e24d0;
        }
      }
      else if (local_12c == -0x7141881a) {
        uVar11 = DAT_004c96a8 ^ DAT_004c96ac;
        _objc_release(local_f0);
        local_12c = -0x101753d;
        if ((uVar11 + 0x13ffe0 & 0xa4cbb059) == 0xdd08646a) {
          local_12c = -0x7141881a;
        }
      }
      else if (local_12c == -0x6dfa82c0) {
        local_12c = 0x54a605a5;
      }
      goto LAB_003e0dd4;
    }
    if (local_12c != -0x7e63c576) {
      if (local_12c == -0x7d996114) {
        bVar5 = 0x31a40aa6 < (DAT_004c9688 + DAT_004c968c ^ 0x280620d3U | 0xc621dd08) + 0x19908bfe;
        local_12c = -0x50256e17;
        iVar7 = 0x58937a30;
        goto LAB_003e3080;
      }
      if (local_12c == -0x7c33c112) {
        local_12c = 0xaea2169;
      }
      goto LAB_003e0dd4;
    }
    bVar5 = 0xf90f67d1 < (DAT_004c9660 + DAT_004c9664 + 0x8792e4dcU & 0x3247d2f2 | 0x22065080);
    iVar7 = -0x56df0a8a;
    local_12c = 0x69d14747;
  }
  else {
    if (0x49087cf0 < local_12c) {
      if (local_12c < 0x636ae638) {
        if (local_12c < 0x520ff0c4) {
          if (0x4dbb8867 < local_12c) {
            if (local_12c == 0x4dbb8868) {
              uVar11 = 0;
              if (DAT_004c9654 != 0) {
                uVar11 = DAT_004c9650 / DAT_004c9654;
              }
              local_12c = 0x28564e99;
              if ((uint)((ulong)(uVar11 + 0x280f1f37) * 0x43c7eb3 >> 0x3a) != 0x536a948e) {
                local_12c = 0x2281f35b;
              }
            }
            else if (local_12c == 0x4dedf1c8) {
              local_12c = -0x2f071058;
            }
            else if (local_12c == 0x4e1c7a7c) {
              bVar5 = 0x85895fdd <
                      ((DAT_004c95b0 - DAT_004c95b4 ^ 0x451209b6U) & 0x455a19f6 ^ 0x790da258);
              iVar7 = 0x782eb49b;
              local_12c = 0x520ff0c4;
              goto LAB_003e2d9c;
            }
            goto LAB_003e0dd4;
          }
          if (local_12c == 0x49087cf1) {
            uVar11 = 0;
            if (DAT_004c95fc != 0) {
              uVar11 = DAT_004c95f8 / DAT_004c95fc;
            }
            local_ab = local_aa & 1;
            bVar5 = 0x83d1d22c < ((uVar11 * -0x9fdbd46 | 0x349354aa) ^ 0x356bdb5);
            local_12c = 0x49087cf1;
            iVar7 = -0x7c33c112;
          }
          else {
            if (local_12c == 0x494c335a) {
              local_12c = -0x630870b4;
              goto LAB_003e0dd4;
            }
            if (local_12c != 0x498b7fc4) goto LAB_003e0dd4;
            uVar11 = 0;
            if (DAT_004c960c != 0) {
              uVar11 = DAT_004c9608 / DAT_004c960c;
            }
            local_b8 = PTR_BubbleBoxConfig_0048c990;
            bVar5 = 0x106f6b66 < (uVar11 + 0x585a6a2c & 0x3728276f) * -0x74e5f445;
            local_12c = 0x498b7fc4;
            iVar7 = -0x2bd22df3;
          }
        }
        else {
          if (0x56b54a5e < local_12c) {
            if (local_12c < 0x5c72373e) {
              if (local_12c == 0x56b54a5f) {
                bVar5 = (DAT_004c9690 - DAT_004c9694 & 0x8daea5aU) == 0xa12403ae;
                local_12c = -0x630870b4;
                iVar7 = 0x494c335a;
                goto LAB_003e2ec0;
              }
              if (local_12c == 0x58937a30) {
                local_12c = 0x2001551;
                local_118 = local_f0;
              }
            }
            else if (local_12c == 0x5c72373e) {
              local_12c = 0x1bb6801d;
            }
            else if (local_12c == 0x5d86ce15) {
              bVar5 = 0x2cae9e5 <
                      ((DAT_004c9580 & DAT_004c9584) * 0x7c6d5eb2 ^ 0x313c64ad | 0x42c31312);
              local_12c = 0x38cdca72;
              goto LAB_003e2f1c;
            }
            goto LAB_003e0dd4;
          }
          if (local_12c == 0x520ff0c4) {
            uVar11 = DAT_004c95b8 | DAT_004c95bc;
            local_a9 = local_a8 == 0;
            _objc_release();
            bVar5 = 0x4af3d753 < (uVar11 | 0xbde1e63d) + 0x1b90030b;
            local_12c = 0x782eb49b;
            iVar7 = 0x7d2fffb1;
          }
          else {
            if (local_12c != 0x54a605a5) {
              if (local_12c == 0x55c3ff89) {
                local_12c = 0x49087cf1;
              }
              goto LAB_003e0dd4;
            }
            bVar5 = 0x9ba456ce <
                    (DAT_004c95a0 * DAT_004c95a4 * -0x1ea980db ^ 0x7af9e891U) + 0xaf5d462e;
            local_12c = -0x4096fba2;
            iVar7 = 0x69aa149f;
          }
        }
      }
      else {
        if (local_12c < 0x69d14747) {
          if (local_12c < 0x662baccb) {
            if (local_12c != 0x636ae638) {
              if (local_12c == 0x64d0613a) goto LAB_003e1bf4;
              if (local_12c == 0x65c4c74a) {
                DAT_004d2008 = '\x01';
                local_12c = 0x3392a713;
              }
              goto LAB_003e0dd4;
            }
            uVar11 = 0;
            if (DAT_004c957c != 0) {
              uVar11 = DAT_004c9578 / DAT_004c957c;
            }
            _objc_msgSend(local_78,local_80);
            local_88 = _objc_retainAutoreleasedReturnValue();
            bVar5 = (uVar11 & 0xfb6e9ffd | 0xfb260bd5) == 0xfbd0ff48;
            iVar7 = 0x6723af55;
            local_12c = 0x27d879ac;
          }
          else {
            if (local_12c < 0x67d3e684) {
              if (local_12c == 0x662baccb) {
                _objc_msgSend(local_b8,PTR_s_shared_00489458);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,PTR_s_assetsLoadMode_0048af40);
                local_12c = 0x24911753;
              }
              else if (local_12c == 0x6723af55) {
                _objc_msgSend(local_78,local_80);
                _objc_retainAutoreleasedReturnValue();
                local_12c = 0x636ae638;
              }
              goto LAB_003e0dd4;
            }
            if (local_12c != 0x67d3e684) {
              if (local_12c == 0x69aa149f) {
                local_99 = local_98 == 0;
                bVar5 = 0xfa2247ae <
                        (DAT_004c95a8 * DAT_004c95ac & 0x6d44d2baU ^ 0x6dd7446e) / 0x382108f3;
                iVar7 = -0x4096fba2;
                local_12c = 0x7e2fa4a4;
                goto LAB_003e2d9c;
              }
              goto LAB_003e0dd4;
            }
            _objc_release(local_c8);
            bVar5 = local_d9 == 0;
            iVar7 = -0x2cfcc59e;
            local_12c = -0x3e3c0eca;
          }
LAB_003e2d40:
          if (bVar5) {
            local_12c = iVar7;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c < 0x7664dcab) {
          if (local_12c == 0x69d14747) {
            local_f1 = local_f0 == 0;
            bVar5 = 0x13e362e4 < (DAT_004c9668 + DAT_004c966c + 0xbc4d04a2U & 0xe9556d18);
            local_12c = -0x56df0a8a;
            iVar7 = -0x6ac87f09;
            goto LAB_003e3080;
          }
          if (local_12c == 0x70d96e72) {
            local_90 = PTR_BubbleBoxMgr_0048c9a8;
            bVar5 = 0xc79e90a2 <
                    (DAT_004c9588 * DAT_004c958c + 0xedc9e893U ^ 0x4a3c6df5) * -0x3868d20e;
            local_12c = 0x32813bec;
LAB_003e2f1c:
            if (bVar5) {
              local_12c = 0x70d96e72;
            }
          }
          else if (local_12c == 0x711fd818) {
            local_108 = PTR_s_adaptedWeSVGImageWithName_data_c_0048bf10;
            local_12c = 0x4cc5924;
          }
          goto LAB_003e0dd4;
        }
        if (0x7d2fffb0 < local_12c) {
          if (local_12c == 0x7d2fffb1) {
            local_12c = 0x43d11ee4;
          }
          else if (local_12c == 0x7e2fa4a4) {
            bVar5 = local_99 == '\0';
            local_12c = 0x3086bc4c;
            iVar7 = -0x54cfb96b;
            goto LAB_003e2ec0;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c != 0x7664dcab) {
          if (local_12c == 0x782eb49b) {
            _objc_release(local_a8);
            local_12c = 0x520ff0c4;
          }
          goto LAB_003e0dd4;
        }
        bVar5 = 0xe8b29820 < (DAT_004c9610 ^ DAT_004c9614) * 0xeff1f28 + 0x57889ba0;
        local_12c = 0x24911753;
        iVar7 = 0x662baccb;
      }
LAB_003e3080:
      if (bVar5) {
        local_12c = iVar7;
      }
      goto LAB_003e0dd4;
    }
    if (local_12c < 0x32813bec) {
      if (local_12c < 0x27d879ac) {
        if (local_12c < 0x206087d9) {
          if (local_12c == 0x1c862720) {
            iVar7 = DAT_004c9638 * DAT_004c963c;
            _objc_msgSend(local_d8,PTR_s_currentBubble_0048a848);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_d8);
            puVar3 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(uVar8,PTR_s_isMergeBubble_0048bef0);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar9,puVar2);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            bVar6 = _objc_msgSend(uVar10,puVar3);
            _objc_release(uVar10);
            _objc_release(uVar9);
            local_d9 = bVar6 & DAT_004d2009;
            _objc_release(uVar8);
            local_12c = 0x1c862720;
            if ((iVar7 + 0xd8024838U & 0xfec6f75d) / 0x48e91665 < 0x515b02e1) {
              local_12c = 0x40899e3;
            }
          }
          else if (local_12c == 0x1f4d42ac) {
            _objc_msgSend(local_90,local_80);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar8,PTR_s_currentBubble_0048a848);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar8);
            local_12c = -0x1acdd44;
          }
          else if (local_12c == 0x201bc5f6) {
            bVar5 = ((DAT_004c9670 * DAT_004c9674 ^ 0x12110a44U) & 0xd6914b5c) == 0x8c238afe;
            iVar7 = -0x42930a9b;
            local_12c = 0x3c34438d;
LAB_003e24d0:
            if (!bVar5) {
              local_12c = iVar7;
            }
          }
          goto LAB_003e0dd4;
        }
        if (local_12c == 0x206087d9) {
          local_12c = 0x481ec651;
          goto LAB_003e0dd4;
        }
        if (local_12c == 0x2281f35b) {
          local_12c = -0x6b98f0ca;
          if (0xe0635a51 < ((DAT_004c9658 - DAT_004c965c) + 0x202c5b04U) / 0x10cb9f6e + 0xb5a8f65e)
          {
            local_12c = 0x2281f35b;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c != 0x24911753) goto LAB_003e0dd4;
        uVar11 = 0;
        if (DAT_004c961c != 0) {
          uVar11 = DAT_004c9618 / DAT_004c961c;
        }
        local_c0 = PTR_s_shared_00489458;
        _objc_msgSend(local_b8);
        local_c8 = _objc_retainAutoreleasedReturnValue();
        local_d0 = _objc_msgSend(local_c8,PTR_s_assetsLoadMode_0048af40);
        bVar5 = 0x87d2f894 < (uVar11 + 0x7dac0306 | 0x4247b0cd);
        iVar7 = 0x24911753;
        local_12c = 0x4659005d;
      }
      else {
        if (local_12c < 0x2f50e417) {
          if (local_12c == 0x27d879ac) {
            local_12c = 0x316d4295;
          }
          else if (local_12c == 0x28564e99) {
            local_12c = 0x2281f35b;
          }
          else if (local_12c == 0x2b5bf7f5) {
LAB_003e1bf4:
            local_12c = 0x498b7fc4;
          }
          goto LAB_003e0dd4;
        }
        if (0x3086bc4b < local_12c) {
          if (local_12c == 0x3086bc4c) {
            _objc_release(local_98);
            local_12c = -0x21cf0b81;
          }
          else if (local_12c == 0x316d4295) {
            iVar7 = _objc_msgSend(local_88,PTR_s_enabled_0048a890);
            local_12c = 0x5d86ce15;
            if (iVar7 == 0) {
              local_12c = -0x4da34d35;
            }
            goto LAB_003e2164;
          }
          goto LAB_003e0dd4;
        }
        if (local_12c != 0x2f50e417) {
          if (local_12c == 0x306b058a) {
            uVar11 = 0;
            if (DAT_004c9554 != 0) {
              uVar11 = DAT_004c9550 / DAT_004c9554;
            }
            bVar5 = ((uVar11 | 0x7e78aac2) * -0x51c0f2f2) / 0x33fc8db9 == 0x19c53a09;
            iVar7 = -0x5e384901;
            goto LAB_003e214c;
          }
          goto LAB_003e0dd4;
        }
        uVar11 = 0;
        if (DAT_004c962c != 0) {
          uVar11 = DAT_004c9628 / DAT_004c962c;
        }
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_c0);
        local_d8 = _objc_retainAutoreleasedReturnValue();
        bVar5 = 0x75a73762 < (uVar11 & 0xc015ed0) * -0x1daf89a1;
        iVar7 = -0x3f80c2d1;
        local_12c = -0x26485ac0;
      }
    }
    else if (local_12c < 0x3c34438d) {
      if (local_12c < 0x36ca861e) {
        if (local_12c == 0x32813bec) {
          local_12c = -0x22b78cb5;
        }
        else if (local_12c == 0x333390b8) {
          local_12c = -0x7e63c576;
        }
        else if (local_12c == 0x3392a713) {
          _objc_release(local_98);
          local_12c = -0x7b4ca7fe;
        }
        goto LAB_003e0dd4;
      }
      if (0x390bfd3a < local_12c) {
        if (local_12c == 0x390bfd3b) goto LAB_003e20bc;
        if (local_12c == 0x3a21c43e) goto LAB_003e1d44;
        goto LAB_003e0dd4;
      }
      if (local_12c != 0x36ca861e) {
        if (local_12c == 0x38cdca72) {
          local_12c = 0x70d96e72;
        }
        goto LAB_003e0dd4;
      }
      bVar5 = 0x8b7cb576 <
              (uint)((ulong)(DAT_004c95c8 + DAT_004c95cc + 0x2e307051) * 0x5ee1891 >> 0x3a);
      iVar7 = -0x26a4145;
      local_12c = -0x579c0394;
    }
    else {
      if (local_12c < 0x43d11ee4) {
        if (local_12c == 0x3c34438d) {
          _objc_retain(local_f0);
          local_12c = -0x42930a9b;
        }
        else if (local_12c == 0x40736f73) {
          bVar5 = DAT_004d2008 == '\0';
          local_12c = 0x390bfd3b;
          iVar7 = -0x78f5cb04;
LAB_003e2ec0:
          if (bVar5) {
            local_12c = iVar7;
          }
        }
        else if (local_12c == 0x4228df5e) {
          _objc_release(local_88);
          local_12c = -0x210a126;
        }
        goto LAB_003e0dd4;
      }
      if (local_12c < 0x4659005d) {
        if (local_12c == 0x43d11ee4) {
          bVar5 = local_a9 == '\0';
          local_12c = 0x3086bc4c;
          iVar7 = 0x65c4c74a;
          goto LAB_003e2ec0;
        }
        if (local_12c != 0x44c7254d) goto LAB_003e0dd4;
        bVar5 = 0x41a32bba <
                (((DAT_004c9630 * DAT_004c9634 | 0x3c3c3c3cU) ^ 0x42008000) & 0x4a87840a);
        iVar7 = 0x1c862720;
        local_12c = -0x1c2b982d;
      }
      else {
        if (local_12c == 0x4659005d) {
          local_12c = -0x2603c8e6;
          goto LAB_003e0dd4;
        }
        if (local_12c != 0x481ec651) goto LAB_003e0dd4;
        local_78 = PTR_BubbleBoxConfig_0048c990;
        local_80 = PTR_s_shared_00489458;
        bVar5 = 0xcaef04a2 < (DAT_004c9568 & DAT_004c956c) + 0x94a8cc72;
        iVar7 = 0x206087d9;
        local_12c = -0x4dba4deb;
      }
    }
  }
LAB_003e2d9c:
  if (bVar5) {
    local_12c = iVar7;
  }
  goto LAB_003e0dd4;
}



// #####################################
// ##### FUN_003efe54 @ 003efe54
// #####################################

long FUN_003efe54(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  int local_2bc;
  long local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  long local_290;
  long local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  long local_260;
  undefined *local_258;
  code *pcStack_250;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  undefined **local_230;
  byte local_221;
  uint local_220;
  char local_219;
  ulong local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined *local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined8 local_150;
  char local_141;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  char local_119;
  long local_118;
  undefined *local_110;
  code *pcStack_108;
  byte local_f9;
  undefined8 local_f8;
  char local_e9;
  long local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  byte local_ca;
  byte local_c9;
  undefined *local_c8;
  code *pcStack_c0;
  char local_b1;
  long local_b0;
  char local_a1;
  long local_a0;
  undefined *local_98;
  char local_89;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  char local_6f;
  byte local_6e;
  char local_6d;
  
  iVar4 = DAT_004d205c;
  local_2bc = -0xdf15470;
LAB_003eff2c:
  puVar2 = PTR_s_currentBubble_0048a848;
  if (local_2bc < -0x8e5224) {
    if (-0x46ee99bd < local_2bc) {
      if (-0x1a1dafb1 < local_2bc) {
        if (-0xc5bffab < local_2bc) {
          if (local_2bc < -0x652c0fc) {
            if (local_2bc < -0x9733006) {
              if (local_2bc == -0xc5bffaa) {
                local_2bc = -0xdbc6e4f;
              }
              else if (local_2bc == -0xc272663) {
                _objc_msgSend(local_a0,PTR_s_name_0048a060);
                _objc_retainAutoreleasedReturnValue();
                local_2bc = 0x3b182291;
              }
              else if (local_2bc == -0xb515a11) {
                local_2bc = -0x635837bd;
              }
            }
            else if (local_2bc < -0x674c4ae) {
              if (local_2bc == -0x9733006) {
                local_2bc = 0x1b8e405e;
                if (((uint)(DAT_004c9ce8 * DAT_004c9cec) / 0x256becfd | 0x5766f0e8) == 0x974bf40c) {
                  local_2bc = -0x9733006;
                }
              }
              else if (local_2bc == -0x6ed978a) {
                _objc_msgSend(local_98,local_80);
                uVar8 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar8,PTR_s_currentBubble_0048a848);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar8);
                local_2bc = 0x2c76a00e;
              }
            }
            else if (local_2bc == -0x674c4ae) {
              local_2bc = 0x568345b;
            }
            else if (local_2bc == -0x671e659) {
              _objc_release(local_88);
              local_2bc = 0x656925d3;
            }
          }
          else if (local_2bc < -0x31c1f94) {
            if (local_2bc == -0x652c0fc) {
              uVar11 = (uint)((ulong)(DAT_004c9d40 - DAT_004c9d44 | 0xa78bb4af) * 0x87b73857 >> 0x3e
                             ) | 0xc44554d8;
              bVar5 = 0xceb6f0fa < uVar11;
              bVar6 = uVar11 == 0xceb6f0fb;
              iVar12 = -0x45ee972c;
              local_2bc = 0x5882c8ef;
              goto LAB_003f8f1c;
            }
            if (local_2bc == -0x5fe5459) {
              _objc_release(local_160);
              _objc_getClass(&DAT_004c88d4);
              local_2bc = -0x5232d66a;
            }
            else if (local_2bc == -0x3c2c2ac) {
              uVar11 = (DAT_004c9f78 - DAT_004c9f7c ^ 0x14002c28U | 0xeb779307) + 0x4f75a433;
              local_248 = PTR_s_safeSetObject_forKey__0048bf60;
              bVar5 = 0x9d344f65 < uVar11;
              bVar6 = uVar11 == 0x9d344f66;
              local_2bc = -0x437c2fe5;
              iVar12 = -0x771f26a8;
              goto LAB_003f8750;
            }
          }
          else if (local_2bc < -0x18287ff) {
            if (local_2bc == -0x31c1f94) {
              bVar6 = 0x3028739 < (DAT_004c9dd8 + DAT_004c9ddc ^ 0xfe1036b1U) + 0xc89fd9e2;
              local_2bc = 0x30572e0c;
              iVar12 = -0x51451407;
LAB_003f6d90:
              if (bVar6) {
                local_2bc = iVar12;
              }
            }
            else if (local_2bc == -0x30815a2) {
              local_2bc = 0x71882101;
            }
          }
          else {
            if (local_2bc == -0x18287ff) {
              uVar11 = DAT_004c9da8 + DAT_004c9dac;
              _objc_release(local_a0);
              bVar6 = (uVar11 & 0xd52d8fef | 0x540d8e6f) == 0x141da389;
              local_2bc = 0x5f5685ea;
              iVar12 = 0x11f96864;
              goto LAB_003f818c;
            }
            if (local_2bc == -0xaeccbc) {
              local_2bc = -0x1e18aee6;
            }
          }
          goto LAB_003eff2c;
        }
        if (local_2bc < -0x11034199) {
          if (local_2bc < -0x13e87073) {
            if (local_2bc == -0x1a1dafb0) {
              local_258 = PTR_s_bubbleInfoWithType_position_isSe_0048bf30;
              pcStack_250 = DAT_004d2030;
              local_2bc = 0x6e60ff93;
            }
            else if (local_2bc == -0x18eec568) {
              uVar11 = DAT_004c9ea8 & DAT_004c9eac;
              _objc_msgSend(local_138,PTR_s_objectForKey__0048a370,local_128);
              local_140 = _objc_retainAutoreleasedReturnValue();
              local_141 = local_140 == 0;
              local_2bc = -0x7998269a;
              if (0x11578323 <
                  (uint)((ulong)((uVar11 ^ 0x9be24e4f) + 0x64001b85) * 0x2ca1b587 >> 0x3d)) {
                local_2bc = -0x18eec568;
              }
            }
            else if (local_2bc == -0x181d9a7a) {
              local_2bc = 0x45d99f2;
            }
            goto LAB_003eff2c;
          }
          if (-0x135137ef < local_2bc) {
            if (local_2bc == -0x135137ee) {
              local_2bc = 0x597599c9;
            }
            else if (local_2bc == -0x12a048cd) {
              _objc_msgSend(local_170,local_1f8,local_208);
              local_2bc = -0x58aaa729;
            }
            goto LAB_003eff2c;
          }
          if (local_2bc != -0x13e87073) {
            if (local_2bc == -0x13b9fc35) {
              bVar6 = 0x1c16e9ca <
                      ((DAT_004c9d30 & DAT_004c9d34) + 0x1f20a343 & 0xe4600bf1) + 0xd7010b70;
              iVar12 = -0x27c733ee;
              local_2bc = 0x15088f55;
              goto LAB_003f8040;
            }
            goto LAB_003eff2c;
          }
          bVar6 = param_4 == 2;
          iVar12 = -0x7c342aa3;
          local_2bc = -0x610ba6a3;
        }
        else {
          if (local_2bc < -0xfb00a75) {
            if (local_2bc == -0x11034199) {
              local_e9 = local_e8 == 1;
              uVar11 = ((DAT_004c9de8 - DAT_004c9dec ^ 0xdf33cfd4U) + 0x73906864) / 0x6051a3db;
              bVar5 = uVar11 < 0x18828c56;
              bVar6 = uVar11 == 0x18828c55;
              iVar12 = 0x4b0b809d;
              local_2bc = -0x30815a2;
              goto LAB_003f8f1c;
            }
            if (local_2bc != -0x109742ab) {
              if (local_2bc == -0xffd089e) {
                local_2bc = -0x232780e7;
              }
              goto LAB_003eff2c;
            }
            uVar11 = ((DAT_004c9d08 | DAT_004c9d0c) & 0x3de8b614) / 0x1f654e5c | 0xd743ccee;
            DAT_004c8483 = DAT_004c8463 ^ 0xbf;
            DAT_004c8484 = DAT_004c8464 ^ 0xa3;
            DAT_004c8485 = DAT_004c8465 ^ 0x3e;
            DAT_004c8486 = DAT_004c8466 ^ 0x4c;
            DAT_004c8487 = DAT_004c8467 ^ 0x84;
            DAT_004c8488 = DAT_004c8468 ^ 0xc9;
            DAT_004c8489 = DAT_004c8469 ^ 0x80;
            DAT_004c848a = DAT_004c846a ^ 0xf0;
            DAT_004c848b = DAT_004c846b ^ 0xb0;
            DAT_004c848c = DAT_004c846c ^ 0xe6;
            DAT_004c848d = DAT_004c846d ^ 0x2e;
            DAT_004c848e = DAT_004c846e ^ 0xde;
            DAT_004c848f = DAT_004c846f ^ 0x23;
            DAT_004c8490 = DAT_004c8470 ^ 0x69;
            DAT_004c8491 = DAT_004c8471 ^ 0x6e;
            DAT_004c8492 = DAT_004c8472 ^ 0x8b;
            DAT_004c8493 = DAT_004c8473 ^ 0xea;
            DAT_004c8494 = DAT_004c8474 ^ 0x81;
            DAT_004c8495 = DAT_004c8475 ^ 0x10;
            DAT_004c8496 = DAT_004c8476 ^ 0x86;
            DAT_004c8497 = DAT_004c8477 ^ 0x3a;
            DAT_004c8498 = DAT_004c8478 ^ 0xbb;
            DAT_004c8499 = DAT_004c8479 ^ 0xda;
            DAT_004c849a = DAT_004c847a ^ 0xe4;
            DAT_004c849b = DAT_004c847b ^ 0x56;
            DAT_004c849c = DAT_004c847c ^ 0xf5;
            DAT_004c849d = DAT_004c847d ^ 4;
            DAT_004c849e = DAT_004c847e ^ 0x71;
            DAT_004c86c0 = DAT_004c86a0 ^ 0xd4;
            DAT_004c86c1 = DAT_004c86a1 ^ 0x72;
            DAT_004c86c2 = DAT_004c86a2 ^ 0xbc;
            DAT_004c86c3 = DAT_004c86a3 ^ 0x89;
            DAT_004c86c4 = DAT_004c86a4 ^ 0xaa;
            DAT_004c86c5 = DAT_004c86a5 ^ 0xc1;
            DAT_004c86c6 = DAT_004c86a6 ^ 0xd5;
            DAT_004c86c7 = DAT_004c86a7 ^ 0x73;
            DAT_004c86c8 = DAT_004c86a8 ^ 0x67;
            DAT_004c86c9 = DAT_004c86a9 ^ 0x36;
            DAT_004c86ca = DAT_004c86aa ^ 0x2c;
            DAT_004c86cb = DAT_004c86ab ^ 0xdb;
            DAT_004c86cc = DAT_004c86ac ^ 0x44;
            DAT_004c86cd = DAT_004c86ad ^ 99;
            DAT_004c86ce = DAT_004c86ae ^ 0xce;
            DAT_004c86cf = DAT_004c86af ^ 0xe8;
            DAT_004c86d0 = DAT_004c86b0 ^ 0x5f;
            DAT_004c86d1 = DAT_004c86b1 ^ 0x41;
            DAT_004c86d2 = DAT_004c86b2 ^ 0x41;
            DAT_004c86d3 = DAT_004c86b3 ^ 0x5a;
            DAT_004c86d4 = DAT_004c86b4 ^ 0xd3;
            DAT_004c86d5 = DAT_004c86b5 ^ 0x8b;
            DAT_004c86d6 = DAT_004c86b6 ^ 0x6d;
            DAT_004c86d7 = DAT_004c86b7 ^ 0x3b;
            DAT_004c86d8 = DAT_004c86b8 ^ 200;
            DAT_004c86d9 = DAT_004c86b9 ^ 0xf1;
            DAT_004c86da = DAT_004c86ba ^ 0xb7;
            DAT_004c86db = DAT_004c86bb ^ 0xd0;
            DAT_004c8440 = DAT_004c8420 ^ 0x86;
            DAT_004c8441 = DAT_004c8421 ^ 0xf5;
            DAT_004c8442 = DAT_004c8422 ^ 0xea;
            DAT_004c8443 = DAT_004c8423 ^ 0xa1;
            DAT_004c8444 = DAT_004c8424 ^ 0x87;
            DAT_004c8445 = DAT_004c8425 ^ 0xf8;
            DAT_004c8446 = DAT_004c8426 ^ 0xb;
            DAT_004c8447 = DAT_004c8427 ^ 0x75;
            DAT_004c8448 = DAT_004c8428 ^ 0x44;
            DAT_004c8449 = DAT_004c8429 ^ 0xcd;
            DAT_004c844a = DAT_004c842a ^ 0x52;
            DAT_004c844b = DAT_004c842b ^ 0xa0;
            DAT_004c844c = DAT_004c842c ^ 0x13;
            DAT_004c844d = DAT_004c842d ^ 0x30;
            DAT_004c844e = DAT_004c842e ^ 0x65;
            DAT_004c844f = DAT_004c842f ^ 0x1b;
            DAT_004c8450 = DAT_004c8430 ^ 0xd;
            DAT_004c8451 = DAT_004c8431 ^ 0x66;
            DAT_004c8452 = DAT_004c8432 ^ 0x46;
            DAT_004c8453 = DAT_004c8433 ^ 0xfd;
            DAT_004c8454 = DAT_004c8434 ^ 0x16;
            DAT_004c8455 = DAT_004c8435 ^ 0xe3;
            DAT_004c8456 = DAT_004c8436 ^ 0x40;
            DAT_004c8457 = DAT_004c8437 ^ 0x99;
            DAT_004c8458 = DAT_004c8438 ^ 0x15;
            DAT_004c8459 = DAT_004c8439 ^ 0x62;
            DAT_004c845a = DAT_004c843a ^ 0x3f;
            DAT_004c845b = DAT_004c843b ^ 0xd6;
            DAT_004c845c = DAT_004c843c ^ 5;
            DAT_004c845d = DAT_004c843d ^ 0xec;
            DAT_004c845e = DAT_004c843e ^ 0xe4;
            bVar5 = 0x9af6e495 < uVar11;
            bVar6 = uVar11 == 0x9af6e496;
            iVar12 = -0x5885b9cb;
            local_2bc = 0x6f3ff952;
            goto LAB_003f8f1c;
          }
          if (local_2bc < -0xdf15470) {
            if (local_2bc == -0xfb00a75) {
              local_2bc = 0x37beb941;
            }
            else if (local_2bc == -0xf2b79a9) {
              uVar11 = DAT_004c9f88 & DAT_004c9f8c;
              _objc_msgSend(local_138,local_248,local_158,local_128);
              bVar6 = (uVar11 ^ 0x4050088 | 0x7bb8ff77) == 0x476c87fb;
              iVar12 = -0x644ac6f5;
              local_2bc = 0x618fcd17;
              goto LAB_003f8794;
            }
            goto LAB_003eff2c;
          }
          if (local_2bc != -0xdf15470) {
            if (local_2bc == -0xdbc6e4f) {
              local_c8 = PTR_s_bubbleInfoWithType_position_isSe_0048bf30;
              pcStack_c0 = DAT_004d2030;
              local_2bc = 0x59d7fb65;
            }
            goto LAB_003eff2c;
          }
          bVar6 = ((DAT_004c9cd0 ^ DAT_004c9cd4) + 0x976cd239 & 0xbb64fb2 | 0x13449b2) == 0x73bc3014
          ;
          iVar12 = -0x635837bd;
          local_2bc = -0xb515a11;
        }
LAB_003f6eb0:
        if (!bVar6) {
          local_2bc = iVar12;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < -0x2fc6e6db) {
        if (local_2bc < -0x3b2c6ddf) {
          if (local_2bc < -0x4181c562) {
            if (local_2bc == -0x46ee99bc) {
              bVar6 = 0x304c9cc8 < ((DAT_004c9e20 & DAT_004c9e24) * 0x3c7856e9 | 0x96ef96b2);
              iVar12 = 0x6996ea7;
              local_2bc = -0x73dbf952;
              goto LAB_003f8040;
            }
            if (local_2bc == -0x45ee972c) {
              local_98 = PTR_BubbleBoxMgr_0048c9a8;
              bVar6 = DAT_004c9d48 * DAT_004c9d4c == 0x4634b459;
              iVar12 = 0x5882c8ef;
              local_2bc = -0x6944055b;
              goto LAB_003f8794;
            }
            if (local_2bc == -0x437c2fe5) {
              local_2bc = -0x3c2c2ac;
            }
          }
          else if (local_2bc < -0x3db2058f) {
            if (local_2bc == -0x4181c562) {
              DAT_004d205c = 1;
              local_2bc = -0x181d9a7a;
            }
            else if (local_2bc == -0x3f43b346) {
              bVar6 = 0x84bc2063 <
                      (((DAT_004c9e88 | DAT_004c9e8c) ^ 0x1b2cb1f) + 0x48c1f083 ^ 0x92451366);
              local_2bc = -0x3f43b346;
              iVar12 = 0x2846c90c;
              goto LAB_003f6d90;
            }
          }
          else {
            if (local_2bc == -0x3db2058f) {
              bVar6 = local_6f == '\0';
              local_2bc = 0x656925d3;
              iVar12 = 0x6621a8f8;
              goto LAB_003f86f0;
            }
            if (local_2bc == -0x3d070024) {
              bVar6 = SBORROW8(param_4,1);
              lVar1 = param_4 + -1;
              iVar12 = -0x79eae668;
              local_2bc = -0x34a2cd02;
LAB_003f2e34:
              if (lVar1 < 0 == bVar6) {
                local_2bc = iVar12;
              }
            }
          }
        }
        else if (local_2bc < -0x3733a452) {
          if (local_2bc == -0x3b2c6ddf) {
            local_2bc = 0x615cd3bc;
            if ((uint)((ulong)((DAT_004c9ea0 & DAT_004c9ea4) + 0x5ab989e0) * 0x208c50fb >> 0x3c) *
                0x4a21ae14 != 0x51f99be4) {
              local_2bc = -0x18eec568;
            }
          }
          else if (local_2bc == -0x3b0d4dd4) {
            uVar11 = DAT_004c9d18 ^ DAT_004c9d1c;
            _objc_retain(param_1);
            local_6f = DAT_004d2008;
            local_2bc = -0x3b0d4dd4;
            if ((uVar11 | 0x1148623f) * -0x279d2b2c + 0x1909304c < 0x7d6f18e0) {
              local_2bc = 0x70febd25;
            }
          }
          else if ((local_2bc == -0x3aa9232f) &&
                  (local_2bc = 0x5e2e2559,
                  ((DAT_004c9ce0 | DAT_004c9ce4) ^ 0x800c304 | 0xf7c730c2) != 0xc56963c8)) {
            local_2bc = -0x9733006;
          }
        }
        else if (local_2bc < -0x35470fda) {
          if (local_2bc == -0x3733a452) {
            local_2bc = -0x504028c9;
          }
          else if (local_2bc == -0x363a9d66) {
            DAT_004c88d4 = DAT_004c88c8 ^ 0x3a;
            DAT_004c88d5 = DAT_004c88c9 ^ 0x24;
            DAT_004c88d6 = DAT_004c88ca ^ 0x5d;
            DAT_004c88d7 = DAT_004c88cb ^ 0x8b;
            DAT_004c88d8 = DAT_004c88cc ^ 0x7e;
            DAT_004c88d9 = DAT_004c88cd ^ 0xb;
            DAT_004c88da = DAT_004c88ce ^ 0xf2;
            DAT_004c88db = DAT_004c88cf ^ 0xc3;
            DAT_004c88dc = DAT_004c88d0 ^ 0xb6;
            DAT_004c88dd = DAT_004c88d1 ^ 0x54;
            DAT_004c88de = DAT_004c88d2 ^ 0x22;
            DAT_004c88df = DAT_004c88d3 ^ 0x6f;
            DAT_004c88a0 = DAT_004c8870 ^ 0x8e;
            DAT_004c88a1 = DAT_004c8871 ^ 0xd1;
            DAT_004c88a2 = DAT_004c8872 ^ 9;
            DAT_004c88a3 = DAT_004c8873 ^ 0x53;
            DAT_004c88a4 = DAT_004c8874 ^ 4;
            DAT_004c88a5 = DAT_004c8875 ^ 0xdc;
            DAT_004c88a6 = DAT_004c8876 ^ 10;
            DAT_004c88a7 = DAT_004c8877 ^ 0x55;
            DAT_004c88a8 = DAT_004c8878 ^ 0x35;
            DAT_004c88a9 = DAT_004c8879 ^ 0x4f;
            DAT_004c88aa = DAT_004c887a ^ 99;
            DAT_004c88ab = DAT_004c887b ^ 0x3e;
            DAT_004c88ac = DAT_004c887c ^ 0x27;
            DAT_004c88ad = DAT_004c887d ^ 0xd3;
            DAT_004c88ae = DAT_004c887e ^ 0x3a;
            DAT_004c88af = DAT_004c887f ^ 0x98;
            DAT_004c88b0 = DAT_004c8880 ^ 0x76;
            DAT_004c88b1 = DAT_004c8881 ^ 0xf6;
            DAT_004c88b2 = DAT_004c8882 ^ 0x20;
            DAT_004c88b3 = DAT_004c8883 ^ 0x3d;
            DAT_004c88b4 = DAT_004c8884 ^ 0x72;
            DAT_004c88b5 = DAT_004c8885 ^ 0xc1;
            DAT_004c88b6 = DAT_004c8886 ^ 0x2b;
            DAT_004c88b7 = DAT_004c8887 ^ 0x56;
            DAT_004c88b8 = DAT_004c8888 ^ 0xb4;
            DAT_004c88b9 = DAT_004c8889 ^ 0x84;
            DAT_004c88ba = DAT_004c888a ^ 0x6b;
            DAT_004c88bb = DAT_004c888b ^ 0xd7;
            DAT_004c88bc = DAT_004c888c ^ 0xd5;
            DAT_004c88bd = DAT_004c888d ^ 0xe4;
            DAT_004c88be = DAT_004c888e ^ 0xee;
            local_6e = DAT_004c888f;
            local_2bc = 0x2c28bb4e;
          }
        }
        else {
          if (local_2bc == -0x35470fda) {
            uVar11 = (DAT_004c9e48 * DAT_004c9e4c & 0x2f836ac3U) * -0x65e4c0bb & 0x7f50f323;
            local_110 = PTR_s_bubbleInfoWithType_position_isSe_0048bf30;
            pcStack_108 = DAT_004d2030;
            bVar5 = 0x9f10d961 < uVar11;
            bVar6 = uVar11 == 0x9f10d962;
            local_2bc = -0x597fc2a3;
            iVar12 = 0x47d95cdd;
            goto LAB_003f8750;
          }
          if (local_2bc == -0x34a2cd02) {
            bVar6 = param_4 == 0;
            iVar12 = -0x7c342aa3;
            local_2bc = -0x61783dbb;
            goto LAB_003f6eb0;
          }
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < -0x248e57f4) {
        if (-0x2a86e889 < local_2bc) {
          if (local_2bc < -0x2730ea49) {
            if (local_2bc == -0x2a86e888) {
              local_2bc = 0x53ee7af7;
            }
            else if (local_2bc == -0x27c733ee) {
              uVar11 = DAT_004c9d38 - DAT_004c9d3c;
              _objc_msgSend(local_78,local_80);
              local_88 = _objc_retainAutoreleasedReturnValue();
              local_89 = _objc_msgSend(local_88,PTR_s_enabled_0048a890);
              bVar6 = (int)((long)((ulong)uVar11 * 0xb671551f) >> 0x3f) * -0x42e9c40e == 0xeb9f755;
              local_2bc = -0x27c733ee;
              iVar12 = 0x1de14878;
              goto LAB_003f818c;
            }
          }
          else if (local_2bc == -0x2730ea49) {
            local_2bc = 0x4e559fac;
          }
          else if (local_2bc == -0x27238e45) {
            local_2bc = 0xd7412a4;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc == -0x2fc6e6db) {
          local_2bc = -0x555eb124;
          goto LAB_003eff2c;
        }
        if (local_2bc == -0x2d6a18c2) {
          local_2bc = 0x4bafe128;
          goto LAB_003eff2c;
        }
        if (local_2bc != -0x2c16e7b8) goto LAB_003eff2c;
        local_1b8 = PTR_s_parseFloatFromValues__0048bc48;
        bVar6 = 0xfcd08009 <
                (uint)((ulong)((DAT_004c9ef8 + DAT_004c9efc | 0xc7a163bU) * -0x5c7c0648) *
                       0x890b269b >> 0x3f);
        iVar12 = -0x7681c976;
        local_2bc = 0x61f05168;
      }
      else {
        if (-0x232780e8 < local_2bc) {
          if (local_2bc < -0x1e18aee6) {
            if (local_2bc == -0x232780e7) {
              local_c9 = DAT_004d2009;
              local_2bc = -0x8e5224;
              if (0xb04620c6 < ((DAT_004c9dc8 ^ DAT_004c9dcc) & 0x103a6034) + 0x96e2d090) {
                local_2bc = -0x232780e7;
              }
            }
            else if (local_2bc == -0x21165b47) {
              local_220 = 0x3f01c3f >> (ulong)((uint)local_218 & 0x1f);
              local_2bc = -0x68e36f61;
            }
          }
          else if (local_2bc == -0x1e18aee6) {
            _objc_msgSend(param_1,local_130,&PTR____CFConstantStringClassReference_004c8a80);
            local_138 = _objc_retainAutoreleasedReturnValue();
            local_2bc = -0x3b2c6ddf;
          }
          else if (local_2bc == -0x1b0f0a86) {
            local_2bc = -0x4a39f44d;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc != -0x248e57f4) {
          if (local_2bc == -0x243cf4db) {
            _objc_msgSend(local_f8,PTR_s_currentBubble_0048a848);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_f8);
            puVar3 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(uVar8,PTR_s_isMergeBubble_0048bef0);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_d8);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar9,puVar2);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar10,puVar3);
            _objc_release(uVar10);
            _objc_release(uVar9);
            _objc_release(uVar8);
            _objc_release(local_e0);
            local_2bc = 0x5dedf4d;
          }
          else if (local_2bc == -0x23a16c76) {
            _objc_release(local_a0);
            local_2bc = 0x52208f12;
          }
          goto LAB_003eff2c;
        }
        bVar6 = 0x1ff50d07 <
                (((DAT_004c9f90 ^ DAT_004c9f94) * -0x11c4cb29 | 0xd34649e5) ^ 0x625933dc);
        iVar12 = -0x53563536;
        local_2bc = 0x49a81765;
      }
LAB_003f8040:
      if (bVar6) {
        local_2bc = iVar12;
      }
      goto LAB_003eff2c;
    }
    if (local_2bc < -0x67a4bc60) {
      if (-0x75bb87d0 < local_2bc) {
        if (-0x6c70012c < local_2bc) {
          if (local_2bc < -0x6a340ca3) {
            if (local_2bc == -0x6c70012b) {
              local_2bc = 0xd7412a4;
            }
            else {
              if (local_2bc == -0x6bb93091) {
                _objc_msgSend(local_158,local_240,local_238);
                bVar6 = false;
                local_2bc = 0x47a569c4;
                iVar12 = 0x22989962;
                goto LAB_003f818c;
              }
              if (local_2bc == -0x6a876968) {
                DAT_004d205c = 1;
                local_2bc = -0x4181c562;
              }
            }
          }
          else if (local_2bc < -0x6944055b) {
            if (local_2bc == -0x6a340ca3) {
              local_d8 = PTR_s_shared_00489458;
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990);
              local_e0 = _objc_retainAutoreleasedReturnValue();
              local_e8 = _objc_msgSend(local_e0,PTR_s_assetsLoadMode_0048af40);
              local_2bc = 0x5ead4416;
            }
            else if (local_2bc == -0x6a2ab114) {
              _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithFormat__00489548,
                            &PTR____CFConstantStringClassReference_004c8ac0);
              _objc_retainAutoreleasedReturnValue();
              local_2bc = -0x555eb124;
            }
          }
          else if (local_2bc == -0x6944055b) {
            local_2bc = -0x64a9748f;
          }
          else if (local_2bc == -0x68e36f61) {
            uVar11 = 0;
            if (DAT_004c9f44 != 0) {
              uVar11 = DAT_004c9f40 / DAT_004c9f44;
            }
            bVar6 = 0xa3bbfb83 <
                    (uint)((ulong)((uVar11 / 0x7c687ee8) * -0x6217da3d) * 0x61d162c9 >> 0x3e);
            local_2bc = 0x7cef935e;
            iVar12 = 0xefffcc6;
            goto LAB_003f6d90;
          }
          goto LAB_003eff2c;
        }
        if (-0x73dbf953 < local_2bc) {
          if (local_2bc < -0x6e0ad602) {
            if (local_2bc == -0x73dbf952) {
              _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_d8);
              _objc_retainAutoreleasedReturnValue();
              local_2bc = 0x6996ea7;
            }
            else if (local_2bc == -0x7247d867) {
              local_2bc = 0x43b5456f;
            }
          }
          else {
            if (local_2bc == -0x6e0ad602) {
              uVar11 = ((DAT_004c9d70 + DAT_004c9d74 & 0x8b971e5cU) / 0x2790b9b3) * 0x37e2c675;
              bVar5 = 0x8323a99d < uVar11;
              bVar6 = uVar11 == 0x8323a99e;
              iVar12 = -0xc272663;
              local_2bc = 0x3b182291;
              goto LAB_003f8f1c;
            }
            if (local_2bc == -0x6d2aba08) {
              local_1e8 = _objc_msgSend(local_170,local_1e0,local_1d8);
              local_2bc = -0x51787612;
            }
          }
          goto LAB_003eff2c;
        }
        if (local_2bc == -0x75bb87cf) {
          local_238 = *local_230;
          _objc_msgSend(local_158,PTR_s_setBubbleName__0048bf50);
          local_240 = PTR_s_setBubbleNameHL__0048bf58;
          local_2bc = 0x5c48d215;
          goto LAB_003eff2c;
        }
        if (local_2bc != -0x74a56b09) {
          if (local_2bc == -0x73e4e31e) {
            local_270 = 0;
            local_268 = local_1c8;
            local_280 = local_1c0;
            local_278 = local_1d0;
            goto LAB_003f4d0c;
          }
          goto LAB_003eff2c;
        }
        bVar6 = (DAT_004c9eb0 * DAT_004c9eb4 + 0x16421027U | 0x18dc70e0) == 0xead0f344;
        local_2bc = -0x5fe5459;
        iVar12 = -0x5232d66a;
        goto LAB_003f818c;
      }
      if (-0x7998269b < local_2bc) {
        if (local_2bc < -0x77d70921) {
          if (local_2bc == -0x7998269a) {
            local_2bc = -0x770c4e91;
            if (local_141 == '\0') {
              local_2bc = 0x7905576d;
            }
            local_288 = local_140;
          }
          else if (local_2bc == -0x78839113) {
            local_2bc = 0x27f61921;
            if (((uint)((ulong)(DAT_004c9e60 * DAT_004c9e64 + 0x9ce7c5ce) * 0x78acf3bb >> 0x3e) |
                0x18e98490) < 0xfe00cd2a) {
              local_2bc = 0x35494333;
            }
          }
          else if (local_2bc == -0x787a865d) {
            local_2bc = -0x3c2c2ac;
          }
        }
        else if (local_2bc < -0x770c4e91) {
          if (local_2bc == -0x77d70921) {
            bVar6 = (uint)((ulong)((DAT_004c9da0 | DAT_004c9da4) * 0x42ae0a34 + 0x2418dff2) *
                           0x630392db >> 0x3e) == 0x580d8d2b;
            iVar12 = -0x18287ff;
            local_2bc = 0x5f5685ea;
            goto LAB_003f6eb0;
          }
          if (local_2bc == -0x771f26a8) {
            local_2bc = -0x7c7dfffd;
          }
        }
        else if (local_2bc == -0x770c4e91) {
          uVar8 = _objc_getClass(&DAT_004c8048);
          local_150 = _objc_msgSend(uVar8,PTR_s_alloc_00489468);
          local_2bc = 0x4bf34411;
        }
        else if (local_2bc == -0x7681c976) {
          local_2bc = -0x2c16e7b8;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < -0x7c6f4642) {
        if (local_2bc == -0x7e211c01) {
          bVar6 = local_a1 == '\0';
          local_2bc = 0x2f6adecc;
          iVar12 = -0x6e0ad602;
          goto LAB_003f86f0;
        }
        if (local_2bc == -0x7dd99a62) {
          uVar11 = DAT_004c9e08 | DAT_004c9e0c;
          _objc_release(local_e0);
          bVar6 = 0xa8445f80 < (uVar11 & 0x826cd605 | 0x8224d605);
          iVar12 = 0x75b65274;
          local_2bc = 0x6303d4b5;
          goto LAB_003f8040;
        }
        if (local_2bc != -0x7c7dfffd) goto LAB_003eff2c;
        bVar6 = 0x42542944 < ((DAT_004c9f80 | DAT_004c9f84) / 0x3216cc5b + 0xe3b27ea4 | 0xd7793fd2);
        iVar12 = -0xf2b79a9;
        local_2bc = -0x644ac6f5;
        goto LAB_003f8040;
      }
      if (local_2bc < -0x7a695e60) {
        if (local_2bc == -0x7c6f4642) {
          local_2bc = -0x3d070024;
        }
        else if (local_2bc == -0x7c342aa3) {
          _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                        &PTR____CFConstantStringClassReference_004c8a20);
          local_1f0 = _objc_retainAutoreleasedReturnValue();
          local_1f8 = PTR_s_parseFloatFromValues__0048bc48;
          local_200 = _objc_msgSend(local_170,PTR_s_parseFloatFromValues__0048bc48,local_1f0);
          local_2bc = -0x63142b0f;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc != -0x7a695e60) {
        if (local_2bc == -0x79eae668) {
          bVar6 = SBORROW8(param_4,2);
          lVar1 = param_4 + -2;
          iVar12 = -0x13e87073;
          local_2bc = 0x3c5990d3;
          goto LAB_003f2e34;
        }
        goto LAB_003eff2c;
      }
      uVar11 = ((DAT_004c9f58 | DAT_004c9f5c) + 0x524828d) / 0x268cefde + 0x6bdd5973;
      local_230 = &PTR_PTR_00481050 + local_218;
      bVar5 = 0xbd94b4f9 < uVar11;
      bVar6 = uVar11 == 0xbd94b4fa;
      local_2bc = 0x7ef446a4;
      iVar12 = 0x45682312;
    }
    else {
      if (-0x5885b9cc < local_2bc) {
        if (local_2bc < -0x51451407) {
          if (local_2bc < -0x543f1ad3) {
            if (local_2bc == -0x5885b9cb) {
              DAT_004c8483 = DAT_004c8463 ^ 0xbf;
              DAT_004c8484 = DAT_004c8464 ^ 0xa3;
              DAT_004c8485 = DAT_004c8465 ^ 0x3e;
              DAT_004c8486 = DAT_004c8466 ^ 0x4c;
              DAT_004c8487 = DAT_004c8467 ^ 0x84;
              DAT_004c8488 = DAT_004c8468 ^ 0xc9;
              DAT_004c8489 = DAT_004c8469 ^ 0x80;
              DAT_004c848a = DAT_004c846a ^ 0xf0;
              DAT_004c848b = DAT_004c846b ^ 0xb0;
              DAT_004c848c = DAT_004c846c ^ 0xe6;
              DAT_004c848d = DAT_004c846d ^ 0x2e;
              DAT_004c848e = DAT_004c846e ^ 0xde;
              DAT_004c848f = DAT_004c846f ^ 0x23;
              DAT_004c8490 = DAT_004c8470 ^ 0x69;
              DAT_004c8491 = DAT_004c8471 ^ 0x6e;
              DAT_004c8492 = DAT_004c8472 ^ 0x8b;
              DAT_004c8493 = DAT_004c8473 ^ 0xea;
              DAT_004c8494 = DAT_004c8474 ^ 0x81;
              DAT_004c8495 = DAT_004c8475 ^ 0x10;
              DAT_004c8496 = DAT_004c8476 ^ 0x86;
              DAT_004c8497 = DAT_004c8477 ^ 0x3a;
              DAT_004c8498 = DAT_004c8478 ^ 0xbb;
              DAT_004c8499 = DAT_004c8479 ^ 0xda;
              DAT_004c849a = DAT_004c847a ^ 0xe4;
              DAT_004c849b = DAT_004c847b ^ 0x56;
              DAT_004c849c = DAT_004c847c ^ 0xf5;
              DAT_004c849d = DAT_004c847d ^ 4;
              DAT_004c849e = DAT_004c847e ^ 0x71;
              DAT_004c86c0 = DAT_004c86a0 ^ 0xd4;
              DAT_004c86c1 = DAT_004c86a1 ^ 0x72;
              DAT_004c86c2 = DAT_004c86a2 ^ 0xbc;
              DAT_004c86c3 = DAT_004c86a3 ^ 0x89;
              DAT_004c86c4 = DAT_004c86a4 ^ 0xaa;
              DAT_004c86c5 = DAT_004c86a5 ^ 0xc1;
              DAT_004c86c6 = DAT_004c86a6 ^ 0xd5;
              DAT_004c86c7 = DAT_004c86a7 ^ 0x73;
              DAT_004c86c8 = DAT_004c86a8 ^ 0x67;
              DAT_004c86c9 = DAT_004c86a9 ^ 0x36;
              DAT_004c86ca = DAT_004c86aa ^ 0x2c;
              DAT_004c86cb = DAT_004c86ab ^ 0xdb;
              DAT_004c86cc = DAT_004c86ac ^ 0x44;
              DAT_004c86cd = DAT_004c86ad ^ 99;
              DAT_004c86ce = DAT_004c86ae ^ 0xce;
              DAT_004c86cf = DAT_004c86af ^ 0xe8;
              DAT_004c86d0 = DAT_004c86b0 ^ 0x5f;
              DAT_004c86d1 = DAT_004c86b1 ^ 0x41;
              DAT_004c86d2 = DAT_004c86b2 ^ 0x41;
              DAT_004c86d3 = DAT_004c86b3 ^ 0x5a;
              DAT_004c86d4 = DAT_004c86b4 ^ 0xd3;
              DAT_004c86d5 = DAT_004c86b5 ^ 0x8b;
              DAT_004c86d6 = DAT_004c86b6 ^ 0x6d;
              DAT_004c86d7 = DAT_004c86b7 ^ 0x3b;
              DAT_004c86d8 = DAT_004c86b8 ^ 200;
              DAT_004c86d9 = DAT_004c86b9 ^ 0xf1;
              DAT_004c86da = DAT_004c86ba ^ 0xb7;
              DAT_004c86db = DAT_004c86bb ^ 0xd0;
              DAT_004c8440 = DAT_004c8420 ^ 0x86;
              DAT_004c8441 = DAT_004c8421 ^ 0xf5;
              DAT_004c8442 = DAT_004c8422 ^ 0xea;
              DAT_004c8443 = DAT_004c8423 ^ 0xa1;
              DAT_004c8444 = DAT_004c8424 ^ 0x87;
              DAT_004c8445 = DAT_004c8425 ^ 0xf8;
              DAT_004c8446 = DAT_004c8426 ^ 0xb;
              DAT_004c8447 = DAT_004c8427 ^ 0x75;
              DAT_004c8448 = DAT_004c8428 ^ 0x44;
              DAT_004c8449 = DAT_004c8429 ^ 0xcd;
              DAT_004c844a = DAT_004c842a ^ 0x52;
              DAT_004c844b = DAT_004c842b ^ 0xa0;
              DAT_004c844c = DAT_004c842c ^ 0x13;
              DAT_004c844d = DAT_004c842d ^ 0x30;
              DAT_004c844e = DAT_004c842e ^ 0x65;
              DAT_004c844f = DAT_004c842f ^ 0x1b;
              DAT_004c8450 = DAT_004c8430 ^ 0xd;
              DAT_004c8451 = DAT_004c8431 ^ 0x66;
              DAT_004c8452 = DAT_004c8432 ^ 0x46;
              DAT_004c8453 = DAT_004c8433 ^ 0xfd;
              DAT_004c8454 = DAT_004c8434 ^ 0x16;
              DAT_004c8455 = DAT_004c8435 ^ 0xe3;
              DAT_004c8456 = DAT_004c8436 ^ 0x40;
              DAT_004c8457 = DAT_004c8437 ^ 0x99;
              DAT_004c8458 = DAT_004c8438 ^ 0x15;
              DAT_004c8459 = DAT_004c8439 ^ 0x62;
              DAT_004c845a = DAT_004c843a ^ 0x3f;
              DAT_004c845b = DAT_004c843b ^ 0xd6;
              DAT_004c845c = DAT_004c843c ^ 5;
              DAT_004c845d = DAT_004c843d ^ 0xec;
              DAT_004c845e = DAT_004c843e ^ 0xe4;
              local_2bc = -0x109742ab;
            }
            else if (local_2bc == -0x56836d98) {
              local_2bc = -0x5e1e97a2;
            }
            else if (local_2bc == -0x555eb124) {
              uVar11 = DAT_004c9e98 - DAT_004c9e9c;
              _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithFormat__00489548,
                            &PTR____CFConstantStringClassReference_004c8ac0);
              local_128 = _objc_retainAutoreleasedReturnValue();
              local_130 = PTR_s_valueForKey__0048b4d8;
              bVar6 = 0x1c10f02e < (uVar11 & 0xb04880) + 0x38335e9f;
              local_2bc = -0x555eb124;
              iVar12 = -0xaeccbc;
              goto LAB_003f6d90;
            }
          }
          else if (local_2bc < -0x5232d66a) {
            if (local_2bc == -0x543f1ad3) {
              _objc_release(local_190);
              _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89e0,
                            &PTR____CFConstantStringClassReference_004c8a20);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_170,local_180,uVar8);
              local_2bc = 0x32df5b35;
            }
            else if (local_2bc == -0x53563536) {
              iVar12 = DAT_004c9f98 - DAT_004c9f9c;
              _objc_release(local_168);
              bVar6 = 0xa4dc411f < (uint)(iVar12 * -0x17e8c40) / 0x24a5a63c;
              iVar12 = 0x49a81765;
              local_2bc = 0x5ee71172;
              goto LAB_003f8040;
            }
          }
          else {
            if (local_2bc == -0x5232d66a) {
              _objc_release(local_160);
              local_170 = _objc_getClass(&DAT_004c88d4);
              local_178 = PTR_s_getValueOfProperty_inRuleSet__0048bc40;
              bVar5 = true;
              bVar6 = false;
              iVar12 = -0x5fe5459;
              local_2bc = -0x7c6f4642;
              goto LAB_003f8f1c;
            }
            if (local_2bc == -0x51787612) {
              local_270 = 0;
              local_268 = local_1d8;
              local_278 = local_1e8;
LAB_003f31ec:
              local_2bc = 0x5e0cb4f4;
              local_280 = 0;
            }
          }
          goto LAB_003eff2c;
        }
        if (local_2bc < -0x4cb5d6a1) {
          if (local_2bc == -0x51451407) {
            bVar6 = local_ca == 0;
            local_2bc = 0x521bac34;
            iVar12 = -0x6a340ca3;
            goto LAB_003f86f0;
          }
          if (local_2bc == -0x504028c9) {
            local_2bc = -0x2c16e7b8;
            goto LAB_003eff2c;
          }
          if (local_2bc != -0x4f524250) goto LAB_003eff2c;
          bVar6 = local_e9 == '\0';
          iVar12 = -0x46ee99bc;
          local_2bc = 0x7a9477d3;
        }
        else if (local_2bc < -0x48f0781e) {
          if (local_2bc != -0x4cb5d6a1) {
            if (local_2bc == -0x4a39f44d) {
              local_2bc = 0x5a65b119;
            }
            goto LAB_003eff2c;
          }
          bVar6 = false;
          iVar12 = -0x12a048cd;
          local_2bc = -0x58aaa729;
        }
        else {
          if (local_2bc == -0x48f0781e) {
            local_2bc = 0x82b4c43;
            goto LAB_003eff2c;
          }
          if (local_2bc != -0x48d0467b) goto LAB_003eff2c;
          bVar6 = local_221 == 0;
          iVar12 = -0x787a865d;
          local_2bc = 0x77356ef6;
        }
LAB_003f8794:
        if (bVar6) {
          local_2bc = iVar12;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < -0x63142b0f) {
        if (local_2bc < -0x64a9748f) {
          if (local_2bc < -0x66dbab81) {
            if (local_2bc == -0x67a4bc60) {
              _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89a0,
                            &PTR____CFConstantStringClassReference_004c8a20);
              _objc_retainAutoreleasedReturnValue();
              local_2bc = 0x4f594427;
            }
            else if (local_2bc == -0x66dd770e) {
              local_2bc = -0x78839113;
            }
          }
          else if (local_2bc == -0x66dbab81) {
            local_2bc = 0x3d2a5d48;
          }
          else if (local_2bc == -0x66c83f96) {
            return local_2b8;
          }
        }
        else if (local_2bc < -0x6389095e) {
          if (local_2bc == -0x64a9748f) {
            local_2bc = -0x6ed978a;
            if ((uint)((ulong)((uint)((ulong)(DAT_004c9d50 | DAT_004c9d54) * 0x2ca8d975 >> 0x3d) *
                              0x60c1d4e4) * 0x4de6d513 >> 0x3d) < 0xd9117b1e) {
              local_2bc = 0x2c76a00e;
            }
          }
          else if (local_2bc == -0x644ac6f5) {
            _objc_msgSend(local_138,local_248,local_158,local_128);
            local_2bc = -0xf2b79a9;
          }
        }
        else if (local_2bc == -0x6389095e) {
          _objc_retain(param_1);
          local_2bc = -0x3b0d4dd4;
        }
        else if (local_2bc == -0x635837bd) {
          uVar11 = ((DAT_004c9cd8 * DAT_004c9cdc ^ 0x20290088U) & 0xe8bba4cc) * -0x77bc6c5f;
          local_6d = iVar4 == 0;
          bVar5 = 0x20ba5973 < uVar11;
          bVar6 = uVar11 == 0x20ba5974;
          iVar12 = -0x635837bd;
          local_2bc = 0xd651a;
          goto LAB_003f8f1c;
        }
        goto LAB_003eff2c;
      }
      if (-0x604395b8 < local_2bc) {
        if (local_2bc < -0x597fc2a3) {
          if (local_2bc == -0x604395b7) {
            local_2bc = 0x34ab419f;
          }
          else if (local_2bc == -0x5e1e97a2) {
            bVar6 = local_f9 == 0;
            iVar12 = 0x53ee7af7;
            local_2bc = 0x521bac34;
            goto LAB_003f8794;
          }
        }
        else if (local_2bc == -0x597fc2a3) {
          local_2bc = -0x35470fda;
        }
        else if (local_2bc == -0x58aaa729) {
          uVar11 = DAT_004c9f28 | DAT_004c9f2c;
          local_210 = _objc_msgSend(local_170,local_1f8,local_208);
          bVar6 = 0x4820e058 < (uint)((ulong)uVar11 * 0x6e9b8d33 >> 0x3e) + 0x1c12ac1b;
          iVar12 = -0x12a048cd;
          local_2bc = 0x4d52f7fc;
          goto LAB_003f8040;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc == -0x63142b0f) {
        _objc_release(local_1f0);
        _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89e0,
                      &PTR____CFConstantStringClassReference_004c8a20);
        local_208 = _objc_retainAutoreleasedReturnValue();
        local_2bc = -0x4cb5d6a1;
        goto LAB_003eff2c;
      }
      if (local_2bc == -0x61783dbb) {
        uVar11 = (DAT_004c9ec0 | DAT_004c9ec4 | 0xc1a792b0) / 0x28f360fd + 0x93835166;
        bVar5 = 0x8ee95850 < uVar11;
        bVar6 = uVar11 == 0x8ee95851;
        local_2bc = 0x58a2a6e0;
        iVar12 = 0x78c31731;
        goto LAB_003f8750;
      }
      if (local_2bc != -0x610ba6a3) goto LAB_003eff2c;
      uVar11 = (uint)((ulong)(DAT_004c9f10 + DAT_004c9f14 | 0xca0bd772) * 0xecb0e1b >> 0x3a) |
               0x34fe71c1;
      bVar5 = 0xf5207e89 < uVar11;
      bVar6 = uVar11 == 0xf5207e8a;
      local_2bc = 0x659d2239;
      iVar12 = 0x6025605d;
    }
LAB_003f8750:
    if (!bVar5 || bVar6) {
      local_2bc = iVar12;
    }
    goto LAB_003eff2c;
  }
  if (local_2bc < 0x4bb6b511) {
    if (local_2bc < 0x2c28bb4e) {
      if (0x11f96863 < local_2bc) {
        if (local_2bc < 0x1f5374de) {
          if (local_2bc < 0x15088f55) {
            if (local_2bc == 0x11f96864) {
              local_2bc = -0x671e659;
            }
            else if (local_2bc == 0x12928aba) {
              local_2bc = 0xb996f8c;
              local_290 = local_118;
            }
            else if (local_2bc == 0x132b77ad) {
              local_2bc = -0x3f43b346;
            }
            goto LAB_003eff2c;
          }
          if (local_2bc < 0x1b8e405e) {
            if (local_2bc == 0x15088f55) {
              _objc_msgSend(local_78,local_80);
              uVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar8,PTR_s_enabled_0048a890);
              local_2bc = -0x27c733ee;
            }
            else if (local_2bc == 0x19461cfc) {
              _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                            &PTR____CFConstantStringClassReference_004c8a20);
              local_190 = _objc_retainAutoreleasedReturnValue();
              local_198 = _objc_msgSend(local_170,local_180,local_190);
              local_2bc = 0x64a4a5fc;
            }
            goto LAB_003eff2c;
          }
          if (local_2bc == 0x1b8e405e) {
            bVar6 = local_6d == '\0';
            iVar12 = 0x35decb3e;
            local_2bc = -0x363a9d66;
            goto LAB_003f8794;
          }
          if (local_2bc != 0x1de14878) goto LAB_003eff2c;
          bVar6 = local_89 == '\0';
          iVar12 = 0x568345b;
          local_2bc = -0x652c0fc;
        }
        else {
          if (local_2bc < 0x22d31edb) {
            if (local_2bc == 0x1f5374de) {
              local_2bc = -0x48d0467b;
            }
            else {
              if (local_2bc == 0x2076dbd0) {
                uVar11 = (uint)((ulong)((DAT_004c9dd0 ^ DAT_004c9dd4) + 0xbaf99f37) * 0x2bdc9daf >>
                               0x3c);
                bVar5 = 0xaf2fc3f < uVar11;
                bVar6 = uVar11 == 0xaf2fc40;
                iVar12 = -0x31c1f94;
                local_2bc = 0x30572e0c;
                goto LAB_003f8f1c;
              }
              if (local_2bc == 0x22989962) {
                local_2bc = -0x787a865d;
              }
            }
            goto LAB_003eff2c;
          }
          if (local_2bc < 0x27f61921) {
            if (local_2bc == 0x22d31edb) {
              local_268 = local_1a0;
              local_270 = local_1a8;
              local_280 = local_188;
              local_278 = local_198;
LAB_003f4d0c:
              local_2bc = 0x5e0cb4f4;
            }
            else if (local_2bc == 0x24853d44) {
              local_2bc = 0xb996f8c;
              local_290 = local_260;
            }
            goto LAB_003eff2c;
          }
          if (local_2bc == 0x27f61921) {
            local_2bc = 0x35494333;
            goto LAB_003eff2c;
          }
          if (local_2bc != 0x2846c90c) goto LAB_003eff2c;
          bVar6 = local_119 == '\0';
          iVar12 = -0x1a1dafb0;
          local_2bc = -0x2fc6e6db;
        }
        goto LAB_003f8794;
      }
      if (local_2bc < 0x6996ea7) {
        if (local_2bc < 0x45d99f2) {
          if (local_2bc == -0x8e5224) {
            local_2bc = 0x57997326;
          }
          else if (local_2bc == 0xd651a) {
            local_2bc = -0x3aa9232f;
          }
          else if (local_2bc == 0x320f496) {
            DAT_004d2008 = '\x01';
            bVar6 = (DAT_004c9d98 * DAT_004c9d9c + 0x257f8acdU & 0x3423cbc9 | 0x4220089) ==
                    0x7b454f08;
            local_2bc = 0x320f496;
            iVar12 = 0x4f6173f5;
            goto LAB_003f818c;
          }
          goto LAB_003eff2c;
        }
        if (0x568345a < local_2bc) {
          if (local_2bc == 0x568345b) {
            bVar6 = 0xd6394ff8 <
                    ((DAT_004c9db0 | DAT_004c9db4 | 0x3df51e5b) + 0xa101c293 | 0x89dc8a86);
            iVar12 = 0x3ae32f3c;
            local_2bc = 0x3436b7d5;
            goto LAB_003f8040;
          }
          if (local_2bc == 0x5dedf4d) {
            uVar11 = 0;
            if (DAT_004c9e3c != 0) {
              uVar11 = DAT_004c9e38 / DAT_004c9e3c;
            }
            uVar11 = uVar11 * 0x58dd62c5 + 0xb77f238c;
            _objc_msgSend(local_f8,PTR_s_currentBubble_0048a848);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_f8);
            puVar3 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(uVar8,PTR_s_isMergeBubble_0048bef0);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_d8);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar9,puVar2);
            uVar10 = _objc_retainAutoreleasedReturnValue();
            bVar7 = _objc_msgSend(uVar10,puVar3);
            _objc_release(uVar10);
            _objc_release(uVar9);
            local_f9 = bVar7 & DAT_004d2009;
            _objc_release(uVar8);
            _objc_release(local_e0);
            bVar5 = 0xaf3c8258 < uVar11;
            bVar6 = uVar11 == 0xaf3c8259;
            iVar12 = -0x243cf4db;
            local_2bc = -0x56836d98;
            goto LAB_003f8f1c;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc == 0x45d99f2) {
          local_2bc = -0x3b0d4dd4;
          if ((DAT_004c9d10 - DAT_004c9d14 ^ 0x18001086U | 0x275be979) * 0x4a022e2a == -0x751ecbb3)
          {
            local_2bc = -0x6389095e;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc != 0x549a1bd) goto LAB_003eff2c;
        bVar6 = (DAT_004c9e50 + DAT_004c9e54 | 0xffeaf7ffU) == 0xe3bee7a5;
        local_2bc = 0x7e3a5b16;
        iVar12 = 0x314edce8;
        goto LAB_003f818c;
      }
      if (local_2bc < 0xbc16190) {
        if (local_2bc != 0x6996ea7) {
          if (local_2bc == 0x82b4c43) {
            uVar11 = ((DAT_004c9e18 | DAT_004c9e1c) ^ 0x6100000 | 0x2829fe7d) * 0x2c049912;
            bVar5 = 0x73a57b9 < uVar11;
            bVar6 = uVar11 == 0x73a57ba;
            iVar12 = 0x2d40b7fe;
            local_2bc = -0x2a86e888;
            goto LAB_003f8f1c;
          }
          if (local_2bc == 0xb996f8c) {
            local_2b8 = local_290;
            uVar11 = 0;
            if (DAT_004c9fb4 != 0) {
              uVar11 = DAT_004c9fb0 / DAT_004c9fb4;
            }
            local_2bc = 0x7a807de3;
            if (((uVar11 | 0x40539511) + 0x9ce82ee | 0x7b22563e) < 0xf0f7af91) {
              local_2bc = 0x4bb6b511;
            }
          }
          goto LAB_003eff2c;
        }
        uVar11 = DAT_004c9e28 | DAT_004c9e2c;
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_d8);
        local_f8 = _objc_retainAutoreleasedReturnValue();
        bVar6 = 0x76d9c1c2 < (uVar11 * -0x2a890379 + 0x1bb6d1e) / 0x3a1db00f;
        iVar12 = 0x6996ea7;
        local_2bc = -0x66dbab81;
        goto LAB_003f8040;
      }
      if (0xefffcc5 < local_2bc) {
        if (local_2bc == 0xefffcc6) {
          local_2bc = 0x7cef935e;
        }
        else if (local_2bc == 0xf10c06e) {
          uVar11 = ((DAT_004c9f08 - DAT_004c9f0c) + 0xc61241bdU ^ 0xbffb2af9) + 0xe40f515c;
          local_1c0 = _objc_msgSend(local_170,local_1b8,local_1b0);
          _objc_release(local_1b0);
          _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                        &PTR____CFConstantStringClassReference_004c8a20);
          local_1c8 = _objc_retainAutoreleasedReturnValue();
          local_1d0 = _objc_msgSend(local_170,local_1b8,local_1c8);
          bVar5 = 0x3a1347dd < uVar11;
          bVar6 = uVar11 == 0x3a1347de;
          local_2bc = 0xf10c06e;
          iVar12 = -0x73e4e31e;
          goto LAB_003f8750;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc == 0xbc16190) {
        _objc_msgSend(local_170,local_1b8,local_1b0);
        _objc_release(local_1b0);
        _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                      &PTR____CFConstantStringClassReference_004c8a20);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_170,local_1b8,uVar8);
        local_2bc = 0xf10c06e;
        goto LAB_003eff2c;
      }
      if (local_2bc != 0xd7412a4) goto LAB_003eff2c;
      uVar11 = (DAT_004c9fa8 - DAT_004c9fac) * -0x10eab492 ^ 0x6b154c74;
      bVar5 = 0xf54ec81a < uVar11;
      bVar6 = uVar11 == 0xf54ec81b;
      local_2bc = 0xd7412a4;
      iVar12 = 0x24853d44;
      goto LAB_003f8750;
    }
    if (local_2bc < 0x3ae32f3c) {
      if (0x336572cf < local_2bc) {
        if (local_2bc < 0x35494333) {
          if (local_2bc == 0x336572d0) {
            uVar11 = DAT_004c9f38 * DAT_004c9f3c;
            _objc_release(local_2b0);
            _objc_msgSend(uStack_298,local_2a0,local_2a8,local_2a0,local_158,
                          PTR_s_setMargin__0048bf48);
            _objc_msgSend(0x403e000000000000,0x4039000000000000,0x4024000000000000,
                          0x4034000000000000,local_158,PTR_s_setEdgeInsets__0048b278);
            local_218 = (param_3 + (param_5 & 0xffffffff)) - 0x32;
            local_219 = local_218 < 0x1a;
            local_2bc = 0x622a39ee;
            if (0x8edfaadb < (uVar11 & 0x85030032) + 0xa1a3f7b) {
              local_2bc = 0x44bc9449;
            }
          }
          else if (local_2bc == 0x3436b7d5) {
            _objc_release(local_88);
          }
          else if (local_2bc == 0x34ab419f) {
            bVar6 = local_b1 == '\0';
            local_2bc = 0x2f6adecc;
            iVar12 = 0x5cf596b9;
LAB_003f86f0:
            if (bVar6) {
              local_2bc = iVar12;
            }
          }
        }
        else if (local_2bc < 0x3729ed34) {
          if (local_2bc == 0x35494333) {
            local_2bc = 0x35494333;
            if ((DAT_004c9e68 | DAT_004c9e6c | 0x5e4e378d) * -0x47b8da8a + 0x2f404812 < 0x682d0964)
            {
              local_2bc = 0x12928aba;
            }
          }
          else if (local_2bc == 0x35decb3e) {
            local_2bc = -0x4181c562;
          }
        }
        else if (local_2bc == 0x3729ed34) {
          local_2bc = 0x6059ef25;
        }
        else if (local_2bc == 0x37beb941) {
          uVar11 = (DAT_004c9d28 & DAT_004c9d2c & 0x2e68db88) + 0xcb6bcc29 & 0x2191b890;
          local_78 = PTR_BubbleBoxConfig_0048c990;
          bVar5 = 0x46b4dbfe < uVar11;
          bVar6 = uVar11 == 0x46b4dbff;
          local_2bc = 0x37beb941;
          iVar12 = 0x3729ed34;
          goto LAB_003f8750;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < 0x2f6adecc) {
        if (local_2bc == 0x2c28bb4e) {
          uVar11 = 0;
          if (DAT_004c9cf4 != 0) {
            uVar11 = DAT_004c9cf0 / DAT_004c9cf4;
          }
          local_2bc = 0x4342254b;
          if ((uVar11 & 0x20088b0) != 0x33f716c0) {
            local_2bc = 0x7165d090;
          }
        }
        else if (local_2bc == 0x2c76a00e) {
          uVar11 = DAT_004c9d58 ^ DAT_004c9d5c;
          _objc_msgSend(local_98,local_80);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,PTR_s_currentBubble_0048a848);
          local_a0 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar8);
          local_a1 = local_a0 == 0;
          local_2bc = 0x4f56309a;
          if (0x53d395a8 < (uint)((ulong)(uVar11 + 0x1d63ca2c) * 0x766fb36b >> 0x3e)) {
            local_2bc = 0x2c76a00e;
          }
        }
        else if (local_2bc == 0x2d40b7fe) {
          local_2bc = 0x82b4c43;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < 0x314edce8) {
        if (local_2bc != 0x2f6adecc) {
          if (local_2bc == 0x30572e0c) {
            local_2bc = -0x31c1f94;
          }
          goto LAB_003eff2c;
        }
        uVar11 = ((DAT_004c9d80 | DAT_004c9d84) ^ 0x6ed0fb4f) * 0x5d290db6 + 0xa664f4df;
        bVar5 = 0x285af958 < uVar11;
        bVar6 = uVar11 == 0x285af959;
        iVar12 = -0x23a16c76;
        local_2bc = 0x52208f12;
      }
      else {
        if (local_2bc == 0x314edce8) {
          uVar11 = DAT_004c9e58 * DAT_004c9e5c;
          (*pcStack_108)(param_1,local_110,param_3,param_4,param_5);
          local_118 = _objc_retainAutoreleasedReturnValue();
          bVar6 = 0xb9ef37e8 < ((uVar11 | 0x907a233) ^ 0xd11953ce) + 0x562619ec;
          iVar12 = 0x7e3a5b16;
          local_2bc = -0x66dd770e;
          goto LAB_003f8040;
        }
        if (local_2bc != 0x32df5b35) goto LAB_003eff2c;
        uVar11 = (DAT_004c9ed8 ^ DAT_004c9edc) * 0x4f597b3d + 0x99c1d097;
        _objc_release(local_190);
        _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89e0,
                      &PTR____CFConstantStringClassReference_004c8a20);
        local_1a0 = _objc_retainAutoreleasedReturnValue();
        local_1a8 = _objc_msgSend(local_170,local_180,local_1a0);
        bVar5 = 0x2d24867c < uVar11;
        bVar6 = uVar11 == 0x2d24867d;
        iVar12 = -0x543f1ad3;
        local_2bc = 0x22d31edb;
      }
    }
    else {
      if (0x44bc9448 < local_2bc) {
        if (local_2bc < 0x47d95cdd) {
          if (local_2bc == 0x44bc9449) {
            _objc_release(local_2b0);
            _objc_msgSend(uStack_298,local_2a0,local_2a8,local_2a0,local_158,
                          PTR_s_setMargin__0048bf48);
            _objc_msgSend(0x403e000000000000,0x4039000000000000,0x4024000000000000,
                          0x4034000000000000,local_158,PTR_s_setEdgeInsets__0048b278);
            local_2bc = 0x336572d0;
          }
          else if (local_2bc == 0x45682312) {
            local_2bc = -0x75bb87cf;
          }
          else if (local_2bc == 0x47a569c4) {
            _objc_msgSend(local_158,local_240,local_238);
            local_2bc = -0x6bb93091;
          }
        }
        else if (local_2bc < 0x4b0b809d) {
          if (local_2bc == 0x47d95cdd) {
            local_2bc = 0x549a1bd;
          }
          else if (local_2bc == 0x49a81765) {
            _objc_release(local_168);
            local_2bc = -0x53563536;
          }
        }
        else if (local_2bc == 0x4b0b809d) {
          local_2bc = -0x11034199;
        }
        else if (local_2bc == 0x4bafe128) {
          uVar11 = 0;
          if (DAT_004c9d04 != 0) {
            uVar11 = DAT_004c9d00 / DAT_004c9d04;
          }
          bVar6 = (uVar11 * 0xeb1cbea + 0x76b57662 & 0x4efac4f6) == 0x5ad99a33;
          local_2bc = -0x109742ab;
          iVar12 = -0x5885b9cb;
          goto LAB_003f86f0;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < 0x3d2a5d48) {
        if (local_2bc == 0x3ae32f3c) {
          _objc_release(local_88);
        }
        else if (local_2bc == 0x3b182291) {
          _objc_msgSend(local_a0,PTR_s_name_0048a060);
          local_b0 = _objc_retainAutoreleasedReturnValue();
        }
        else if (local_2bc == 0x3c5990d3) {
          bVar6 = ((DAT_004c9ee0 * DAT_004c9ee4 & 0xd19ce84fU) / 0x3c25bd9f & 1) == 0xf1af4f2c;
          iVar12 = -0x67a4bc60;
          local_2bc = 0x4f594427;
          goto LAB_003f8794;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc < 0x4342254b) {
        if (local_2bc == 0x3d2a5d48) {
          bVar6 = 0x872c229c < ((DAT_004c9e30 | DAT_004c9e34) & 0x9aace29c | 0x20c4288) + 0x56d2c28f
          ;
          local_2bc = -0x243cf4db;
          iVar12 = 0x5dedf4d;
          goto LAB_003f6d90;
        }
        if (local_2bc == 0x3e165439) {
          local_2bc = -0x674c4ae;
        }
        goto LAB_003eff2c;
      }
      if (local_2bc == 0x4342254b) {
        DAT_004c88bf = local_6e ^ 0x96;
        DAT_004c88c0 = DAT_004c8890 ^ 0x84;
        DAT_004c88c1 = DAT_004c8891 ^ 0x9b;
        DAT_004c88c2 = DAT_004c8892 ^ 0x13;
        DAT_004c88c3 = DAT_004c8893 ^ 0xfc;
        DAT_004c88c4 = DAT_004c8894 ^ 0xc0;
        DAT_004c88c5 = DAT_004c8895 ^ 0xb5;
        DAT_004c88c6 = DAT_004c8896 ^ 0x4d;
        DAT_004c88c7 = DAT_004c8897 ^ 0x29;
        DAT_004c8048 = DAT_004c803d ^ 0xa0;
        DAT_004c8049 = DAT_004c803e ^ 0x41;
        DAT_004c804a = DAT_004c803f ^ 0x9e;
        DAT_004c804b = DAT_004c8040 ^ 7;
        DAT_004c804c = DAT_004c8041 ^ 0x1d;
        DAT_004c804d = DAT_004c8042 ^ 0xda;
        DAT_004c804e = DAT_004c8043 ^ 0x67;
        DAT_004c804f = DAT_004c8044 ^ 0xc4;
        DAT_004c8050 = DAT_004c8045 ^ 0x61;
        DAT_004c8051 = DAT_004c8046 ^ 0xf6;
        DAT_004c8052 = DAT_004c8047 ^ 0x29;
        DAT_004c885c = DAT_004c884d ^ 0x65;
        DAT_004c885d = DAT_004c884e ^ 0x56;
        DAT_004c885e = DAT_004c884f ^ 0x82;
        DAT_004c885f = DAT_004c8850 ^ 0x3b;
        DAT_004c8860 = DAT_004c8851 ^ 0x41;
        DAT_004c8861 = DAT_004c8852 ^ 0x21;
        DAT_004c8862 = DAT_004c8853 ^ 0xc9;
        DAT_004c8863 = DAT_004c8854 ^ 0xa2;
        DAT_004c8864 = DAT_004c8855 ^ 5;
        DAT_004c8865 = DAT_004c8856 ^ 0x47;
        DAT_004c8866 = DAT_004c8857 ^ 0xb5;
        DAT_004c8867 = DAT_004c8858 ^ 0xae;
        DAT_004c8868 = DAT_004c8859 ^ 0xfa;
        DAT_004c8869 = DAT_004c885a ^ 0xd5;
        DAT_004c886a = DAT_004c885b ^ 0xda;
        DAT_004c87fa = DAT_004c87f0 ^ 0xc1;
        DAT_004c87fb = DAT_004c87f1 ^ 0xc0;
        DAT_004c87fc = DAT_004c87f2 ^ 0x16;
        DAT_004c87fd = DAT_004c87f3 ^ 0x15;
        DAT_004c87fe = DAT_004c87f4 ^ 0x73;
        DAT_004c87ff = DAT_004c87f5 ^ 0xe7;
        DAT_004c8800 = DAT_004c87f6 ^ 0x2d;
        DAT_004c8801 = DAT_004c87f7 ^ 0xd9;
        DAT_004c8802 = DAT_004c87f8 ^ 6;
        DAT_004c8803 = DAT_004c87f9 ^ 0xed;
        DAT_004c87b0 = DAT_004c8780 ^ 0x13;
        DAT_004c87b1 = DAT_004c8781 ^ 0x33;
        DAT_004c87b2 = DAT_004c8782 ^ 0x13;
        DAT_004c87b3 = DAT_004c8783 ^ 0xfa;
        DAT_004c87b4 = DAT_004c8784 ^ 0xb9;
        DAT_004c87b5 = DAT_004c8785 ^ 0x8e;
        DAT_004c87b6 = DAT_004c8786 ^ 0x99;
        DAT_004c87b7 = DAT_004c8787 ^ 0xa4;
        DAT_004c87b8 = DAT_004c8788 ^ 0xd4;
        DAT_004c87b9 = DAT_004c8789 ^ 0xd3;
        DAT_004c87ba = DAT_004c878a ^ 0x8e;
        DAT_004c87bb = DAT_004c878b ^ 0x58;
        DAT_004c87bc = DAT_004c878c ^ 0xe9;
        DAT_004c87bd = DAT_004c878d ^ 0xad;
        DAT_004c87be = DAT_004c878e ^ 4;
        DAT_004c87bf = DAT_004c878f ^ 0x2f;
        DAT_004c87c0 = DAT_004c8790 ^ 0x29;
        DAT_004c87c1 = DAT_004c8791 ^ 0xf;
        DAT_004c87c2 = DAT_004c8792 ^ 0xd4;
        DAT_004c87c3 = DAT_004c8793 ^ 0xb2;
        DAT_004c87c4 = DAT_004c8794 ^ 0xe9;
        DAT_004c87c5 = DAT_004c8795 ^ 0x74;
        DAT_004c87c6 = DAT_004c8796 ^ 0xbb;
        DAT_004c87c7 = DAT_004c8797 ^ 0xeb;
        DAT_004c87c8 = DAT_004c8798 ^ 0x15;
        DAT_004c87c9 = DAT_004c8799 ^ 0xf1;
        DAT_004c87ca = DAT_004c879a ^ 0xb7;
        DAT_004c87cb = DAT_004c879b ^ 0x53;
        DAT_004c87cc = DAT_004c879c ^ 0xe;
        DAT_004c87cd = DAT_004c879d ^ 0xda;
        DAT_004c87ce = DAT_004c879e ^ 0xa8;
        DAT_004c87cf = DAT_004c879f ^ 0x7c;
        DAT_004c87d0 = DAT_004c87a0 ^ 0x3d;
        DAT_004c87d1 = DAT_004c87a1 ^ 3;
        DAT_004c87d2 = DAT_004c87a2 ^ 0x9a;
        DAT_004c87d3 = DAT_004c87a3 ^ 0xd0;
        DAT_004c87d4 = DAT_004c87a4 ^ 0xdf;
        DAT_004c87d5 = DAT_004c87a5 ^ 0x80;
        DAT_004c8590 = DAT_004c8560 ^ 0xb;
        DAT_004c8591 = DAT_004c8561 ^ 0x26;
        DAT_004c8592 = DAT_004c8562 ^ 0x3d;
        DAT_004c8593 = DAT_004c8563 ^ 0x69;
        DAT_004c8594 = DAT_004c8564 ^ 0x50;
        DAT_004c8595 = DAT_004c8565 ^ 1;
        DAT_004c8596 = DAT_004c8566 ^ 0xfd;
        DAT_004c8597 = DAT_004c8567 ^ 0x9f;
        DAT_004c8598 = DAT_004c8568 ^ 0x69;
        DAT_004c8599 = DAT_004c8569 ^ 0x65;
        DAT_004c859a = DAT_004c856a ^ 0x13;
        DAT_004c859b = DAT_004c856b ^ 0x52;
        DAT_004c859c = DAT_004c856c ^ 0x8b;
        DAT_004c859d = DAT_004c856d ^ 0x69;
        DAT_004c859e = DAT_004c856e ^ 0x53;
        DAT_004c859f = DAT_004c856f ^ 0x61;
        DAT_004c85a0 = DAT_004c8570 ^ 0xd2;
        DAT_004c85a1 = DAT_004c8571 ^ 0x5f;
        DAT_004c85a2 = DAT_004c8572 ^ 0x20;
        DAT_004c85a3 = DAT_004c8573 ^ 0xaf;
        DAT_004c85a4 = DAT_004c8574 ^ 0xc6;
        DAT_004c85a5 = ~DAT_004c8575;
        DAT_004c85a6 = DAT_004c8576 ^ 0x8f;
        DAT_004c85a7 = DAT_004c8577 ^ 0x3b;
        DAT_004c85a8 = DAT_004c8578 ^ 0x43;
        DAT_004c85a9 = DAT_004c8579 ^ 0x12;
        DAT_004c85aa = DAT_004c857a ^ 0x17;
        DAT_004c85ab = DAT_004c857b ^ 0x96;
        DAT_004c85ac = DAT_004c857c ^ 0x59;
        DAT_004c85ad = DAT_004c857d ^ 0x6f;
        DAT_004c85ae = DAT_004c857e ^ 0x93;
        DAT_004c85af = DAT_004c857f ^ 0x5a;
        DAT_004c85b0 = DAT_004c8580 ^ 0x14;
        DAT_004c85b1 = DAT_004c8581 ^ 0xc0;
        DAT_004c85b2 = DAT_004c8582 ^ 0xb5;
        DAT_004c85b3 = DAT_004c8583 ^ 0xb0;
        DAT_004c85b4 = DAT_004c8584 ^ 0x44;
        DAT_004c85b5 = DAT_004c8585 ^ 0xf6;
        DAT_004c85b6 = DAT_004c8586 ^ 0x7b;
        DAT_004c85b7 = DAT_004c8587 ^ 0x36;
        DAT_004c8750 = DAT_004c8720 ^ 0xe4;
        DAT_004c8751 = DAT_004c8721 ^ 0x58;
        DAT_004c8752 = DAT_004c8722 ^ 1;
        DAT_004c8753 = DAT_004c8723 ^ 0x89;
        DAT_004c8754 = DAT_004c8724 ^ 0x7c;
        DAT_004c8755 = DAT_004c8725 ^ 0x53;
        DAT_004c8756 = DAT_004c8726 ^ 0xcd;
        DAT_004c8757 = DAT_004c8727 ^ 0x44;
        DAT_004c8758 = DAT_004c8728 ^ 200;
        DAT_004c8759 = DAT_004c8729 ^ 0x11;
        DAT_004c875a = DAT_004c872a ^ 0xcd;
        DAT_004c875b = DAT_004c872b ^ 0x42;
        DAT_004c875c = DAT_004c872c ^ 0x6b;
        DAT_004c875d = DAT_004c872d ^ 0xc3;
        DAT_004c875e = DAT_004c872e ^ 0x72;
        DAT_004c875f = DAT_004c872f ^ 0xe1;
        DAT_004c8760 = DAT_004c8730 ^ 0x2e;
        DAT_004c8761 = DAT_004c8731 ^ 0xa1;
        DAT_004c8762 = DAT_004c8732 ^ 0xd0;
        DAT_004c8763 = DAT_004c8733 ^ 0x6d;
        DAT_004c8764 = DAT_004c8734 ^ 0xaa;
        DAT_004c8765 = DAT_004c8735 ^ 0x69;
        DAT_004c8766 = DAT_004c8736 ^ 0x9e;
        DAT_004c8767 = DAT_004c8737 ^ 0xcb;
        DAT_004c8768 = DAT_004c8738 ^ 0x9b;
        DAT_004c8769 = DAT_004c8739 ^ 0x35;
        DAT_004c876a = DAT_004c873a ^ 0x28;
        DAT_004c876b = DAT_004c873b ^ 0xfe;
        DAT_004c876c = DAT_004c873c ^ 0xf0;
        DAT_004c876d = DAT_004c873d ^ 0x3e;
        DAT_004c876e = DAT_004c873e ^ 8;
        DAT_004c876f = DAT_004c873f ^ 0x9f;
        DAT_004c8770 = DAT_004c8740 ^ 9;
        DAT_004c8771 = DAT_004c8741 ^ 0x60;
        DAT_004c8700 = DAT_004c86e0 ^ 0xdc;
        DAT_004c8701 = DAT_004c86e1 ^ 0x60;
        DAT_004c8702 = DAT_004c86e2 ^ 0xa4;
        DAT_004c8703 = DAT_004c86e3 ^ 0xeb;
        DAT_004c8704 = DAT_004c86e4 ^ 0xfe;
        DAT_004c8705 = DAT_004c86e5 ^ 0x85;
        DAT_004c8706 = DAT_004c86e6 ^ 0xde;
        DAT_004c8707 = DAT_004c86e7 ^ 0xf4;
        DAT_004c8708 = DAT_004c86e8 ^ 0x5d;
        DAT_004c8709 = DAT_004c86e9 ^ 0xe8;
        DAT_004c870a = DAT_004c86ea ^ 10;
        DAT_004c870b = DAT_004c86eb ^ 0xde;
        DAT_004c870c = DAT_004c86ec ^ 0x22;
        DAT_004c870d = DAT_004c86ed ^ 0x27;
        DAT_004c870e = DAT_004c86ee ^ 0x6b;
        DAT_004c870f = DAT_004c86ef ^ 0x65;
        DAT_004c8710 = DAT_004c86f0 ^ 0xb1;
        DAT_004c8680 = DAT_004c8660 ^ 0x76;
        DAT_004c8681 = DAT_004c8661 ^ 0xd3;
        DAT_004c8682 = DAT_004c8662 ^ 0x97;
        DAT_004c8683 = DAT_004c8663 ^ 0x13;
        DAT_004c8684 = DAT_004c8664 ^ 0x72;
        DAT_004c8685 = DAT_004c8665 ^ 0xd1;
        DAT_004c8686 = DAT_004c8666 ^ 200;
        DAT_004c8687 = DAT_004c8667 ^ 0x13;
        DAT_004c8688 = DAT_004c8668 ^ 0xe9;
        DAT_004c8689 = DAT_004c8669 ^ 0xd;
        DAT_004c868a = DAT_004c866a ^ 0x85;
        DAT_004c868b = DAT_004c866b ^ 0x37;
        DAT_004c868c = DAT_004c866c ^ 0x4d;
        DAT_004c868d = DAT_004c866d ^ 0x1e;
        DAT_004c868e = DAT_004c866e ^ 0xdb;
        DAT_004c868f = DAT_004c866f ^ 0x7e;
        DAT_004c8690 = DAT_004c8670 ^ 0xab;
        DAT_004c8691 = DAT_004c8671 ^ 0xeb;
        DAT_004c8692 = DAT_004c8672 ^ 0xce;
        DAT_004c8640 = DAT_004c8620 ^ 10;
        DAT_004c8641 = DAT_004c8621 ^ 0xab;
        DAT_004c8642 = DAT_004c8622 ^ 0xb4;
        DAT_004c8643 = DAT_004c8623 ^ 0x36;
        DAT_004c8644 = DAT_004c8624 ^ 0x17;
        DAT_004c8645 = DAT_004c8625 ^ 0x8c;
        DAT_004c8646 = DAT_004c8626 ^ 0x16;
        DAT_004c8647 = DAT_004c8627 ^ 0x51;
        DAT_004c8648 = DAT_004c8628 ^ 0x2f;
        DAT_004c8649 = DAT_004c8629 ^ 0x7c;
        DAT_004c864a = DAT_004c862a ^ 0x2c;
        DAT_004c864b = DAT_004c862b ^ 0x32;
        DAT_004c864c = DAT_004c862c ^ 0x89;
        DAT_004c864d = DAT_004c862d ^ 0x76;
        DAT_004c864e = DAT_004c862e ^ 0x88;
        DAT_004c864f = DAT_004c862f ^ 0x1e;
        DAT_004c8650 = DAT_004c8630 ^ 0xfb;
        DAT_004c8651 = DAT_004c8631 ^ 0x27;
        DAT_004c8652 = DAT_004c8632 ^ 0xb3;
        DAT_004c8653 = DAT_004c8633 ^ 0xee;
        DAT_004c8654 = DAT_004c8634 ^ 10;
        DAT_004c8655 = DAT_004c8635 ^ 0xad;
        DAT_004c8656 = DAT_004c8636 ^ 0xee;
        DAT_004c8657 = DAT_004c8637 ^ 0x32;
        DAT_004c8658 = DAT_004c8638 ^ 0xa4;
        DAT_004c8659 = DAT_004c8639 ^ 0x4a;
        DAT_004c865a = DAT_004c863a ^ 0x9d;
        DAT_004c865b = DAT_004c863b ^ 0x27;
        DAT_004c865c = DAT_004c863c ^ 0x78;
        DAT_004c865d = DAT_004c863d ^ 0xb1;
        DAT_004c865e = DAT_004c863e ^ 0x18;
        DAT_004c85f0 = DAT_004c85c0 ^ 0x3c;
        DAT_004c85f1 = DAT_004c85c1 ^ 0xa0;
        DAT_004c85f2 = DAT_004c85c2 ^ 0x94;
        DAT_004c85f3 = DAT_004c85c3 ^ 0x87;
        DAT_004c85f4 = DAT_004c85c4 ^ 0xca;
        DAT_004c85f5 = DAT_004c85c5 ^ 0x13;
        DAT_004c85f6 = DAT_004c85c6 ^ 0x51;
        DAT_004c85f7 = DAT_004c85c7 ^ 1;
        DAT_004c85f8 = DAT_004c85c8 ^ 0x1f;
        DAT_004c85f9 = DAT_004c85c9 ^ 0x9a;
        DAT_004c85fa = DAT_004c85ca ^ 0x85;
        DAT_004c85fb = DAT_004c85cb ^ 0xed;
        DAT_004c85fc = DAT_004c85cc ^ 0xcc;
        DAT_004c85fd = DAT_004c85cd ^ 1;
        DAT_004c85fe = DAT_004c85ce ^ 0xb8;
        DAT_004c85ff = DAT_004c85cf ^ 0xae;
        DAT_004c8600 = DAT_004c85d0 ^ 0x15;
        DAT_004c8601 = DAT_004c85d1 ^ 0x90;
        DAT_004c8602 = DAT_004c85d2 ^ 0x65;
        DAT_004c8603 = DAT_004c85d3;
        DAT_004c8604 = DAT_004c85d4 ^ 0x2e;
        DAT_004c8605 = DAT_004c85d5 ^ 0x60;
        DAT_004c8606 = DAT_004c85d6 ^ 0x16;
        DAT_004c8607 = DAT_004c85d7 ^ 0x84;
        DAT_004c8608 = DAT_004c85d8 ^ 0x3e;
        DAT_004c8609 = DAT_004c85d9 ^ 0xed;
        DAT_004c860a = DAT_004c85da ^ 0x41;
        DAT_004c860b = DAT_004c85db ^ 0x65;
        DAT_004c860c = DAT_004c85dc ^ 0xce;
        DAT_004c860d = DAT_004c85dd ^ 0x71;
        DAT_004c860e = DAT_004c85de ^ 0xbf;
        DAT_004c860f = DAT_004c85df ^ 0x6f;
        DAT_004c8610 = DAT_004c85e0 ^ 0xf1;
        DAT_004c8611 = DAT_004c85e1 ^ 0xde;
        DAT_004c8612 = DAT_004c85e2 ^ 0x9e;
        DAT_004c8613 = DAT_004c85e3 ^ 0x69;
        DAT_004c8614 = DAT_004c85e4 ^ 0xd7;
        DAT_004c8615 = DAT_004c85e5 ^ 7;
        DAT_004c8616 = DAT_004c85e6 ^ 0x96;
        DAT_004c8617 = DAT_004c85e7 ^ 0xb8;
        DAT_004c8618 = DAT_004c85e8 ^ 0x9e;
        DAT_004c8619 = DAT_004c85e9 ^ 0xd3;
        DAT_004c861a = DAT_004c85ea ^ 0x96;
        DAT_004c8530 = DAT_004c8500 ^ 0x84;
        DAT_004c8531 = DAT_004c8501 ^ 0x91;
        DAT_004c8532 = DAT_004c8502 ^ 0xc1;
        DAT_004c8533 = DAT_004c8503 ^ 0x9a;
        DAT_004c8534 = DAT_004c8504 ^ 0x7e;
        DAT_004c8535 = DAT_004c8505 ^ 0x41;
        DAT_004c8536 = DAT_004c8506 ^ 0x92;
        DAT_004c8537 = DAT_004c8507 ^ 0x38;
        DAT_004c8538 = DAT_004c8508 ^ 0x14;
        DAT_004c8539 = DAT_004c8509 ^ 0x9d;
        DAT_004c853a = DAT_004c850a ^ 0x4f;
        DAT_004c853b = DAT_004c850b ^ 0xdf;
        DAT_004c853c = DAT_004c850c ^ 0x94;
        DAT_004c853d = DAT_004c850d ^ 0xf1;
        DAT_004c853e = DAT_004c850e ^ 0xd6;
        DAT_004c853f = DAT_004c850f ^ 0x90;
        DAT_004c8540 = DAT_004c8510 ^ 0x4d;
        DAT_004c8541 = DAT_004c8511 ^ 0x8a;
        DAT_004c8542 = DAT_004c8512 ^ 0x8f;
        DAT_004c8543 = DAT_004c8513 ^ 0x10;
        DAT_004c8544 = DAT_004c8514 ^ 7;
        DAT_004c8545 = DAT_004c8515 ^ 0x48;
        DAT_004c8546 = DAT_004c8516 ^ 0xc4;
        DAT_004c8547 = DAT_004c8517 ^ 0xf2;
        DAT_004c8548 = DAT_004c8518 ^ 0xaa;
        DAT_004c8549 = DAT_004c8519 ^ 0x75;
        DAT_004c854a = DAT_004c851a ^ 0x46;
        DAT_004c854b = DAT_004c851b ^ 0xdb;
        DAT_004c854c = DAT_004c851c ^ 0xa0;
        DAT_004c854d = DAT_004c851d ^ 0xfb;
        DAT_004c854e = DAT_004c851e ^ 0x8d;
        DAT_004c854f = DAT_004c851f ^ 0xee;
        DAT_004c8550 = DAT_004c8520 ^ 0x53;
        DAT_004c8551 = DAT_004c8521 ^ 0x51;
        DAT_004c8552 = DAT_004c8522 ^ 0x18;
        DAT_004c8553 = DAT_004c8523 ^ 0xa5;
        DAT_004c8554 = DAT_004c8524 ^ 0xc4;
        DAT_004c8555 = DAT_004c8525 ^ 0xcd;
        DAT_004c8556 = DAT_004c8526 ^ 0x28;
        DAT_004c8557 = DAT_004c8527 ^ 0x58;
        DAT_004c8558 = DAT_004c8528 ^ 0xa7;
        DAT_004c8830 = DAT_004c8810 ^ 0xd3;
        DAT_004c8831 = DAT_004c8811 ^ 0x3c;
        DAT_004c8832 = DAT_004c8812 ^ 0x42;
        DAT_004c8833 = DAT_004c8813 ^ 0xac;
        DAT_004c8834 = DAT_004c8814 ^ 0x37;
        DAT_004c8835 = DAT_004c8815 ^ 0xbf;
        DAT_004c8836 = DAT_004c8816 ^ 0x82;
        DAT_004c8837 = DAT_004c8817 ^ 0x43;
        DAT_004c8838 = DAT_004c8818 ^ 0x3f;
        DAT_004c8839 = DAT_004c8819 ^ 0x55;
        DAT_004c883a = DAT_004c881a ^ 0x1f;
        DAT_004c883b = DAT_004c881b ^ 0x96;
        DAT_004c883c = DAT_004c881c ^ 0xdb;
        DAT_004c883d = DAT_004c881d ^ 0x5a;
        DAT_004c883e = DAT_004c881e ^ 0x29;
        DAT_004c883f = DAT_004c881f ^ 0x4e;
        DAT_004c8840 = DAT_004c8820 ^ 0x22;
        DAT_004c8841 = DAT_004c8821 ^ 0xc0;
        DAT_004c8842 = DAT_004c8822 ^ 0xfb;
        DAT_004c8843 = DAT_004c8823 ^ 0x3b;
        DAT_004c8844 = DAT_004c8824 ^ 0xfa;
        DAT_004c8845 = DAT_004c8825 ^ 1;
        DAT_004c8846 = DAT_004c8826 ^ 0x56;
        DAT_004c8847 = DAT_004c8827 ^ 0x2b;
        DAT_004c8848 = DAT_004c8828 ^ 0x22;
        DAT_004c8849 = DAT_004c8829 ^ 0xe4;
        DAT_004c884a = DAT_004c882a ^ 0x33;
        DAT_004c884b = DAT_004c882b ^ 0xba;
        DAT_004c884c = DAT_004c882c ^ 0xf8;
        DAT_004c84d0 = DAT_004c84a0 ^ 0xca;
        DAT_004c84d1 = DAT_004c84a1 ^ 0x70;
        DAT_004c84d2 = DAT_004c84a2 ^ 8;
        DAT_004c84d3 = DAT_004c84a3 ^ 0xd1;
        DAT_004c84d4 = DAT_004c84a4 ^ 0x49;
        DAT_004c84d5 = DAT_004c84a5 ^ 0xa2;
        DAT_004c84d6 = DAT_004c84a6 ^ 0xfd;
        DAT_004c84d7 = DAT_004c84a7 ^ 0x44;
        DAT_004c84d8 = DAT_004c84a8 ^ 0x44;
        DAT_004c84d9 = DAT_004c84a9 ^ 0xad;
        DAT_004c84da = DAT_004c84aa ^ 0xa8;
        DAT_004c84db = DAT_004c84ab ^ 0x59;
        DAT_004c84dc = DAT_004c84ac ^ 0x19;
        DAT_004c84dd = DAT_004c84ad ^ 7;
        DAT_004c84de = DAT_004c84ae ^ 0x9c;
        DAT_004c84df = DAT_004c84af ^ 0x5f;
        DAT_004c84e0 = DAT_004c84b0 ^ 0xf5;
        DAT_004c84e1 = DAT_004c84b1 ^ 0xf1;
        DAT_004c84e2 = DAT_004c84b2 ^ 0xf3;
        DAT_004c84e3 = DAT_004c84b3 ^ 0x78;
        DAT_004c84e4 = DAT_004c84b4 ^ 0x9e;
        DAT_004c84e5 = DAT_004c84b5 ^ 0x5e;
        DAT_004c84e6 = DAT_004c84b6 ^ 0xd2;
        DAT_004c84e7 = DAT_004c84b7 ^ 0xea;
        DAT_004c84e8 = DAT_004c84b8 ^ 0xa0;
        DAT_004c84e9 = DAT_004c84b9 ^ 0xe;
        DAT_004c84ea = DAT_004c84ba ^ 0xcf;
        DAT_004c84eb = DAT_004c84bb ^ 0x54;
        DAT_004c84ec = DAT_004c84bc ^ 0x7d;
        DAT_004c84ed = DAT_004c84bd ^ 0x87;
        DAT_004c84ee = DAT_004c84be ^ 0xa0;
        DAT_004c84ef = DAT_004c84bf ^ 10;
        DAT_004c84f0 = DAT_004c84c0 ^ 99;
        DAT_004c84f1 = DAT_004c84c1 ^ 0x70;
        DAT_004c84f2 = DAT_004c84c2 ^ 0x1b;
        DAT_004c84f3 = DAT_004c84c3 ^ 0xa1;
        DAT_004c84f4 = DAT_004c84c4 ^ 0xb0;
        DAT_004c84f5 = DAT_004c84c5 ^ 0x4f;
        DAT_004c87e3 = DAT_004c87d6 ^ 0x82;
        DAT_004c87e4 = DAT_004c87d7 ^ 0x7d;
        DAT_004c87e5 = DAT_004c87d8 ^ 0x5d;
        DAT_004c87e6 = DAT_004c87d9 ^ 0x5e;
        DAT_004c87e7 = DAT_004c87da ^ 0xa2;
        DAT_004c87e8 = DAT_004c87db ^ 0x36;
        DAT_004c87e9 = DAT_004c87dc ^ 0x4c;
        DAT_004c87ea = DAT_004c87dd ^ 0xa6;
        DAT_004c87eb = DAT_004c87de ^ 0xf;
        DAT_004c87ec = DAT_004c87df ^ 0x9c;
        DAT_004c87ed = DAT_004c87e0 ^ 0x26;
        DAT_004c87ee = DAT_004c87e1 ^ 0xfe;
        DAT_004c87ef = DAT_004c87e2 ^ 0x39;
        DAT_004c8480 = DAT_004c8460 ^ 0x16;
        DAT_004c8481 = DAT_004c8461 ^ 0xea;
        DAT_004c8482 = DAT_004c8462 ^ 0xd0;
        local_2bc = 0x7165d090;
        goto LAB_003eff2c;
      }
      if (local_2bc != 0x43b5456f) goto LAB_003eff2c;
      uVar11 = -(int)((long)((ulong)((DAT_004c9e80 ^ DAT_004c9e84) / 0x29e8e2c4 | 0xe89f1199) *
                            0xec32a4c9) >> 0x3f);
      bVar5 = 0xf37f0efe < uVar11;
      bVar6 = uVar11 == 0xf37f0eff;
      iVar12 = -0x3f43b346;
      local_2bc = 0x132b77ad;
    }
  }
  else {
    if (0x6059ef24 < local_2bc) {
      if (local_2bc < 0x6e60ff93) {
        if (local_2bc < 0x64a4a5fc) {
          if (local_2bc < 0x61f05168) {
            if (local_2bc == 0x6059ef25) {
              local_80 = PTR_s_shared_00489458;
              local_2bc = -0x13b9fc35;
            }
            else if (local_2bc == 0x615cd3bc) {
              _objc_msgSend(local_138,PTR_s_objectForKey__0048a370,local_128);
              _objc_retainAutoreleasedReturnValue();
              local_2bc = -0x18eec568;
            }
            else if (local_2bc == 0x618fcd17) {
              local_2bc = -0x248e57f4;
            }
          }
          else if (local_2bc < 0x622a39ee) {
            if (local_2bc == 0x61f05168) {
              local_2bc = 0x6ccca370;
            }
            else if (local_2bc == 0x6211adce) {
              local_2bc = 0x19461cfc;
            }
          }
          else {
            if (local_2bc == 0x622a39ee) {
              bVar6 = local_219 == '\0';
              iVar12 = -0x787a865d;
              local_2bc = -0x21165b47;
              goto LAB_003f8794;
            }
            if (local_2bc == 0x6303d4b5) {
              local_2bc = -0x48f0781e;
            }
          }
          goto LAB_003eff2c;
        }
        if (0x6621a8f7 < local_2bc) {
          if (local_2bc < 0x6baa7bd4) {
            if (local_2bc == 0x6621a8f8) {
              bVar6 = (DAT_004c9d20 * DAT_004c9d24 + 0x7d58e3cbU) / 0x334ccb11 == 0xcc5c0f53;
              local_2bc = 0x37beb941;
              iVar12 = -0xfb00a75;
              goto LAB_003f86f0;
            }
            if (local_2bc == 0x6a3f84c7) {
              DAT_004d2008 = '\x01';
              local_2bc = 0x320f496;
            }
          }
          else if (local_2bc == 0x6baa7bd4) {
            _objc_release(local_b0);
            local_2bc = 0x5a65b119;
          }
          else if (local_2bc == 0x6ccca370) {
            uVar11 = DAT_004c9f00 - DAT_004c9f04 & 0xd5dc0b2bU | 0xc4980a2b;
            bVar5 = 0x9ac6bbf4 < uVar11;
            bVar6 = uVar11 == 0x9ac6bbf5;
            local_2bc = 0xf10c06e;
            iVar12 = 0xbc16190;
            goto LAB_003f8750;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc != 0x64a4a5fc) {
          if (local_2bc == 0x656925d3) {
            local_2bc = -0x232780e7;
            if (0xde9a3997 < (DAT_004c9dc0 ^ DAT_004c9dc4 ^ 0x40b9063e) / 0x2575410c + 0xd4d28f02) {
              local_2bc = -0xffd089e;
            }
          }
          else if (local_2bc == 0x659d2239) {
            _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                          &PTR____CFConstantStringClassReference_004c8a20);
            _objc_retainAutoreleasedReturnValue();
            local_2bc = 0x6025605d;
          }
          goto LAB_003eff2c;
        }
        uVar11 = ((DAT_004c9ed0 - DAT_004c9ed4) + 0x3d0de2e0U | 0x355836a0) * 0x5f9ad986;
        bVar5 = 0xbc8a9924 < uVar11;
        bVar6 = uVar11 == 0xbc8a9925;
        local_2bc = -0x543f1ad3;
        iVar12 = 0x32df5b35;
      }
      else {
        if (local_2bc < 0x78c31731) {
          if (local_2bc < 0x7165d090) {
            if (local_2bc == 0x6e60ff93) {
              (*pcStack_250)(param_1,local_258,param_3,param_4,param_5);
              local_260 = _objc_retainAutoreleasedReturnValue();
              local_2bc = -0x6c70012b;
            }
            else if (local_2bc == 0x6f3ff952) {
              local_2bc = 0x35decb3e;
            }
            else if (local_2bc == 0x70febd25) {
              local_2bc = -0x3db2058f;
            }
          }
          else if (local_2bc < 0x75b65274) {
            if (local_2bc == 0x7165d090) {
              DAT_004c88bf = local_6e ^ 0x96;
              DAT_004c88c0 = DAT_004c8890 ^ 0x84;
              DAT_004c88c1 = DAT_004c8891 ^ 0x9b;
              DAT_004c88c2 = DAT_004c8892 ^ 0x13;
              DAT_004c88c3 = DAT_004c8893 ^ 0xfc;
              DAT_004c88c4 = DAT_004c8894 ^ 0xc0;
              DAT_004c88c5 = DAT_004c8895 ^ 0xb5;
              DAT_004c88c6 = DAT_004c8896 ^ 0x4d;
              DAT_004c88c7 = DAT_004c8897 ^ 0x29;
              DAT_004c8048 = DAT_004c803d ^ 0xa0;
              DAT_004c8049 = DAT_004c803e ^ 0x41;
              DAT_004c804a = DAT_004c803f ^ 0x9e;
              DAT_004c804b = DAT_004c8040 ^ 7;
              DAT_004c804c = DAT_004c8041 ^ 0x1d;
              DAT_004c804d = DAT_004c8042 ^ 0xda;
              DAT_004c804e = DAT_004c8043 ^ 0x67;
              DAT_004c804f = DAT_004c8044 ^ 0xc4;
              DAT_004c8050 = DAT_004c8045 ^ 0x61;
              DAT_004c8051 = DAT_004c8046 ^ 0xf6;
              DAT_004c8052 = DAT_004c8047 ^ 0x29;
              DAT_004c885c = DAT_004c884d ^ 0x65;
              DAT_004c885d = DAT_004c884e ^ 0x56;
              DAT_004c885e = DAT_004c884f ^ 0x82;
              DAT_004c885f = DAT_004c8850 ^ 0x3b;
              DAT_004c8860 = DAT_004c8851 ^ 0x41;
              DAT_004c8861 = DAT_004c8852 ^ 0x21;
              DAT_004c8862 = DAT_004c8853 ^ 0xc9;
              DAT_004c8863 = DAT_004c8854 ^ 0xa2;
              DAT_004c8864 = DAT_004c8855 ^ 5;
              DAT_004c8865 = DAT_004c8856 ^ 0x47;
              DAT_004c8866 = DAT_004c8857 ^ 0xb5;
              DAT_004c8867 = DAT_004c8858 ^ 0xae;
              DAT_004c8868 = DAT_004c8859 ^ 0xfa;
              DAT_004c8869 = DAT_004c885a ^ 0xd5;
              DAT_004c886a = DAT_004c885b ^ 0xda;
              DAT_004c87fa = DAT_004c87f0 ^ 0xc1;
              DAT_004c87fb = DAT_004c87f1 ^ 0xc0;
              DAT_004c87fc = DAT_004c87f2 ^ 0x16;
              DAT_004c87fd = DAT_004c87f3 ^ 0x15;
              DAT_004c87fe = DAT_004c87f4 ^ 0x73;
              DAT_004c87ff = DAT_004c87f5 ^ 0xe7;
              DAT_004c8800 = DAT_004c87f6 ^ 0x2d;
              DAT_004c8801 = DAT_004c87f7 ^ 0xd9;
              DAT_004c8802 = DAT_004c87f8 ^ 6;
              DAT_004c8803 = DAT_004c87f9 ^ 0xed;
              DAT_004c87b0 = DAT_004c8780 ^ 0x13;
              DAT_004c87b1 = DAT_004c8781 ^ 0x33;
              DAT_004c87b2 = DAT_004c8782 ^ 0x13;
              DAT_004c87b3 = DAT_004c8783 ^ 0xfa;
              DAT_004c87b4 = DAT_004c8784 ^ 0xb9;
              DAT_004c87b5 = DAT_004c8785 ^ 0x8e;
              DAT_004c87b6 = DAT_004c8786 ^ 0x99;
              DAT_004c87b7 = DAT_004c8787 ^ 0xa4;
              DAT_004c87b8 = DAT_004c8788 ^ 0xd4;
              DAT_004c87b9 = DAT_004c8789 ^ 0xd3;
              DAT_004c87ba = DAT_004c878a ^ 0x8e;
              DAT_004c87bb = DAT_004c878b ^ 0x58;
              DAT_004c87bc = DAT_004c878c ^ 0xe9;
              DAT_004c87bd = DAT_004c878d ^ 0xad;
              DAT_004c87be = DAT_004c878e ^ 4;
              DAT_004c87bf = DAT_004c878f ^ 0x2f;
              DAT_004c87c0 = DAT_004c8790 ^ 0x29;
              DAT_004c87c1 = DAT_004c8791 ^ 0xf;
              DAT_004c87c2 = DAT_004c8792 ^ 0xd4;
              DAT_004c87c3 = DAT_004c8793 ^ 0xb2;
              DAT_004c87c4 = DAT_004c8794 ^ 0xe9;
              DAT_004c87c5 = DAT_004c8795 ^ 0x74;
              DAT_004c87c6 = DAT_004c8796 ^ 0xbb;
              DAT_004c87c7 = DAT_004c8797 ^ 0xeb;
              DAT_004c87c8 = DAT_004c8798 ^ 0x15;
              DAT_004c87c9 = DAT_004c8799 ^ 0xf1;
              DAT_004c87ca = DAT_004c879a ^ 0xb7;
              DAT_004c87cb = DAT_004c879b ^ 0x53;
              DAT_004c87cc = DAT_004c879c ^ 0xe;
              DAT_004c87cd = DAT_004c879d ^ 0xda;
              DAT_004c87ce = DAT_004c879e ^ 0xa8;
              DAT_004c87cf = DAT_004c879f ^ 0x7c;
              DAT_004c87d0 = DAT_004c87a0 ^ 0x3d;
              DAT_004c87d1 = DAT_004c87a1 ^ 3;
              DAT_004c87d2 = DAT_004c87a2 ^ 0x9a;
              DAT_004c87d3 = DAT_004c87a3 ^ 0xd0;
              DAT_004c87d4 = DAT_004c87a4 ^ 0xdf;
              DAT_004c87d5 = DAT_004c87a5 ^ 0x80;
              DAT_004c8590 = DAT_004c8560 ^ 0xb;
              DAT_004c8591 = DAT_004c8561 ^ 0x26;
              DAT_004c8592 = DAT_004c8562 ^ 0x3d;
              DAT_004c8593 = DAT_004c8563 ^ 0x69;
              DAT_004c8594 = DAT_004c8564 ^ 0x50;
              DAT_004c8595 = DAT_004c8565 ^ 1;
              DAT_004c8596 = DAT_004c8566 ^ 0xfd;
              DAT_004c8597 = DAT_004c8567 ^ 0x9f;
              DAT_004c8598 = DAT_004c8568 ^ 0x69;
              DAT_004c8599 = DAT_004c8569 ^ 0x65;
              DAT_004c859a = DAT_004c856a ^ 0x13;
              DAT_004c859b = DAT_004c856b ^ 0x52;
              DAT_004c859c = DAT_004c856c ^ 0x8b;
              DAT_004c859d = DAT_004c856d ^ 0x69;
              DAT_004c859e = DAT_004c856e ^ 0x53;
              DAT_004c859f = DAT_004c856f ^ 0x61;
              DAT_004c85a0 = DAT_004c8570 ^ 0xd2;
              DAT_004c85a1 = DAT_004c8571 ^ 0x5f;
              DAT_004c85a2 = DAT_004c8572 ^ 0x20;
              DAT_004c85a3 = DAT_004c8573 ^ 0xaf;
              DAT_004c85a4 = DAT_004c8574 ^ 0xc6;
              DAT_004c85a5 = ~DAT_004c8575;
              DAT_004c85a6 = DAT_004c8576 ^ 0x8f;
              DAT_004c85a7 = DAT_004c8577 ^ 0x3b;
              DAT_004c85a8 = DAT_004c8578 ^ 0x43;
              DAT_004c85a9 = DAT_004c8579 ^ 0x12;
              DAT_004c85aa = DAT_004c857a ^ 0x17;
              DAT_004c85ab = DAT_004c857b ^ 0x96;
              DAT_004c85ac = DAT_004c857c ^ 0x59;
              DAT_004c85ad = DAT_004c857d ^ 0x6f;
              DAT_004c85ae = DAT_004c857e ^ 0x93;
              DAT_004c85af = DAT_004c857f ^ 0x5a;
              DAT_004c85b0 = DAT_004c8580 ^ 0x14;
              DAT_004c85b1 = DAT_004c8581 ^ 0xc0;
              DAT_004c85b2 = DAT_004c8582 ^ 0xb5;
              DAT_004c85b3 = DAT_004c8583 ^ 0xb0;
              DAT_004c85b4 = DAT_004c8584 ^ 0x44;
              DAT_004c85b5 = DAT_004c8585 ^ 0xf6;
              DAT_004c85b6 = DAT_004c8586 ^ 0x7b;
              DAT_004c85b7 = DAT_004c8587 ^ 0x36;
              DAT_004c8750 = DAT_004c8720 ^ 0xe4;
              DAT_004c8751 = DAT_004c8721 ^ 0x58;
              DAT_004c8752 = DAT_004c8722 ^ 1;
              DAT_004c8753 = DAT_004c8723 ^ 0x89;
              DAT_004c8754 = DAT_004c8724 ^ 0x7c;
              DAT_004c8755 = DAT_004c8725 ^ 0x53;
              DAT_004c8756 = DAT_004c8726 ^ 0xcd;
              DAT_004c8757 = DAT_004c8727 ^ 0x44;
              DAT_004c8758 = DAT_004c8728 ^ 200;
              DAT_004c8759 = DAT_004c8729 ^ 0x11;
              DAT_004c875a = DAT_004c872a ^ 0xcd;
              DAT_004c875b = DAT_004c872b ^ 0x42;
              DAT_004c875c = DAT_004c872c ^ 0x6b;
              DAT_004c875d = DAT_004c872d ^ 0xc3;
              DAT_004c875e = DAT_004c872e ^ 0x72;
              DAT_004c875f = DAT_004c872f ^ 0xe1;
              DAT_004c8760 = DAT_004c8730 ^ 0x2e;
              DAT_004c8761 = DAT_004c8731 ^ 0xa1;
              DAT_004c8762 = DAT_004c8732 ^ 0xd0;
              DAT_004c8763 = DAT_004c8733 ^ 0x6d;
              DAT_004c8764 = DAT_004c8734 ^ 0xaa;
              DAT_004c8765 = DAT_004c8735 ^ 0x69;
              DAT_004c8766 = DAT_004c8736 ^ 0x9e;
              DAT_004c8767 = DAT_004c8737 ^ 0xcb;
              DAT_004c8768 = DAT_004c8738 ^ 0x9b;
              DAT_004c8769 = DAT_004c8739 ^ 0x35;
              DAT_004c876a = DAT_004c873a ^ 0x28;
              DAT_004c876b = DAT_004c873b ^ 0xfe;
              DAT_004c876c = DAT_004c873c ^ 0xf0;
              DAT_004c876d = DAT_004c873d ^ 0x3e;
              DAT_004c876e = DAT_004c873e ^ 8;
              DAT_004c876f = DAT_004c873f ^ 0x9f;
              DAT_004c8770 = DAT_004c8740 ^ 9;
              DAT_004c8771 = DAT_004c8741 ^ 0x60;
              DAT_004c8700 = DAT_004c86e0 ^ 0xdc;
              DAT_004c8701 = DAT_004c86e1 ^ 0x60;
              DAT_004c8702 = DAT_004c86e2 ^ 0xa4;
              DAT_004c8703 = DAT_004c86e3 ^ 0xeb;
              DAT_004c8704 = DAT_004c86e4 ^ 0xfe;
              DAT_004c8705 = DAT_004c86e5 ^ 0x85;
              DAT_004c8706 = DAT_004c86e6 ^ 0xde;
              DAT_004c8707 = DAT_004c86e7 ^ 0xf4;
              DAT_004c8708 = DAT_004c86e8 ^ 0x5d;
              DAT_004c8709 = DAT_004c86e9 ^ 0xe8;
              DAT_004c870a = DAT_004c86ea ^ 10;
              DAT_004c870b = DAT_004c86eb ^ 0xde;
              DAT_004c870c = DAT_004c86ec ^ 0x22;
              DAT_004c870d = DAT_004c86ed ^ 0x27;
              DAT_004c870e = DAT_004c86ee ^ 0x6b;
              DAT_004c870f = DAT_004c86ef ^ 0x65;
              DAT_004c8710 = DAT_004c86f0 ^ 0xb1;
              DAT_004c8680 = DAT_004c8660 ^ 0x76;
              DAT_004c8681 = DAT_004c8661 ^ 0xd3;
              DAT_004c8682 = DAT_004c8662 ^ 0x97;
              DAT_004c8683 = DAT_004c8663 ^ 0x13;
              DAT_004c8684 = DAT_004c8664 ^ 0x72;
              DAT_004c8685 = DAT_004c8665 ^ 0xd1;
              DAT_004c8686 = DAT_004c8666 ^ 200;
              DAT_004c8687 = DAT_004c8667 ^ 0x13;
              DAT_004c8688 = DAT_004c8668 ^ 0xe9;
              DAT_004c8689 = DAT_004c8669 ^ 0xd;
              DAT_004c868a = DAT_004c866a ^ 0x85;
              DAT_004c868b = DAT_004c866b ^ 0x37;
              DAT_004c868c = DAT_004c866c ^ 0x4d;
              DAT_004c868d = DAT_004c866d ^ 0x1e;
              DAT_004c868e = DAT_004c866e ^ 0xdb;
              DAT_004c868f = DAT_004c866f ^ 0x7e;
              DAT_004c8690 = DAT_004c8670 ^ 0xab;
              DAT_004c8691 = DAT_004c8671 ^ 0xeb;
              DAT_004c8692 = DAT_004c8672 ^ 0xce;
              DAT_004c8640 = DAT_004c8620 ^ 10;
              DAT_004c8641 = DAT_004c8621 ^ 0xab;
              DAT_004c8642 = DAT_004c8622 ^ 0xb4;
              DAT_004c8643 = DAT_004c8623 ^ 0x36;
              DAT_004c8644 = DAT_004c8624 ^ 0x17;
              DAT_004c8645 = DAT_004c8625 ^ 0x8c;
              DAT_004c8646 = DAT_004c8626 ^ 0x16;
              DAT_004c8647 = DAT_004c8627 ^ 0x51;
              DAT_004c8648 = DAT_004c8628 ^ 0x2f;
              DAT_004c8649 = DAT_004c8629 ^ 0x7c;
              DAT_004c864a = DAT_004c862a ^ 0x2c;
              DAT_004c864b = DAT_004c862b ^ 0x32;
              DAT_004c864c = DAT_004c862c ^ 0x89;
              DAT_004c864d = DAT_004c862d ^ 0x76;
              DAT_004c864e = DAT_004c862e ^ 0x88;
              DAT_004c864f = DAT_004c862f ^ 0x1e;
              DAT_004c8650 = DAT_004c8630 ^ 0xfb;
              DAT_004c8651 = DAT_004c8631 ^ 0x27;
              DAT_004c8652 = DAT_004c8632 ^ 0xb3;
              DAT_004c8653 = DAT_004c8633 ^ 0xee;
              DAT_004c8654 = DAT_004c8634 ^ 10;
              DAT_004c8655 = DAT_004c8635 ^ 0xad;
              DAT_004c8656 = DAT_004c8636 ^ 0xee;
              DAT_004c8657 = DAT_004c8637 ^ 0x32;
              DAT_004c8658 = DAT_004c8638 ^ 0xa4;
              DAT_004c8659 = DAT_004c8639 ^ 0x4a;
              DAT_004c865a = DAT_004c863a ^ 0x9d;
              DAT_004c865b = DAT_004c863b ^ 0x27;
              DAT_004c865c = DAT_004c863c ^ 0x78;
              DAT_004c865d = DAT_004c863d ^ 0xb1;
              DAT_004c865e = DAT_004c863e ^ 0x18;
              DAT_004c85f0 = DAT_004c85c0 ^ 0x3c;
              DAT_004c85f1 = DAT_004c85c1 ^ 0xa0;
              DAT_004c85f2 = DAT_004c85c2 ^ 0x94;
              DAT_004c85f3 = DAT_004c85c3 ^ 0x87;
              DAT_004c85f4 = DAT_004c85c4 ^ 0xca;
              DAT_004c85f5 = DAT_004c85c5 ^ 0x13;
              DAT_004c85f6 = DAT_004c85c6 ^ 0x51;
              DAT_004c85f7 = DAT_004c85c7 ^ 1;
              DAT_004c85f8 = DAT_004c85c8 ^ 0x1f;
              DAT_004c85f9 = DAT_004c85c9 ^ 0x9a;
              DAT_004c85fa = DAT_004c85ca ^ 0x85;
              DAT_004c85fb = DAT_004c85cb ^ 0xed;
              DAT_004c85fc = DAT_004c85cc ^ 0xcc;
              DAT_004c85fd = DAT_004c85cd ^ 1;
              DAT_004c85fe = DAT_004c85ce ^ 0xb8;
              DAT_004c85ff = DAT_004c85cf ^ 0xae;
              DAT_004c8600 = DAT_004c85d0 ^ 0x15;
              DAT_004c8601 = DAT_004c85d1 ^ 0x90;
              DAT_004c8602 = DAT_004c85d2 ^ 0x65;
              DAT_004c8603 = DAT_004c85d3;
              DAT_004c8604 = DAT_004c85d4 ^ 0x2e;
              DAT_004c8605 = DAT_004c85d5 ^ 0x60;
              DAT_004c8606 = DAT_004c85d6 ^ 0x16;
              DAT_004c8607 = DAT_004c85d7 ^ 0x84;
              DAT_004c8608 = DAT_004c85d8 ^ 0x3e;
              DAT_004c8609 = DAT_004c85d9 ^ 0xed;
              DAT_004c860a = DAT_004c85da ^ 0x41;
              DAT_004c860b = DAT_004c85db ^ 0x65;
              DAT_004c860c = DAT_004c85dc ^ 0xce;
              DAT_004c860d = DAT_004c85dd ^ 0x71;
              DAT_004c860e = DAT_004c85de ^ 0xbf;
              DAT_004c860f = DAT_004c85df ^ 0x6f;
              DAT_004c8610 = DAT_004c85e0 ^ 0xf1;
              DAT_004c8611 = DAT_004c85e1 ^ 0xde;
              DAT_004c8612 = DAT_004c85e2 ^ 0x9e;
              DAT_004c8613 = DAT_004c85e3 ^ 0x69;
              DAT_004c8614 = DAT_004c85e4 ^ 0xd7;
              DAT_004c8615 = DAT_004c85e5 ^ 7;
              DAT_004c8616 = DAT_004c85e6 ^ 0x96;
              DAT_004c8617 = DAT_004c85e7 ^ 0xb8;
              DAT_004c8618 = DAT_004c85e8 ^ 0x9e;
              DAT_004c8619 = DAT_004c85e9 ^ 0xd3;
              DAT_004c861a = DAT_004c85ea ^ 0x96;
              DAT_004c8530 = DAT_004c8500 ^ 0x84;
              DAT_004c8531 = DAT_004c8501 ^ 0x91;
              DAT_004c8532 = DAT_004c8502 ^ 0xc1;
              DAT_004c8533 = DAT_004c8503 ^ 0x9a;
              DAT_004c8534 = DAT_004c8504 ^ 0x7e;
              DAT_004c8535 = DAT_004c8505 ^ 0x41;
              DAT_004c8536 = DAT_004c8506 ^ 0x92;
              DAT_004c8537 = DAT_004c8507 ^ 0x38;
              DAT_004c8538 = DAT_004c8508 ^ 0x14;
              DAT_004c8539 = DAT_004c8509 ^ 0x9d;
              DAT_004c853a = DAT_004c850a ^ 0x4f;
              DAT_004c853b = DAT_004c850b ^ 0xdf;
              DAT_004c853c = DAT_004c850c ^ 0x94;
              DAT_004c853d = DAT_004c850d ^ 0xf1;
              DAT_004c853e = DAT_004c850e ^ 0xd6;
              DAT_004c853f = DAT_004c850f ^ 0x90;
              DAT_004c8540 = DAT_004c8510 ^ 0x4d;
              DAT_004c8541 = DAT_004c8511 ^ 0x8a;
              DAT_004c8542 = DAT_004c8512 ^ 0x8f;
              DAT_004c8543 = DAT_004c8513 ^ 0x10;
              DAT_004c8544 = DAT_004c8514 ^ 7;
              DAT_004c8545 = DAT_004c8515 ^ 0x48;
              DAT_004c8546 = DAT_004c8516 ^ 0xc4;
              DAT_004c8547 = DAT_004c8517 ^ 0xf2;
              DAT_004c8548 = DAT_004c8518 ^ 0xaa;
              DAT_004c8549 = DAT_004c8519 ^ 0x75;
              DAT_004c854a = DAT_004c851a ^ 0x46;
              DAT_004c854b = DAT_004c851b ^ 0xdb;
              DAT_004c854c = DAT_004c851c ^ 0xa0;
              DAT_004c854d = DAT_004c851d ^ 0xfb;
              DAT_004c854e = DAT_004c851e ^ 0x8d;
              DAT_004c854f = DAT_004c851f ^ 0xee;
              DAT_004c8550 = DAT_004c8520 ^ 0x53;
              DAT_004c8551 = DAT_004c8521 ^ 0x51;
              DAT_004c8552 = DAT_004c8522 ^ 0x18;
              DAT_004c8553 = DAT_004c8523 ^ 0xa5;
              DAT_004c8554 = DAT_004c8524 ^ 0xc4;
              DAT_004c8555 = DAT_004c8525 ^ 0xcd;
              DAT_004c8556 = DAT_004c8526 ^ 0x28;
              DAT_004c8557 = DAT_004c8527 ^ 0x58;
              DAT_004c8558 = DAT_004c8528 ^ 0xa7;
              DAT_004c8830 = DAT_004c8810 ^ 0xd3;
              DAT_004c8831 = DAT_004c8811 ^ 0x3c;
              DAT_004c8832 = DAT_004c8812 ^ 0x42;
              DAT_004c8833 = DAT_004c8813 ^ 0xac;
              DAT_004c8834 = DAT_004c8814 ^ 0x37;
              DAT_004c8835 = DAT_004c8815 ^ 0xbf;
              DAT_004c8836 = DAT_004c8816 ^ 0x82;
              DAT_004c8837 = DAT_004c8817 ^ 0x43;
              DAT_004c8838 = DAT_004c8818 ^ 0x3f;
              DAT_004c8839 = DAT_004c8819 ^ 0x55;
              DAT_004c883a = DAT_004c881a ^ 0x1f;
              DAT_004c883b = DAT_004c881b ^ 0x96;
              DAT_004c883c = DAT_004c881c ^ 0xdb;
              DAT_004c883d = DAT_004c881d ^ 0x5a;
              DAT_004c883e = DAT_004c881e ^ 0x29;
              DAT_004c883f = DAT_004c881f ^ 0x4e;
              DAT_004c8840 = DAT_004c8820 ^ 0x22;
              DAT_004c8841 = DAT_004c8821 ^ 0xc0;
              DAT_004c8842 = DAT_004c8822 ^ 0xfb;
              DAT_004c8843 = DAT_004c8823 ^ 0x3b;
              DAT_004c8844 = DAT_004c8824 ^ 0xfa;
              DAT_004c8845 = DAT_004c8825 ^ 1;
              DAT_004c8846 = DAT_004c8826 ^ 0x56;
              DAT_004c8847 = DAT_004c8827 ^ 0x2b;
              DAT_004c8848 = DAT_004c8828 ^ 0x22;
              DAT_004c8849 = DAT_004c8829 ^ 0xe4;
              DAT_004c884a = DAT_004c882a ^ 0x33;
              DAT_004c884b = DAT_004c882b ^ 0xba;
              DAT_004c884c = DAT_004c882c ^ 0xf8;
              DAT_004c84d0 = DAT_004c84a0 ^ 0xca;
              DAT_004c84d1 = DAT_004c84a1 ^ 0x70;
              DAT_004c84d2 = DAT_004c84a2 ^ 8;
              DAT_004c84d3 = DAT_004c84a3 ^ 0xd1;
              DAT_004c84d4 = DAT_004c84a4 ^ 0x49;
              DAT_004c84d5 = DAT_004c84a5 ^ 0xa2;
              DAT_004c84d6 = DAT_004c84a6 ^ 0xfd;
              DAT_004c84d7 = DAT_004c84a7 ^ 0x44;
              DAT_004c84d8 = DAT_004c84a8 ^ 0x44;
              DAT_004c84d9 = DAT_004c84a9 ^ 0xad;
              DAT_004c84da = DAT_004c84aa ^ 0xa8;
              DAT_004c84db = DAT_004c84ab ^ 0x59;
              DAT_004c84dc = DAT_004c84ac ^ 0x19;
              DAT_004c84dd = DAT_004c84ad ^ 7;
              DAT_004c84de = DAT_004c84ae ^ 0x9c;
              DAT_004c84df = DAT_004c84af ^ 0x5f;
              DAT_004c84e0 = DAT_004c84b0 ^ 0xf5;
              DAT_004c84e1 = DAT_004c84b1 ^ 0xf1;
              DAT_004c84e2 = DAT_004c84b2 ^ 0xf3;
              DAT_004c84e3 = DAT_004c84b3 ^ 0x78;
              DAT_004c84e4 = DAT_004c84b4 ^ 0x9e;
              DAT_004c84e5 = DAT_004c84b5 ^ 0x5e;
              DAT_004c84e6 = DAT_004c84b6 ^ 0xd2;
              DAT_004c84e7 = DAT_004c84b7 ^ 0xea;
              DAT_004c84e8 = DAT_004c84b8 ^ 0xa0;
              DAT_004c84e9 = DAT_004c84b9 ^ 0xe;
              DAT_004c84ea = DAT_004c84ba ^ 0xcf;
              DAT_004c84eb = DAT_004c84bb ^ 0x54;
              DAT_004c84ec = DAT_004c84bc ^ 0x7d;
              DAT_004c84ed = DAT_004c84bd ^ 0x87;
              DAT_004c84ee = DAT_004c84be ^ 0xa0;
              DAT_004c84ef = DAT_004c84bf ^ 10;
              DAT_004c84f0 = DAT_004c84c0 ^ 99;
              DAT_004c84f1 = DAT_004c84c1 ^ 0x70;
              DAT_004c84f2 = DAT_004c84c2 ^ 0x1b;
              DAT_004c84f3 = DAT_004c84c3 ^ 0xa1;
              DAT_004c84f4 = DAT_004c84c4 ^ 0xb0;
              DAT_004c84f5 = DAT_004c84c5 ^ 0x4f;
              DAT_004c87e3 = DAT_004c87d6 ^ 0x82;
              DAT_004c87e4 = DAT_004c87d7 ^ 0x7d;
              DAT_004c87e5 = DAT_004c87d8 ^ 0x5d;
              DAT_004c87e6 = DAT_004c87d9 ^ 0x5e;
              DAT_004c87e7 = DAT_004c87da ^ 0xa2;
              DAT_004c87e8 = DAT_004c87db ^ 0x36;
              DAT_004c87e9 = DAT_004c87dc ^ 0x4c;
              DAT_004c87ea = DAT_004c87dd ^ 0xa6;
              DAT_004c87eb = DAT_004c87de ^ 0xf;
              DAT_004c87ec = DAT_004c87df ^ 0x9c;
              DAT_004c87ed = DAT_004c87e0 ^ 0x26;
              DAT_004c87ee = DAT_004c87e1 ^ 0xfe;
              DAT_004c87ef = DAT_004c87e2 ^ 0x39;
              DAT_004c8480 = DAT_004c8460 ^ 0x16;
              DAT_004c8481 = DAT_004c8461 ^ 0xea;
              DAT_004c8482 = DAT_004c8462 ^ 0xd0;
              local_2bc = 0x7165d090;
              if ((uint)((ulong)((DAT_004c9cf8 & DAT_004c9cfc) * -0x2bee36e4) * 0xa4598167 >> 0x3f)
                  < 0xe58e16cb) {
                local_2bc = -0x2d6a18c2;
              }
            }
            else if (local_2bc == 0x71882101) {
              uVar11 = ((DAT_004c9df0 + DAT_004c9df4) * 0x7c978ac3 | 0x7530d802U) * -0x73c323f5;
              bVar5 = 0xbb8a2589 < uVar11;
              bVar6 = uVar11 == 0xbb8a258a;
              iVar12 = 0x597599c9;
              local_2bc = -0x135137ee;
              goto LAB_003f8f1c;
            }
          }
          else if (local_2bc == 0x75b65274) {
            _objc_release(local_e0);
            local_2bc = -0x7dd99a62;
          }
          else if (local_2bc == 0x77356ef6) {
            local_2bc = -0x7a695e60;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc < 0x7a9477d3) {
          if (local_2bc == 0x78c31731) {
            _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89a0,
                          &PTR____CFConstantStringClassReference_004c8a20);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_170,PTR_s_parseFloatFromValues__0048bc48,uVar8);
            _objc_release(uVar8);
            local_2bc = 0x58a2a6e0;
          }
          else if (local_2bc == 0x7905576d) {
            _objc_release(local_138);
            _objc_release(local_128);
            local_2bc = 0xb996f8c;
            local_290 = local_288;
          }
          else if (local_2bc == 0x7a807de3) {
            _objc_release(param_1);
            _objc_autoreleaseReturnValue(local_2b8);
            local_2bc = 0x4bb6b511;
          }
          goto LAB_003eff2c;
        }
        if (0x7e3a5b15 < local_2bc) {
          if (local_2bc == 0x7e3a5b16) {
            (*pcStack_108)(param_1,local_110,param_3,param_4,param_5);
            _objc_retainAutoreleasedReturnValue();
            local_2bc = 0x314edce8;
          }
          else if (local_2bc == 0x7ef446a4) {
            local_2bc = -0x7a695e60;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc == 0x7a9477d3) {
          bVar6 = 0x752899c8 < (DAT_004c9e00 + DAT_004c9e04 + 0xb0ac7ba3U & 0x6c38e051) + 0x9e170abf
          ;
          local_2bc = -0x7dd99a62;
          iVar12 = 0x75b65274;
          goto LAB_003f6d90;
        }
        if (local_2bc != 0x7cef935e) goto LAB_003eff2c;
        local_221 = (byte)local_220 & 1;
        uVar11 = (uint)((ulong)((DAT_004c9f48 & DAT_004c9f4c) + 0x637de8d8 & 0xd1b85a0f) *
                        0x5432606b >> 0x3e);
        bVar5 = 0x6877cdd0 < uVar11;
        bVar6 = uVar11 == 0x6877cdd1;
        local_2bc = 0xefffcc6;
        iVar12 = 0x1f5374de;
      }
      goto LAB_003f8750;
    }
    if (local_2bc < 0x58a2a6e0) {
      if (local_2bc < 0x4f594427) {
        if (local_2bc < 0x4d52f7fc) {
          if (local_2bc == 0x4bb6b511) {
            uVar11 = DAT_004c9fb8 & DAT_004c9fbc;
            _objc_release(param_1);
            _objc_autoreleaseReturnValue(local_2b8);
            local_2bc = 0x4bb6b511;
            if (0x8435f16d < (uVar11 & 0xcb88d92b) + 0x2b55f76f) {
              local_2bc = -0x66c83f96;
            }
          }
          else if (local_2bc == 0x4bf34411) {
            local_158 = _objc_msgSend(local_150,PTR_s_init_00489660);
            _objc_msgSend(local_158,PTR_s_setPosition__0048bf38,param_4);
            _objc_msgSend(local_158,PTR_s_setType__0048bf40,param_3);
            uVar8 = _objc_getClass(&DAT_004c87fa);
            _objc_msgSend(uVar8,PTR_s_currentContext_0048b5e0);
            local_160 = _objc_retainAutoreleasedReturnValue();
            uVar8 = _NSClassFromString(&PTR____CFConstantStringClassReference_004c8aa0);
            _objc_msgSend(local_160,PTR_s_getService__0048aaf8,uVar8);
            local_168 = _objc_retainAutoreleasedReturnValue();
          }
          else if (local_2bc == 0x4ce6b63c) {
            local_2bc = 0x4e6a80ef;
          }
          goto LAB_003eff2c;
        }
        if (0x4e6a80ee < local_2bc) {
          if (local_2bc == 0x4e6a80ef) {
            local_2bc = 0x4e6a80ef;
            if (((DAT_004c9d68 | DAT_004c9d6c) * -0x9274d80 & 0x48e6500) < 0xc08e2b51) {
              local_2bc = -0x7e211c01;
            }
          }
          else if (local_2bc == 0x4f56309a) {
            local_2bc = 0x5b966aef;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc == 0x4d52f7fc) {
          local_268 = local_208;
          local_270 = local_210;
          local_278 = local_200;
          goto LAB_003f31ec;
        }
        if (local_2bc != 0x4e559fac) goto LAB_003eff2c;
        local_119 = 0x31 < param_3;
        bVar6 = ((DAT_004c9e78 + DAT_004c9e7c | 0x362dbbdfU) ^ 0x1ac952af) * -0x402be116 ==
                -0x11ab13c0;
        local_2bc = -0x2730ea49;
        iVar12 = -0x7247d867;
      }
      else {
        if (local_2bc < 0x52208f12) {
          if (local_2bc == 0x4f594427) {
            uVar11 = (DAT_004c9ee8 * DAT_004c9eec ^ 0x21d800d0U) & 0xaddf98f4;
            _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89a0,
                          &PTR____CFConstantStringClassReference_004c8a20);
            local_1b0 = _objc_retainAutoreleasedReturnValue();
            bVar5 = 0x56c21dfa < uVar11;
            bVar6 = uVar11 == 0x56c21dfb;
            iVar12 = -0x67a4bc60;
            local_2bc = -0x3733a452;
            goto LAB_003f8f1c;
          }
          if (local_2bc == 0x4f6173f5) {
            local_2bc = -0x77d70921;
          }
          else if (local_2bc == 0x521bac34) {
            bVar6 = 0x1b66bc08 < (DAT_004c9e70 + DAT_004c9e74 & 0x4091914aU) + 0xc297028e;
            iVar12 = -0x2730ea49;
            local_2bc = 0x4e559fac;
            goto LAB_003f8040;
          }
          goto LAB_003eff2c;
        }
        if (0x57997325 < local_2bc) {
          if (local_2bc == 0x57997326) {
            local_ca = local_c9 & 1;
            local_2bc = 0x2076dbd0;
          }
          else if (local_2bc == 0x5882c8ef) {
            local_2bc = -0x45ee972c;
          }
          goto LAB_003eff2c;
        }
        if (local_2bc != 0x52208f12) {
          if (local_2bc == 0x53ee7af7) {
            uVar11 = 0;
            if (DAT_004c9e44 != 0) {
              uVar11 = DAT_004c9e40 / DAT_004c9e44;
            }
            uVar11 = uVar11 / 0x50fd54bb | 0xe7dff16d;
            bVar5 = 0x8136577c < uVar11;
            bVar6 = uVar11 == 0x8136577d;
            local_2bc = -0x35470fda;
            iVar12 = -0x597fc2a3;
            goto LAB_003f8750;
          }
          goto LAB_003eff2c;
        }
        iVar12 = DAT_004c9d88 - DAT_004c9d8c;
        _objc_release(local_a0);
        bVar6 = iVar12 * 0x4f6b3b4f == -0x6b9e3e5d;
        local_2bc = -0x23a16c76;
        iVar12 = 0x3e165439;
      }
LAB_003f818c:
      if (!bVar6) {
        local_2bc = iVar12;
      }
      goto LAB_003eff2c;
    }
    if (local_2bc < 0x5cf596b9) {
      if (local_2bc < 0x5a65b119) {
        if (local_2bc == 0x58a2a6e0) {
          iVar12 = DAT_004c9ec8 * DAT_004c9ecc;
          _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c89a0,
                        &PTR____CFConstantStringClassReference_004c8a20);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          local_180 = PTR_s_parseFloatFromValues__0048bc48;
          local_188 = _objc_msgSend(local_170,PTR_s_parseFloatFromValues__0048bc48,uVar8);
          _objc_release(uVar8);
          bVar6 = (iVar12 * 0x6ea5d724 | 0xc6459138U) * -0x705e8ab7 == -0x4998a889;
          local_2bc = 0x58a2a6e0;
          iVar12 = 0x6211adce;
          goto LAB_003f818c;
        }
        if (local_2bc == 0x597599c9) {
          local_2bc = -0x4f524250;
        }
        else if (local_2bc == 0x59d7fb65) {
          (*pcStack_c0)(param_1,local_c8,param_3,param_4,param_5);
          local_290 = _objc_retainAutoreleasedReturnValue();
          local_2bc = 0xb996f8c;
        }
      }
      else if (local_2bc < 0x5c48d215) {
        if (local_2bc == 0x5a65b119) {
          uVar11 = DAT_004c9d78 * DAT_004c9d7c;
          local_b1 = local_b0 == 0;
          _objc_release();
          local_2bc = -0x604395b7;
          if (0xc196735d < (uint)((ulong)((uVar11 ^ 0x4c0ae2d7) + 0xe937cf03) * 0x65f3288b >> 0x3e))
          {
            local_2bc = 0x5a65b119;
          }
        }
        else if ((local_2bc == 0x5b966aef) &&
                (local_2bc = 0x4e6a80ef,
                0xe8c7ca7e <
                (uint)((ulong)((uint)(DAT_004c9d60 * DAT_004c9d64) / 0x2e6970d + 0xf6a37951) *
                       0x93723ee7 >> 0x3f))) {
          local_2bc = 0x4ce6b63c;
        }
      }
      else {
        if (local_2bc == 0x5c48d215) {
          uVar11 = (DAT_004c9f60 * DAT_004c9f64 + 0xc5c2e8b0U) / 0x5738e68d & 2;
          bVar5 = 0x8bfadd3b < uVar11;
          bVar6 = uVar11 == 0x8bfadd3c;
          iVar12 = -0x6bb93091;
          local_2bc = 0x47a569c4;
          goto LAB_003f8f1c;
        }
        if (local_2bc == 0x5c5579ee) {
          local_2bc = -0x6d2aba08;
        }
      }
      goto LAB_003eff2c;
    }
    if (0x5ead4415 < local_2bc) {
      if (local_2bc < 0x5f5685ea) {
        if (local_2bc == 0x5ead4416) {
          bVar6 = 0x4ceb98a1 <
                  ((DAT_004c9de0 + DAT_004c9de4) * 0x30bb5c67 + 0x2ca9be4eU & 0x54c29e26);
          local_2bc = -0x11034199;
          iVar12 = 0x4b0b809d;
          goto LAB_003f6d90;
        }
        if (local_2bc == 0x5ee71172) {
          local_2bc = 0x7905576d;
          local_288 = local_158;
        }
      }
      else if (local_2bc == 0x5f5685ea) {
        _objc_release(local_a0);
        local_2bc = -0x18287ff;
      }
      else if (local_2bc == 0x6025605d) {
        uVar11 = DAT_004c9f18 - DAT_004c9f1c;
        _objc_msgSend(local_168,local_178,&PTR____CFConstantStringClassReference_004c8a00,
                      &PTR____CFConstantStringClassReference_004c8a20);
        local_1d8 = _objc_retainAutoreleasedReturnValue();
        local_1e0 = PTR_s_parseFloatFromValues__0048bc48;
        bVar6 = 0x8513926f < (uVar11 & 0xccca6cf9 | 0x880c60) + 0x7681633e;
        iVar12 = 0x659d2239;
        local_2bc = 0x5c5579ee;
        goto LAB_003f8040;
      }
      goto LAB_003eff2c;
    }
    if (local_2bc == 0x5cf596b9) {
      local_2bc = 0x320f496;
      goto LAB_003eff2c;
    }
    if (local_2bc != 0x5e0cb4f4) {
      if (local_2bc == 0x5e2e2559) {
        local_2bc = -0x9733006;
      }
      goto LAB_003eff2c;
    }
    local_2a0 = local_278;
    uStack_298 = local_280;
    local_2a8 = local_270;
    local_2b0 = local_268;
    uVar11 = (DAT_004c9f30 + DAT_004c9f34 & 0x850400U) + 0xe97a8472;
    bVar5 = 0xcb486501 < uVar11;
    bVar6 = uVar11 == 0xcb486502;
    iVar12 = 0x44bc9449;
    local_2bc = 0x336572d0;
  }
LAB_003f8f1c:
  if (!bVar5 || bVar6) {
    local_2bc = iVar12;
  }
  goto LAB_003eff2c;
}



// #####################################
// ##### FUN_003da13c @ 003da13c
// #####################################

long FUN_003da13c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                 undefined4 param_9)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  int local_1a4;
  long local_1a0;
  long local_198;
  undefined8 local_190;
  long local_188;
  long local_180;
  undefined8 local_178;
  long local_170;
  code *local_168;
  char local_159;
  long local_158;
  undefined8 local_150;
  double local_148;
  undefined8 local_140;
  long local_138;
  code *local_130;
  byte local_121;
  undefined8 local_120;
  undefined8 local_118;
  char local_109;
  long local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  byte local_e3;
  byte local_e2;
  char local_e1;
  long local_e0;
  char local_d1;
  long local_d0;
  char local_c1;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_93;
  byte local_92;
  char local_91;
  int local_90;
  
  uVar1 = (DAT_004c9120 - DAT_004c9124 & 0x6f8274d4U) + 0x90445e94 & 0x4580ca0c;
  local_1a4 = 0x3ea46f73;
LAB_003da240:
  puVar3 = PTR_s_currentBubble_0048a848;
  if (local_1a4 < 0x5f150dd) {
    if (local_1a4 < -0x42bf03b1) {
      if (local_1a4 < -0x60834705) {
        if (local_1a4 < -0x691dcb0f) {
          if (local_1a4 < -0x7c1f818a) {
            if (-0x7da9d75a < local_1a4) {
              if (local_1a4 == -0x7da9d759) {
                local_1a4 = -0x5b8804bf;
                local_188 = local_138;
              }
              else if (local_1a4 == -0x7d2130ca) {
                _objc_release(local_158);
                _objc_release(local_150);
                local_1a4 = -0x7dc938ed;
              }
              goto LAB_003da240;
            }
            if (local_1a4 != -0x7dc938ed) {
              if (local_1a4 == -0x7dad3b87) {
                uVar9 = (DAT_004c9138 * DAT_004c913c * 0x5d66a168 | 0x84d1f1f5U) + 0x543c535;
                local_91 = local_90 == 0;
                bVar5 = 0xbd134e0b < uVar9;
                bVar6 = uVar9 == 0xbd134e0c;
                local_1a4 = -0x7dad3b87;
                iVar10 = -0x62c07d44;
                goto LAB_003dcbbc;
              }
              goto LAB_003da240;
            }
            iVar10 = DAT_004c9338 * DAT_004c933c;
            _objc_release(local_158);
            _objc_release(local_150);
            bVar6 = (iVar10 * -0x20a07751 | 0xeed2d1U) == 0x78a101c1;
            local_1a4 = -0x7d2130ca;
            iVar10 = -0x4567ccb0;
          }
          else {
            if (local_1a4 < -0x73ffabe8) {
              if (local_1a4 == -0x7c1f818a) {
                DAT_004c82e0 = DAT_004c82c0 ^ 0x24;
                DAT_004c82e1 = DAT_004c82c1 ^ 0x91;
                DAT_004c82e2 = DAT_004c82c2 ^ 0x12;
                DAT_004c82e3 = DAT_004c82c3 ^ 0x52;
                DAT_004c82e4 = DAT_004c82c4 ^ 0xb1;
                local_92 = DAT_004c82c5 ^ 0xad;
                local_1a4 = 0x12ec9eb0;
              }
              else if (local_1a4 == -0x77087135) {
                uVar9 = (DAT_004c9328 | DAT_004c932c | 0xfbffffff) & 0xed782ddb;
                bVar5 = 0xaabb5b8 < uVar9;
                bVar6 = uVar9 == 0xaabb5b9;
                iVar10 = -0x77087135;
                local_1a4 = -0x2a79d163;
                goto LAB_003dd2dc;
              }
              goto LAB_003da240;
            }
            if (local_1a4 != -0x73ffabe8) {
              if (local_1a4 == -0x713dd241) {
                local_1a4 = -0x34e12aaf;
              }
              else if (local_1a4 == -0x6d65e763) {
                local_1a4 = 0x222de53b;
              }
              goto LAB_003da240;
            }
            bVar6 = DAT_004c9150 * DAT_004c9154 == -0x54363a2d;
            local_1a4 = -0x5ab28cfa;
            iVar10 = -0x7c1f818a;
          }
LAB_003dcc4c:
          if (!bVar6) {
            local_1a4 = iVar10;
          }
          goto LAB_003da240;
        }
        if (local_1a4 < -0x66c40a0a) {
          if (local_1a4 < -0x67f0fd29) {
            if (local_1a4 == -0x691dcb0f) {
              uVar9 = 0;
              if (DAT_004c92a4 != 0) {
                uVar9 = DAT_004c92a0 / DAT_004c92a4;
              }
              uVar9 = (uVar9 * -0x2173e449 | 0x24962b45) ^ 0xb56d47a7;
              bVar5 = 0x11143a < uVar9;
              bVar6 = uVar9 == 0x11143b;
              iVar10 = -0x6d65e763;
              local_1a4 = 0x222de53b;
LAB_003dd2dc:
              if (!bVar5 || bVar6) {
                local_1a4 = iVar10;
              }
            }
            else if (local_1a4 == -0x68ab77e5) {
              (*local_168)(param_1,param_2,param_3,param_4,
                           PTR_s_svgImageNamed_size_color_alpha_a_0048bef8,param_6,param_7,param_8,
                           param_9);
              _objc_retainAutoreleasedReturnValue();
              local_1a4 = 0x3f0c5001;
            }
          }
          else if (local_1a4 == -0x67f0fd29) {
            local_1a4 = 0x100d64aa;
          }
          else if (local_1a4 == -0x66f82180) {
            local_1a4 = -0x2b438eee;
          }
          goto LAB_003da240;
        }
        if (-0x647c4a9c < local_1a4) {
          if (local_1a4 == -0x647c4a9b) {
            bVar6 = local_d1 == '\0';
            local_1a4 = -0xb06eb41;
            iVar10 = -0x66c40a0a;
            goto LAB_003dd794;
          }
          if (local_1a4 == -0x62c07d44) {
            local_1a4 = 0x3cbfacd9;
          }
          else if (local_1a4 == -0x614863d1) {
            DAT_004c82e6 = local_93 ^ 0xbc;
            DAT_004c82e7 = DAT_004c82c7 ^ 0xd4;
            DAT_004c82e8 = DAT_004c82c8 ^ 0x5b;
            DAT_004c82e9 = DAT_004c82c9 ^ 0x3f;
            DAT_004c82ea = DAT_004c82ca ^ 0x4e;
            DAT_004c82eb = DAT_004c82cb ^ 0x18;
            DAT_004c82ec = DAT_004c82cc ^ 0x3e;
            DAT_004c82ed = DAT_004c82cd ^ 0x86;
            DAT_004c82ee = DAT_004c82ce ^ 0x44;
            DAT_004c82ef = DAT_004c82cf ^ 0xef;
            DAT_004c82f0 = DAT_004c82d0 ^ 0x37;
            local_1a4 = -0x2aa1d808;
          }
          goto LAB_003da240;
        }
        if (local_1a4 == -0x66c40a0a) {
          local_1a4 = 0x536c8781;
          if ((DAT_004c91c0 * DAT_004c91c4 & 0xb00440cU ^ 0xa008c08 | 0xf4ff13f3) == 0xd22312a5) {
            local_1a4 = -0x30526fa7;
          }
          goto LAB_003da240;
        }
        if (local_1a4 != -0x65dd7666) goto LAB_003da240;
        DAT_004d2054 = 1;
        bVar6 = 0xa51344b0 < (DAT_004c9178 & DAT_004c917c & 0x792097ad ^ 0x65f93cb8) * 0x30305ca7;
        iVar10 = -0x65dd7666;
        local_1a4 = 0x720aa57c;
      }
      else if (local_1a4 < -0x4f09f260) {
        if (local_1a4 < -0x5ab28cfa) {
          if (local_1a4 < -0x5b8804bf) {
            if (local_1a4 == -0x60834705) {
              DAT_004d2054 = 1;
              local_1a4 = -0x65dd7666;
            }
            else if (local_1a4 == -0x5fb030d2) {
              bVar6 = (DAT_004c91d0 | DAT_004c91d4) * 0x7bd1c870 == -0x6f895341;
              iVar10 = -0x3deaade2;
              local_1a4 = 0x4b701f6e;
              goto LAB_003dd668;
            }
            goto LAB_003da240;
          }
          if (local_1a4 != -0x5b8804bf) {
            if (local_1a4 == -0x5b53eafc) {
              local_1a4 = 0x33a9136d;
            }
            goto LAB_003da240;
          }
          local_1a0 = local_188;
          uVar9 = 0;
          if (DAT_004c9344 != 0) {
            uVar9 = DAT_004c9340 / DAT_004c9344;
          }
          bVar6 = (uVar9 / 0x45c8d7a8) * -0x7adf1903 == 0x5373010b;
          iVar10 = 0x5e8d5925;
          local_1a4 = 0x1c3f364;
          goto LAB_003dd668;
        }
        if (local_1a4 < -0x584465ab) {
          if (local_1a4 == -0x5ab28cfa) {
            DAT_004c82e0 = DAT_004c82c0 ^ 0x24;
            DAT_004c82e1 = DAT_004c82c1 ^ 0x91;
            DAT_004c82e2 = DAT_004c82c2 ^ 0x12;
            DAT_004c82e3 = DAT_004c82c3 ^ 0x52;
            DAT_004c82e4 = DAT_004c82c4 ^ 0xb1;
            local_1a4 = -0x7c1f818a;
          }
          else if (local_1a4 == -0x59197990) {
            local_1a4 = 0x344dace9;
          }
          goto LAB_003da240;
        }
        if (local_1a4 != -0x584465ab) {
          if (local_1a4 == -0x571f09b5) {
            local_b0 = PTR_BubbleBoxConfig_0048c990;
            local_1a4 = 0x586a2140;
          }
          else if (local_1a4 == -0x5308401e) {
            _objc_retain(param_4);
            local_1a4 = -0x2332b0fb;
          }
          goto LAB_003da240;
        }
        local_198 = local_180;
        bVar6 = 0xa6253424 < ((DAT_004c9330 + DAT_004c9334 & 0x3eb40e37U) + 0xd9c00db4 & 0xb5600852)
        ;
        iVar10 = -0x7d2130ca;
        local_1a4 = -0x7dc938ed;
      }
      else {
        if (-0x4a73872e < local_1a4) {
          if (local_1a4 < -0x481af79d) {
            if (local_1a4 == -0x4a73872d) {
              uVar9 = (DAT_004c91a0 & DAT_004c91a4) * -0x6a1cf75c + 0x71257ab8 | 0x908cf1f1;
              bVar5 = 0x8f62a34b < uVar9;
              bVar6 = uVar9 == 0x8f62a34c;
              iVar10 = -0x2272a22f;
LAB_003dd1e4:
              local_1a4 = 0x3d941fb0;
              if (!bVar5 || bVar6) {
                local_1a4 = iVar10;
              }
            }
            else if (local_1a4 == -0x484ae86e) {
              bVar6 = (DAT_004c9208 & DAT_004c920c ^ 0x5040a01 | 0xea3b2576) * 0x219bd5e9 ==
                      0x353c2420;
              iVar10 = -0x484ae86e;
              local_1a4 = -0x42bf03b1;
              goto LAB_003dd744;
            }
          }
          else if (local_1a4 == -0x481af79d) {
            local_b8 = PTR_s_shared_00489458;
            _objc_msgSend(local_b0);
            local_c0 = _objc_retainAutoreleasedReturnValue();
            local_1a4 = 0xd490503;
          }
          else if (local_1a4 == -0x4567ccb0) {
            local_1a4 = -0x5b8804bf;
            local_188 = local_198;
          }
          else if ((local_1a4 == -0x44769761) &&
                  (local_1a4 = 0x12d1770b,
                  (((DAT_004c9270 ^ DAT_004c9274) & 0x49c8268a) + 0xee244952 ^ 0xe401a879) <
                  0x8e8dc8ea)) {
            local_1a4 = -0x36b76e89;
          }
          goto LAB_003da240;
        }
        if (-0x4e45b180 < local_1a4) {
          if (local_1a4 == -0x4e45b17f) {
            local_1a4 = 0xf4da9e7;
            if (0x6e656511 < ((DAT_004c9300 | DAT_004c9304) + 0x6f7f71e3 & 0x28750786)) {
              local_1a4 = -0x2df4d486;
            }
          }
          else {
            if (local_1a4 == -0x4dc79bb8) {
              bVar6 = local_e3 == 0;
              local_1a4 = 0x21e30851;
              iVar10 = 0x326447ac;
              goto LAB_003dd794;
            }
            if (local_1a4 == -0x4c7d311a) {
              uVar9 = 0;
              if (DAT_004c926c != 0) {
                uVar9 = DAT_004c9268 / DAT_004c926c;
              }
              local_109 = local_108 == 1;
              bVar6 = 0x1ddceee < uVar9 + 0x3162f395;
              local_1a4 = -0x4c7d311a;
              iVar10 = 0x11cea333;
              goto LAB_003dce44;
            }
          }
          goto LAB_003da240;
        }
        if (local_1a4 != -0x4f09f260) {
          if (local_1a4 == -0x4e875ccc) {
            _objc_release(local_d0);
            local_1a4 = -0x3c10d78c;
          }
          goto LAB_003da240;
        }
        bVar6 = 0x3188fbcd < ((DAT_004c91e0 - DAT_004c91e4 & 0x5309f570U) + 0x7d76f99f ^ 0x10da9247)
        ;
        iVar10 = -0x2f24fa5f;
        local_1a4 = 0x104ddbf0;
      }
LAB_003dd528:
      if (bVar6) {
        local_1a4 = iVar10;
      }
      goto LAB_003da240;
    }
    if (local_1a4 < -0x243b6cbc) {
      if (local_1a4 < -0x3510c910) {
        if (local_1a4 < -0x3dd411e3) {
          if (local_1a4 < -0x404647f4) {
            if (local_1a4 == -0x42bf03b1) {
              local_1a4 = -0xafaf374;
LAB_003dc8fc:
              local_178 = local_c0;
            }
            else if (local_1a4 == -0x41140ad0) {
              _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_b8);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar7,PTR_s_currentBubble_0048a848);
              local_d0 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar7);
              local_1a4 = 0x2accebc8;
            }
          }
          else if (local_1a4 == -0x404647f4) {
            local_1a4 = -0x4dc79bb8;
          }
          else if (local_1a4 == -0x3deaade2) {
            bVar6 = 0x14edc590 <
                    ((uint)((ulong)(DAT_004c91d8 ^ DAT_004c91dc) * 0xace691d1 >> 0x3e) * -0x2f84a62d
                    | 0x28e25827);
            local_1a4 = 0x4b701f6e;
            iVar10 = -0xf7d72c8;
            goto LAB_003dce44;
          }
        }
        else if (local_1a4 < -0x3afa3535) {
          if (local_1a4 == -0x3dd411e3) {
            local_1a4 = -0x5fb030d2;
          }
          else if (local_1a4 == -0x3c10d78c) {
            uVar9 = (DAT_004c91f8 ^ DAT_004c91fc | 0x9c067a02) + 0xfb297cba;
            _objc_release(local_d0);
            bVar5 = 0xdb3b7953 < uVar9;
            bVar6 = uVar9 == 0xdb3b7954;
            iVar10 = -0x3c10d78c;
            local_1a4 = -0xa0302d5;
            goto LAB_003dd2dc;
          }
        }
        else if (local_1a4 == -0x3afa3535) {
          _objc_msgSend(puStack_f0,local_f8);
          local_100 = _objc_retainAutoreleasedReturnValue();
          local_108 = _objc_msgSend(local_100,PTR_s_assetsLoadMode_0048af40);
          local_1a4 = 0x775575c;
        }
        else if (local_1a4 == -0x3713b758) {
          local_1a4 = -0x16ec00bf;
        }
        else if (local_1a4 == -0x36b76e89) {
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_1a4 = 0x12d1770b;
        }
        goto LAB_003da240;
      }
      if (local_1a4 < -0x2eb6b9b6) {
        if (local_1a4 < -0x34dff8ca) {
          if (local_1a4 == -0x3510c910) {
            local_1a4 = 0x41192c0f;
          }
          else if (local_1a4 == -0x34e12aaf) {
            local_d1 = local_d0 == 0;
            bVar6 = (uint)((DAT_004c91b8 - DAT_004c91bc) * 0x168a5e39) / 0x8f99341 == 0x64b0ef49;
            local_1a4 = -0x34e12aaf;
            iVar10 = 0x47a4b465;
            goto LAB_003dcc4c;
          }
        }
        else if (local_1a4 == -0x34dff8ca) {
          _objc_release(local_d0);
          _objc_release(local_c0);
        }
        else if (local_1a4 == -0x30526fa7) {
          _objc_msgSend(local_d0,PTR_s_name_0048a060);
          _objc_retainAutoreleasedReturnValue();
          local_1a4 = 0x536c8781;
        }
        else if (local_1a4 == -0x2f24fa5f) {
          local_e1 = local_e0 == 0;
          _objc_release();
          local_1a4 = -0x1f2c82f2;
        }
        goto LAB_003da240;
      }
      if (local_1a4 < -0x2b438eee) {
        if (local_1a4 == -0x2eb6b9b6) {
          local_1a4 = -0x77087135;
        }
        else if (local_1a4 == -0x2df4d486) {
          local_1a4 = 0xf4da9e7;
        }
        goto LAB_003da240;
      }
      if (local_1a4 != -0x2b438eee) {
        if (local_1a4 == -0x2aa1d808) {
          DAT_004c82e6 = local_93 ^ 0xbc;
          DAT_004c82e7 = DAT_004c82c7 ^ 0xd4;
          DAT_004c82e8 = DAT_004c82c8 ^ 0x5b;
          DAT_004c82e9 = DAT_004c82c9 ^ 0x3f;
          DAT_004c82ea = DAT_004c82ca ^ 0x4e;
          DAT_004c82eb = DAT_004c82cb ^ 0x18;
          DAT_004c82ec = DAT_004c82cc ^ 0x3e;
          DAT_004c82ed = DAT_004c82cd ^ 0x86;
          DAT_004c82ee = DAT_004c82ce ^ 0x44;
          DAT_004c82ef = DAT_004c82cf ^ 0xef;
          DAT_004c82f0 = DAT_004c82d0 ^ 0x37;
          local_1a4 = -0x3510c910;
          if (DAT_004c9168 * DAT_004c916c * 0x351b6de0 == -0x27405415) {
            local_1a4 = -0x2aa1d808;
          }
        }
        else if (local_1a4 == -0x2a79d163) {
          local_1a4 = -0x584465ab;
          local_180 = local_170;
        }
        goto LAB_003da240;
      }
      uVar9 = 0;
      if (DAT_004c9244 != 0) {
        uVar9 = DAT_004c9240 / DAT_004c9244;
      }
      bVar6 = (uint)((ulong)uVar9 * 0x47417f4b >> 0x3d) * -0x24edc88 == -0x110ec610;
      iVar10 = 0x5af3943c;
      local_1a4 = 0x30e7c176;
LAB_003dd668:
      if (!bVar6) {
        local_1a4 = iVar10;
      }
      goto LAB_003da240;
    }
    if (-0x12224f14 < local_1a4) {
      if (-0xafaf375 < local_1a4) {
        if (local_1a4 < -0x334f643) {
          if (local_1a4 == -0xafaf374) {
            local_190 = local_178;
            uVar9 = 0;
            if (DAT_004c9294 != 0) {
              uVar9 = DAT_004c9290 / DAT_004c9294;
            }
            local_1a4 = 0x39ef01eb;
            if ((uVar9 + 0x667030f | 0x77086427) < 0x3d66c600) {
              local_1a4 = 0x7a69ef02;
            }
          }
          else if (local_1a4 == -0xa0302d5) {
            local_1a4 = 0x197d60bf;
          }
        }
        else if (local_1a4 == -0x334f643) {
          _objc_msgSend(PTR_BubbleBoxAssets_0048cad0,PTR_s_svgImageNamed_fromConfig__0048b0e0,
                        param_6,local_150);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (local_1a4 == 0x1c3f364) {
          _objc_release(param_7);
          _objc_release(param_6);
          _objc_release(param_4);
          _objc_autoreleaseReturnValue(local_1a0);
        }
        else if (local_1a4 == 0x45a389c) {
          local_1a4 = 0x4e743ad6;
        }
        goto LAB_003da240;
      }
      if (local_1a4 < -0xf7d72c8) {
        if (local_1a4 == -0x12224f13) {
          local_1a4 = 0x15c42a89;
          if ((uint)((ulong)((DAT_004c9210 ^ DAT_004c9214) / 0x3ee78701 + 0xefb1cb0c >> 1) *
                     0x202f0f7b >> 0x3b) < 0xd6634b38) {
            local_1a4 = 0x5f150dd;
          }
        }
        else if (local_1a4 == -0x111fb257) {
          local_1a4 = 0x598a7721;
        }
        goto LAB_003da240;
      }
      if (local_1a4 == -0xf7d72c8) {
        local_1a4 = -0x4f09f260;
        goto LAB_003da240;
      }
      if (local_1a4 == -0xba1d4f8) {
        _objc_msgSend(local_118,PTR_s_currentBubble_0048a848);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_release(local_118);
        puVar4 = PTR_s_isMergeBubble_0048bef0;
        DAT_004d2009 = _objc_msgSend(uVar7,PTR_s_isMergeBubble_0048bef0);
        _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_f8);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,puVar3);
        uVar8 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar8,puVar4);
        _objc_release(uVar8);
        _objc_release(uVar7);
        local_1a4 = 0x22218763;
        goto LAB_003da240;
      }
      if (local_1a4 != -0xb06eb41) goto LAB_003da240;
      uVar9 = 0;
      if (DAT_004c91f4 != 0) {
        uVar9 = DAT_004c91f0 / DAT_004c91f4;
      }
      bVar6 = 0xf2ea0958 < uVar9 * -0xf7bbafc + 0x1653380b;
      local_1a4 = -0x3c10d78c;
      iVar10 = -0x4e875ccc;
      goto LAB_003dce44;
    }
    if (local_1a4 < -0x1fd283ef) {
      if (local_1a4 < -0x228e05a7) {
        if (local_1a4 == -0x243b6cbc) {
          local_1a4 = -0x7dad3b87;
        }
        else if (local_1a4 == -0x2332b0fb) {
          uVar9 = 0;
          if (DAT_004c918c != 0) {
            uVar9 = DAT_004c9188 / DAT_004c918c;
          }
          uVar9 = (uVar9 & 0x13a00b76) * 0x7c0cbb1f | 0xe3f7848d;
          _objc_retain(param_4);
          bVar5 = 0x8414b850 < uVar9;
          bVar6 = uVar9 == 0x8414b851;
          iVar10 = -0x5308401e;
          local_1a4 = -0x67f0fd29;
          local_a8 = param_2;
          uStack_a0 = param_1;
          goto LAB_003dd2dc;
        }
        goto LAB_003da240;
      }
      if (local_1a4 != -0x228e05a7) {
        if (local_1a4 == -0x2272a22f) {
          _objc_msgSend(local_c0,PTR_s_enabled_0048a890);
          local_1a4 = 0x3d941fb0;
        }
        goto LAB_003da240;
      }
      bVar6 = local_159 == '\0';
      local_1a4 = -0x4e45b17f;
      iVar10 = 0x4101cc24;
    }
    else {
      if (local_1a4 < -0x1f2c82f2) {
        if (local_1a4 == -0x1fd283ef) {
          local_1a4 = 0x307ecb3b;
        }
        else if (local_1a4 == -0x1f34224b) {
          local_1a4 = -0x584465ab;
          local_180 = local_158;
        }
        goto LAB_003da240;
      }
      if (local_1a4 != -0x1f2c82f2) {
        if (local_1a4 == -0x16ec00bf) {
          bVar6 = (uint)((ulong)((DAT_004c9320 & DAT_004c9324) + 0x595fb146) * 0x19ae98f9 >> 0x3a) *
                  0x5f319633 == 0xc8d157f;
          local_1a4 = -0x77087135;
          iVar10 = -0x2eb6b9b6;
          goto LAB_003dd794;
        }
        if (local_1a4 == -0x14e1cb3c) {
          bVar6 = (DAT_004c92f8 & DAT_004c92fc & 0xe49c62f6 | 0x80080264) / 0x73bf3bf < 0xf5d168b6;
          local_1a4 = 0x286c0ea9;
          iVar10 = -0x1f34224b;
          goto LAB_003dce44;
        }
        goto LAB_003da240;
      }
      bVar6 = local_e1 == '\0';
      local_1a4 = -0xb06eb41;
      iVar10 = -0x12224f13;
    }
  }
  else {
    if (0x3d941faf < local_1a4) {
      if (local_1a4 < 0x55545dab) {
        if (local_1a4 < 0x451108c0) {
          if (local_1a4 < 0x4101cc24) {
            if (local_1a4 < 0x3ea988fc) {
              if (local_1a4 == 0x3d941fb0) {
                uVar9 = (DAT_004c91a8 * DAT_004c91ac * 0x72dd205 | 0x13d5d5cbU) * -0x287cb236;
                local_c1 = _objc_msgSend(local_c0,PTR_s_enabled_0048a890);
                bVar5 = 0xdd7113f7 < uVar9;
                bVar6 = uVar9 == 0xdd7113f8;
                iVar10 = 0x59991a85;
                goto LAB_003dd1e4;
              }
              if (local_1a4 != 0x3ea46f73) goto LAB_003da240;
              bVar5 = 0xaa31053a < uVar1;
              bVar6 = uVar1 == 0xaa31053b;
              local_1a4 = 0x610dc5cf;
              iVar10 = 0x41e40049;
            }
            else {
              if (local_1a4 == 0x3ea988fc) {
                bVar6 = 0xaec3956 < (DAT_004c9310 * DAT_004c9314 & 0x21cc5a0U ^ 0x62d9c112);
                local_1a4 = -0x68ab77e5;
                iVar10 = 0x3f0c5001;
                goto LAB_003dce44;
              }
              if (local_1a4 != 0x3f0c5001) goto LAB_003da240;
              uVar9 = (DAT_004c9318 * DAT_004c931c ^ 0x8082U) & 0x8d9e;
              (*local_168)(param_1,param_2,param_3,param_4,
                           PTR_s_svgImageNamed_size_color_alpha_a_0048bef8,param_6,param_7,param_8,
                           param_9);
              local_170 = _objc_retainAutoreleasedReturnValue();
              bVar5 = 0x21de2d3a < uVar9;
              bVar6 = uVar9 == 0x21de2d3b;
              local_1a4 = -0x68ab77e5;
              iVar10 = -0x3713b758;
            }
LAB_003dcbbc:
            if (!bVar5 || bVar6) {
              local_1a4 = iVar10;
            }
            goto LAB_003da240;
          }
          if (0x41e40048 < local_1a4) {
            if (local_1a4 == 0x41e40049) {
              local_90 = DAT_004d2054;
              bVar6 = (DAT_004c9128 * DAT_004c912c & 0x335e8b1U | 0x310a811) * 0x5e8dda40 ==
                      0x30ecd12b;
              iVar10 = 0x610dc5cf;
              local_1a4 = 0x6a2cd72;
              goto LAB_003dd744;
            }
            if (local_1a4 == 0x442eb16f) {
              _objc_getClass(&DAT_004c82e0);
              local_1a4 = 0x5d38947f;
            }
            else if (local_1a4 == 0x4459832f) {
              local_1a4 = 0x3282f3f7;
            }
            goto LAB_003da240;
          }
          if (local_1a4 == 0x4101cc24) {
            _objc_retain(local_158);
            local_1a4 = 0x69047f85;
            goto LAB_003da240;
          }
          if (local_1a4 != 0x41192c0f) goto LAB_003da240;
          bVar6 = 0xe1358de6 < (DAT_004c9170 & DAT_004c9174) * -0x1dfd2763 + 0x27ab49d4;
          local_1a4 = -0x65dd7666;
          iVar10 = -0x60834705;
        }
        else {
          if (0x517d6c64 < local_1a4) {
            if (local_1a4 < 0x53274ec9) {
              if (local_1a4 == 0x517d6c65) {
                local_1a4 = -0x614863d1;
                if (0x2567cb43 < (DAT_004c9160 | DAT_004c9164) + 0x4d11778d) {
                  local_1a4 = -0x2aa1d808;
                }
              }
              else if (local_1a4 == 0x5294afdb) {
                local_1a4 = -0x4c7d311a;
              }
            }
            else if (local_1a4 == 0x53274ec9) {
              local_1a4 = 0x2fc64636;
            }
            else if (local_1a4 == 0x536c8781) {
              uVar9 = DAT_004c91c8 - DAT_004c91cc;
              _objc_msgSend(local_d0,PTR_s_name_0048a060);
              local_e0 = _objc_retainAutoreleasedReturnValue();
              local_1a4 = 0x536c8781;
              if ((uVar9 | 0x21c81ad5) / 0xd698925 != 0x40c8f) {
                local_1a4 = -0x3dd411e3;
              }
            }
            else if (local_1a4 == 0x55283874) {
              _objc_release(local_d0);
              _objc_release(local_c0);
              local_1a4 = -0x34dff8ca;
            }
            goto LAB_003da240;
          }
          if (0x47a4b464 < local_1a4) {
            if (local_1a4 == 0x47a4b465) {
              local_1a4 = -0x647c4a9b;
            }
            else if (local_1a4 == 0x4b701f6e) {
              local_1a4 = -0x3deaade2;
            }
            else if (local_1a4 == 0x4e743ad6) {
              bVar6 = (uint)((ulong)((DAT_004c9250 | DAT_004c9254) + 0x69473541 & 0xc4212e2c) *
                             0x6bfa2e19 >> 0x3e) == 0xb5ee8e26;
              local_1a4 = -0x1fd283ef;
              iVar10 = 0x307ecb3b;
              goto LAB_003dcc4c;
            }
            goto LAB_003da240;
          }
          if (local_1a4 == 0x451108c0) {
            bVar2 = local_121 & DAT_004d2009;
            _objc_release(local_120);
            _objc_release(local_100);
            bVar6 = (bVar2 & 1) == 0;
            iVar10 = -0x691dcb0f;
            local_1a4 = 0x21e30851;
            goto LAB_003dd744;
          }
          if (local_1a4 != 0x46994e4a) goto LAB_003da240;
          bVar6 = 0x208ca95c <
                  ((DAT_004c92b8 & DAT_004c92bc & 0xb22480ae) * -0x535965f | 0x46458292);
          local_1a4 = 0x39906fb0;
          iVar10 = -0x7da9d759;
        }
      }
      else {
        if (0x5f30cebc < local_1a4) {
          if (local_1a4 < 0x6a9c9773) {
            if (local_1a4 < 0x62fc9c50) {
              if (local_1a4 == 0x5f30cebd) {
                local_1a4 = -0x484ae86e;
              }
              else if (local_1a4 == 0x610dc5cf) {
                local_1a4 = 0x41e40049;
              }
            }
            else {
              if (local_1a4 == 0x62fc9c50) {
                _objc_msgSend(0,0,uStack_a0,local_a8,local_148,param_3,local_140,
                              PTR_s_imageConfigWithTintColor_bounds__0048bf00,param_7);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_003dc8d8;
              }
              if (local_1a4 == 0x69047f85) {
                bVar6 = ((DAT_004c92f0 | DAT_004c92f4) * -0x21e51af5) / 0x166f556b == 0xfb433d23;
                local_1a4 = -0x14e1cb3c;
                iVar10 = 0x286c0ea9;
                goto LAB_003dd794;
              }
              if (local_1a4 == 0x6a7d680e) {
                _objc_msgSend(local_b0,PTR_s_shared_00489458);
                _objc_retainAutoreleasedReturnValue();
                local_1a4 = -0x481af79d;
              }
            }
          }
          else if (local_1a4 < 0x78adf143) {
            if (local_1a4 == 0x6a9c9773) {
              local_1a4 = -0x691dcb0f;
            }
            else if (local_1a4 == 0x720aa57c) {
              local_1a4 = 0x571c3926;
            }
            else if (local_1a4 == 0x709f7d75) {
              return local_1a0;
            }
          }
          else {
            if (local_1a4 == 0x78adf143) {
              bVar6 = local_91 == '\0';
              iVar10 = 0x41192c0f;
              local_1a4 = -0x73ffabe8;
              goto LAB_003dd744;
            }
            if (local_1a4 == 0x7a69ef02) {
              _objc_release(local_190);
              local_1a4 = 0x39ef01eb;
            }
          }
          goto LAB_003da240;
        }
        if (local_1a4 < 0x598a7721) {
          if (local_1a4 < 0x586a2140) {
            if (local_1a4 == 0x55545dab) {
              (*local_130)(param_1,param_2,param_3,param_4,
                           PTR_s_svgImageNamed_size_color_alpha_a_0048bef8,param_6,param_7,param_8,
                           param_9);
              local_138 = _objc_retainAutoreleasedReturnValue();
              local_1a4 = 0x590ae938;
            }
            else if (local_1a4 == 0x571c3926) {
              uVar9 = 0;
              if (DAT_004c9184 != 0) {
                uVar9 = DAT_004c9180 / DAT_004c9184;
              }
              uVar9 = (uVar9 | 0xfb9fa44) * -0x27016010 & 0xd348fb20;
              bVar5 = 0xb0e6909 < uVar9;
              bVar6 = uVar9 == 0xb0e690a;
              local_1a4 = -0x2332b0fb;
              iVar10 = -0x5308401e;
              goto LAB_003dcbbc;
            }
            goto LAB_003da240;
          }
          if (local_1a4 != 0x586a2140) {
            if (local_1a4 == 0x590ae938) {
              uVar9 = 0;
              if (DAT_004c92b4 != 0) {
                uVar9 = DAT_004c92b0 / DAT_004c92b4;
              }
              bVar6 = 0xe044cbc7 <
                      ((uint)((ulong)(uVar9 + 0x1aefae43) * 0x12920339 >> 0x3b) | 0xce0e1b28);
              local_1a4 = 0x46994e4a;
              iVar10 = 0x39906fb0;
              goto LAB_003dce44;
            }
            goto LAB_003da240;
          }
          uVar9 = 0;
          if (DAT_004c9194 != 0) {
            uVar9 = DAT_004c9190 / DAT_004c9194;
          }
          bVar6 = 0xfc720371 < (uVar9 + 0x71273fc2 ^ 0xb2d929bb);
          local_1a4 = -0x481af79d;
          iVar10 = 0x6a7d680e;
        }
        else {
          if (local_1a4 < 0x5af3943c) {
            if (local_1a4 == 0x598a7721) {
              bVar6 = (DAT_004c9148 + DAT_004c914c & 0x4a012U ^ 0x64700b | 0xdd1b0f84) == 0x6d792e1;
              local_1a4 = -0x111fb257;
              iVar10 = 0x78adf143;
              goto LAB_003dcc4c;
            }
            if (local_1a4 == 0x59991a85) {
              local_1a4 = -0x41140ad0;
              if (local_c1 == '\0') {
                local_1a4 = -0xafaf374;
              }
              goto LAB_003dc8fc;
            }
            goto LAB_003da240;
          }
          if (local_1a4 == 0x5af3943c) {
            uVar9 = (DAT_004c9248 | DAT_004c924c) + 0x4f9e4c34 & 0xc977f0e4;
            local_e2 = DAT_004d2009;
            bVar5 = 0x9927d550 < uVar9;
            bVar6 = uVar9 == 0x9927d551;
            local_1a4 = 0x5af3943c;
            iVar10 = 0x45a389c;
            goto LAB_003dcbbc;
          }
          if (local_1a4 != 0x5d38947f) {
            if (local_1a4 == 0x5e8d5925) {
              uVar9 = DAT_004c9348 * DAT_004c934c * -0xf6f6e23 + 0x9da1e6c8U & 0xdea8a58c;
              _objc_release(param_7);
              _objc_release(param_6);
              _objc_release(param_4);
              _objc_autoreleaseReturnValue(local_1a0);
              bVar5 = 0x6b77c72e < uVar9;
              bVar6 = uVar9 == 0x6b77c72f;
              iVar10 = 0x5e8d5925;
              local_1a4 = 0x709f7d75;
              goto LAB_003dd2dc;
            }
            goto LAB_003da240;
          }
          uVar9 = DAT_004c92c8 | DAT_004c92cc;
          local_140 = _objc_getClass(&DAT_004c82e0);
          bVar6 = 0xb0b9bab < ((uVar9 & 0x890518cc) / 0x10663e7 | 0x9e766c67);
          local_1a4 = 0x442eb16f;
          iVar10 = -0x59197990;
          local_148 = (double)param_8;
        }
      }
LAB_003dce44:
      if (bVar6) {
        local_1a4 = iVar10;
      }
      goto LAB_003da240;
    }
    if (0x21e30850 < local_1a4) {
      if (local_1a4 < 0x311d7b6d) {
        if (0x2accebc7 < local_1a4) {
          if (local_1a4 < 0x2fc64636) {
            if (local_1a4 == 0x2accebc8) {
              local_1a4 = -0x34e12aaf;
            }
            else if (local_1a4 == 0x2bc7fbed) {
              bVar6 = (DAT_004c92e0 & DAT_004c92e4) * 0x2a5d3042 == 0x4a0e521c;
              local_1a4 = 0x8ae422f;
              iVar10 = -0x334f643;
              goto LAB_003dd794;
            }
          }
          else {
            if (local_1a4 == 0x2fc64636) {
              bVar6 = 0x9ddfb591 <
                      (DAT_004c9238 * DAT_004c923c * 0xcd40264 ^ 0x5888b8acU) + 0x7cc49a6c;
              iVar10 = 0x2fc64636;
              local_1a4 = -0x66f82180;
              goto LAB_003dd528;
            }
            if (local_1a4 == 0x307ecb3b) {
              local_e3 = local_e2 & 1;
              local_1a4 = -0x404647f4;
            }
            else if (local_1a4 == 0x30e7c176) {
              local_1a4 = 0x5af3943c;
            }
          }
          goto LAB_003da240;
        }
        if (local_1a4 < 0x222de53b) {
          if (local_1a4 == 0x21e30851) {
            bVar6 = 0x801562e8 < (DAT_004c92c0 * DAT_004c92c4 + 0x67c80611U ^ 0x69ca7112);
            local_1a4 = 0x5d38947f;
            iVar10 = 0x442eb16f;
            goto LAB_003dce44;
          }
          if (local_1a4 == 0x22218763) {
            _objc_msgSend(local_118,PTR_s_currentBubble_0048a848);
            local_120 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_118);
            puVar4 = PTR_s_isMergeBubble_0048bef0;
            DAT_004d2009 = _objc_msgSend(local_120,PTR_s_isMergeBubble_0048bef0);
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_f8);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar7,puVar3);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            local_121 = _objc_msgSend(uVar8,puVar4);
            _objc_release(uVar8);
            _objc_release(uVar7);
            local_1a4 = 0x1f2b15a2;
          }
          goto LAB_003da240;
        }
        if (local_1a4 != 0x222de53b) {
          if (local_1a4 == 0x286c0ea9) {
            local_1a4 = -0x14e1cb3c;
          }
          goto LAB_003da240;
        }
        local_130 = DAT_004d2010;
        bVar6 = (DAT_004c92a8 + DAT_004c92ac + 0x6d777726U | 0x401b53f6) * 0x46246bbd == 0xa59de6f;
        iVar10 = -0x6d65e763;
        local_1a4 = 0x14287a20;
      }
      else if (local_1a4 < 0x344dace9) {
        if (local_1a4 < 0x3282f3f7) {
          if (local_1a4 == 0x311d7b6d) {
            bVar6 = 0x8ffe9da < (DAT_004c9130 | DAT_004c9134) * 0x11b1c943 + 0x12d2facb;
            iVar10 = -0x7dad3b87;
            local_1a4 = -0x243b6cbc;
            goto LAB_003dd528;
          }
          if (local_1a4 == 0x326447ac) {
            local_f8 = PTR_s_shared_00489458;
            puStack_f0 = PTR_BubbleBoxConfig_0048c990;
            local_1a4 = -0x3afa3535;
          }
          goto LAB_003da240;
        }
        if (local_1a4 != 0x3282f3f7) {
          if (local_1a4 == 0x33a9136d) {
            uVar9 = ((DAT_004c9230 | DAT_004c9234) * 0x36d474c1 ^ 0xad8ec22d) / 0x1002fc0b;
            bVar5 = 0x2054019a < uVar9;
            bVar6 = uVar9 == 0x2054019b;
            iVar10 = 0x2fc64636;
            local_1a4 = 0x53274ec9;
            goto LAB_003dd2dc;
          }
          if (local_1a4 == 0x33b77caa) {
            local_1a4 = 0x1db1c9e1;
          }
          goto LAB_003da240;
        }
        bVar6 = (DAT_004c9280 * DAT_004c9284 + 0xd66ac787U & 0xeaadaf8a) == 0x6b234176;
        iVar10 = -0xba1d4f8;
        local_1a4 = 0x22218763;
      }
      else {
        if (local_1a4 < 0x39906fb0) {
          if (local_1a4 == 0x344dace9) {
LAB_003dc8d8:
            local_1a4 = 0x9d7098c;
          }
          else if (local_1a4 == 0x370bd75a) {
            local_1a4 = 0x2bc7fbed;
          }
          goto LAB_003da240;
        }
        if (local_1a4 == 0x39906fb0) {
          local_1a4 = 0x46994e4a;
          goto LAB_003da240;
        }
        if (local_1a4 == 0x39ef01eb) {
          uVar9 = DAT_004c9298 | DAT_004c929c;
          _objc_release(local_190);
          local_1a4 = 0x6a9c9773;
          if (uVar9 == 0xaa00f139) {
            local_1a4 = 0x39ef01eb;
          }
          goto LAB_003da240;
        }
        if (local_1a4 != 0x3cbfacd9) goto LAB_003da240;
        bVar6 = (DAT_004c9140 * DAT_004c9144 & 0xbb632d2cU) == 0x3257e0ed;
        iVar10 = -0x111fb257;
        local_1a4 = 0x598a7721;
      }
LAB_003dd744:
      if (bVar6) {
        local_1a4 = iVar10;
      }
      goto LAB_003da240;
    }
    if (local_1a4 < 0x104ddbf0) {
      if (local_1a4 < 0x9d7098c) {
        if (local_1a4 < 0x775575c) {
          if (local_1a4 == 0x5f150dd) {
            DAT_004d2008 = '\x01';
            local_1a4 = 0x5f150dd;
            if (((uint)((ulong)((DAT_004c9218 & DAT_004c921c) + 0xda5aee29) * 0x18bc5f3f >> 0x3c) |
                0x22641a4a) < 0x696f3a88) {
              local_1a4 = 0x33b77caa;
            }
          }
          else if (local_1a4 == 0x6a2cd72) {
            local_1a4 = 0x311d7b6d;
          }
        }
        else {
          if (local_1a4 == 0x775575c) {
            uVar9 = DAT_004c9260 * DAT_004c9264 & 0x80200019;
            bVar5 = 0x9ea0af7f < uVar9;
            bVar6 = uVar9 == 0x9ea0af80;
            iVar10 = -0x4c7d311a;
            local_1a4 = 0x5294afdb;
            goto LAB_003dd2dc;
          }
          if (local_1a4 == 0x8ae422f) {
            _objc_msgSend(PTR_BubbleBoxAssets_0048cad0,PTR_s_svgImageNamed_fromConfig__0048b0e0,
                          param_6,local_150);
            local_158 = _objc_retainAutoreleasedReturnValue();
            local_159 = local_158 == 0;
            local_1a4 = -0x228e05a7;
          }
        }
        goto LAB_003da240;
      }
      if (local_1a4 < 0xd490503) {
        if (local_1a4 == 0x9d7098c) {
          uVar9 = DAT_004c92d8 * DAT_004c92dc;
          _objc_msgSend(0,0,uStack_a0,local_a8,local_148,param_3,local_140,
                        PTR_s_imageConfigWithTintColor_bounds__0048bf00,param_7);
          local_150 = _objc_retainAutoreleasedReturnValue();
          bVar6 = 0x38a3fd64 < (uVar9 & 0x3412577a | 0x4004072) + 0xc528b684;
          local_1a4 = 0x62fc9c50;
          iVar10 = 0x370bd75a;
          goto LAB_003dce44;
        }
        if (local_1a4 == 0x9e31dfb) {
          DAT_004c82e5 = local_92;
          local_93 = DAT_004c82c6;
          local_1a4 = 0x517d6c65;
        }
        goto LAB_003da240;
      }
      if (local_1a4 == 0xd490503) {
        local_1a4 = -0x4a73872d;
        goto LAB_003da240;
      }
      if (local_1a4 == 0xf4da9e7) {
        uVar9 = 0;
        if (DAT_004c930c != 0) {
          uVar9 = DAT_004c9308 / DAT_004c930c;
        }
        local_168 = DAT_004d2010;
        local_1a4 = 0x11533cc7;
        if (uVar9 * -0x7ce9be73 + 0x32417276 < 0x1a76eb) {
          local_1a4 = 0xf4da9e7;
        }
        goto LAB_003da240;
      }
      if (local_1a4 != 0x100d64aa) goto LAB_003da240;
      _objc_retain(param_6);
      _objc_retain(param_7);
      bVar6 = DAT_004d2008 == '\0';
      local_1a4 = -0x2b438eee;
      iVar10 = -0x571f09b5;
    }
    else {
      if (local_1a4 < 0x14287a20) {
        if (local_1a4 < 0x11cea333) {
          if (local_1a4 == 0x104ddbf0) {
            _objc_release(local_e0);
            local_1a4 = -0x2f24fa5f;
          }
          else if (local_1a4 == 0x11533cc7) {
            local_1a4 = 0x3ea988fc;
          }
        }
        else if (local_1a4 == 0x11cea333) {
          local_1a4 = -0xafaf374;
          if (local_109 == '\0') {
            local_1a4 = -0x44769761;
          }
          local_178 = local_100;
        }
        else if (local_1a4 == 0x12d1770b) {
          uVar9 = DAT_004c9278 * DAT_004c927c;
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_f8);
          local_118 = _objc_retainAutoreleasedReturnValue();
          local_1a4 = 0x4459832f;
          if ((uVar9 / 0x2fcbfa96 & 1) + 0x1c50aa51 < 0xbd65183) {
            local_1a4 = 0x12d1770b;
          }
        }
        else if (local_1a4 == 0x12ec9eb0) {
          local_1a4 = 0x9e31dfb;
        }
        goto LAB_003da240;
      }
      if (local_1a4 < 0x197d60bf) {
        if (local_1a4 == 0x14287a20) {
          local_1a4 = 0x55545dab;
        }
        else if (local_1a4 == 0x15c42a89) {
          DAT_004d2008 = '\x01';
          local_1a4 = 0x5f150dd;
        }
        goto LAB_003da240;
      }
      if (local_1a4 != 0x197d60bf) {
        if (local_1a4 == 0x1db1c9e1) {
          bVar6 = 0x620e3dae < (DAT_004c9220 + DAT_004c9224 | 0xc630a533U) * 0x4311b377 + 0x1cfbaec8
          ;
          iVar10 = -0x34dff8ca;
          local_1a4 = 0x55283874;
          goto LAB_003dd528;
        }
        if (local_1a4 == 0x1f2b15a2) {
          local_1a4 = 0x451108c0;
        }
        goto LAB_003da240;
      }
      bVar6 = (DAT_004c9200 & DAT_004c9204 & 0xefc59313 | 0x4c850303) == 0xbfd09933;
      local_1a4 = -0x484ae86e;
      iVar10 = 0x5f30cebd;
    }
  }
LAB_003dd794:
  if (bVar6) {
    local_1a4 = iVar10;
  }
  goto LAB_003da240;
}



// #####################################
// ##### mergeLayoutValue @ 0013e4b4
// #####################################

/* Function Stack Size: 0x10 bytes */

void BubbleSettingViewController::mergeLayoutValue(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  uint uVar7;
  int iVar8;
  ID *pIVar9;
  ID *pIVar10;
  int iVar11;
  undefined1 auVar12 [16];
  ID local_c0;
  int *local_b8;
  int local_ac;
  ID *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 *local_88;
  ushort local_7c;
  char local_79;
  int local_78;
  uint local_74;
  
  uVar1 = DAT_004795b8;
  pIVar9 = &local_c0;
  local_74 = (uint)((ulong)(DAT_004a1e40 * DAT_004a1e44 ^ 0xa4d4d3d3) * 0x42053df1 >> 0x3e) +
             0x848c9ca9;
  local_ac = -0x5b9afeb6;
  local_b8 = &local_ac;
  local_c0 = param_1;
LAB_0013e588:
  puVar2 = local_90;
  if (local_ac < 0x2868e561) {
    if (local_ac < -0x38984997) {
      if (local_ac < -0x47bd9cc9) {
        if (local_ac == -0x67e00a53) {
          bVar5 = 0xa74b8afe < (DAT_004a1e90 & DAT_004a1e94 & 0x7bcfd9fd | 0x334d19f4);
          iVar11 = -0x40baa188;
          iVar8 = 0x616b0806;
          goto LAB_0013ef4c;
        }
        if (local_ac == -0x5b9afeb6) {
          bVar4 = 0x3190d5ea < local_74;
          bVar5 = local_74 == 0x3190d5eb;
          iVar8 = -0x5737638d;
          iVar11 = 0x2fea61a1;
        }
        else {
          if (local_ac != -0x5737638d) goto LAB_0013e588;
          uVar7 = 0;
          if (DAT_004a1e4c != 0) {
            uVar7 = DAT_004a1e48 / DAT_004a1e4c;
          }
          local_78 = DAT_004d1440;
          uVar7 = (uint)((ulong)((uVar7 ^ 0x90802486) & 0x92ce64df) * 0x37c2f555 >> 0x3b);
          bVar4 = 0x1e35ac3b < uVar7;
          bVar5 = uVar7 == 0x1e35ac3c;
          iVar8 = 0x2fea61a1;
          iVar11 = -0x3fdb09d4;
        }
LAB_0013f08c:
        if (!bVar4 || bVar5) {
          iVar8 = iVar11;
        }
      }
      else {
        iVar8 = -0x38984997;
        if (local_ac != -0x47bd9cc9) {
          if (local_ac == -0x40baa188) {
            local_88[4] = local_c0;
            _objc_msgSend(puVar2,PTR_s_alertControllerTitle_message_tex_0048a4c0,
                          &PTR____CFConstantStringClassReference_004a06e0,
                          &PTR____CFConstantStringClassReference_004a06c0,local_a0,
                          &PTR____CFConstantStringClassReference_004a06a0);
            param_2 = extraout_x1_01;
            iVar8 = 0x616b0806;
          }
          else {
            if (local_ac != -0x3fdb09d4) goto LAB_0013e588;
            iVar8 = 0x2868e561;
          }
        }
      }
    }
    else if (local_ac < -0xfd3c969) {
      if (local_ac == -0x38984997) {
        bVar5 = 0xba3f65b2 < (DAT_004a1e80 * DAT_004a1e84 & 0xd21c150U ^ 0xbcc6b7d1);
        iVar8 = -0x1571aade;
        iVar11 = 0x24d59a97;
LAB_0013eea8:
        if (bVar5) {
          iVar8 = iVar11;
        }
      }
      else {
        if (local_ac != -0x265a601a) {
          if (local_ac == -0x1571aade) {
            uVar7 = DAT_004a1e88 * DAT_004a1e8c;
            DAT_004d1440 = 1;
            pIVar9 = (ID *)((long)pIVar9 + -0x30);
            local_90 = PTR_BubbleBoxUI_0048ca90;
            local_88 = pIVar9;
            _objc_msgSend(local_c0,PTR_s_config_00489e18);
            local_98 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_98,PTR_s_mergeLayoutValue_0048ae70);
            auVar12 = _objc_retainAutoreleasedReturnValue();
            puVar3 = local_88;
            param_2 = auVar12._8_8_;
            local_a0 = auVar12._0_8_;
            *local_88 = PTR___NSConcreteStackBlock_00481618;
            puVar3[1] = uVar1;
            puVar3[2] = FUN_0013f25c;
            puVar3[3] = &DAT_00480290;
            bVar5 = 0x9b21605c < (uVar7 & 0xc094d684) / 0x1062d5b + 0x2bf1987a;
            iVar11 = 0x24d59a97;
            iVar8 = -0x6df3620;
            goto LAB_0013ef4c;
          }
          goto LAB_0013e588;
        }
        iVar8 = 0x6afd80dc;
      }
    }
    else if (local_ac < 0x9512ebb) {
      if (local_ac == -0xfd3c969) {
        bVar5 = 0xa02a345d < ((DAT_004a1e70 - DAT_004a1e74 & 0x2f50ed6fU) + 0xaa194616 ^ 0xbfecbf73)
        ;
        iVar11 = 0x63fb8b5d;
        iVar8 = 0x37d306ec;
LAB_0013ef4c:
        if (bVar5) {
          iVar8 = iVar11;
        }
      }
      else {
        if (local_ac != -0x6df3620) goto LAB_0013e588;
        iVar8 = -0x67e00a53;
      }
    }
    else if (local_ac == 0x9512ebb) {
      iVar8 = 0x2e92baa1;
    }
    else {
      if (local_ac != 0x24d59a97) goto LAB_0013e588;
      DAT_004d1440 = 1;
      _objc_msgSend(local_c0,PTR_s_config_00489e18);
      uVar6 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar6,PTR_s_mergeLayoutValue_0048ae70);
      _objc_retainAutoreleasedReturnValue();
      *(undefined **)((long)pIVar9 + -0x30) = PTR___NSConcreteStackBlock_00481618;
      *(undefined8 *)((long)pIVar9 + -0x28) = uVar1;
      *(code **)((long)pIVar9 + -0x20) = FUN_0013f25c;
      *(undefined **)((long)pIVar9 + -0x18) = &DAT_00480290;
      pIVar9 = (ID *)((long)pIVar9 + -0x30);
      param_2 = extraout_x1_00;
      iVar8 = -0x1571aade;
    }
  }
  else if (local_ac < 0x538b7d05) {
    if (local_ac < 0x2fea61a1) {
      if (local_ac == 0x2868e561) {
        uVar7 = 0;
        if (DAT_004a1e54 != 0) {
          uVar7 = DAT_004a1e50 / DAT_004a1e54;
        }
        iVar8 = 0x365c7ab3;
        if ((int)((long)((ulong)uVar7 * 0x9f6e9129) >> 0x3f) * 0x7c018bcf == -0x5a22e922) {
          iVar8 = 0x2f4f8730;
        }
      }
      else if (local_ac == 0x2e92baa1) {
        iVar8 = 0x74e9cd12;
        if (local_79 == '\0') {
          iVar8 = -0x38984997;
        }
      }
      else {
        iVar8 = 0x365c7ab3;
        if (local_ac != 0x2f4f8730) goto LAB_0013e588;
      }
    }
    else if (local_ac < 0x37d306ec) {
      if (local_ac != 0x2fea61a1) {
        if (local_ac == 0x365c7ab3) {
          uVar7 = ((DAT_004a1e58 | DAT_004a1e5c) ^ 0xedff30db) / 0x265d2d40 + 0xb3aedcb2;
          local_79 = local_78 == 0;
          bVar4 = 0xef329873 < uVar7;
          bVar5 = uVar7 == 0xef329874;
          iVar8 = 0x2f4f8730;
          iVar11 = 0x9512ebb;
          goto LAB_0013f08c;
        }
        goto LAB_0013e588;
      }
      iVar8 = -0x5737638d;
    }
    else {
      if (local_ac != 0x37d306ec) {
        if (local_ac == 0x48290574) {
          iVar8 = -0xfd3c969;
          goto LAB_0013f20c;
        }
        goto LAB_0013e588;
      }
      DAT_004a0692 = local_7c ^ 0xc156;
      DAT_004a0694 = DAT_004a0644 ^ 0x9b96;
      DAT_004a0696 = DAT_004a0646 ^ 0x73aa;
      DAT_0049ecb6 = DAT_0049ecb0 ^ 0xa3a1;
      DAT_0049ecb8 = DAT_0049ecb2 ^ 0x8903;
      DAT_0049ecba = DAT_0049ecb4 ^ 0x6cfd;
      iVar8 = -0x47bd9cc9;
    }
  }
  else if (local_ac < 0x63fb8b5d) {
    if (local_ac == 0x538b7d05) {
      DAT_004a0676 = DAT_004a0626 ^ 0x8289;
      DAT_004a0678 = DAT_004a0628 ^ 0x4701;
      DAT_004a067a = DAT_004a062a ^ 0x677a;
      DAT_004a067c = DAT_004a062c ^ 0x2fcc;
      DAT_004a067e = DAT_004a062e ^ 0x1d3b;
      DAT_004a0680 = DAT_004a0630 ^ 0x897e;
      DAT_004a0682 = DAT_004a0632 ^ 0x9885;
      DAT_004a0684 = DAT_004a0634 ^ 0x1ef1;
      DAT_004a0686 = DAT_004a0636 ^ 0x9210;
      DAT_004a0688 = DAT_004a0638 ^ 0x6338;
      DAT_004a068a = DAT_004a063a ^ 0xb4f;
      DAT_004a068c = DAT_004a063c ^ 0x8ace;
      DAT_004a068e = DAT_004a063e ^ 0x9d51;
      DAT_004a0690 = DAT_004a0640 ^ 0x2046;
      iVar8 = 0x5f6dd0fd;
      goto LAB_0013f20c;
    }
    if (local_ac != 0x5f6dd0fd) {
      if (local_ac == 0x616b0806) {
        uVar7 = DAT_004a1e98 * DAT_004a1e9c;
        pIVar10 = local_88 + 4;
        *pIVar10 = local_c0;
        local_a8 = pIVar10;
        _objc_msgSend(puVar2,PTR_s_alertControllerTitle_message_tex_0048a4c0,
                      &PTR____CFConstantStringClassReference_004a06e0,
                      &PTR____CFConstantStringClassReference_004a06c0,local_a0,
                      &PTR____CFConstantStringClassReference_004a06a0);
        bVar5 = 0x10ba7006 < ((uVar7 & 0x81932b7) + 0x151f3912 | 0xf57beda8);
        iVar8 = -0x40baa188;
        iVar11 = -0x265a601a;
        param_2 = extraout_x1;
        goto LAB_0013eea8;
      }
      goto LAB_0013e588;
    }
    DAT_004a0676 = DAT_004a0626 ^ 0x8289;
    DAT_004a0678 = DAT_004a0628 ^ 0x4701;
    DAT_004a067a = DAT_004a062a ^ 0x677a;
    DAT_004a067c = DAT_004a062c ^ 0x2fcc;
    DAT_004a067e = DAT_004a062e ^ 0x1d3b;
    DAT_004a0680 = DAT_004a0630 ^ 0x897e;
    DAT_004a0682 = DAT_004a0632 ^ 0x9885;
    DAT_004a0684 = DAT_004a0634 ^ 0x1ef1;
    DAT_004a0686 = DAT_004a0636 ^ 0x9210;
    DAT_004a0688 = DAT_004a0638 ^ 0x6338;
    DAT_004a068a = DAT_004a063a ^ 0xb4f;
    DAT_004a068c = DAT_004a063c ^ 0x8ace;
    DAT_004a068e = DAT_004a063e ^ 0x9d51;
    DAT_004a0690 = DAT_004a0640 ^ 0x2046;
    iVar8 = 0x538b7d05;
    if (((DAT_004a1e68 + DAT_004a1e6c ^ 0xe000003fU) & 0xefdbfffd | 0xcddafd99) != 0xfe449d3d) {
      iVar8 = 0x48290574;
    }
    local_7c = DAT_004a0642;
  }
  else {
    if (local_ac < 0x74e9cd12) {
      if (local_ac == 0x63fb8b5d) {
        DAT_004a0692 = local_7c ^ 0xc156;
        DAT_004a0694 = DAT_004a0644 ^ 0x9b96;
        DAT_004a0696 = DAT_004a0646 ^ 0x73aa;
        DAT_0049ecb6 = DAT_0049ecb0 ^ 0xa3a1;
        DAT_0049ecb8 = DAT_0049ecb2 ^ 0x8903;
        DAT_0049ecba = DAT_0049ecb4 ^ 0x6cfd;
        iVar8 = 0x37d306ec;
        goto LAB_0013f20c;
      }
      if (local_ac == 0x6afd80dc) {
        _objc_release(local_a0,param_2);
        _objc_release(local_98);
        return;
      }
      goto LAB_0013e588;
    }
    if (local_ac == 0x74e9cd12) {
      DAT_0049f898 = DAT_0049f88a ^ 0x1db6;
      DAT_0049f89a = DAT_0049f88c ^ 0xe516;
      DAT_0049f89c = DAT_0049f88e ^ 0x2804;
      DAT_0049f89e = DAT_0049f890 ^ 0x9603;
      DAT_0049f8a0 = DAT_0049f892 ^ 0x809e;
      DAT_0049f8a2 = DAT_0049f894 ^ 0xc1be;
      DAT_0049f8a4 = DAT_0049f896 ^ 0x635d;
      DAT_004a0650 = DAT_004a0600 ^ 0x1748;
      DAT_004a0652 = DAT_004a0602 ^ 0x71c3;
      DAT_004a0654 = DAT_004a0604 ^ 0x6eae;
      DAT_004a0656 = DAT_004a0606 ^ 0xdf09;
      DAT_004a0658 = DAT_004a0608 ^ 0x5fc2;
      DAT_004a065a = DAT_004a060a ^ 0x36;
      DAT_004a065c = DAT_004a060c ^ 0x34df;
      DAT_004a065e = DAT_004a060e ^ 0x4166;
      DAT_004a0660 = DAT_004a0610 ^ 0xf0dc;
      DAT_004a0662 = DAT_004a0612 ^ 0x12c9;
      DAT_004a0664 = DAT_004a0614 ^ 0xe619;
      DAT_004a0666 = DAT_004a0616 ^ 0x3eba;
      DAT_004a0668 = DAT_004a0618 ^ 0x7383;
      DAT_004a066a = DAT_004a061a ^ 0x8de4;
      DAT_004a066c = DAT_004a061c ^ 0x68b0;
      DAT_004a066e = DAT_004a061e ^ 0xd9a7;
      DAT_004a0670 = DAT_004a0620 ^ 0xefdc;
      DAT_004a0672 = DAT_004a0622 ^ 0xb4fb;
      DAT_004a0674 = DAT_004a0624 ^ 0x68dd;
      iVar8 = 0x7635bde6;
      goto LAB_0013f20c;
    }
    if (local_ac != 0x7635bde6) goto LAB_0013e588;
    iVar8 = 0x538b7d05;
    if ((((uint)(DAT_004a1e60 + DAT_004a1e64) / 0x589ba3e8) * 0x78a7ecb | 0x8e128e69) != 0x287dc99a)
    {
      iVar8 = 0x5f6dd0fd;
    }
  }
LAB_0013f20c:
  *local_b8 = iVar8;
  goto LAB_0013e588;
}



// #####################################
// ##### FUN_0042ef1c @ 0042ef1c
// #####################################

undefined1  [16] FUN_0042ef1c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  int local_254;
  undefined8 local_220;
  ulong local_1f8;
  char local_1c1;
  undefined8 local_1c0;
  undefined *local_1b8;
  char local_1a9;
  undefined *local_1a8;
  char local_199;
  char local_181;
  char local_161;
  long local_160;
  undefined *local_158;
  char local_149;
  long local_148;
  undefined8 local_138;
  undefined8 local_130;
  char local_121;
  undefined8 local_120;
  char local_111;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  char local_f2;
  char local_f1;
  undefined *local_f0;
  undefined8 local_e8;
  char local_d9;
  undefined8 local_d8;
  ulong local_c8;
  byte local_b2;
  char local_b1;
  int local_b0;
  
  uVar1 = (uint)((ulong)(uint)(DAT_004cdea0 - DAT_004cdea4) * 0x8d7e9aed >> 0x3f) | 0x156240b0;
  local_254 = -0x57180651;
LAB_0042f01c:
  if (local_254 < -0xfe256a) {
    if (-0x50a57f50 < local_254) {
      if (local_254 < -0x1edc3075) {
        if (-0x3c7d1474 < local_254) {
          if (local_254 < -0x2fef6535) {
            if (local_254 < -0x31b3e475) {
              if (local_254 == -0x3c7d1473) {
                local_254 = 0x53522691;
              }
              else if (local_254 == -0x3af6dfb8) {
                bVar2 = (uint)((ulong)(DAT_004cdf70 * DAT_004cdf74 ^ 0x4bb00aa4) * 0x1cfce7f3 >>
                              0x3c) == 0x4f962f16;
                local_254 = 0x60b9d442;
                iVar4 = 0x5060d1fe;
                goto LAB_004324c0;
              }
              goto LAB_0042f01c;
            }
            if (local_254 == -0x31b3e475) {
              local_254 = 0x5972f471;
              goto LAB_0042f01c;
            }
            if (local_254 != -0x316a4105) goto LAB_0042f01c;
            bVar2 = local_199 == '\0';
            local_254 = 0xc5bed32;
          }
          else {
            if (-0x296943e6 < local_254) {
              if (local_254 == -0x296943e5) {
                local_254 = -0x3af6dfb8;
              }
              else {
                if (local_254 == -0x262042d8) {
                  bVar2 = (DAT_004cdf00 | DAT_004cdf04) == 0x8b67cd5e;
                  iVar4 = 0x474bcd5f;
                  local_254 = 0xa8b8bd1;
                  goto LAB_004313ac;
                }
                if (local_254 == -0x2514c8cd) {
                  local_254 = 0x724bad6b;
                }
              }
              goto LAB_0042f01c;
            }
            if (local_254 == -0x2fef6535) {
              local_181 = FUN_004237f4(param_2,&PTR____CFConstantStringClassReference_004ca930);
              bVar2 = false;
              iVar4 = 0x1ff8049c;
              local_254 = 0x1aa04406;
              goto LAB_00432218;
            }
            if (local_254 != -0x2ae00322) goto LAB_0042f01c;
            bVar2 = local_1c1 == '\0';
            local_254 = -0x31b3e475;
          }
LAB_00431a3c:
          if (bVar2) {
            local_254 = 0x1db31ad3;
          }
          goto LAB_0042f01c;
        }
        if (local_254 < -0x4be4f8f7) {
          if (local_254 < -0x4e33c1f6) {
            if (local_254 == -0x50a57f4f) {
              local_254 = 0x35757ba7;
            }
            else if (local_254 == -0x4ecfc3d6) {
              local_254 = -0xfe256a;
              if (local_121 == '\0') {
                local_254 = -0x6a81364c;
              }
            }
          }
          else if (local_254 == -0x4e33c1f6) {
            DAT_004ca5fe = DAT_004ca5de ^ 6;
            DAT_004ca5ff = DAT_004ca5df ^ 0x68;
            DAT_004ca600 = DAT_004ca5e0 ^ 0x10;
            DAT_004ca601 = DAT_004ca5e1 ^ 0xeb;
            DAT_004ca602 = DAT_004ca5e2 ^ 0x17;
            DAT_004ca603 = DAT_004ca5e3 ^ 0x3f;
            DAT_004ca604 = DAT_004ca5e4 ^ 0xcb;
            DAT_004ca605 = DAT_004ca5e5 ^ 0xcb;
            DAT_004ca606 = DAT_004ca5e6 ^ 0xbc;
            DAT_004ca607 = DAT_004ca5e7 ^ 0x87;
            DAT_004ca608 = DAT_004ca5e8 ^ 0xf4;
            local_254 = 0x6534531e;
          }
          else if (local_254 == -0x4c7c980c) {
            local_254 = 0x3b3f7b1;
          }
          goto LAB_0042f01c;
        }
        if (local_254 < -0x487ba00a) {
          if (local_254 != -0x4be4f8f7) {
            if (local_254 == -0x4ba950ce) {
              bVar2 = (DAT_004cdfa0 * DAT_004cdfa4 * 0x6c2b9a10 | 0xfb0cc232U) == 0x1baeadab;
              iVar4 = -0x6365b979;
              local_254 = 0x1ce1747c;
              goto LAB_00432178;
            }
            goto LAB_0042f01c;
          }
          uVar6 = (DAT_004ce090 + DAT_004ce094) * -0x674b8781 + 0x8b19d704;
          bVar3 = 0x2d018651 < uVar6;
          bVar2 = uVar6 == 0x2d018652;
          local_254 = -0x14bb406;
          iVar4 = 0x3c765a19;
        }
        else {
          if (local_254 == -0x487ba00a) {
            local_254 = 0x5795d663;
            goto LAB_0042f01c;
          }
          if (local_254 == -0x4582cd89) {
            local_254 = -0x1ebdcf66;
            goto LAB_0042f01c;
          }
          if (local_254 != -0x43cb462a) goto LAB_0042f01c;
          local_161 = local_160 == 0;
          uVar6 = ((DAT_004cdfe8 + DAT_004cdfec | 0x4f58e5a9U) + 0xf89eb721) / 0x121e6f59;
          bVar3 = 0xb5d19612 < uVar6;
          bVar2 = uVar6 == 0xb5d19613;
          local_254 = -0x43cb462a;
          iVar4 = 0x49975f98;
        }
LAB_00432324:
        if (!bVar3 || bVar2) {
          local_254 = iVar4;
        }
        goto LAB_0042f01c;
      }
      if (-0xe4a6561 < local_254) {
        if (-0x80b476b < local_254) {
          if (local_254 < -0x31cf2ea) {
            if (local_254 == -0x80b476a) {
              local_254 = -0x6e8f1dbf;
            }
            else if (local_254 == -0x321ecf6) {
              local_254 = 0x11ffe358;
            }
          }
          else if (local_254 == -0x31cf2ea) {
            local_254 = 0x2b5a462b;
          }
          else {
            if (local_254 == -0x1898dd6) {
              bVar2 = (DAT_004cdfc0 & DAT_004cdfc4 & 0xcf4f4c1b | 0x8a0f4c1a) == 0x57c49937;
              local_254 = -0x487ba00a;
              iVar4 = 0x5795d663;
              goto LAB_004325d0;
            }
            if (local_254 == -0x14bb406) {
              uVar6 = (uint)(DAT_004ce098 * DAT_004ce09c) / 0x558c531 + 0x1b227d8a ^ 0xfeb88fa4;
              _objc_release(local_d8);
              _objc_release(param_2);
              local_1f8 = local_c8;
              bVar3 = 0xd970314e < uVar6;
              bVar2 = uVar6 == 0xd970314f;
              iVar4 = 0x3c765a19;
              local_254 = 0x52757dbb;
              goto LAB_0043251c;
            }
          }
          goto LAB_0042f01c;
        }
        if (-0xbba2f86 < local_254) {
          if (local_254 == -0xbba2f85) {
            bVar2 = local_1a9 == '\0';
            local_254 = 0x8620a1d;
            goto LAB_00431a3c;
          }
          if (local_254 == -0xb86f60d) {
            local_254 = 0x596b7090;
          }
          goto LAB_0042f01c;
        }
        if (local_254 == -0xe4a6560) {
          local_254 = -0x5f379432;
          goto LAB_0042f01c;
        }
        if (local_254 != -0xc992218) goto LAB_0042f01c;
        uVar6 = DAT_004ce038 | DAT_004ce03c;
        local_199 = _objc_msgSend(param_2,PTR_s_isHeadPart_0048b518);
        bVar2 = uVar6 == 0x6a24abd8;
        local_254 = -0xc992218;
        iVar4 = -0x316a4105;
LAB_004325d0:
        if (!bVar2) {
          local_254 = iVar4;
        }
        goto LAB_0042f01c;
      }
      if (-0x18fbfaf8 < local_254) {
        if (local_254 < -0x14b60fcf) {
          if (local_254 == -0x18fbfaf7) {
            local_f0 = PTR_s_boolValue_0048b240;
            local_254 = -0x18fbfaf7;
            if (((DAT_004cdf28 ^ DAT_004cdf2c) + 0x9aa98f4f | 0xe6767784) != 0x762f700a) {
              local_254 = -0xb86f60d;
            }
          }
          else if (local_254 == -0x16bc334f) {
            uVar6 = ((DAT_004cdf88 | DAT_004cdf8c) & 0xd2d7d840) + 0xdeca88c;
            _objc_msgSend(local_d8,PTR_s_b_isLastMessage_0048b508);
            local_120 = _objc_retainAutoreleasedReturnValue();
            bVar3 = 0x46eed2b9 < uVar6;
            bVar2 = uVar6 == 0x46eed2ba;
            iVar4 = -0x16bc334f;
            local_254 = -0x7dc6056b;
            goto LAB_0043251c;
          }
        }
        else if (local_254 == -0x14b60fcf) {
          local_254 = 0x14dfcc40;
          if (local_d9 == '\0') {
            local_254 = -0x4be4f8f7;
          }
        }
        else {
          if (local_254 == -0x102a2fd8) {
            uVar6 = -(int)((long)((ulong)((DAT_004cdfd0 & DAT_004cdfd4) * 0x4b494224) * 0xa6850e2d)
                          >> 0x3f);
            bVar3 = 0x12a44e6 < uVar6;
            bVar2 = uVar6 == 0x12a44e7;
            local_254 = -0x584d3f76;
            iVar4 = 0x61e46497;
            goto LAB_00432324;
          }
          if (local_254 == -0xf7c793d) {
            uVar6 = 0;
            if (DAT_004cdebc != 0) {
              uVar6 = DAT_004cdeb8 / DAT_004cdebc;
            }
            local_b1 = local_b0 == 0;
            bVar2 = 0x7db286f <
                    (uint)((ulong)(uVar6 * -0x2f49dae2 + 0xe7c535fc) * 0x5aadd465 >> 0x3e);
            iVar4 = -0xf7c793d;
            local_254 = -0x7717274d;
            goto LAB_00432218;
          }
        }
        goto LAB_0042f01c;
      }
      if (-0x1dc7af38 < local_254) {
        if (local_254 == -0x1dc7af37) {
          DAT_004ca520 = DAT_004ca500 ^ 0x60;
          DAT_004ca521 = DAT_004ca501 ^ 0xbb;
          DAT_004ca522 = DAT_004ca502 ^ 0xaa;
          DAT_004ca523 = DAT_004ca503 ^ 0x27;
          DAT_004ca524 = DAT_004ca504 ^ 0x38;
          DAT_004ca525 = DAT_004ca505 ^ 0x5c;
          DAT_004ca526 = DAT_004ca506 ^ 0xdf;
          DAT_004ca527 = DAT_004ca507 ^ 0x92;
          DAT_004ca528 = DAT_004ca508 ^ 0x31;
          DAT_004ca529 = DAT_004ca509 ^ 0x48;
          DAT_004ca52a = DAT_004ca50a ^ 0xd3;
          DAT_004ca52b = DAT_004ca50b ^ 0xd3;
          DAT_004ca52c = DAT_004ca50c ^ 0xd5;
          DAT_004ca52d = DAT_004ca50d ^ 0x2d;
          DAT_004ca52e = DAT_004ca50e ^ 0xed;
          DAT_004ca52f = DAT_004ca50f ^ 0xd2;
          DAT_004ca530 = DAT_004ca510 ^ 0xfe;
          DAT_004ca531 = DAT_004ca511 ^ 0x35;
          DAT_004ca532 = DAT_004ca512 ^ 0x83;
          DAT_004ca533 = DAT_004ca513 ^ 0x7f;
          DAT_004ca534 = DAT_004ca514 ^ 0xb1;
          DAT_004ca535 = DAT_004ca515 ^ 0x7e;
          DAT_004ca536 = DAT_004ca516 ^ 0x40;
          DAT_004ca910 = DAT_004ca8f0 ^ 0xe5;
          DAT_004ca911 = DAT_004ca8f1 ^ 0x42;
          DAT_004ca912 = DAT_004ca8f2 ^ 0x4f;
          DAT_004ca913 = DAT_004ca8f3 ^ 0x57;
          DAT_004ca914 = DAT_004ca8f4 ^ 0xb9;
          DAT_004ca915 = DAT_004ca8f5 ^ 0xf1;
          DAT_004ca916 = DAT_004ca8f6 ^ 0x4a;
          DAT_004ca917 = DAT_004ca8f7 ^ 0xdf;
          DAT_004ca918 = DAT_004ca8f8 ^ 0x8b;
          DAT_004ca919 = DAT_004ca8f9 ^ 0xb2;
          DAT_004ca91a = DAT_004ca8fa ^ 0x21;
          DAT_004ca91b = DAT_004ca8fb ^ 0xf8;
          DAT_004ca91c = DAT_004ca8fc ^ 0x8d;
          DAT_004ca91d = DAT_004ca8fd ^ 0xa4;
          DAT_004ca91e = DAT_004ca8fe ^ 0x66;
          local_254 = 0x7df05b8;
        }
        else if (local_254 == -0x1a920738) {
          _objc_msgSend(local_d8,PTR_s_b_isLastMessage_0048b508);
          _objc_retainAutoreleasedReturnValue();
          local_254 = -0x16bc334f;
        }
        goto LAB_0042f01c;
      }
      if (local_254 == -0x1edc3075) {
        _objc_msgSend(local_130,local_158);
        local_254 = 0x2aecefaf;
        goto LAB_0042f01c;
      }
      if (local_254 != -0x1ebdcf66) goto LAB_0042f01c;
      uVar6 = 0;
      if (DAT_004ce06c != 0) {
        uVar6 = DAT_004ce068 / DAT_004ce06c;
      }
      uVar6 = uVar6 * -0x65014bfe + 0x5ab4740b;
      local_1b8 = PTR_s_b_isFirstMessage_0048b910;
      bVar3 = 0x6189bd03 < uVar6;
      bVar2 = uVar6 == 0x6189bd04;
      iVar4 = -0x1ebdcf66;
      local_254 = -0x6520989c;
      goto LAB_0043251c;
    }
    if (local_254 < -0x62b52dbe) {
      if (-0x6e73cd6e < local_254) {
        if (local_254 < -0x69a52d71) {
          if (local_254 < -0x6a81364c) {
            if (local_254 == -0x6e73cd6d) {
              local_121 = _objc_msgSend(local_120,local_f0);
              _objc_release(local_120);
              local_254 = -0x6ec8df2d;
            }
            else if ((local_254 == -0x6b0ca047) &&
                    (local_254 = -0x5c2449b9,
                    (DAT_004ce050 & DAT_004ce054) * 0x74b41930 < 0x96fd1a33)) {
              local_254 = 0x7f0500b4;
            }
          }
          else if (local_254 == -0x6a81364c) {
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_108);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,PTR_s_currentBubble_0048a848);
            local_130 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar5);
            _objc_msgSend(local_110,PTR_s_mergeLayoutValue_0048ae70);
            local_138 = _objc_retainAutoreleasedReturnValue();
            local_254 = -0x4ba950ce;
          }
          else if (local_254 == -0x6a78692d) {
            local_254 = -0x18fbfaf7;
          }
        }
        else if (local_254 < -0x6692dc95) {
          if (local_254 == -0x69a52d71) {
            local_254 = 0x765a75d1;
          }
          else if (local_254 == -0x68590d96) {
            uVar6 = 0;
            if (DAT_004cdefc != 0) {
              uVar6 = DAT_004cdef8 / DAT_004cdefc;
            }
            uVar6 = (uVar6 & 0x17988e66) * -0x27371217 & 0x2cc2109c;
            DAT_004d219c = 1;
            bVar3 = 0xfef69431 < uVar6;
            bVar2 = uVar6 == 0xfef69432;
            local_254 = 0x36361515;
            iVar4 = -0x76c11528;
            goto LAB_00432324;
          }
        }
        else if (local_254 == -0x6692dc95) {
          _objc_release(local_130);
LAB_00431bbc:
          local_254 = 0x2f9014f0;
        }
        else if (local_254 == -0x6520989c) {
          local_254 = -0x587308d1;
        }
        else if (local_254 == -0x6365b979) {
          iVar4 = DAT_004cdfa8 + DAT_004cdfac;
          _objc_msgSend(local_138,PTR_s_doubleValue_00489d10);
          _objc_release(local_138);
          local_148 = _objc_msgSend(local_110,PTR_s_layoutSpace_0048ae68);
          bVar2 = (int)((long)((ulong)(iVar4 * -0x6a30fd34 + 0xb32118d0) * 0xa3e5f205) >> 0x3f) ==
                  0x4757ed83;
          iVar4 = 0x1ce1747c;
          local_254 = -0x5db795b8;
          goto LAB_004313ac;
        }
        goto LAB_0042f01c;
      }
      if (local_254 < -0x7717274d) {
        if (local_254 < -0x7872ba53) {
          if (local_254 == -0x7dc6056b) {
            local_254 = -0x6e73cd6d;
          }
          else if (local_254 == -0x7dad73a6) {
            local_254 = 0x4c33c8b0;
            if (local_f1 == '\0') {
              local_254 = -0x596ad235;
            }
            local_220 = local_e8;
          }
        }
        else if (local_254 == -0x7872ba53) {
          local_254 = -0x7872ba53;
          if ((((DAT_004ce088 | DAT_004ce08c) & 0x107e1cb7) * 0x4ed2fd77 | 0x39b69d72) < 0xcfe97632)
          {
            local_254 = 0x3e0a102;
          }
        }
        else if (local_254 == -0x77505ac3) {
          bVar2 = (DAT_004cdf60 | DAT_004cdf64) == 0x546ce851;
          local_254 = 0x7f5f5ef2;
          iVar4 = 0x2e28837b;
          goto LAB_004325d0;
        }
        goto LAB_0042f01c;
      }
      if (local_254 < -0x748593a0) {
        if (local_254 == -0x7717274d) {
          local_254 = -0x748593a0;
        }
        else if (local_254 == -0x76c11528) {
          local_254 = 0x1d822b4c;
        }
        goto LAB_0042f01c;
      }
      if (local_254 == -0x748593a0) {
        bVar2 = 0xb90ec5c6 < (DAT_004cdec0 + DAT_004cdec4 ^ 0x3490a011U | 0xcb2e5d8e) + 0x2e26c04f;
        local_254 = 0x5cdc7f72;
        iVar4 = 0x75389671;
      }
      else {
        if (local_254 != -0x6ec8df2d) {
          if (local_254 == -0x6e8f1dbf) {
            DAT_004ca91f = local_b2;
            DAT_004ca920 = DAT_004ca900 ^ 0x54;
            DAT_004ca921 = DAT_004ca901;
            DAT_004ca922 = DAT_004ca902 ^ 0x5a;
            DAT_004ca923 = DAT_004ca903 ^ 0xb9;
            DAT_004ca924 = DAT_004ca904 ^ 0xb6;
            DAT_004ca925 = DAT_004ca905 ^ 0xda;
            DAT_004ca5f0 = DAT_004ca5d0 ^ 0x8f;
            DAT_004ca5f1 = DAT_004ca5d1 ^ 0x2c;
            DAT_004ca5f2 = DAT_004ca5d2 ^ 0xac;
            DAT_004ca5f3 = DAT_004ca5d3 ^ 0xf3;
            DAT_004ca5f4 = DAT_004ca5d4 ^ 0xf0;
            DAT_004ca5f5 = DAT_004ca5d5 ^ 0xb5;
            DAT_004ca5f6 = DAT_004ca5d6 ^ 0x51;
            DAT_004ca5f7 = DAT_004ca5d7 ^ 0x40;
            DAT_004ca5f8 = DAT_004ca5d8 ^ 0x16;
            DAT_004ca5f9 = DAT_004ca5d9 ^ 0xe5;
            DAT_004ca5fa = DAT_004ca5da ^ 0x40;
            DAT_004ca5fb = DAT_004ca5db ^ 0xb7;
            DAT_004ca5fc = DAT_004ca5dc ^ 0x23;
            DAT_004ca5fd = DAT_004ca5dd ^ 0xbf;
            local_254 = 0x2bbb3bd2;
          }
          goto LAB_0042f01c;
        }
        bVar2 = 0xb4c8667e < ((DAT_004cdf90 ^ DAT_004cdf94 | 0xf00008) ^ 0x10600020 | 0xcf0715d7);
        local_254 = -0x5a925e1e;
        iVar4 = 0x1f4b1d12;
      }
    }
    else if (local_254 < -0x591a559b) {
      if (-0x5c7bcd12 < local_254) {
        if (local_254 < -0x5bde51a2) {
          if (local_254 == -0x5c7bcd11) {
            local_254 = -0xf7c793d;
          }
          else if (local_254 == -0x5c2449b9) {
            _objc_msgSend(local_110,local_1a8);
            local_254 = 0x7f0500b4;
          }
        }
        else if (local_254 == -0x5bde51a2) {
          _objc_msgSend(local_1c0,local_f0);
          _objc_release(local_1c0);
          local_254 = -0x56447465;
        }
        else if (local_254 == -0x5a925e1e) {
          local_254 = 0x1f4b1d12;
        }
        else if (local_254 == -0x596ad235) {
          _objc_release(local_220);
          local_254 = -0x4be4f8f7;
        }
        goto LAB_0042f01c;
      }
      if (-0x5e0e79f9 < local_254) {
        if (local_254 == -0x5e0e79f8) {
          uVar6 = 0;
          if (DAT_004cdef4 != 0) {
            uVar6 = DAT_004cdef0 / DAT_004cdef4;
          }
          bVar2 = (uVar6 * 0x6099f528 + 0x9c9aadd0) / 0x408f06d2 == 0xb4894ad1;
          iVar4 = -0x68590d96;
          local_254 = 0x36361515;
          goto LAB_00432178;
        }
        if (local_254 == -0x5db795b8) {
          local_254 = 0x2dffb09b;
        }
        goto LAB_0042f01c;
      }
      if (local_254 == -0x62b52dbe) {
        local_254 = -0x31cf2ea;
        goto LAB_0042f01c;
      }
      if (local_254 != -0x5f379432) goto LAB_0042f01c;
      bVar2 = 0x89701583 < ((DAT_004cdfe0 - DAT_004cdfe4) + 0x973d1b0dU & 0x2d1819a1);
      local_254 = -0x43cb462a;
      iVar4 = 0x691f86d6;
    }
    else {
      if (local_254 < -0x56447465) {
        if (local_254 < -0x584d3f76) {
          if (local_254 == -0x591a559b) {
            _objc_msgSend(param_2,PTR_s_isShowHeadImage_0048b4f8);
            iVar4 = FUN_004237f4(param_2,&PTR____CFConstantStringClassReference_004ca950);
            bVar2 = iVar4 == 0;
            local_254 = -0x62b52dbe;
            iVar4 = 0x313bbb72;
LAB_004324c0:
            if (bVar2) {
              local_254 = iVar4;
            }
          }
          else if (local_254 == -0x587308d1) {
            _objc_msgSend(local_d8,local_1b8);
            local_1c0 = _objc_retainAutoreleasedReturnValue();
            local_254 = 0x17be1e7f;
          }
        }
        else if (local_254 == -0x584d3f76) {
          _objc_msgSend(local_130,local_158);
          local_254 = 0x61e46497;
        }
        else if (local_254 == -0x57180651) {
          bVar3 = 0x295f493e < uVar1;
          bVar2 = uVar1 == 0x295f493f;
          iVar4 = 0x9eedff;
          local_254 = 0x5e3883ec;
          goto LAB_0043251c;
        }
        goto LAB_0042f01c;
      }
      if (-0x54453ef6 < local_254) {
        if (local_254 == -0x54453ef5) goto LAB_004301f0;
        if (local_254 == -0x52e5a9a4) {
          local_254 = 0x4f47f054;
        }
        else if (local_254 == -0x51a74eaa) {
          bVar2 = 0x2ff253f7 <
                  (((DAT_004cdf50 ^ DAT_004cdf54) / 0x18b36100 | 0xbdf52b04) ^ 0xd15afd28);
          iVar4 = -0x2514c8cd;
          local_254 = 0x411d6c0d;
          goto LAB_00432218;
        }
        goto LAB_0042f01c;
      }
      if (local_254 != -0x56447465) {
        if (local_254 == -0x5584f8ba) {
          local_254 = -0x1898dd6;
          if (local_149 == '\0') {
            local_254 = -0x591a559b;
          }
        }
        goto LAB_0042f01c;
      }
      uVar6 = DAT_004ce078 * DAT_004ce07c;
      local_1c1 = _objc_msgSend(local_1c0,local_f0);
      _objc_release(local_1c0);
      bVar2 = ((uVar6 | 0x50434786) * 0x372193cf) / 0x3caeaa59 < 0xe22ff8d0;
      local_254 = -0x5bde51a2;
      iVar4 = -0x2ae00322;
    }
  }
  else {
    if (local_254 < 0x36361515) {
      if (local_254 < 0x1d822b4c) {
        if (local_254 < 0xe2784e9) {
          if (local_254 < 0x6c9c133) {
            if (0x3b3f7b0 < local_254) {
              if (local_254 == 0x3b3f7b1) {
                uVar6 = 0;
                if (DAT_004ce004 != 0) {
                  uVar6 = DAT_004ce000 / DAT_004ce004;
                }
                local_254 = -0x321ecf6;
                if ((uVar6 * -0x1b07fbed | 0xd935522a) * 0x523f2ee7 != -0x68b55966) {
                  local_254 = 0x11ffe358;
                }
              }
              else if (local_254 == 0x3e0a102) {
                local_254 = -0x596ad235;
                local_220 = local_110;
              }
              goto LAB_0042f01c;
            }
            if (local_254 != -0xfe256a) {
              if (local_254 == 0x9eedff) {
                local_b0 = DAT_004d219c;
                bVar2 = (DAT_004cdea8 & DAT_004cdeac) * 0x1d31ee7b == 0x62cc2ec5;
                iVar4 = 0x9eedff;
                local_254 = 0x7ef1c57f;
                goto LAB_004313ac;
              }
              goto LAB_0042f01c;
            }
            bVar2 = 0x3c4e9c9e < ((DAT_004ce030 & DAT_004ce034) + 0x16c477ab | 0xef2bdd56);
            iVar4 = -0xc992218;
            local_254 = 0x71b67080;
          }
          else {
            if (local_254 < 0x8620a1d) {
              if (local_254 == 0x6c9c133) {
                local_254 = -0xfe256a;
              }
              else if (local_254 == 0x7df05b8) {
                DAT_004ca520 = DAT_004ca500 ^ 0x60;
                DAT_004ca521 = DAT_004ca501 ^ 0xbb;
                DAT_004ca522 = DAT_004ca502 ^ 0xaa;
                DAT_004ca523 = DAT_004ca503 ^ 0x27;
                DAT_004ca524 = DAT_004ca504 ^ 0x38;
                DAT_004ca525 = DAT_004ca505 ^ 0x5c;
                DAT_004ca526 = DAT_004ca506 ^ 0xdf;
                DAT_004ca527 = DAT_004ca507 ^ 0x92;
                DAT_004ca528 = DAT_004ca508 ^ 0x31;
                DAT_004ca529 = DAT_004ca509 ^ 0x48;
                DAT_004ca52a = DAT_004ca50a ^ 0xd3;
                DAT_004ca52b = DAT_004ca50b ^ 0xd3;
                DAT_004ca52c = DAT_004ca50c ^ 0xd5;
                DAT_004ca52d = DAT_004ca50d ^ 0x2d;
                DAT_004ca52e = DAT_004ca50e ^ 0xed;
                DAT_004ca52f = DAT_004ca50f ^ 0xd2;
                DAT_004ca530 = DAT_004ca510 ^ 0xfe;
                DAT_004ca531 = DAT_004ca511 ^ 0x35;
                DAT_004ca532 = DAT_004ca512 ^ 0x83;
                DAT_004ca533 = DAT_004ca513 ^ 0x7f;
                DAT_004ca534 = DAT_004ca514 ^ 0xb1;
                DAT_004ca535 = DAT_004ca515 ^ 0x7e;
                DAT_004ca536 = DAT_004ca516 ^ 0x40;
                DAT_004ca910 = DAT_004ca8f0 ^ 0xe5;
                DAT_004ca911 = DAT_004ca8f1 ^ 0x42;
                DAT_004ca912 = DAT_004ca8f2 ^ 0x4f;
                DAT_004ca913 = DAT_004ca8f3 ^ 0x57;
                DAT_004ca914 = DAT_004ca8f4 ^ 0xb9;
                DAT_004ca915 = DAT_004ca8f5 ^ 0xf1;
                DAT_004ca916 = DAT_004ca8f6 ^ 0x4a;
                DAT_004ca917 = DAT_004ca8f7 ^ 0xdf;
                DAT_004ca918 = DAT_004ca8f8 ^ 0x8b;
                DAT_004ca919 = DAT_004ca8f9 ^ 0xb2;
                DAT_004ca91a = DAT_004ca8fa ^ 0x21;
                DAT_004ca91b = DAT_004ca8fb ^ 0xf8;
                DAT_004ca91c = DAT_004ca8fc ^ 0x8d;
                DAT_004ca91d = DAT_004ca8fd ^ 0xa4;
                DAT_004ca91e = DAT_004ca8fe ^ 0x66;
                local_254 = -0x80b476a;
                if (0x62e16d74 <
                    (uint)((ulong)((DAT_004cded8 & DAT_004cdedc ^ 0x92bac850) >> 1) * 0x20ab2e79 >>
                          0x3c)) {
                  local_254 = 0x7df05b8;
                }
                local_b2 = DAT_004ca8ff ^ 0xfc;
              }
              goto LAB_0042f01c;
            }
            if (local_254 == 0x8620a1d) {
              bVar2 = (((DAT_004ce060 | DAT_004ce064) & 0x13e2fb81) + 0x90da0bca | 0xa2f0b749) ==
                      0x178adf03;
              local_254 = -0x1ebdcf66;
              iVar4 = -0x4582cd89;
              goto LAB_004324c0;
            }
            if (local_254 == 0xa8b8bd1) {
              uVar6 = 0;
              if (DAT_004cdf0c != 0) {
                uVar6 = DAT_004cdf08 / DAT_004cdf0c;
              }
              bVar2 = 0xd10c6991 < (uVar6 | 0x37ab834) * 0x1356a2b0 + 0xf4ddcae0;
              local_254 = 0x474bcd5f;
              iVar4 = -0x14b60fcf;
              goto LAB_00432464;
            }
            if (local_254 != 0xc5bed32) goto LAB_0042f01c;
            bVar2 = 0x4922983b < (DAT_004ce040 & DAT_004ce044) * 0x7cd86846;
            iVar4 = 0x7836aef1;
            local_254 = 0x74930960;
          }
          goto LAB_00432218;
        }
        if (local_254 < 0x17be1e7f) {
          if (local_254 < 0x11ffe358) {
            if (local_254 == 0xe2784e9) {
              local_100 = PTR_BubbleBoxConfig_0048c990;
              local_254 = -0x77505ac3;
            }
            else if (local_254 == 0x1050cf6a) {
              DAT_004ca5fe = DAT_004ca5de ^ 6;
              DAT_004ca5ff = DAT_004ca5df ^ 0x68;
              DAT_004ca600 = DAT_004ca5e0 ^ 0x10;
              DAT_004ca601 = DAT_004ca5e1 ^ 0xeb;
              DAT_004ca602 = DAT_004ca5e2 ^ 0x17;
              DAT_004ca603 = DAT_004ca5e3 ^ 0x3f;
              DAT_004ca604 = DAT_004ca5e4 ^ 0xcb;
              DAT_004ca605 = DAT_004ca5e5 ^ 0xcb;
              DAT_004ca606 = DAT_004ca5e6 ^ 0xbc;
              DAT_004ca607 = DAT_004ca5e7 ^ 0x87;
              DAT_004ca608 = DAT_004ca5e8 ^ 0xf4;
              local_254 = -0x4e33c1f6;
            }
          }
          else if (local_254 == 0x11ffe358) {
            local_254 = 0x6b80c5aa;
            if (0xf0d9e665 < ((DAT_004ce008 * DAT_004ce00c ^ 0xac86f8e1U) + 0x4b045394 | 0x6e8713ee)
               ) {
              local_254 = 0x11ffe358;
            }
          }
          else if (local_254 == 0x14dfcc40) {
            bVar2 = DAT_004cdf10 * DAT_004cdf14 == 0x2c7229ac;
            iVar4 = 0x5c585252;
            local_254 = 0x76af7778;
LAB_00432178:
            if (!bVar2) {
              local_254 = iVar4;
            }
          }
          goto LAB_0042f01c;
        }
        if (0x1aa04405 < local_254) {
          if (local_254 == 0x1aa04406) {
            local_254 = 0x74fe8db5;
          }
          else if (local_254 == 0x1b05c28f) {
            local_254 = -0x6b0ca047;
          }
          else if (local_254 == 0x1ce1747c) {
            _objc_msgSend(local_138,PTR_s_doubleValue_00489d10);
            _objc_release(local_138);
            _objc_msgSend(local_110,PTR_s_layoutSpace_0048ae68);
            local_254 = -0x6365b979;
          }
          goto LAB_0042f01c;
        }
        if (local_254 == 0x17be1e7f) {
          uVar6 = 0;
          if (DAT_004ce074 != 0) {
            uVar6 = DAT_004ce070 / DAT_004ce074;
          }
          uVar6 = uVar6 + 0x414b622a | 0xf5fd7ef7;
          bVar3 = 0xf6e4d5e6 < uVar6;
          bVar2 = uVar6 == 0xf6e4d5e7;
          iVar4 = -0x56447465;
          local_254 = -0x5bde51a2;
        }
        else {
          if (local_254 != 0x180d0e73) goto LAB_0042f01c;
          uVar6 = (uint)((ulong)((DAT_004cdeb0 + DAT_004cdeb4) * 0x3c2b8985 | 0x4d9be3c3) *
                         0x125d31e5 >> 0x3c);
          bVar3 = 0x73344537 < uVar6;
          bVar2 = uVar6 == 0x73344538;
          iVar4 = -0xf7c793d;
          local_254 = -0x5c7bcd11;
        }
      }
      else {
        if (0x2bbb3bd1 < local_254) {
          if (local_254 < 0x2dffb09b) {
            if (local_254 < 0x2d689fe5) {
              if (local_254 == 0x2bbb3bd2) {
                uVar6 = 0;
                if (DAT_004cdee4 != 0) {
                  uVar6 = DAT_004cdee0 / DAT_004cdee4;
                }
                uVar6 = ((uVar6 | 0x56839f2a) ^ 0x9ff852a4) + 0xf8d51e53;
                bVar3 = 0xa53576a9 < uVar6;
                bVar2 = uVar6 == 0xa53576aa;
                local_254 = -0x4e33c1f6;
                iVar4 = 0x1050cf6a;
                goto LAB_00432324;
              }
              if (local_254 == 0x2ce21720) {
                local_254 = 0x2db44efc;
                if (local_111 == '\0') {
                  local_254 = -0xfe256a;
                }
              }
            }
            else {
              if (local_254 == 0x2d689fe5) {
                uVar6 = DAT_004cdf48 ^ DAT_004cdf4c;
                local_f2 = FUN_004237f4(param_2,&PTR____CFConstantStringClassReference_004ca970);
                bVar2 = 0x58efd9c0 < (uVar6 | 0xecdafcfb) + 0x62c0f0bb;
                local_254 = 0x282c18ca;
                iVar4 = -0x50a57f4f;
                goto LAB_00432464;
              }
              if (local_254 == 0x2db44efc) {
                bVar2 = 0x1a716d6e <
                        (DAT_004cdf80 * DAT_004cdf84 * -0x105eef5c + 0x3404429fU ^ 0xfece9ce3);
                iVar4 = -0x16bc334f;
                local_254 = -0x1a920738;
                goto LAB_00432218;
              }
            }
            goto LAB_0042f01c;
          }
          if (local_254 < 0x2f9014f0) {
            if (local_254 == 0x2dffb09b) {
              uVar6 = (DAT_004cdfb0 ^ DAT_004cdfb4 ^ 0x9dc66d68) + 0x7082b208;
              bVar3 = 0x9a063bd1 < uVar6;
              bVar2 = uVar6 == 0x9a063bd2;
              local_254 = 0x765a75d1;
              iVar4 = -0x69a52d71;
              goto LAB_00432324;
            }
            if (local_254 != 0x2e28837b) goto LAB_0042f01c;
            uVar6 = DAT_004cdf68 * DAT_004cdf6c;
            local_108 = PTR_s_shared_00489458;
            _objc_msgSend(local_100);
            local_110 = _objc_retainAutoreleasedReturnValue();
            local_111 = _objc_msgSend(param_2,PTR_s_isTailPart_0048bc38);
            bVar2 = ((uVar6 ^ 0x2767e961) * 0x62bbb6cb) / 0x478d1ec0 == 0x2d6939c6;
            local_254 = 0x7f5f5ef2;
            iVar4 = -0x296943e5;
          }
          else {
            if (local_254 != 0x2f9014f0) {
              if (local_254 == 0x313bbb72) {
                bVar2 = ((DAT_004ce010 - DAT_004ce014) + 0x643de4d7U & 0x4ca2e9da | 0x44a060ca) ==
                        0x12082911;
                iVar4 = -0x2fef6535;
                local_254 = 0x1ff8049c;
                goto LAB_00432178;
              }
              if (local_254 == 0x35757ba7) {
                _objc_release(local_e8);
                local_254 = -0x51a74eaa;
              }
              goto LAB_0042f01c;
            }
            uVar6 = DAT_004ce028 & DAT_004ce02c;
            _objc_release(local_130);
            bVar2 = (uint)((ulong)(uVar6 + 0x9b41f5c6 | 0x54886d40) * 0x61af9bc9 >> 0x3e) ==
                    0x23bd0e50;
            local_254 = 0x2f9014f0;
            iVar4 = 0x6c9c133;
          }
          goto LAB_004325d0;
        }
        if (local_254 < 0x282c18ca) {
          if (local_254 < 0x1f4b1d12) {
            if (local_254 == 0x1d822b4c) {
              uVar5 = _objc_retain(param_2);
              local_c8 = (*DAT_004d2140)(param_1,uVar5,PTR_s_measure__0048c108);
              _BBReferAdditionalHeight(param_2);
              FUN_00429830(param_2);
              local_d8 = _objc_retainAutoreleasedReturnValue();
              local_d9 = FUN_0042bf78();
              local_254 = -0x262042d8;
            }
            else if (local_254 == 0x1db31ad3) {
LAB_004301f0:
              local_254 = -0x7872ba53;
            }
          }
          else if (local_254 == 0x1f4b1d12) {
            local_254 = -0x4ecfc3d6;
          }
          else if (local_254 == 0x1ff8049c) {
            FUN_004237f4(param_2,&PTR____CFConstantStringClassReference_004ca930);
            local_254 = -0x2fef6535;
          }
          goto LAB_0042f01c;
        }
        if (local_254 < 0x2aecefaf) {
          if (local_254 == 0x282c18ca) {
            FUN_004237f4(param_2,&PTR____CFConstantStringClassReference_004ca970);
            local_254 = 0x2d689fe5;
          }
          else if (local_254 == 0x29e863ed) {
            local_254 = 0x1db31ad3;
          }
          goto LAB_0042f01c;
        }
        if (local_254 != 0x2aecefaf) {
          if (local_254 == 0x2b0f52e3) {
            local_254 = -0x102a2fd8;
          }
          else if (local_254 == 0x2b5a462b) goto LAB_00431bbc;
          goto LAB_0042f01c;
        }
        uVar6 = ((DAT_004cdff0 + DAT_004cdff4 | 0x244a69d9U) ^ 0x23a99330) + 0x4e216e61;
        bVar3 = 0x6990b736 < uVar6;
        bVar2 = uVar6 == 0x6990b737;
        iVar4 = -0x52e5a9a4;
        local_254 = 0x4f47f054;
      }
LAB_0043251c:
      if (!bVar3 || bVar2) {
        local_254 = iVar4;
      }
      goto LAB_0042f01c;
    }
    if (local_254 < 0x5e3883ec) {
      if (local_254 < 0x4eb03266) {
        if (local_254 < 0x411d6c0d) {
          if (local_254 < 0x3c765a19) {
            if (local_254 == 0x36361515) {
              DAT_004d219c = 1;
              local_254 = -0x68590d96;
            }
            else if (local_254 == 0x3776ea27) {
              local_254 = -0xbba2f85;
            }
          }
          else if (local_254 == 0x3c765a19) {
            _objc_release(local_d8);
            _objc_release(param_2);
            local_254 = -0x14bb406;
          }
          else if (local_254 == 0x3ca8f3a2) {
            bVar2 = local_b1 == '\0';
            iVar4 = -0x5e0e79f8;
            local_254 = 0x4a2edc78;
LAB_004313ac:
            if (bVar2) {
              local_254 = iVar4;
            }
          }
        }
        else if (local_254 < 0x49975f98) {
          if (local_254 == 0x411d6c0d) {
            local_254 = -0x2514c8cd;
          }
          else if (local_254 == 0x474bcd5f) {
            local_254 = 0xa8b8bd1;
          }
        }
        else if (local_254 == 0x49975f98) {
          local_254 = -0x591a559b;
          if (local_161 == '\0') {
            local_254 = -0x1edc3075;
          }
        }
        else {
          if (local_254 == 0x4a2edc78) {
            uVar6 = DAT_004cded0 * DAT_004cded4 + 0x7da0717U ^ 0xb2b588c3;
            bVar3 = 0x442fd922 < uVar6;
            bVar2 = uVar6 == 0x442fd923;
            iVar4 = 0x7df05b8;
            local_254 = -0x1dc7af37;
            goto LAB_0043251c;
          }
          if (local_254 == 0x4c33c8b0) {
            bVar2 = 0xa782c53b < ((DAT_004cdf40 ^ DAT_004cdf44 | 0x80fd4840) ^ 0xe43ba637);
            local_254 = 0x2d689fe5;
            iVar4 = 0x282c18ca;
            goto LAB_00432464;
          }
        }
        goto LAB_0042f01c;
      }
      if (local_254 < 0x5795d663) {
        if (local_254 < 0x5060d1fe) {
          if (local_254 == 0x4eb03266) {
            uVar6 = DAT_004cdf38 * DAT_004cdf3c;
            local_f1 = _objc_msgSend(local_e8,local_f0);
            bVar2 = (int)((long)((ulong)uVar6 * 0xb7e0e7dd) >> 0x3f) * 0x1f58ec82 == 0x5d32c82b;
            local_254 = 0x6ad0c5fd;
            iVar4 = -0x7dad73a6;
            goto LAB_004325d0;
          }
          if (local_254 == 0x4f47f054) {
            uVar6 = 0;
            if (DAT_004cdffc != 0) {
              uVar6 = DAT_004cdff8 / DAT_004cdffc;
            }
            uVar6 = (uVar6 ^ 0xaf37984) * -0x396dc6fa & 0x39754990;
            bVar3 = 0x195771da < uVar6;
            bVar2 = uVar6 == 0x195771db;
            iVar4 = -0x52e5a9a4;
            local_254 = -0x4c7c980c;
            goto LAB_0043251c;
          }
        }
        else if (local_254 == 0x5060d1fe) {
          local_254 = 0x60b9d442;
        }
        else if (local_254 == 0x53522691) {
          local_254 = -0x18fbfaf7;
          if (0xaadb4be6 < (DAT_004cdf20 & DAT_004cdf24 & 0xaace4102 | 0x228a4102)) {
            local_254 = -0x6a78692d;
          }
        }
        else if (local_254 == 0x52757dbb) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = local_1f8;
          return auVar7;
        }
        goto LAB_0042f01c;
      }
      if (0x5972f470 < local_254) {
        if (local_254 == 0x5972f471) {
          _objc_msgSend(param_2,PTR_s_isShowChatRoomDisplayName_0048bad0);
          local_254 = 0x29e863ed;
        }
        else if (local_254 == 0x5c585252) {
          _objc_msgSend(local_d8,PTR_s_b_isCompleted_0048b668);
          local_e8 = _objc_retainAutoreleasedReturnValue();
          local_254 = -0x3c7d1473;
        }
        else if (local_254 == 0x5cdc7f72) {
          uVar6 = 0;
          if (DAT_004cdecc != 0) {
            uVar6 = DAT_004cdec8 / DAT_004cdecc;
          }
          bVar2 = 0x80a9ba71 < ((uVar6 ^ 0x14d5a855) * 0x5a5e8028) / 0x3a9690fb;
          iVar4 = 0x5cdc7f72;
          local_254 = 0x3ca8f3a2;
          goto LAB_00432218;
        }
        goto LAB_0042f01c;
      }
      if (local_254 != 0x5795d663) {
        if (local_254 == 0x596b7090) {
          bVar2 = (int)((long)((ulong)(DAT_004cdf30 + DAT_004cdf34 + 0xba02f0b) * 0xd68ae7bd) >>
                       0x3f) == -0x60260570;
          iVar4 = 0x6ad0c5fd;
          local_254 = 0x4eb03266;
          goto LAB_004313ac;
        }
        goto LAB_0042f01c;
      }
      local_158 = PTR_s_space_0048c098;
      bVar2 = 0xa8cee4df < (DAT_004cdfc8 * DAT_004cdfcc + 0x31c1784fU & 0x1200489);
      iVar4 = -0x487ba00a;
      local_254 = 0x2b0f52e3;
LAB_00432218:
      if (bVar2) {
        local_254 = iVar4;
      }
      goto LAB_0042f01c;
    }
    if (local_254 < 0x74930960) {
      if (local_254 < 0x691f86d6) {
        if (local_254 < 0x61e46497) {
          if (local_254 == 0x5e3883ec) {
            local_254 = 0x9eedff;
          }
          else if (local_254 == 0x60b9d442) {
            uVar6 = (DAT_004cdf78 | DAT_004cdf7c) * -0x3204d29f + 0x169e7d7f;
            bVar3 = 0xe121271f < uVar6;
            bVar2 = uVar6 == 0xe1212720;
            local_254 = 0x60b9d442;
            iVar4 = 0x2ce21720;
            goto LAB_00432324;
          }
        }
        else {
          if (local_254 == 0x61e46497) {
            uVar6 = 0;
            if (DAT_004cdfdc != 0) {
              uVar6 = DAT_004cdfd8 / DAT_004cdfdc;
            }
            local_160 = _objc_msgSend(local_130,local_158);
            bVar2 = 0x4082411d <
                    (((uint)((ulong)uVar6 * 0x29b29bb >> 0x36) | 0xf333e144) ^ 0x63d64fe6);
            local_254 = -0x584d3f76;
            iVar4 = -0xe4a6560;
            goto LAB_00432464;
          }
          if (local_254 == 0x6534531e) {
            local_254 = -0x5e0e79f8;
          }
        }
      }
      else if (local_254 < 0x6b80c5aa) {
        if (local_254 == 0x691f86d6) {
          local_254 = -0x43cb462a;
        }
        else if (local_254 == 0x6ad0c5fd) {
          _objc_msgSend(local_e8,local_f0);
          local_254 = 0x4eb03266;
        }
      }
      else if (local_254 == 0x6b80c5aa) {
        local_254 = -0x591a559b;
      }
      else if (local_254 == 0x71b67080) {
        _objc_msgSend(param_2,PTR_s_isHeadPart_0048b518);
        local_254 = -0xc992218;
      }
      else if (local_254 == 0x724bad6b) {
        local_254 = -0x4be4f8f7;
        if (local_f2 == '\0') {
          local_254 = 0xe2784e9;
        }
      }
      goto LAB_0042f01c;
    }
    if (0x76af7777 < local_254) {
      if (local_254 < 0x7ef1c57f) {
        if (local_254 == 0x76af7778) {
          _objc_msgSend(local_d8,PTR_s_b_isCompleted_0048b668);
          _objc_retainAutoreleasedReturnValue();
          local_254 = 0x5c585252;
        }
        else if (local_254 == 0x7836aef1) {
          local_254 = 0x74930960;
        }
      }
      else if (local_254 == 0x7ef1c57f) {
        local_254 = 0x180d0e73;
      }
      else if (local_254 == 0x7f0500b4) {
        uVar6 = 0;
        if (DAT_004ce05c != 0) {
          uVar6 = DAT_004ce058 / DAT_004ce05c;
        }
        local_1a9 = _objc_msgSend(local_110,local_1a8);
        local_254 = 0x3776ea27;
        if (0x6a8abc13 < (uVar6 + 0x344e0ebb | 0xbf8b150c) + 0x94ab223b) {
          local_254 = 0x7f0500b4;
        }
      }
      else if (local_254 == 0x7f5f5ef2) {
        _objc_msgSend(local_100,PTR_s_shared_00489458);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_2,PTR_s_isTailPart_0048bc38);
        local_254 = 0x2e28837b;
      }
      goto LAB_0042f01c;
    }
    if (local_254 < 0x75389671) {
      if (local_254 == 0x74930960) {
        uVar6 = (DAT_004ce048 + DAT_004ce04c) * 0x19b240fa + 0xd6dd8272U ^ 0xd51a352c;
        local_1a8 = PTR_s_enabledAvatarCard_0048a258;
        bVar3 = 0x88e00144 < uVar6;
        bVar2 = uVar6 == 0x88e00145;
        local_254 = 0x7836aef1;
        iVar4 = 0x1b05c28f;
        goto LAB_00432324;
      }
      if (local_254 == 0x74fe8db5) {
        local_254 = -0x62b52dbe;
        if (local_181 == '\0') {
          local_254 = 0x2b5a462b;
        }
      }
      goto LAB_0042f01c;
    }
    if (local_254 == 0x75389671) {
      local_254 = 0x5cdc7f72;
      goto LAB_0042f01c;
    }
    if (local_254 != 0x765a75d1) goto LAB_0042f01c;
    local_149 = local_148 == 0;
    bVar2 = 0x35e9dc92 < (DAT_004cdfb8 + DAT_004cdfbc + 0x3de4d0a9U & 0xec3b6d28);
    local_254 = 0x765a75d1;
    iVar4 = -0x5584f8ba;
  }
LAB_00432464:
  if (bVar2) {
    local_254 = iVar4;
  }
  goto LAB_0042f01c;
}



// #####################################
// ##### isNeedInsertTimeNode:current: @ 002fe49c
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isNeedInsertTimeNode_current_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar9;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  int iVar10;
  undefined1 auVar11 [16];
  int local_a8;
  byte local_a4;
  byte local_a3;
  byte local_a2;
  char local_a1;
  uint local_a0;
  uint local_9c;
  undefined *local_98;
  char local_89;
  undefined *local_88;
  char local_79;
  undefined *local_78;
  undefined8 local_70;
  char local_65;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_70;
  uVar1 = DAT_004bc9a0 & DAT_004bc9a4;
  local_a8 = 0x6522b007;
LAB_002fe554:
  uVar9 = auVar11._8_8_;
  local_70 = auVar11._0_8_;
  if (-0xd30225 < local_a8) {
    if (local_a8 < 0x45a47eaf) {
      if (local_a8 < 0x28ecef4b) {
        if (local_a8 < 0x99ea28c) {
          if (local_a8 == -0xd30224) {
            bVar7 = 0x916e4522 <
                    ((DAT_004bc9f0 | DAT_004bc9f4) + 0x27d2168a ^ 0x19ba3dd3) + 0x5c3c10d2;
            iVar10 = 0x3390b685;
            local_a8 = -0x73d8e70e;
            goto LAB_002feeac;
          }
          if (local_a8 == 0x328f035) {
LAB_002ff004:
            auVar11._8_8_ = uVar9;
            auVar11._0_8_ = local_70;
            local_a8 = -0x5d2d645;
          }
        }
        else if (local_a8 == 0x99ea28c) {
          uVar2 = ((DAT_004bc9a8 & DAT_004bc9ac) * -0x3293eea8) / 0x1841c0ae & 0xfffffffd;
          _objc_retain(param_3,uVar9);
          _objc_retain(param_4);
          bVar8 = 0x3fd4f7b9 < uVar2;
          bVar7 = uVar2 == 0x3fd4f7ba;
          local_a8 = 0x3add0015;
          iVar10 = 0x34bc9b14;
          uVar9 = extraout_x1_09;
LAB_002ff174:
          auVar5._8_8_ = uVar9;
          auVar5._0_8_ = local_70;
          auVar11._8_8_ = uVar9;
          auVar11._0_8_ = local_70;
          if (!bVar8 || bVar7) {
            local_a8 = iVar10;
            auVar11 = auVar5;
          }
        }
        else if (local_a8 == 0x9ad4574) {
          local_a8 = 0x380d0836;
          local_a3 = local_a4;
        }
        else if (local_a8 == 0x121603cd) {
          local_a8 = -0x5bb19648;
          if (local_65 == '\0') {
            local_a8 = 0x380d0836;
          }
          local_a3 = 0;
        }
      }
      else if (local_a8 < 0x34bc9b14) {
        if (local_a8 == 0x28ecef4b) {
          local_a8 = -0x6b41dfd2;
        }
        else if (local_a8 == 0x2a32a75e) {
          _objc_msgSend(param_3,PTR_s_m_uiCreateTime_0048b858);
          auVar11._8_8_ = extraout_x1_05;
          auVar11._0_8_ = local_70;
          local_a8 = -0x41a7db67;
        }
        else if (local_a8 == 0x3390b685) {
          iVar10 = DAT_004bc9f8 - DAT_004bc9fc;
          auVar11 = _objc_msgSend(local_70,local_78);
          uVar9 = auVar11._8_8_;
          local_79 = auVar11._0_8_ == 0;
          bVar7 = 0x81aafd0 < (iVar10 + 0xd5828f10U ^ 0x852c952d) + 0x47ab5e41;
          local_a8 = 0x3390b685;
          iVar10 = -0x643ccbff;
          goto LAB_002ff1d8;
        }
      }
      else if (local_a8 == 0x34bc9b14) {
        local_a8 = -0x43fb16ea;
      }
      else if (local_a8 == 0x3add0015) {
        _objc_retain(param_3,uVar9);
        _objc_retain(param_4);
        auVar11._8_8_ = extraout_x1_01;
        auVar11._0_8_ = local_70;
        local_a8 = 0x99ea28c;
      }
      else if (local_a8 == 0x380d0836) {
        _objc_release(param_4);
        _objc_release(param_3);
        return (bool)local_a3;
      }
      goto LAB_002fe554;
    }
    if (local_a8 < 0x6522b007) {
      if (local_a8 < 0x5dcfd16a) {
        if (local_a8 == 0x45a47eaf) {
          local_a8 = -0xd30224;
        }
        else if (local_a8 == 0x4f8c5db0) {
          local_88 = PTR_s_isNewInviteesMsg_0048b850;
          local_a8 = 0x328f035;
        }
        goto LAB_002fe554;
      }
      if (local_a8 == 0x5dcfd16a) {
        uVar2 = local_9c - local_a0;
        if (local_a1 == '\0') {
          uVar2 = local_a0 - local_9c;
        }
        local_a2 = 299 < uVar2;
        local_a8 = -0x4256b1ae;
        goto LAB_002fe554;
      }
      if (local_a8 == 0x5e1ba2ba) {
        _objc_release(local_70);
        auVar11._8_8_ = extraout_x1_04;
        auVar11._0_8_ = local_70;
        local_a8 = 0x76351423;
        goto LAB_002fe554;
      }
      if (local_a8 != 0x5f69fa99) goto LAB_002fe554;
      uVar2 = 0;
      if (DAT_004bca2c != 0) {
        uVar2 = DAT_004bca28 / DAT_004bca2c;
      }
      local_a0 = _objc_msgSend(param_4,local_98);
      local_a1 = local_a0 < local_9c;
      bVar7 = 0x5ef16129 < (uint)((ulong)((uVar2 | 0x471ef989) + 0x20024ed6) * 0xf897fdb >> 0x3b);
      iVar10 = 0x6b0ddc80;
      local_a8 = -0x5d29b6da;
      uVar9 = extraout_x1;
    }
    else if (local_a8 < 0x72e0d886) {
      if (local_a8 != 0x6522b007) {
        if (local_a8 == 0x6b0ddc80) {
          _objc_msgSend(param_4,local_98);
          auVar11._8_8_ = extraout_x1_02;
          auVar11._0_8_ = local_70;
          local_a8 = 0x5f69fa99;
        }
        else if (local_a8 == 0x72d8cce8) {
          local_a8 = 0x5f69fa99;
          if ((DAT_004bca20 + DAT_004bca24 + 0xba2c3b2U ^ 0x38220404 | 0x84d0a2e9) == 0xbee86db1) {
            local_a8 = 0x6b0ddc80;
          }
        }
        goto LAB_002fe554;
      }
      bVar7 = 0xb0240ef9 < (uVar1 ^ 0x20841820 | 0x8a396543) * -0x56ed0b37;
      iVar10 = 0x3add0015;
      local_a8 = 0x99ea28c;
    }
    else {
      if (local_a8 == 0x72e0d886) {
        uVar2 = (DAT_004bc9d8 & DAT_004bc9dc) + 0xed0cc885;
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
        auVar11 = _objc_retainAutoreleasedReturnValue();
        bVar8 = 0xa28be27 < uVar2;
        bVar7 = uVar2 == 0xa28be28;
        iVar10 = -0x82263b7;
        local_a8 = -0x5171961b;
        goto LAB_002ff248;
      }
      if (local_a8 == 0x76351423) {
        uVar2 = 0;
        if (DAT_004bca3c != 0) {
          uVar2 = DAT_004bca38 / DAT_004bca3c;
        }
        _objc_release(local_70);
        auVar4._8_8_ = extraout_x1_03;
        auVar4._0_8_ = local_70;
        auVar11._8_8_ = extraout_x1_03;
        auVar11._0_8_ = local_70;
        local_a8 = 0x76351423;
        if ((uint)((ulong)(uVar2 & 0xb547eef7 | 0x3406ae77) * 0x4f1eaa83 >> 0x3d) != 0x44e4614e) {
          local_a8 = 0x9ad4574;
          auVar11 = auVar4;
        }
        goto LAB_002fe554;
      }
      if (local_a8 != 0x7a024e20) goto LAB_002fe554;
      bVar7 = 0xe45500ec < ((DAT_004bc9c8 & DAT_004bc9cc) + 0x718d2d85 ^ 0x78d7b842);
      iVar10 = 0x7a024e20;
      local_a8 = 0x121603cd;
    }
LAB_002feeac:
    auVar3._8_8_ = uVar9;
    auVar3._0_8_ = local_70;
    auVar11._8_8_ = uVar9;
    auVar11._0_8_ = local_70;
    if (bVar7) {
      local_a8 = iVar10;
      auVar11 = auVar3;
    }
    goto LAB_002fe554;
  }
  if (-0x43fb16eb < local_a8) {
    if (local_a8 < -0x30378080) {
      if (local_a8 < -0x41a7db67) {
        if (local_a8 != -0x43fb16ea) {
          if (local_a8 == -0x4256b1ae) {
            local_a4 = local_a2;
            local_a8 = 0x5e1ba2ba;
            if ((DAT_004bca30 - DAT_004bca34 & 0x1001000aU | 0x2d6eece0) * -0x40e88ae != 0x1f0195eb)
            {
              local_a8 = 0x76351423;
            }
          }
          goto LAB_002fe554;
        }
        uVar2 = 0;
        if (DAT_004bc9b4 != 0) {
          uVar2 = DAT_004bc9b0 / DAT_004bc9b4;
        }
        uVar2 = (uVar2 * -0x3d2997e3 ^ 0x3b8a6e49) + 0x4cb7940b;
        bVar8 = 0xfd3af5cb < uVar2;
        bVar7 = uVar2 == 0xfd3af5cc;
        iVar10 = -0x501ca351;
        local_a8 = -0x533cf538;
      }
      else {
        if (local_a8 != -0x41a7db67) {
          if (local_a8 == -0x3da79846) {
            _objc_msgSend(param_4,local_88);
            uVar9 = extraout_x1_08;
            goto LAB_002ff004;
          }
          if (local_a8 == -0x32e29501) {
            local_a8 = 0x72d8cce8;
          }
          goto LAB_002fe554;
        }
        uVar2 = DAT_004bca18 & DAT_004bca1c ^ 0x80826010 | 0x4f659b6f;
        local_98 = PTR_s_m_uiCreateTime_0048b858;
        local_9c = _objc_msgSend(param_3);
        auVar11._8_8_ = extraout_x1_10;
        auVar11._0_8_ = local_70;
        bVar8 = 0x2cbf2cd7 < uVar2;
        bVar7 = uVar2 == 0x2cbf2cd8;
        iVar10 = 0x2a32a75e;
        local_a8 = -0x32e29501;
      }
    }
    else {
      if (-0xb1b1da1 < local_a8) {
        if (local_a8 == -0xb1b1da0) {
          local_a8 = -0x30378080;
        }
        else if (local_a8 == -0x82263b7) {
          _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
          _objc_retainAutoreleasedReturnValue();
          auVar11._8_8_ = extraout_x1_06;
          auVar11._0_8_ = local_70;
          local_a8 = 0x72e0d886;
        }
        else if (local_a8 == -0x5d2d645) {
          uVar2 = (DAT_004bca08 * DAT_004bca0c ^ 0x23e8099U) * -0x17508ec8 ^ 0x1a08cf8;
          local_89 = _objc_msgSend(param_4,local_88);
          bVar8 = 0xefcc1d20 < uVar2;
          bVar7 = uVar2 == 0xefcc1d21;
          local_a8 = -0x5d2d645;
          iVar10 = -0x4fe2dee6;
          uVar9 = extraout_x1_00;
          goto LAB_002ff174;
        }
        goto LAB_002fe554;
      }
      if (local_a8 != -0x30378080) {
        if (local_a8 == -0x1959b014) {
          local_a8 = -0x4256b1ae;
          if (local_89 == '\0') {
            local_a8 = -0x1305a892;
          }
          local_a2 = 1;
        }
        else if (local_a8 == -0x1305a892) {
          local_a8 = -0x41a7db67;
          if ((int)((long)((ulong)(DAT_004bca10 & DAT_004bca14) * 0xab8f68e5) >> 0x3f) * 0x2f187cd5
              == 0x40e986d3) {
            local_a8 = 0x2a32a75e;
          }
        }
        goto LAB_002fe554;
      }
      uVar2 = DAT_004bc9c0 + DAT_004bc9c4 + 0x27c8b43b;
      bVar8 = 0xf763e5ac < uVar2;
      bVar7 = uVar2 == 0xf763e5ad;
      iVar10 = 0x7a024e20;
      local_a8 = -0x6e73aabd;
    }
LAB_002ff248:
    if (!bVar8 || bVar7) {
      local_a8 = iVar10;
    }
    goto LAB_002fe554;
  }
  if (local_a8 < -0x5bb19648) {
    if (local_a8 < -0x6b41dfd2) {
      if (local_a8 == -0x73d8e70e) {
        _objc_msgSend(local_70,local_78);
        auVar11._8_8_ = extraout_x1_07;
        auVar11._0_8_ = local_70;
        local_a8 = 0x3390b685;
      }
      else if (local_a8 == -0x6e73aabd) {
        local_a8 = 0x7a024e20;
      }
      goto LAB_002fe554;
    }
    if (local_a8 != -0x6b41dfd2) {
      if (local_a8 == -0x643ccbff) {
        local_a8 = -0x4256b1ae;
        if (local_79 == '\0') {
          local_a8 = 0x4f8c5db0;
        }
        local_a2 = 0;
      }
      else if (local_a8 == -0x5d29b6da) {
        local_a8 = 0x5dcfd16a;
      }
      goto LAB_002fe554;
    }
    local_78 = PTR_s_mergeMode_0048ae40;
    bVar7 = 0x22fad2ef < (((uint)(DAT_004bc9e8 * DAT_004bc9ec) >> 5) / 0x708cfa1 ^ 0xa8b259a3);
    local_a8 = -0x6b41dfd2;
    iVar10 = 0x45a47eaf;
  }
  else {
    if (local_a8 < -0x501ca351) {
      if (local_a8 == -0x5bb19648) {
        local_a8 = -0x82263b7;
        if (((DAT_004bc9d0 - DAT_004bc9d4 ^ 0x99011U) & 0x296db019) != 0xe2d3f745) {
          local_a8 = 0x72e0d886;
        }
      }
      else if (local_a8 == -0x533cf538) {
        local_a8 = -0x501ca351;
      }
      else if (local_a8 == -0x5171961b) {
        local_a8 = -0x46db0564;
      }
      goto LAB_002fe554;
    }
    if (local_a8 == -0x501ca351) {
      uVar2 = 0;
      if (DAT_004bc9bc != 0) {
        uVar2 = DAT_004bc9b8 / DAT_004bc9bc;
      }
      local_65 = param_3 != 0 && param_4 != 0;
      bVar7 = 0xce29504 < (uVar2 ^ 0xd4f095aa);
      local_a8 = -0x501ca351;
      iVar10 = -0xb1b1da0;
    }
    else {
      if (local_a8 == -0x4fe2dee6) {
        local_a8 = -0x1959b014;
        goto LAB_002fe554;
      }
      if (local_a8 != -0x46db0564) goto LAB_002fe554;
      bVar7 = 0x1f9f589b < ((DAT_004bc9e0 & DAT_004bc9e4) * 0x2180645e ^ 0xb303aed2) / 0x3f8e42df;
      local_a8 = -0x6b41dfd2;
      iVar10 = 0x28ecef4b;
    }
  }
LAB_002ff1d8:
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = local_70;
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = local_70;
  if (bVar7) {
    local_a8 = iVar10;
    auVar11 = auVar6;
  }
  goto LAB_002fe554;
}



// #####################################
// ##### _BBReferLayoutMessageTime @ 00361204
// #####################################

void _BBReferLayoutMessageTime
               (undefined1 param_1 [16],undefined8 param_2,double param_3,undefined8 param_4,
               undefined8 param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  int local_194;
  undefined8 local_190;
  undefined8 uStack_188;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  char local_139;
  undefined *local_138;
  char local_129;
  long local_128;
  char local_119;
  long local_118;
  undefined *local_110;
  undefined8 local_108;
  char local_f9;
  undefined8 local_f8;
  undefined *local_f0;
  char local_e1;
  undefined *local_e0;
  char local_d1;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  byte local_b3;
  byte local_b2;
  char local_b1;
  int local_b0;
  
  uVar1 = 0;
  if (DAT_004c1084 != 0) {
    uVar1 = DAT_004c1080 / DAT_004c1084;
  }
  local_194 = 0x6d8a4c1b;
LAB_003612f0:
  iVar8 = 0x3353e76c;
  if (local_194 < -0x4a326c2) {
    if (local_194 < -0x35b0c23b) {
      if (local_194 < -0x65ec21bf) {
        if (-0x785089a1 < local_194) {
          if (local_194 < -0x73ebfc0a) {
            if (local_194 == -0x785089a0) {
              DAT_004c0421 = local_b2 ^ 0x20;
              DAT_004c0422 = DAT_004c0402 ^ 0x3c;
              iVar8 = -0x3432ce75;
            }
            else {
              if (local_194 != -0x767a2ac7) {
                if (local_194 == -0x757d0bc6) {
                  uVar6 = (uint)((ulong)((DAT_004c1138 & DAT_004c113c) * 0x381dfa9 >> 5) * 0x858847
                                >> 0x32) ^ 0x6698242f;
                  _objc_release(local_f8);
                  bVar2 = 0xcd9e9797 < uVar6;
                  bVar3 = uVar6 == 0xcd9e9798;
                  iVar8 = -0x16b7a396;
                  iVar7 = -0x24510b3b;
                  goto LAB_00363694;
                }
                goto LAB_003612f0;
              }
              local_f0 = PTR_s_viewModel_0048b4a8;
              _objc_msgSend(param_5);
              local_f8 = _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x7b15bd23;
            }
          }
          else if (local_194 < -0x6b8ddd7d) {
            if (local_194 == -0x73ebfc0a) {
              uVar6 = DAT_004c1178 | DAT_004c117c;
              _objc_release(local_f8);
              bVar3 = ((uVar6 | 0xfffffcff) & 0x8000540) == 0x82355d63;
              iVar7 = -0x47c341c6;
              iVar8 = 0x53c45003;
              goto LAB_003637e4;
            }
            if (local_194 != -0x6dd2e4c3) goto LAB_003612f0;
            iVar8 = 0x1fa4a946;
          }
          else {
            iVar8 = -0x117fe89c;
            if (local_194 != -0x6b8ddd7d) {
              iVar8 = -0x569df01b;
              iVar7 = -0x67120b44;
              goto LAB_00362680;
            }
          }
          goto LAB_00363b30;
        }
        if (-0x7c0e7d6c < local_194) {
          if (local_194 < -0x7a2f596c) {
            iVar8 = 0x213e21d8;
            if (local_194 != -0x7c0e7d6b) {
              if (local_194 != -0x7b9f817f) goto LAB_003612f0;
              uVar6 = 0;
              if (DAT_004c10f4 != 0) {
                uVar6 = DAT_004c10f0 / DAT_004c10f4;
              }
              bVar3 = 0xed9b96d0 < uVar6 / 0x32f75297 + 0xb1e3f6e;
              iVar8 = -0xf4d4712;
              iVar7 = -0x1fe9ccc3;
LAB_00362f28:
              if (bVar3) {
                iVar8 = iVar7;
              }
            }
          }
          else {
            if (local_194 == -0x7a2f596c) {
              bVar3 = local_129 == '\0';
              iVar7 = -0x7337704;
              iVar8 = -0x2385ecc0;
              goto LAB_003637e4;
            }
            if (local_194 != -0x78e83b45) goto LAB_003612f0;
            iVar8 = -0x34d24528;
          }
          goto LAB_00363b30;
        }
        if (local_194 == -0x7f6a166a) {
          uVar6 = DAT_004c1148 | DAT_004c114c;
          _objc_msgSend(local_c0,PTR_s_refer_0048bb30);
          local_108 = _objc_retainAutoreleasedReturnValue();
          local_110 = PTR_s_superview_0048a800;
          _objc_msgSend();
          local_118 = _objc_retainAutoreleasedReturnValue();
          bVar3 = (uint)((ulong)(uVar6 / 0xb29144cf | 0xc0e0560a) * 0x11c866bd >> 0x3b) ==
                  0x447ce5cb;
          iVar7 = 0x6b59ceab;
          iVar8 = -0x149eb1bd;
        }
        else {
          if (local_194 == -0x7cf8a5bd) {
            bVar3 = local_f9 == '\0';
            iVar7 = 0x3a61c12b;
            iVar8 = 0x3a3cf7e4;
            goto LAB_003637e4;
          }
          if (local_194 != -0x7c78da3d) goto LAB_003612f0;
          bVar3 = local_b1 == '\0';
          iVar7 = -0x117fe89c;
          iVar8 = 0x641320c9;
        }
      }
      else {
        if (local_194 < -0x44eef52d) {
          if (local_194 < -0x551ca95d) {
            if (local_194 == -0x65ec21bf) {
              _objc_msgSend(local_148,local_110);
              uVar4 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_5,PTR_s_valueForKey__0048b4d8,
                            &PTR____CFConstantStringClassReference_004c0430);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              uVar11 = _objc_msgSend(uVar5,PTR_s_CGRectValue_00489d08);
              _objc_msgSend(local_c8,local_110);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar11,uVar4,PTR_s_convertRect_toView__00489d30,uVar5);
              iVar8 = 0x7bf9ac91;
            }
            else if (local_194 == -0x5ea10a56) {
              _objc_release(local_f8);
              iVar8 = 0x4925e9a4;
            }
            else {
              if (local_194 != -0x569df01b) goto LAB_003612f0;
              iVar8 = -0x7c78da3d;
            }
          }
          else if (local_194 < -0x48cf2315) {
            iVar8 = 0x213e21d8;
            if (local_194 != -0x551ca95d) {
              if (local_194 == -0x531cbd43) {
                local_b0 = DAT_004d1c20;
                bVar3 = (int)((long)((ulong)(DAT_004c1088 * DAT_004c108c + 0x12b8550a) * 0xb8ba699d)
                             >> 0x3f) == -0x6a65b7be;
                iVar7 = -0x531cbd43;
                iVar8 = -0x11302cb9;
                goto LAB_003637e4;
              }
              goto LAB_003612f0;
            }
          }
          else if (local_194 == -0x48cf2315) {
            uVar6 = 0;
            if (DAT_004c10e4 != 0) {
              uVar6 = DAT_004c10e0 / DAT_004c10e4;
            }
            iVar8 = 0x6a8effdb;
            if ((uVar6 + 0xfd905af & 0x5f84008) < 0x53cecf13) {
              iVar8 = -0x1b793f04;
            }
          }
          else {
            if (local_194 != -0x47c341c6) goto LAB_003612f0;
            _objc_release(local_f8);
            iVar8 = -0x73ebfc0a;
          }
          goto LAB_00363b30;
        }
        if (local_194 < -0x3fd3d55c) {
          if (local_194 < -0x429a1b8f) {
            if (local_194 == -0x44eef52d) {
              DAT_004c0410 = DAT_004c03f0 ^ 0x50;
              DAT_004c0411 = DAT_004c03f1 ^ 0x11;
              DAT_004c0412 = DAT_004c03f2 ^ 0x19;
              DAT_004c0413 = DAT_004c03f3 ^ 0xc9;
              DAT_004c0414 = DAT_004c03f4 ^ 0xf3;
              DAT_004c0415 = DAT_004c03f5 ^ 0x92;
              DAT_004c0416 = DAT_004c03f6 ^ 0xfb;
              DAT_004c0417 = DAT_004c03f7 ^ 0xfe;
              DAT_004c0418 = DAT_004c03f8 ^ 0xa5;
              DAT_004c0419 = DAT_004c03f9;
              DAT_004c041a = DAT_004c03fa ^ 0xa9;
              DAT_004c041b = DAT_004c03fb ^ 0x96;
              DAT_004c041c = DAT_004c03fc ^ 0xe2;
              DAT_004c041d = DAT_004c03fd ^ 10;
              DAT_004c041e = DAT_004c03fe ^ 0x59;
              DAT_004c041f = DAT_004c03ff ^ 0x8c;
              DAT_004c0420 = DAT_004c0400 ^ 0x55;
              iVar8 = -0x3b5b536b;
            }
            else {
              if (local_194 != -0x4366fa74) goto LAB_003612f0;
              _objc_msgSend(local_c8,local_110);
              local_128 = _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x7bd522cb;
            }
          }
          else if (local_194 == -0x429a1b8f) {
            local_e1 = _objc_msgSend(local_c0,local_e0);
            iVar8 = -0x4a326c2;
          }
          else {
            if (local_194 != -0x41c9b8f2) goto LAB_003612f0;
            _objc_release(param_5);
            iVar8 = -0x46d2e4;
          }
          goto LAB_00363b30;
        }
        if (-0x3b5b536c < local_194) {
          if (local_194 != -0x3b5b536b) {
            if (local_194 == -0x3a8a5e54) {
              _objc_release(local_108);
              bVar3 = false;
              iVar7 = -0x3a8a5e54;
              iVar8 = -0x78e83b45;
              goto LAB_003637e4;
            }
            goto LAB_003612f0;
          }
          DAT_004c0410 = DAT_004c03f0 ^ 0x50;
          DAT_004c0411 = DAT_004c03f1 ^ 0x11;
          DAT_004c0412 = DAT_004c03f2 ^ 0x19;
          DAT_004c0413 = DAT_004c03f3 ^ 0xc9;
          DAT_004c0414 = DAT_004c03f4 ^ 0xf3;
          DAT_004c0415 = DAT_004c03f5 ^ 0x92;
          DAT_004c0416 = DAT_004c03f6 ^ 0xfb;
          DAT_004c0417 = DAT_004c03f7 ^ 0xfe;
          DAT_004c0418 = DAT_004c03f8 ^ 0xa5;
          DAT_004c0419 = DAT_004c03f9;
          DAT_004c041a = DAT_004c03fa ^ 0xa9;
          DAT_004c041b = DAT_004c03fb ^ 0x96;
          DAT_004c041c = DAT_004c03fc ^ 0xe2;
          DAT_004c041d = DAT_004c03fd ^ 10;
          DAT_004c041e = DAT_004c03fe ^ 0x59;
          DAT_004c041f = DAT_004c03ff ^ 0x8c;
          DAT_004c0420 = DAT_004c0400 ^ 0x55;
          iVar8 = -0x6dd2e4c3;
          if ((DAT_004c10a8 + DAT_004c10ac + 0x36c58463U | 0x7790c1ab) < 0x7865b171) {
            iVar8 = -0x3b5b536b;
          }
          local_b2 = DAT_004c0401;
          goto LAB_00363b30;
        }
        if (local_194 != -0x3fd3d55c) {
          if (local_194 != -0x3d026735) goto LAB_003612f0;
          iVar8 = 0x7fa6c5b;
          goto LAB_00363b30;
        }
        bVar3 = ((DAT_004c1188 - DAT_004c118c) * 0x3e783206 ^ 0x140422U | 0xcec8e95d) == 0x35181043;
        iVar7 = -0x32319885;
        iVar8 = -0x7a2f596c;
      }
LAB_003637e4:
      if (bVar3) {
        iVar8 = iVar7;
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0x1f1f23d2) {
      if (local_194 < -0x2dbe6881) {
        if (local_194 < -0x3393783f) {
          if (local_194 == -0x35b0c23b) {
            bVar3 = local_139 == '\0';
            iVar8 = 0x213e21d8;
            iVar7 = 0x2ad160cc;
            goto LAB_00363804;
          }
          if (local_194 == -0x34d24528) {
            bVar3 = 0xcb2fcf49 < (DAT_004c1170 & DAT_004c1174 ^ 0x81773e11) + 0x85210e8e;
            iVar7 = -0x47c341c6;
            iVar8 = -0x73ebfc0a;
            goto LAB_00363524;
          }
          if (local_194 == -0x3432ce75) {
            DAT_004c0421 = local_b2 ^ 0x20;
            DAT_004c0422 = DAT_004c0402 ^ 0x3c;
            local_b3 = DAT_004c0403 ^ 0x79;
            bVar3 = (DAT_004c10b8 + DAT_004c10bc | 0x3dfffa5fU) * -0x4497fa2c == 0x47290818;
            iVar8 = -0x3432ce75;
            iVar7 = -0x3d026735;
            goto LAB_00361fc0;
          }
          goto LAB_003612f0;
        }
        if (local_194 < -0x32319885) {
          if (local_194 != -0x3393783f) {
            if (local_194 == -0x32334175) {
              uVar6 = (DAT_004c1160 + DAT_004c1164 & 0x708cfa2fU) * 0x6200d842 + 0xce73ca36;
              bVar2 = 0x43b89d06 < uVar6;
              bVar3 = uVar6 == 0x43b89d07;
              iVar7 = -0x3a8a5e54;
              iVar8 = -0x1f1f23d2;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          DAT_004c0423 = local_b3;
          iVar8 = -0x3133371a;
        }
        else {
          iVar8 = -0x3fd3d55c;
          if (local_194 != -0x32319885) {
            if (local_194 != -0x3133371a) goto LAB_003612f0;
            DAT_004c0423 = local_b3;
            iVar8 = -0x6b8ddd7d;
          }
        }
      }
      else if (local_194 < -0x24510b3b) {
        if (local_194 == -0x2dbe6881) {
          uVar6 = ((DAT_004c11e8 ^ DAT_004c11ec) & 0xf5ed2105 ^ 0xeecdd9cf) * -0xf60c193;
          _objc_release(local_160);
          _objc_release(local_158);
          _objc_release(local_150);
          _objc_release(local_148);
          _objc_msgSend(local_c8,PTR_s_frame_00489610);
          dVar9 = (double)_CGRectGetMaxX(local_190,uStack_188,local_170,uStack_168);
          _objc_msgSend(param_5,local_f0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)FUN_00363b7c();
          _objc_release(uVar4);
          _objc_msgSend((dVar9 - dVar10) - param_3,local_c8,PTR_s_setFrame__004894f8);
          bVar2 = 0x543f9e3b < uVar6;
          bVar3 = uVar6 == 0x543f9e3c;
          iVar7 = 0x9234b32;
          iVar8 = 0x18c39d74;
LAB_00363968:
          if (!bVar2 || bVar3) {
            iVar8 = iVar7;
          }
        }
        else if (local_194 == -0x28c84567) {
          iVar8 = 0x403dbde1;
        }
        else {
          if (local_194 != -0x28279c19) goto LAB_003612f0;
          iVar8 = 0xfa18464;
        }
      }
      else if (local_194 < -0x22c83a23) {
        if (local_194 == -0x24510b3b) {
          iVar8 = -0x7c0e7d6b;
        }
        else {
          if (local_194 != -0x2385ecc0) goto LAB_003612f0;
          _objc_release(local_118);
          _objc_release(local_108);
          iVar8 = -0x5ea10a56;
        }
      }
      else {
        if (local_194 != -0x22c83a23) {
          iVar8 = -0xf4d4712;
          iVar7 = -0x1fe9ccc3;
          goto LAB_00362680;
        }
        uVar6 = 0;
        if (DAT_004c1154 != 0) {
          uVar6 = DAT_004c1150 / DAT_004c1154;
        }
        if (0xae66f2c5 < ((uVar6 ^ 0x87f02c08) & 0xb7f27d2c ^ 0x903cbe86)) {
          iVar8 = 0x4cc8e7d2;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0x101feedd) {
      if (local_194 < -0x16b7a396) {
        if (local_194 == -0x1f1f23d2) {
          _objc_release(local_108);
          iVar8 = -0x3a8a5e54;
        }
        else {
          if (local_194 != -0x1b793f04) {
            if (local_194 == -0x16ce5313) {
              uVar6 = ((DAT_004c1100 - DAT_004c1104) * -0x22b87548 ^ 0xc810e80dU) / 0x55322cb;
              bVar2 = 0xdccafa54 < uVar6;
              bVar3 = uVar6 == 0xdccafa55;
              iVar7 = -0x429a1b8f;
              iVar8 = 0x16f07497;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          uVar6 = DAT_004c10e8 - DAT_004c10ec;
          local_d1 = _objc_msgSend(local_c0,local_d0);
          iVar8 = 0x7d18e309;
          if ((int)((long)((ulong)((uVar6 ^ 0x7ada9498) * 0x595bc8a7) * 0xc9c432a3) >> 0x3f) ==
              0x52f8ecda) {
            iVar8 = -0x1b793f04;
          }
        }
      }
      else if (local_194 < -0x117fe89c) {
        if (local_194 == -0x16b7a396) {
          _objc_release(local_f8);
LAB_00362e4c:
          iVar8 = -0x757d0bc6;
        }
        else {
          if (local_194 != -0x149eb1bd) goto LAB_003612f0;
          iVar8 = -0x22c83a23;
        }
      }
      else if (local_194 == -0x117fe89c) {
        iVar8 = -0x10016a3f;
        if ((DAT_004c10d0 ^ DAT_004c10d4) != 0xd9abd032) {
          iVar8 = 0x24e4ddf7;
        }
      }
      else {
        if (local_194 != -0x11302cb9) goto LAB_003612f0;
        iVar8 = 0x2cf66f6b;
      }
      goto LAB_00363b30;
    }
    if (-0xc08745b < local_194) {
      if (local_194 < -0x98a80bd) {
        if (local_194 != -0xc08745a) {
          if (local_194 == -0xb6e06c6) {
            uVar6 = (DAT_004c1090 + DAT_004c1094) * -0x34da7caf + 0x8d442331U ^ 0x475b6c91;
            bVar2 = 0xd5ad1c43 < uVar6;
            bVar3 = uVar6 == 0xd5ad1c44;
            iVar7 = -0x569df01b;
            iVar8 = -0x67120b44;
            goto LAB_00363968;
          }
          goto LAB_003612f0;
        }
        iVar8 = -0x3fd3d55c;
      }
      else if (local_194 == -0x98a80bd) {
        local_138 = PTR_s_isHidden_0048ba60;
        iVar8 = 0x59c81bdb;
        if (((uint)((ulong)((DAT_004c1198 & DAT_004c119c) + 0xf182c075 >> 1) * 0x442aa3c1 >> 0x3d) |
            0x426f2160) == 0x644a938f) {
          iVar8 = -0x98a80bd;
        }
      }
      else {
        if (local_194 != -0x7337704) goto LAB_003612f0;
        iVar8 = 0x2609c6ff;
        if (((DAT_004c1190 ^ DAT_004c1194) + 0xe18757eb | 0x729ac377) != 0x6a8637a4) {
          iVar8 = -0x98a80bd;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < -0xf4d4712) {
      if (local_194 == -0x101feedd) {
        iVar8 = -0x531cbd43;
      }
      else {
        if (local_194 != -0x10016a3f) goto LAB_003612f0;
        DAT_004d1c20 = 1;
        uVar4 = _objc_retain(param_5);
        _objc_getAssociatedObject(uVar4,&DAT_004d1bb0);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_5,PTR_s_b_MsgTimeView_0048b4b8);
        _objc_retainAutoreleasedReturnValue();
        iVar8 = 0x24e4ddf7;
      }
      goto LAB_00363b30;
    }
    if (local_194 == -0xf4d4712) {
      uVar6 = (DAT_004c10f8 & DAT_004c10fc) * -0x144c9ff + 0x739e1dd5;
      local_e0 = PTR_s_timeSameRow_0048bb28;
      bVar2 = 0xc855aaed < uVar6;
      bVar3 = uVar6 == 0xc855aaee;
      iVar8 = -0x1fe9ccc3;
      iVar7 = 0x7e635d5f;
      goto LAB_00363694;
    }
    if (local_194 != -0xd18e8bc) goto LAB_003612f0;
    uVar6 = (DAT_004c11d0 ^ DAT_004c11d4) + 0xcb0521ce & 0xd23e6f8a | 0x12144102;
    bVar2 = 0x1bdcd2be < uVar6;
    bVar3 = uVar6 == 0x1bdcd2bf;
    iVar8 = -0x65ec21bf;
    iVar7 = 0x7bf9ac91;
  }
  else {
    if (0x403dbde0 < local_194) {
      if (local_194 < 0x6a8effdb) {
        if (local_194 < 0x53a84b88) {
          if (local_194 < 0x4b0416dc) {
            if (local_194 == 0x403dbde1) {
              uVar6 = (DAT_004c11e0 | DAT_004c11e4) * 0x4f1c755a + 0x1541d006;
              bVar2 = 0xa26db8f < uVar6;
              bVar3 = uVar6 == 0xa26db90;
              iVar8 = -0x2dbe6881;
              iVar7 = 0x9234b32;
              goto LAB_00363694;
            }
            if (local_194 != 0x4767b73c) {
              if (local_194 == 0x4925e9a4) {
                bVar3 = (DAT_004c11f0 & DAT_004c11f4 & 0x8d6dec1f) == 0xbcdd56d4;
                iVar8 = 0x74649707;
                iVar7 = 0x1a9c9e64;
                goto LAB_00363804;
              }
              goto LAB_003612f0;
            }
            _objc_release(local_c8);
            _objc_release(local_c0);
            iVar8 = 0x7380b615;
          }
          else if (local_194 < 0x4fa91110) {
            if (local_194 != 0x4b0416dc) {
              iVar8 = 0x3353e76c;
              iVar7 = 0x4cc8e7d2;
              goto LAB_00362680;
            }
            iVar8 = -0xd18e8bc;
          }
          else {
            if (local_194 != 0x4fa91110) {
              if (local_194 == 0x4fffdb5e) {
                iVar8 = 0x218e1e0d;
                goto LAB_00363b30;
              }
              goto LAB_003612f0;
            }
            iVar8 = 0x71437257;
          }
        }
        else if (local_194 < 0x5946344a) {
          if (local_194 == 0x53a84b88) {
            uVar6 = DAT_004c11c8 & DAT_004c11cc;
            _objc_msgSend(local_c0,PTR_s_background_0048bb38);
            local_148 = _objc_retainAutoreleasedReturnValue();
            bVar3 = (uVar6 + 0xf53d6806 & 0x8f9ad8f3) == 0x2391f049;
            iVar7 = 0x53a84b88;
            iVar8 = 0x4b0416dc;
            goto LAB_003637e4;
          }
          if (local_194 != 0x53c45003) {
            if (local_194 == 0x54392e7b) {
              bVar3 = (DAT_004c11b8 - DAT_004c11bc) * -0x7fa9252d == -0x4e35096d;
              iVar8 = 0x9600ccf;
              iVar7 = -0x35b0c23b;
              goto LAB_00361fc0;
            }
            goto LAB_003612f0;
          }
          iVar8 = 0x2572a14d;
        }
        else if (local_194 < 0x633a2374) {
          if (local_194 == 0x5946344a) {
            local_d0 = PTR_s_merged_0048bb20;
            iVar8 = -0x48cf2315;
          }
          else {
            if (local_194 != 0x59c81bdb) goto LAB_003612f0;
            iVar8 = 0x6f2e235;
          }
        }
        else if (local_194 == 0x633a2374) {
          iVar8 = -0x41c9b8f2;
          if ((uint)((ulong)((DAT_004c1210 - DAT_004c1214 ^ 0xf12f0238U) + 0xbb60dc71) * 0x4e3fe039
                    >> 0x3e) < 0x111c67b3) {
            iVar8 = -0x46d2e4;
          }
        }
        else {
          if (local_194 != 0x641320c9) goto LAB_003612f0;
          iVar8 = -0x44eef52d;
          if (0x3f20e184 < ((DAT_004c10a0 | DAT_004c10a4 | 0x48b28bc) ^ 0x647725f5) + 0x3c483168) {
            iVar8 = -0x3b5b536b;
          }
        }
      }
      else if (local_194 < 0x7b15bd23) {
        if (local_194 < 0x7380b615) {
          if (0x6d8a4c1a < local_194) {
            if (local_194 == 0x6d8a4c1b) {
              bVar3 = 0x2e7e2821 <
                      (uint)((ulong)uVar1 * 0xbecb59c5 >> 0x3e) * -0x56ad9871 + 0x9c55aa7d;
              iVar7 = -0x531cbd43;
              iVar8 = -0x101feedd;
              goto LAB_00363524;
            }
            if (local_194 == 0x71437257) {
              return;
            }
            goto LAB_003612f0;
          }
          if (local_194 == 0x6a8effdb) {
            _objc_msgSend(local_c0,local_d0);
            iVar8 = -0x1b793f04;
            goto LAB_00363b30;
          }
          if (local_194 != 0x6b59ceab) goto LAB_003612f0;
          _objc_msgSend(local_c0,PTR_s_refer_0048bb30);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,PTR_s_superview_0048a800);
          _objc_retainAutoreleasedReturnValue();
          iVar8 = -0x7f6a166a;
        }
        else {
          if (0x758f1608 < local_194) {
            if (local_194 == 0x758f1609) {
              bVar3 = local_e1 == '\0';
              iVar7 = 0x213e21d8;
              iVar8 = -0x767a2ac7;
              goto LAB_003637e4;
            }
            if (local_194 == 0x761a6687) {
              uVar6 = (DAT_004c1110 + DAT_004c1114 ^ 0xc1c1c1c1U) & 0x46334b2 ^ 0xf9445eae;
              bVar2 = 0xa6c60cc0 < uVar6;
              bVar3 = uVar6 == 0xa6c60cc1;
              iVar7 = -0x386e380;
              iVar8 = 0x7ecb60a1;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
          if (local_194 == 0x7380b615) {
            uVar6 = 0;
            if (DAT_004c120c != 0) {
              uVar6 = DAT_004c1208 / DAT_004c120c;
            }
            _objc_release(local_c8);
            _objc_release(local_c0);
            bVar3 = 0xff31a061 < (uVar6 * 0x5408d21e + 0x47dc2812 | 0xf994d185);
            iVar7 = 0x4767b73c;
            iVar8 = 0x8e07a1c;
LAB_00363524:
            if (bVar3) {
              iVar8 = iVar7;
            }
            goto LAB_00363b30;
          }
          if (local_194 != 0x74649707) goto LAB_003612f0;
          uVar6 = 0;
          if (DAT_004c11fc != 0) {
            uVar6 = DAT_004c11f8 / DAT_004c11fc;
          }
          bVar3 = (uVar6 & 0xbaee9dbf | 0x1aae14bb) == 0xaaf09f6;
          iVar8 = 0x1a9c9e64;
          iVar7 = -0x551ca95d;
LAB_00361fc0:
          if (!bVar3) {
            iVar8 = iVar7;
          }
        }
      }
      else if (local_194 < 0x7bf9ac91) {
        if (local_194 == 0x7b15bd23) {
          iVar8 = 0x2d65fd32;
        }
        else if (local_194 == 0x7b18b590) {
          iVar8 = 0x5946344a;
        }
        else {
          if (local_194 != 0x7bd522cb) goto LAB_003612f0;
          local_129 = local_128 == 0;
          iVar8 = -0xc08745a;
        }
      }
      else {
        if (0x7e635d5e < local_194) {
          if (local_194 == 0x7e635d5f) {
            iVar8 = -0x16ce5313;
            goto LAB_00363b30;
          }
          if (local_194 == 0x7ecb60a1) {
            uVar6 = ((DAT_004c1118 & DAT_004c111c) + 0xc90dfe41) / 0x2bc2ec2a | 0x9cce9529;
            bVar2 = 0xea270b91 < uVar6;
            bVar3 = uVar6 == 0xea270b92;
            iVar8 = -0x386e380;
            iVar7 = 0x758f1609;
            goto LAB_00363694;
          }
          goto LAB_003612f0;
        }
        if (local_194 != 0x7bf9ac91) {
          if (local_194 == 0x7d18e309) {
            bVar3 = local_d1 == '\0';
            iVar7 = 0x213e21d8;
            iVar8 = -0x7b9f817f;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        uVar6 = DAT_004c11d8 - DAT_004c11dc;
        _objc_msgSend(local_148,local_110);
        local_150 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_5,PTR_s_valueForKey__0048b4d8,
                      &PTR____CFConstantStringClassReference_004c0430);
        local_158 = _objc_retainAutoreleasedReturnValue();
        uVar4 = _objc_msgSend(local_158,PTR_s_CGRectValue_00489d08);
        _objc_msgSend(local_c8,local_110);
        local_160 = _objc_retainAutoreleasedReturnValue();
        local_190 = _objc_msgSend(uVar4,local_150,PTR_s_convertRect_toView__00489d30,local_160);
        iVar8 = -0x65ec21bf;
        uStack_188 = param_2;
        local_170 = param_3;
        uStack_168 = param_4;
        if (((uVar6 & 0xe20c5609) + 0xe16c1a31 ^ 0xe75e71fc) < 0xb069398a) {
          iVar8 = -0x28c84567;
        }
      }
      goto LAB_00363b30;
    }
    if (local_194 < 0x1a9c9e64) {
      if (local_194 < 0x9234b32) {
        if (local_194 < -0x46d2e4) {
          if (local_194 == -0x4a326c2) {
            iVar8 = 0x761a6687;
          }
          else {
            iVar8 = 0x7ecb60a1;
            if (local_194 != -0x386e380) {
              if (local_194 != -0x24f8b31) goto LAB_003612f0;
              _objc_msgSend(local_c0,PTR_s_background_0048bb38);
              _objc_retainAutoreleasedReturnValue();
              iVar8 = 0x53a84b88;
            }
          }
        }
        else if (local_194 < 0x7fa6c5b) {
          if (local_194 != -0x46d2e4) {
            if (local_194 == 0x6f2e235) {
              bVar3 = (uint)((ulong)(DAT_004c11a0 - DAT_004c11a4 | 0xfe5f5719) * 0xdd81b65 >> 0x3b)
                      == 0x11ae83b3;
              iVar7 = 0x374d65b0;
              iVar8 = 0x113ecdbf;
              goto LAB_00363464;
            }
            goto LAB_003612f0;
          }
          uVar6 = DAT_004c1218 & DAT_004c121c;
          _objc_release(param_5);
          iVar8 = 0x4fa91110;
          if (0xcc33367c < (uVar6 | 0x5efb77db) + 0x731ea64f) {
            iVar8 = -0x46d2e4;
          }
        }
        else if (local_194 == 0x7fa6c5b) {
          bVar3 = (uint)((ulong)(uint)(DAT_004c10c0 + DAT_004c10c4) * 0x5d80a45b >> 0x3d) *
                  -0x6afdaf7a == 0x17ceba86;
          iVar8 = -0x3133371a;
          iVar7 = -0x3393783f;
LAB_00363804:
          if (bVar3) {
            iVar8 = iVar7;
          }
        }
        else {
          if (local_194 != 0x8e07a1c) goto LAB_003612f0;
          iVar8 = 0x633a2374;
        }
      }
      else if (local_194 < 0x113ecdbf) {
        if (local_194 == 0x9234b32) {
          _objc_release(local_160);
          _objc_release(local_158);
          _objc_release(local_150);
          _objc_release(local_148);
          _objc_msgSend(local_c8,PTR_s_frame_00489610);
          dVar9 = (double)_CGRectGetMaxX(local_190,uStack_188,local_170,uStack_168);
          _objc_msgSend(param_5,local_f0);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          dVar10 = (double)FUN_00363b7c();
          _objc_release(uVar4);
          _objc_msgSend((dVar9 - dVar10) - param_3,local_c8,PTR_s_setFrame__004894f8);
          iVar8 = -0x2dbe6881;
        }
        else {
          iVar8 = 0x54392e7b;
          if (local_194 != 0x9600ccf) {
            if (local_194 == 0xfa18464) {
              uVar6 = -(int)((long)((ulong)(((DAT_004c11b0 ^ DAT_004c11b4) & 0xdeaa04cf) +
                                           0x1cb6d295) * 0xae489187) >> 0x3f);
              bVar2 = 0x47b07e16 < uVar6;
              bVar3 = uVar6 == 0x47b07e17;
              iVar7 = 0x54392e7b;
              iVar8 = 0x9600ccf;
              goto LAB_00363968;
            }
            goto LAB_003612f0;
          }
        }
      }
      else if (local_194 < 0x16f07497) {
        if (local_194 != 0x113ecdbf) {
          if (local_194 == 0x11898f4d) {
            uVar6 = DAT_004c1128 | DAT_004c112c;
            local_f9 = _BBReferUsesMergedTime(local_f8);
            bVar3 = (uVar6 & 0x5009086) == 0xbdc2ee8;
            iVar7 = 0x1f75da1f;
            iVar8 = -0x7cf8a5bd;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        _objc_msgSend(local_c8,local_138);
        _objc_release(local_128);
        _objc_release(local_118);
        _objc_release(local_108);
        _objc_release(local_f8);
        iVar8 = 0x374d65b0;
      }
      else {
        if (local_194 != 0x16f07497) {
          iVar8 = 0x213e21d8;
          iVar7 = 0x18c39d74;
          goto LAB_00362680;
        }
        _objc_msgSend(local_c0,local_e0);
        iVar8 = -0x429a1b8f;
      }
      goto LAB_00363b30;
    }
    if (local_194 < 0x2609c6ff) {
      if (local_194 < 0x213e21d8) {
        iVar8 = 0x74649707;
        if (local_194 != 0x1a9c9e64) {
          if (local_194 != 0x1f75da1f) {
            if (local_194 == 0x1fa4a946) {
              bVar3 = (DAT_004c10b0 + DAT_004c10b4 + 0x1dff076dU & 0x20581140) == 0x23d59d4c;
              iVar7 = -0x3432ce75;
              iVar8 = -0x785089a0;
              goto LAB_00363464;
            }
            goto LAB_003612f0;
          }
          _BBReferUsesMergedTime(local_f8);
          iVar8 = 0x11898f4d;
        }
      }
      else {
        if (local_194 < 0x24e4ddf7) {
          if (local_194 == 0x213e21d8) {
            bVar3 = 0xc7ed4587 <
                    (uint)((ulong)((DAT_004c1200 & DAT_004c1204 | 0x49edade) ^ 0xe65aeae1) *
                           0xb0bfdc7b >> 0x3f);
            iVar8 = 0x7380b615;
            iVar7 = 0x4767b73c;
            goto LAB_00362f28;
          }
          if (local_194 == 0x218e1e0d) {
            bVar3 = local_119 == '\0';
            iVar7 = -0x4366fa74;
            iVar8 = -0x32334175;
            goto LAB_003637e4;
          }
          goto LAB_003612f0;
        }
        if (local_194 == 0x24e4ddf7) {
          uVar6 = DAT_004c10d8 | DAT_004c10dc;
          DAT_004d1c20 = 1;
          uVar4 = _objc_retain(param_5);
          _objc_getAssociatedObject(uVar4,&DAT_004d1bb0);
          local_c0 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_5,PTR_s_b_MsgTimeView_0048b4b8);
          local_c8 = _objc_retainAutoreleasedReturnValue();
          iVar8 = 0x24e4ddf7;
          if ((uVar6 ^ 0xe8980ad3) + 0x16aafc21 < 0xdf98b632) {
            iVar8 = 0x7b18b590;
          }
        }
        else {
          iVar8 = 0x213e21d8;
          iVar7 = 0x2572a14d;
LAB_00362680:
          if (local_194 != iVar7) goto LAB_003612f0;
        }
      }
      goto LAB_00363b30;
    }
    if (0x3353e76b < local_194) {
      if (local_194 < 0x3a3cf7e4) {
        if (local_194 != 0x3353e76c) {
          if (local_194 == 0x374d65b0) {
            uVar6 = 0;
            if (DAT_004c11ac != 0) {
              uVar6 = DAT_004c11a8 / DAT_004c11ac;
            }
            uVar6 = ((uVar6 ^ 0xffe3436) / 0x314013a) * -0x51bc6e69;
            local_139 = _objc_msgSend(local_c8,local_138);
            _objc_release(local_128);
            _objc_release(local_118);
            _objc_release(local_108);
            _objc_release(local_f8);
            bVar2 = 0xb33b3575 < uVar6;
            bVar3 = uVar6 == 0xb33b3576;
            iVar8 = 0x113ecdbf;
            iVar7 = -0x28279c19;
            goto LAB_00363694;
          }
          goto LAB_003612f0;
        }
        uVar6 = 0;
        if (DAT_004c115c != 0) {
          uVar6 = DAT_004c1158 / DAT_004c115c;
        }
        local_119 = local_118 == 0;
        if ((uVar6 & 0x90314509 | 0x10214509) < 0xa2867376) {
          iVar8 = 0x4fffdb5e;
        }
      }
      else {
        if (local_194 != 0x3a3cf7e4) {
          if (local_194 == 0x3a61c12b) goto LAB_00362e4c;
          goto LAB_003612f0;
        }
        bVar3 = (DAT_004c1140 + DAT_004c1144 + 0x697e6b84U) / 0xcbea73a == 0x702064ad;
        iVar7 = -0x7f6a166a;
        iVar8 = 0x6b59ceab;
LAB_00363464:
        if (!bVar3) {
          iVar8 = iVar7;
        }
      }
      goto LAB_00363b30;
    }
    if (0x2cf66f6a < local_194) {
      if (local_194 != 0x2cf66f6b) {
        if (local_194 == 0x2d65fd32) {
          uVar6 = (DAT_004c1120 + DAT_004c1124 + 0xc663b533U | 0x1375d85) * 0x42af07ea;
          bVar2 = 0x7c18a997 < uVar6;
          bVar3 = uVar6 == 0x7c18a998;
          iVar8 = 0x1f75da1f;
          iVar7 = 0x11898f4d;
          goto LAB_00363694;
        }
        goto LAB_003612f0;
      }
      local_b1 = local_b0 == 0;
      iVar8 = -0xb6e06c6;
      goto LAB_00363b30;
    }
    iVar8 = -0x98a80bd;
    if (local_194 == 0x2609c6ff) goto LAB_00363b30;
    if (local_194 != 0x2ad160cc) goto LAB_003612f0;
    uVar6 = DAT_004c11c0 * DAT_004c11c4 + 0xb7e313e0U ^ 0xc2dacd3a;
    bVar2 = 0x6d7ed81 < uVar6;
    bVar3 = uVar6 == 0x6d7ed82;
    iVar8 = 0x53a84b88;
    iVar7 = -0x24f8b31;
  }
LAB_00363694:
  if (!bVar2 || bVar3) {
    iVar8 = iVar7;
  }
LAB_00363b30:
  local_194 = iVar8;
  goto LAB_003612f0;
}



// #####################################
// ##### _BBReferPrepareCellLayout @ 00363dc4
// #####################################

void _BBReferPrepareCellLayout(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  int local_1ec;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1c0;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined1 local_189;
  undefined *local_188;
  undefined *local_180;
  char local_159;
  long local_158;
  long local_150;
  char local_141;
  long local_140;
  undefined *local_138;
  char local_129;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined *local_f0;
  char local_e1;
  long local_e0;
  byte local_d7;
  byte local_d6;
  char local_d5;
  undefined8 local_d0;
  undefined8 local_b0;
  
  iVar2 = DAT_004d1c28;
  lVar8 = *(long *)PTR____stack_chk_guard_00481638;
  local_1ec = -0x7e22be96;
LAB_00363e94:
  puVar1 = PTR_s_content_0048bb78;
  if (local_1ec < 0xd61c412) {
    if (local_1ec < -0x452b4100) {
      if (local_1ec < -0x66a05518) {
        if (local_1ec < -0x7556c805) {
          if (local_1ec < -0x7bf204e0) {
            if (local_1ec == -0x7eaa5b85) {
              local_138 = PTR_s_background_0048bb38;
              bVar4 = 0x642073d9 < ((DAT_004c12d8 | DAT_004c12dc) + 0x16e4daae ^ 0x3cad249f);
              iVar10 = -0x7eaa5b85;
              iVar9 = 0x2d34c2eb;
              goto LAB_00366628;
            }
            if (local_1ec != -0x7e303adf) {
              if (local_1ec == -0x7e22be96) {
                uVar7 = (DAT_004c1230 & DAT_004c1234 ^ 0xfc03fc03) & 0xb46f4f5d | 0xb04a451d;
                bVar3 = 0xa963dbf < uVar7;
                bVar4 = uVar7 == 0xa963dc0;
                iVar10 = -0x1184349c;
                iVar9 = 0x50bdb67a;
                goto LAB_00366274;
              }
              goto LAB_00363e94;
            }
            bVar4 = local_e1 == '\0';
            iVar10 = 0x4035536e;
            iVar9 = -0x2341eeab;
LAB_00366008:
            if (bVar4) {
              iVar10 = iVar9;
            }
          }
          else {
            iVar10 = -0x7eaa5b85;
            if ((local_1ec != -0x7bf204e0) && (iVar10 = -0x3f31dc85, local_1ec != -0x77c9b094)) {
              if (local_1ec != -0x77649130) goto LAB_00363e94;
              _objc_msgSend(local_110,PTR_s_setBackgroundColor__004895b0,local_100);
              _objc_release(local_110);
              _objc_release(local_108);
              _objc_release(local_100);
              _objc_msgSend(local_e0,PTR_s_referColor_00489ea0);
              _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_e0,local_f0);
              _objc_retainAutoreleasedReturnValue();
LAB_00364af0:
              iVar10 = -0x5c411022;
            }
          }
        }
        else if (local_1ec < -0x6fe6a87d) {
          if (local_1ec == -0x7556c805) {
            bVar4 = local_d5 == '\0';
            iVar9 = -0x1ee04bf5;
            iVar10 = -0x4d3a1d98;
            goto LAB_00365fc4;
          }
          if (local_1ec == -0x73fd685e) {
            _objc_msgSend(local_e0,local_1e0,0);
            _objc_msgSend(local_e0,PTR_s_setRefer__0048bbb8,0);
            local_1e8 = PTR_s_setContent__0048bbc0;
            iVar10 = 0x37921dc3;
          }
          else {
            if (local_1ec != -0x732f3520) goto LAB_00363e94;
            local_159 = local_150 == local_158;
            _objc_release();
            _objc_release(local_150);
            iVar10 = 0x297d7996;
          }
        }
        else {
          if (-0x6ed4fff3 < local_1ec) {
            if (local_1ec == -0x6ed4fff2) {
              DAT_004c0460 = local_d6 ^ 8;
              DAT_004c0461 = DAT_004c0452 ^ 99;
              DAT_004c0462 = DAT_004c0453 ^ 0xcc;
              DAT_004c0463 = DAT_004c0454 ^ 0xd;
              DAT_004c0464 = DAT_004c0455 ^ 0x8c;
              DAT_004c0465 = DAT_004c0456 ^ 0x8e;
              DAT_004c0466 = DAT_004c0457 ^ 0x96;
              local_d7 = DAT_004c0458;
              iVar10 = 0x3143ca13;
              goto LAB_00366674;
            }
            if (local_1ec == -0x6e6c0be0) {
              bVar4 = local_141 == '\0';
              iVar10 = -0x23a5c741;
              iVar9 = -0x30d2b39;
              goto LAB_00366008;
            }
            goto LAB_00363e94;
          }
          if (local_1ec == -0x6fe6a87d) {
            uVar7 = DAT_004c1378 ^ DAT_004c137c;
            _objc_msgSend(local_e0,local_188);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uStack_1c0,uVar5,PTR_s_setBounds__0048bba0);
            _objc_release(uVar5);
            _objc_msgSend(local_e0,local_188);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,local_198,local_189);
            _objc_release(uVar5);
            uVar5 = _objc_msgSend(local_e0,PTR_s_contentClipping_0048bba8);
            _objc_msgSend(local_e0,local_188);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar6,PTR_s_setClipsToBounds__004895c8,uVar5);
            _objc_release(uVar6);
            bVar4 = uVar7 == 0x5ac9c560;
            iVar10 = 0x20e058c4;
            iVar9 = 0x53c6520e;
          }
          else {
            if (local_1ec != -0x6f853d4a) goto LAB_00363e94;
            bVar4 = (DAT_004c1280 & DAT_004c1284) == 0x672755a5;
            iVar10 = 0x70d8dbb3;
            iVar9 = 0x3f36e8bb;
          }
LAB_003659d0:
          if (!bVar4) {
            iVar10 = iVar9;
          }
        }
      }
      else if (local_1ec < -0x57e40b3a) {
        if (local_1ec < -0x5d5d128c) {
          if (local_1ec == -0x66a05518) {
            iVar10 = -0x452b4100;
          }
          else if (local_1ec == -0x65ed9eb5) {
            iVar10 = -0x85dc3f8;
          }
          else {
            if (local_1ec != -0x650a4ccf) goto LAB_00363e94;
            iVar10 = -0x77c9b094;
            if (DAT_004c1240 * DAT_004c1244 != -0x416080d5) {
              iVar10 = -0x3f31dc85;
            }
          }
        }
        else if (local_1ec == -0x5d5d128c) {
          iVar10 = -0x3f5d9aff;
        }
        else if (local_1ec == -0x5c411022) {
          uVar7 = DAT_004c12b8 - DAT_004c12bc;
          local_118 = PTR_s_setBackgroundColor__004895b0;
          _objc_msgSend(local_110,PTR_s_setBackgroundColor__004895b0,local_100);
          _objc_release(local_110);
          _objc_release(local_108);
          _objc_release(local_100);
          _objc_msgSend(local_e0,PTR_s_referColor_00489ea0);
          local_120 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_e0,local_f0);
          local_128 = _objc_retainAutoreleasedReturnValue();
          iVar10 = -0x5c411022;
          if ((uint)((ulong)((uVar7 ^ 0xcfb100ac) + 0x9e94528d) * 0xde5a367 >> 0x3a) < 0xdfcf0fa9) {
            iVar10 = -0x65ed9eb5;
          }
        }
        else {
          if (local_1ec != -0x5a7558e9) goto LAB_00363e94;
          iVar10 = 0x57bd9beb;
          if ((((DAT_004c12e0 | DAT_004c12e4) ^ 0x21f0b96d) * -0x436794ef & 0xb89342d0) !=
              0xb33f7be0) {
            iVar10 = 0x1862a0c1;
          }
        }
      }
      else if (local_1ec < -0x50236516) {
        if (local_1ec == -0x57e40b3a) {
          iVar10 = 0x1e9dfb6c;
        }
        else {
          iVar10 = 0x4035536e;
          if (local_1ec != -0x52c52539) {
            if (local_1ec == -0x520d7784) goto LAB_00364af0;
            goto LAB_00363e94;
          }
        }
      }
      else {
        if (-0x4d3a1d99 < local_1ec) {
          if (local_1ec == -0x4d3a1d98) {
            uVar7 = (DAT_004c1250 - DAT_004c1254) + 0xc40e058fU & 0x7bbab3e8;
            bVar3 = 0x4812bb90 < uVar7;
            bVar4 = uVar7 == 0x4812bb91;
            iVar9 = 0x61f7c21e;
            iVar10 = -0x11a71668;
            goto LAB_00366588;
          }
          if (local_1ec == -0x4ad2aa38) {
            bVar4 = (DAT_004c1380 - DAT_004c1384) * -0x1bc8c2a1 == -0x73d44782;
            iVar10 = -0x27057320;
            iVar9 = 0x7070e845;
            goto LAB_003659d0;
          }
          goto LAB_00363e94;
        }
        if (local_1ec == -0x50236516) {
          uVar7 = DAT_004c1398 * DAT_004c139c;
          _objc_msgSend(local_e0,local_1e8,0);
          _objc_msgSend(local_e0,PTR_s_setBackground__0048bbc8,0);
          bVar4 = (uVar7 ^ 0xda5b01a2) / 0x35cbdc52 == 0xa499f5b;
          iVar9 = 0x7be410ff;
          iVar10 = -0x52c52539;
          goto LAB_00365fc4;
        }
        if (local_1ec != -0x4e5510d3) goto LAB_00363e94;
        iVar10 = -0x286ff1c4;
      }
    }
    else if (local_1ec < -0x233af777) {
      if (local_1ec < -0x37c05fa3) {
        if (local_1ec < -0x3f5d9aff) {
          if (local_1ec == -0x452b4100) {
            bVar4 = ((DAT_004c1370 | DAT_004c1374) & 0x9462ae80) == 0x38a83b51;
            iVar10 = -0x6fe6a87d;
            iVar9 = 0x20e058c4;
            goto LAB_00366008;
          }
          if (local_1ec == -0x44956ee0) {
            _objc_release(local_e0);
            goto LAB_00366128;
          }
          if (local_1ec != -0x3f5fdfd9) goto LAB_00363e94;
          _objc_msgSend(local_e0,local_138);
          _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_1,PTR_s_getBgImageView_0048bb60);
          _objc_retainAutoreleasedReturnValue();
          iVar10 = 0x15f662d7;
        }
        else if (local_1ec == -0x3f5d9aff) {
          uVar7 = (DAT_004c1310 | DAT_004c1314) ^ 0xc310c000 | 0x38ef2db7;
          bVar3 = 0x7e4e6238 < uVar7;
          bVar4 = uVar7 == 0x7e4e6239;
          iVar9 = -0x732f3520;
          iVar10 = 0x23d04b18;
LAB_00366588:
          if (!bVar3 || bVar4) {
            iVar10 = iVar9;
          }
        }
        else if (local_1ec == -0x3f31dc85) {
          iVar10 = -0x3f31dc85;
          if (0x901cb01a < (DAT_004c1248 - DAT_004c124c) * -0x39acd4fc - 0xaafe85U) {
            iVar10 = -0x7556c805;
          }
        }
        else {
          if (local_1ec != -0x3bfdde3f) goto LAB_00363e94;
          iVar10 = -0x11748e6;
          if (((uint)((ulong)(uint)(DAT_004c13b0 * DAT_004c13b4) * 0x8d62367d >> 0x3f) | 0xd4006500)
              < 0xc154bc97) {
            iVar10 = 0x26ddb971;
          }
        }
      }
      else if (local_1ec < -0x286ff1c4) {
        if (local_1ec == -0x37c05fa3) {
          iVar10 = 0x77f7d9f6;
        }
        else {
          if (local_1ec != -0x3470a6e9) {
            if (local_1ec == -0x2876ce59) {
              _objc_msgSend(local_d0,param_1,local_180);
              iVar10 = 0x149eb845;
              goto LAB_00366674;
            }
            goto LAB_00363e94;
          }
          _objc_msgSend(local_e0,PTR_s_guide_0048bb40);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,PTR_s_setHidden__0048a0d8,1);
          _objc_release(uVar5);
          _objc_msgSend(local_e0,PTR_s_image_0048bb48);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,PTR_s_removeFromSuperview_00489570);
          _objc_release(uVar5);
          uVar6 = _objc_msgSend(local_e0,PTR_s_referFrame_0048bb50);
          puVar1 = PTR_s_refer_0048bb30;
          _objc_msgSend(local_e0,PTR_s_refer_0048bb30);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,uVar5,PTR_s_setFrame__004894f8);
          _objc_release(uVar5);
          _objc_msgSend(local_e0,PTR_s_containerColor_0048bb58);
          _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_e0,puVar1);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          FUN_003666d4(uVar5,&DAT_004c045f);
          _objc_retainAutoreleasedReturnValue();
          iVar10 = 0x7c2a5ca1;
        }
      }
      else {
        if (-0x23a5c742 < local_1ec) {
          if (local_1ec == -0x23a5c741) {
            bVar4 = (DAT_004c1350 * DAT_004c1354 & 0x1d002a00U) * -0x72bfcaa4 == 0x2899d118;
            iVar9 = 0x79ffc995;
            iVar10 = 0x3762dbda;
            goto LAB_00365fc4;
          }
          if (local_1ec == -0x2341eeab) {
            bVar4 = 0x166c25be <
                    ((DAT_004c12a0 & DAT_004c12a4 | 0x26f44ed3) * -0x2c0674f2 | 0x29e6ee15);
            iVar9 = 0x7c2a5ca1;
            iVar10 = -0x3470a6e9;
            goto LAB_003663e4;
          }
          goto LAB_00363e94;
        }
        if (local_1ec != -0x286ff1c4) {
          iVar10 = 0x7070e845;
          iVar9 = -0x27057320;
          goto LAB_003646ec;
        }
        iVar10 = -0x233af777;
        if (((DAT_004c12f0 ^ DAT_004c12f4) & 0x267d1caa) * 0x3ad87784 + 0xb4f6b140 < 0x36e93453) {
          iVar10 = 0x5eb65983;
        }
      }
    }
    else {
      if (-0x1184349d < local_1ec) {
        if (local_1ec < -0x7818a49) {
          if (local_1ec == -0x1184349c) {
            local_d5 = iVar2 == 0;
            bVar4 = (((DAT_004c1238 | DAT_004c123c) * 0x191c37da) / 0x6bea4f6 | 0x305fb571) ==
                    0x564c453;
            iVar10 = 0x50bdb67a;
            iVar9 = 0xd61c412;
            goto LAB_003659d0;
          }
          if (local_1ec == -0x85dc3f8) {
            uVar7 = (uint)((ulong)(DAT_004c12c0 ^ DAT_004c12c4 ^ 0xe842875a) * 0x11367fff >> 0x39);
            bVar3 = 0x6689e561 < uVar7;
            bVar4 = uVar7 == 0x6689e562;
            iVar9 = 0x1d387282;
            iVar10 = 0x56afa566;
            goto LAB_00366588;
          }
          if (local_1ec == -0x7d4ad93) {
            uVar7 = 0;
            if (DAT_004c136c != 0) {
              uVar7 = DAT_004c1368 / DAT_004c136c;
            }
            _objc_msgSend(local_e0,local_188);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uStack_1a0,uVar5,local_f8);
            _objc_release(uVar5);
            uStack_1c0 = _objc_msgSend(local_e0,PTR_s_contentBounds_0048bb98);
            bVar4 = 0xd52a45d0 < ((uVar7 | 0x23405b38) * -0x580330c4 | 0x4f5f3b73);
            iVar10 = -0x7d4ad93;
            iVar9 = -0x66a05518;
            goto LAB_00366628;
          }
        }
        else if (local_1ec < -0x11748e6) {
          if (local_1ec == -0x7818a49) {
            uVar7 = DAT_004c13a8 ^ DAT_004c13ac;
            _objc_release(local_e0);
            iVar10 = -0x37c05fa3;
            if ((uVar7 ^ 0xd3164c95) * -0x6aae8dc3 + 0xba4c5214 < 0x53f8ae90) {
              iVar10 = -0x7818a49;
            }
            goto LAB_00366674;
          }
          if (local_1ec == -0x30d2b39) {
            uVar7 = (DAT_004c1300 & DAT_004c1304 | 0x1cf84d6a) + 0x16216aa0;
            bVar3 = 0x33741948 < uVar7;
            bVar4 = uVar7 == 0x33741949;
            iVar10 = 0x15f662d7;
            iVar9 = -0x3f5fdfd9;
            goto LAB_00366274;
          }
        }
        else {
          if (local_1ec == -0x11748e6) {
            iVar10 = 0x3d89505;
            if (0xe9ab73f1 < ((DAT_004c13b8 | DAT_004c13bc | 0x38b8c116) ^ 0x41510586) * 0x560f4366)
            {
              iVar10 = -0x11748e6;
            }
            goto LAB_00366674;
          }
          if (local_1ec == 0x3d89505) {
            if (*(long *)PTR____stack_chk_guard_00481638 != lVar8) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return;
          }
        }
        goto LAB_00363e94;
      }
      if (local_1ec < -0x19eaceed) {
        iVar10 = 0x5eb65983;
        if (local_1ec == -0x233af777) goto LAB_00366674;
        if (local_1ec != -0x22860703) {
          if (local_1ec == -0x1ee04bf5) {
            bVar4 = 0x5ed3bd44 < (DAT_004c1270 & DAT_004c1274 | 0x4c2a6636) + 0xa57e6631;
            iVar10 = 0x70e2dae8;
            iVar9 = 0x5162f27e;
            goto LAB_00366628;
          }
          goto LAB_00363e94;
        }
        uVar7 = 0;
        if (DAT_004c132c != 0) {
          uVar7 = DAT_004c1328 / DAT_004c132c;
        }
        local_b0 = _objc_msgSend(local_e0,PTR_s_borderFrame_0048bb68);
        local_180 = PTR_s_setFrameForBgImageView__0048bb70;
        iVar10 = -0x22860703;
        if (((uVar7 | 0x99412da) * -0x7482e9e4 & 0x4a2ddb74) != 0xbc1d4a80) {
          iVar10 = 0x797ef6f6;
        }
      }
      else {
        if (local_1ec == -0x19eaceed) {
          DAT_004c0467 = local_d7 ^ 0x1a;
          DAT_004c0468 = DAT_004c0459 ^ 0x7d;
          DAT_004c0469 = DAT_004c045a ^ 0x3e;
          DAT_004c046a = DAT_004c045b ^ 0xf8;
          DAT_004c046b = DAT_004c045c ^ 0x6c;
          DAT_004c046c = DAT_004c045d ^ 0xbe;
          DAT_004c046d = DAT_004c045e ^ 0xd0;
          goto LAB_00365a50;
        }
        if (local_1ec == -0x192487fe) {
          iVar10 = 0x145cef3b;
        }
        else {
          if (local_1ec != -0x11a71668) goto LAB_00363e94;
          DAT_004c045f = DAT_004c0450 ^ 0x60;
          iVar10 = 0x61f7c21e;
        }
      }
    }
  }
  else if (local_1ec < 0x4d6e143c) {
    if (local_1ec < 0x2d34c2eb) {
      if (local_1ec < 0x1d387282) {
        if (local_1ec < 0x15f662d7) {
          if (local_1ec != 0xd61c412) {
            if (local_1ec == 0x145cef3b) {
              bVar4 = 0xc8010bbd <
                      ((DAT_004c1340 - DAT_004c1344 ^ 0x7e007e0U) & 0x82d17836 | 0x82516006);
              iVar10 = 0x149eb845;
              iVar9 = -0x2876ce59;
              goto LAB_00366628;
            }
            if (local_1ec == 0x149eb845) {
              iVar9 = DAT_004c1348 - DAT_004c134c;
              _objc_msgSend(local_d0,param_1,local_180);
              bVar4 = (uint)((ulong)(iVar9 + 0x72dd5cfd) * 0x1d6697b3 >> 0x3b) == 0x15b49230;
              iVar9 = 0x149eb845;
              iVar10 = 0x30c02ac0;
              goto LAB_00365fc4;
            }
            goto LAB_00363e94;
          }
          iVar10 = -0x650a4ccf;
        }
        else if (local_1ec == 0x15f662d7) {
          uVar7 = DAT_004c1308 & DAT_004c130c;
          _objc_msgSend(local_e0,local_138);
          local_150 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_1,PTR_s_getBgImageView_0048bb60);
          local_158 = _objc_retainAutoreleasedReturnValue();
          iVar10 = 0x15f662d7;
          if (0xc4b1b0df < ((uint)((ulong)(uVar7 | 0xce7ea431) * 0x9c308fd7 >> 0x3f) | 0xe76120fe))
          {
            iVar10 = -0x5d5d128c;
          }
        }
        else if (local_1ec == 0x1862a0c1) {
          uVar7 = DAT_004c12e8 & DAT_004c12ec;
          _objc_msgSend(local_e0,local_138);
          local_140 = _objc_retainAutoreleasedReturnValue();
          iVar10 = 0x1862a0c1;
          if ((uVar7 & 0xecfedbec | 0xe8de0a80) != 0xc4c9849) {
            iVar10 = -0x4e5510d3;
          }
        }
        else {
          if (local_1ec != 0x1972177e) goto LAB_00363e94;
          iVar10 = 0x27201c97;
        }
      }
      else if (local_1ec < 0x23d04b18) {
        if (local_1ec == 0x1d387282) {
          uVar7 = DAT_004c12c8 * DAT_004c12cc;
          _objc_msgSend(local_128,local_118,local_120);
          _objc_release(local_128);
          _objc_release(local_120);
          local_129 = _objc_msgSend(local_e0,PTR_s_merged_0048bb20);
          bVar4 = 0x616bf372 < ((uVar7 | 0xa4d9b916) + 0x21bb82cf ^ 0xaded043e);
          iVar10 = 0x1d387282;
          iVar9 = 0x4ac32b23;
LAB_00366628:
          if (bVar4) {
            iVar10 = iVar9;
          }
        }
        else {
          if (local_1ec == 0x1e9dfb6c) {
            uVar7 = ((DAT_004c1290 & DAT_004c1294) + 0xfba21126) / 0xdab3083 + 0x60c78a0a;
            bVar3 = 0xc815c6fb < uVar7;
            bVar4 = uVar7 == 0xc815c6fc;
            iVar9 = 0x36f07ca6;
            iVar10 = 0x4e9b813e;
            goto LAB_00366588;
          }
          if (local_1ec != 0x20e058c4) goto LAB_00363e94;
          _objc_msgSend(local_e0,local_188);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uStack_1c0,uVar5,PTR_s_setBounds__0048bba0);
          _objc_release(uVar5);
          _objc_msgSend(local_e0,local_188);
          uVar5 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar5,local_198,local_189);
          _objc_release(uVar5);
          uVar5 = _objc_msgSend(local_e0,PTR_s_contentClipping_0048bba8);
          _objc_msgSend(local_e0,local_188);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar6,PTR_s_setClipsToBounds__004895c8,uVar5);
          _objc_release(uVar6);
          iVar10 = -0x6fe6a87d;
        }
      }
      else if (local_1ec < 0x27201c97) {
        if (local_1ec == 0x23d04b18) {
          _objc_release(local_158);
          _objc_release(local_150);
          iVar10 = -0x732f3520;
        }
        else {
          if (local_1ec != 0x26ddb971) goto LAB_00363e94;
          iVar10 = -0x11748e6;
        }
      }
      else if (local_1ec == 0x27201c97) {
        iVar10 = -0x7d4ad93;
      }
      else {
        if (local_1ec != 0x297d7996) goto LAB_00363e94;
        iVar10 = 0x73545edb;
      }
    }
    else if (local_1ec < 0x3762dbda) {
      if (local_1ec < 0x3143ca13) {
        if (local_1ec == 0x2d34c2eb) {
          iVar10 = -0x5a7558e9;
        }
        else if (local_1ec == 0x2e5f93f2) {
          iVar10 = -0x73fd685e;
        }
        else {
          iVar10 = -0x23a5c741;
          iVar9 = 0x30c02ac0;
LAB_003646ec:
          if (local_1ec != iVar9) goto LAB_00363e94;
        }
      }
      else if (local_1ec == 0x3143ca13) {
LAB_00365a50:
        iVar10 = 0x52c5536f;
      }
      else {
        iVar10 = -0x1ee04bf5;
        if (local_1ec != 0x33ce0806) {
          if (local_1ec == 0x36f07ca6) {
            uVar7 = (DAT_004c1298 | DAT_004c129c) * -0x2fb3aa03 + 0xa6025464 | 0x51a75ff2;
            local_e1 = local_e0 == 0;
            bVar3 = 0xe853a3cc < uVar7;
            bVar4 = uVar7 == 0xe853a3cd;
            iVar10 = 0x36f07ca6;
            iVar9 = -0x7e303adf;
            goto LAB_00366274;
          }
          goto LAB_00363e94;
        }
      }
    }
    else if (local_1ec < 0x3e71a2b4) {
      if (local_1ec != 0x3762dbda) {
        if (local_1ec == 0x37921dc3) {
          bVar4 = 0x7b2c95a3 <
                  (DAT_004c1390 + DAT_004c1394 ^ 0x8b401bf5U) * -0x27415615 + 0xdeeff5ee;
          iVar10 = -0x50236516;
          iVar9 = 0x7be410ff;
          goto LAB_00366628;
        }
        if (local_1ec == 0x3bcfd295) {
          local_d0 = local_b0;
          bVar4 = (DAT_004c1338 + DAT_004c133c ^ 0x47102c08U | 0x28e48273) == 0x2a7c4300;
          iVar10 = 0x5765bbd6;
          iVar9 = -0x192487fe;
          goto LAB_003659d0;
        }
        goto LAB_00363e94;
      }
      uVar7 = DAT_004c1358 | DAT_004c135c;
      local_188 = PTR_s_content_0048bb78;
      _objc_msgSend(local_e0);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_189 = _objc_msgSend(uVar5,PTR_s_autoresizesSubviews_0048bb80);
      _objc_release(uVar5);
      _objc_msgSend(local_e0,puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      local_198 = PTR_s_setAutoresizesSubviews__0048bb88;
      _objc_msgSend(uVar5,PTR_s_setAutoresizesSubviews__0048bb88,0);
      _objc_release(uVar5);
      uStack_1a0 = _objc_msgSend(local_e0,PTR_s_contentFrame_0048bb90);
      bVar4 = ((uVar7 | 0x1a3f813) + 0x996b1d24 | 0xfe304834) == 0x8002d6e6;
      iVar9 = 0x79ffc995;
      iVar10 = 0x1972177e;
LAB_00365fc4:
      if (bVar4) {
        iVar10 = iVar9;
      }
    }
    else if (local_1ec < 0x4035536e) {
      if (local_1ec == 0x3e71a2b4) {
        uVar7 = (DAT_004c12d0 * DAT_004c12d4 & 0x64c220U) + 0x7061452f;
        bVar3 = 0x19627eef < uVar7;
        bVar4 = uVar7 == 0x19627ef0;
        iVar10 = -0x7eaa5b85;
        iVar9 = -0x7bf204e0;
LAB_00366274:
        if (!bVar3 || bVar4) {
          iVar10 = iVar9;
        }
      }
      else {
        if (local_1ec != 0x3f36e8bb) goto LAB_00363e94;
        uVar7 = 0;
        if (DAT_004c128c != 0) {
          uVar7 = DAT_004c1288 / DAT_004c128c;
        }
        _objc_getAssociatedObject(param_1,&DAT_004d1bb0);
        local_e0 = _objc_retainAutoreleasedReturnValue();
        bVar4 = 0x5b86b1db < (uVar7 & 0x355877b7 | 0x55075b6);
        iVar9 = 0x70d8dbb3;
        iVar10 = -0x57e40b3a;
LAB_003663e4:
        if (bVar4) {
          iVar10 = iVar9;
        }
      }
    }
    else {
      if (local_1ec != 0x4035536e) {
        if (local_1ec == 0x4ac32b23) {
          bVar4 = local_129 == '\0';
          iVar9 = -0x4ad2aa38;
          iVar10 = 0x3e71a2b4;
          goto LAB_00365fc4;
        }
        goto LAB_00363e94;
      }
LAB_00366128:
      iVar10 = -0x7818a49;
    }
  }
  else if (local_1ec < 0x61f7c21e) {
    if (local_1ec < 0x53c6520e) {
      if (local_1ec < 0x5147e735) {
        if (local_1ec == 0x4d6e143c) {
          iVar10 = -0x6f853d4a;
        }
        else {
          iVar10 = 0x36f07ca6;
          if (local_1ec != 0x4e9b813e) {
            iVar10 = -0x1184349c;
            iVar9 = 0x50bdb67a;
            goto LAB_003646ec;
          }
        }
      }
      else if (local_1ec == 0x5147e735) {
        _objc_msgSend(local_e0,local_188);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uStack_1a0,uVar5,local_f8);
        _objc_release(uVar5);
        _objc_msgSend(local_e0,PTR_s_contentBounds_0048bb98);
        iVar10 = -0x7d4ad93;
      }
      else {
        if (local_1ec != 0x5162f27e) {
          if (local_1ec == 0x52c5536f) {
            DAT_004c0467 = local_d7 ^ 0x1a;
            DAT_004c0468 = DAT_004c0459 ^ 0x7d;
            DAT_004c0469 = DAT_004c045a ^ 0x3e;
            DAT_004c046a = DAT_004c045b ^ 0xf8;
            DAT_004c046b = DAT_004c045c ^ 0x6c;
            DAT_004c046c = DAT_004c045d ^ 0xbe;
            DAT_004c046d = DAT_004c045e ^ 0xd0;
            bVar4 = 0xa0962cb1 < (DAT_004c1268 | DAT_004c126c) + 0xc831ac0c;
            iVar10 = -0x19eaceed;
            iVar9 = 0x33ce0806;
            goto LAB_00366628;
          }
          goto LAB_00363e94;
        }
        uVar7 = DAT_004c1278 | DAT_004c127c;
        DAT_004d1c28 = 1;
        _objc_retain(param_1);
        iVar10 = 0x70e2dae8;
        if (((uVar7 & 0xdcbf532a) + 0xe6dec0c5 & 0xa78b93ea) != 0x1c9e5bf3) {
          iVar10 = 0x4d6e143c;
        }
      }
    }
    else if (local_1ec < 0x5765bbd6) {
      iVar10 = -0x4ad2aa38;
      if (local_1ec != 0x53c6520e) {
        if (local_1ec == 0x5475687a) {
          iVar10 = 0x618d8e86;
          if (((DAT_004c1320 | DAT_004c1324) + 0xaf088bdd & 0x43d73d17) != 0xa333617a) {
            iVar10 = -0x22860703;
          }
        }
        else {
          if (local_1ec != 0x56afa566) goto LAB_00363e94;
          _objc_msgSend(local_128,local_118,local_120);
          _objc_release(local_128);
          _objc_release(local_120);
          _objc_msgSend(local_e0,PTR_s_merged_0048bb20);
          iVar10 = 0x1d387282;
        }
      }
    }
    else if (local_1ec < 0x5eb65983) {
      iVar10 = 0x3bcfd295;
      if (local_1ec != 0x5765bbd6) {
        if (local_1ec != 0x57bd9beb) goto LAB_00363e94;
        _objc_msgSend(local_e0,local_138);
        _objc_retainAutoreleasedReturnValue();
        iVar10 = 0x1862a0c1;
      }
    }
    else if (local_1ec == 0x5eb65983) {
      local_141 = local_140 == 0;
      iVar10 = 0x5eb65983;
      if (0xe82debae < (DAT_004c12f8 + DAT_004c12fc + 0x4ff1946dU | 0xf0489846)) {
        iVar10 = -0x6e6c0be0;
      }
    }
    else {
      if (local_1ec != 0x618d8e86) goto LAB_00363e94;
      _objc_msgSend(local_e0,PTR_s_borderFrame_0048bb68);
      iVar10 = -0x22860703;
    }
  }
  else if (local_1ec < 0x70e2dae8) {
    if (local_1ec < 0x6d3f547e) {
      if (local_1ec == 0x61f7c21e) {
        DAT_004c045f = DAT_004c0450 ^ 0x60;
        local_d6 = DAT_004c0451;
        bVar4 = (DAT_004c1258 | DAT_004c125c) * 0x4980f2b0 == -0x5aa9d52c;
        iVar9 = 0x61f7c21e;
        iVar10 = 0x66241261;
        goto LAB_00365fc4;
      }
      if (local_1ec == 0x658a0d0d) {
        uVar7 = (DAT_004c1330 + DAT_004c1334) * 0x424839e4 + 0x84ba581;
        bVar3 = 0xa9712213 < uVar7;
        bVar4 = uVar7 == 0xa9712214;
        iVar10 = 0x5765bbd6;
        iVar9 = 0x3bcfd295;
        goto LAB_00366274;
      }
      if (local_1ec != 0x66241261) goto LAB_00363e94;
      iVar10 = -0x6ed4fff2;
    }
    else if (local_1ec == 0x6d3f547e) {
      iVar10 = -0x520d7784;
    }
    else {
      if (local_1ec == 0x7070e845) {
        local_1e0 = PTR_s_setMerged__0048bbb0;
        bVar4 = 0x980406c0 <
                ((DAT_004c1388 | DAT_004c138c) * 0x298137e2 + 0x97a050c6 >> 1) / 0x6997f81f;
        iVar9 = -0x27057320;
        iVar10 = 0x2e5f93f2;
        goto LAB_003663e4;
      }
      if (local_1ec != 0x70d8dbb3) goto LAB_00363e94;
      _objc_getAssociatedObject(param_1,&DAT_004d1bb0);
      _objc_retainAutoreleasedReturnValue();
      iVar10 = 0x3f36e8bb;
    }
  }
  else if (local_1ec < 0x797ef6f6) {
    if (local_1ec == 0x70e2dae8) {
      DAT_004d1c28 = 1;
      _objc_retain(param_1);
      iVar10 = 0x5162f27e;
    }
    else if (local_1ec == 0x73545edb) {
      _objc_release(local_140);
      iVar10 = 0x5475687a;
      if (local_159 == '\0') {
        iVar10 = -0x23a5c741;
      }
    }
    else {
      if (local_1ec != 0x77f7d9f6) goto LAB_00363e94;
      _objc_release(param_1);
      iVar10 = -0x3bfdde3f;
    }
  }
  else if (local_1ec < 0x7be410ff) {
    if (local_1ec == 0x797ef6f6) {
      iVar10 = 0x658a0d0d;
    }
    else {
      if (local_1ec != 0x79ffc995) goto LAB_00363e94;
      _objc_msgSend(local_e0,PTR_s_content_0048bb78);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,PTR_s_autoresizesSubviews_0048bb80);
      _objc_release(uVar5);
      _objc_msgSend(local_e0,puVar1);
      uVar5 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar5,PTR_s_setAutoresizesSubviews__0048bb88,0);
      _objc_release(uVar5);
      _objc_msgSend(local_e0,PTR_s_contentFrame_0048bb90);
      iVar10 = 0x3762dbda;
    }
  }
  else {
    if (local_1ec != 0x7be410ff) {
      if (local_1ec == 0x7c2a5ca1) {
        uVar7 = 0;
        if (DAT_004c12ac != 0) {
          uVar7 = DAT_004c12a8 / DAT_004c12ac;
        }
        _objc_msgSend(local_e0,PTR_s_guide_0048bb40);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,PTR_s_setHidden__0048a0d8,1);
        _objc_release(uVar5);
        _objc_msgSend(local_e0,PTR_s_image_0048bb48);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,PTR_s_removeFromSuperview_00489570);
        _objc_release(uVar5);
        uVar6 = _objc_msgSend(local_e0,PTR_s_referFrame_0048bb50);
        puVar1 = PTR_s_refer_0048bb30;
        local_f0 = PTR_s_refer_0048bb30;
        _objc_msgSend(local_e0);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_f8 = PTR_s_setFrame__004894f8;
        _objc_msgSend(uVar6);
        _objc_release(uVar5);
        _objc_msgSend(local_e0,PTR_s_containerColor_0048bb58);
        local_100 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_e0,puVar1);
        local_108 = _objc_retainAutoreleasedReturnValue();
        FUN_003666d4(local_108,&DAT_004c045f);
        local_110 = _objc_retainAutoreleasedReturnValue();
        bVar4 = (uint)((ulong)uVar7 * 0x287239c7 >> 0x3d) == 0x1a69829e;
        iVar10 = 0x7c2a5ca1;
        iVar9 = 0x6d3f547e;
        goto LAB_003659d0;
      }
      goto LAB_00363e94;
    }
    _objc_msgSend(local_e0,local_1e8,0);
    _objc_msgSend(local_e0,PTR_s_setBackground__0048bbc8,0);
    iVar10 = -0x50236516;
  }
LAB_00366674:
  local_1ec = iVar10;
  goto LAB_00363e94;
}



// #####################################
// ##### FUN_0044bfbc @ 0044bfbc
// #####################################

void FUN_0044bfbc(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_17c;
  undefined8 local_178;
  long local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  char local_149;
  long local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  char local_121;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  char local_101;
  long local_100;
  undefined8 local_f8;
  char local_e9;
  long local_e8;
  undefined8 local_e0;
  char local_d1;
  long local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  char local_a1;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char local_81;
  long local_80;
  undefined8 local_78;
  byte local_6f;
  byte local_6e;
  char local_6d;
  
  iVar1 = DAT_004d2334;
  local_17c = -0x7c4efc20;
LAB_0044c070:
  iVar5 = -0x35f41d53;
  if (local_17c < -0x7ccccbb) {
    if (local_17c < -0x35f41d53) {
      if (local_17c < -0x570a3414) {
        if (local_17c < -0x62c15c8e) {
          if (local_17c < -0x712235fa) {
            if (local_17c < -0x7c4efc20) {
              iVar5 = 0x4e7e359d;
              if (local_17c != -0x7ffc2870) {
                if (local_17c != -0x7fb6798d) goto LAB_0044c070;
                local_178 = _method_getImplementation(local_170);
                iVar5 = 0x321c92cb;
              }
            }
            else if (local_17c == -0x7c4efc20) {
              local_6d = iVar1 == 0;
              iVar5 = 0x755931c7;
            }
            else {
              if (local_17c != -0x77d6f6ce) {
                if (local_17c == -0x74aa2854) {
                  bVar3 = ((DAT_004d00b0 - DAT_004d00b4 ^ 0x24643710U) & 0xac6ebf9d) * -0x66b61b41
                          == 0x6d232dfb;
                  iVar5 = -0x14b2ee41;
                  iVar6 = 0x670f5a56;
                  goto LAB_00450424;
                }
                goto LAB_0044c070;
              }
              iVar6 = DAT_004d01d8 + DAT_004d01dc;
              local_130 = _method_getImplementation(local_120);
              iVar5 = 0x5d2d3a1e;
              if ((iVar6 + 0xbb47160dU | 0xb04907af) == 0x66ec59ca) {
                iVar5 = -0x77d6f6ce;
              }
            }
          }
          else if (local_17c < -0x6c7a0db2) {
            if (local_17c == -0x712235fa) {
              DAT_004d2260 = _class_getSuperclass(local_78);
              _objc_retain(local_78);
              _objc_autorelease(local_78);
              _class_getInstanceMethod(DAT_004d2250,PTR_s_voiceTimeLength_0048c160);
              iVar5 = 0x32a7b814;
            }
            else {
              if (local_17c == -0x6ffd1e1a) {
                bVar3 = (DAT_004d00e0 - DAT_004d00e4) * -0x71c45358 == 0xdc25117;
                iVar5 = 0x7f1f2783;
                iVar6 = -0x626869b6;
                goto LAB_00450468;
              }
              if (local_17c != -0x6ec67a7a) goto LAB_0044c070;
              _class_getInstanceMethod(local_138,local_140);
              iVar5 = 0xbad42d7;
            }
          }
          else if (local_17c == -0x6c7a0db2) {
            local_a0 = _class_getInstanceMethod(local_98,PTR_s_statusTips_0048c168);
            local_a1 = local_a0 == 0;
            iVar5 = 0x49737aea;
          }
          else if (local_17c == -0x68c6df80) {
            local_160 = _objc_getClass(&DAT_004cfc60);
            DAT_004d22c8 = local_160;
            DAT_004d22d0 = _object_getClass();
            iVar5 = 0xd8e730e;
          }
          else {
            if (local_17c != -0x66a57661) goto LAB_0044c070;
            iVar5 = 0x15e4079e;
          }
        }
        else if (local_17c < -0x5c223910) {
          if (local_17c < -0x5fede19e) {
            if (local_17c == -0x62c15c8e) {
              DAT_004d2298 = local_c8;
              DAT_004d22a0 = _object_getClass();
              DAT_004d22a8 = _class_getSuperclass(local_c8);
              _objc_retain(local_c8);
              iVar5 = 0x651de684;
            }
            else {
              if (local_17c != -0x626869b6) goto LAB_0044c070;
              _objc_autorelease(local_c8);
              _class_getInstanceMethod(DAT_004d2298,PTR_s_initWithViewModel__0048c178);
              iVar5 = 0x7f1f2783;
            }
          }
          else if (local_17c == -0x5fede19e) {
            iVar5 = 0x254a6c11;
            if (0x58c31aca < (DAT_004d01d0 - DAT_004d01d4 ^ 0x475c9b76U) * -0x57f2b276 + 0xa3b740d2)
            {
              iVar5 = -0x77d6f6ce;
            }
          }
          else {
            if (local_17c != -0x5dd89ff7) {
              if (local_17c == -0x5cc9d43d) {
                uVar7 = DAT_004d0130 & DAT_004d0134 & 0x90b2e538 ^ 0xfaba54b6;
                bVar2 = 0xd07475f0 < uVar7;
                bVar3 = uVar7 == 0xd07475f1;
                iVar5 = -0x15a327dd;
                iVar6 = 0x26f14fb4;
                goto LAB_004504c0;
              }
              goto LAB_0044c070;
            }
            iVar5 = 0x5925221f;
          }
        }
        else if (local_17c < -0x592b3e8b) {
          iVar5 = -0x4f63eca7;
          if (local_17c != -0x5c223910) {
            if (local_17c == -0x5a224249) {
              DAT_004d2308 = local_f8;
              iVar5 = 0x6db7b2b7;
            }
            else {
              if (local_17c != -0x59532f3c) goto LAB_0044c070;
              _method_setImplementation(local_e8,FUN_0045e3d4);
              iVar5 = -0xb1c5ed2;
            }
          }
        }
        else if (local_17c == -0x592b3e8b) {
          iVar5 = -0x3a60fe41;
        }
        else {
          iVar5 = -0x2e6ea706;
          if (local_17c != -0x580803a7) {
            if (local_17c != -0x57780490) goto LAB_0044c070;
            local_110 = _method_getImplementation(local_100);
            iVar5 = 0xcb5a4d2;
          }
        }
        goto LAB_004507d8;
      }
      if (-0x46a5b70f < local_17c) {
        if (local_17c < -0x3b81f16f) {
          if (local_17c < -0x411a65d4) {
            iVar5 = 0x3a337db4;
            if (local_17c != -0x46a5b70e) {
              if (local_17c != -0x42e406fb) {
                if (local_17c == -0x4190ff68) {
                  uVar7 = (((DAT_004d0258 | DAT_004d025c) ^ 0x622284) & 0xa1e322e4) * 0x41c3f76f;
                  bVar2 = 0x5bb5291e < uVar7;
                  bVar3 = uVar7 == 0x5bb5291f;
                  iVar6 = 0x7b62637d;
                  iVar5 = -0x5c223910;
                  goto LAB_00450660;
                }
                goto LAB_0044c070;
              }
              iVar5 = 0x545d1e75;
            }
          }
          else if (local_17c == -0x411a65d4) {
            local_138 = DAT_004d22b0;
            iVar5 = -0xe6c0e92;
          }
          else {
            if (local_17c != -0x400c75da) {
              if (local_17c == -0x3f41c452) {
                bVar3 = ((DAT_004d0040 - DAT_004d0044) + 0x93c82ffeU | 0x8c3badd8) / 0x39312f9f ==
                        0x6aa03139;
                iVar6 = 0x61a98402;
                iVar5 = 0x48d97548;
                goto LAB_004507d4;
              }
              goto LAB_0044c070;
            }
            uVar7 = 0;
            if (DAT_004d01ac != 0) {
              uVar7 = DAT_004d01a8 / DAT_004d01ac;
            }
            uVar4 = _objc_getClass(&DAT_004cfcb0);
            DAT_004d22b0 = uVar4;
            DAT_004d22b8 = _object_getClass();
            DAT_004d22c0 = _class_getSuperclass(uVar4);
            _objc_retain(uVar4);
            _objc_autorelease();
            local_118 = DAT_004d22b0;
            iVar5 = -0x400c75da;
            if ((uVar7 ^ 0x1a929367) + 0xfd76f619 < 0x9e578ca4) {
              iVar5 = -0x42e406fb;
            }
          }
        }
        else if (local_17c < -0x39115e1f) {
          if (local_17c == -0x3b81f16f) {
            uVar4 = _objc_getClass(&DAT_004cfcb0);
            DAT_004d22b0 = uVar4;
            DAT_004d22b8 = _object_getClass();
            DAT_004d22c0 = _class_getSuperclass(uVar4);
            _objc_retain(uVar4);
            _objc_autorelease();
            iVar5 = -0x400c75da;
          }
          else {
            if (local_17c != -0x3aada487) {
              if (local_17c == -0x3a60fe41) {
                uVar7 = DAT_004d00a8 & DAT_004d00ac;
                _method_setImplementation(local_c0,FUN_00456650);
                bVar3 = (uint)((ulong)(uVar7 + 0xcaba6d82) * 0x376ac3d >> 0x39) == 0x4c5f7405;
                iVar5 = -0x3a60fe41;
                iVar6 = 0x3406936e;
                goto LAB_00450424;
              }
              goto LAB_0044c070;
            }
            iVar5 = 0xc4383bb;
          }
        }
        else if (local_17c == -0x39115e1f) {
          DAT_004d2334 = 1;
          DAT_004d2250 = _objc_getClass(&DAT_004cfd80);
          DAT_004d2258 = _object_getClass();
          iVar5 = -0x2f2b322d;
        }
        else {
          if (local_17c != -0x37ff8a62) {
            if (local_17c == -0x363148a6) goto LAB_004504fc;
            goto LAB_0044c070;
          }
          iVar5 = 0x35157192;
        }
        goto LAB_004507d8;
      }
      if (-0x4f63eca8 < local_17c) {
        if (local_17c < -0x4c5766f3) {
          if (local_17c == -0x4f63eca7) {
            uVar7 = 0;
            if (DAT_004d0264 != 0) {
              uVar7 = DAT_004d0260 / DAT_004d0264;
            }
            bVar3 = uVar7 == 0x2583a59a;
            iVar5 = 0x7a78e39d;
            iVar6 = 0x43ba4944;
            goto LAB_00450468;
          }
          if (local_17c == -0x4ebb5034) {
            uVar7 = DAT_004d0188 * DAT_004d018c;
            DAT_004d2310 = local_110;
            _method_setImplementation(local_100,FUN_0045f9a4);
            bVar3 = (uVar7 ^ 0x2e654f8) * 0x315b557d == 0x5344d8e2;
            iVar6 = -0x8f1f035;
            iVar5 = 0x39f4907c;
            goto LAB_004507d4;
          }
          iVar5 = -0x411a65d4;
          iVar6 = -0x4ccbe7ac;
LAB_0044e3b8:
          if (local_17c != iVar6) goto LAB_0044c070;
        }
        else if (local_17c == -0x4c5766f3) {
          DAT_004d2298 = local_c8;
          DAT_004d22a0 = _object_getClass();
          DAT_004d22a8 = _class_getSuperclass(local_c8);
          _objc_retain(local_c8);
          iVar5 = -0x62c15c8e;
        }
        else if (local_17c == -0x479f0a45) {
          _objc_getClass(&DAT_004cfc20);
          iVar5 = -0xe848310;
        }
        else {
          if (local_17c != -0x4754ef1e) goto LAB_0044c070;
          iVar5 = 0x403dc6dd;
        }
        goto LAB_004507d8;
      }
      if (-0x55751c03 < local_17c) {
        if (local_17c == -0x55751c02) {
          iVar5 = -0x6c7a0db2;
        }
        else {
          if (local_17c != -0x54f8d7c0) {
            iVar5 = -0x35f41d53;
            iVar6 = -0x4f7a2d1f;
            goto LAB_0044e3b8;
          }
          iVar5 = -0x15f38ead;
        }
        goto LAB_004507d8;
      }
      if (local_17c == -0x570a3414) {
        bVar3 = 0x3d9a60d < ((DAT_004d0120 | DAT_004d0124 | 0x708a954e) ^ 0x79b2c893) * 0x1bf77fca;
        iVar6 = -0x2c6e4311;
        iVar5 = -0x3559b9d5;
        goto LAB_00450080;
      }
      if (local_17c != -0x5682ca77) goto LAB_0044c070;
      iVar5 = DAT_004d0068 + DAT_004d006c;
      local_b0 = _method_getImplementation(local_a0);
      bVar3 = 0x3f85ee35 < (iVar5 * -0xc73a89f + 0x39b3e41fU & 0xaab34e2c);
      iVar6 = -0x5682ca77;
      iVar5 = -0x2db7fe59;
LAB_00450080:
      if (bVar3) {
        iVar5 = iVar6;
      }
      goto LAB_004507d8;
    }
    if (local_17c < -0x18890061) {
      if (local_17c < -0x2db7fe59) {
        if (local_17c < -0x3127939a) {
          if (local_17c < -0x34f66fb4) {
            if (local_17c != -0x35f41d53) {
              iVar5 = -0x2c6e4311;
              iVar6 = -0x3559b9d5;
              goto LAB_0044e3b8;
            }
            local_121 = local_120 == 0;
            if (0xb55e236e <
                ((DAT_004d01c8 + DAT_004d01cc) * -0x39bf4001 + 0x47c1a59eU ^ 0xc22993e3)) {
              iVar5 = -0x26342143;
            }
          }
          else {
            iVar5 = -0x1275911b;
            if (local_17c != -0x34f66fb4) {
              if (local_17c == -0x348bf4a9) {
                _method_getImplementation(local_a0);
                iVar5 = -0x5682ca77;
              }
              else {
                if (local_17c != -0x3446d194) goto LAB_0044c070;
                DAT_004d22d8 = _class_getSuperclass(local_160);
                _objc_retain(local_160);
                _objc_autorelease(local_160);
                local_168 = DAT_004d22c8;
                iVar5 = 0x1b7b121c;
              }
            }
          }
        }
        else if (local_17c < -0x2f2b322d) {
          iVar5 = -0x363148a6;
          if (local_17c != -0x3127939a) {
            if (local_17c == -0x2fa91c29) {
              uVar7 = (DAT_004d0000 & DAT_004d0004) + 0x2152f8c9 & 0xc65f8a3f;
              bVar2 = 0x70be19f1 < uVar7;
              bVar3 = uVar7 == 0x70be19f2;
              iVar5 = -0x2f2b322d;
              iVar6 = -0x39115e1f;
              goto LAB_004504c0;
            }
            if (local_17c != -0x2f99487a) goto LAB_0044c070;
            iVar5 = -0x580803a7;
          }
        }
        else if (local_17c == -0x2f2b322d) {
          uVar7 = DAT_004d0008 ^ DAT_004d000c;
          DAT_004d2334 = 1;
          local_78 = _objc_getClass(&DAT_004cfd80);
          DAT_004d2250 = local_78;
          DAT_004d2258 = _object_getClass();
          iVar5 = 0x4008310a;
          if (((uVar7 + 0x7b61199b >> 4) / 0xe656a4f | 0xae647062) < 0x2a858ba9) {
            iVar5 = -0x39115e1f;
          }
        }
        else if (local_17c == -0x2e6ea706) {
          local_b8 = _objc_getClass(&DAT_004cfd40);
          DAT_004d2280 = local_b8;
          DAT_004d2288 = _object_getClass();
          iVar5 = -0x62d7b3f;
        }
        else {
          if (local_17c != -0x2e478e71) goto LAB_0044c070;
          _method_setImplementation(local_148,FUN_0046313c);
          iVar5 = 0xfcbfcac;
        }
      }
      else if (local_17c < -0x22673f26) {
        if (-0x277204ab < local_17c) {
          if (local_17c == -0x277204aa) {
            uVar7 = DAT_004d0038 | DAT_004d003c;
            DAT_004d22e0 = local_90;
            _method_setImplementation(local_80,FUN_004508a8);
            bVar3 = 0xcfb8a8d6 < (uVar7 + 0xab1c73e5 ^ 0xb098 | 0xef4f4d63);
            iVar5 = 0x2585fe7e;
            iVar6 = 0x7e57f6c;
            goto LAB_00450718;
          }
          if (local_17c == -0x26342143) {
            bVar3 = local_121 == '\0';
            iVar5 = -0x411a65d4;
            iVar6 = -0x5fede19e;
            goto LAB_00450468;
          }
          if (local_17c == -0x229ea8b8) {
            uVar7 = DAT_004d0070 + DAT_004d0074 + 0x6982596fU ^ 0x3072126f;
            bVar2 = 0xff4209f9 < uVar7;
            bVar3 = uVar7 == 0xff4209fa;
            iVar6 = 0x6c195caa;
            iVar5 = 0x5e3cac8b;
            goto LAB_00450660;
          }
          goto LAB_0044c070;
        }
        if (local_17c == -0x2db7fe59) {
          iVar5 = -0x229ea8b8;
        }
        else {
          if (local_17c == -0x2c6e4311) {
            uVar7 = (DAT_004d0128 + DAT_004d012c ^ 0x87f79ab5U) + 0x9b2cca7;
            local_e9 = local_e8 == 0;
            bVar2 = 0xe78f3d4a < uVar7;
            bVar3 = uVar7 == 0xe78f3d4b;
            iVar5 = -0x3559b9d5;
            iVar6 = 0x643738e4;
            goto LAB_004504c0;
          }
          if (local_17c != -0x27cd6af4) goto LAB_0044c070;
          _method_setImplementation(local_120,FUN_00461734);
          iVar5 = 0x16222b73;
        }
      }
      else if (local_17c < -0x1df19bfb) {
        if (local_17c == -0x22673f26) {
          iVar5 = 0x45a2d604;
          if ((DAT_004d0020 ^ DAT_004d0024 | 0x16b920d) * 0x2b435534 == -0x1b73900d) {
            iVar5 = -0x1755ce58;
          }
        }
        else if (local_17c == -0x22574488) {
          iVar5 = 0x36330cf4;
        }
        else {
          if (local_17c != -0x20524e35) goto LAB_0044c070;
          DAT_004d2300 = _method_getImplementation(local_d0);
LAB_0044d520:
          iVar5 = 0x61b00ea5;
        }
      }
      else {
        if (local_17c == -0x1df19bfb) {
          bVar3 = 0x59d2f90f <
                  ((DAT_004d0100 + DAT_004d0104 & 0x1401e1dU) + 0xa4bb2bb5 | 0xfe22ca0f);
          iVar6 = -0x1275911b;
          iVar5 = -0x34f66fb4;
          goto LAB_00450080;
        }
        if (local_17c == -0x1bb71bf2) {
          _class_getInstanceMethod(DAT_004d2298,PTR_s_layoutInternal_0048c118);
LAB_004504fc:
          iVar5 = 0x5bbee33d;
        }
        else {
          if (local_17c != -0x192b2184) goto LAB_0044c070;
          DAT_004d22f8 = _method_getImplementation(local_c0);
          iVar5 = -0xdba0e89;
        }
      }
      goto LAB_004507d8;
    }
    if (local_17c < -0x10362f79) {
      if (-0x15a327de < local_17c) {
        if (local_17c < -0x1275911b) {
          if (local_17c == -0x15a327dd) {
            iVar5 = DAT_004d0138 + DAT_004d013c;
            local_f8 = _method_getImplementation(local_e8);
            bVar3 = iVar5 * 0x49e83b13 == 0x74adc4b5;
            iVar6 = 0x26f14fb4;
            iVar5 = -0x22574488;
LAB_004507d4:
            if (bVar3) {
              iVar5 = iVar6;
            }
          }
          else {
            if (local_17c != -0x14d4dcfa) {
              iVar5 = 0x670f5a56;
              iVar6 = -0x14b2ee41;
              goto LAB_0044e3b8;
            }
            iVar5 = -0x182388bb;
          }
        }
        else {
          if (local_17c == -0x1275911b) {
            local_e0 = DAT_004d2298;
            bVar3 = (DAT_004d0108 - DAT_004d010c & 0xd594ac85U) == 0x4c07f2a7;
            iVar6 = -0x1275911b;
            iVar5 = 0x735ed1cc;
            goto LAB_004507d4;
          }
          if (local_17c != -0x12489b60) {
            if (local_17c == -0x1141d6e6) goto LAB_0044d520;
            goto LAB_0044c070;
          }
          iVar5 = 0x357292b1;
          if ((DAT_004cfff0 & DAT_004cfff4 & 0xcedefe86 | 0xce8efe06) < 0xbaaa0ffb) {
            iVar5 = 0x79f4e45e;
          }
        }
        goto LAB_004507d8;
      }
      if (local_17c < -0x1755ce58) {
        if (local_17c == -0x18890061) {
          bVar3 = local_6d == '\0';
          iVar6 = -0x2fa91c29;
          iVar5 = 0x2233cf11;
          goto LAB_004507d4;
        }
        if (local_17c == -0x182388bb) {
          bVar3 = local_101 == '\0';
          iVar5 = 0x4e7e359d;
          iVar6 = -0x57780490;
          goto LAB_00450468;
        }
        goto LAB_0044c070;
      }
      if (local_17c == -0x1755ce58) {
        _method_getImplementation(local_80);
        iVar5 = 0x45a2d604;
        goto LAB_004507d8;
      }
      if (local_17c != -0x16bde5ac) {
        if (local_17c == -0x15f38ead) {
          uVar7 = 0;
          if (DAT_004d00d4 != 0) {
            uVar7 = DAT_004d00d0 / DAT_004d00d4;
          }
          uVar7 = ((uVar7 ^ 0x88006041) & 0x8e0c6261) + 0xc2e36176;
          bVar2 = 0x30aa61bf < uVar7;
          bVar3 = uVar7 == 0x30aa61c0;
          iVar5 = -0x62c15c8e;
          iVar6 = -0x4c5766f3;
          goto LAB_004504c0;
        }
        goto LAB_0044c070;
      }
      bVar3 = (DAT_004d0060 * DAT_004d0064 ^ 0x3010e06cU | 0x7a70b11) * -0x2bf076cc == 0x5d4a8bdf;
      iVar5 = -0x5682ca77;
      iVar6 = -0x348bf4a9;
      goto LAB_00450468;
    }
    if (local_17c < -0xdba0e89) {
      if (local_17c < -0xe848310) {
        if (local_17c == -0x10362f79) {
          bVar3 = local_149 == '\0';
          iVar5 = -0x68c6df80;
          iVar6 = 0x4cae5b06;
          goto LAB_00450468;
        }
        if (local_17c != -0x102a0fa2) {
          iVar5 = -0x1df19bfb;
          iVar6 = -0x10100800;
          goto LAB_0044e3b8;
        }
        bVar3 = local_c0 == 0;
        iVar5 = 0x3a337db4;
        iVar6 = 0x61b89fd7;
      }
      else {
        if (local_17c != -0xe848310) {
          if (local_17c == -0xe6c0e92) {
            uVar7 = (DAT_004d01f0 + DAT_004d01f4 ^ 0xdd4bf39bU) * 0x1675368b + 0xa782ffae;
            bVar2 = 0x24f92686 < uVar7;
            bVar3 = uVar7 == 0x24f92687;
            iVar5 = 0x7dcfe3c9;
            iVar6 = 0x2e8aba30;
            goto LAB_004504c0;
          }
          if (local_17c == -0xe51d920) {
            _method_getImplementation(local_148);
            iVar5 = -0xc858e1a;
            goto LAB_004507d8;
          }
          goto LAB_0044c070;
        }
        uVar7 = DAT_004d00c8 ^ DAT_004d00cc;
        local_c8 = _objc_getClass(&DAT_004cfc20);
        bVar3 = (uVar7 + 0xfbd2b366 & 0xfcd8cbf1) == 0xa23ddc24;
        iVar5 = -0xe848310;
        iVar6 = -0x54f8d7c0;
      }
LAB_00450424:
      if (!bVar3) {
        iVar5 = iVar6;
      }
      goto LAB_004507d8;
    }
    if (local_17c < -0xc7c4021) {
      if (local_17c == -0xdba0e89) {
        uVar7 = (DAT_004d0098 - DAT_004d009c | 0x4c042cefU) + 0x28f02da1 & 0x897cc820;
        DAT_004d22f8 = _method_getImplementation(local_c0);
        bVar2 = 0xae2265bc < uVar7;
        bVar3 = uVar7 == 0xae2265bd;
        iVar5 = -0xdba0e89;
        iVar6 = 0x13215dda;
        goto LAB_004504c0;
      }
      if (local_17c != -0xd1d40af) {
        if (local_17c == -0xc858e1a) {
          iVar5 = DAT_004d0218 * DAT_004d021c;
          local_158 = _method_getImplementation(local_148);
          bVar3 = (iVar5 + 0x63128c3U ^ 0x607a542a) * -0x3ccd695a == -0x73dfc2fc;
          iVar6 = -0xc858e1a;
          iVar5 = -0x5dd89ff7;
          goto LAB_004507d4;
        }
        goto LAB_0044c070;
      }
      iVar5 = -0xc7c4021;
      if (local_81 == '\0') {
        iVar5 = -0x22673f26;
      }
      goto LAB_004507d8;
    }
    if (local_17c == -0xc7c4021) {
      bVar3 = 0x16eb7e42 < ((DAT_004d0050 - DAT_004d0054 | 0x53858137U) / 0x40c06faa) * -0x22fdd7ec;
      iVar5 = 0x5b930160;
      iVar6 = 0x394701fe;
    }
    else {
      if (local_17c != -0xb1c5ed2) {
        if (local_17c == -0x8f1f035) {
          DAT_004d2310 = local_110;
          _method_setImplementation(local_100,FUN_0045f9a4);
          iVar5 = -0x4ebb5034;
          goto LAB_004507d8;
        }
        goto LAB_0044c070;
      }
      uVar7 = DAT_004d0158 ^ DAT_004d015c;
      _method_setImplementation(local_e8,FUN_0045e3d4);
      bVar3 = 0x2ab77fb5 < ((uint)((ulong)(uVar7 & 0xb7c5cc3f) * 0x669bad79 >> 0x3e) | 0xdb2a90b4);
      iVar5 = -0x59532f3c;
      iVar6 = -0x3127939a;
    }
  }
  else {
    if (0x45a2d603 < local_17c) {
      if (0x651de683 < local_17c) {
        if (local_17c < 0x6fbd76c1) {
          if (local_17c < 0x6a15e5d0) {
            if (local_17c < 0x65dbb779) {
              if (local_17c == 0x651de684) {
                iVar5 = -0x6ffd1e1a;
              }
              else {
                if (local_17c != 0x65a59205) goto LAB_0044c070;
                iVar5 = 0x13ddc9db;
              }
            }
            else {
              iVar5 = 0x3a440a34;
              if (local_17c != 0x65dbb779) {
                if (local_17c == 0x670f5a56) {
                  uVar7 = 0;
                  if (DAT_004d00bc != 0) {
                    uVar7 = DAT_004d00b8 / DAT_004d00bc;
                  }
                  bVar3 = 0x6a910884 < (uVar7 * 0x1c54ffe ^ 0x5c10248e | 0xa12b8b41);
                  iVar5 = -0x14b2ee41;
                  iVar6 = -0x46a5b70e;
                  goto LAB_00450718;
                }
                if (local_17c != 0x6917dd56) goto LAB_0044c070;
                DAT_004d2318 = local_130;
                iVar5 = 0x41ac44d8;
              }
            }
          }
          else if (local_17c < 0x6d5e6775) {
            if (local_17c == 0x6a15e5d0) {
              _method_setImplementation(local_c0,FUN_00456650);
              iVar5 = -0x3a60fe41;
            }
            else {
              if (local_17c != 0x6ae45428) {
                if (local_17c == 0x6c195caa) {
                  uVar7 = 0;
                  if (DAT_004d007c != 0) {
                    uVar7 = DAT_004d0078 / DAT_004d007c;
                  }
                  DAT_004d22f0 = local_b0;
                  _method_setImplementation(local_a0,FUN_0045316c);
                  bVar3 = ((uVar7 ^ 0x360760b3) & 0x764767b3) == 0x9b22051e;
                  iVar6 = 0x5e3cac8b;
                  iVar5 = -0x2f99487a;
                  goto LAB_004507d4;
                }
                goto LAB_0044c070;
              }
              local_170 = _class_getInstanceMethod(local_168,PTR_s_layoutSubviews_0048b9a8);
              iVar5 = -0x4f63eca7;
              if (local_170 != 0) {
                iVar5 = -0x7fb6798d;
              }
            }
          }
          else {
            if (local_17c == 0x6d5e6775) {
              bVar3 = ((uint)((ulong)(DAT_004cffe8 & DAT_004cffec) * 0x54de7f41 >> 0x3e) |
                      0x6fe40e74) == 0x9a8f9b34;
              iVar6 = 0x77b495b2;
              iVar5 = -0x18890061;
              goto LAB_004507d4;
            }
            if (local_17c == 0x6db7b2b7) {
              uVar7 = 0;
              if (DAT_004d014c != 0) {
                uVar7 = DAT_004d0148 / DAT_004d014c;
              }
              DAT_004d2308 = local_f8;
              bVar3 = 0x8bfffb71 < (uVar7 | 0xfffbfff3);
              iVar5 = -0x5a224249;
              iVar6 = -0x3aada487;
              goto LAB_00450718;
            }
            if (local_17c != 0x6de3fb9d) goto LAB_0044c070;
            DAT_004cfcba = local_6f;
            DAT_004cfcbb = DAT_004cfc8b ^ 0x4c;
            DAT_004cfcbc = DAT_004cfc8c ^ 0xec;
            DAT_004cfcbd = DAT_004cfc8d ^ 0x27;
            DAT_004cfcbe = DAT_004cfc8e ^ 0xf1;
            DAT_004cfcbf = DAT_004cfc8f ^ 0xc2;
            DAT_004cfcc0 = DAT_004cfc90 ^ 0x67;
            DAT_004cfcc1 = DAT_004cfc91 ^ 0xf;
            DAT_004cfcc2 = DAT_004cfc92 ^ 0xa4;
            DAT_004cfcc3 = DAT_004cfc93 ^ 0x57;
            DAT_004cfcc4 = DAT_004cfc94 ^ 0x99;
            DAT_004cfcc5 = DAT_004cfc95 ^ 0x20;
            DAT_004cfcc6 = DAT_004cfc96 ^ 0xbe;
            DAT_004cfcc7 = DAT_004cfc97 ^ 0x91;
            DAT_004cfcc8 = DAT_004cfc98 ^ 0x57;
            DAT_004cfcc9 = DAT_004cfc99 ^ 0x15;
            DAT_004cfcca = DAT_004cfc9a ^ 0xb0;
            DAT_004cfccb = DAT_004cfc9b ^ 0x82;
            DAT_004cfccc = DAT_004cfc9c ^ 0x47;
            DAT_004cfccd = DAT_004cfc9d ^ 0x70;
            DAT_004cfcce = DAT_004cfc9e ^ 0x76;
            DAT_004cfccf = DAT_004cfc9f ^ 4;
            DAT_004cfcd0 = DAT_004cfca0 ^ 0x2a;
            DAT_004cfcd1 = DAT_004cfca1 ^ 0x23;
            DAT_004cfcd2 = DAT_004cfca2 ^ 0xe0;
            DAT_004cfcd3 = DAT_004cfca3 ^ 0x97;
            DAT_004cfcd4 = DAT_004cfca4 ^ 0x57;
            DAT_004cfcd5 = DAT_004cfca5 ^ 200;
            DAT_004cfc60 = DAT_004cfc40 ^ 0xf9;
            DAT_004cfc61 = DAT_004cfc41 ^ 0x1a;
            DAT_004cfc62 = DAT_004cfc42 ^ 0x29;
            DAT_004cfc63 = DAT_004cfc43 ^ 0xbe;
            DAT_004cfc64 = DAT_004cfc44 ^ 0xe3;
            DAT_004cfc65 = DAT_004cfc45 ^ 0x1b;
            DAT_004cfc66 = DAT_004cfc46 ^ 3;
            DAT_004cfc67 = DAT_004cfc47 ^ 0xc;
            DAT_004cfc68 = DAT_004cfc48 ^ 0xcc;
            DAT_004cfc69 = DAT_004cfc49 ^ 0xd5;
            DAT_004cfc6a = DAT_004cfc4a ^ 0x1f;
            DAT_004cfc6b = DAT_004cfc4b ^ 0xe4;
            DAT_004cfc6c = DAT_004cfc4c ^ 0x32;
            DAT_004cfc6d = DAT_004cfc4d ^ 0xc0;
            DAT_004cfc6e = DAT_004cfc4e ^ 9;
            DAT_004cfc6f = DAT_004cfc4f ^ 0x5f;
            DAT_004cfc70 = DAT_004cfc50 ^ 200;
            DAT_004cfc71 = DAT_004cfc51 ^ 0xca;
            DAT_004cfc72 = DAT_004cfc52 ^ 0xb7;
            DAT_004cfc73 = DAT_004cfc53 ^ 0x76;
            DAT_004cfc74 = DAT_004cfc54 ^ 0xaf;
            DAT_004cfc75 = DAT_004cfc55 ^ 0x34;
            DAT_004cfc76 = DAT_004cfc56 ^ 0x37;
            DAT_004cfc77 = DAT_004cfc57 ^ 7;
            DAT_004cfc78 = DAT_004cfc58 ^ 0x8e;
            iVar5 = -0x2fa91c29;
          }
        }
        else if (local_17c < 0x7a78e39d) {
          if (local_17c < 0x755931c7) {
            if (local_17c == 0x6fbd76c1) {
              bVar3 = 0xb813bdc9 <
                      ((DAT_004d0010 | DAT_004d0014) * 0x27475b5e ^ 0xb8553ec1) / 0x7fda793f;
              iVar6 = -0x712235fa;
              iVar5 = 0x32a7b814;
              goto LAB_00450080;
            }
            if (local_17c == 0x71936c4b) {
              uVar7 = (DAT_004d0030 + DAT_004d0034) * -0x5e4f552f + 0xbd5d9145U & 0x8361f04a;
              bVar2 = 0xcb3ff5f1 < uVar7;
              bVar3 = uVar7 == 0xcb3ff5f2;
              iVar6 = -0x277204aa;
              iVar5 = 0x2585fe7e;
              goto LAB_00450660;
            }
            if (local_17c != 0x735ed1cc) goto LAB_0044c070;
            iVar5 = 0x4aceaee8;
          }
          else {
            if (local_17c == 0x755931c7) {
              bVar3 = 0x2cd74917 <
                      ((DAT_004cffe0 - DAT_004cffe4) + 0xa2775cf0U & 0x28d85f90) * 0x7c9efb9c;
              iVar5 = 0x77b495b2;
              iVar6 = 0x6d5e6775;
              goto LAB_00450718;
            }
            iVar5 = 0x6d5e6775;
            if (local_17c != 0x77b495b2) {
              if (local_17c != 0x79f4e45e) goto LAB_0044c070;
              DAT_004cfd0b = local_6e ^ 0x29;
              DAT_004cfd0c = DAT_004cfcec ^ 0x5c;
              DAT_004cfd0d = DAT_004cfced ^ 0x1c;
              DAT_004cfd0e = DAT_004cfcee ^ 0x9e;
              DAT_004cfd0f = DAT_004cfcef ^ 0x95;
              DAT_004cfd10 = DAT_004cfcf0 ^ 0x1a;
              DAT_004cfd11 = DAT_004cfcf1 ^ 8;
              DAT_004cfd12 = DAT_004cfcf2 ^ 0x75;
              DAT_004cfd13 = DAT_004cfcf3 ^ 0xd1;
              DAT_004cfd14 = DAT_004cfcf4 ^ 0x9d;
              DAT_004cfd15 = DAT_004cfcf5 ^ 0xbe;
              DAT_004cfd16 = DAT_004cfcf6 ^ 0xf5;
              DAT_004cfd17 = DAT_004cfcf7 ^ 0x3e;
              DAT_004cfd18 = DAT_004cfcf8 ^ 0x6b;
              DAT_004cfd19 = DAT_004cfcf9 ^ 0xc6;
              DAT_004cfd1a = DAT_004cfcfa ^ 0x82;
              DAT_004cfc20 = DAT_004cfc00 ^ 0xe8;
              DAT_004cfc21 = DAT_004cfc01 ^ 0x9a;
              DAT_004cfc22 = DAT_004cfc02 ^ 0xdb;
              DAT_004cfc23 = DAT_004cfc03 ^ 0x2a;
              DAT_004cfc24 = DAT_004cfc04 ^ 0x43;
              DAT_004cfc25 = DAT_004cfc05 ^ 0x55;
              DAT_004cfc26 = DAT_004cfc06 ^ 0x14;
              DAT_004cfc27 = DAT_004cfc07 ^ 0xf8;
              DAT_004cfc28 = DAT_004cfc08 ^ 0x1f;
              DAT_004cfc29 = DAT_004cfc09 ^ 0x83;
              DAT_004cfc2a = DAT_004cfc0a ^ 0x55;
              DAT_004cfc2b = DAT_004cfc0b ^ 0xc1;
              DAT_004cfc2c = DAT_004cfc0c ^ 0x15;
              DAT_004cfc2d = DAT_004cfc0d ^ 0xcf;
              DAT_004cfc2e = DAT_004cfc0e ^ 0x2d;
              DAT_004cfc2f = DAT_004cfc0f ^ 0x98;
              DAT_004cfc30 = DAT_004cfc10 ^ 0xeb;
              DAT_004cfc31 = DAT_004cfc11 ^ 0x51;
              DAT_004cfc32 = DAT_004cfc12 ^ 0xe4;
              DAT_004cfc33 = DAT_004cfc13 ^ 0x6b;
              DAT_004cfc34 = DAT_004cfc14 ^ 0x37;
              DAT_004cfc35 = DAT_004cfc15 ^ 0xd3;
              DAT_004cfcb0 = DAT_004cfc80 ^ 0xd;
              DAT_004cfcb1 = DAT_004cfc81 ^ 0x28;
              DAT_004cfcb2 = DAT_004cfc82 ^ 0xd2;
              DAT_004cfcb3 = DAT_004cfc83 ^ 0xfd;
              DAT_004cfcb4 = DAT_004cfc84 ^ 0x1a;
              DAT_004cfcb5 = DAT_004cfc85 ^ 0xaa;
              DAT_004cfcb6 = DAT_004cfc86 ^ 0x50;
              DAT_004cfcb7 = DAT_004cfc87 ^ 0x8c;
              DAT_004cfcb8 = DAT_004cfc88 ^ 0xc5;
              DAT_004cfcb9 = DAT_004cfc89 ^ 0x86;
              iVar5 = 0x357292b1;
            }
          }
        }
        else {
          if (0x7dcfe3c8 < local_17c) {
            if (local_17c == 0x7dcfe3c9) {
              uVar7 = (uint)((ulong)(DAT_004d01f8 * DAT_004d01fc | 0x5d87161e) * 0x97e6369b >> 0x3f)
                      | 0x702a4504;
              local_140 = PTR_s_contentTextView_0048b590;
              bVar2 = 0xc2720807 < uVar7;
              bVar3 = uVar7 == 0xc2720808;
              iVar5 = 0x7dcfe3c9;
              iVar6 = -0x37ff8a62;
            }
            else {
              if (local_17c == 0x7ed354d0) {
                _class_getInstanceMethod(local_e0,PTR_s_updateNodeStatus_0048c180);
                iVar5 = -0x7ccccbb;
                goto LAB_004507d8;
              }
              if (local_17c != 0x7f1f2783) goto LAB_0044c070;
              uVar7 = (DAT_004d00e8 + DAT_004d00ec ^ 0x5598d33bU) + 0x4865be8 & 0x826de2c8;
              _objc_autorelease(local_c8);
              local_d0 = _class_getInstanceMethod(DAT_004d2298,PTR_s_initWithViewModel__0048c178);
              local_d1 = local_d0 == 0;
              bVar2 = 0x52622569 < uVar7;
              bVar3 = uVar7 == 0x5262256a;
              iVar5 = 0x7f1f2783;
              iVar6 = 0x22feba5f;
            }
            goto LAB_004504c0;
          }
          if (local_17c == 0x7a78e39d) {
            bVar3 = (DAT_004d0268 + DAT_004d026c | 0xe595d069U) == 0x8b075a8a;
            iVar5 = 0x7a78e39d;
            iVar6 = 0x445a5c2c;
            goto LAB_00450424;
          }
          iVar5 = -0x4190ff68;
          if (local_17c != 0x7b62637d) {
            if (local_17c == 0x7cf14388) {
              uVar7 = ((DAT_004d0250 - DAT_004d0254) + 0x46b268a6U & 0x6f68e6b6) + 0xf5da33e1;
              bVar2 = 0x1cf5f328 < uVar7;
              bVar3 = uVar7 == 0x1cf5f329;
              iVar5 = -0x4190ff68;
              iVar6 = 0x7b62637d;
              goto LAB_004504c0;
            }
            goto LAB_0044c070;
          }
        }
        goto LAB_004507d8;
      }
      if (local_17c < 0x5b2800c9) {
        if (0x4b186ebe < local_17c) {
          if (local_17c < 0x506a599a) {
            if (local_17c == 0x4b186ebf) {
              _class_getInstanceMethod(local_118,PTR_s_titleTextView_0048b588);
              iVar5 = 0x506a599a;
            }
            else {
              if (local_17c == 0x4cae5b06) {
                uVar7 = (DAT_004d0210 - DAT_004d0214 | 0x9db0474cU) + 0x5373dc06;
                bVar2 = 0x2c93f439 < uVar7;
                bVar3 = uVar7 == 0x2c93f43a;
                iVar5 = -0xc858e1a;
                iVar6 = -0xe51d920;
                goto LAB_004504c0;
              }
              if (local_17c != 0x4e7e359d) goto LAB_0044c070;
              iVar5 = -0x400c75da;
              if (0x73e2c98c < ((DAT_004d01a0 - DAT_004d01a4) + 0xa79bbebeU & 0x65abd86b)) {
                iVar5 = -0x3b81f16f;
              }
            }
            goto LAB_004507d8;
          }
          if (local_17c == 0x506a599a) {
            uVar7 = DAT_004d01b8 & DAT_004d01bc;
            local_120 = _class_getInstanceMethod(local_118,PTR_s_titleTextView_0048b588);
            bVar3 = uVar7 * -0x2bebbf46 == -0x53ba4551;
            iVar6 = 0x4b186ebf;
            iVar5 = -0x4754ef1e;
            goto LAB_004507d4;
          }
          if (local_17c != 0x545d1e75) {
            if (local_17c == 0x5925221f) {
              bVar3 = 0xc13f9980 <
                      (DAT_004d0220 * DAT_004d0224 & 0x76a63db2U | 0x26841920) / 0x2c5394e;
              iVar5 = 0x5f1cb57d;
              iVar6 = 0x5b2800c9;
              goto LAB_00450718;
            }
            goto LAB_0044c070;
          }
          bVar3 = 0x63c53e76 <
                  ((DAT_004d01b0 & DAT_004d01b4) + 0xa372bdd8 & 0xbb77fbff | 0x3965fb99);
          iVar6 = 0x506a599a;
          iVar5 = 0x4b186ebf;
          goto LAB_00450080;
        }
        if (local_17c < 0x48d97548) {
          if (local_17c != 0x45a2d604) {
            iVar5 = 0x29c423ba;
            iVar6 = 0x47bd73d2;
            goto LAB_0044e3b8;
          }
          iVar6 = DAT_004d0028 + DAT_004d002c;
          local_90 = _method_getImplementation(local_80);
          iVar5 = 0x1af8481b;
          if ((iVar6 + 0x3ff16a25U ^ 0x2d080120 | 0x92f53253) < 0x44698a9e) {
            iVar5 = 0x45a2d604;
          }
          goto LAB_004507d8;
        }
        if (local_17c == 0x48d97548) {
          uVar7 = (DAT_004d0048 | DAT_004d004c) + 0xef7096d4 | 0x5fffbfbf;
          bVar2 = 0x524f7f17 < uVar7;
          bVar3 = uVar7 == 0x524f7f18;
          iVar6 = 0x61a98402;
          iVar5 = 0x21f0f143;
          goto LAB_00450660;
        }
        if (local_17c == 0x49737aea) {
          bVar3 = local_a1 == '\0';
          iVar5 = -0x2e6ea706;
          iVar6 = -0x16bde5ac;
          goto LAB_00450468;
        }
        if (local_17c != 0x4aceaee8) goto LAB_0044c070;
        bVar3 = (DAT_004d0110 * DAT_004d0114 & 0xe913568fU) == 0x84e127ac;
        iVar5 = -0x7ccccbb;
        iVar6 = 0x7ed354d0;
      }
      else {
        if (local_17c < 0x5f1cb57d) {
          if (local_17c < 0x5d2d3a1e) {
            if (local_17c == 0x5b2800c9) {
              DAT_004d2320 = local_158;
              iVar5 = 0x5f1cb57d;
            }
            else {
              if (local_17c != 0x5b930160) {
                if (local_17c == 0x5bbee33d) {
                  uVar7 = ((DAT_004d0168 | DAT_004d016c | 0x1008900) ^ 0x40006000) & 0x6380eb00;
                  local_100 = _class_getInstanceMethod(DAT_004d2298,PTR_s_layoutInternal_0048c118);
                  bVar2 = 0xd347cac0 < uVar7;
                  bVar3 = uVar7 == 0xd347cac1;
                  iVar5 = 0x5bbee33d;
                  iVar6 = -0x66a57661;
                  goto LAB_004504c0;
                }
                goto LAB_0044c070;
              }
              uVar4 = _objc_getClass(&DAT_004cfd00);
              DAT_004d2268 = uVar4;
              DAT_004d2270 = _object_getClass();
              DAT_004d2278 = _class_getSuperclass(uVar4);
              _objc_retain(uVar4);
              _objc_autorelease();
              iVar5 = 0x394701fe;
            }
          }
          else if (local_17c == 0x5d2d3a1e) {
            iVar5 = 0x6917dd56;
          }
          else if (local_17c == 0x5e3cac8b) {
            DAT_004d22f0 = local_b0;
            _method_setImplementation(local_a0,FUN_0045316c);
            iVar5 = 0x6c195caa;
          }
          else {
            if (local_17c != 0x5efdb8ba) goto LAB_0044c070;
            _method_setImplementation(local_d0,FUN_0045be70);
            iVar5 = -0x10100800;
          }
          goto LAB_004507d8;
        }
        if (local_17c < 0x61b00ea5) {
          if (local_17c == 0x5f1cb57d) {
            DAT_004d2320 = local_158;
            bVar3 = 0x84aeabe9 <
                    (DAT_004d0228 + DAT_004d022c & 0xc5a99d11U ^ 0xef805738) + 0xaf45254a;
            iVar6 = 0x5f1cb57d;
            iVar5 = 0x65a59205;
            goto LAB_00450080;
          }
          if (local_17c != 0x5ffd4d9b) {
            iVar5 = 0x48d97548;
            iVar6 = 0x61a98402;
            goto LAB_0044e3b8;
          }
          iVar5 = 0x6de3fb9d;
          goto LAB_004507d8;
        }
        if (local_17c == 0x61b00ea5) {
          iVar5 = DAT_004d00f8 * DAT_004d00fc;
          DAT_004d2300 = _method_getImplementation(local_d0);
          bVar3 = (int)((long)((ulong)(iVar5 + 0xc28be6d6U ^ 0x30062efe) * 0xd891e31f) >> 0x3f) ==
                  0x3cc38ae9;
          iVar6 = -0x20524e35;
          iVar5 = 0x34ea5653;
          goto LAB_004507d4;
        }
        if (local_17c == 0x61b89fd7) {
          uVar7 = 0;
          if (DAT_004d0094 != 0) {
            uVar7 = DAT_004d0090 / DAT_004d0094;
          }
          bVar3 = 0xd92c1fa < (uVar7 & 0x75cd5886 ^ 0xcef9d32a) / 0x3bee0d1e;
          iVar5 = -0xdba0e89;
          iVar6 = -0x192b2184;
          goto LAB_00450718;
        }
        if (local_17c != 0x643738e4) goto LAB_0044c070;
        bVar3 = local_e9 == '\0';
        iVar5 = -0x363148a6;
        iVar6 = -0x5cc9d43d;
      }
LAB_00450468:
      if (bVar3) {
        iVar5 = iVar6;
      }
      goto LAB_004507d8;
    }
    if (0x2585fe7d < local_17c) {
      if (local_17c < 0x37ca69fa) {
        if (local_17c < 0x32a7b814) {
          if (local_17c < 0x29c423ba) {
            if (local_17c == 0x2585fe7e) {
              DAT_004d22e0 = local_90;
              _method_setImplementation(local_80,FUN_004508a8);
              iVar5 = -0x277204aa;
            }
            else {
              if (local_17c != 0x26f14fb4) goto LAB_0044c070;
              _method_getImplementation(local_e8);
              iVar5 = -0x15a327dd;
            }
          }
          else {
            if (local_17c == 0x29c423ba) {
              uVar7 = 0;
              if (DAT_004d019c != 0) {
                uVar7 = DAT_004d0198 / DAT_004d019c;
              }
              bVar3 = ((uVar7 | 0x838c0b95) + 0x736d33fb) / 0x6e206463 < 0x2671320f;
              iVar5 = 0x47bd73d2;
              iVar6 = -0x7ffc2870;
              goto LAB_00450718;
            }
            iVar5 = 0x7dcfe3c9;
            if (local_17c != 0x2e8aba30) {
              if (local_17c != 0x321c92cb) goto LAB_0044c070;
              DAT_004d2328 = local_178;
              _method_setImplementation(local_170,FUN_00464c44);
              iVar5 = 0x7cf14388;
            }
          }
        }
        else if (local_17c < 0x35157192) {
          if (local_17c == 0x32a7b814) {
            iVar5 = DAT_004d0018 * DAT_004d001c;
            DAT_004d2260 = _class_getSuperclass(local_78);
            _objc_retain(local_78);
            _objc_autorelease(local_78);
            local_80 = _class_getInstanceMethod(DAT_004d2250,PTR_s_voiceTimeLength_0048c160);
            local_81 = local_80 == 0;
            bVar3 = iVar5 == -0x78a9c7c7;
            iVar5 = -0x712235fa;
            iVar6 = 0x1b538511;
            goto LAB_00450424;
          }
          if (local_17c == 0x3406936e) {
            iVar5 = -0x74aa2854;
            goto LAB_004507d8;
          }
          if (local_17c != 0x34ea5653) goto LAB_0044c070;
          iVar5 = 0x5efdb8ba;
        }
        else {
          if (local_17c == 0x35157192) {
            bVar3 = ((DAT_004d0200 & DAT_004d0204) + 0x291913ab ^ 0xdca78389) / 0x73444e8c ==
                    0xb92b9ac6;
            iVar5 = 0xbad42d7;
            iVar6 = -0x6ec67a7a;
            goto LAB_00450468;
          }
          if (local_17c != 0x357292b1) {
            if (local_17c == 0x36330cf4) {
              uVar7 = (uint)(DAT_004d0140 * DAT_004d0144) / 0x2a38fbb3 + 0xf4730cdb ^ 0x89b74f0c;
              bVar2 = 0x6e73b4ad < uVar7;
              bVar3 = uVar7 == 0x6e73b4ae;
              iVar6 = -0x5a224249;
              iVar5 = 0x6db7b2b7;
              goto LAB_00450660;
            }
            goto LAB_0044c070;
          }
          DAT_004cfd0b = local_6e ^ 0x29;
          DAT_004cfd0c = DAT_004cfcec ^ 0x5c;
          DAT_004cfd0d = DAT_004cfced ^ 0x1c;
          DAT_004cfd0e = DAT_004cfcee ^ 0x9e;
          DAT_004cfd0f = DAT_004cfcef ^ 0x95;
          DAT_004cfd10 = DAT_004cfcf0 ^ 0x1a;
          DAT_004cfd11 = DAT_004cfcf1 ^ 8;
          DAT_004cfd12 = DAT_004cfcf2 ^ 0x75;
          DAT_004cfd13 = DAT_004cfcf3 ^ 0xd1;
          DAT_004cfd14 = DAT_004cfcf4 ^ 0x9d;
          DAT_004cfd15 = DAT_004cfcf5 ^ 0xbe;
          DAT_004cfd16 = DAT_004cfcf6 ^ 0xf5;
          DAT_004cfd17 = DAT_004cfcf7 ^ 0x3e;
          DAT_004cfd18 = DAT_004cfcf8 ^ 0x6b;
          DAT_004cfd19 = DAT_004cfcf9 ^ 0xc6;
          DAT_004cfd1a = DAT_004cfcfa ^ 0x82;
          DAT_004cfc20 = DAT_004cfc00 ^ 0xe8;
          DAT_004cfc21 = DAT_004cfc01 ^ 0x9a;
          DAT_004cfc22 = DAT_004cfc02 ^ 0xdb;
          DAT_004cfc23 = DAT_004cfc03 ^ 0x2a;
          DAT_004cfc24 = DAT_004cfc04 ^ 0x43;
          DAT_004cfc25 = DAT_004cfc05 ^ 0x55;
          DAT_004cfc26 = DAT_004cfc06 ^ 0x14;
          DAT_004cfc27 = DAT_004cfc07 ^ 0xf8;
          DAT_004cfc28 = DAT_004cfc08 ^ 0x1f;
          DAT_004cfc29 = DAT_004cfc09 ^ 0x83;
          DAT_004cfc2a = DAT_004cfc0a ^ 0x55;
          DAT_004cfc2b = DAT_004cfc0b ^ 0xc1;
          DAT_004cfc2c = DAT_004cfc0c ^ 0x15;
          DAT_004cfc2d = DAT_004cfc0d ^ 0xcf;
          DAT_004cfc2e = DAT_004cfc0e ^ 0x2d;
          DAT_004cfc2f = DAT_004cfc0f ^ 0x98;
          DAT_004cfc30 = DAT_004cfc10 ^ 0xeb;
          DAT_004cfc31 = DAT_004cfc11 ^ 0x51;
          DAT_004cfc32 = DAT_004cfc12 ^ 0xe4;
          DAT_004cfc33 = DAT_004cfc13 ^ 0x6b;
          DAT_004cfc34 = DAT_004cfc14 ^ 0x37;
          DAT_004cfc35 = DAT_004cfc15 ^ 0xd3;
          DAT_004cfcb0 = DAT_004cfc80 ^ 0xd;
          DAT_004cfcb1 = DAT_004cfc81 ^ 0x28;
          DAT_004cfcb2 = DAT_004cfc82 ^ 0xd2;
          DAT_004cfcb3 = DAT_004cfc83 ^ 0xfd;
          DAT_004cfcb4 = DAT_004cfc84 ^ 0x1a;
          DAT_004cfcb5 = DAT_004cfc85 ^ 0xaa;
          DAT_004cfcb6 = DAT_004cfc86 ^ 0x50;
          DAT_004cfcb7 = DAT_004cfc87 ^ 0x8c;
          DAT_004cfcb8 = DAT_004cfc88 ^ 0xc5;
          DAT_004cfcb9 = DAT_004cfc89 ^ 0x86;
          local_6f = DAT_004cfc8a ^ 0x69;
          iVar5 = 0x5ffd4d9b;
          if (DAT_004cfff8 * DAT_004cfffc * 0xe3e66f0 + 0x7d562bbeU < 0xb2f0c78d) {
            iVar5 = 0x357292b1;
          }
        }
      }
      else {
        if (0x40297598 < local_17c) {
          if (local_17c < 0x41ac44d8) {
            if (local_17c == 0x40297599) {
              bVar3 = (uint)((ulong)(DAT_004d0190 ^ DAT_004d0194) * 0x4c1c1681 >> 0x3d) *
                      -0x4face021 == -0x1eed80df;
              iVar5 = 0x47bd73d2;
              iVar6 = 0x29c423ba;
              goto LAB_00450424;
            }
            if (local_17c == 0x403dc6dd) {
              if ((DAT_004d01c0 & DAT_004d01c4) == 0xad6048de) {
                iVar5 = -0x4f7a2d1f;
              }
              goto LAB_004507d8;
            }
            if (local_17c == 0x40e5c5bf) {
              uVar7 = DAT_004d0088 - DAT_004d008c;
              DAT_004d2290 = _class_getSuperclass(local_b8);
              _objc_retain(local_b8);
              _objc_autorelease(local_b8);
              local_c0 = _class_getInstanceMethod(DAT_004d2280,PTR_s_contentTextSize_0048bc60);
              bVar3 = 0x5716cf8 < ((uVar7 ^ 0x39417c26) + 0x5bcc13cd ^ 0xd63996dc);
              iVar5 = 0x40e5c5bf;
              iVar6 = 0x8775926;
              goto LAB_00450718;
            }
          }
          else {
            if (local_17c == 0x41ac44d8) {
              bVar3 = (uint)((ulong)((DAT_004d01e0 - DAT_004d01e4 | 0x160356c5U) * -0xdbef484) *
                             0x55b4bb95 >> 0x3e) == 0x73f825d;
              iVar6 = 0x16222b73;
              iVar5 = -0x27cd6af4;
LAB_0044ed84:
              if (!bVar3) {
                iVar5 = iVar6;
              }
              goto LAB_004507d8;
            }
            if (local_17c == 0x43ba4944) {
              iVar5 = 0x7a78e39d;
              goto LAB_004507d8;
            }
            if (local_17c == 0x445a5c2c) {
              return;
            }
          }
          goto LAB_0044c070;
        }
        if (local_17c < 0x3a337db4) {
          iVar5 = -0x68c6df80;
          if (local_17c == 0x37ca69fa) goto LAB_004507d8;
          if (local_17c == 0x394701fe) {
            uVar7 = ((DAT_004d0058 | DAT_004d005c) ^ 0x10900480) & 0x13910494;
            uVar4 = _objc_getClass(&DAT_004cfd00);
            DAT_004d2268 = uVar4;
            DAT_004d2270 = _object_getClass();
            DAT_004d2278 = _class_getSuperclass(uVar4);
            _objc_retain(uVar4);
            _objc_autorelease();
            local_98 = DAT_004d2268;
            bVar2 = 0x96801b60 < uVar7;
            bVar3 = uVar7 == 0x96801b61;
            iVar5 = 0x5b930160;
            iVar6 = -0x55751c02;
            goto LAB_004504c0;
          }
          if (local_17c != 0x39f4907c) goto LAB_0044c070;
          iVar5 = 0x40297599;
        }
        else {
          if (local_17c == 0x3a337db4) {
            uVar7 = 0;
            if (DAT_004d00c4 != 0) {
              uVar7 = DAT_004d00c0 / DAT_004d00c4;
            }
            uVar7 = uVar7 * 0x45fba53 + 0x8f259d62 ^ 0x1e2b6c75;
            bVar2 = 0xb4fff88e < uVar7;
            bVar3 = uVar7 == 0xb4fff88f;
            iVar6 = -0xe848310;
            iVar5 = -0x479f0a45;
            goto LAB_00450660;
          }
          if (local_17c == 0x3a440a34) {
            uVar7 = 0;
            if (DAT_004d017c != 0) {
              uVar7 = DAT_004d0178 / DAT_004d017c;
            }
            local_101 = local_100 == 0;
            bVar3 = 0x4004bbdf < (uVar7 & 0x53449320) + 0x7a7006d6;
            iVar5 = 0x65dbb779;
            iVar6 = -0x14d4dcfa;
            goto LAB_00450718;
          }
          if (local_17c != 0x4008310a) goto LAB_0044c070;
          iVar5 = 0x6fbd76c1;
        }
      }
      goto LAB_004507d8;
    }
    if (local_17c < 0x13215dda) {
      if (0xbad42d6 < local_17c) {
        if (0xd8e730d < local_17c) {
          if (local_17c == 0xd8e730e) {
            uVar7 = (DAT_004d0240 * DAT_004d0244 ^ 0xc35c37cdU) + 0x5e16f915;
            bVar2 = 0xd98788c1 < uVar7;
            bVar3 = uVar7 == 0xd98788c2;
            iVar6 = -0x3446d194;
            iVar5 = 0x1b67c8fd;
            goto LAB_00450660;
          }
          if (local_17c == 0xfcbfcac) {
            uVar7 = DAT_004d0238 & DAT_004d023c;
            _method_setImplementation(local_148,FUN_0046313c);
            bVar3 = 0xdf527b89 < ((uVar7 ^ 0x4880810) & 0x57be4c78) + 0x2d42b0b9;
            iVar6 = -0x2e478e71;
            iVar5 = 0x37ca69fa;
            goto LAB_00450080;
          }
          if (local_17c == 0x10d74021) {
            iVar5 = -0x570a3414;
            goto LAB_004507d8;
          }
          goto LAB_0044c070;
        }
        if (local_17c == 0xbad42d7) {
          uVar7 = DAT_004d0208 & DAT_004d020c;
          local_148 = _class_getInstanceMethod(local_138,local_140);
          local_149 = local_148 == 0;
          uVar7 = -(int)((long)((ulong)(uVar7 * 0x66aa4bb8) * 0xec62c71b) >> 0x3f);
          bVar2 = 0x4bf40d00 < uVar7;
          bVar3 = uVar7 == 0x4bf40d01;
          iVar5 = 0xbad42d7;
          iVar6 = -0x10362f79;
          goto LAB_004504c0;
        }
        if (local_17c == 0xc4383bb) {
          bVar3 = (DAT_004d0150 - DAT_004d0154 & 0x81625645U | 0x81424601) == 0x4cc6d4fc;
          iVar6 = -0xb1c5ed2;
          iVar5 = -0x59532f3c;
          goto LAB_0044ed84;
        }
        if (local_17c != 0xcb5a4d2) goto LAB_0044c070;
        uVar7 = (DAT_004d0180 + DAT_004d0184) * -0x67c5c72f + 0xa53b0205;
        bVar2 = 0x94b9bbc2 < uVar7;
        bVar3 = uVar7 == 0x94b9bbc3;
        iVar5 = -0x8f1f035;
        iVar6 = -0x4ebb5034;
LAB_004504c0:
        if (!bVar2 || bVar3) {
          iVar5 = iVar6;
        }
        goto LAB_004507d8;
      }
      if (local_17c < 0x4387685) {
        if (local_17c != -0x7ccccbb) {
          if (local_17c == -0x62d7b3f) {
            bVar3 = 0x9627088b <
                    ((DAT_004d0080 ^ DAT_004d0084 ^ 0x6e6c7e81) + 0x28851675 | 0xb9644c77);
            iVar6 = 0x40e5c5bf;
            iVar5 = 0x4387685;
            goto LAB_00450080;
          }
          goto LAB_0044c070;
        }
        uVar7 = (uint)(DAT_004d0118 * DAT_004d011c) / 0x2a906023 + 0x88a96fc3;
        local_e8 = _class_getInstanceMethod(local_e0,PTR_s_updateNodeStatus_0048c180);
        bVar2 = 0x64088fb7 < uVar7;
        bVar3 = uVar7 == 0x64088fb8;
        iVar6 = 0x7ed354d0;
        iVar5 = 0x10d74021;
LAB_00450660:
        if (!bVar2 || bVar3) {
          iVar5 = iVar6;
        }
      }
      else if (local_17c == 0x4387685) {
        DAT_004d2290 = _class_getSuperclass(local_b8);
        _objc_retain(local_b8);
        _objc_autorelease(local_b8);
        _class_getInstanceMethod(DAT_004d2280,PTR_s_contentTextSize_0048bc60);
        iVar5 = 0x40e5c5bf;
      }
      else if (local_17c == 0x7e57f6c) {
        iVar5 = -0x3f41c452;
      }
      else {
        if (local_17c != 0x8775926) goto LAB_0044c070;
        iVar5 = -0x102a0fa2;
      }
      goto LAB_004507d8;
    }
    if (0x1b67c8fc < local_17c) {
      if (local_17c < 0x2233cf11) {
        if (local_17c == 0x1b67c8fd) {
          DAT_004d22d8 = _class_getSuperclass(local_160);
          _objc_retain(local_160);
          _objc_autorelease(local_160);
          iVar5 = -0x3446d194;
        }
        else {
          if (local_17c != 0x1b7b121c) {
            iVar5 = -0xc7c4021;
            iVar6 = 0x21f0f143;
            goto LAB_0044e3b8;
          }
          iVar5 = 0x6ae45428;
        }
      }
      else if (local_17c == 0x2233cf11) {
        DAT_004cfd80 = DAT_004cfd60 ^ 0x88;
        DAT_004cfd81 = DAT_004cfd61 ^ 0x3e;
        DAT_004cfd82 = DAT_004cfd62 ^ 0xc1;
        DAT_004cfd83 = DAT_004cfd63 ^ 0x66;
        DAT_004cfd84 = DAT_004cfd64 ^ 0xf5;
        DAT_004cfd85 = DAT_004cfd65 ^ 0xc3;
        DAT_004cfd86 = DAT_004cfd66 ^ 0xad;
        DAT_004cfd87 = DAT_004cfd67 ^ 0x51;
        DAT_004cfd88 = DAT_004cfd68 ^ 0xa8;
        DAT_004cfd89 = DAT_004cfd69 ^ 0x75;
        DAT_004cfd8a = DAT_004cfd6a ^ 0x48;
        DAT_004cfd8b = DAT_004cfd6b ^ 0xce;
        DAT_004cfd8c = DAT_004cfd6c ^ 0xd1;
        DAT_004cfd8d = DAT_004cfd6d ^ 0x53;
        DAT_004cfd8e = DAT_004cfd6e ^ 0x9c;
        DAT_004cfd8f = DAT_004cfd6f ^ 0xfa;
        DAT_004cfd90 = DAT_004cfd70 ^ 6;
        DAT_004cfd91 = DAT_004cfd71 ^ 0x52;
        DAT_004cfd92 = DAT_004cfd72 ^ 0x5b;
        DAT_004cfd93 = DAT_004cfd73 ^ 0x60;
        DAT_004cfd94 = DAT_004cfd74 ^ 0x1a;
        DAT_004cfd95 = DAT_004cfd75 ^ 0x83;
        DAT_004cfd40 = DAT_004cfd20 ^ 4;
        DAT_004cfd41 = DAT_004cfd21 ^ 0xbb;
        DAT_004cfd42 = DAT_004cfd22 ^ 0x95;
        DAT_004cfd43 = DAT_004cfd23 ^ 0xe;
        DAT_004cfd44 = DAT_004cfd24 ^ 0xd3;
        DAT_004cfd45 = DAT_004cfd25 ^ 0xd9;
        DAT_004cfd46 = DAT_004cfd26 ^ 0x13;
        DAT_004cfd47 = DAT_004cfd27 ^ 0x3f;
        DAT_004cfd48 = DAT_004cfd28 ^ 0xb;
        DAT_004cfd49 = DAT_004cfd29 ^ 0x2a;
        DAT_004cfd4a = DAT_004cfd2a ^ 0x7e;
        DAT_004cfd4b = DAT_004cfd2b ^ 0xc2;
        DAT_004cfd4c = DAT_004cfd2c ^ 0x51;
        DAT_004cfd4d = DAT_004cfd2d ^ 0xe1;
        DAT_004cfd4e = DAT_004cfd2e ^ 0x27;
        DAT_004cfd4f = DAT_004cfd2f ^ 0xc4;
        DAT_004cfd50 = DAT_004cfd30 ^ 0x53;
        DAT_004cfd51 = DAT_004cfd31 ^ 0x67;
        DAT_004cfd52 = DAT_004cfd32 ^ 0xaa;
        DAT_004cfd53 = DAT_004cfd33 ^ 0x3d;
        DAT_004cfd54 = DAT_004cfd34 ^ 0xd7;
        DAT_004cfd00 = DAT_004cfce0 ^ 0x10;
        DAT_004cfd01 = DAT_004cfce1 ^ 0xc6;
        DAT_004cfd02 = DAT_004cfce2 ^ 0x42;
        DAT_004cfd03 = DAT_004cfce3 ^ 0x84;
        DAT_004cfd04 = DAT_004cfce4 ^ 0x57;
        DAT_004cfd05 = DAT_004cfce5 ^ 0xcd;
        DAT_004cfd06 = DAT_004cfce6 ^ 0x35;
        DAT_004cfd07 = DAT_004cfce7;
        DAT_004cfd08 = DAT_004cfce8 ^ 0x54;
        DAT_004cfd09 = DAT_004cfce9 ^ 0x51;
        DAT_004cfd0a = DAT_004cfcea ^ 0xf0;
        local_6e = DAT_004cfceb;
        iVar5 = -0x12489b60;
      }
      else {
        if (local_17c == 0x22feba5f) {
          bVar3 = local_d1 == '\0';
          iVar5 = -0x1df19bfb;
          iVar6 = -0x1141d6e6;
          goto LAB_00450468;
        }
        if (local_17c != 0x254a6c11) goto LAB_0044c070;
        _method_getImplementation(local_120);
        iVar5 = -0x77d6f6ce;
      }
      goto LAB_004507d8;
    }
    if (0x16222b72 < local_17c) {
      if (local_17c == 0x16222b73) {
        uVar7 = DAT_004d01e8 * DAT_004d01ec;
        _method_setImplementation(local_120,FUN_00461734);
        bVar3 = 0xfba4da23 < (uVar7 | 0x3c4da873) * 0x6d8e3edc;
        iVar6 = 0x16222b73;
        iVar5 = -0x4ccbe7ac;
        goto LAB_00450080;
      }
      if (local_17c == 0x1af8481b) {
        iVar5 = 0x71936c4b;
      }
      else {
        if (local_17c != 0x1b538511) goto LAB_0044c070;
        iVar5 = -0xd1d40af;
      }
      goto LAB_004507d8;
    }
    if (local_17c == 0x13215dda) {
      iVar5 = -0x592b3e8b;
      goto LAB_004507d8;
    }
    if (local_17c == 0x13ddc9db) {
      bVar3 = 0x298c5398 < ((DAT_004d0230 - DAT_004d0234) + 0x51c5d9ccU & 0x999315e3 ^ 0xa4ce7cfe);
      iVar5 = -0x2e478e71;
      iVar6 = 0xfcbfcac;
      goto LAB_00450718;
    }
    if (local_17c != 0x15e4079e) goto LAB_0044c070;
    bVar3 = 0x84a0fab4 < ((DAT_004d0170 + DAT_004d0174 | 0x501c7769U) ^ 0x8d1d0952) + 0x6f027bf0;
    iVar5 = 0x65dbb779;
    iVar6 = 0x3a440a34;
  }
LAB_00450718:
  if (bVar3) {
    iVar5 = iVar6;
  }
LAB_004507d8:
  local_17c = iVar5;
  goto LAB_0044c070;
}



// #####################################
// ##### FUN_0045e3d4 @ 0045e3d4
// #####################################

void FUN_0045e3d4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  char local_a9;
  long local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  char local_79;
  undefined8 local_78;
  undefined *local_70;
  char local_61;
  
  _objc_retain();
  local_dc = 0x7fac0a9a;
LAB_0045e460:
  if (local_dc < 0xb147714) {
    if (local_dc < -0x3badf1e7) {
      if (-0x60d89d49 < local_dc) {
        if (-0x513acbb4 < local_dc) {
          if (local_dc < -0x4df8e3b4) {
            if (local_dc == -0x513acbb3) {
              local_dc = -0x6cc32ef7;
            }
            else if (local_dc == -0x50567be8) {
              local_dc = -0x3badf1e7;
            }
          }
          else if (local_dc == -0x4df8e3b4) {
            local_dc = 0x6825ddf2;
          }
          else if (local_dc == -0x49272a5e) {
LAB_0045f1bc:
            local_dc = -0x339ef3be;
          }
          else if (local_dc == -0x429c9983) {
            local_dc = 0x61844947;
            goto LAB_0045f760;
          }
          goto LAB_0045e460;
        }
        if (-0x589154e8 < local_dc) {
          if (local_dc == -0x589154e7) {
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
            _objc_retainAutoreleasedReturnValue();
            local_dc = -0x2fc8a8d2;
          }
          else if (local_dc == -0x57c4655b) {
            uVar5 = 0;
            if (DAT_004d0aec != 0) {
              uVar5 = DAT_004d0ae8 / DAT_004d0aec;
            }
            uVar5 = uVar5 * -0x7ea983d2 + 0x535cf81d & 0x7b546f8b;
            local_79 = _objc_msgSend(local_78,PTR_s_enabled_0048a890);
            bVar2 = 0x2bfbcb53 < uVar5;
            bVar1 = uVar5 == 0x2bfbcb54;
            iVar3 = -0x57c4655b;
            local_dc = 0x77b841cd;
            goto LAB_0045f728;
          }
          goto LAB_0045e460;
        }
        if (local_dc == -0x60d89d48) {
          iVar3 = DAT_004d0b88 + DAT_004d0b8c;
          _objc_msgSend(local_c8,PTR_s_applyMessageTime__0048bc28,param_1);
          local_dc = 0x18224c12;
          if (0xd1fe425a < (iVar3 * 0x64f3b16c | 0x256ec79aU) + 0xe1e30fc4) {
            local_dc = -0x60d89d48;
          }
          goto LAB_0045e460;
        }
        if (local_dc != -0x5c0f7470) goto LAB_0045e460;
        uVar5 = DAT_004d0b08 | DAT_004d0b0c;
        _objc_msgSend(local_88,local_70);
        local_90 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_90,PTR_s_currentBubble_0048a848);
        local_98 = _objc_retainAutoreleasedReturnValue();
        bVar1 = (uVar5 | 0xb2d9884e) * 0x584480f9 == -0x2197f99f;
        iVar3 = -0x5c0f7470;
        local_dc = 0x3735e9a2;
        goto LAB_0045f438;
      }
      if (-0x6cc32ef8 < local_dc) {
        if (local_dc < -0x67ed66ca) {
          if (local_dc == -0x6cc32ef7) {
            bVar1 = 0x4a25f36e <
                    (uint)((ulong)((DAT_004d0b00 + DAT_004d0b04 | 0x9bd773dcU) >> 2) * 0x2597cd4f >>
                          0x3b);
            local_dc = -0x5c0f7470;
            iVar3 = -0xf40ee5c;
            goto LAB_0045f8d0;
          }
          if (local_dc == -0x6c08c763) {
            _objc_release(local_a8);
            local_dc = -0x7452c197;
          }
        }
        else if (local_dc == -0x67ed66ca) {
          _objc_release(local_98);
          local_dc = -0x7e5f3cc7;
        }
        else if (local_dc == -0x61b9b529) {
          local_dc = -0x2265e3cc;
          if ((DAT_004d0ae0 | DAT_004d0ae4) * -0x4f0a6bd2 != 0x3c7cda90) {
            local_dc = -0x57c4655b;
          }
        }
        goto LAB_0045e460;
      }
      if (local_dc < -0x6f272739) {
        if (local_dc == -0x7e5f3cc7) {
          local_dc = 0x7f961d7a;
          if (0x5179554f < ((DAT_004d0b40 | DAT_004d0b44 | 0x36c9d9d5) + 0x3072830c ^ 0xef551d1)) {
            local_dc = -0x2b7cdde1;
          }
        }
        else {
          iVar3 = -0x7452c197;
LAB_0045ebc8:
          if (local_dc == iVar3) {
            local_dc = 0x50c34213;
          }
        }
        goto LAB_0045e460;
      }
      if (local_dc != -0x6f272739) {
        if (local_dc == -0x6ee8c605) {
          _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_dc = 0xb147714;
        }
        goto LAB_0045e460;
      }
      bVar1 = local_99 == '\0';
      local_dc = -0x36774ca4;
      iVar3 = 0x3702bc49;
    }
    else {
      if (local_dc < -0x2265e3cc) {
        if (local_dc < -0x2f177f19) {
          if (local_dc < -0x339ef3be) {
            if (local_dc == -0x3badf1e7) {
              local_dc = 0xefd8ec2;
              if ((DAT_004d0b80 * DAT_004d0b84 ^ 0x9ed1ccf1U) * 0x1e24e625 != 0x9d71ea0) {
                local_dc = -0x60d89d48;
              }
            }
            else if (local_dc == -0x36774ca4) {
              _objc_release(local_98);
              local_dc = 0x56823c6a;
            }
            goto LAB_0045e460;
          }
          if (local_dc != -0x339ef3be) {
            if (local_dc == -0x2fc8a8d2) {
              uVar5 = DAT_004d0ad8 | DAT_004d0adc;
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
              local_78 = _objc_retainAutoreleasedReturnValue();
              local_dc = 0x2aa26f95;
              if (0xa5511017 < (uVar5 & 0x6fb1c8b) + 0x1e2556dd) {
                local_dc = -0x2fc8a8d2;
              }
            }
            goto LAB_0045e460;
          }
          bVar1 = (DAT_004d0b98 * DAT_004d0b9c + 0xd43c88f5U | 0xbdb44919) * 0x1bfa1249 ==
                  0x18959500;
          local_dc = -0x49272a5e;
          iVar3 = -0x429c9983;
        }
        else {
          if (local_dc < -0x2ac92037) {
            if (local_dc == -0x2f177f19) {
              local_dc = 0x241db26d;
              if (local_79 == '\0') {
                local_dc = 0x61844947;
              }
LAB_0045f5d4:
              local_d0 = local_78;
            }
            else if (local_dc == -0x2b7cdde1) {
              _objc_release(local_78);
              local_dc = 0x7f961d7a;
            }
            goto LAB_0045e460;
          }
          if (local_dc == -0x2ac92037) {
            local_c0 = PTR_s_enabledMsgTime_0048ad10;
            local_dc = -0xb22b6df;
            if ((uint)((ulong)((uint)((ulong)(DAT_004d0b68 ^ DAT_004d0b6c) * 0x60a2d30f >> 0x3e) *
                              0x206f43f5) * 0x2b84d41b >> 0x3b) < 0xc46c0e2f) {
              local_dc = 0x56fe301c;
            }
            goto LAB_0045e460;
          }
          if (local_dc == -0x26ff6454) {
            DAT_004d22e8 = '\x01';
            bVar1 = ((DAT_004d0b38 ^ DAT_004d0b3c) & 0x6c414831) == 0x1f554609;
            local_dc = 0x490c0293;
            iVar3 = 0xd4284ab;
          }
          else {
            if (local_dc != -0x229d4e28) goto LAB_0045e460;
            local_c8 = PTR_BubbleBoxUI_0048ca90;
            bVar1 = ((DAT_004d0b78 ^ DAT_004d0b7c) + 0x7418481f & 0xb56e85cc) == 0xd48f238a;
            local_dc = -0x229d4e28;
            iVar3 = -0x50567be8;
          }
        }
        if (!bVar1) {
          local_dc = iVar3;
        }
        goto LAB_0045e460;
      }
      if (-0xb22b6e0 < local_dc) {
        if (local_dc < -0x43a2420) {
          if (local_dc == -0xb22b6df) {
            local_dc = -0x2ac92037;
          }
          else if (local_dc == -0x91d6253) {
            uVar5 = (DAT_004d0ba8 * DAT_004d0bac + 0xab97d4b2U | 0x3f003f0) & 0xc090572c;
            _objc_release(local_d8);
            _objc_release(param_1);
            bVar2 = 0x3dced1b2 < uVar5;
            bVar1 = uVar5 == 0x3dced1b3;
            iVar3 = -0x91d6253;
            local_dc = 0x649dea0f;
            goto LAB_0045f728;
          }
          goto LAB_0045e460;
        }
        if (local_dc == -0x43a2420) {
          (*DAT_004d2308)(param_1,PTR_s_updateNodeStatus_0048c180);
          local_dc = 0x52fd79ed;
          goto LAB_0045e460;
        }
        if (local_dc == -0x42dd65a) {
          local_dc = 0x5fd4993c;
          goto LAB_0045e460;
        }
        if (local_dc != -0x2064c38) goto LAB_0045e460;
        uVar5 = ((DAT_004d0b18 | DAT_004d0b1c) ^ 0x75eb73e1) * 0x3df11945 + 0x93521f90;
        _objc_release(local_90);
        local_99 = local_98 == 0;
        bVar2 = 0x8fa316a7 < uVar5;
        bVar1 = uVar5 == 0x8fa316a8;
        iVar3 = -0x2064c38;
        local_dc = -0x6f272739;
        goto LAB_0045f728;
      }
      if (-0x142bd26e < local_dc) {
        if (local_dc == -0x142bd26d) goto LAB_0045f1bc;
        if (local_dc == -0xf40ee5c) {
          _objc_msgSend(local_88,local_70);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,PTR_s_currentBubble_0048a848);
          _objc_retainAutoreleasedReturnValue();
          local_dc = -0x5c0f7470;
        }
        goto LAB_0045e460;
      }
      if (local_dc == -0x2265e3cc) {
        _objc_msgSend(local_78,PTR_s_enabled_0048a890);
        local_dc = -0x57c4655b;
        goto LAB_0045e460;
      }
      if (local_dc != -0x20a5c8a5) goto LAB_0045e460;
      bVar1 = local_a9 == '\0';
      local_dc = -0x36774ca4;
      iVar3 = 0x582bb935;
    }
LAB_0045f8f0:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x56823c6a) {
    if (local_dc < 0x30ee1525) {
      if (local_dc < 0x18224c12) {
        if (0xd4284aa < local_dc) {
          if (local_dc == 0xd4284ab) {
            local_dc = -0x67ed66ca;
          }
          else if (local_dc == 0xefd8ec2) {
            _objc_msgSend(local_c8,PTR_s_applyMessageTime__0048bc28,param_1);
            local_dc = -0x60d89d48;
          }
          goto LAB_0045e460;
        }
        if (local_dc != 0xb147714) {
          if (local_dc == 0xc189b66) {
            local_dc = 0x30ee1525;
          }
          goto LAB_0045e460;
        }
        uVar5 = DAT_004d0b58 | DAT_004d0b5c;
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
        local_b8 = _objc_retainAutoreleasedReturnValue();
        bVar1 = 0x954148b1 < (uVar5 + 0xd63f054c ^ 0x7030e90a);
        local_dc = -0x6ee8c605;
        iVar3 = 0x487e440a;
      }
      else if (local_dc < 0x25d9d151) {
        if (local_dc == 0x18224c12) {
          local_dc = -0x142bd26d;
          goto LAB_0045e460;
        }
        if (local_dc != 0x241db26d) goto LAB_0045e460;
        bVar1 = 0x7ba65651 < ((DAT_004d0af0 & DAT_004d0af4 | 0xff7fffff) & 0x5fb2effd);
        local_dc = 0x6ab57092;
        iVar3 = 0x314d8eb8;
      }
      else {
        if (local_dc != 0x25d9d151) {
          if (local_dc == 0x25dca963) goto LAB_0045f51c;
          if (local_dc == 0x2aa26f95) {
            local_dc = -0x61b9b529;
          }
          goto LAB_0045e460;
        }
        bVar1 = 0x361fe4b < (DAT_004d0b60 | DAT_004d0b64 | 0x127c42d6) * 0x5400f245;
        local_dc = -0xb22b6df;
        iVar3 = -0x2ac92037;
      }
    }
    else if (local_dc < 0x3735e9a2) {
      if (0x31ad53d4 < local_dc) {
        if (local_dc == 0x31ad53d5) {
          uVar5 = (uint)((ulong)((DAT_004d0b70 + DAT_004d0b74 ^ 0x1565d0c3U) + 0x8e0d4286) *
                         0x3c192497 >> 0x3d);
          bVar2 = 0x94efcf16 < uVar5;
          bVar1 = uVar5 == 0x94efcf17;
          iVar3 = -0x229d4e28;
          local_dc = 0x6041f81f;
          goto LAB_0045f728;
        }
        if (local_dc == 0x3702bc49) {
          _objc_msgSend(local_98,PTR_s_name_0048a060);
          local_a8 = _objc_retainAutoreleasedReturnValue();
          local_a9 = local_a8 == 0;
          local_dc = -0x6c08c763;
        }
        goto LAB_0045e460;
      }
      if (local_dc != 0x30ee1525) {
        if (local_dc == 0x314d8eb8) {
          local_dc = 0x6ab57092;
        }
        goto LAB_0045e460;
      }
      uVar5 = 0;
      if (DAT_004d0ac4 != 0) {
        uVar5 = DAT_004d0ac0 / DAT_004d0ac4;
      }
      bVar1 = 0x78f4f356 < (uint)((ulong)(uVar5 + 0x22cf8e94) * 0x687b29e9 >> 0x3e);
      local_dc = 0x5fd4993c;
      iVar3 = -0x42dd65a;
    }
    else {
      if (local_dc < 0x490c0293) {
        if (local_dc == 0x3735e9a2) {
          local_dc = 0x25dca963;
        }
        else if (local_dc == 0x487e440a) {
          local_dc = 0x25d9d151;
        }
        goto LAB_0045e460;
      }
      if (local_dc == 0x490c0293) {
        DAT_004d22e8 = '\x01';
        goto LAB_0045f59c;
      }
      if (local_dc == 0x50c34213) {
        uVar5 = 0;
        if (DAT_004d0b2c != 0) {
          uVar5 = DAT_004d0b28 / DAT_004d0b2c;
        }
        bVar1 = (uVar5 & 0x234b418) == 0xa20e0d;
        iVar3 = 0x7265311f;
        local_dc = -0x20a5c8a5;
        goto LAB_0045f438;
      }
      if (local_dc != 0x52fd79ed) goto LAB_0045e460;
      uVar5 = DAT_004d0ab8 | DAT_004d0abc;
      (*DAT_004d2308)(param_1,PTR_s_updateNodeStatus_0048c180);
      bVar1 = 0x45bc1736 < ((uVar5 | 0x74950cfb) ^ 0xabeea7c);
      local_dc = -0x43a2420;
      iVar3 = 0xc189b66;
    }
LAB_0045f8d0:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x6825ddf2) {
    if (local_dc < 0x6041f81f) {
      if (local_dc < 0x582bb935) {
        if (local_dc == 0x56823c6a) {
          local_dc = 0x61844947;
          goto LAB_0045f5d4;
        }
        if (local_dc == 0x56fe301c) {
          local_dc = 0x6760b193;
        }
      }
      else if (local_dc == 0x582bb935) {
LAB_0045f59c:
        local_dc = -0x26ff6454;
      }
      else if (local_dc == 0x5fd4993c) {
        uVar5 = (DAT_004d0ac8 * DAT_004d0acc & 0x39235650U ^ 0x25c6ce32) + 0xba1f2133;
        local_61 = DAT_004d22e8;
        local_70 = PTR_s_shared_00489458;
        bVar2 = 0x23b3bba3 < uVar5;
        bVar1 = uVar5 == 0x23b3bba4;
        iVar3 = 0x5fd4993c;
        local_dc = 0x67c91917;
        goto LAB_0045f728;
      }
    }
    else if (local_dc < 0x649dea0f) {
      if (local_dc == 0x6041f81f) {
        local_dc = -0x229d4e28;
      }
      else if (local_dc == 0x61844947) {
        local_d8 = local_d0;
        bVar1 = 0xe9a26d3b <
                (uint)((ulong)((DAT_004d0ba0 - DAT_004d0ba4 | 0xd2ecfd00U) + 0xe4c21dd0) *
                       0x7d042e71 >> 0x3e);
        local_dc = -0x91d6253;
        iVar3 = 0x7c9a2b75;
        goto LAB_0045f8d0;
      }
    }
    else if (local_dc == 0x6760b193) {
      iVar3 = _objc_msgSend(local_b8,local_c0);
      local_dc = 0x31ad53d5;
      if (iVar3 == 0) {
        local_dc = 0x61844947;
      }
LAB_0045f760:
      local_d0 = local_b8;
    }
    else {
      if (local_dc == 0x67c91917) {
        bVar1 = local_61 == '\0';
        local_dc = 0x6825ddf2;
        iVar3 = 0x7225f260;
        goto LAB_0045f8f0;
      }
      if (local_dc == 0x649dea0f) {
        return;
      }
    }
    goto LAB_0045e460;
  }
  if (0x76fbaa3d < local_dc) {
    if (local_dc < 0x7c9a2b75) {
      if (local_dc == 0x76fbaa3e) {
        _objc_release(local_90);
LAB_0045f51c:
        local_dc = -0x2064c38;
      }
      else if (local_dc == 0x77b841cd) {
        local_dc = -0x2f177f19;
      }
    }
    else if (local_dc == 0x7c9a2b75) {
      _objc_release(local_d8);
      _objc_release(param_1);
      local_dc = -0x91d6253;
    }
    else if (local_dc == 0x7f961d7a) {
      iVar3 = DAT_004d0b48 + DAT_004d0b4c;
      _objc_release(local_78);
      local_dc = 0x7f961d7a;
      if ((iVar3 * 0x3a545bca + 0x4cbdd871U ^ 0x46984c37) < 0xc874f686) {
        local_dc = -0x4df8e3b4;
      }
    }
    else if (local_dc == 0x7fac0a9a) {
      uVar5 = 0;
      if (DAT_004d0ab4 != 0) {
        uVar5 = DAT_004d0ab0 / DAT_004d0ab4;
      }
      bVar1 = 0x6ce0700 < (uVar5 + 0xa96eba98 ^ 0x310502d3);
      local_dc = -0x43a2420;
      iVar3 = 0x52fd79ed;
      goto LAB_0045f8d0;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x7225f260) {
    if (local_dc != 0x6825ddf2) {
      if (local_dc == 0x6ab57092) {
        local_88 = PTR_BubbleBoxMgr_0048c9a8;
        bVar1 = (DAT_004d0af8 & DAT_004d0afc & 0x52cfeaea) == 0xcd850cc9;
        iVar3 = 0x6ab57092;
        local_dc = -0x513acbb3;
        goto LAB_0045f438;
      }
      goto LAB_0045e460;
    }
    bVar1 = DAT_004d0b50 * DAT_004d0b54 * 0x8c77719 == -0x340da5a3;
    iVar3 = -0x6ee8c605;
    local_dc = 0xb147714;
LAB_0045f438:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc != 0x7225f260) {
    iVar3 = 0x7265311f;
    goto LAB_0045ebc8;
  }
  uVar5 = (DAT_004d0ad0 & DAT_004d0ad4 ^ 0x2324e8c8) * -0x5b3ce53e + 0x90c2ad3c;
  bVar2 = 0x67ab828c < uVar5;
  bVar1 = uVar5 == 0x67ab828d;
  iVar3 = -0x2fc8a8d2;
  local_dc = -0x589154e7;
LAB_0045f728:
  if (!bVar2 || bVar1) {
    local_dc = iVar3;
  }
  goto LAB_0045e460;
}

