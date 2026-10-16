
// ===================== @interface BubbleBoxMgr : 30 methods =====================

// ----- -[BubbleBoxMgr init] @ 00222e88 -----

/* WARNING: Removing unreachable block (ram,0x002245f0) */
/* WARNING: Removing unreachable block (ram,0x002255d0) */
/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::init(ID param_1,SEL param_2)

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
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 *puVar84;
  bool bVar85;
  bool bVar86;
  undefined8 uVar87;
  undefined8 extraout_x1;
  SEL extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  SEL extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  SEL extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  SEL extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  SEL extraout_x1_28;
  uint uVar88;
  int iVar89;
  int iVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  ID local_150 [2];
  undefined1 auStack_140 [8];
  ID local_138;
  int *local_130;
  int local_124;
  undefined8 local_120;
  char local_111;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  undefined8 local_f8;
  char local_e9;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  char local_c9;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  ID local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  uint local_6c;
  
  puVar84 = auStack_140;
  local_6c = (DAT_004b1520 ^ DAT_004b1524 ^ 0x322ac78a) + 0x5d50ab0e ^ 0x781d7556;
  local_130 = &local_124;
  local_124 = 0x77fd8f81;
  local_138 = param_1;
LAB_00222f88:
  auVar97._8_8_ = param_2;
  auVar97._0_8_ = local_e8;
  auVar83._8_8_ = param_2;
  auVar83._0_8_ = local_e8;
  auVar82._8_8_ = param_2;
  auVar82._0_8_ = local_e8;
  auVar81._8_8_ = param_2;
  auVar81._0_8_ = local_e8;
  auVar96._8_8_ = param_2;
  auVar96._0_8_ = local_80;
  auVar95._8_8_ = param_2;
  auVar95._0_8_ = local_90;
  auVar80._8_8_ = param_2;
  auVar80._0_8_ = local_90;
  auVar79._8_8_ = param_2;
  auVar79._0_8_ = local_90;
  auVar78._8_8_ = param_2;
  auVar78._0_8_ = local_90;
  auVar94._8_8_ = param_2;
  auVar94._0_8_ = local_f8;
  auVar77._8_8_ = param_2;
  auVar77._0_8_ = local_f8;
  auVar76._8_8_ = param_2;
  auVar76._0_8_ = local_f8;
  auVar75._8_8_ = param_2;
  auVar75._0_8_ = local_f8;
  auVar74._8_8_ = param_2;
  auVar74._0_8_ = local_f8;
  auVar70._8_8_ = param_2;
  auVar70._0_8_ = local_120;
  auVar69._8_8_ = param_2;
  auVar69._0_8_ = local_120;
  auVar68._8_8_ = param_2;
  auVar68._0_8_ = local_120;
  auVar63._8_8_ = param_2;
  auVar63._0_8_ = local_120;
  auVar62._8_8_ = param_2;
  auVar62._0_8_ = local_120;
  auVar61._8_8_ = param_2;
  auVar61._0_8_ = local_120;
  auVar60._8_8_ = param_2;
  auVar60._0_8_ = local_120;
  auVar59._8_8_ = param_2;
  auVar59._0_8_ = local_120;
  auVar58._8_8_ = param_2;
  auVar58._0_8_ = local_120;
  auVar56._8_8_ = param_2;
  auVar56._0_8_ = local_120;
  auVar55._8_8_ = param_2;
  auVar55._0_8_ = local_120;
  auVar54._8_8_ = param_2;
  auVar54._0_8_ = local_120;
  auVar53._8_8_ = param_2;
  auVar53._0_8_ = local_120;
  auVar51._8_8_ = param_2;
  auVar51._0_8_ = local_120;
  auVar50._8_8_ = param_2;
  auVar50._0_8_ = local_120;
  auVar49._8_8_ = param_2;
  auVar49._0_8_ = local_120;
  auVar48._8_8_ = param_2;
  auVar48._0_8_ = local_120;
  auVar47._8_8_ = param_2;
  auVar47._0_8_ = local_120;
  auVar46._8_8_ = param_2;
  auVar46._0_8_ = local_120;
  auVar93._8_8_ = param_2;
  auVar93._0_8_ = local_120;
  auVar44._8_8_ = param_2;
  auVar44._0_8_ = local_120;
  auVar43._8_8_ = param_2;
  auVar43._0_8_ = local_120;
  auVar42._8_8_ = param_2;
  auVar42._0_8_ = local_120;
  auVar41._8_8_ = param_2;
  auVar41._0_8_ = local_120;
  auVar40._8_8_ = param_2;
  auVar40._0_8_ = local_120;
  auVar39._8_8_ = param_2;
  auVar39._0_8_ = local_120;
  auVar38._8_8_ = param_2;
  auVar38._0_8_ = local_120;
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = local_120;
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = local_120;
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = local_120;
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = local_120;
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = local_120;
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = local_120;
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = local_120;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = local_120;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_120;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = local_120;
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = local_120;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = local_120;
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = local_120;
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = local_120;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_120;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = local_120;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_120;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_120;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_120;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_120;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_120;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_120;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_120;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_120;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_120;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_120;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_120;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_120;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_120;
  auVar92._8_8_ = param_2;
  auVar92._0_8_ = local_88;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_88;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_88;
  auVar91._8_8_ = param_2;
  auVar91._0_8_ = local_b0;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_b0;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_b0;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_b0;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_b0;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_b0;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = local_b0;
  if (local_124 < 0x6099cc) {
    if (-0x4c334bca < local_124) {
      if (local_124 < -0x188bbb0e) {
        if (local_124 < -0x3d4f7be1) {
          if (local_124 < -0x43d8d753) {
            if (local_124 < -0x4b2ec5b0) {
              if (local_124 != -0x4c334bc9) {
                if (local_124 == -0x4bfb2298) {
                  bVar85 = DAT_004b1690 * DAT_004b1694 * -0x71225951 == 0x51118add;
                  iVar90 = -0x9c7299d;
                  iVar89 = 0x4ca94156;
                  goto LAB_00225f4c;
                }
                goto LAB_00222f88;
              }
              iVar89 = -0x7e91adf3;
              auVar93 = auVar24;
            }
            else if (local_124 == -0x4b2ec5b0) {
              iVar89 = 0x5509a475;
              auVar93 = auVar26;
            }
            else {
              if (local_124 != -0x45052d33) goto LAB_00222f88;
              iVar89 = -0x6b1e95cf;
              auVar93 = auVar25;
            }
          }
          else {
            if (local_124 < -0x413bd140) {
              if (local_124 == -0x43d8d753) {
                bVar85 = (DAT_004b16f0 - DAT_004b16f4 | 0x43ddfe38U) == 0x4669a260;
                iVar89 = 0x5b2f3c;
                iVar90 = 0x9d9ec3c;
                goto LAB_00225f6c;
              }
              iVar89 = -0x6195bc49;
              iVar90 = -0x437f7f8c;
              goto LAB_002240e4;
            }
            if (local_124 == -0x413bd140) {
              _objc_msgSend(local_80,local_e0);
              _objc_retainAutoreleasedReturnValue();
              auVar93._8_8_ = extraout_x1_16;
              auVar93._0_8_ = local_120;
              iVar89 = 0x6276254b;
            }
            else {
              if (local_124 != -0x3dbdab69) goto LAB_00222f88;
              iVar89 = -0x1ea0e257;
              auVar93 = auVar55;
              if (((DAT_004b16a0 - DAT_004b16a4) + 0x1b67699bU | 0x8d76b64d) * -0x231fadd3 !=
                  -0x476b0f14) {
                iVar89 = 0x48527fa9;
                auVar93 = auVar56;
              }
            }
          }
        }
        else if (local_124 < -0x2635a70f) {
          if (local_124 < -0x2c970d94) {
            if (local_124 == -0x3d4f7be1) {
              uVar88 = DAT_004b1588 * DAT_004b158c + 0xa7606982U & 0xf0c46086;
              *(ID *)(puVar84 + -0x10) = local_138;
              *(undefined **)(puVar84 + -8) = PTR_BubbleBoxMgr_0048cd90;
              auVar96 = _objc_msgSendSuper2(puVar84 + -0x10,PTR_s_init_00489660);
              bVar86 = 0x86bd38d0 < uVar88;
              bVar85 = uVar88 == 0x86bd38d1;
              iVar90 = -0x78a5ea0e;
              puVar84 = puVar84 + -0x10;
LAB_00225d38:
              local_80 = auVar96._0_8_;
              auVar57._8_8_ = auVar96._8_8_;
              auVar57._0_8_ = local_120;
              auVar93._8_8_ = auVar96._8_8_;
              auVar93._0_8_ = local_120;
              iVar89 = -0x3d4f7be1;
              if (!bVar86 || bVar85) {
                iVar89 = iVar90;
                auVar93 = auVar57;
              }
            }
            else {
              if (local_124 != -0x3a5b67dd) goto LAB_00222f88;
              _objc_msgSend(local_80,local_98);
              _objc_retainAutoreleasedReturnValue();
              auVar93._8_8_ = extraout_x1_02;
              auVar93._0_8_ = local_120;
              iVar89 = -0x1bf49b81;
            }
          }
          else if (local_124 == -0x2c970d94) {
            DAT_004b00c3 = local_73;
            DAT_004b00c4 = DAT_004b00a4 ^ 0x9f;
            DAT_004b00c5 = DAT_004b00a5 ^ 0xe;
            iVar89 = 0x6099cc;
            auVar93 = auVar23;
          }
          else {
            if (local_124 != -0x27536c1b) goto LAB_00222f88;
            iVar89 = 0x3e0d840b;
            auVar93 = auVar22;
          }
        }
        else if (local_124 < -0x1ff9af3d) {
          if (local_124 != -0x2635a70f) {
            if (local_124 == -0x217266bb) {
              bVar85 = 0x91835baf < (DAT_004b1648 - DAT_004b164c & 0xc1852d2dU) + 0x28f981aa;
              iVar89 = 0x21a09fc3;
              iVar90 = 0x262a541;
              auVar91 = auVar5;
              goto LAB_00225994;
            }
            goto LAB_00222f88;
          }
          local_c0 = PTR_s_fullPath_0048a840;
          iVar89 = -0x8ab49ee;
          auVar93 = auVar58;
          if (((DAT_004b15f8 - DAT_004b15fc) * 0x26c8133e | 0x5aac4e08U) / 0x7ca4bee == 0xefdaba0a)
          {
            iVar89 = -0x2635a70f;
            auVar93 = auVar59;
          }
        }
        else {
          iVar89 = 0x1aee412f;
          auVar93 = auVar21;
          if (local_124 != -0x1ff9af3d) {
            if (local_124 == -0x1ea0e257) {
              _objc_msgSend(local_90,local_100,local_f8,1,0,0);
              _objc_release(local_f8);
              auVar93._8_8_ = extraout_x1_27;
              auVar93._0_8_ = local_120;
              iVar89 = 0x48527fa9;
              goto LAB_0022603c;
            }
            if (local_124 == -0x1bf49b81) {
              uVar88 = DAT_004b15c8 & DAT_004b15cc;
              _objc_msgSend(local_80,local_98);
              auVar91 = _objc_retainAutoreleasedReturnValue();
              bVar85 = 0x3f4d1b1c < ((uVar88 ^ 0xa04020c0) & 0xe260acca) + 0x68f2d2cc;
              iVar89 = -0x3a5b67dd;
              iVar90 = -0x5ec43ea;
              goto LAB_00225994;
            }
            goto LAB_00222f88;
          }
        }
      }
      else if (local_124 < -0x7194282) {
        if (local_124 < -0xb7ea89f) {
          if (local_124 < -0x131d316a) {
            if (local_124 == -0x188bbb0e) {
              uVar88 = (DAT_004b1608 - DAT_004b160c) * 0x6ba6a44a ^ 0x8cd66c2a;
              _objc_msgSend(local_80,local_c0);
              local_c8 = _objc_retainAutoreleasedReturnValue();
              local_c9 = _objc_msgSend(local_90,local_a0,local_c8);
              auVar94._8_8_ = extraout_x1_12;
              auVar94._0_8_ = local_f8;
              bVar86 = 0x1e4d046e < uVar88;
              bVar85 = uVar88 == 0x1e4d046f;
              iVar90 = 0x2bcc6ef1;
              iVar89 = -0x4c334bc9;
              goto LAB_00225860;
            }
            if (local_124 == -0x13e95fa2) {
              uVar88 = DAT_004b1598 ^ DAT_004b159c;
              uVar87 = _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_0048cc08);
              auVar92 = _objc_msgSend(uVar87,PTR_s_initWithSuiteName__0048b2b8,
                                      &PTR____CFConstantStringClassReference_004b00d0);
              bVar85 = 0xe8849077 < (uVar88 * -0x2fb9fe93 | 0xeaa3d26e) + 0x35434f2f;
              iVar90 = 0x6c1908b;
              iVar89 = -0x74c8a612;
              goto LAB_00225a94;
            }
            goto LAB_00222f88;
          }
          if (local_124 == -0x131d316a) {
            _objc_release(local_110,param_2);
            bVar85 = local_111 == '\0';
            iVar89 = -0x43d8d753;
            iVar90 = -0x2cd67dd;
            param_2 = extraout_x1_13;
            goto LAB_00225f6c;
          }
          if (local_124 != -0xfaa7231) goto LAB_00222f88;
          iVar89 = 0x661d1fdd;
          auVar93 = auVar28;
        }
        else {
          if (local_124 < -0x8ab49ee) {
            if (local_124 == -0xb7ea89f) {
              DAT_004b00b0 = DAT_004b0090 ^ 0xb6;
              DAT_004b00b1 = DAT_004b0091 ^ 0x3a;
              local_72 = DAT_004b0092 ^ 0xa4;
              uVar88 = (uint)((ulong)((DAT_004b1558 + DAT_004b155c & 0x7d1e2d36U) + 0x5cf909a8) *
                              0x19d0563f >> 0x3c);
              bVar86 = 0x7b925960 < uVar88;
              bVar85 = uVar88 == 0x7b925961;
              iVar89 = 0x4f5eb049;
              iVar90 = -0x76322f9a;
              auVar97 = auVar81;
              goto LAB_00225e70;
            }
            iVar89 = 0x4ca94156;
            iVar90 = -0x9c7299d;
            goto LAB_002240e4;
          }
          if (local_124 == -0x8ab49ee) {
            iVar89 = -0x464b947;
            auVar93 = auVar29;
            goto LAB_0022603c;
          }
          if (local_124 != -0x77cae41) goto LAB_00222f88;
          *(ID *)(puVar84 + -0x10) = local_138;
          *(undefined **)(puVar84 + -8) = PTR_BubbleBoxMgr_0048cd90;
          _objc_msgSendSuper2(puVar84 + -0x10,PTR_s_init_00489660);
          auVar93._8_8_ = extraout_x1_04;
          auVar93._0_8_ = local_120;
          puVar84 = puVar84 + -0x10;
          iVar89 = -0x3d4f7be1;
        }
      }
      else {
        if (-0x37d969f < local_124) {
          if (local_124 < -0x107d061) {
            if (local_124 != -0x37d969e) {
              if (local_124 == -0x2cd67dd) {
                bVar85 = (DAT_004b16d0 + DAT_004b16d4 + 0xaddbaec6U | 0x65282476) == 0x3797b019;
                iVar89 = 0x312cadf9;
                iVar90 = 0x93fe827;
                auVar95 = auVar79;
                goto LAB_00226038;
              }
              goto LAB_00222f88;
            }
            bVar85 = local_71 == '\0';
            iVar90 = 0x43a84447;
            iVar89 = 0x7327af39;
          }
          else {
            if (local_124 == -0x107d061) {
              uVar88 = 0;
              if (DAT_004b1684 != 0) {
                uVar88 = DAT_004b1680 / DAT_004b1684;
              }
              uVar88 = (uVar88 / 0x141d7d1f + 0xc93740cf) / 0x17989cf4;
              bVar86 = 0x7d7a9e9c < uVar88;
              bVar85 = uVar88 == 0x7d7a9e9d;
              iVar90 = 0x6895c512;
              iVar89 = 0x67e4f693;
              auVar94 = auVar75;
              goto LAB_00225860;
            }
            if (local_124 != 0x5b2f3c) goto LAB_00222f88;
            uVar88 = DAT_004b16f8 * DAT_004b16fc;
            _objc_release(local_90,param_2);
            bVar85 = ((uVar88 ^ 0xa029a6c4) + 0xaa979ccf | 0x3e71a15d) == 0x875238fe;
            iVar90 = 0x5b2f3c;
            iVar89 = -0xfaa7231;
            param_2 = extraout_x1_06;
          }
LAB_00225f4c:
          auVar73._8_8_ = param_2;
          auVar73._0_8_ = local_120;
          auVar93._8_8_ = param_2;
          auVar93._0_8_ = local_120;
          if (bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar73;
          }
          goto LAB_0022603c;
        }
        if (-0x55373d7 < local_124) {
          if (local_124 == -0x55373d6) {
            uVar88 = 0;
            if (DAT_004b16ec != 0) {
              uVar88 = DAT_004b16e8 / DAT_004b16ec;
            }
            iVar89 = -0x5797c568;
            auVar93 = auVar53;
            if (((uVar88 >> 2) / 0x3d8ddff7 | 0xf3f77ffc) == 0x362c118d) {
              iVar89 = -0x55373d6;
              auVar93 = auVar54;
            }
            goto LAB_0022603c;
          }
          if (local_124 == -0x464b947) goto LAB_00223704;
          if (local_124 == -0x4c62c4d) {
            return local_80;
          }
          goto LAB_00222f88;
        }
        if (local_124 != -0x7194282) {
          if (local_124 == -0x5ec43ea) {
            iVar89 = 0x594bd554;
            auVar93 = auVar27;
            goto LAB_0022603c;
          }
          goto LAB_00222f88;
        }
        uVar87 = *(undefined8 *)(local_80 + 0x18);
        *(undefined8 *)(local_80 + 0x18) = local_88;
        _objc_release(uVar87,param_2);
        _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
        _objc_retainAutoreleasedReturnValue();
        auVar93._8_8_ = extraout_x1_19;
        auVar93._0_8_ = local_120;
        iVar89 = 0x15c56d10;
      }
      goto LAB_0022603c;
    }
    if (local_124 < -0x6705290b) {
      if (local_124 < -0x72db59af) {
        if (local_124 < -0x76f9f360) {
          if (local_124 < -0x78e555a8) {
            if (local_124 == -0x7e91adf3) {
              bVar85 = (DAT_004b1610 * DAT_004b1614 + 0xdfe37890U & 0x3442fd81) == 0xd73c876d;
              iVar90 = -0x619bde4b;
              iVar89 = 0x3f6d7a58;
              goto LAB_00226018;
            }
            if (local_124 != -0x7ce0cf46) goto LAB_00222f88;
            _objc_msgSend(local_90,local_a0,local_110);
            auVar93._8_8_ = extraout_x1_01;
            auVar93._0_8_ = local_120;
            iVar89 = -0x78e555a8;
          }
          else {
            if (local_124 == -0x78e555a8) {
              uVar88 = (DAT_004b16c8 * DAT_004b16cc + 0xfb317143U | 0x2a7fc3f) + 0x25a0c61;
              local_111 = _objc_msgSend(local_90,local_a0,local_110);
              auVar94._8_8_ = extraout_x1_24;
              auVar94._0_8_ = local_f8;
              bVar86 = 0x8d913d5a < uVar88;
              bVar85 = uVar88 == 0x8d913d5b;
              iVar90 = -0x7ce0cf46;
              iVar89 = 0x664c10c7;
              goto LAB_00225860;
            }
            if (local_124 != -0x78a5ea0e) goto LAB_00222f88;
            iVar89 = -0x6b3e6292;
            auVar93 = auVar12;
          }
        }
        else if (local_124 < -0x75f74dec) {
          if (local_124 == -0x76f9f360) {
            _objc_msgSend(local_80,PTR_s_cardPath_00489540);
            _objc_retainAutoreleasedReturnValue();
            auVar93._8_8_ = extraout_x1_23;
            auVar93._0_8_ = local_120;
            iVar89 = 0x7bcdcbad;
          }
          else {
            if (local_124 != -0x76322f9a) goto LAB_00222f88;
            iVar89 = -0x583eb959;
            auVar93 = auVar13;
          }
        }
        else if (local_124 == -0x75f74dec) {
          DAT_004b00c3 = local_73;
          DAT_004b00c4 = DAT_004b00a4 ^ 0x9f;
          DAT_004b00c5 = DAT_004b00a5 ^ 0xe;
          iVar89 = -0x2c970d94;
          auVar93 = auVar15;
        }
        else {
          if (local_124 != -0x74c8a612) goto LAB_00222f88;
          iVar89 = -0x609e8c6a;
          auVar93 = auVar14;
        }
      }
      else if (local_124 < -0x6e5d2a4f) {
        if (local_124 < -0x6fb533bb) {
          if (local_124 != -0x72db59af) {
            if (local_124 == -0x71eba86f) {
              iVar89 = DAT_004b15b8 + DAT_004b15bc;
              local_98 = PTR_s_basePath_0048b2c0;
              _objc_msgSend(local_80);
              uVar87 = _objc_retainAutoreleasedReturnValue();
              local_a0 = PTR_s_fileExistsAtPath__0048a020;
              local_a1 = _objc_msgSend(local_90,PTR_s_fileExistsAtPath__0048a020,uVar87);
              _objc_release(uVar87);
              auVar92._8_8_ = extraout_x1_03;
              auVar92._0_8_ = local_88;
              bVar85 = 0x2d4060fa <
                       ((uint)((ulong)(iVar89 + 0xcc8793a8) * 0x5e86dfff >> 0x3e) | 0x237df0e);
              iVar90 = -0x6e8a6ca9;
              iVar89 = -0x541ffc41;
              goto LAB_00225a94;
            }
            goto LAB_00222f88;
          }
          iVar89 = 0x3ae3e295;
          auVar93 = auVar62;
          if (((DAT_004b16e0 - DAT_004b16e4) * -0x485f5061 + 0x732f9270U & 0x6b1c8c54) < 0xebaedfb7)
          {
            iVar89 = -0x55373d6;
            auVar93 = auVar63;
          }
        }
        else {
          iVar89 = 0x7bad7f9b;
          auVar93 = auVar11;
          if (local_124 != -0x6fb533bb) {
            if (local_124 != -0x6e8a6ca9) goto LAB_00222f88;
            _objc_msgSend(local_80,PTR_s_basePath_0048b2c0);
            uVar87 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_90,PTR_s_fileExistsAtPath__0048a020,uVar87);
            _objc_release(uVar87);
            auVar93._8_8_ = extraout_x1_09;
            auVar93._0_8_ = local_120;
            iVar89 = -0x71eba86f;
          }
        }
      }
      else {
        if (-0x6b3e6293 < local_124) {
          if (local_124 == -0x6b3e6292) {
            bVar85 = local_80 == 0;
            iVar89 = -0x6195bc49;
            iVar90 = -0x53aeb4b4;
            auVar95 = auVar78;
            goto LAB_00226038;
          }
          if (local_124 == -0x6b1e95cf) {
            bVar85 = ((DAT_004b1660 | DAT_004b1664) & 0xc4e11c6b) == 0x995d0ab1;
            iVar90 = -0x413bd140;
            iVar89 = 0x6276254b;
            goto LAB_00225f4c;
          }
          if (local_124 == -0x69b2d2cd) {
            local_70 = DAT_004d1878;
            bVar85 = 0x302b86b4 <
                     ((DAT_004b1528 ^ DAT_004b152c) + 0x520a1287 & 0x99d7e270) + 0xd5be14dd;
            iVar89 = -0x69b2d2cd;
            iVar90 = -0x4b2ec5b0;
            auVar91 = auVar1;
            goto LAB_00225994;
          }
          goto LAB_00222f88;
        }
        iVar89 = 0x1d863aae;
        auVar93 = auVar9;
        if (local_124 != -0x6e5d2a4f) {
          if (local_124 != -0x6b82f881) goto LAB_00222f88;
          iVar89 = -0x3dbdab69;
          auVar93 = auVar10;
        }
      }
      goto LAB_0022603c;
    }
    if (local_124 < -0x579ecb44) {
      if (local_124 < -0x6195bc49) {
        if (local_124 < -0x630ce17c) {
          if (local_124 == -0x6705290b) {
            uVar88 = 0;
            if (DAT_004b16c4 != 0) {
              uVar88 = DAT_004b16c0 / DAT_004b16c4;
            }
            bVar85 = 0xdb762837 < uVar88 + 0xbe7b7380;
            iVar89 = -0x78e555a8;
            iVar90 = -0x7ce0cf46;
            auVar91 = auVar2;
            goto LAB_00225994;
          }
          if (local_124 != -0x65044521) goto LAB_00222f88;
          iVar89 = -0x4bfb2298;
          auVar93 = auVar18;
        }
        else if (local_124 == -0x630ce17c) {
          uVar88 = 0;
          if (DAT_004b15ec != 0) {
            uVar88 = DAT_004b15e8 / DAT_004b15ec;
          }
          _objc_msgSend(local_90,local_b8,local_b0,1,0,0);
          _objc_release(local_b0);
          auVar65._8_8_ = extraout_x1_25;
          auVar65._0_8_ = local_120;
          auVar93._8_8_ = extraout_x1_25;
          auVar93._0_8_ = local_120;
          iVar89 = 0x477e3857;
          if ((uVar88 * 0x1b09743b & 0xfb16de52 | 0xeb028e42) < 0xd947f462) {
            iVar89 = -0x630ce17c;
            auVar93 = auVar65;
          }
        }
        else {
          if (local_124 != -0x619bde4b) goto LAB_00222f88;
          uVar88 = DAT_004b1618 & DAT_004b161c;
          _objc_release(local_c8,param_2);
          auVar95._8_8_ = extraout_x1_07;
          auVar95._0_8_ = local_90;
          bVar85 = uVar88 * -0x53467530 == 0x40c32805;
          iVar89 = 0x3f6d7a58;
          iVar90 = 0x42f841ec;
LAB_00226038:
          local_90 = auVar95._0_8_;
          auVar64._8_8_ = auVar95._8_8_;
          auVar64._0_8_ = local_120;
          auVar93._8_8_ = auVar95._8_8_;
          auVar93._0_8_ = local_120;
          if (!bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar64;
          }
        }
      }
      else if (local_124 < -0x5e5e129a) {
        if (local_124 == -0x6195bc49) {
LAB_00224bf8:
          iVar89 = 0x69be0571;
          auVar93 = auVar19;
        }
        else {
          if (local_124 != -0x609e8c6a) goto LAB_00222f88;
          bVar85 = 0xa8b4a80c < (DAT_004b15a0 & DAT_004b15a4 ^ 0x8a779abf) * -0x5c9059f9;
          iVar89 = -0x7194282;
          iVar90 = 0x15c56d10;
          auVar91 = auVar3;
LAB_00225994:
          auVar66._8_8_ = auVar91._8_8_;
          auVar66._0_8_ = local_120;
          auVar93._8_8_ = auVar91._8_8_;
          auVar93._0_8_ = local_120;
          local_b0 = auVar91._0_8_;
          if (bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar66;
          }
        }
      }
      else {
        if (local_124 == -0x5e5e129a) {
          bVar85 = 0x78ac69b1 < (DAT_004b1540 - DAT_004b1544) * -0x2fb7ceb9 + 0x104cde9fU;
          iVar89 = 0x1d863aae;
          iVar90 = -0x6e5d2a4f;
          auVar91 = auVar4;
          goto LAB_00225994;
        }
        if (local_124 != -0x583eb959) goto LAB_00222f88;
LAB_00225258:
        iVar89 = -0x579ecb44;
        auVar93 = auVar20;
      }
      goto LAB_0022603c;
    }
    if (local_124 < -0x541ffc41) {
      if (local_124 < -0x564fc6dd) {
        if (local_124 != -0x579ecb44) {
          iVar89 = -0x43d8d753;
          iVar90 = -0x5797c568;
          goto LAB_002240e4;
        }
        DAT_004b00b2 = local_72;
        DAT_004b00b3 = DAT_004b0093 ^ 0xe4;
        DAT_004b00b4 = DAT_004b0094;
        DAT_004b00b5 = DAT_004b0095 ^ 0x9a;
        DAT_004b00b6 = DAT_004b0096 ^ 0xdf;
        DAT_004b00b7 = DAT_004b0097 ^ 0x68;
        DAT_004b00b8 = DAT_004b0098 ^ 0x96;
        DAT_004b00b9 = DAT_004b0099 ^ 0x18;
        DAT_004b00ba = DAT_004b009a ^ 0xdb;
        DAT_004b00bb = DAT_004b009b ^ 0xda;
        DAT_004b00bc = DAT_004b009c ^ 0xec;
        DAT_004b00bd = DAT_004b009d ^ 0xd7;
        DAT_004b00be = DAT_004b009e ^ 0x3e;
        DAT_004b00bf = DAT_004b009f ^ 0x7f;
        DAT_004b00c0 = DAT_004b00a0 ^ 0xab;
        DAT_004b00c1 = DAT_004b00a1 ^ 0xbb;
        DAT_004b00c2 = DAT_004b00a2 ^ 0xea;
        local_73 = DAT_004b00a3 ^ 0x9a;
        iVar89 = 0x7d325d82;
        auVar93 = auVar69;
        if (((DAT_004b1568 - DAT_004b156c) + 0x4eba6be6U ^ 0xf4ea3016) < 0x62b4553) {
          iVar89 = -0x579ecb44;
          auVar93 = auVar70;
        }
      }
      else {
        if (local_124 != -0x564fc6dd) {
          if (local_124 == -0x55363af3) {
            uVar88 = (DAT_004b1650 ^ DAT_004b1654) * 0x431116cf & 0xac8b141f | 0x88000017;
            bVar86 = 0x4b50db94 < uVar88;
            bVar85 = uVar88 == 0x4b50db95;
            iVar90 = 0x43464803;
            iVar89 = 0xd2409ea;
            auVar94 = auVar74;
            goto LAB_00225860;
          }
          goto LAB_00222f88;
        }
        iVar89 = -0x6705290b;
        auVar93 = auVar17;
      }
      goto LAB_0022603c;
    }
    if (-0x4dcd5294 < local_124) {
      if (local_124 != -0x4dcd5293) {
        if (local_124 == -0x4d60029e) {
          uVar88 = DAT_004b1638 + DAT_004b163c;
          _objc_release(local_d8,param_2);
          bVar85 = (uVar88 & 0x11df8e22) * 0x426ccd98 == -0x74d8daa2;
          iVar90 = 0x30438cb7;
          iVar89 = 0x126da89d;
          param_2 = extraout_x1_28;
          goto LAB_00225f4c;
        }
        if (local_124 == -0x4d0e3cf7) {
          _objc_msgSend(local_90,local_b8,local_b0,1,0,0);
          _objc_release(local_b0);
          auVar93._8_8_ = extraout_x1;
          auVar93._0_8_ = local_120;
          iVar89 = -0x630ce17c;
          goto LAB_0022603c;
        }
        goto LAB_00222f88;
      }
      iVar89 = 0x3f2c9201;
      auVar93 = auVar16;
      goto LAB_0022603c;
    }
    if (local_124 == -0x541ffc41) {
      bVar85 = local_a1 == '\0';
      iVar89 = 0x30430ea4;
      iVar90 = 0x615ad47d;
      goto LAB_00225f6c;
    }
    if (local_124 != -0x53aeb4b4) goto LAB_00222f88;
    bVar85 = 0x20d5c8c3 < ((DAT_004b1590 | DAT_004b1594) + 0xfa9a7dd7 | 0xfd7b9dc5);
    iVar90 = -0x13e95fa2;
    iVar89 = 0x6c1908b;
    auVar92 = auVar7;
  }
  else {
    if (local_124 < 0x46728a85) {
      if (local_124 < 0x21a09fc3) {
        if (local_124 < 0x1138757c) {
          if (local_124 < 0x92691b9) {
            if (local_124 < 0x613867d) {
              iVar89 = 0x43a84447;
              auVar93 = auVar43;
              if (local_124 != 0x6099cc) {
                iVar89 = -0x55363af3;
                iVar90 = 0x262a541;
                goto LAB_002240e4;
              }
            }
            else if (local_124 == 0x613867d) {
              uVar88 = 0;
              if (DAT_004b1624 != 0) {
                uVar88 = DAT_004b1620 / DAT_004b1624;
              }
              iVar89 = 0x5b208376;
              auVar93 = auVar46;
              if (((uVar88 ^ 0x49600102) & 0xf9614516) != 0x4b2b09fa) {
                iVar89 = 0x1138757c;
                auVar93 = auVar47;
              }
            }
            else {
              if (local_124 != 0x6c1908b) goto LAB_00222f88;
              uVar87 = _objc_alloc(PTR__OBJC_CLASS___NSUserDefaults_0048cc08);
              _objc_msgSend(uVar87,PTR_s_initWithSuiteName__0048b2b8,
                            &PTR____CFConstantStringClassReference_004b00d0);
              auVar93._8_8_ = extraout_x1_05;
              auVar93._0_8_ = local_120;
              iVar89 = -0x13e95fa2;
            }
          }
          else if (local_124 < 0x9d9ec3c) {
            if (local_124 == 0x92691b9) {
              DAT_004d1878 = 1;
LAB_00224e88:
              iVar89 = 0x641d35e1;
              auVar93 = auVar38;
            }
            else {
              if (local_124 != 0x93fe827) goto LAB_00222f88;
              _objc_msgSend(local_80,local_108);
              auVar93 = _objc_retainAutoreleasedReturnValue();
              iVar89 = 0x1b0c2f82;
            }
          }
          else {
            if (local_124 != 0x9d9ec3c) {
              if (local_124 == 0xd2409ea) {
                local_e0 = PTR_s_maskPath_0048a5b8;
                bVar85 = (DAT_004b1658 ^ DAT_004b165c) == 0x26fdfc9a;
                iVar90 = 0x43464803;
                iVar89 = -0x45052d33;
                goto LAB_00225f4c;
              }
              goto LAB_00222f88;
            }
            _objc_release(local_90,param_2);
            auVar93._8_8_ = extraout_x1_15;
            auVar93._0_8_ = local_120;
            iVar89 = 0x5b2f3c;
          }
        }
        else if (local_124 < 0x18178271) {
          if (0x15c56d0f < local_124) {
            if (local_124 == 0x15c56d10) {
              uVar88 = DAT_004b15a8 * DAT_004b15ac;
              uVar87 = *(undefined8 *)(local_80 + 0x18);
              *(undefined8 *)(local_80 + 0x18) = local_88;
              _objc_release(uVar87,param_2);
              _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
              auVar95 = _objc_retainAutoreleasedReturnValue();
              bVar85 = (uint)((ulong)(uVar88 >> 2) * 0x207e07ed >> 0x3b) * -0x6ab8de4e == 0xbd1449c;
              iVar89 = -0x7194282;
              iVar90 = 0x36c4657f;
              goto LAB_00226038;
            }
            iVar89 = 0x672d292c;
            iVar90 = 0x162a0b17;
            goto LAB_002240e4;
          }
          if (local_124 == 0x1138757c) {
            uVar88 = DAT_004b1628 | DAT_004b162c;
            _objc_msgSend(local_80,local_c0);
            local_d8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_90,PTR_s_createDirectoryAtPath_withInterm_0048a210,local_d8,1,0,0);
            auVar45._8_8_ = extraout_x1_14;
            auVar45._0_8_ = local_120;
            auVar93._8_8_ = extraout_x1_14;
            auVar93._0_8_ = local_120;
            iVar89 = 0x1138757c;
            if (((uVar88 ^ 0x12230028) & 0xb66b1bac) + 0xa56ea54 < 0xfaa3879f) {
              iVar89 = 0x3f22d47c;
              auVar93 = auVar45;
            }
          }
          else {
            if (local_124 != 0x126da89d) goto LAB_00222f88;
            iVar89 = 0x58277ceb;
            auVar93 = auVar44;
          }
        }
        else if (local_124 < 0x1b0c2f82) {
          if (local_124 != 0x18178271) {
            if (local_124 == 0x1aee412f) {
              uVar88 = 0;
              if (DAT_004b170c != 0) {
                uVar88 = DAT_004b1708 / DAT_004b170c;
              }
              uVar88 = uVar88 + 0x956488bf ^ 0x2a5de5e;
              bVar86 = 0x35cc9f6c < uVar88;
              bVar85 = uVar88 == 0x35cc9f6d;
              iVar90 = -0x1ff9af3d;
              iVar89 = -0x437f7f8c;
              goto LAB_00225860;
            }
            goto LAB_00222f88;
          }
          bVar85 = local_e9 == '\0';
          iVar89 = 0x7bad7f9b;
          iVar90 = -0x107d061;
LAB_00225f6c:
          auVar71._8_8_ = param_2;
          auVar71._0_8_ = local_120;
          auVar93._8_8_ = param_2;
          auVar93._0_8_ = local_120;
          if (bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar71;
          }
        }
        else {
          if (local_124 != 0x1b0c2f82) {
            if (local_124 == 0x1d863aae) {
              bVar85 = (DAT_004b1548 + DAT_004b154c + 0xa4c643dfU & 0xf3eff79c | 0x90c95694) ==
                       0x21978ce5;
              iVar90 = 0x1d863aae;
              iVar89 = -0x37d969e;
              goto LAB_00225f4c;
            }
            goto LAB_00222f88;
          }
          iVar89 = 0x5fb904c0;
        }
      }
      else if (local_124 < 0x3891fdaa) {
        if (local_124 < 0x30438cb7) {
          if (local_124 < 0x2c3d7f77) {
            iVar89 = -0x217266bb;
            auVar93 = auVar41;
            if (local_124 != 0x21a09fc3) {
              if (local_124 != 0x2bcc6ef1) goto LAB_00222f88;
              _objc_msgSend(local_80,local_c0);
              uVar87 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_90,local_a0,uVar87);
              param_2 = extraout_x1_00;
LAB_00223704:
              auVar93._8_8_ = param_2;
              auVar93._0_8_ = local_120;
              iVar89 = -0x188bbb0e;
            }
          }
          else {
            if (local_124 == 0x2c3d7f77) {
              DAT_004b00b2 = local_72;
              DAT_004b00b3 = DAT_004b0093 ^ 0xe4;
              DAT_004b00b4 = DAT_004b0094;
              DAT_004b00b5 = DAT_004b0095 ^ 0x9a;
              DAT_004b00b6 = DAT_004b0096 ^ 0xdf;
              DAT_004b00b7 = DAT_004b0097 ^ 0x68;
              DAT_004b00b8 = DAT_004b0098 ^ 0x96;
              DAT_004b00b9 = DAT_004b0099 ^ 0x18;
              DAT_004b00ba = DAT_004b009a ^ 0xdb;
              DAT_004b00bb = DAT_004b009b ^ 0xda;
              DAT_004b00bc = DAT_004b009c ^ 0xec;
              DAT_004b00bd = DAT_004b009d ^ 0xd7;
              DAT_004b00be = DAT_004b009e ^ 0x3e;
              DAT_004b00bf = DAT_004b009f ^ 0x7f;
              DAT_004b00c0 = DAT_004b00a0 ^ 0xab;
              DAT_004b00c1 = DAT_004b00a1 ^ 0xbb;
              DAT_004b00c2 = DAT_004b00a2 ^ 0xea;
              goto LAB_00225258;
            }
            if (local_124 != 0x30430ea4) goto LAB_00222f88;
            iVar89 = -0x2635a70f;
            auVar93 = auVar48;
            if (0x6353e782 <
                ((uint)(DAT_004b15f0 - DAT_004b15f4) / 0x4f8e9559 ^ 0x2c4dc47) * -0x1d5711f) {
              iVar89 = 0x3891fdaa;
              auVar93 = auVar49;
            }
          }
        }
        else if (local_124 < 0x312cadf9) {
          if (local_124 != 0x30438cb7) {
            if (local_124 == 0x30e9989a) goto LAB_00224bf8;
            goto LAB_00222f88;
          }
          _objc_release(local_d8,param_2);
          auVar93._8_8_ = extraout_x1_17;
          auVar93._0_8_ = local_120;
          iVar89 = -0x4d60029e;
        }
        else if (local_124 == 0x312cadf9) {
          _objc_msgSend(local_80,local_108);
          _objc_retainAutoreleasedReturnValue();
          auVar93._8_8_ = extraout_x1_18;
          auVar93._0_8_ = local_120;
          iVar89 = 0x93fe827;
        }
        else {
          if (local_124 != 0x36c4657f) goto LAB_00222f88;
          iVar89 = 0x592230be;
          auVar93 = auVar42;
        }
      }
      else if (local_124 < 0x3f2c9201) {
        if (local_124 < 0x3e0d840b) {
          iVar89 = -0x2635a70f;
          auVar93 = auVar39;
          if (local_124 != 0x3891fdaa) {
            iVar89 = -0x55373d6;
            iVar90 = 0x3ae3e295;
            goto LAB_002240e4;
          }
        }
        else {
          if (local_124 == 0x3e0d840b) goto LAB_00225494;
          if (local_124 != 0x3f22d47c) goto LAB_00222f88;
          iVar89 = 0x7bdf3b32;
          auVar93 = auVar40;
        }
      }
      else if (local_124 < 0x42f841ec) {
        if (local_124 == 0x3f2c9201) {
          uVar88 = (DAT_004b1580 - DAT_004b1584) + 0x27170331U ^ 0x6bb58c09;
          bVar86 = 0x25f9e032 < uVar88;
          bVar85 = uVar88 == 0x25f9e033;
          iVar90 = -0x77cae41;
          goto LAB_00225d38;
        }
        if (local_124 != 0x3f6d7a58) goto LAB_00222f88;
        _objc_release(local_c8,param_2);
        auVar93._8_8_ = extraout_x1_10;
        auVar93._0_8_ = local_120;
        iVar89 = -0x619bde4b;
      }
      else {
        if (local_124 == 0x42f841ec) {
          bVar85 = local_c9 == '\0';
          iVar89 = -0x55363af3;
          iVar90 = 0x613867d;
          goto LAB_00225f6c;
        }
        iVar89 = 0xd2409ea;
        auVar93 = auVar37;
        if (local_124 != 0x43464803) {
          if (local_124 == 0x43a84447) goto LAB_00224e88;
          goto LAB_00222f88;
        }
      }
      goto LAB_0022603c;
    }
    if (local_124 < 0x64a49492) {
      if (local_124 < 0x594bd554) {
        if (local_124 < 0x4f5eb049) {
          if (local_124 < 0x48527fa9) {
            if (local_124 == 0x46728a85) {
              bVar85 = ((DAT_004b1570 + DAT_004b1574 ^ 0x4044000U) & 0x45044040) == 0x9c2f48ba;
              iVar89 = -0x2c970d94;
              iVar90 = -0x75f74dec;
              goto LAB_00225f6c;
            }
            iVar89 = 0x30430ea4;
            iVar90 = 0x477e3857;
LAB_002240e4:
            auVar93 = auVar68;
            if (local_124 != iVar90) goto LAB_00222f88;
          }
          else {
            if (local_124 != 0x48527fa9) {
              if (local_124 == 0x4ca94156) {
                uVar88 = ((DAT_004b1698 | DAT_004b169c) * 0x7bedebb0 | 0xae5e9078) ^ 0xca782c70;
                local_100 = PTR_s_createDirectoryAtPath_withInterm_0048a210;
                bVar86 = 0x42ee749 < uVar88;
                bVar85 = uVar88 == 0x42ee74a;
                iVar90 = -0x9c7299d;
                iVar89 = -0x6b82f881;
                auVar94 = auVar76;
                goto LAB_00225860;
              }
              goto LAB_00222f88;
            }
            _objc_msgSend(local_90,local_100,local_f8,1,0,0);
            _objc_release(local_f8);
            auVar93._8_8_ = extraout_x1_22;
            auVar93._0_8_ = local_120;
            iVar89 = -0x6fb533bb;
          }
        }
        else if (local_124 < 0x58277ceb) {
          if (local_124 != 0x4f5eb049) {
            if (local_124 == 0x5509a475) {
              bVar85 = 0xcbc2fb49 <
                       ((DAT_004b1530 | DAT_004b1534 | 0x7512ee7f) * 0x4549ad1d) / 0x2aa34aba;
              iVar89 = 0x7a701d11;
              iVar90 = 0x5954aee2;
              auVar91 = auVar6;
              goto LAB_00225994;
            }
            goto LAB_00222f88;
          }
          DAT_004b00b0 = DAT_004b0090 ^ 0xb6;
          DAT_004b00b1 = DAT_004b0091 ^ 0x3a;
          iVar89 = -0xb7ea89f;
          auVar93 = auVar31;
        }
        else {
          if (local_124 == 0x58277ceb) {
            uVar88 = (DAT_004b1640 * DAT_004b1644 ^ 0x690e6cabU) + 0xd208002d | 0x9999357c;
            bVar86 = 0x3ea667e1 < uVar88;
            bVar85 = uVar88 == 0x3ea667e2;
            iVar89 = -0x217266bb;
            iVar90 = 0x21a09fc3;
            auVar97 = auVar82;
            goto LAB_00225e70;
          }
          if (local_124 != 0x592230be) goto LAB_00222f88;
          uVar88 = ((DAT_004b15b0 ^ DAT_004b15b4) * -0x6d63cc69) / 0x9857bde7 | 0x55166a5a;
          bVar86 = 0x54edcda0 < uVar88;
          bVar85 = uVar88 == 0x54edcda1;
          iVar90 = -0x6e8a6ca9;
          iVar89 = -0x71eba86f;
          auVar94 = auVar77;
LAB_00225860:
          local_f8 = auVar94._0_8_;
          auVar67._8_8_ = auVar94._8_8_;
          auVar67._0_8_ = local_120;
          auVar93._8_8_ = auVar94._8_8_;
          auVar93._0_8_ = local_120;
          if (!bVar86 || bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar67;
          }
        }
      }
      else if (local_124 < 0x5f4fe001) {
        if (local_124 < 0x5b208376) {
          if (local_124 != 0x594bd554) {
            iVar89 = 0x7a701d11;
            iVar90 = 0x5954aee2;
            goto LAB_002240e4;
          }
          bVar85 = (uint)((ulong)((DAT_004b15d0 & DAT_004b15d4) + 0xe3325d01 ^ 0xb72df280) *
                          0x551761cf >> 0x3e) == 0x89031b85;
          iVar90 = 0x672d292c;
          iVar89 = 0x162a0b17;
          goto LAB_00226018;
        }
        if (local_124 != 0x5b208376) {
          if (local_124 == 0x5c675c3d) {
            iVar89 = DAT_004b1678 + DAT_004b167c;
            local_e9 = _objc_msgSend(local_90,local_a0,local_e8);
            _objc_release(local_e8);
            auVar91._8_8_ = extraout_x1_08;
            auVar91._0_8_ = local_b0;
            bVar85 = 0x6d3fedf1 < iVar89 * -0x5ab77ec3 + 0x2ebcee19U;
            iVar89 = 0x5c675c3d;
            iVar90 = 0x18178271;
            goto LAB_00225994;
          }
          goto LAB_00222f88;
        }
        _objc_msgSend(local_80,local_c0);
        uVar87 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_90,PTR_s_createDirectoryAtPath_withInterm_0048a210,uVar87,1,0,0);
        auVar93._8_8_ = extraout_x1_26;
        auVar93._0_8_ = local_120;
        iVar89 = 0x1138757c;
      }
      else if (local_124 < 0x615ad47d) {
        if (local_124 == 0x5f4fe001) {
          iVar89 = -0x69b2d2cd;
          auVar93 = auVar30;
        }
        else {
          if (local_124 != 0x5fb904c0) goto LAB_00222f88;
          _objc_msgSend(local_90,PTR_s_createDirectoryAtPath_withInterm_0048a210,local_120,1,0,0);
          _objc_release(local_120);
          auVar93._8_8_ = extraout_x1_11;
          auVar93._0_8_ = local_120;
          iVar89 = -0x72db59af;
        }
      }
      else {
        if (local_124 != 0x615ad47d) {
          if (local_124 == 0x6276254b) {
            uVar88 = (DAT_004b1668 * DAT_004b166c | 0x6c247bdU) * -0x65e966be & 0x71dfade;
            _objc_msgSend(local_80,local_e0);
            auVar97 = _objc_retainAutoreleasedReturnValue();
            bVar86 = 0xaf5328a4 < uVar88;
            bVar85 = uVar88 == 0xaf5328a5;
            iVar89 = -0x413bd140;
            iVar90 = -0x27536c1b;
            goto LAB_00225e70;
          }
          if (local_124 == 0x641d35e1) {
            DAT_004d1878 = 1;
            bVar85 = (DAT_004b1578 + DAT_004b157c ^ 0x3cc44893U) * 0x6c96582c == -0x6fc0c197;
            iVar89 = 0x92691b9;
            iVar90 = -0x4dcd5293;
            auVar95 = auVar80;
            goto LAB_00226038;
          }
          goto LAB_00222f88;
        }
        bVar85 = (uint)((ulong)(DAT_004b15c0 ^ DAT_004b15c4 ^ 0x8845302c | 0x10ba8bd1) * 0x556ecfa3
                       >> 0x3d) == 0x8f3dad5d;
        iVar90 = -0x1bf49b81;
        iVar89 = -0x3a5b67dd;
LAB_00226018:
        auVar93 = auVar60;
        if (!bVar85) {
          iVar89 = iVar90;
          auVar93 = auVar61;
        }
      }
      goto LAB_0022603c;
    }
    if (local_124 < 0x70da8475) {
      if (local_124 < 0x67e4f693) {
        if (local_124 < 0x664c10c7) {
          if (local_124 != 0x64a49492) {
            if (local_124 == 0x661d1fdd) {
              bVar85 = (DAT_004b1700 & DAT_004b1704 & 0xa1800000) == 0x178dac66;
              iVar89 = -0x1ff9af3d;
              iVar90 = 0x1aee412f;
              goto LAB_00226038;
            }
            goto LAB_00222f88;
          }
          _objc_msgSend(local_90,local_a0,local_e8);
          _objc_release(local_e8);
          param_2 = extraout_x1_20;
LAB_00225494:
          auVar93._8_8_ = param_2;
          auVar93._0_8_ = local_120;
          iVar89 = 0x5c675c3d;
        }
        else {
          if (local_124 != 0x664c10c7) {
            if (local_124 == 0x672d292c) {
              uVar88 = (DAT_004b15d8 ^ DAT_004b15dc) + 0x931ed31a & 0x69f34a12;
              local_b8 = PTR_s_createDirectoryAtPath_withInterm_0048a210;
              bVar86 = 0x5960a78d < uVar88;
              bVar85 = uVar88 == 0x5960a78e;
              iVar89 = 0x162a0b17;
              iVar90 = 0x70da8475;
              goto LAB_00225e70;
            }
            goto LAB_00222f88;
          }
          iVar89 = -0x131d316a;
          auVar93 = auVar35;
        }
      }
      else if (local_124 < 0x69be0571) {
        if (local_124 != 0x67e4f693) {
          if (local_124 == 0x6895c512) {
            uVar88 = (uint)((ulong)(DAT_004b1688 & DAT_004b168c | 0xb1539495) * 0x930f5e2f >> 0x3e)
                     + 0x6bab2ee3;
            _objc_msgSend(local_80,local_e0);
            auVar94 = _objc_retainAutoreleasedReturnValue();
            bVar86 = 0x1f156a8 < uVar88;
            bVar85 = uVar88 == 0x1f156a9;
            iVar90 = 0x6895c512;
            iVar89 = -0x65044521;
            goto LAB_00225860;
          }
          goto LAB_00222f88;
        }
        _objc_msgSend(local_80,local_e0);
        _objc_retainAutoreleasedReturnValue();
        auVar93._8_8_ = extraout_x1_21;
        auVar93._0_8_ = local_120;
        iVar89 = 0x6895c512;
      }
      else if (local_124 == 0x69be0571) {
        iVar89 = 0x69be0571;
        auVar93 = auVar50;
        if (((uint)((ulong)(DAT_004b1718 | DAT_004b171c) * 0x6f916de5 >> 0x3e) + 0x16c0af1d &
            0x400af0a) != 0x187a7a70) {
          iVar89 = -0x4c62c4d;
          auVar93 = auVar51;
        }
      }
      else {
        if (local_124 != 0x70a4ae55) goto LAB_00222f88;
        iVar89 = -0x630ce17c;
        auVar93 = auVar36;
      }
      goto LAB_0022603c;
    }
    if (0x7bad7f9a < local_124) {
      if (local_124 < 0x7bdf3b32) {
        if (local_124 == 0x7bad7f9b) {
          uVar88 = ((DAT_004b16b0 - DAT_004b16b4) * -0x5ddf0975 & 0x3fd52b74U) * -0xa584bcf;
          bVar86 = 0xe3c29ea < uVar88;
          bVar85 = uVar88 == 0xe3c29eb;
          iVar89 = 0x7bcdcbad;
          iVar90 = -0x76f9f360;
          auVar97 = auVar83;
LAB_00225e70:
          local_e8 = auVar97._0_8_;
          auVar52._8_8_ = auVar97._8_8_;
          auVar52._0_8_ = local_120;
          auVar93._8_8_ = auVar97._8_8_;
          auVar93._0_8_ = local_120;
          if (!bVar86 || bVar85) {
            iVar89 = iVar90;
            auVar93 = auVar52;
          }
        }
        else {
          if (local_124 != 0x7bcdcbad) goto LAB_00222f88;
          local_108 = PTR_s_cardPath_00489540;
          _objc_msgSend(local_80);
          auVar91 = _objc_retainAutoreleasedReturnValue();
          auVar93._8_8_ = auVar91._8_8_;
          auVar93._0_8_ = local_120;
          local_110 = auVar91._0_8_;
          iVar89 = -0x564fc6dd;
        }
      }
      else {
        if (local_124 == 0x7bdf3b32) {
          bVar85 = ((DAT_004b1630 & DAT_004b1634) + 0x60d77d51 | 0x14b56336) == 0xa304e234;
          iVar90 = -0x4d60029e;
          iVar89 = 0x30438cb7;
          goto LAB_00226018;
        }
        if (local_124 == 0x7d325d82) {
          iVar89 = 0x46728a85;
          auVar93 = auVar33;
        }
        else {
          if (local_124 != 0x7e07637e) goto LAB_00222f88;
          iVar89 = -0x5e5e129a;
          auVar93 = auVar32;
        }
      }
      goto LAB_0022603c;
    }
    if (local_124 < 0x77fd8f81) {
      if (local_124 != 0x70da8475) {
        if (local_124 == 0x7327af39) {
          uVar88 = 0;
          if (DAT_004b1554 != 0) {
            uVar88 = DAT_004b1550 / DAT_004b1554;
          }
          bVar85 = 0xbf510500 < ((uVar88 | 0xa782c5f) * -0xa41e330) / 0x53de70c5;
          iVar89 = -0xb7ea89f;
          iVar90 = 0x4f5eb049;
          goto LAB_00225994;
        }
        goto LAB_00222f88;
      }
      iVar89 = 0x70a4ae55;
      auVar93 = auVar34;
      goto LAB_0022603c;
    }
    if (local_124 != 0x77fd8f81) {
      if (local_124 == 0x7a701d11) {
        local_71 = local_70 == 0;
        bVar85 = 0xc7a71187 < (DAT_004b1538 - DAT_004b153c) * 0x3fa58880 + 0x8891fa4dU;
        iVar90 = 0x7a701d11;
        iVar89 = 0x7e07637e;
        auVar92 = auVar8;
        goto LAB_00225a94;
      }
      goto LAB_00222f88;
    }
    bVar85 = 0x94f4a3d < local_6c;
    iVar90 = -0x69b2d2cd;
    iVar89 = 0x5f4fe001;
  }
LAB_00225a94:
  auVar72._8_8_ = auVar92._8_8_;
  auVar72._0_8_ = local_120;
  auVar93._8_8_ = auVar92._8_8_;
  auVar93._0_8_ = local_120;
  local_88 = auVar92._0_8_;
  if (bVar85) {
    iVar89 = iVar90;
    auVar93 = auVar72;
  }
LAB_0022603c:
  param_2 = auVar93._8_8_;
  local_120 = auVar93._0_8_;
  *local_130 = iVar89;
  goto LAB_00222f88;
}



// ----- -[BubbleBoxMgr initConfig] @ 0022607c -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxMgr::initConfig(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  double dVar12;
  undefined1 auStack_3a0 [4];
  uint local_39c;
  ID local_398;
  int *local_390;
  int local_388;
  byte local_382;
  byte local_381;
  long local_380;
  byte local_371;
  long local_370;
  byte local_361;
  long local_360;
  byte local_351;
  long local_350;
  byte local_341;
  undefined *local_340;
  char local_331;
  undefined8 local_330;
  long local_328;
  undefined *local_320;
  undefined *local_318;
  char local_309;
  undefined8 local_308;
  char local_2f9;
  long local_2f8;
  undefined *local_2f0;
  undefined *local_2e8;
  char local_2d9;
  long local_2d8;
  undefined *local_2d0;
  long local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  char local_2a1;
  undefined8 local_2a0;
  undefined *local_298;
  char local_289;
  undefined *local_288;
  undefined *local_280;
  undefined *local_278;
  char local_269;
  undefined *local_268;
  undefined *local_260;
  undefined *local_258;
  char local_249;
  undefined *local_248;
  undefined *local_240;
  undefined *local_238;
  char local_22a;
  char local_229;
  long local_228;
  undefined *local_220;
  char local_211;
  long local_210;
  char local_201;
  long local_200;
  byte local_1f1;
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined *local_1e0;
  long *local_1d8;
  long local_1d0;
  long *local_1c8;
  undefined8 *local_1c0;
  char local_1b1;
  long local_1b0;
  undefined *local_1a8;
  undefined8 local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  char local_161;
  long local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined *local_148;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *local_128;
  char local_119;
  long local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined *local_100;
  char local_f1;
  undefined8 local_f0;
  undefined *local_e8;
  undefined *local_e0;
  char local_d1;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 *local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  byte local_8b;
  byte local_8a;
  char local_89;
  int local_88;
  uint local_84;
  long local_80;
  
  uVar1 = DAT_00479668;
  puVar10 = (undefined8 *)auStack_3a0;
  local_80 = *(long *)PTR____stack_chk_guard_00481638;
  local_84 = ((DAT_004b1720 & DAT_004b1724 ^ 0x3fba2c15) + 0xe804fd6b) / 0x76e6704;
  local_388 = 0x35d27e25;
  local_390 = &local_388;
  local_39c = 0x8c8409fb;
  local_398 = param_1;
LAB_002261bc:
  puVar3 = local_98;
  lVar2 = local_140;
  lVar7 = local_2c8;
  if (local_388 < -0xc53e54f) {
    if (local_388 < -0x4943ceaf) {
      if (local_388 < -0x62891aeb) {
        if (local_388 < -0x701ad132) {
          if (-0x77aca90e < local_388) {
            if (local_388 < -0x75ffef64) {
              if (local_388 < -0x7734cbd9) {
                if (local_388 == -0x77aca90d) {
                  DAT_004b0220 = DAT_004b0218 ^ 0xbf;
                  DAT_004b0221 = DAT_004b0219 ^ 100;
                  DAT_004b0222 = DAT_004b021a ^ 0x28;
                  DAT_004b0223 = DAT_004b021b ^ 0x90;
                  DAT_004b0224 = DAT_004b021c ^ 0x94;
                  DAT_004b0225 = DAT_004b021d ^ 0x29;
                  DAT_004b0226 = DAT_004b021e ^ 0x8e;
                  DAT_004b0227 = DAT_004b021f ^ 0xd6;
                  DAT_004b0216 = DAT_004b0214 ^ 0xdc;
                  DAT_004b0217 = DAT_004b0215 ^ 0x7f;
                  DAT_004b0200 = DAT_004b01e0 ^ 0xec;
                  DAT_004b0201 = DAT_004b01e1 ^ 0x6d;
                  DAT_004b0202 = DAT_004b01e2 ^ 0xf3;
                  DAT_004b0203 = DAT_004b01e3 ^ 0x76;
                  DAT_004b0204 = DAT_004b01e4 ^ 0xe5;
                  DAT_004b0205 = DAT_004b01e5 ^ 0x7c;
                  DAT_004b0206 = DAT_004b01e6 ^ 0xab;
                  DAT_004b0207 = DAT_004b01e7 ^ 0x4d;
                  DAT_004b0208 = DAT_004b01e8 ^ 0xe0;
                  DAT_004b0209 = DAT_004b01e9 ^ 0xd0;
                  DAT_004b020a = DAT_004b01ea ^ 0x88;
                  DAT_004b020b = DAT_004b01eb ^ 0x17;
                  DAT_004b020c = DAT_004b01ec ^ 1;
                  DAT_004b020d = DAT_004b01ed ^ 0xaf;
                  DAT_004b020e = DAT_004b01ee ^ 0xfb;
                  DAT_004b020f = DAT_004b01ef ^ 0x68;
                  DAT_004b0210 = DAT_004b01f0 ^ 0x54;
                  DAT_004b0211 = DAT_004b01f1 ^ 0x52;
                  DAT_004b0212 = DAT_004b01f2 ^ 0x83;
                  DAT_004b0213 = DAT_004b01f3 ^ 0x6b;
                  DAT_004b0177 = DAT_004b016d ^ 0xab;
                  DAT_004b0178 = DAT_004b016e ^ 0x33;
                  DAT_004b0179 = DAT_004b016f ^ 0xb6;
                  DAT_004b017a = DAT_004b0170 ^ 0x9b;
                  DAT_004b017b = DAT_004b0171 ^ 0x9e;
                  DAT_004b017c = DAT_004b0172 ^ 0xb;
                  DAT_004b017d = DAT_004b0173 ^ 0x3d;
                  DAT_004b017e = DAT_004b0174 ^ 0x54;
                  DAT_004b017f = DAT_004b0175 ^ 0x9b;
                  DAT_004b0180 = DAT_004b0176 ^ 0x34;
                  DAT_004b01bb = DAT_004b01b9 ^ 0xa2;
                  DAT_004b01bc = DAT_004b01ba ^ 0xa9;
                  DAT_004b019a = DAT_004b0195 ^ 0x2b;
                  DAT_004b019b = DAT_004b0196 ^ 0xf1;
                  DAT_004b019c = DAT_004b0197 ^ 0x27;
                  DAT_004b019d = DAT_004b0198 ^ 0xa3;
                  DAT_004b019e = DAT_004b0199 ^ 0xee;
                  DAT_004b01c7 = DAT_004b01bd ^ 0x7b;
                  DAT_004b01c8 = DAT_004b01be ^ 0xd;
                  DAT_004b01c9 = DAT_004b01bf ^ 0x70;
                  DAT_004b01ca = DAT_004b01c0 ^ 0xcc;
                  DAT_004b01cb = DAT_004b01c1 ^ 0xf3;
                  DAT_004b01cc = DAT_004b01c2 ^ 0x8b;
                  DAT_004b01cd = DAT_004b01c3 ^ 8;
                  DAT_004b01ce = DAT_004b01c4 ^ 0xa7;
                  DAT_004b01cf = DAT_004b01c5 ^ 0x71;
                  DAT_004b01d0 = DAT_004b01c6 ^ 0x79;
                  DAT_004b01a2 = DAT_004b019f ^ 0x96;
                  DAT_004b01a3 = DAT_004b01a0 ^ 0xb2;
                  DAT_004b01a4 = DAT_004b01a1 ^ 0xb2;
                  DAT_004b0163 = DAT_004b0159 ^ 0x8a;
                  DAT_004b0164 = DAT_004b015a ^ 0x9c;
                  DAT_004b0165 = DAT_004b015b ^ 0x4e;
                  DAT_004b0166 = DAT_004b015c ^ 0x11;
                  DAT_004b0167 = DAT_004b015d ^ 0xec;
                  DAT_004b0168 = DAT_004b015e ^ 0xae;
                  DAT_004b0169 = DAT_004b015f ^ 0xe7;
                  *local_390 = 0x435d7594;
                }
                else if (local_388 == -0x777ee640) {
                  uVar9 = (DAT_004b1880 + DAT_004b1884 | 0xa3a81b39U) * -0x8f4b6e5 & 0x8f5bab1e;
                  bVar4 = 0x17497d58 < uVar9;
                  bVar5 = uVar9 == 0x17497d59;
                  iVar8 = -0x34d33a76;
                  iVar11 = 0x6199471d;
                  goto LAB_0022f3e4;
                }
              }
              else if (local_388 == -0x7734cbd9) {
                local_249 = _objc_msgSend(local_b8,local_248);
                *local_390 = -0x3d832628;
              }
              else if (local_388 == -0x76ede483) {
                *local_390 = 0x35b08de0;
              }
              else if (local_388 == -0x767867cb) {
                bVar5 = 0xabd934b6 < (DAT_004b1780 - DAT_004b1784) * -0x52edf7c1 + 0x89bede08U;
                iVar8 = -0x42174fe4;
                iVar11 = -0x758c6b9b;
                goto LAB_0022ecd0;
              }
              goto LAB_002261bc;
            }
            if (-0x73f6c03d < local_388) {
              if (local_388 == -0x73f6c03c) {
                *local_390 = -0x2c1a2a2f;
              }
              else {
                if (local_388 == -0x71e2b344) {
                  bVar5 = DAT_004b17a0 + DAT_004b17a4 == 0x72c3ad5a;
                  iVar11 = -0xd82003c;
                  iVar8 = -0x74ac28fd;
                  goto LAB_0022f660;
                }
                if (local_388 == -0x70c6e8c9) {
                  uVar9 = 0;
                  if (DAT_004b1acc != 0) {
                    uVar9 = DAT_004b1ac8 / DAT_004b1acc;
                  }
                  uVar9 = ((uVar9 >> 4) / 0xd7df38d) * -0x3d465a9b & 0x47ddf367;
                  local_2b8 = PTR_s_meCardTimeFormat_0048a438;
                  bVar4 = 0x6770e9dd < uVar9;
                  bVar5 = uVar9 == 0x6770e9de;
                  iVar11 = -0x70c6e8c9;
                  iVar8 = -0x73f6c03c;
                  goto LAB_0022ec78;
                }
              }
              goto LAB_002261bc;
            }
            if (local_388 == -0x75ffef64) {
              *local_390 = 0xd9420d0;
              goto LAB_002261bc;
            }
            if (local_388 == -0x758c6b9b) {
              *local_390 = -0x42174fe4;
              goto LAB_002261bc;
            }
            if (local_388 != -0x74ac28fd) goto LAB_002261bc;
            uVar9 = DAT_004b17a8 | DAT_004b17ac;
            local_e8 = PTR_s_referColorDark_00489ea8;
            _objc_msgSend(local_b8);
            local_f0 = _objc_retainAutoreleasedReturnValue();
            bVar5 = 0xf5f5fe33 < (uVar9 | 0xdfdbbff4) / 0x70be8646;
            iVar8 = -0xd82003c;
            iVar11 = -0x42d62650;
            goto LAB_0022ecd0;
          }
          if (local_388 < -0x7b555e96) {
            if (-0x7e2a8ebe < local_388) {
              if (local_388 == -0x7e2a8ebd) {
                _objc_release(local_110);
                iVar11 = -0x28457ee9;
                if (local_119 == '\0') {
                  iVar11 = 0x66aaca22;
                }
                goto LAB_0022e190;
              }
              if (local_388 == -0x7d10eef0) {
                _objc_msgSend(local_b8,PTR_s_setMeCardTimeColorDark__0048a488,
                              &PTR____CFConstantStringClassReference_004b0230);
                iVar11 = -0x43ae2e00;
                goto LAB_0022f54c;
              }
              if (local_388 == -0x7d0bcf6a) {
                *local_390 = -0x3c75c366;
              }
              goto LAB_002261bc;
            }
            if (local_388 == -0x7f9bf928) {
              bVar5 = (int)((long)((ulong)(uint)(DAT_004b1b90 - DAT_004b1b94) * 0xa70fd1eb) >> 0x3f)
                      == 0x781a374b;
              iVar8 = -0x39d5bd78;
              iVar11 = 0x26de2ec;
              goto LAB_0022f614;
            }
            if (local_388 != -0x7e3048ed) goto LAB_002261bc;
            bVar5 = local_d1 == '\0';
            iVar8 = -0x71e2b344;
            iVar11 = -0x767867cb;
          }
          else {
            if (local_388 < -0x79c90f26) {
              if (local_388 == -0x7b555e96) {
                *local_390 = -0x2ba0f77a;
              }
              else if (local_388 == -0x7b0ffccc) {
                *local_390 = 0x2c6e490a;
              }
              else if (local_388 == -0x7a3c3271) {
                *local_390 = 0x7547d7f3;
              }
              goto LAB_002261bc;
            }
            if (local_388 == -0x79c90f26) {
              *local_390 = 0x3cd7f856;
              goto LAB_002261bc;
            }
            if (local_388 == -0x78ac0531) {
              uVar9 = 0;
              if (DAT_004b17e4 != 0) {
                uVar9 = DAT_004b17e0 / DAT_004b17e4;
              }
              bVar5 = ((uint)((ulong)(uVar9 ^ 0xe5b23de7) * 0xaf84ba9b >> 0x3f) | 0x5dac7ff6) ==
                      0xbe5f9cd1;
              iVar8 = 0x44bf3b15;
              iVar11 = 0x12f9c753;
              goto LAB_0022f614;
            }
            if (local_388 != -0x78877d1e) goto LAB_002261bc;
            uVar9 = DAT_004b1918 - DAT_004b191c;
            lVar7 = _objc_msgSend(local_1f0,local_1e0,
                                  &PTR____CFConstantStringClassReference_004b03d0);
            local_1f1 = lVar7 != 0 | local_381 & 1;
            local_200 = local_380 + 1;
            local_201 = local_200 == local_370;
            bVar5 = (uVar9 & 0x81d8d170) == 0x2da8837b;
            iVar8 = -0x5872972c;
            iVar11 = 0x4cd3404a;
          }
        }
        else if (local_388 < -0x69a62454) {
          if (-0x6dec246f < local_388) {
            if (-0x6cd554ae < local_388) {
              if (local_388 == -0x6cd554ad) {
                uVar9 = (DAT_004b1b50 * DAT_004b1b54 | 0x26090ac3U) + 0xabf56f75;
                bVar4 = 0x29e89b57 < uVar9;
                bVar5 = uVar9 == 0x29e89b58;
                iVar8 = -0x6f07fe1c;
                iVar11 = 0x50ab0c8d;
                goto LAB_0022f3e4;
              }
              if (local_388 == -0x6b8c7bf2) {
                *local_390 = -0x2d89e132;
              }
              else if (local_388 == -0x6ae802f2) {
                *local_390 = 0x4c979da7;
              }
              goto LAB_002261bc;
            }
            if (local_388 == -0x6dec246e) {
              uVar9 = DAT_004b1778 * DAT_004b177c;
              local_d0 = PTR_s_length_00489d78;
              lVar7 = _objc_msgSend(local_c8);
              local_d1 = lVar7 == 0;
              _objc_release(local_c8);
              iVar11 = -0x6dec246e;
              if ((uVar9 ^ 0xe4895223) + 0x86b17ec1 < 0x1dd03a8d) {
                iVar11 = -0x7e3048ed;
              }
LAB_0022e190:
              *local_390 = iVar11;
              goto LAB_002261bc;
            }
            if (local_388 != -0x6d7e1abc) {
              if (local_388 == -0x6d77502b) {
                *local_390 = 0x5abf157d;
              }
              goto LAB_002261bc;
            }
            _objc_msgSend(local_b8,PTR_s_setInitMaskConfig__0048b2e8,1);
            _objc_msgSend(local_b8,PTR_s_setUseBubbleMask__0048a6f0,1);
            _objc_msgSend(uVar1,local_b8,PTR_s_setMaskScale__0048a690);
            _objc_msgSend(local_b8,PTR_s_setMaskOffsetX__0048a688,0);
            _objc_msgSend(local_b8,PTR_s_setMaskOffsetY__0048a680,0);
            local_278 = PTR_s_setMeMaskScale__0048a670;
            iVar11 = 0x4dec854e;
            goto LAB_0022f54c;
          }
          if (local_388 < -0x6f07fe1c) {
            if (local_388 == -0x701ad132) {
              *local_390 = -0x1262fbbf;
              goto LAB_002261bc;
            }
            if (local_388 != -0x700c20c8) goto LAB_002261bc;
            uVar9 = DAT_004b18e8 - DAT_004b18ec;
            _objc_enumerationMutation(local_1a0);
            bVar5 = ((uVar9 ^ 0x1eb95abd) + 0x53df6758 & 0x36f085cb) == 0xd8f56fce;
            iVar8 = -0x700c20c8;
            iVar11 = 0x26db4146;
          }
          else {
            if (local_388 != -0x6f07fe1c) {
              if (local_388 == -0x6ea4c160) {
                bVar5 = local_229 == '\0';
                iVar11 = -0x61aa9c20;
                iVar8 = -0x4be65bf6;
                goto LAB_0022f928;
              }
              if (local_388 == -0x6e115add) {
                uVar9 = ((uint)(DAT_004b1ab0 * DAT_004b1ab4) / 0x52c06451) * -0xa0e2a3e + 0x44e70e5f
                ;
                bVar4 = 0x81034936 < uVar9;
                bVar5 = uVar9 == 0x81034937;
                iVar8 = -0x2939a540;
                iVar11 = -0x3f808072;
                goto LAB_0022f3e4;
              }
              goto LAB_002261bc;
            }
            uVar9 = 0;
            if (DAT_004b1b5c != 0) {
              uVar9 = DAT_004b1b58 / DAT_004b1b5c;
            }
            uVar9 = uVar9 ^ local_39c;
            lVar7 = _objc_msgSend(local_308,local_d0);
            local_309 = lVar7 == 0;
            _objc_release(local_308);
            bVar5 = (int)((long)((ulong)uVar9 * 0x8e236f51) >> 0x3f) == 0x1a7f9f69;
            iVar8 = 0x50ab0c8d;
            iVar11 = -0x7d0bcf6a;
          }
        }
        else {
          if (local_388 < -0x66e25a49) {
            if (-0x694a544a < local_388) {
              if (local_388 == -0x694a5449) {
                iVar11 = 0x5ab66226;
                if ((DAT_004b1820 + DAT_004b1824 + 0x467a37cbU & 0x8f7b4172) / 0x42d98622 !=
                    0x64f4fbe0) {
                  iVar11 = -0x24ea07;
                }
                goto LAB_0022f9ac;
              }
              if (local_388 == -0x69093ee6) {
                *local_390 = -0x49a933d1;
              }
              else if (local_388 == -0x67797b3c) {
                bVar5 = (DAT_004b1960 + DAT_004b1964 & 0xb32e7bf1U | 0xb32e2bf0) == 0x9b43acbc;
                iVar8 = 0x4abb052b;
                iVar11 = -0x6401c583;
                goto LAB_0022f614;
              }
              goto LAB_002261bc;
            }
            if (local_388 != -0x69a62454) {
              if (local_388 == -0x6983d577) {
                *local_390 = 0x286c1aa9;
              }
              goto LAB_002261bc;
            }
            local_318 = PTR_s_setCardNameColorDark__0048a400;
            iVar11 = 0x71d8e47a;
            if (DAT_004b1b78 * DAT_004b1b7c * 0x28ceb77d == 0x77d237c0) {
              iVar11 = -0x69a62454;
            }
            goto LAB_0022f9ac;
          }
          if (-0x6401c584 < local_388) {
            if (local_388 == -0x6401c583) {
              *local_390 = 0x4abb052b;
            }
            else if (local_388 == -0x63b40f06) {
              *local_390 = 0x55a0f5a6;
            }
            else if (local_388 == -0x62c0cb54) {
              *local_390 = -0x38968698;
            }
            goto LAB_002261bc;
          }
          if (local_388 == -0x66e25a49) {
            bVar5 = local_f1 == '\0';
            iVar8 = -0x78ac0531;
            iVar11 = -0x62891aeb;
          }
          else {
            if (local_388 != -0x64e6edd7) {
              if (local_388 == -0x640d609d) {
                _objc_msgSend(local_b8,local_128,&PTR____CFConstantStringClassReference_004b03d0);
                *local_390 = -0x6021fe62;
              }
              goto LAB_002261bc;
            }
            bVar5 = local_22a == '\0';
            iVar8 = -0x4143c94b;
            iVar11 = -0x61aa9c20;
          }
        }
      }
      else if (local_388 < -0x577d7f71) {
        if (local_388 < -0x5c1f7e2d) {
          if (local_388 < -0x6063170a) {
            if (local_388 < -0x61aa9c20) {
              if (local_388 == -0x62891aeb) {
                uVar9 = 0;
                if (DAT_004b17d4 != 0) {
                  uVar9 = DAT_004b17d0 / DAT_004b17d4;
                }
                bVar5 = (uint)((ulong)(uVar9 + 0x36eff597) * 0x1f68be91 >> 0x3b) * -0x6f0d2bfd ==
                        -0x63210473;
                iVar8 = -0x1c76527b;
                iVar11 = 0x37af7893;
                goto LAB_0022f614;
              }
              if (local_388 == -0x62148234) {
                bVar5 = 0x8ea5c71b <
                        ((DAT_004b1b28 & DAT_004b1b2c | 0x1b29d519) + 0x7098a997 & 0x339e85e2);
                iVar8 = -0x62148234;
                iVar11 = 0x56b651dc;
                goto LAB_0022ecd0;
              }
            }
            else if (local_388 == -0x61aa9c20) {
              _objc_msgSend(local_b8,PTR_s_setEnabledMerge__0048af98,1);
              _objc_msgSend(local_b8,PTR_s_setIsGridLayout__0048a790,1);
              _objc_msgSend(local_b8,PTR_s_setMergeLayoutValue__0048af80,
                            &PTR____CFConstantStringClassReference_004b0370);
              local_238 = PTR_s_setMsgTimeFormat__0048add8;
              *local_390 = -0xe92d0e6;
            }
            else if (local_388 == -0x60c49dc6) {
              *local_390 = 0x56829934;
            }
            else if (local_388 == -0x60916d6f) {
              *local_390 = -0x50b935de;
            }
          }
          else if (local_388 < -0x5eee25f5) {
            if (local_388 == -0x6063170a) {
              *local_390 = -0x62148234;
            }
            else {
              if (local_388 == -0x6021fe62) {
                uVar9 = DAT_004b1818 * DAT_004b181c;
                _objc_msgSend(local_b8,local_128,&PTR____CFConstantStringClassReference_004b03d0);
                iVar11 = -0x6021fe62;
                if ((uVar9 & 0x9e40880 | 0x1a40880) < 0x73c6cfd7) {
                  iVar11 = 0x7ddaebf1;
                }
                goto LAB_0022f9ac;
              }
              if (local_388 == -0x5f219bf8) {
                *local_390 = -0x54d97bef;
              }
            }
          }
          else if (local_388 == -0x5eee25f5) {
            *local_390 = -0x2633ff2c;
          }
          else if (local_388 == -0x5e75ce1c) {
            *local_390 = -0x50804df0;
          }
          else if (local_388 == -0x5d1da19c) {
            _objc_msgSend(local_b8,local_2b0,&PTR____CFConstantStringClassReference_004b0250);
            *local_390 = -0x3300f7ac;
          }
          goto LAB_002261bc;
        }
        if (-0x5b441533 < local_388) {
          if (-0x58d8fac1 < local_388) {
            if (local_388 == -0x58d8fac0) {
              *local_390 = -0x7734cbd9;
            }
            else if (local_388 == -0x5872972c) {
              _objc_msgSend(local_1f0,local_1e0,&PTR____CFConstantStringClassReference_004b03d0);
              *local_390 = -0x78877d1e;
            }
            else if (local_388 == -0x5869138f) {
              *local_390 = 0x40f8e3c2;
            }
            goto LAB_002261bc;
          }
          if (local_388 == -0x5b441532) {
            uVar9 = 0;
            if (DAT_004b1a04 != 0) {
              uVar9 = DAT_004b1a00 / DAT_004b1a04;
            }
            uVar9 = (uint)((ulong)uVar9 * 0x296a3cff >> 0x3c) + 0xe9b97477 | 0xe7be80d9;
            bVar4 = 0xae9adc88 < uVar9;
            bVar5 = uVar9 == 0xae9adc89;
            iVar11 = 0x7e250459;
            iVar8 = 0x4c85d354;
            goto LAB_0022ec78;
          }
          if (local_388 != -0x5b17f50c) {
            if (local_388 == -0x596abd18) {
              bVar5 = 0xd3f42ed4 <
                      ((DAT_004b1ba0 * DAT_004b1ba4 * -0x5a0098f5 | 0x1e81197U) ^ 0xc04de687);
              iVar11 = 0x6929b09b;
              iVar8 = -0x1679fc8a;
              goto LAB_0022f328;
            }
            goto LAB_002261bc;
          }
          local_88 = DAT_004d187c;
          bVar5 = true;
          iVar11 = 0x6562c0e8;
          iVar8 = 0x2a1b0a82;
          goto LAB_0022f328;
        }
        if (local_388 < -0x5b8e8a50) {
          if (local_388 == -0x5c1f7e2d) {
            uVar9 = (DAT_004b19a8 & DAT_004b19ac) + 0xf1188da5 & 0x5bfcadfb | 0x5b64a15b;
            _objc_msgSend(local_b8,local_240,&PTR____CFConstantStringClassReference_004b0390);
            _objc_msgSend(local_b8,PTR_s_setSendMsgColorDark__00489ff8,
                          &PTR____CFConstantStringClassReference_004b0390);
            _objc_msgSend(local_b8,PTR_s_setPayMsgColor__00489f98,
                          &PTR____CFConstantStringClassReference_004b02f0);
            _objc_msgSend(local_b8,PTR_s_setPayMsgColorDark__00489fa0,
                          &PTR____CFConstantStringClassReference_004b02f0);
            _objc_msgSend(local_b8,PTR_s_setNickNameColor__00489f60,
                          &PTR____CFConstantStringClassReference_004b0310);
            _objc_msgSend(local_b8,PTR_s_setNickNameColorDark__00489f68,
                          &PTR____CFConstantStringClassReference_004b02d0);
            _objc_msgSend(local_b8,PTR_s_setTimeColor__00489f08,
                          &PTR____CFConstantStringClassReference_004b02b0);
            _objc_msgSend(local_b8,PTR_s_setTimeColorDark__00489f10,
                          &PTR____CFConstantStringClassReference_004b0270);
            _objc_msgSend(local_b8,PTR_s_setSendTimeColor__00489f28,
                          &PTR____CFConstantStringClassReference_004b02b0);
            _objc_msgSend(local_b8,PTR_s_setSendTimeColorDark__00489f30,
                          &PTR____CFConstantStringClassReference_004b0270);
            bVar4 = 0x2d39bf2c < uVar9;
            bVar5 = uVar9 == 0x2d39bf2d;
            iVar8 = -0x50d3a5e9;
            iVar11 = -0x562e82f4;
            goto LAB_0022f3e4;
          }
          if (local_388 == -0x5ba27af3) {
            _objc_enumerationMutation(local_1a0);
            *local_390 = -0x700c20c8;
          }
          goto LAB_002261bc;
        }
        if (local_388 == -0x5b8e8a50) {
          *local_390 = -0xcd543ad;
          goto LAB_002261bc;
        }
        if (local_388 != -0x5b8ab82b) {
          if (local_388 == -0x5b4f942f) {
            *local_390 = 0xeafc2c1;
          }
          goto LAB_002261bc;
        }
        iVar11 = DAT_004b19f8 * DAT_004b19fc;
        _objc_msgSend(local_b8,local_260,1);
        _objc_msgSend(local_b8,PTR_s_setSystemSeparator__0048a928,1);
        bVar5 = (iVar11 + 0xe2aef7e8U | 0xbdfedf0d) == 0xa78e5c33;
        iVar8 = 0x1954ac38;
        iVar11 = -0x229fb8f8;
      }
      else if (local_388 < -0x5083a33f) {
        if (-0x54d97bf0 < local_388) {
          if (local_388 < -0x52871bb3) {
            if (local_388 == -0x54d97bef) {
              local_2f0 = PTR_s_cardNameColor_0048a3e8;
              bVar5 = 0x846b9f77 <
                      (uint)((ulong)(0x4ea14d51 -
                                    (int)((long)((ulong)(uint)(DAT_004b1b38 + DAT_004b1b3c) *
                                                0xbb898a23) >> 0x3f)) * 0x4fe1bfab >> 0x3c);
              iVar8 = -0x54d97bef;
              iVar11 = 0x39232662;
              goto LAB_0022ecd0;
            }
            if (local_388 == -0x546fdd0f) {
              *local_390 = -0x43ae2e00;
            }
            else if (local_388 == -0x536c3c93) {
              *local_390 = 0x10b39cf6;
            }
          }
          else {
            if (local_388 == -0x52871bb3) {
              local_1e0 = PTR_s_caseInsensitiveCompare__0048b2c8;
              bVar5 = ((uint)((ulong)(uint)(DAT_004b18d8 * DAT_004b18dc) * 0x412d69f >> 0x39) |
                      0x10016061) == 0x8913771c;
              iVar11 = -0x52871bb3;
              iVar8 = -0x208a579f;
              goto LAB_0022f660;
            }
            if (local_388 == -0x50d3a5e9) {
              _objc_msgSend(local_b8,local_240,&PTR____CFConstantStringClassReference_004b0390);
              _objc_msgSend(local_b8,PTR_s_setSendMsgColorDark__00489ff8,
                            &PTR____CFConstantStringClassReference_004b0390);
              _objc_msgSend(local_b8,PTR_s_setPayMsgColor__00489f98,
                            &PTR____CFConstantStringClassReference_004b02f0);
              _objc_msgSend(local_b8,PTR_s_setPayMsgColorDark__00489fa0,
                            &PTR____CFConstantStringClassReference_004b02f0);
              _objc_msgSend(local_b8,PTR_s_setNickNameColor__00489f60,
                            &PTR____CFConstantStringClassReference_004b0310);
              _objc_msgSend(local_b8,PTR_s_setNickNameColorDark__00489f68,
                            &PTR____CFConstantStringClassReference_004b02d0);
              _objc_msgSend(local_b8,PTR_s_setTimeColor__00489f08,
                            &PTR____CFConstantStringClassReference_004b02b0);
              _objc_msgSend(local_b8,PTR_s_setTimeColorDark__00489f10,
                            &PTR____CFConstantStringClassReference_004b0270);
              _objc_msgSend(local_b8,PTR_s_setSendTimeColor__00489f28,
                            &PTR____CFConstantStringClassReference_004b02b0);
              _objc_msgSend(local_b8,PTR_s_setSendTimeColorDark__00489f30,
                            &PTR____CFConstantStringClassReference_004b0270);
              *local_390 = -0x5c1f7e2d;
            }
            else if (local_388 == -0x50b935de) {
              *local_390 = 0x31a73462;
            }
          }
          goto LAB_002261bc;
        }
        if (-0x55b097a4 < local_388) {
          if (local_388 == -0x55b097a3) {
            *local_390 = -0x1cdec8eb;
          }
          else {
            if (local_388 == -0x55a2ac57) {
              iVar8 = DAT_004b1b68 + DAT_004b1b6c;
              _objc_msgSend(local_b8,PTR_s_setCardNameColor__0048a3f8,
                            &PTR____CFConstantStringClassReference_004b02b0);
              iVar11 = -0x55a2ac57;
              if ((iVar8 + 0x1a577d66U & 0xc94a1293) != 0x7bc84eed) {
                iVar11 = -0x2d609694;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 == -0x5530a9f1) {
              local_1c0 = local_98 + 2;
              local_1c8 = (long *)*local_1c0;
              bVar5 = (uint)((ulong)((DAT_004b18b8 ^ DAT_004b18bc) + 0x63a60965) * 0x77e02c25 >>
                            0x3e) == 0xfa844ba5;
              iVar8 = 0x458cc9ac;
              iVar11 = -0x5b8e8a50;
              goto LAB_0022f9a8;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 != -0x577d7f71) {
          if (local_388 == -0x562e82f4) {
            *local_390 = -0x4143c94b;
          }
          goto LAB_002261bc;
        }
        uVar9 = 0;
        if (DAT_004b1a4c != 0) {
          uVar9 = DAT_004b1a48 / DAT_004b1a4c;
        }
        dVar12 = (double)_objc_msgSend(local_b8,local_288);
        local_289 = 0.0 < dVar12;
        bVar5 = (uVar9 + 0x3c12e08 & 0x5a950c40) == 0xf58ae5e1;
        iVar8 = 0xf6314d;
        iVar11 = -0x23915d03;
      }
      else {
        if (-0x4bfb1e77 < local_388) {
          if (local_388 < -0x4ae89d26) {
            if (local_388 == -0x4bfb1e76) {
              *local_390 = 0x27120821;
            }
            else if (local_388 == -0x4befffeb) {
              *local_390 = 0x72e76944;
            }
            else if (local_388 == -0x4be65bf6) {
              uVar9 = (DAT_004b1970 & DAT_004b1974 & 0xab260aa) * 0x18c4cba4 + 0xde689f6c;
              bVar4 = 0x72535a95 < uVar9;
              bVar5 = uVar9 == 0x72535a96;
              iVar11 = -0x6fd5a5a;
              iVar8 = -0x11521a5d;
              goto LAB_0022ec78;
            }
          }
          else {
            if (local_388 == -0x4ae89d26) {
              uVar9 = 0;
              if (DAT_004b1a94 != 0) {
                uVar9 = DAT_004b1a90 / DAT_004b1a94;
              }
              uVar9 = (uint)((ulong)(uVar9 | 0xbc61ee0) * 0x27401745 >> 0x3d) * -0x629f1b8d;
              bVar4 = 0xfb2387b8 < uVar9;
              bVar5 = uVar9 == 0xfb2387b9;
              iVar8 = -0x69093ee6;
              iVar11 = -0x23f3d292;
              goto LAB_0022f3e4;
            }
            if (local_388 == -0x4a953627) {
              *local_390 = -0x7f9bf928;
            }
            else if (local_388 == -0x49a933d1) {
              *local_390 = 0x6f407642;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 < -0x4f7536ff) {
          if (local_388 == -0x5083a33f) {
            *local_390 = 0x30f13092;
          }
          else {
            if (local_388 == -0x50804df0) {
              iVar11 = -0x50804df0;
              if (0xb92bf57 <
                  ((DAT_004b1ae8 | DAT_004b1aec) * -0x12e249d1) / 0x760ee92a + 0x34420551) {
                iVar11 = -0x3705e07d;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 == -0x4f9f45c3) {
              *local_390 = -0x4f7536ff;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 == -0x4f7536ff) {
          *local_390 = 0x3166c7e8;
          goto LAB_002261bc;
        }
        if (local_388 == -0x4e07a6fd) {
          uVar9 = DAT_004b1aa8 * DAT_004b1aac;
          lVar7 = _objc_msgSend(local_2a0,local_d0);
          local_2a1 = lVar7 == 0;
          _objc_release(local_2a0);
          bVar5 = 0x8e1b95fc < (uVar9 & 0x8a982e1b | 0x8182018) + 0xe2c8c8db;
          iVar11 = 0x3842042c;
          iVar8 = 0x2a74ab5a;
          goto LAB_0022f328;
        }
        if (local_388 != -0x4c0ba975) goto LAB_002261bc;
        uVar9 = DAT_004b18a8 * DAT_004b18ac;
        _objc_release(local_180);
        _objc_release(local_178);
        _objc_release(local_170);
        local_1a8 = PTR_s_countByEnumeratingWithState_obje_00489c48;
        local_1b0 = _objc_msgSend(local_1a0,PTR_s_countByEnumeratingWithState_obje_00489c48,local_98
                                  ,local_a0,0x10);
        local_1b1 = local_1b0 == 0;
        bVar5 = (uVar9 / 0x1e675377) * -0x49b72198 == -0x4da8b633;
        iVar8 = -0x4c0ba975;
        iVar11 = 0x19b226b;
      }
LAB_0022f9a8:
      if (bVar5) {
        iVar11 = iVar8;
      }
      goto LAB_0022f9ac;
    }
    if (local_388 < -0x2a4932e4) {
      if (local_388 < -0x3ace79c0) {
        if (local_388 < -0x4143c94b) {
          if (-0x45dd0d1a < local_388) {
            if (local_388 < -0x42174fe4) {
              if (local_388 == -0x45dd0d19) {
                *local_390 = 0xc727d69;
              }
              else {
                if (local_388 == -0x43ae2e00) {
                  uVar9 = DAT_004b1be8 * DAT_004b1bec;
                  _objc_msgSend(local_b8,PTR_s_setMeCardTimeColorDark__0048a488,
                                &PTR____CFConstantStringClassReference_004b0230);
                  bVar5 = 0x6aafc383 < (uVar9 ^ 0x6efa9413) + 0x62fa3e11;
                  iVar11 = -0x43ae2e00;
                  iVar8 = -0x7a3c3271;
                  goto LAB_0022ecd0;
                }
                if (local_388 == -0x42d62650) {
                  *local_390 = 0x1669173b;
                }
              }
            }
            else {
              if (local_388 == -0x42174fe4) {
                uVar9 = (DAT_004b1788 + DAT_004b178c & 0x8589b6bfU) + 0x81b62b85 & 0x802e64f7;
                local_e0 = PTR_s_setReferColor__00489eb0;
                bVar4 = 0xf8e7ef72 < uVar9;
                bVar5 = uVar9 == 0xf8e7ef73;
                iVar11 = -0x758c6b9b;
                iVar8 = 0x327467c7;
                goto LAB_0022ec78;
              }
              if (local_388 == -0x41fafbb0) {
                uVar9 = DAT_004b1ad0 + DAT_004b1ad4 + 0xed84ede9U & 0xb6cfef55;
                bVar4 = 0x57317058 < uVar9;
                bVar5 = uVar9 == 0x57317059;
                iVar8 = 0x6887e36b;
                iVar11 = 0x47a2fc07;
                goto LAB_0022f3e4;
              }
              if (local_388 == -0x41910924) {
                bVar5 = 0x7ff0def3 <
                        (DAT_004b1900 * DAT_004b1904 * -0x2a65d65d + 0x16d0c77bU ^ 0x2afb2917);
                iVar11 = -0x1eb6e864;
                iVar8 = 0x11aa6e1a;
                goto LAB_0022f328;
              }
            }
            goto LAB_002261bc;
          }
          if (local_388 < -0x481e200f) {
            if (local_388 == -0x4943ceaf) {
              bVar5 = 0x6c7b8b93 <
                      ((DAT_004b1bc0 & DAT_004b1bc4) + 0x75f725d4 & 0xbefacf7b | 0x98124b03);
              iVar8 = 0x2786bd4f;
              iVar11 = -0x28ea702;
              goto LAB_0022ecd0;
            }
            if (local_388 == -0x48899460) {
              *local_390 = -0x2b6d5e52;
            }
            goto LAB_002261bc;
          }
          if (local_388 == -0x481e200f) {
            uVar9 = (DAT_004b17b8 | DAT_004b17bc | 0x10031a49) ^ 0x80034048 | 0x6f64a496;
            bVar4 = 0x3a544f09 < uVar9;
            bVar5 = uVar9 == 0x3a544f0a;
            iVar8 = -0x481e200f;
            iVar11 = -0x361d13b2;
            goto LAB_0022f3e4;
          }
          if (local_388 != -0x47388dd1) {
            if (local_388 == -0x467beaff) {
              bVar5 = 0xfb743bcf <
                      (uint)((ulong)(uint)(DAT_004b1a60 * DAT_004b1a64) * 0x2bcbfbe9 >> 0x3c) *
                      -0x5602d14 + 0xdfd4c654;
              iVar11 = -0x2633ff2c;
              iVar8 = -0x5eee25f5;
              goto LAB_0022f328;
            }
            goto LAB_002261bc;
          }
          bVar5 = 0xa4c113ef < ((DAT_004b1730 & DAT_004b1734) * 0x687edbad | 0x7e54e391);
          iVar11 = -0x77aca90d;
          iVar8 = 0x435d7594;
        }
        else {
          if (-0x3f1abcef < local_388) {
            if (local_388 < -0x3d832628) {
              if (local_388 == -0x3f1abcee) {
                local_1e8 = (undefined8 *)(*local_1d8 + local_380 * 8);
                *local_390 = -0x41910924;
              }
              else if (local_388 == -0x3ecf090f) {
                DAT_004d187c = 1;
                puVar10 = (undefined8 *)((long)puVar10 + -0xe0);
                *local_390 = 0x6233b11b;
              }
              else if (local_388 == -0x3e439455) {
                *local_390 = 0x1154ee72;
              }
            }
            else if (local_388 == -0x3d832628) {
              *local_390 = 0x14032de6;
            }
            else {
              if (local_388 == -0x3c806b86) {
                bVar5 = 0xfa7fe9d0 < (DAT_004b18f0 - DAT_004b18f4 | 0x7eedbf7fU) + 0xb5a436fc;
                iVar8 = 0x5cbe3bcb;
                iVar11 = 0x4c8fed89;
                goto LAB_0022ecd0;
              }
              if (local_388 == -0x3c75c366) {
                _objc_release(local_2f8);
                bVar5 = local_309 == '\0';
                iVar8 = -0x7f9bf928;
                iVar11 = 0x1f9555a3;
                goto LAB_0022f9a8;
              }
            }
            goto LAB_002261bc;
          }
          if (local_388 < -0x40d24e2e) {
            if (local_388 == -0x4143c94b) {
              *local_390 = -0x2cfcd6a4;
            }
            else if (local_388 == -0x41074592) {
              *local_390 = 0x268a94c9;
            }
            goto LAB_002261bc;
          }
          if (local_388 == -0x40d24e2e) {
            _objc_msgSend(local_b8,PTR_s_cardTimeFormat_0048a368);
            _objc_retainAutoreleasedReturnValue();
            *local_390 = 0x3a436e91;
            goto LAB_002261bc;
          }
          if (local_388 != -0x3fc9a619) {
            if (local_388 == -0x3f808072) {
              *local_390 = -0x2939a540;
            }
            goto LAB_002261bc;
          }
          bVar5 = 0xc653da39 < (DAT_004b1af0 & DAT_004b1af4 & 0x82d3ae13 | 0x2122a13) + 0xb2af4778;
          iVar11 = 0x48eeefbf;
          iVar8 = 0x1fd62f26;
        }
      }
      else if (local_388 < -0x3300f7ac) {
        if (local_388 < -0x3705e07d) {
          if (-0x38968699 < local_388) {
            if (local_388 == -0x38968698) {
              iVar11 = -0x6021fe62;
              if (((DAT_004b1810 | DAT_004b1814) + 0xea7b1a9d ^ 0x355c8d87) * 0x39c9df3b ==
                  -0x5a163024) {
                iVar11 = -0x640d609d;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 == -0x386ecb9b) {
              *local_390 = -0x3f1abcee;
            }
            else if (local_388 == -0x38640b8f) {
              *local_390 = -0x31315a8b;
            }
            goto LAB_002261bc;
          }
          if (local_388 == -0x3ace79c0) {
            _objc_msgSend(local_b8,local_148,&PTR____CFConstantStringClassReference_004b03d0);
            *local_390 = -0x76ede483;
            goto LAB_002261bc;
          }
          if (local_388 != -0x39d5bd78) goto LAB_002261bc;
          uVar9 = DAT_004b1b98 + DAT_004b1b9c;
          local_320 = PTR_s_cardTimeColor_0048a450;
          _objc_msgSend(local_b8);
          local_328 = _objc_retainAutoreleasedReturnValue();
          bVar5 = 0x19810b9c < (uVar9 & 0xcffff57e | 0xceaf757e);
          iVar11 = 0x26de2ec;
          iVar8 = 0x68323645;
        }
        else {
          if (local_388 < -0x34d33a76) {
            if (local_388 == -0x3705e07d) {
              *local_390 = -0x3fc9a619;
            }
            else if (local_388 == -0x361d13b2) {
              *local_390 = 0x5fbfeab9;
            }
            else if (local_388 == -0x34ee167b) {
              *local_390 = -0x10b514d4;
            }
            goto LAB_002261bc;
          }
          if (local_388 != -0x34d33a76) {
            if (local_388 == -0x341d6323) {
              *local_390 = 0x27ecd3cf;
            }
            else if (local_388 == -0x3314a0e4) {
              *local_390 = 0x2b5097a;
            }
            goto LAB_002261bc;
          }
          uVar9 = DAT_004b1888 | DAT_004b188c;
          local_98[1] = 0;
          *puVar3 = 0;
          puVar3[3] = 0;
          puVar3[2] = 0;
          puVar3[5] = 0;
          puVar3[4] = 0;
          puVar3[7] = 0;
          puVar3[6] = 0;
          _objc_msgSend(local_b8,local_c0);
          local_170 = _objc_retainAutoreleasedReturnValue();
          puVar3 = local_a8;
          *local_a8 = local_170;
          _objc_msgSend(local_b8,local_e8);
          local_178 = _objc_retainAutoreleasedReturnValue();
          puVar3[1] = local_178;
          puVar3 = local_a8;
          _objc_msgSend(local_b8,local_108);
          local_180 = _objc_retainAutoreleasedReturnValue();
          puVar3[2] = local_180;
          puVar3 = local_a8;
          _objc_msgSend(local_b8,local_130);
          local_188 = _objc_retainAutoreleasedReturnValue();
          puVar3[3] = local_188;
          local_190 = PTR__OBJC_CLASS___NSArray_0048ca20;
          local_198 = PTR_s_arrayWithObjects_count__00489778;
          bVar5 = 0x7ba48a01 < uVar9 * -0x7a370224 + 0x5506324f;
          iVar11 = 0x6199471d;
          iVar8 = -0x4bfb1e76;
        }
      }
      else {
        if (-0x2cfcd6a5 < local_388) {
          if (local_388 < -0x2b6d5e52) {
            if (local_388 == -0x2cfcd6a4) {
              local_248 = PTR_s_messageSeparator_0048b2d8;
              bVar5 = 0xd7bb42e7 <
                      ((DAT_004b19b8 ^ DAT_004b19bc) + 0x4508ed3f & 0xdfed3618) / 0x604d9c8e;
              iVar8 = -0x272ff8a8;
              iVar11 = -0x58d8fac0;
              goto LAB_0022ecd0;
            }
            if (local_388 == -0x2c1a2a2f) {
              _objc_msgSend(local_b8,local_2b8);
              local_2c0 = _objc_retainAutoreleasedReturnValue();
              local_2c8 = _objc_msgSend(local_2c0,local_d0);
              *local_390 = -0x1e75eed4;
            }
            else if (local_388 == -0x2ba0f77a) {
              *local_390 = -0x1922a55e;
            }
            goto LAB_002261bc;
          }
          if (local_388 != -0x2b6d5e52) {
            if (local_388 == -0x2ae64f22) {
              *local_390 = 0x15d2b030;
            }
            else if (local_388 == -0x2ab68945) {
              *local_390 = 0x7e8ed9cd;
            }
            goto LAB_002261bc;
          }
          bVar5 = 0x6ccdc8fa <
                  (uint)((ulong)(DAT_004b1798 & DAT_004b179c | 0xeeafd7fb) * 0xa1069f53 >> 0x3f);
          iVar8 = -0x2b6d5e52;
          iVar11 = -0x23f5396a;
          goto LAB_0022ecd0;
        }
        if (local_388 < -0x2da005c2) {
          if (local_388 == -0x3300f7ac) {
            *local_390 = 0x576953e2;
          }
          else {
            if (local_388 == -0x31315a8b) {
              uVar9 = (DAT_004b1930 ^ DAT_004b1934) + 0xaeefa354 | 0xd06be1a6;
              bVar4 = 0x6db675c2 < uVar9;
              bVar5 = uVar9 == 0x6db675c3;
              iVar11 = 0x268a94c9;
              iVar8 = -0x41074592;
              goto LAB_0022ec78;
            }
            if (local_388 == -0x2e1b27f2) {
              *local_390 = -0x52871bb3;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 == -0x2da005c2) {
          _objc_msgSend(local_b8,local_340,&PTR____CFConstantStringClassReference_004b02b0);
          *local_390 = 0x2b66612d;
          goto LAB_002261bc;
        }
        if (local_388 != -0x2d89e132) {
          if (local_388 == -0x2d609694) {
            *local_390 = 0x1c546022;
          }
          goto LAB_002261bc;
        }
        bVar5 = 0xc41ca66f <
                (uint)((ulong)(uint)(DAT_004b1988 + DAT_004b198c) * 0x27f61dc1 >> 0x3d) + 0xd28e17d1
        ;
        iVar11 = -0x6b8c7bf2;
        iVar8 = -0x64e6edd7;
      }
LAB_0022f328:
      if (bVar5) {
        iVar11 = iVar8;
      }
      goto LAB_0022f9ac;
    }
    if (-0x1b28e904 < local_388) {
      if (local_388 < -0x131da825) {
        if (local_388 < -0x1679fc8a) {
          if (local_388 < -0x197489d8) {
            if (local_388 == -0x1b28e903) {
              _objc_msgSend(local_b8,local_100,&PTR____CFConstantStringClassReference_004b03d0);
              *local_390 = -0x7b555e96;
            }
            else if (local_388 == -0x1aff3a39) {
              bVar5 = ((DAT_004b1bd0 | DAT_004b1bd4) * 0x3167a86b & 0x10360004) == 0x20c7bea1;
              iVar8 = 0x2b66612d;
              iVar11 = -0x2da005c2;
LAB_0022f614:
              if (!bVar5) {
                iVar11 = iVar8;
              }
              goto LAB_0022f9ac;
            }
          }
          else {
            if (local_388 == -0x197489d8) {
              bVar5 = local_249 == '\0';
              iVar11 = -0x5b441532;
              iVar8 = 0x3e80e18d;
              goto LAB_0022f928;
            }
            if (local_388 == -0x1922a55e) {
              *local_390 = -0x78ac0531;
            }
            else if (local_388 == -0x18cd9147) {
              local_288 = PTR_s_leftMarginValue_0048a4a8;
              *local_390 = -0xaa08768;
            }
          }
        }
        else if (local_388 < -0x152213d5) {
          if (local_388 == -0x1679fc8a) {
            _objc_msgSend(local_b8,local_320);
            _objc_retainAutoreleasedReturnValue();
            *local_390 = 0x6929b09b;
          }
          else if (local_388 == -0x1538b546) {
            *local_390 = -0x18cd9147;
          }
          else if (local_388 == -0x15221eb2) {
            *local_390 = 0x71bda01f;
          }
        }
        else if (local_388 == -0x152213d5) {
          *local_390 = 0x9207831;
        }
        else if (local_388 == -0x151ae874) {
          _objc_msgSend(local_330,local_d0);
          _objc_release(local_330);
          *local_390 = -0xeef4eae;
        }
        else if (local_388 == -0x1481fb11) {
          *local_390 = -0x1165606;
        }
        goto LAB_002261bc;
      }
      if (local_388 < -0xfc73a8a) {
        if (local_388 < -0x1188e910) {
          if (local_388 == -0x131da825) {
            uVar9 = (DAT_004b1830 * DAT_004b1834 ^ 0x5bce2e42U) * 0x2ae7ac1e + 0x7ec68a70;
            bVar4 = 0xd62530ea < uVar9;
            bVar5 = uVar9 == 0xd62530eb;
            iVar8 = 0x2fae4685;
            iVar11 = 0x298e7879;
            goto LAB_0022f3e4;
          }
          if (local_388 == -0x12f00918) {
            *local_390 = 0x13879f4b;
          }
          else if (local_388 == -0x1262fbbf) {
            local_2e8 = PTR_s_setCardHeadSize__0048a570;
            bVar5 = 0x643d0b8d <
                    (uint)((ulong)(0xa32ed15b -
                                  (int)((long)((ulong)(uint)(DAT_004b1b18 + DAT_004b1b1c) *
                                              0xc80c5593) >> 0x3f)) * 0x376238f5 >> 0x3d);
            iVar8 = -0x1262fbbf;
            iVar11 = -0x27f77cf5;
            goto LAB_0022ecd0;
          }
          goto LAB_002261bc;
        }
        if (local_388 == -0x1188e910) {
          *local_390 = 0x14032de6;
          goto LAB_002261bc;
        }
        if (local_388 == -0x11521a5d) {
          uVar9 = 0;
          if (DAT_004b197c != 0) {
            uVar9 = DAT_004b1978 / DAT_004b197c;
          }
          _objc_msgSend(local_b8,local_220);
          uVar6 = _objc_retainAutoreleasedReturnValue();
          lVar7 = _objc_msgSend(uVar6,local_d0);
          local_22a = lVar7 == 0;
          _objc_release(uVar6);
          iVar11 = -0x152213d5;
          bVar4 = 0x2ac087a5 < uVar9 + 0x82cdf4d1;
          bVar5 = uVar9 + 0x82cdf4d1 == 0x2ac087a6;
          iVar8 = -0x6fd5a5a;
          goto LAB_0022ec78;
        }
        if (local_388 != -0x10b514d4) goto LAB_002261bc;
        bVar5 = 0x882612d3 < ((DAT_004b17f0 & DAT_004b17f4 ^ 0x7f1f0645) * -0x4bd386b6 | 0xb0ea7b30)
        ;
        iVar8 = -0x1165606;
        iVar11 = -0x1481fb11;
      }
      else {
        if (-0xe8a57a9 < local_388) {
          if (local_388 == -0xe8a57a8) {
            _objc_release(local_1a0);
            _objc_msgSend(local_b8,PTR_s_setEnabledReferColor__00489e88,local_382);
            *local_390 = 0x44af1631;
          }
          else {
            if (local_388 == -0xd82003c) {
              _objc_msgSend(local_b8,PTR_s_referColorDark_00489ea8);
              _objc_retainAutoreleasedReturnValue();
              iVar11 = -0x74ac28fd;
              goto LAB_0022f54c;
            }
            if (local_388 == -0xcd543ad) {
              local_1d0 = *local_1c8;
              *local_390 = 0xc18b66e;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 == -0xfc73a8a) {
          uVar9 = (DAT_004b1a70 + DAT_004b1a74) * 0x6dbb2842 + 0xd4818ef;
          bVar4 = 0x8d6cd915 < uVar9;
          bVar5 = uVar9 == 0x8d6cd916;
          iVar11 = 0x62961bcf;
          iVar8 = 0x7e997151;
          goto LAB_0022ec78;
        }
        if (local_388 != -0xeef4eae) {
          if (local_388 == -0xe92d0e6) {
            iVar11 = 0x7309ca88;
            if (((DAT_004b1990 - DAT_004b1994) + 0xf08cb378U & 0x91713548) == 0x316e5878) {
              iVar11 = 0x23246ceb;
            }
            goto LAB_0022f9ac;
          }
          goto LAB_002261bc;
        }
        uVar9 = DAT_004b1bb8 | DAT_004b1bbc;
        lVar7 = _objc_msgSend(local_330,local_d0);
        local_331 = lVar7 == 0;
        _objc_release(local_330);
        bVar5 = 0xe200d376 < ((uVar9 | 0x16cd0ba4) + 0x268d3c06 & 0x9e3eb521);
        iVar8 = -0x151ae874;
        iVar11 = -0xc53e54f;
      }
      goto LAB_0022ecd0;
    }
    if (local_388 < -0x23f5396a) {
      if (local_388 < -0x27f3c4de) {
        if (local_388 < -0x2939a540) {
          if (local_388 == -0x2a4932e4) {
            uVar9 = 0;
            if (DAT_004b1844 != 0) {
              uVar9 = DAT_004b1840 / DAT_004b1844;
            }
            uVar9 = uVar9 * 0xf00701f & 0xb2925187 ^ 0xba4ee3f3;
            bVar4 = 0xf2ed0d77 < uVar9;
            bVar5 = uVar9 == 0xf2ed0d78;
            iVar8 = -0x3ace79c0;
            iVar11 = -0x25b1e870;
            goto LAB_0022f3e4;
          }
          if (local_388 != -0x295e84d9) goto LAB_002261bc;
          uVar9 = 0;
          if (DAT_004b187c != 0) {
            uVar9 = DAT_004b1878 / DAT_004b187c;
          }
          _objc_msgSend(local_398,local_150);
          local_158 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_158,PTR_s_objectForKey__0048a370,
                        &PTR____CFConstantStringClassReference_004b0290);
          local_160 = _objc_retainAutoreleasedReturnValue();
          local_161 = local_160 == 0;
          bVar5 = 0x2d82106e < (uVar9 ^ 0xac8d8aca) * -0x767a11a5;
          iVar11 = 0x3583f85b;
          iVar8 = 0x1c3b37b7;
        }
        else {
          if (local_388 != -0x2939a540) {
            if (local_388 == -0x28457ee9) {
              bVar5 = 0xf7da1da6 < ((DAT_004b1800 - DAT_004b1804) + 0xb37441bdU | 0xb0ff2fc7);
              iVar11 = 0x30f13092;
              iVar8 = -0x5083a33f;
              goto LAB_0022f328;
            }
            if (local_388 == -0x27f77cf5) {
              *local_390 = -0x20478912;
            }
            goto LAB_002261bc;
          }
          local_2b0 = PTR_s_setCardTimeFormat__0048a580;
          bVar5 = 0x10628411 < ((DAT_004b1ab8 + DAT_004b1abc & 0x40844U | 0xffbb66a3) ^ 0x38ee0f9);
          iVar11 = -0x2939a540;
          iVar8 = 0x5b782573;
        }
        goto LAB_0022f328;
      }
      if (local_388 < -0x2633ff2c) {
        if (local_388 == -0x27f3c4de) {
          _objc_msgSend(local_b8,local_2f0);
          local_308 = _objc_retainAutoreleasedReturnValue();
          *local_390 = -0x6cd554ad;
        }
        else if (local_388 == -0x272ff8a8) {
          *local_390 = -0x2cfcd6a4;
        }
        else if (local_388 == -0x265dc721) {
          uVar9 = DAT_004b19e8 * DAT_004b19ec;
          _objc_msgSend(local_b8,local_258,1);
          local_260 = PTR_s_setTimeSeparator__0048a930;
          bVar5 = ((uVar9 ^ 0x33142a20) & 0xb37d2bb6) == 0x70aa574;
          iVar11 = -0x7ec99e3;
          iVar8 = 0x6bf75c38;
          goto LAB_0022f660;
        }
        goto LAB_002261bc;
      }
      if (local_388 != -0x2633ff2c) {
        if (local_388 == -0x25eb0afe) {
          *local_390 = -0x2ba0f77a;
        }
        else if (local_388 == -0x25b1e870) {
          _objc_msgSend(local_b8,local_148,&PTR____CFConstantStringClassReference_004b03d0);
          *local_390 = -0x3ace79c0;
        }
        goto LAB_002261bc;
      }
      local_298 = PTR_s_setLeftMarginValue__0048a4b0;
      bVar5 = ((DAT_004b1a68 * DAT_004b1a6c ^ 0x44800040U) & 0x44ad1848) == 0x3904338d;
      iVar11 = -0x5eee25f5;
      iVar8 = 0x5d67396a;
    }
    else {
      if (local_388 < -0x20478912) {
        if (local_388 < -0x23915d03) {
          if (local_388 == -0x23f5396a) {
            *local_390 = -0x71e2b344;
          }
          else if (local_388 == -0x23f3d292) {
            *local_390 = -0x69093ee6;
          }
        }
        else if (local_388 == -0x23915d03) {
          *local_390 = 0x60d1a9d;
        }
        else if (local_388 == -0x229fb8f8) {
          *local_390 = -0x5b441532;
        }
        else if (local_388 == -0x208a579f) {
          *local_390 = -0xc146557;
          local_351 = local_371;
          local_360 = 0;
        }
        goto LAB_002261bc;
      }
      if (-0x1e75eed5 < local_388) {
        if (local_388 == -0x1e75eed4) {
          _objc_release(local_2c0);
          bVar5 = lVar7 == 0;
          iVar8 = -0x3fc9a619;
          iVar11 = -0x41fafbb0;
          goto LAB_0022f614;
        }
        if (local_388 == -0x1cdec8eb) {
          uVar9 = ((DAT_004b1950 | DAT_004b1954) & 0x905000d0) + 0xb300e806;
          bVar4 = 0xdaabd5fe < uVar9;
          bVar5 = uVar9 == 0xdaabd5ff;
          iVar11 = -0x6ae802f2;
          iVar8 = 0x4c979da7;
          goto LAB_0022ec78;
        }
        if (local_388 == -0x1c76527b) {
          local_100 = PTR_s_setReferColorDark__00489eb8;
          iVar11 = 0x3f5d0b16;
          if (0xfab631df < (DAT_004b17d8 * DAT_004b17dc * -0x16649d70 & 0x41179652U | 0x41049452)) {
            iVar11 = -0x1c76527b;
          }
          goto LAB_0022f9ac;
        }
        goto LAB_002261bc;
      }
      if (local_388 == -0x20478912) {
        _objc_msgSend(local_b8,local_2e8,0x28);
        *local_390 = 0xc4b95de;
        goto LAB_002261bc;
      }
      if (local_388 == -0x202e13d5) {
        DAT_004b0144 = local_8b;
        DAT_004b00f9 = DAT_004b00f0 ^ 0x4e;
        DAT_004b00fa = DAT_004b00f1 ^ 0x7e;
        DAT_004b00fb = DAT_004b00f2 ^ 0x95;
        DAT_004b00fc = DAT_004b00f3 ^ 0x9b;
        DAT_004b00fd = DAT_004b00f4 ^ 0xc0;
        DAT_004b00fe = DAT_004b00f5 ^ 0x99;
        DAT_004b00ff = DAT_004b00f6 ^ 0x8a;
        DAT_004b0100 = DAT_004b00f7 ^ 0x47;
        DAT_004b0101 = DAT_004b00f8 ^ 0xe6;
        *local_390 = 0x257b0681;
        goto LAB_002261bc;
      }
      if (local_388 != -0x1eb6e864) goto LAB_002261bc;
      local_1f0 = *local_1e8;
      bVar5 = (DAT_004b1908 - DAT_004b190c | 0x1178f3e2U) * -0x65246608 == 0x7f4e1123;
      iVar11 = 0x11aa6e1a;
      iVar8 = 0x702d7dd7;
    }
  }
  else {
    iVar11 = 0x6233b11b;
    if (local_388 < 0x2f681f07) {
      if (local_388 < 0x13879f4b) {
        if (local_388 < 0x78012d0) {
          if (local_388 < -0x3181492) {
            if (local_388 < -0x7ec99e3) {
              if (local_388 < -0xaa08768) {
                if (local_388 == -0xc53e54f) {
                  *local_390 = -0x4943ceaf;
                }
                else if (local_388 == -0xc146557) {
                  local_380 = local_360;
                  local_381 = local_351;
                  bVar5 = *(long *)*local_1c0 == local_1d0;
                  iVar11 = -0x3f1abcee;
                  iVar8 = 0x5dbcb93a;
                  goto LAB_0022f660;
                }
              }
              else {
                if (local_388 == -0xaa08768) {
                  uVar9 = 0;
                  if (DAT_004b1a44 != 0) {
                    uVar9 = DAT_004b1a40 / DAT_004b1a44;
                  }
                  bVar5 = ((uVar9 | 0x1c5ec9a8) ^ 0x5ccc941c) * 0x4805fc56 == 0x3a1b1319;
                  iVar11 = -0x577d7f71;
                  iVar8 = 0xf6314d;
                  goto LAB_0022f928;
                }
                if (local_388 == -0x9ffac18) {
                  *local_390 = -0x546fdd0f;
                }
                else if (local_388 == -0x99c61cb) {
                  local_370 = local_350;
                  local_371 = local_341;
                  bVar5 = (DAT_004b18d0 * DAT_004b18d4 * 0x65f0bcd2 + 0x5a1747e2U & 0x470fc288) ==
                          0x45f51412;
                  iVar8 = -0x52871bb3;
                  iVar11 = -0x2e1b27f2;
                  goto LAB_0022f614;
                }
              }
              goto LAB_002261bc;
            }
            if (-0x5b5e318 < local_388) {
              if (local_388 == -0x5b5e317) {
                _objc_msgSend(local_b8,local_220);
                local_228 = _objc_retainAutoreleasedReturnValue();
                local_229 = local_228 == 0;
                *local_390 = -0x67797b3c;
              }
              else {
                if (local_388 == -0x57c7e02) {
                  bVar5 = (uint)((ulong)(DAT_004b19e0 & DAT_004b19e4 & 0x809a4002 | 0x5664bff5) *
                                 0x4c3e1649 >> 0x3e) == 0x223a4446;
                  iVar8 = -0x7ec99e3;
                  iVar11 = -0x265dc721;
                  goto LAB_0022f9a8;
                }
                if (local_388 == -0x4fb3f0b) {
                  _objc_msgSend(local_f0,local_d0);
                  _objc_release(local_f0);
                  *local_390 = 0x43aed94f;
                }
              }
              goto LAB_002261bc;
            }
            if (local_388 != -0x7ec99e3) {
              if (local_388 == -0x71b71cc) {
                _objc_msgSend(local_b8,local_2d0,&PTR____CFConstantStringClassReference_004b0250);
                iVar11 = 0x2c930924;
                goto LAB_0022f54c;
              }
              if (local_388 == -0x6fd5a5a) {
                _objc_msgSend(local_b8,local_220);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar6,local_d0);
                _objc_release(uVar6);
                *local_390 = -0x11521a5d;
              }
              goto LAB_002261bc;
            }
            _objc_msgSend(local_b8,local_258,1);
            iVar11 = -0x265dc721;
LAB_0022f54c:
            *local_390 = iVar11;
            goto LAB_002261bc;
          }
          if (local_388 < 0x19b226b) {
            if (local_388 < -0x1165606) {
              if (local_388 == -0x3181492) {
                *local_390 = 0x56829934;
              }
              else if (local_388 == -0x28ea702) {
                _objc_release(local_328);
                *local_390 = 0x2786bd4f;
              }
            }
            else {
              if (local_388 == -0x1165606) {
                local_119 = local_118 == 0;
                bVar5 = 0xe47f3b21 < (DAT_004b17f8 + DAT_004b17fc) * 0x563209e + 0xb9b1ba85U;
                iVar8 = -0x1481fb11;
                iVar11 = 0x20b268d3;
                goto LAB_0022ecd0;
              }
              if (local_388 == -0x24ea07) {
                uVar9 = DAT_004b1828 | DAT_004b182c;
                local_140 = _objc_msgSend(local_138,local_d0);
                iVar11 = -0x63b40f06;
                if ((uVar9 & 0xb879e3bf) == 0x17d29756) {
                  iVar11 = -0x24ea07;
                }
                goto LAB_0022f9ac;
              }
              if (local_388 == 0xf6314d) {
                _objc_msgSend(local_b8,local_288);
                *local_390 = -0x577d7f71;
              }
            }
            goto LAB_002261bc;
          }
          if (local_388 < 0x55de0e2) {
            if (local_388 == 0x19b226b) {
              iVar11 = 0xd637f30;
              if (local_1b1 == '\0') {
                iVar11 = 0x2bf958c7;
              }
              *local_390 = iVar11;
              local_361 = 0;
            }
            else if (local_388 == 0x26de2ec) {
              _objc_msgSend(local_b8,PTR_s_cardTimeColor_0048a450);
              _objc_retainAutoreleasedReturnValue();
              *local_390 = -0x39d5bd78;
            }
            else if (local_388 == 0x2b5097a) {
              bVar5 = 0xcce8747b <
                      ((DAT_004b1870 - DAT_004b1874 & 0xa8b21293U | 0x8120012) ^ 0x1114d88b);
              iVar11 = -0x295e84d9;
              iVar8 = 0x3583f85b;
              goto LAB_0022f328;
            }
            goto LAB_002261bc;
          }
          if (local_388 == 0x55de0e2) {
            uVar9 = DAT_004b1a28 & DAT_004b1a2c;
            _objc_msgSend(uVar1,local_b8,local_278);
            local_280 = PTR_s_setMeMaskOffsetX__0048a668;
            uVar9 = (uVar9 & 0x8ddebb18 ^ 0xb50caa93) / 0x43661b51;
            bVar4 = 0x4782d94a < uVar9;
            bVar5 = uVar9 == 0x4782d94b;
            iVar11 = 0x61b5080e;
            iVar8 = -0x60916d6f;
            goto LAB_0022ec78;
          }
          if (local_388 == 0x60d1a9d) {
            bVar5 = ((DAT_004b1a50 | DAT_004b1a54) & 0x4283c775) * -0x3d977c12 == -0x46d970f8;
            iVar11 = -0x4f7536ff;
            iVar8 = -0x4f9f45c3;
          }
          else {
            if (local_388 != 0x75f23a2) goto LAB_002261bc;
            bVar5 = (uint)((ulong)((DAT_004b1790 + DAT_004b1794 ^ 0x142cbc2eU) * 0x17021df4) *
                           0x2c0cc17f >> 0x3d) == 0xba8176ff;
            iVar11 = -0x2b6d5e52;
            iVar8 = -0x48899460;
          }
          goto LAB_0022f928;
        }
        if (0xe559244 < local_388) {
          if (local_388 < 0xf65a8f7) {
            if (local_388 < 0xe8a5a45) {
              if (local_388 == 0xe559245) {
                *local_390 = 0x66aaca22;
              }
              else if (local_388 == 0xe68ad02) {
                local_89 = local_88 == 0;
                *local_390 = 0x23a134b3;
              }
            }
            else if (local_388 == 0xe8a5a45) {
              *local_390 = 0x220c1425;
            }
            else {
              if (local_388 == 0xeafc2c1) {
                uVar9 = 0;
                if (DAT_004b1764 != 0) {
                  uVar9 = DAT_004b1760 / DAT_004b1764;
                }
                bVar5 = (uVar9 + 0x56d64d28 & 0x5c30cab1 | 0x54000031) == 0xdb41727a;
                iVar8 = 0x13312a29;
                iVar11 = 0x7a298533;
                goto LAB_0022f614;
              }
              if (local_388 == 0xec56013) {
                _objc_msgSend(local_1a0,local_1a8,local_98,local_a0,0x10);
                *local_390 = 0x6ba8fadb;
              }
            }
            goto LAB_002261bc;
          }
          if (0x11aa6e19 < local_388) {
            if (local_388 == 0x11aa6e1a) {
              *local_390 = -0x1eb6e864;
            }
            else if (local_388 == 0x12f9c753) {
              _objc_msgSend(local_b8,PTR_s_sendReferColor_00489ec0);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,local_d0);
              *local_390 = 0x44bf3b15;
            }
            else if (local_388 == 0x13312a29) {
              uVar9 = DAT_004b1768 | DAT_004b176c;
              _objc_msgSend(local_b0,PTR_s_shared_00489458);
              local_b8 = _objc_retainAutoreleasedReturnValue();
              local_c0 = PTR_s_referColor_00489ea0;
              _objc_msgSend();
              local_c8 = _objc_retainAutoreleasedReturnValue();
              bVar5 = 0xce873a54 <
                      (uint)((ulong)((uVar9 & 0x3e73a341) + 0x7e2b9ae1) * 0x19672e1f >> 0x3c);
              iVar8 = 0x13312a29;
              iVar11 = 0x4b7eee4c;
              goto LAB_0022ecd0;
            }
            goto LAB_002261bc;
          }
          if (local_388 == 0xf65a8f7) {
            bVar5 = (((DAT_004b1860 | DAT_004b1864) ^ 0xe8c0e4) * -0x69eeb810 | 0x2adcfb5c) ==
                    0x903804b9;
            iVar11 = 0xd9420d0;
            iVar8 = -0x75ffef64;
            goto LAB_0022f928;
          }
          if (local_388 != 0x10b39cf6) {
            if (local_388 == 0x1154ee72) {
              uVar9 = 0;
              if (DAT_004b1b04 != 0) {
                uVar9 = DAT_004b1b00 / DAT_004b1b04;
              }
              bVar5 = uVar9 * -0x9c5719c == -0x79ba92b1;
              iVar8 = -0x12f00918;
              iVar11 = 0x13879f4b;
              goto LAB_0022f9a8;
            }
            goto LAB_002261bc;
          }
          bVar5 = 0x67b85a85 <
                  (((uint)(DAT_004b1bb0 - DAT_004b1bb4) / 0x6b5e05b2 | 0x27b74638) ^ 0x636fff5e);
          iVar11 = -0xeef4eae;
          iVar8 = -0x151ae874;
          goto LAB_0022f328;
        }
        if (local_388 < 0xc4b95de) {
          if (local_388 < 0x9207831) {
            if (local_388 == 0x78012d0) {
              *local_390 = -0x4ae89d26;
            }
            else if (local_388 == 0x7f1853a) {
              *local_390 = -0x99c61cb;
              local_341 = 0;
              local_350 = local_1b0;
            }
          }
          else if (local_388 == 0x9207831) {
            _objc_release(local_228);
            *local_390 = 0x2b1afe22;
          }
          else if (local_388 == 0xa33a116) {
            *local_390 = -0x78877d1e;
          }
          else if (local_388 == 0xc18b66e) {
            bVar5 = 0x71dee6e7 <
                    ((DAT_004b18c0 & DAT_004b18c4) / 0x57a7ead7 + 0x47be1ab ^ 0x2cc993a5);
            iVar11 = 0x5abf157d;
            iVar8 = -0x6d77502b;
            goto LAB_0022f328;
          }
          goto LAB_002261bc;
        }
        if (local_388 < 0xd637f30) {
          if (local_388 == 0xc4b95de) {
            uVar9 = DAT_004b1b20 * DAT_004b1b24 + 0xa636653c;
            bVar4 = 0xb7fb6904 < uVar9;
            bVar5 = uVar9 == 0xb7fb6905;
            iVar8 = -0x62148234;
            iVar11 = -0x6063170a;
            goto LAB_0022f3e4;
          }
          if (local_388 == 0xc727d69) {
            *local_390 = 0xe8a5a45;
          }
          else if (local_388 == 0xd1e3c49) {
            iVar11 = -0x202e13d5;
            if ((DAT_004b1740 & DAT_004b1744 & 0xf9eed228 | 0xc9ec0000) / 0x5b83b80e < 0x750b3ed9) {
              iVar11 = 0x257b0681;
            }
            goto LAB_0022f9ac;
          }
          goto LAB_002261bc;
        }
        if (local_388 != 0xd637f30) {
          if (local_388 == 0xd85b4f3) {
            uVar9 = ((DAT_004b1b30 | DAT_004b1b34) / 0x6246dfe4 | 0xb168c754) ^ 0x30669d6e;
            bVar4 = 0xfe95275d < uVar9;
            bVar5 = uVar9 == 0xfe95275e;
            iVar8 = -0x54d97bef;
            iVar11 = -0x5f219bf8;
            goto LAB_0022f3e4;
          }
          if (local_388 == 0xd9420d0) {
            local_150 = PTR_s_userDefaults_0048abb8;
            bVar5 = 0xef11780 <
                    ((DAT_004b1868 | DAT_004b186c) + 0x13b7d70c & 0x170dac23) + 0x37cbebfe;
            iVar11 = 0xd9420d0;
            iVar8 = -0x3314a0e4;
            goto LAB_0022f328;
          }
          goto LAB_002261bc;
        }
        local_382 = local_361;
        iVar11 = -0xe8a57a8;
        if (((DAT_004b1940 + DAT_004b1944 | 0xa2e1c356U) ^ 0xada61434) / 0x11798608 < 0xd7e79687) {
          iVar11 = 0x44af1631;
        }
        goto LAB_0022f9ac;
      }
      if (0x257b0680 < local_388) {
        if (0x298e7878 < local_388) {
          if (local_388 < 0x2bf958c7) {
            if (local_388 < 0x2a74ab5a) {
              if (local_388 == 0x298e7879) {
                *local_390 = 0x2fae4685;
              }
              else if (local_388 == 0x29e0b25d) {
                _objc_msgSend(local_b8,PTR_s_setCardNameColor__0048a3f8,
                              &PTR____CFConstantStringClassReference_004b02b0);
                *local_390 = -0x55a2ac57;
              }
              else if (local_388 == 0x2a1b0a82) {
                *local_390 = 0xe68ad02;
              }
            }
            else {
              if (local_388 == 0x2a74ab5a) {
                bVar5 = local_2a1 == '\0';
                iVar8 = 0x576953e2;
                iVar11 = -0x6e115add;
                goto LAB_0022f9a8;
              }
              if (local_388 == 0x2b1afe22) {
                uVar9 = (DAT_004b1980 ^ DAT_004b1984) * 0x4cf9ba8c & 0x81864234;
                bVar4 = 0x6459575d < uVar9;
                bVar5 = uVar9 == 0x6459575e;
                iVar11 = -0x2d89e132;
                iVar8 = -0x6b8c7bf2;
                goto LAB_0022ec78;
              }
              if (local_388 == 0x2b66612d) {
                iVar11 = DAT_004b1bd8 - DAT_004b1bdc;
                _objc_msgSend(local_b8,local_340,&PTR____CFConstantStringClassReference_004b02b0);
                bVar5 = (iVar11 + 0x6a5a9312U | 0xd5f8d8aa) == 0xa3cac3b8;
                iVar11 = 0x2b66612d;
                iVar8 = -0x9ffac18;
                goto LAB_0022f660;
              }
            }
            goto LAB_002261bc;
          }
          if (local_388 < 0x2daf057f) {
            if (local_388 == 0x2bf958c7) {
              bVar5 = 0xd1c35349 <
                      ((DAT_004b18b0 - DAT_004b18b4) + 0xa8198907U ^ 0xbc57b856) + 0x2906a37c;
              iVar11 = -0x5530a9f1;
              iVar8 = 0x458cc9ac;
              goto LAB_0022f328;
            }
            if (local_388 == 0x2c6e490a) {
              _objc_msgSend(local_b8,PTR_s_setCardTimeColor__0048a460,
                            &PTR____CFConstantStringClassReference_004b02b0);
              _objc_msgSend(local_b8,PTR_s_setCardTimeColorDark__0048a468,
                            &PTR____CFConstantStringClassReference_004b0230);
              local_340 = PTR_s_setMeCardTimeColor__0048a480;
              *local_390 = 0x26af1f57;
            }
            else if (local_388 == 0x2c930924) {
              *local_390 = -0x50804df0;
            }
            goto LAB_002261bc;
          }
          if (local_388 == 0x2daf057f) {
            *local_390 = 0x1a163904;
            goto LAB_002261bc;
          }
          if (local_388 != 0x2dd932c7) {
            if (local_388 == 0x2e77f41b) {
              _objc_msgSend(local_b8,PTR_s_setCardTimeColor__0048a460,
                            &PTR____CFConstantStringClassReference_004b02b0);
              _objc_msgSend(local_b8,PTR_s_setCardTimeColorDark__0048a468,
                            &PTR____CFConstantStringClassReference_004b0230);
              *local_390 = 0x2c6e490a;
            }
            goto LAB_002261bc;
          }
          iVar8 = DAT_004b1a18 + DAT_004b1a1c;
          local_269 = _objc_msgSend(local_b8,local_268);
          iVar11 = 0x2dd932c7;
          if (iVar8 * 0x6b03853d + 0x2a35279dU < 0xc8f42f6f) {
            iVar11 = -0x5869138f;
          }
          goto LAB_0022f9ac;
        }
        if (local_388 < 0x26db4146) {
          if (0x2654e8ed < local_388) {
            if (local_388 == 0x2654e8ee) {
              _objc_msgSend(local_b8,local_2f0);
              local_2f8 = _objc_retainAutoreleasedReturnValue();
              *local_390 = 0x19b57347;
            }
            else if (local_388 == 0x268a94c9) {
              local_211 = local_210 == 0;
              *local_390 = 0x2222f48f;
            }
            else if (local_388 == 0x26af1f57) {
              *local_390 = -0x1aff3a39;
            }
            goto LAB_002261bc;
          }
          if (local_388 != 0x257b0681) {
            if (local_388 == 0x25fda88f) {
              uVar9 = ((DAT_004b1920 | DAT_004b1924) * 0x31d0670 & 0x7b94d250) + 0x5c29b902;
              bVar4 = 0x9d886992 < uVar9;
              bVar5 = uVar9 == 0x9d886993;
              iVar8 = 0x6ba8fadb;
              iVar11 = 0xec56013;
              goto LAB_0022f3e4;
            }
            goto LAB_002261bc;
          }
          DAT_004b0144 = local_8b;
          DAT_004b00f9 = DAT_004b00f0 ^ 0x4e;
          DAT_004b00fa = DAT_004b00f1 ^ 0x7e;
          DAT_004b00fb = DAT_004b00f2 ^ 0x95;
          DAT_004b00fc = DAT_004b00f3 ^ 0x9b;
          DAT_004b00fd = DAT_004b00f4 ^ 0xc0;
          DAT_004b00fe = DAT_004b00f5 ^ 0x99;
          DAT_004b00ff = DAT_004b00f6 ^ 0x8a;
          DAT_004b0100 = DAT_004b00f7 ^ 0x47;
          DAT_004b0101 = DAT_004b00f8 ^ 0xe6;
          iVar11 = 0x257b0681;
          if ((DAT_004b1748 * DAT_004b174c & 0x1a37cdf6U | 0xa32cdb2) != 0x4f1d1e40) {
            iVar11 = 0x5cdc00df;
          }
          goto LAB_0022f9ac;
        }
        if (local_388 < 0x27ecd3cf) {
          if (local_388 == 0x26db4146) {
            *local_390 = -0x3c806b86;
            goto LAB_002261bc;
          }
          if (local_388 == 0x27120821) {
            bVar5 = 0xb03fa524 <
                    ((DAT_004b1890 + DAT_004b1894 + 0xe470b9ceU | 0xe262db0a) ^ 0x304c63fe);
            iVar8 = 0x778066e8;
            iVar11 = 0x663e8491;
            goto LAB_0022ecd0;
          }
          if (local_388 != 0x2786bd4f) goto LAB_002261bc;
          uVar9 = (DAT_004b1bc8 * DAT_004b1bcc * -0x19ecac5 | 0x6946a800U) * 0x299237b6;
          _objc_release(local_328);
          bVar4 = 0xd2c30367 < uVar9;
          bVar5 = uVar9 == 0xd2c30368;
          iVar11 = 0x2786bd4f;
          iVar8 = 0x5a22fe8f;
        }
        else {
          if (local_388 != 0x27ecd3cf) {
            if (local_388 == 0x280e115d) {
              *local_390 = -0x71b71cc;
            }
            else if (local_388 == 0x286c1aa9) {
              DAT_004b016a = local_8a;
              DAT_004b016b = DAT_004b0161 ^ 0xcf;
              DAT_004b016c = DAT_004b0162 ^ 0x67;
              DAT_004b01af = DAT_004b01a5 ^ 0x51;
              DAT_004b01b0 = DAT_004b01a6 ^ 0xad;
              DAT_004b01b1 = DAT_004b01a7 ^ 0x7d;
              DAT_004b01b2 = DAT_004b01a8 ^ 0x43;
              DAT_004b01b3 = DAT_004b01a9 ^ 0x85;
              DAT_004b01b4 = DAT_004b01aa ^ 0x67;
              DAT_004b01b5 = DAT_004b01ab ^ 0x18;
              DAT_004b01b6 = DAT_004b01ac ^ 0xe9;
              DAT_004b01b7 = DAT_004b01ad ^ 7;
              DAT_004b01b8 = DAT_004b01ae ^ 0xeb;
              DAT_004b014f = DAT_004b0145 ^ 6;
              DAT_004b0150 = DAT_004b0146 ^ 0xd8;
              DAT_004b0151 = DAT_004b0147 ^ 0x52;
              DAT_004b0152 = DAT_004b0148 ^ 0xf;
              DAT_004b0153 = DAT_004b0149 ^ 0xc2;
              DAT_004b0154 = DAT_004b014a ^ 0xd6;
              DAT_004b0155 = DAT_004b014b ^ 0xf3;
              DAT_004b0156 = DAT_004b014c ^ 0x31;
              DAT_004b0157 = DAT_004b014d ^ 0xf1;
              DAT_004b0158 = DAT_004b014e ^ 0xb3;
              DAT_004b018b = DAT_004b0181 ^ 0x7a;
              DAT_004b018c = DAT_004b0182 ^ 0x1f;
              DAT_004b018d = DAT_004b0183 ^ 0x10;
              DAT_004b018e = DAT_004b0184 ^ 0x53;
              DAT_004b018f = DAT_004b0185 ^ 0x66;
              DAT_004b0190 = DAT_004b0186 ^ 0x70;
              DAT_004b0191 = DAT_004b0187 ^ 0x9c;
              DAT_004b0192 = DAT_004b0188 ^ 0x94;
              DAT_004b0193 = DAT_004b0189 ^ 0x29;
              DAT_004b0194 = DAT_004b018a ^ 0xf0;
              DAT_004b0130 = DAT_004b0110 ^ 0x2f;
              DAT_004b0131 = DAT_004b0111 ^ 0xb0;
              DAT_004b0132 = DAT_004b0112 ^ 0x78;
              DAT_004b0133 = DAT_004b0113 ^ 0x33;
              DAT_004b0134 = DAT_004b0114 ^ 0xcb;
              DAT_004b0135 = DAT_004b0115 ^ 0x66;
              DAT_004b0136 = DAT_004b0116 ^ 0x79;
              DAT_004b0137 = DAT_004b0117 ^ 0xdf;
              DAT_004b0138 = DAT_004b0118 ^ 0xb2;
              DAT_004b0139 = DAT_004b0119 ^ 0x4b;
              DAT_004b013a = DAT_004b011a ^ 0xf;
              DAT_004b013b = DAT_004b011b ^ 0x34;
              DAT_004b013c = DAT_004b011c ^ 0xe8;
              DAT_004b013d = DAT_004b011d ^ 0x36;
              DAT_004b013e = DAT_004b011e ^ 0xc;
              DAT_004b013f = DAT_004b011f ^ 99;
              DAT_004b0140 = DAT_004b0120 ^ 0xa9;
              DAT_004b0141 = DAT_004b0121 ^ 0xd3;
              DAT_004b0142 = DAT_004b0122 ^ 0xba;
              DAT_004b0143 = DAT_004b0123 ^ 0xce;
              local_8b = DAT_004b0124 ^ 0x55;
              *local_390 = 0xd1e3c49;
            }
            goto LAB_002261bc;
          }
          uVar9 = 0;
          if (DAT_004b1b4c != 0) {
            uVar9 = DAT_004b1b48 / DAT_004b1b4c;
          }
          uVar9 = (uVar9 + 0x9efe423) / 0x46713e03 ^ 0x222b58d9;
          local_2f9 = local_2f8 == 0;
          bVar4 = 0xa08eb45f < uVar9;
          bVar5 = uVar9 == 0xa08eb460;
          iVar11 = -0x341d6323;
          iVar8 = 0x40e83d61;
        }
LAB_0022ec78:
        if (!bVar4 || bVar5) {
          iVar11 = iVar8;
        }
        goto LAB_0022f9ac;
      }
      if (local_388 < 0x1fd62f26) {
        if (0x1954ac37 < local_388) {
          if (local_388 < 0x1c3b37b7) {
            if (local_388 == 0x1954ac38) {
              _objc_msgSend(local_b8,local_260,1);
              _objc_msgSend(local_b8,PTR_s_setSystemSeparator__0048a928,1);
              *local_390 = -0x5b8ab82b;
              goto LAB_002261bc;
            }
            if (local_388 == 0x19b57347) {
              bVar5 = 0x32bc59bc < (DAT_004b1b40 & DAT_004b1b44) / 0x44593108 + 0x976fa3ae;
              iVar11 = -0x341d6323;
              iVar8 = 0x27ecd3cf;
              goto LAB_0022f328;
            }
            if (local_388 != 0x1a163904) goto LAB_002261bc;
            iVar11 = 0x38685aa4;
            if (0x4bb54dc6 < (DAT_004b1a10 + DAT_004b1a14 & 0x2c04494cU) + 0xdd335635) {
              iVar11 = 0x2dd932c7;
            }
          }
          else {
            if (local_388 == 0x1c3b37b7) {
              *local_390 = 0x3e55ac8a;
              goto LAB_002261bc;
            }
            if (local_388 == 0x1c546022) {
              iVar11 = -0x69a62454;
              if ((uint)((ulong)(uint)(DAT_004b1b70 - DAT_004b1b74) * 0x4db681ad >> 0x3d) *
                  0x206ae3c2 == -0x546a8287) {
                iVar11 = 0x2f681f07;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 != 0x1f9555a3) goto LAB_002261bc;
            iVar11 = -0x55a2ac57;
            if (0xae1c99b7 < ((DAT_004b1b60 ^ DAT_004b1b64) * 0x725c917c + 0x6e9887e6 & 0x5ba21d5e))
            {
              iVar11 = 0x29e0b25d;
            }
          }
          goto LAB_0022f9ac;
        }
        if (local_388 < 0x15d2b030) {
          if (local_388 == 0x13879f4b) {
            local_2d9 = local_2d8 < 1;
            *local_390 = -0x4befffeb;
          }
          else if (local_388 == 0x14032de6) {
            uVar9 = ((DAT_004b19c8 ^ DAT_004b19cc) / 0x3b41b9a0) * 0x354de53a + 0x5f7e002;
            bVar4 = 0x186450 < uVar9;
            bVar5 = uVar9 == 0x186451;
            iVar8 = 0x14032de6;
            iVar11 = -0x197489d8;
            goto LAB_0022f3e4;
          }
          goto LAB_002261bc;
        }
        if (local_388 != 0x15d2b030) {
          if (local_388 == 0x1669173b) {
            bVar5 = (DAT_004b17b0 + DAT_004b17b4 ^ 0x908dec16U) * -0x196b35dd == 0x4eb48614;
            iVar11 = -0x481e200f;
            iVar8 = 0x6646c8ad;
            goto LAB_0022f928;
          }
          if (local_388 == 0x182f8462) {
            _objc_msgSend(local_b8,local_318,&PTR____CFConstantStringClassReference_004b0230);
            _objc_msgSend(local_b8,PTR_s_setMeCardNameColor__0048a418,
                          &PTR____CFConstantStringClassReference_004b02b0);
            _objc_msgSend(local_b8,PTR_s_setMeCardNameColorDark__0048a420,
                          &PTR____CFConstantStringClassReference_004b02b0);
            *local_390 = -0x4a953627;
          }
          goto LAB_002261bc;
        }
        bVar5 = ((DAT_004b1858 | DAT_004b185c) + 0x459d5983 & 0x510423f) == 0x734db520;
        iVar11 = -0x2ae64f22;
        iVar8 = 0x23b0f0ea;
      }
      else if (local_388 < 0x225f3747) {
        if (local_388 < 0x20b697ec) {
          if (local_388 == 0x1fd62f26) {
            _objc_msgSend(local_b8,PTR_s_cardHeadSize_0048a2a0);
            *local_390 = 0x48eeefbf;
          }
          else if (local_388 == 0x20b268d3) {
            *local_390 = -0x7e2a8ebd;
          }
          goto LAB_002261bc;
        }
        if (local_388 == 0x20b697ec) {
          iVar11 = 0xd637f30;
          if (local_211 == '\0') {
            iVar11 = -0x99c61cb;
          }
          *local_390 = iVar11;
          local_361 = local_1f1;
          local_350 = local_210;
          local_341 = local_361;
          goto LAB_002261bc;
        }
        if (local_388 != 0x220c1425) {
          if (local_388 == 0x2222f48f) {
            *local_390 = 0x20b697ec;
          }
          goto LAB_002261bc;
        }
        bVar5 = local_328 == 0;
        iVar11 = -0x7b0ffccc;
        iVar8 = -0x596abd18;
      }
      else {
        if (0x23b0f0e9 < local_388) {
          if (local_388 == 0x23b0f0ea) {
            *local_390 = 0xf65a8f7;
          }
          else if (local_388 == 0x241dc020) {
            *local_390 = -0x70c6e8c9;
          }
          else if (local_388 == 0x25015249) {
            if (((uint)((ulong)(DAT_004b1750 + DAT_004b1754 + 0x753594c3) * 0xc2106cf >> 0x3b) |
                0xab3e5a58) < 0x56de386d) {
              iVar11 = -0x3ecf090f;
            }
            goto LAB_0022f9ac;
          }
          goto LAB_002261bc;
        }
        if (local_388 != 0x225f3747) {
          if (local_388 == 0x23246ceb) {
            _objc_msgSend(local_b8,local_238,&PTR____CFConstantStringClassReference_004b0350);
            _objc_msgSend(local_b8,PTR_s_setTimeOffsetX__0048adc0,
                          &PTR____CFConstantStringClassReference_004b03b0);
            _objc_msgSend(local_b8,PTR_s_setTimeOffsetY__0048adb8,
                          &PTR____CFConstantStringClassReference_004b0330);
            _objc_msgSend(local_b8,PTR_s_setMergeMode__0048af88,1);
            _objc_msgSend(local_b8,PTR_s_setMessageSeparator__0048b2d0,1);
            _objc_msgSend(local_b8,PTR_s_setTimeSeparator__0048a930,1);
            _objc_msgSend(local_b8,PTR_s_setSystemSeparator__0048a928,1);
            _objc_msgSend(local_b8,PTR_s_setMsgColor__00489fd0,
                          &PTR____CFConstantStringClassReference_004b0390);
            _objc_msgSend(local_b8,PTR_s_setMsgColorDark__00489fd8,
                          &PTR____CFConstantStringClassReference_004b02f0);
            *local_390 = 0x7309ca88;
          }
          else if (local_388 == 0x23a134b3) {
            bVar5 = local_89 == '\0';
            iVar8 = 0x25015249;
            iVar11 = -0x47388dd1;
            goto LAB_0022f9a8;
          }
          goto LAB_002261bc;
        }
        local_258 = PTR_s_setMessageSeparator__0048b2d0;
        bVar5 = (DAT_004b19d8 | DAT_004b19dc) * 0x1263e2c2 == 0x51c753ef;
        iVar11 = 0x342706ba;
        iVar8 = 0x7bd30b92;
      }
    }
    else {
      if (local_388 < 0x5758a43b) {
        if (local_388 < 0x3e80e18d) {
          if (local_388 < 0x3842042c) {
            if (0x327467c6 < local_388) {
              if (local_388 < 0x35b08de0) {
                if (local_388 == 0x327467c7) {
                  *local_390 = 0x7a5bb649;
                }
                else if (local_388 == 0x342706ba) {
                  *local_390 = 0x225f3747;
                }
                else if (local_388 == 0x3583f85b) {
                  _objc_msgSend(local_398,local_150);
                  uVar6 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(uVar6,PTR_s_objectForKey__0048a370,
                                &PTR____CFConstantStringClassReference_004b0290);
                  _objc_retainAutoreleasedReturnValue();
                  *local_390 = -0x295e84d9;
                }
                goto LAB_002261bc;
              }
              if (local_388 == 0x35b08de0) {
                bVar5 = (DAT_004b1850 & DAT_004b1854 | 0x658b4f2a) * -0x13cace75 == -0x28575bcb;
                iVar8 = -0x2ae64f22;
                iVar11 = 0x15d2b030;
                goto LAB_0022f9a8;
              }
              if (local_388 != 0x35d27e25) {
                if (local_388 == 0x37af7893) {
                  *local_390 = -0x1c76527b;
                }
                goto LAB_002261bc;
              }
              bVar5 = local_84 == 0x54cbeca9;
              iVar11 = -0x5b17f50c;
              iVar8 = 0x6562c0e8;
LAB_0022f928:
              if (bVar5) {
                iVar11 = iVar8;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 < 0x30f13092) {
              if (local_388 == 0x2f681f07) {
                *local_390 = -0x69a62454;
                goto LAB_002261bc;
              }
              if (local_388 != 0x2fae4685) goto LAB_002261bc;
              uVar9 = (DAT_004b1838 | DAT_004b183c) * -0x3b9d0052 + 0xc61305d4;
              local_148 = PTR_s_setSendReferColorDark__00489ed8;
              bVar4 = 0x30d07fb7 < uVar9;
              bVar5 = uVar9 == 0x30d07fb8;
              iVar8 = 0x298e7879;
              iVar11 = 0x3a700bca;
              goto LAB_0022f3e4;
            }
            if (local_388 != 0x30f13092) {
              if (local_388 == 0x3166c7e8) {
                bVar5 = local_289 == '\0';
                iVar11 = 0x7e8ed9cd;
                iVar8 = -0x467beaff;
                goto LAB_0022f928;
              }
              if (local_388 == 0x31a73462) {
                uVar9 = DAT_004b1a38 * DAT_004b1a3c & 0xb395eeb4U | 0x8094eeb4;
                _objc_msgSend(local_b8,local_280,0);
                _objc_msgSend(local_b8,PTR_s_setMeMaskOffsetY__0048a658,0);
                _objc_msgSend(local_b8,PTR_s_setRoundValue__0048a6e0,0xf);
                bVar4 = 0xdfe9fef4 < uVar9;
                bVar5 = uVar9 == 0xdfe9fef5;
                iVar11 = 0x31a73462;
                iVar8 = -0x1538b546;
                goto LAB_0022ec78;
              }
              goto LAB_002261bc;
            }
            uVar9 = DAT_004b1808 * DAT_004b180c * 0x55a41baa & 0x43810c2;
            local_128 = PTR_s_setSendReferColor__00489ed0;
            bVar4 = 0x7cbb8915 < uVar9;
            bVar5 = uVar9 == 0x7cbb8916;
            iVar11 = 0x30f13092;
            iVar8 = -0x62c0cb54;
            goto LAB_0022ec78;
          }
          if (local_388 < 0x397cf18c) {
            if (local_388 < 0x388bd1aa) {
              if (local_388 == 0x3842042c) {
                _objc_msgSend(local_2a0,local_d0);
                _objc_release(local_2a0);
                *local_390 = -0x4e07a6fd;
              }
              else if (local_388 == 0x38685aa4) {
                _objc_msgSend(local_b8,local_268);
                *local_390 = 0x2dd932c7;
              }
              goto LAB_002261bc;
            }
            if (local_388 != 0x388bd1aa) {
              if (local_388 == 0x38aab4ca) {
                _objc_msgSend(local_c8,PTR_s_length_00489d78);
                _objc_release(local_c8);
                *local_390 = -0x6dec246e;
              }
              else if (local_388 == 0x39232662) {
                *local_390 = 0x2654e8ee;
              }
              goto LAB_002261bc;
            }
            uVar9 = (DAT_004b1b10 + DAT_004b1b14 ^ 0x62828a70U | 0x1d3d558c) / 0x6c8d0cda;
            bVar4 = 0x82d3be70 < uVar9;
            bVar5 = uVar9 == 0x82d3be71;
            iVar8 = -0x1262fbbf;
            iVar11 = -0x701ad132;
LAB_0022f3e4:
            if (!bVar4 || bVar5) {
              iVar11 = iVar8;
            }
            goto LAB_0022f9ac;
          }
          if (local_388 < 0x3cd7f856) {
            if (local_388 == 0x397cf18c) {
              *local_390 = -0x5b5e317;
            }
            else {
              if (local_388 == 0x3a436e91) {
                uVar9 = ((DAT_004b1a88 ^ DAT_004b1a8c) / 0x75b79fb9 & 2) * -0x1cf04271;
                _objc_msgSend(local_b8,PTR_s_cardTimeFormat_0048a368);
                local_2a0 = _objc_retainAutoreleasedReturnValue();
                bVar4 = 0xf34cf877 < uVar9;
                bVar5 = uVar9 == 0xf34cf878;
                iVar8 = 0x78012d0;
LAB_0022f900:
                iVar11 = 0x3a436e91;
                if (!bVar4 || bVar5) {
                  iVar11 = iVar8;
                }
                goto LAB_0022f9ac;
              }
              if (local_388 == 0x3a700bca) {
                *local_390 = -0x2a4932e4;
              }
            }
            goto LAB_002261bc;
          }
          if (local_388 != 0x3cd7f856) {
            if (local_388 == 0x3e55ac8a) {
              _objc_release(local_160);
              _objc_release(local_158);
              bVar5 = local_161 == '\0';
              iVar8 = -0x1cdec8eb;
              iVar11 = -0x777ee640;
              goto LAB_0022f9a8;
            }
            if (local_388 == 0x3e78c0a9) {
              _objc_msgSend(0x4028000000000000,local_b8,local_298);
              *local_390 = -0xfc73a8a;
            }
            goto LAB_002261bc;
          }
          bVar5 = (DAT_004b19a0 | DAT_004b19a4) * -0x6c175a80 == -0x2b5d2eb;
          iVar8 = -0x50d3a5e9;
          iVar11 = -0x5c1f7e2d;
        }
        else if (local_388 < 0x4abb052b) {
          if (0x43aed94e < local_388) {
            if (local_388 < 0x458cc9ac) {
              if (local_388 == 0x43aed94f) {
                uVar9 = DAT_004b17c8 - DAT_004b17cc;
                lVar7 = _objc_msgSend(local_f0,local_d0);
                local_f1 = lVar7 == 0;
                _objc_release(local_f0);
                iVar11 = -0x66e25a49;
                if (0xe5ac55a3 < (uVar9 ^ 0x88241c0 | 0xa739bc2f) + 0xc552ceba) {
                  iVar11 = -0x4fb3f0b;
                }
              }
              else {
                if (local_388 != 0x44af1631) {
                  if (local_388 == 0x44bf3b15) {
                    uVar9 = DAT_004b17e8 | DAT_004b17ec;
                    local_108 = PTR_s_sendReferColor_00489ec0;
                    _objc_msgSend(local_b8);
                    local_110 = _objc_retainAutoreleasedReturnValue();
                    local_118 = _objc_msgSend(local_110,local_d0);
                    bVar5 = 0xbf1f80c4 < (uVar9 + 0x6b3cec0b & 0x1849dfa3) + 0x14a5f94b;
                    iVar8 = 0x12f9c753;
                    iVar11 = -0x34ee167b;
                    goto LAB_0022ecd0;
                  }
                  goto LAB_002261bc;
                }
                uVar9 = DAT_004b1948 | DAT_004b194c;
                _objc_release(local_1a0);
                _objc_msgSend(local_b8,PTR_s_setEnabledReferColor__00489e88,local_382);
                iVar11 = 0x44af1631;
                if ((uVar9 + 0xed225f6e & 0x9af47c3d) != 0x4472e07c) {
                  iVar11 = -0x55b097a3;
                }
              }
              *local_390 = iVar11;
              goto LAB_002261bc;
            }
            if (local_388 == 0x458cc9ac) {
              *local_390 = -0x5530a9f1;
            }
            else if (local_388 == 0x47a2fc07) {
              *local_390 = 0x6887e36b;
            }
            else if (local_388 == 0x48eeefbf) {
              uVar9 = ((DAT_004b1af8 - DAT_004b1afc) * 0x3ef3a9e5 ^ 0xc41ca9bU) * -0x269fb264;
              local_2d8 = _objc_msgSend(local_b8,PTR_s_cardHeadSize_0048a2a0);
              bVar4 = 0xd147bd0c < uVar9;
              bVar5 = uVar9 == 0xd147bd0d;
              iVar8 = 0x1fd62f26;
              iVar11 = -0x3e439455;
              goto LAB_0022f3e4;
            }
            goto LAB_002261bc;
          }
          if (0x40e83d60 < local_388) {
            if (local_388 != 0x40e83d61) {
              if (local_388 == 0x40f8e3c2) {
                bVar5 = local_269 == '\0';
                iVar11 = -0x18cd9147;
                iVar8 = -0x6d7e1abc;
                goto LAB_0022f928;
              }
              if (local_388 == 0x435d7594) {
                DAT_004b0220 = DAT_004b0218 ^ 0xbf;
                DAT_004b0221 = DAT_004b0219 ^ 100;
                DAT_004b0222 = DAT_004b021a ^ 0x28;
                DAT_004b0223 = DAT_004b021b ^ 0x90;
                DAT_004b0224 = DAT_004b021c ^ 0x94;
                DAT_004b0225 = DAT_004b021d ^ 0x29;
                DAT_004b0226 = DAT_004b021e ^ 0x8e;
                DAT_004b0227 = DAT_004b021f ^ 0xd6;
                DAT_004b0200 = DAT_004b01e0 ^ 0xec;
                DAT_004b0201 = DAT_004b01e1 ^ 0x6d;
                DAT_004b0202 = DAT_004b01e2 ^ 0xf3;
                DAT_004b0203 = DAT_004b01e3 ^ 0x76;
                DAT_004b0204 = DAT_004b01e4 ^ 0xe5;
                DAT_004b0205 = DAT_004b01e5 ^ 0x7c;
                DAT_004b0206 = DAT_004b01e6 ^ 0xab;
                DAT_004b0207 = DAT_004b01e7 ^ 0x4d;
                DAT_004b0208 = DAT_004b01e8 ^ 0xe0;
                DAT_004b0209 = DAT_004b01e9 ^ 0xd0;
                DAT_004b020a = DAT_004b01ea ^ 0x88;
                DAT_004b020b = DAT_004b01eb ^ 0x17;
                DAT_004b020c = DAT_004b01ec ^ 1;
                DAT_004b020d = DAT_004b01ed ^ 0xaf;
                DAT_004b020e = DAT_004b01ee ^ 0xfb;
                DAT_004b020f = DAT_004b01ef ^ 0x68;
                DAT_004b0210 = DAT_004b01f0 ^ 0x54;
                DAT_004b0211 = DAT_004b01f1 ^ 0x52;
                DAT_004b0212 = DAT_004b01f2 ^ 0x83;
                DAT_004b0213 = DAT_004b01f3 ^ 0x6b;
                DAT_004b0177 = DAT_004b016d ^ 0xab;
                DAT_004b0178 = DAT_004b016e ^ 0x33;
                DAT_004b0179 = DAT_004b016f ^ 0xb6;
                DAT_004b017a = DAT_004b0170 ^ 0x9b;
                DAT_004b017b = DAT_004b0171 ^ 0x9e;
                DAT_004b017c = DAT_004b0172 ^ 0xb;
                DAT_004b017d = DAT_004b0173 ^ 0x3d;
                DAT_004b017e = DAT_004b0174 ^ 0x54;
                DAT_004b017f = DAT_004b0175 ^ 0x9b;
                DAT_004b0180 = DAT_004b0176 ^ 0x34;
                DAT_004b019a = DAT_004b0195 ^ 0x2b;
                DAT_004b019b = DAT_004b0196 ^ 0xf1;
                DAT_004b019c = DAT_004b0197 ^ 0x27;
                DAT_004b019d = DAT_004b0198 ^ 0xa3;
                DAT_004b019e = DAT_004b0199 ^ 0xee;
                DAT_004b01c7 = DAT_004b01bd ^ 0x7b;
                DAT_004b01c8 = DAT_004b01be ^ 0xd;
                DAT_004b01c9 = DAT_004b01bf ^ 0x70;
                DAT_004b01ca = DAT_004b01c0 ^ 0xcc;
                DAT_004b01cb = DAT_004b01c1 ^ 0xf3;
                DAT_004b01cc = DAT_004b01c2 ^ 0x8b;
                DAT_004b01cd = DAT_004b01c3 ^ 8;
                DAT_004b01ce = DAT_004b01c4 ^ 0xa7;
                DAT_004b01cf = DAT_004b01c5 ^ 0x71;
                DAT_004b01d0 = DAT_004b01c6 ^ 0x79;
                DAT_004b0163 = DAT_004b0159 ^ 0x8a;
                DAT_004b0164 = DAT_004b015a ^ 0x9c;
                DAT_004b0165 = DAT_004b015b ^ 0x4e;
                DAT_004b0166 = DAT_004b015c ^ 0x11;
                DAT_004b0167 = DAT_004b015d ^ 0xec;
                DAT_004b0168 = DAT_004b015e ^ 0xae;
                DAT_004b0169 = DAT_004b015f ^ 0xe7;
                iVar11 = -0x77aca90d;
                if ((uint)((ulong)((DAT_004b1738 ^ DAT_004b173c) + 0x4e503fb) * 0x49dadf0f >> 0x3e)
                    < 0x3edc5f35) {
                  iVar11 = -0x6983d577;
                }
                *local_390 = iVar11;
                DAT_004b0216 = DAT_004b0214 ^ 0xdc;
                DAT_004b0217 = DAT_004b0215 ^ 0x7f;
                DAT_004b01bb = DAT_004b01b9 ^ 0xa2;
                DAT_004b01bc = DAT_004b01ba ^ 0xa9;
                DAT_004b01a2 = DAT_004b019f ^ 0x96;
                DAT_004b01a3 = DAT_004b01a0 ^ 0xb2;
                DAT_004b01a4 = DAT_004b01a1 ^ 0xb2;
                local_8a = DAT_004b0160 ^ 0x2b;
              }
              goto LAB_002261bc;
            }
            bVar5 = local_2f9 == '\0';
            iVar11 = 0x1f9555a3;
            iVar8 = -0x27f3c4de;
            goto LAB_0022f928;
          }
          if (local_388 != 0x3e80e18d) {
            if (local_388 == 0x3f5d0b16) {
              *local_390 = -0x1b28e903;
            }
            goto LAB_002261bc;
          }
          uVar9 = 0;
          if (DAT_004b19d4 != 0) {
            uVar9 = DAT_004b19d0 / DAT_004b19d4;
          }
          bVar5 = (int)((long)((ulong)(uVar9 * 0x707fc51f) * 0xf42d1f85) >> 0x3f) * -0x6fb797e0 ==
                  -0x6af16c48;
          iVar8 = 0x342706ba;
          iVar11 = 0x225f3747;
        }
        else if (local_388 < 0x4dec854e) {
          if (local_388 < 0x4c8fed89) {
            if (local_388 == 0x4abb052b) {
              uVar9 = 0;
              if (DAT_004b196c != 0) {
                uVar9 = DAT_004b1968 / DAT_004b196c;
              }
              bVar5 = uVar9 * -0x4c82e8 == 0x1274cd67;
              iVar11 = 0x4abb052b;
              iVar8 = -0x6ea4c160;
              goto LAB_0022f660;
            }
            if (local_388 == 0x4b7eee4c) {
              *local_390 = 0x6d0d3561;
            }
            else if (local_388 == 0x4c85d354) {
              *local_390 = 0x7e250459;
            }
            goto LAB_002261bc;
          }
          if (local_388 != 0x4c8fed89) {
            if (local_388 == 0x4c979da7) {
              local_220 = PTR_s_timeColor_00489ef8;
              *local_390 = 0x397cf18c;
            }
            else if (local_388 == 0x4cd3404a) {
              iVar11 = 0x25fda88f;
              if (local_201 == '\0') {
                iVar11 = -0xc146557;
              }
              *local_390 = iVar11;
              local_360 = local_200;
              local_351 = local_1f1;
            }
            goto LAB_002261bc;
          }
          bVar5 = ((DAT_004b18f8 ^ DAT_004b18fc) & 0x5b16fff2) == 0x86885802;
          iVar8 = 0x5cbe3bcb;
          iVar11 = -0x386ecb9b;
        }
        else {
          if (0x55a0f5a5 < local_388) {
            if (local_388 == 0x55a0f5a6) {
              _objc_release(local_138);
              bVar5 = lVar2 == 0;
              iVar8 = 0xf65a8f7;
              iVar11 = -0x131da825;
              goto LAB_0022f614;
            }
            if (local_388 == 0x56829934) {
              *local_390 = 0xe559245;
            }
            else if (local_388 == 0x56b651dc) {
              *local_390 = 0xd85b4f3;
            }
            goto LAB_002261bc;
          }
          if (local_388 == 0x4dec854e) {
            bVar5 = ((DAT_004b1a20 ^ DAT_004b1a24) + 0xcde61119 ^ 0x3264a75e) * 0x656742ba ==
                    0xa2b8fb2;
            iVar11 = 0x61b5080e;
            iVar8 = 0x55de0e2;
            goto LAB_0022f660;
          }
          if (local_388 != 0x4e6ff053) {
            if (local_388 == 0x50ab0c8d) {
              _objc_msgSend(local_308,local_d0);
              _objc_release(local_308);
              *local_390 = -0x6f07fe1c;
            }
            goto LAB_002261bc;
          }
          bVar5 = (DAT_004b1b80 & DAT_004b1b84) * -0x60c0da9b == -0x5bbe5134;
          iVar8 = 0x5a4036a0;
          iVar11 = 0x182f8462;
        }
        goto LAB_0022f9a8;
      }
      if (local_388 < 0x6887e36b) {
        if (0x61826792 < local_388) {
          if (local_388 < 0x62961bcf) {
            if (local_388 < 0x61b5080e) {
              if (local_388 == 0x61826793) {
                *local_390 = 0xc727d69;
              }
              else if (local_388 == 0x6199471d) {
                local_98[1] = 0;
                *puVar3 = 0;
                puVar3[3] = 0;
                puVar3[2] = 0;
                puVar3[5] = 0;
                puVar3[4] = 0;
                puVar3[7] = 0;
                puVar3[6] = 0;
                _objc_msgSend(local_b8,local_c0);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                puVar3 = local_a8;
                *local_a8 = uVar6;
                _objc_msgSend(local_b8,local_e8);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                puVar3[1] = uVar6;
                puVar3 = local_a8;
                _objc_msgSend(local_b8,local_108);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                puVar3[2] = uVar6;
                puVar3 = local_a8;
                _objc_msgSend(local_b8,local_130);
                uVar6 = _objc_retainAutoreleasedReturnValue();
                puVar3[3] = uVar6;
                *local_390 = -0x34d33a76;
              }
            }
            else if (local_388 == 0x61b5080e) {
              _objc_msgSend(uVar1,local_b8,local_278);
              *local_390 = 0x55de0e2;
            }
            else {
              if (local_388 == 0x6233b11b) {
                DAT_004d187c = 1;
                local_98 = (undefined8 *)((long)puVar10 + -0x40);
                local_a0 = (undefined1 *)((long)puVar10 + -0xc0);
                puVar10 = (undefined8 *)((long)puVar10 + -0xe0);
                local_b0 = PTR_BubbleBoxConfig_0048c990;
                local_a8 = puVar10;
                if (0x1ef362a8 <
                    (uint)((ulong)(DAT_004b1758 - DAT_004b175c ^ 0x42fa1e6f) * 0x323bee21 >> 0x3d) +
                    0xe94e3ed9) {
                  iVar11 = -0x5b4f942f;
                }
                goto LAB_0022f9ac;
              }
              if (local_388 == 0x6284921b) {
                uVar9 = 0;
                if (DAT_004b19f4 != 0) {
                  uVar9 = DAT_004b19f0 / DAT_004b19f4;
                }
                bVar5 = uVar9 * 0x1bc3ba27 == 0x6e11633a;
                iVar8 = -0x5b8ab82b;
                iVar11 = 0x1954ac38;
                goto LAB_0022f614;
              }
            }
          }
          else if (local_388 < 0x6646c8ad) {
            if (local_388 == 0x62961bcf) {
              bVar5 = ((uint)((ulong)(DAT_004b1a78 | DAT_004b1a7c) * 0x66945a73 >> 0x3e) +
                       0xacab3e4b | 0xfbabd27e) == 0xc01ce4f9;
              iVar8 = 0x62961bcf;
              iVar11 = -0x2ab68945;
              goto LAB_0022f9a8;
            }
            if (local_388 == 0x6562c0e8) {
              *local_390 = -0x5b17f50c;
            }
            else if (local_388 == 0x663e8491) {
              _objc_msgSend(local_190,local_198,local_a8,4);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(local_188);
              *local_390 = 0x778066e8;
            }
          }
          else if (local_388 == 0x6646c8ad) {
            *local_390 = -0x481e200f;
          }
          else if (local_388 == 0x66aaca22) {
            local_130 = PTR_s_sendReferColorDark_00489ec8;
            _objc_msgSend(local_b8);
            local_138 = _objc_retainAutoreleasedReturnValue();
            *local_390 = -0x694a5449;
          }
          else if (local_388 == 0x68323645) {
            *local_390 = 0x61826793;
          }
          goto LAB_002261bc;
        }
        if (local_388 < 0x5b782573) {
          if (local_388 < 0x5a4036a0) {
            if (local_388 == 0x576953e2) {
              uVar9 = ((DAT_004b1ac0 & DAT_004b1ac4) / 0x15d46bd4 ^ 0xb0aafedc) + 0x2edcf592;
              bVar4 = 0x64cb17db < uVar9;
              bVar5 = uVar9 == 0x64cb17dc;
              iVar11 = -0x70c6e8c9;
              iVar8 = 0x241dc020;
              goto LAB_0022ec78;
            }
            if (local_388 == 0x5a22fe8f) {
              bVar5 = local_331 == '\0';
              iVar11 = -0x7b0ffccc;
              iVar8 = 0x7547d7f3;
              goto LAB_0022f928;
            }
            if (local_388 == 0x5758a43b) {
              if (*(long *)PTR____stack_chk_guard_00481638 == local_80) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
          }
          else {
            if (local_388 == 0x5a4036a0) {
              _objc_msgSend(local_b8,local_318,&PTR____CFConstantStringClassReference_004b0230);
              _objc_msgSend(local_b8,PTR_s_setMeCardNameColor__0048a418,
                            &PTR____CFConstantStringClassReference_004b02b0);
              _objc_msgSend(local_b8,PTR_s_setMeCardNameColorDark__0048a420,
                            &PTR____CFConstantStringClassReference_004b02b0);
              iVar11 = 0x182f8462;
              goto LAB_0022f54c;
            }
            if (local_388 == 0x5ab66226) {
              _objc_msgSend(local_138,local_d0);
              *local_390 = -0x24ea07;
            }
            else if (local_388 == 0x5abf157d) {
              local_1d8 = local_98 + 1;
              bVar5 = 0xb8da0edc <
                      ((DAT_004b18c8 & DAT_004b18cc ^ 0x7a851a82) & 0x7ba55f8a) / 0x567d1c2a;
              iVar8 = 0x5abf157d;
              iVar11 = 0x7f1853a;
              goto LAB_0022ecd0;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 < 0x5d67396a) {
          if (local_388 == 0x5b782573) {
            *local_390 = -0x5d1da19c;
          }
          else if (local_388 == 0x5cbe3bcb) {
            *local_390 = 0x4c8fed89;
          }
          else if (local_388 == 0x5cdc00df) {
            *local_390 = 0x25015249;
          }
          goto LAB_002261bc;
        }
        if (local_388 == 0x5d67396a) {
          *local_390 = 0x3e78c0a9;
          goto LAB_002261bc;
        }
        if (local_388 == 0x5dbcb93a) {
          uVar9 = (uint)(DAT_004b18e0 - DAT_004b18e4) / 0x33ff73b + 0x24b7d097 ^ 0x1b81e964;
          bVar4 = 0xd8f6a87e < uVar9;
          bVar5 = uVar9 == 0xd8f6a87f;
          iVar8 = -0x700c20c8;
          iVar11 = -0x5ba27af3;
          goto LAB_0022f3e4;
        }
        if (local_388 != 0x5fbfeab9) goto LAB_002261bc;
        bVar5 = 0x1b20b995 < ((DAT_004b17c0 | DAT_004b17c4) & 0xc561518 ^ 0x7e03fb7);
        iVar8 = -0x4fb3f0b;
        iVar11 = 0x43aed94f;
LAB_0022ecd0:
        if (bVar5) {
          iVar11 = iVar8;
        }
        goto LAB_0022f9ac;
      }
      if (0x7309ca87 < local_388) {
        if (local_388 < 0x7bd30b92) {
          if (local_388 < 0x778066e8) {
            if (local_388 == 0x7309ca88) {
              uVar9 = DAT_004b1998 + DAT_004b199c;
              _objc_msgSend(local_b8,local_238,&PTR____CFConstantStringClassReference_004b0350);
              _objc_msgSend(local_b8,PTR_s_setTimeOffsetX__0048adc0,
                            &PTR____CFConstantStringClassReference_004b03b0);
              _objc_msgSend(local_b8,PTR_s_setTimeOffsetY__0048adb8,
                            &PTR____CFConstantStringClassReference_004b0330);
              _objc_msgSend(local_b8,PTR_s_setMergeMode__0048af88,1);
              _objc_msgSend(local_b8,PTR_s_setMessageSeparator__0048b2d0,1);
              _objc_msgSend(local_b8,PTR_s_setTimeSeparator__0048a930,1);
              _objc_msgSend(local_b8,PTR_s_setSystemSeparator__0048a928,1);
              _objc_msgSend(local_b8,PTR_s_setMsgColor__00489fd0,
                            &PTR____CFConstantStringClassReference_004b0390);
              _objc_msgSend(local_b8,PTR_s_setMsgColorDark__00489fd8,
                            &PTR____CFConstantStringClassReference_004b02f0);
              local_240 = PTR_s_setSendMsgColor__00489ff0;
              iVar11 = 0x7309ca88;
              if (((uVar9 & 0xf6092a95) / 0x1fea52af | 0x460dff18) < 0x7e2493ce) {
                iVar11 = -0x79c90f26;
              }
              goto LAB_0022f9ac;
            }
            if (local_388 == 0x7547d7f3) {
              _objc_release(local_b8);
              *local_390 = 0x5758a43b;
            }
          }
          else if (local_388 == 0x778066e8) {
            uVar9 = DAT_004b1898 + DAT_004b189c;
            _objc_msgSend(local_190,local_198,local_a8,4);
            local_1a0 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_188);
            iVar11 = 0x778066e8;
            if (0x7ed0f4d1 < (uVar9 | 0xa2aad299) * -0x2d01c37 + 0xc3cce580) {
              iVar11 = -0x15221eb2;
            }
            *local_390 = iVar11;
          }
          else if (local_388 == 0x7a298533) {
            _objc_msgSend(local_b0,PTR_s_shared_00489458);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar6,PTR_s_referColor_00489ea0);
            _objc_retainAutoreleasedReturnValue();
            *local_390 = 0x13312a29;
          }
          else if (local_388 == 0x7a5bb649) {
            _objc_msgSend(local_b8,local_e0,&PTR____CFConstantStringClassReference_004b03d0);
            *local_390 = 0x75f23a2;
          }
        }
        else if (local_388 < 0x7e8ed9cd) {
          if (local_388 == 0x7bd30b92) {
            *local_390 = -0x57c7e02;
          }
          else if (local_388 == 0x7ddaebf1) {
            *local_390 = -0x3181492;
          }
          else if (local_388 == 0x7e250459) {
            local_268 = PTR_s_initMaskConfig_0048b2e0;
            bVar5 = 0xc45f80c8 <
                    ((DAT_004b1a08 | DAT_004b1a0c) + 0x84f622dd | 0xc31ac20) / 0x4c5b1690;
            iVar8 = 0x4c85d354;
            iVar11 = 0x2daf057f;
            goto LAB_0022ecd0;
          }
        }
        else {
          if (local_388 == 0x7e8ed9cd) {
            uVar9 = (DAT_004b1a80 * DAT_004b1a84 + 0xa9ca08eaU | 0xb37c9c7c) + 0x170251b5;
            bVar4 = 0x2823e714 < uVar9;
            bVar5 = uVar9 == 0x2823e715;
            iVar8 = -0x40d24e2e;
            goto LAB_0022f900;
          }
          if (local_388 == 0x7e997151) {
            *local_390 = 0x62961bcf;
          }
          else if (local_388 == 0x7ed9e3ed) {
            _objc_msgSend(local_b8,local_280,0);
            _objc_msgSend(local_b8,PTR_s_setMeMaskOffsetY__0048a658,0);
            _objc_msgSend(local_b8,PTR_s_setRoundValue__0048a6e0,0xf);
            *local_390 = 0x31a73462;
          }
        }
        goto LAB_002261bc;
      }
      if (0x6f407641 < local_388) {
        if (0x71d8e479 < local_388) {
          if (local_388 == 0x71d8e47a) {
            *local_390 = 0x4e6ff053;
          }
          else {
            if (local_388 == 0x72e76944) {
              bVar5 = local_2d9 == '\0';
              iVar8 = 0xd85b4f3;
              iVar11 = 0x388bd1aa;
              goto LAB_0022f9a8;
            }
            if (local_388 == 0x7306e900) {
              _objc_release(local_180);
              _objc_release(local_178);
              _objc_release(local_170);
              _objc_msgSend(local_1a0,PTR_s_countByEnumeratingWithState_obje_00489c48,local_98,
                            local_a0,0x10);
              *local_390 = -0x4c0ba975;
            }
          }
          goto LAB_002261bc;
        }
        if (local_388 != 0x6f407642) {
          if (local_388 == 0x702d7dd7) {
            *local_390 = 0xa33a116;
          }
          else if (local_388 == 0x71bda01f) {
            uVar9 = (DAT_004b18a0 - DAT_004b18a4) * 0x3b099e56 & 0xa6ec41d8U | 0x80058;
            bVar4 = 0x7c2c0138 < uVar9;
            bVar5 = uVar9 == 0x7c2c0139;
            iVar8 = -0x4c0ba975;
            iVar11 = 0x7306e900;
            goto LAB_0022f3e4;
          }
          goto LAB_002261bc;
        }
        bVar5 = 0x863e2fe3 < (DAT_004b1aa0 * DAT_004b1aa4 & 0xfb0ecb41U) * 0x58832fff + 0x50639af6;
        iVar8 = -0x4e07a6fd;
        iVar11 = 0x3842042c;
        goto LAB_0022ecd0;
      }
      if (0x6ba8fada < local_388) {
        if (local_388 == 0x6ba8fadb) {
          iVar11 = DAT_004b1928 * DAT_004b192c;
          local_210 = _objc_msgSend(local_1a0,local_1a8,local_98,local_a0,0x10);
          bVar5 = (iVar11 + 0x2acc21ceU & 0x77feb7ff | 0x2772147e) == 0x97d5231;
          iVar11 = 0x6ba8fadb;
          iVar8 = -0x38640b8f;
          goto LAB_0022f660;
        }
        if (local_388 == 0x6bf75c38) {
          *local_390 = 0x6284921b;
        }
        else if (local_388 == 0x6d0d3561) {
          *local_390 = -0x6dec246e;
        }
        goto LAB_002261bc;
      }
      if (local_388 == 0x6887e36b) {
        local_2d0 = PTR_s_setMeCardTimeFormat__0048a578;
        bVar5 = 0xd07a13be < ((DAT_004b1ad8 ^ DAT_004b1adc ^ 0x857a0a95) + 0xb4176773 | 0x7a5f5747);
        iVar11 = 0x47a2fc07;
        iVar8 = 0x280e115d;
        goto LAB_0022f328;
      }
      if (local_388 != 0x6929b09b) goto LAB_002261bc;
      uVar9 = DAT_004b1ba8 - DAT_004b1bac;
      _objc_msgSend(local_b8,local_320);
      local_330 = _objc_retainAutoreleasedReturnValue();
      bVar5 = (uVar9 & 0x17188a16) * -0x7d63174f == 0x70fc1157;
      iVar11 = 0x6929b09b;
      iVar8 = -0x536c3c93;
    }
  }
LAB_0022f660:
  if (!bVar5) {
    iVar11 = iVar8;
  }
LAB_0022f9ac:
  *local_390 = iVar11;
  goto LAB_002261bc;
}



// ----- -[BubbleBoxMgr loadBubbleFiles] @ 0022fa08 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxMgr::loadBubbleFiles(ID param_1,SEL param_2)

{
  return;
}



// ----- -[BubbleBoxMgr refreshCurrentBubbles] @ 0022fa0c -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxMgr::refreshCurrentBubbles(ID param_1,SEL param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
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
  uint uVar12;
  int iVar13;
  ID *pIVar14;
  int iVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  ID local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  undefined *local_188;
  undefined8 local_180;
  char local_171;
  long local_170;
  char local_161;
  long local_160;
  undefined8 local_158;
  char local_149;
  undefined8 local_148;
  undefined8 *local_140;
  undefined *local_138;
  undefined *local_130;
  long *local_128;
  long local_120;
  long *local_118;
  long **local_110;
  long local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  int *local_d0;
  int local_c4;
  undefined8 local_c0;
  long lStack_b8;
  long *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_f0;
  pIVar14 = &local_1b0;
  local_78 = *(long *)PTR____stack_chk_guard_00481638;
  local_d0 = &local_c4;
  local_c4 = -0x59c14db2;
  local_1b0 = param_1;
LAB_0022fab4:
  uVar11 = auVar17._8_8_;
  auVar18._8_8_ = uVar11;
  auVar18._0_8_ = local_158;
  local_f0 = auVar17._0_8_;
  auVar16._8_8_ = uVar11;
  auVar16._0_8_ = local_170;
  auVar3._8_8_ = uVar11;
  auVar3._0_8_ = local_170;
  auVar2._8_8_ = uVar11;
  auVar2._0_8_ = local_170;
  auVar19._8_8_ = uVar11;
  auVar19._0_8_ = local_108;
  auVar1._8_8_ = uVar11;
  auVar1._0_8_ = local_108;
  if (local_c4 < -0x1225789) {
    if (-0x390a3cca < local_c4) {
      if (local_c4 < -0x24d9289e) {
        if (local_c4 < -0x363a48ec) {
          if (local_c4 < -0x36b5beb4) {
            if (local_c4 == -0x390a3cc9) {
              *local_d0 = 0x41da3e9e;
            }
            else if (local_c4 == -0x37e40745) {
              *local_d0 = 0x721a563c;
            }
          }
          else if (local_c4 == -0x36b5beb4) {
            *local_d0 = -0x63e841aa;
          }
          else if (local_c4 == -0x3642cd0e) {
            bVar8 = ((DAT_004b1ca0 - DAT_004b1ca4 | 0xbda15a47U) * -0x56be0321) / 0x323e862b <
                    0x7ec33788;
            iVar15 = -0x1b2eac48;
            iVar13 = 0x5a5d1a0c;
            auVar16 = auVar3;
            goto LAB_0023100c;
          }
        }
        else if (local_c4 < -0x30becb09) {
          if (local_c4 == -0x363a48ec) {
            _objc_msgSend(local_e0,local_100,&local_c0,local_d8,0x10);
            auVar17._8_8_ = extraout_x1_09;
            auVar17._0_8_ = local_f0;
            *local_d0 = 0x31137e2;
          }
          else if (local_c4 == -0x347d8a86) {
            *local_d0 = 0x5dea7ebe;
          }
        }
        else if (local_c4 == -0x30becb09) {
          *local_d0 = -0x2d446f7f;
        }
        else if (local_c4 == -0x300e34cc) {
          *local_d0 = -0x5cd24fba;
          local_198 = 0;
        }
        else if (local_c4 == -0x2d446f7f) {
          uVar12 = (DAT_004b1c68 ^ DAT_004b1c6c | 0x584cab) + 0x8b9d6fb8 & 0x3183cd3;
          local_148 = *local_140;
          bVar9 = 0x6ed9d005 < uVar12;
          bVar8 = uVar12 == 0x6ed9d006;
          iVar15 = -0x30becb09;
          iVar13 = -0x770582bb;
LAB_00230c98:
          if (!bVar9 || bVar8) {
            iVar15 = iVar13;
          }
          goto LAB_00231380;
        }
      }
      else if (local_c4 < -0x1afd349f) {
        if (local_c4 < -0x2102a9c8) {
          if (local_c4 == -0x24d9289e) {
            local_140 = (undefined8 *)(*local_128 + local_1a8 * 8);
            *local_d0 = 0x650a3b70;
          }
          else if (local_c4 == -0x235b85e4) {
            *local_d0 = 0x6200b1ab;
          }
        }
        else if (local_c4 == -0x2102a9c8) {
          _objc_release(local_e0);
          auVar19 = _objc_msgSend(local_f8,PTR_s_copy_00489c40);
          auVar17._8_8_ = auVar19._8_8_;
          auVar17._0_8_ = local_f0;
          local_180 = auVar19._0_8_;
          *local_d0 = 0x4753e572;
        }
        else {
          if (local_c4 == -0x2094ccf6) {
            uVar12 = (uint)((ulong)((DAT_004b1c80 - DAT_004b1c84) + 0x7b9a260aU ^ 0xcdf6e642) *
                            0x73d01793 >> 0x3e);
            bVar9 = 0x8723391c < uVar12;
            bVar8 = uVar12 == 0x8723391d;
            iVar13 = 0x64c46ba6;
            iVar15 = 0x2356fbc;
            goto LAB_00231080;
          }
          if (local_c4 == -0x1b2eac48) {
            *local_d0 = 0x5a5d1a0c;
          }
        }
      }
      else if (local_c4 < -0xdbc9213) {
        if (local_c4 == -0x17f90005) {
          local_1a0 = local_190;
          uVar12 = 0;
          if (DAT_004b1c34 != 0) {
            uVar12 = DAT_004b1c30 / DAT_004b1c34;
          }
          bVar8 = (uVar12 + 0xb7619c8b | 0x4a975116) == 0x7fb87b95;
          iVar15 = -0x3ceb3e6f;
          iVar13 = 0x3f6bd78;
          goto LAB_0023137c;
        }
        if (local_c4 == -0xdfc20ed) {
          *local_d0 = 0x379d5072;
        }
        else if (local_c4 == -0x1afd349f) {
          if (*(long *)PTR____stack_chk_guard_00481638 != local_78) {
                    /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
          }
          return;
        }
      }
      else {
        if (local_c4 == -0xdbc9213) {
          local_188 = PTR_s_setBubbleInfoCache__0048b2f8;
          iVar15 = -0x390a3cc9;
          if ((DAT_004b1ce8 - DAT_004b1cec | 0xfffffe9fU) * -0x320a3165 < 0xc360caa) {
            iVar15 = -0xdbc9213;
          }
          goto LAB_00231380;
        }
        if (local_c4 == -0x5fc5e79) {
          _objc_msgSend(param_1,local_188,local_180);
          _objc_release(local_180);
          _objc_release(local_f8);
          _objc_release(local_e0);
          auVar17._8_8_ = extraout_x1_03;
          auVar17._0_8_ = local_f0;
          *local_d0 = 0x7d01c2d7;
        }
      }
      goto LAB_0022fab4;
    }
    if (local_c4 < -0x5dc42836) {
      if (-0x6d2957ed < local_c4) {
        if (local_c4 < -0x68c4c646) {
          if (local_c4 == -0x6d2957ec) {
            iVar15 = 0x5df33525;
            if (local_161 == '\0') {
              iVar15 = -0x5cd24fba;
            }
            *local_d0 = iVar15;
            local_198 = local_160;
          }
          else if (local_c4 == -0x6beac4be) {
            bVar8 = (DAT_004b1c10 * DAT_004b1c14 + 0xe8c2cdeaU & 0xf2a6c5c) * -0x69229748 ==
                    0x675ede65;
            iVar15 = 0x721a563c;
            iVar13 = -0x37e40745;
            goto LAB_0023137c;
          }
        }
        else if (local_c4 == -0x68c4c646) {
          pIVar14 = (ID *)((long)pIVar14 + -0x80);
          local_d8 = (undefined1 *)pIVar14;
          _objc_msgSend(param_1,PTR_s_setBubbles__0048a810,0);
          uVar11 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          _objc_release(uVar11);
          _objc_msgSend(param_1,PTR_s_fetchBubbles_0048a808);
          local_e0 = _objc_retainAutoreleasedReturnValue();
          local_e8 = PTR__OBJC_CLASS___NSMutableDictionary_0048cbd0;
          auVar17 = _objc_msgSend(local_e0,PTR_s_count_00489538);
          *local_d0 = -0x5dc42836;
        }
        else {
          if (local_c4 == -0x63e841aa) {
            iVar15 = 0x5f99b467;
            if ((uint)((ulong)((DAT_004b1c50 ^ DAT_004b1c54) * 0x299b3fdf + 0x6d7aa60c) * 0x605dde33
                      >> 0x3e) < 0xa7341c9f) {
              iVar15 = 0x2bf736ea;
            }
            goto LAB_00231380;
          }
          if (local_c4 == -0x5e50655a) {
            *local_d0 = -0x24d9289e;
          }
        }
        goto LAB_0022fab4;
      }
      if (-0x770582bc < local_c4) {
        if (local_c4 == -0x770582bb) {
          *local_d0 = -0x39eb4218;
        }
        else if (local_c4 == -0x744396a4) {
          *local_d0 = 0x5af1ae06;
        }
        goto LAB_0022fab4;
      }
      if (local_c4 != -0x7c94376a) {
        if (local_c4 == -0x7a23a615) {
          uVar12 = (DAT_004b1cb8 - DAT_004b1cbc ^ 0x6fced0c7U) + 0xf5522816 ^ 0xbbca3703;
          local_160 = local_1a8 + 1;
          bVar9 = 0xbc8b42b0 < uVar12;
          bVar8 = uVar12 == 0xbc8b42b1;
          iVar15 = -0x7a23a615;
          iVar13 = -0xdfc20ed;
          goto LAB_00230c98;
        }
        goto LAB_0022fab4;
      }
      uVar12 = 0;
      if (DAT_004b1c7c != 0) {
        uVar12 = DAT_004b1c78 / DAT_004b1c7c;
      }
      uVar12 = 0x6e09311fU - (int)((long)((ulong)uVar12 * 0x9fde715b) >> 0x3f) ^ 0xb30a58ec;
      _objc_msgSend(local_148,local_130);
      lVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      auVar17._8_8_ = extraout_x1_04;
      auVar17._0_8_ = local_f0;
      local_149 = lVar10 == 0;
      bVar9 = 0x8bcb673d < uVar12;
      bVar8 = uVar12 == 0x8bcb673e;
      iVar13 = 0x5c4f6d1f;
      iVar15 = 0x7438be15;
      param_1 = local_1b0;
LAB_00231080:
      local_f0 = auVar17._0_8_;
      auVar7._8_8_ = auVar17._8_8_;
      auVar7._0_8_ = local_108;
      auVar19._8_8_ = auVar17._8_8_;
      auVar19._0_8_ = local_108;
      if (!bVar9 || bVar8) {
        iVar15 = iVar13;
        auVar19 = auVar7;
      }
    }
    else {
      if (local_c4 < -0x4d737df4) {
        if (local_c4 < -0x59c14db2) {
          if (local_c4 == -0x5dc42836) {
            *local_d0 = 0x2ac57282;
          }
          else if (local_c4 == -0x5cd24fba) {
            local_1a8 = local_198;
            bVar8 = **local_110 == local_120;
            iVar15 = -0x24d9289e;
            iVar13 = 0x61c994ef;
            auVar19 = auVar1;
LAB_00230e8c:
            if (!bVar8) {
              iVar15 = iVar13;
            }
            goto LAB_00231380;
          }
          goto LAB_0022fab4;
        }
        if (local_c4 == -0x59c14db2) {
          bVar8 = 0x64c42c4a <
                  ((uint)((ulong)(uint)(DAT_004b1bf0 * DAT_004b1bf4) * 0x14438643 >> 0x3b) ^
                  0x15ca5027);
          iVar15 = -0x68c4c646;
          iVar13 = 0x3518f1bb;
          auVar16 = auVar2;
          goto LAB_0023100c;
        }
        if (local_c4 == -0x559b5bfd) {
          uVar12 = (DAT_004b1c08 - DAT_004b1c0c & 0x39324e82U | 0x21224600) + 0xa4fa5afc;
          local_110 = &local_b0;
          local_118 = local_b0;
          bVar9 = 0xc63829a6 < uVar12;
          bVar8 = uVar12 == 0xc63829a7;
          iVar15 = 0x790dc265;
          goto LAB_00230c40;
        }
        if (local_c4 != -0x4deb746b) goto LAB_0022fab4;
        uVar12 = 0;
        if (DAT_004b1cd4 != 0) {
          uVar12 = DAT_004b1cd0 / DAT_004b1cd4;
        }
        bVar8 = 0x174d1c6c < ((uVar12 + 0xc95cebbc | 0x4e53d9de) ^ 0xa2b1badf);
        iVar13 = -0x3dfb2bd7;
        iVar15 = 0x13db6b2e;
      }
      else {
        if (local_c4 < -0x3dfb2bd7) {
          if (local_c4 == -0x4d737df4) {
            uVar12 = DAT_004b1c98 | DAT_004b1c9c;
            _objc_msgSend(local_f8,local_138,local_148,local_158);
            _objc_release(local_158);
            auVar17._8_8_ = extraout_x1_08;
            auVar17._0_8_ = local_f0;
            uVar12 = ((uVar12 | 0xcdad7fe4) + 0xd32ac875) / 0x1cc7c459;
            bVar9 = uVar12 < 0xb6b90610;
            bVar8 = uVar12 == 0xb6b9060f;
            iVar13 = 0x2286ee3;
            iVar15 = 0x32ee4d52;
            goto LAB_00231080;
          }
          if (local_c4 == -0x49463400) {
            *local_d0 = -0x17f90005;
            local_190 = local_108;
          }
          goto LAB_0022fab4;
        }
        if (local_c4 == -0x3dfb2bd7) {
          bVar8 = (DAT_004b1cd8 - DAT_004b1cdc & 0x637cbf13U ^ 0x698daacf) * -0x13e6b19a ==
                  0x249ab4ad;
          iVar15 = 0x13db6b2e;
          iVar13 = 0x6716d486;
          goto LAB_00230e8c;
        }
        if (local_c4 == -0x3ceb3e6f) {
          uVar12 = DAT_004b1c38 * DAT_004b1c3c + 0x5d978993;
          local_130 = PTR_s_bubbleId_0048a090;
          local_138 = PTR_s_setObject_forKeyedSubscript__0048b040;
          bVar9 = 0xf07f6bf0 < uVar12;
          bVar8 = uVar12 == 0xf07f6bf1;
          iVar15 = 0x3f6bd78;
          iVar13 = -0x300e34cc;
          goto LAB_00230c98;
        }
        if (local_c4 != -0x39eb4218) goto LAB_0022fab4;
        bVar8 = 0x27724f < (((DAT_004b1c70 ^ DAT_004b1c74) & 0xe6d5894) + 0xad7652cf & 0x1439d983);
        iVar13 = -0x7c94376a;
        iVar15 = 0x5c4f6d1f;
      }
LAB_002311c8:
      if (bVar8) {
        iVar15 = iVar13;
      }
    }
  }
  else if (local_c4 < 0x564ecee4) {
    if (local_c4 < 0x1ab8480a) {
      if (local_c4 < 0x3f6bd78) {
        if (0x2356fbb < local_c4) {
          if (local_c4 == 0x2356fbc) {
            _objc_msgSend(local_148,local_130);
            _objc_retainAutoreleasedReturnValue();
            auVar17._8_8_ = extraout_x1_06;
            auVar17._0_8_ = local_f0;
            *local_d0 = 0x64c46ba6;
          }
          else if (local_c4 == 0x31137e2) {
            uVar12 = DAT_004b1cc8 & DAT_004b1ccc;
            auVar16 = _objc_msgSend(local_e0,local_100,&local_c0,local_d8,0x10);
            bVar8 = 0x5027ae5a < (uVar12 | 0xffffdaff);
            iVar15 = 0x31137e2;
            iVar13 = -0x744396a4;
            goto LAB_0023100c;
          }
          goto LAB_0022fab4;
        }
        if (local_c4 != -0x1225789) {
          if (local_c4 == 0x2286ee3) {
            _objc_msgSend(local_f8,local_138,local_148,local_158);
            _objc_release(local_158);
            auVar17._8_8_ = extraout_x1_00;
            auVar17._0_8_ = local_f0;
            *local_d0 = -0x4d737df4;
          }
          goto LAB_0022fab4;
        }
        uVar12 = DAT_004b1c48 ^ DAT_004b1c4c;
        _objc_enumerationMutation(local_e0,uVar11);
        auVar4._8_8_ = extraout_x1_05;
        auVar4._0_8_ = local_108;
        auVar19._8_8_ = extraout_x1_05;
        auVar19._0_8_ = local_108;
        param_1 = local_1b0;
        iVar15 = -0x1225789;
        if (((uVar12 * -0x5fb8b448 >> 2) / 0x35182a45) * -0x3d21ce07 < 0x52289e44) {
          iVar15 = -0x36b5beb4;
          auVar19 = auVar4;
        }
      }
      else {
        if (local_c4 < 0x13db6b2e) {
          if (local_c4 == 0x3f6bd78) {
            *local_d0 = -0x3ceb3e6f;
          }
          else if (local_c4 == 0xeebb00c) {
            uVar12 = 0;
            if (DAT_004b1c2c != 0) {
              uVar12 = DAT_004b1c28 / DAT_004b1c2c;
            }
            uVar12 = uVar12 * -0x1a032664 + 0xe7720e05;
            local_128 = &lStack_b8;
            bVar9 = 0x3337c355 < uVar12;
            bVar8 = uVar12 == 0x3337c356;
            iVar13 = 0x34eb98d6;
            iVar15 = -0x49463400;
            goto LAB_00231080;
          }
          goto LAB_0022fab4;
        }
        if (local_c4 == 0x13db6b2e) {
          *local_d0 = -0x3dfb2bd7;
          goto LAB_0022fab4;
        }
        if (local_c4 == 0x15999418) {
          _objc_enumerationMutation(local_e0,uVar11);
          auVar17._8_8_ = extraout_x1_07;
          auVar17._0_8_ = local_f0;
          *local_d0 = -0x1225789;
          goto LAB_0022fab4;
        }
        if (local_c4 != 0x16dd7469) goto LAB_0022fab4;
        iVar15 = 0x2286ee3;
        if (DAT_004b1c90 - DAT_004b1c94 != 0x54b234da) {
          iVar15 = -0x4d737df4;
        }
      }
    }
    else if (local_c4 < 0x34eb98d6) {
      if (local_c4 < 0x2bf736ea) {
        if (local_c4 != 0x1ab8480a) {
          if (local_c4 == 0x2ac57282) {
            _objc_msgSend(local_e8,PTR_s_dictionaryWithCapacity__0048b2f0,local_f0);
            local_f8 = _objc_retainAutoreleasedReturnValue();
            lStack_b8 = 0;
            local_c0 = 0;
            uStack_a8 = 0;
            local_b0 = (long *)0x0;
            uStack_98 = 0;
            local_a0 = 0;
            uStack_88 = 0;
            uStack_90 = 0;
            _objc_retain(local_e0);
            local_100 = PTR_s_countByEnumeratingWithState_obje_00489c48;
            auVar19 = _objc_msgSend(local_e0,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                    &local_c0,local_d8,0x10);
            bVar8 = auVar19._0_8_ == 0;
            iVar15 = -0x2102a9c8;
            iVar13 = 0x1ab8480a;
            goto LAB_00230e8c;
          }
          goto LAB_0022fab4;
        }
        uVar12 = (uint)((ulong)(((DAT_004b1c00 | DAT_004b1c04) ^ 0x1c29ca4a) + 0xb7efcc0a) *
                        0x75dc9ff1 >> 0x3e);
        bVar9 = 0x355d7a27 < uVar12;
        bVar8 = uVar12 == 0x355d7a28;
        iVar15 = 0x564ecee4;
LAB_00230c40:
        if (!bVar9 || bVar8) {
          iVar15 = -0x559b5bfd;
        }
      }
      else {
        if (local_c4 != 0x2bf736ea) {
          if (local_c4 == 0x32ee4d52) {
            *local_d0 = -0x3642cd0e;
          }
          goto LAB_0022fab4;
        }
        iVar15 = -0x5e50655a;
        if (0xc75ccb41 < ((DAT_004b1c58 ^ DAT_004b1c5c ^ 0xaeb7e7d1) / 0x415c0b81 & 2)) {
          iVar15 = 0x2bf736ea;
        }
      }
    }
    else {
      if (local_c4 < 0x379d5072) {
        if (local_c4 == 0x34eb98d6) {
          *local_d0 = 0xeebb00c;
        }
        else if (local_c4 == 0x3518f1bb) {
          pIVar14 = (ID *)((long)pIVar14 + -0x80);
          _objc_msgSend(param_1,PTR_s_setBubbles__0048a810,0);
          uVar11 = *(undefined8 *)(param_1 + 8);
          *(undefined8 *)(param_1 + 8) = 0;
          _objc_release(uVar11);
          _objc_msgSend(param_1,PTR_s_fetchBubbles_0048a808);
          uVar11 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar11,PTR_s_count_00489538);
          auVar17._8_8_ = extraout_x1_01;
          auVar17._0_8_ = local_f0;
          *local_d0 = -0x68c4c646;
        }
        goto LAB_0022fab4;
      }
      if (local_c4 == 0x379d5072) {
        local_161 = local_160 == local_1a0;
        *local_d0 = -0x6d2957ec;
        goto LAB_0022fab4;
      }
      if (local_c4 == 0x41da3e9e) {
        bVar8 = 0xb0b2912 < ((DAT_004b1cf0 * DAT_004b1cf4 | 0x200020U) ^ 0x3fffe0 | 0xd99afbdf);
        iVar13 = 0x7d01c2d7;
        iVar15 = -0x5fc5e79;
        goto LAB_002311c8;
      }
      if (local_c4 != 0x4753e572) goto LAB_0022fab4;
      iVar15 = -0xdbc9213;
      if (((DAT_004b1ce0 | DAT_004b1ce4) * -0x35c0751f & 0xd1128d28 | 0x80108520) < 0x61922718) {
        iVar15 = 0x58540c45;
      }
    }
  }
  else if (local_c4 < 0x6054ca06) {
    if (local_c4 < 0x5af1ae06) {
      if (local_c4 < 0x5a5d1a0c) {
        if (local_c4 == 0x564ecee4) {
          *local_d0 = -0x559b5bfd;
        }
        else if (local_c4 == 0x58540c45) {
          *local_d0 = -0xdbc9213;
        }
      }
      else {
        if (local_c4 == 0x5a5d1a0c) {
          uVar12 = 0;
          if (DAT_004b1cac != 0) {
            uVar12 = DAT_004b1ca8 / DAT_004b1cac;
          }
          uVar12 = uVar12 * 0x8c36779 + 0x4e78e714 ^ 0xf1996a8c;
          bVar9 = 0x103fe5bf < uVar12;
          bVar8 = uVar12 == 0x103fe5c0;
          iVar13 = -0x1b2eac48;
          iVar15 = -0x347d8a86;
          goto LAB_00231080;
        }
        if (local_c4 == 0x5aa17c90) {
          *local_d0 = -0x7a23a615;
        }
      }
      goto LAB_0022fab4;
    }
    if (local_c4 < 0x5dea7ebe) {
      if (local_c4 == 0x5af1ae06) {
        local_171 = local_170 == 0;
        *local_d0 = -0x4deb746b;
      }
      else if (local_c4 == 0x5c4f6d1f) {
        _objc_msgSend(local_148,local_130);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        auVar17._8_8_ = extraout_x1_02;
        auVar17._0_8_ = local_f0;
        *local_d0 = -0x7c94376a;
      }
      goto LAB_0022fab4;
    }
    if (local_c4 == 0x5dea7ebe) {
      bVar8 = 0x3677ff85 < ((DAT_004b1cb0 * DAT_004b1cb4 | 0x2498cbbdU) / 0x22d3c36b | 0x588974bd);
      iVar13 = -0x7a23a615;
      iVar15 = 0x5aa17c90;
      goto LAB_002311c8;
    }
    if (local_c4 != 0x5df33525) {
      if (local_c4 == 0x5f99b467) {
        *local_d0 = 0x2bf736ea;
      }
      goto LAB_0022fab4;
    }
    bVar8 = 0x323641bd <
            (uint)((ulong)((DAT_004b1cc0 | DAT_004b1cc4) + 0xa22b1301) * 0x9f5057e7 >> 0x3f);
    iVar15 = 0x31137e2;
    iVar13 = -0x363a48ec;
LAB_0023100c:
    auVar6._8_8_ = auVar16._8_8_;
    auVar6._0_8_ = local_108;
    auVar19._8_8_ = auVar16._8_8_;
    auVar19._0_8_ = local_108;
    local_170 = auVar16._0_8_;
    if (bVar8) {
      iVar15 = iVar13;
      auVar19 = auVar6;
    }
  }
  else if (local_c4 < 0x6716d486) {
    if (local_c4 < 0x6200b1ab) {
      if (local_c4 == 0x6054ca06) {
        *local_d0 = 0x16dd7469;
        goto LAB_0022fab4;
      }
      if (local_c4 != 0x61c994ef) goto LAB_0022fab4;
      iVar15 = 0x15999418;
      if (0x4787860f < ((DAT_004b1c40 & DAT_004b1c44) + 0xe6e80694 | 0xfffbf0c3)) {
        iVar15 = -0x1225789;
      }
    }
    else {
      if (local_c4 == 0x6200b1ab) {
        bVar8 = false;
        iVar13 = 0x34eb98d6;
        iVar15 = 0xeebb00c;
      }
      else {
        if (local_c4 != 0x64c46ba6) {
          if (local_c4 == 0x650a3b70) {
            bVar8 = (DAT_004b1c60 - DAT_004b1c64) * 0x31d4c7c2 == 0x6d0c4188;
            iVar15 = -0x2d446f7f;
            iVar13 = -0x30becb09;
            goto LAB_0023137c;
          }
          goto LAB_0022fab4;
        }
        uVar12 = DAT_004b1c88 + DAT_004b1c8c;
        _objc_msgSend(local_148,local_130);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        bVar8 = ((uVar12 | 0x940e28fa) + 0xfc66b7 & 0x95527195) == 0x9a6d49ea;
        iVar13 = 0x2356fbc;
        iVar15 = 0x6054ca06;
      }
      local_158 = auVar18._0_8_;
      auVar5._8_8_ = auVar18._8_8_;
      auVar5._0_8_ = local_108;
      auVar19._8_8_ = auVar18._8_8_;
      auVar19._0_8_ = local_108;
      if (bVar8) {
        iVar15 = iVar13;
        auVar19 = auVar5;
      }
    }
  }
  else {
    if (local_c4 < 0x7438be15) {
      if (local_c4 == 0x6716d486) {
        iVar15 = -0x2102a9c8;
        if (local_171 == '\0') {
          iVar15 = -0x17f90005;
        }
        *local_d0 = iVar15;
        local_190 = local_170;
      }
      else if (local_c4 == 0x721a563c) {
        uVar12 = (uint)(DAT_004b1c18 - DAT_004b1c1c) / 0x696ec46e + 0x1c80c7c1 & 0x140000c3;
        local_120 = *local_118;
        bVar9 = 0xce24fc18 < uVar12;
        bVar8 = uVar12 == 0xce24fc19;
        iVar15 = 0x721a563c;
        iVar13 = -0x235b85e4;
        goto LAB_00230c98;
      }
      goto LAB_0022fab4;
    }
    if (local_c4 != 0x7438be15) {
      if (local_c4 == 0x790dc265) {
        *local_d0 = -0x6beac4be;
      }
      else if (local_c4 == 0x7d01c2d7) {
        uVar12 = 0;
        if (DAT_004b1cfc != 0) {
          uVar12 = DAT_004b1cf8 / DAT_004b1cfc;
        }
        _objc_msgSend(param_1,local_188,local_180);
        _objc_release(local_180);
        _objc_release(local_f8);
        _objc_release(local_e0);
        auVar16._8_8_ = extraout_x1;
        auVar16._0_8_ = local_170;
        bVar8 = 0x978808b7 < (uVar12 + 0x985a6e9 ^ 0x8882028 | 0xd667db01);
        iVar15 = 0x7d01c2d7;
        iVar13 = -0x1afd349f;
        goto LAB_0023100c;
      }
      goto LAB_0022fab4;
    }
    bVar8 = local_149 == '\0';
    iVar15 = 0x5dea7ebe;
    iVar13 = -0x2094ccf6;
LAB_0023137c:
    if (bVar8) {
      iVar15 = iVar13;
    }
  }
LAB_00231380:
  local_108 = auVar19._0_8_;
  auVar17._8_8_ = auVar19._8_8_;
  auVar17._0_8_ = local_f0;
  *local_d0 = iVar15;
  goto LAB_0022fab4;
}



// ----- -[BubbleBoxMgr bubbleInLocal:] @ 00231428 -----

/* Function Stack Size: 0x18 bytes */

bool BubbleBoxMgr::bubbleInLocal_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_80;
  byte local_79;
  long local_78;
  undefined8 local_70;
  
  uVar2 = 0;
  if (DAT_004b1d04 != 0) {
    uVar2 = DAT_004b1d00 / DAT_004b1d04;
  }
  local_80 = 0x4da51e45;
  do {
    while( true ) {
      while( true ) {
        while (puVar3 = PTR_s_bubbleInfoCache_0048b300, local_80 < 0x42288640) {
          if (local_80 == -0x70688f9a) {
            local_80 = 0x5133d142;
          }
          else if (local_80 == -0x6fd8d9a9) {
            uVar1 = DAT_004b1d08 * DAT_004b1d0c;
            _objc_retain(param_3);
            bubbleInfoCache(param_1,(SEL)puVar3);
            local_70 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_70,PTR_s_objectForKeyedSubscript__00489d00,param_3);
            local_78 = _objc_retainAutoreleasedReturnValue();
            _objc_release(param_3);
            param_2 = extraout_x1_00;
            local_80 = -0x6fd8d9a9;
            if (0xd67d2a9 < ((uVar1 ^ 0x1100) & 0xcbde5dbf | 0xcad644a5)) {
              local_80 = -0x70688f9a;
            }
          }
          else if (local_80 == 0x3c046ed6) {
            _objc_retain(param_3);
            bubbleInfoCache(param_1,(SEL)puVar3);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,PTR_s_objectForKeyedSubscript__00489d00,param_3);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_3);
            param_2 = extraout_x1;
            local_80 = -0x6fd8d9a9;
          }
        }
        if (local_80 != 0x4da51e45) break;
        local_80 = -0x6fd8d9a9;
        if ((uVar2 + 0x82b34347 & 0xbdcff7ff | 0xb58fc1eb) == 0xaca1a275) {
          local_80 = 0x3c046ed6;
        }
      }
      if (local_80 != 0x5133d142) break;
      local_79 = local_78 != 0;
      local_80 = 0x42288640;
    }
  } while (local_80 != 0x42288640);
  _objc_release(local_78,param_2);
  _objc_release(local_70);
  return (bool)local_79;
}



// ----- -[BubbleBoxMgr bubbleVersion:] @ 00231668 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxMgr::bubbleVersion_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar6;
  undefined1 auVar7 [16];
  int local_9c;
  undefined **local_98;
  undefined **local_90;
  undefined *local_88;
  char local_79;
  long local_78;
  undefined *local_70;
  byte local_66;
  char local_65;
  
  iVar2 = DAT_004d1884;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_90;
  local_9c = 0x6c0408fd;
LAB_00231710:
  while( true ) {
    local_90 = auVar7._0_8_;
    if (0x1b91d79b < local_9c) break;
    if (local_9c < -0x2ec0f819) {
      if (local_9c < -0x5e240a73) {
        if (local_9c < -0x6d8964d5) {
          if (local_9c == -0x7f2fbb2b) {
            local_9c = 0x68564aec;
          }
          else if (local_9c == -0x79455237) {
            local_9c = 0x609edb56;
            if (local_65 == '\0') {
              local_9c = 0x153184fc;
            }
          }
        }
        else if (local_9c == -0x6c9f1a47) {
          local_9c = 0x67dae502;
        }
        else if (local_9c == -0x6773a92f) {
          DAT_004b03f4 = local_66;
          local_9c = -0x25c1236a;
        }
        else if (local_9c == -0x6d8964d5) {
          _objc_release(local_78);
          IVar5 = _objc_autoreleaseReturnValue(local_98);
          return IVar5;
        }
      }
      else if (local_9c < -0x3e9822bb) {
        if (local_9c == -0x5e240a73) {
          DAT_004b03f5 = DAT_004b03f1 ^ 0xfb;
          DAT_004b03f6 = DAT_004b03f2 ^ 0xb9;
          DAT_004b03f7 = DAT_004b03f3 ^ 1;
          local_9c = -0x5e240a73;
          if (((DAT_004b1d48 - DAT_004b1d4c) + 0xe3348614U | 0x5e84036f) / 0x149f8476 < 0x59b45769)
          {
            local_9c = 0x21fbff7f;
          }
        }
        else if ((local_9c == -0x4fa58245) &&
                (local_9c = 0x68564aec,
                0xf19a84de < (DAT_004b1d70 + DAT_004b1d74 | 0x51cbf9b1U) + 0x10d3ada8)) {
          local_9c = -0x7f2fbb2b;
        }
      }
      else {
        if (local_9c == -0x3e9822bb) {
          bVar3 = ((DAT_004b1d20 ^ DAT_004b1d24) + 0xa0f1df5f & 0xb6df5dd4) == 0xbd67adde;
          iVar6 = 0x13bc949;
          goto LAB_002320e4;
        }
        if (local_9c == -0x3b91a85a) {
          local_9c = -0x6d8964d5;
          if (local_79 == '\0') {
            local_9c = 0x1fdd6dc4;
          }
          local_98 = &PTR____CFConstantStringClassReference_004b0400;
        }
      }
    }
    else if (local_9c < -0x1a66307) {
      if (local_9c < -0x25c1236a) {
        if (local_9c == -0x2ec0f819) {
          local_9c = 0x13bc949;
        }
        else if (local_9c == -0x28f492a5) {
          local_9c = -0x3e9822bb;
        }
      }
      else if (local_9c == -0x25c1236a) {
        local_9c = -0x1a66307;
        if (0x8e02ab5f < ((DAT_004b1d40 * DAT_004b1d44 ^ 0x3ba00b05U) + 0xc52022ad | 0xd25016c8)) {
          local_9c = -0x5e240a73;
        }
      }
      else if (local_9c == -0x20e7e360) {
        local_9c = 0x7bd6beb4;
        if (0x92f0486a < ((DAT_004b1d50 + DAT_004b1d54) * -0x3b6dcf82 & 0xd3149762U) + 0x54539be5) {
          local_9c = 0x1b91d79c;
        }
      }
    }
    else if (local_9c < 0x28ec5f8) {
      if (local_9c == -0x1a66307) {
        DAT_004b03f5 = DAT_004b03f1 ^ 0xfb;
        DAT_004b03f6 = DAT_004b03f2 ^ 0xb9;
        DAT_004b03f7 = DAT_004b03f3 ^ 1;
        local_9c = -0x5e240a73;
      }
      else if (local_9c == 0x13bc949) {
        bVar3 = ((DAT_004b1d28 | DAT_004b1d2c) + 0xd28fd7fa ^ 0x2811128c | 0xc34ee873) == 0x29678790
        ;
        iVar6 = -0x79455237;
LAB_002320e4:
        local_9c = -0x2ec0f819;
        if (!bVar3) {
          local_9c = iVar6;
        }
      }
    }
    else if (local_9c == 0x28ec5f8) {
      _objc_msgSend(local_78,local_88);
      auVar7 = _objc_retainAutoreleasedReturnValue();
      local_9c = -0x4fa58245;
    }
    else if (local_9c == 0x153184fc) {
      DAT_004d1884 = 1;
      local_70 = PTR_s_bubbleInfoCache_0048b300;
      local_9c = -0x20e7e360;
    }
  }
  if (local_9c < 0x4758d8ec) {
    if (local_9c < 0x2e6a84bd) {
      if (local_9c < 0x21fbff7f) {
        if (local_9c == 0x1b91d79c) {
          _objc_retain(param_3,auVar7._8_8_);
          _objc_msgSend(param_1,local_70);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,PTR_s_objectForKeyedSubscript__00489d00,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(param_3);
          _objc_release(uVar4);
          auVar7._8_8_ = extraout_x1_00;
          auVar7._0_8_ = local_90;
          local_9c = 0x7bd6beb4;
        }
        else if (local_9c == 0x1fdd6dc4) {
          local_88 = PTR_s_version_0048a080;
          local_9c = 0x28ec5f8;
        }
      }
      else if (local_9c == 0x21fbff7f) {
        local_9c = 0x153184fc;
      }
      else if (local_9c == 0x2521d912) {
        local_9c = 0x2e6a84bd;
      }
      goto LAB_00231710;
    }
    if (local_9c < 0x3a88d709) {
      if (local_9c == 0x2e6a84bd) {
        local_65 = iVar2 == 0;
        local_9c = 0x2e6a84bd;
        if ((DAT_004b1d18 + DAT_004b1d1c & 0xaa9507baU | 0xa110502) + 0xb15d26c9 < 0xdbbe02c4) {
          local_9c = -0x28f492a5;
        }
      }
      else if (local_9c == 0x334625f5) {
        local_9c = 0x42841e3e;
      }
      goto LAB_00231710;
    }
    if (local_9c == 0x3a88d709) {
      local_9c = -0x6d8964d5;
      local_98 = local_90;
      goto LAB_00231710;
    }
    if (local_9c != 0x42841e3e) goto LAB_00231710;
    uVar1 = 0;
    if (DAT_004b1d6c != 0) {
      uVar1 = DAT_004b1d68 / DAT_004b1d6c;
    }
    bVar3 = 0x3eb1af11 < ((uVar1 ^ 0x1320b900) & 0x5333fb84) + 0x179a6cfe;
    local_9c = -0x3b91a85a;
  }
  else {
    if (0x68564aeb < local_9c) {
      if (local_9c < 0x6ea4c20d) {
        if (local_9c == 0x68564aec) {
          local_9c = 0x3a88d709;
          if (0xed3040a5 < (DAT_004b1d78 | DAT_004b1d7c) * -0x141e78b6 + 0x884beee6) {
            local_9c = 0x68564aec;
          }
        }
        else if ((local_9c == 0x6c0408fd) &&
                (local_9c = 0x2521d912,
                ((DAT_004b1d10 * DAT_004b1d14 ^ 0x42c04cc0U) & 0xeae84cc5) != 0xf3130fff)) {
          local_9c = 0x2e6a84bd;
        }
      }
      else if (local_9c == 0x6ea4c20d) {
        local_9c = 0x56f91997;
      }
      else if (local_9c == 0x7bd6beb4) {
        _objc_retain(param_3,auVar7._8_8_);
        _objc_msgSend(param_1,local_70);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar4,PTR_s_objectForKeyedSubscript__00489d00,param_3);
        local_78 = _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        _objc_release(uVar4);
        auVar7._8_8_ = extraout_x1;
        auVar7._0_8_ = local_90;
        local_79 = local_78 == 0;
        local_9c = -0x6c9f1a47;
      }
      goto LAB_00231710;
    }
    if (local_9c < 0x609edb56) {
      if (local_9c == 0x4758d8ec) {
        local_9c = -0x6773a92f;
      }
      else if (local_9c == 0x56f91997) {
        local_66 = DAT_004b03f0 ^ 0xc6;
        local_9c = 0x4758d8ec;
      }
      goto LAB_00231710;
    }
    if (local_9c == 0x609edb56) {
      local_9c = 0x56f91997;
      if ((DAT_004b1d30 + DAT_004b1d34 ^ 0x1480U | 0x7ffeea7b) < 0x921e0b1f) {
        local_9c = 0x6ea4c20d;
      }
      goto LAB_00231710;
    }
    if (local_9c != 0x67dae502) goto LAB_00231710;
    bVar3 = 0xe91d1ed9 < (DAT_004b1d60 * DAT_004b1d64 & 0xb0560622U ^ 0xb04c41b4 | 0x4ba1b841);
    local_9c = 0x334625f5;
  }
  if (bVar3) {
    local_9c = 0x42841e3e;
  }
  goto LAB_00231710;
}



// ----- -[BubbleBoxMgr getBubbleInfo:] @ 00232134 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxMgr::getBubbleInfo_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  undefined *local_70;
  
  iVar2 = DAT_004b1d80 * DAT_004b1d84;
  local_7c = -0x6a8e4e4c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < 0x207e69e3) {
            if (local_7c < -0x1470dc1c) {
              if (local_7c == -0x77df7f7b) {
                _objc_msgSend(param_1,local_70);
                bubbleInfoCache(param_1,(SEL)PTR_s_bubbleInfoCache_0048b300);
                uVar3 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar3,PTR_s_objectForKeyedSubscript__00489d00,param_3);
                uVar4 = _objc_retainAutoreleasedReturnValue();
                _objc_release(param_3);
                _objc_release(uVar3);
                _objc_autoreleaseReturnValue(uVar4);
                param_2 = extraout_x1_01;
                local_7c = -0x36b3ed43;
              }
              else if (local_7c == -0x6a8e4e4c) {
                local_7c = 0x3534e04c;
                if ((iVar2 + 0xa906821eU | 0x4830c353) < 0xd5bf3b38) {
                  local_7c = 0x4d7fd1f4;
                }
              }
              else if (local_7c == -0x36b3ed43) {
                uVar1 = DAT_004b1d98 + DAT_004b1d9c;
                _objc_msgSend(param_1,local_70);
                bubbleInfoCache(param_1,(SEL)PTR_s_bubbleInfoCache_0048b300);
                uVar3 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar3,PTR_s_objectForKeyedSubscript__00489d00,param_3);
                local_78 = _objc_retainAutoreleasedReturnValue();
                _objc_release(param_3);
                _objc_release(uVar3);
                _objc_autoreleaseReturnValue(local_78);
                param_2 = extraout_x1;
                local_7c = -0x77df7f7b;
                if (0x33365930 < ((uVar1 | 0x2158d17b) + 0x52fa1c5a | 0xc02a966c)) {
                  local_7c = 0x34a434ae;
                }
              }
            }
            else if (local_7c == -0x1470dc1c) {
              local_7c = 0x751b165d;
            }
            else if (local_7c == -0xe6c7260) {
              uVar1 = 0;
              if (DAT_004b1da4 != 0) {
                uVar1 = DAT_004b1da0 / DAT_004b1da4;
              }
              local_7c = 0x751b165d;
              if ((uVar1 | 0xbffaefff) < 0x47863240) {
                local_7c = -0x1470dc1c;
              }
            }
            else if (local_7c == 0x109e99ae) {
              local_7c = 0x207e69e3;
            }
          }
          if (0x4d7fd1f3 < local_7c) break;
          if (local_7c == 0x207e69e3) {
            local_7c = -0x36b3ed43;
            if ((int)((long)((ulong)(uint)(DAT_004b1d90 + DAT_004b1d94) * 0x9691f441) >> 0x3f) *
                -0x7e3cc42b == 0x25c7d37a) {
              local_7c = -0x77df7f7b;
            }
          }
          else if (local_7c == 0x34a434ae) {
            local_7c = -0xe6c7260;
          }
          else if (local_7c == 0x3534e04c) {
            uVar1 = DAT_004b1d88 - DAT_004b1d8c;
            local_70 = PTR_s_reloadBubbles_0048b308;
            _objc_retain(param_3,param_2);
            param_2 = extraout_x1_00;
            local_7c = 0x3534e04c;
            if (0xbf6329fe < (uint)((ulong)uVar1 * 0x18de44db >> 0x3b) + 0xe770151e) {
              local_7c = 0x109e99ae;
            }
          }
        }
        if (local_7c != 0x4d7fd1f4) break;
        _objc_retain(param_3,param_2);
        param_2 = extraout_x1_02;
        local_7c = 0x3534e04c;
      }
      if (local_7c != 0x751b165d) break;
      local_7c = -0x1470dc1c;
      if ((DAT_004b1da8 * DAT_004b1dac & 0x3b16f8ebU) != 0x6d1c9294) {
        local_7c = 0x53980afa;
      }
    }
  } while (local_7c != 0x53980afa);
  return local_78;
}



// ----- -[BubbleBoxMgr reloadBubbles] @ 00232560 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxMgr::reloadBubbles(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  int local_7c;
  undefined8 local_78;
  undefined *local_70;
  
  uVar2 = DAT_004b1db0 | DAT_004b1db4;
  local_7c = 0x6460f8e9;
LAB_00232608:
  do {
    while (0x10f75c14 < local_7c) {
      if (local_7c < 0x6460f8e9) {
        if (local_7c == 0x10f75c15) {
          uVar1 = DAT_004b1dc8 ^ DAT_004b1dcc;
          fetchBubbles(param_1,(SEL)PTR_s_fetchBubbles_0048a808);
          local_78 = _objc_retainAutoreleasedReturnValue();
          local_7c = 0x37f25cc7;
          if (0x81e12f89 < ((uVar1 | 0x8fcd4fba) + 0xd99140d5 ^ 0x4959510b)) {
            local_7c = 0x10f75c15;
          }
        }
        else if (local_7c == 0x37f25cc7) {
          local_7c = 0x4153a6d5;
        }
        else if (local_7c == 0x4153a6d5) {
          local_7c = 0x73fc8297;
          if ((DAT_004b1dd0 & DAT_004b1dd4 | 0x28532853) != 0xd9a4912c) {
            local_7c = -0x2fcccfe;
          }
        }
      }
      else if (local_7c == 0x7b6f3a23) {
LAB_0023279c:
        local_7c = 0x10f75c15;
      }
      else if (local_7c == 0x73fc8297) {
        _objc_msgSend(param_1,local_70,local_78);
        _objc_release(local_78);
        local_7c = -0x2fcccfe;
      }
      else if ((local_7c == 0x6460f8e9) &&
              (local_7c = -0x49adfed8, 0xb23ae78b < (uVar2 | 0xe5b8ea93) + 0x4ff0a03c)) {
        local_7c = -0x7470b4bc;
      }
    }
    if (local_7c < -0x4736622d) {
      if (local_7c == -0x78bdb543) {
        fetchBubbles(param_1,(SEL)PTR_s_fetchBubbles_0048a808);
        _objc_retainAutoreleasedReturnValue();
        goto LAB_0023279c;
      }
      if (local_7c == -0x7470b4bc) {
        setBubbles_(param_1,(SEL)PTR_s_setBubbles__0048a810,0);
        local_7c = -0x49adfed8;
      }
      else if (local_7c == -0x49adfed8) {
        uVar1 = DAT_004b1db8 ^ DAT_004b1dbc;
        local_70 = PTR_s_setBubbles__0048a810;
        setBubbles_(param_1,(SEL)PTR_s_setBubbles__0048a810,0);
        local_7c = -0x4736622d;
        if (uVar1 * -0x6def7db8 + 0xa0016da0 < 0x859b050f) {
          local_7c = -0x7470b4bc;
        }
      }
      goto LAB_00232608;
    }
    if (local_7c == -0x4736622d) {
      local_7c = 0x7b6f3a23;
    }
    else if (local_7c == -0x2fcccfe) {
      _objc_msgSend(param_1,local_70,local_78);
      _objc_release(local_78);
      local_7c = -0x25dbff4;
    }
    else if (local_7c == -0x25dbff4) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxMgr fetchBubbles] @ 002328a0 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::fetchBubbles(ID param_1,SEL param_2)

{
  long lVar1;
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
  undefined *puVar38;
  undefined8 *puVar39;
  bool bVar40;
  bool bVar41;
  int iVar42;
  undefined8 uVar43;
  ID IVar44;
  undefined8 uVar45;
  undefined1 *extraout_x1;
  undefined8 extraout_x1_00;
  undefined1 *extraout_x1_01;
  undefined1 *extraout_x1_02;
  undefined1 *extraout_x1_03;
  undefined1 *extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined1 *extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined1 *extraout_x1_08;
  undefined1 *extraout_x1_09;
  undefined1 *extraout_x1_10;
  undefined1 *extraout_x1_11;
  undefined1 *extraout_x1_12;
  undefined1 *extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined1 *extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined1 *extraout_x1_17;
  undefined1 *extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined1 *extraout_x1_21;
  undefined1 *extraout_x1_22;
  undefined1 *extraout_x1_23;
  undefined1 *extraout_x1_24;
  undefined1 *extraout_x1_25;
  undefined1 *extraout_x1_26;
  undefined1 *extraout_x1_27;
  undefined1 *extraout_x1_28;
  undefined1 *extraout_x1_29;
  undefined1 *extraout_x1_30;
  undefined1 *extraout_x1_31;
  undefined1 *extraout_x1_32;
  undefined1 *extraout_x1_33;
  undefined1 *extraout_x1_34;
  undefined1 *extraout_x1_35;
  undefined1 *extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined1 *extraout_x1_38;
  undefined1 *extraout_x1_39;
  undefined1 *extraout_x1_40;
  undefined1 *extraout_x1_41;
  undefined1 *extraout_x1_42;
  undefined1 *extraout_x1_43;
  undefined1 *extraout_x1_44;
  undefined1 *extraout_x1_45;
  undefined8 extraout_x1_46;
  undefined1 *extraout_x1_47;
  int iVar46;
  uint uVar47;
  long *plVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auStack_300 [8];
  ID local_2f8;
  int *local_2f0;
  int local_2e4;
  ID local_2e0;
  long local_2d8;
  ID local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  ID local_2b0;
  ID local_2a8;
  long lStack_2a0;
  long local_298;
  long local_290;
  undefined8 uStack_288;
  long local_280;
  long local_278;
  ID local_270;
  char local_261;
  long local_260;
  char local_251;
  long local_250;
  undefined8 local_248;
  char local_239;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  char local_219;
  long local_218;
  undefined8 local_210;
  undefined *local_208;
  undefined8 local_200;
  char local_1f1;
  long local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  char local_1d1;
  undefined8 local_1d0;
  byte local_1c3;
  byte local_1c2;
  char local_1c1;
  undefined8 local_1c0;
  undefined8 local_1b8;
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
  long *local_158;
  long local_150;
  undefined8 *local_148;
  char local_139;
  long local_138;
  undefined *local_130;
  char local_121;
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  ID local_f0;
  ID local_e8;
  undefined8 local_e0;
  char local_d1;
  undefined *local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined *local_b8;
  long *local_b0;
  long *local_a8;
  byte *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  long *local_88;
  byte local_7b;
  byte local_7a;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  plVar48 = (long *)auStack_300;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  uVar47 = 0;
  if (DAT_004b1de4 != 0) {
    uVar47 = DAT_004b1de0 / DAT_004b1de4;
  }
  local_74 = uVar47 * -0x12119545 + 0x75fb03d8;
  local_2f0 = &local_2e4;
  local_2e4 = 0x6045051a;
  local_2f8 = param_1;
LAB_00232994:
  puVar39 = local_90;
  auVar54._8_8_ = param_2;
  auVar54._0_8_ = local_1d0;
  auVar37._8_8_ = param_2;
  auVar37._0_8_ = local_1d0;
  auVar36._8_8_ = param_2;
  auVar36._0_8_ = local_1d0;
  auVar35._8_8_ = param_2;
  auVar35._0_8_ = local_1d0;
  auVar34._8_8_ = param_2;
  auVar34._0_8_ = local_1d0;
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = local_1d0;
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = local_1d0;
  auVar53._8_8_ = param_2;
  auVar53._0_8_ = local_260;
  auVar50._8_8_ = param_2;
  auVar50._0_8_ = local_e0;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_e0;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_e0;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_e0;
  auVar49._8_8_ = param_2;
  auVar49._0_8_ = local_110;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_110;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_110;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_110;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_110;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_110;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_110;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_110;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_110;
  auVar52._8_8_ = param_2;
  auVar52._0_8_ = local_138;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_138;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_138;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_138;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_138;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_138;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_138;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_138;
  auVar55._8_8_ = param_2;
  auVar55._0_8_ = local_138;
  if (0x4e822a8 < local_2e4) {
    iVar42 = 0x7a249d31;
    if (local_2e4 < 0x45ff1659) {
      if (local_2e4 < 0x18dca917) {
        if (0xd10ce2c < local_2e4) {
          if (0x12489c4c < local_2e4) {
            if (local_2e4 < 0x15280420) {
              if (local_2e4 == 0x12489c4d) {
                _objc_msgSend(local_228,local_1a0,local_248);
                *local_2f0 = -0x23c94ba9;
                param_2 = (SEL)extraout_x1_47;
              }
              else if (local_2e4 == 0x13168dab) {
                *local_2f0 = 0x7a249d31;
              }
              else if (local_2e4 == 0x14ba78d0) {
                *(undefined8 *)((long)plVar48 + -0x10) = local_1d0;
                *(undefined8 *)((long)plVar48 + -8) = local_200;
                _NSLog(&PTR____CFConstantStringClassReference_004b0540);
                *local_2f0 = -0x7fd7ae6f;
                param_2 = (SEL)extraout_x1_13;
              }
            }
            else if (local_2e4 < 0x1624f3a7) {
              if (local_2e4 == 0x15280420) {
                *local_2f0 = -0x3f81184f;
              }
              else if (local_2e4 == 0x15fbe4d0) {
                *local_2f0 = 0x108488e3;
              }
            }
            else {
              if (local_2e4 == 0x1624f3a7) {
                local_2c8 = local_298;
                bVar40 = 0xbf4ebddd <
                         ((DAT_004b2080 - DAT_004b2084) * 0x646cf734 + 0x1cdcb9adU) / 0x27f08545;
                iVar46 = -0x2566e24a;
                iVar42 = 0x5301b154;
                auVar52 = auVar3;
                goto LAB_00236f9c;
              }
              if (local_2e4 == 0x16786cb7) {
                bVar40 = local_1f1 == '\0';
                iVar46 = -0x56d9ada6;
                iVar42 = 0x4e822a9;
                goto LAB_00237f08;
              }
            }
            goto LAB_00232994;
          }
          if (local_2e4 < 0x1154d25d) {
            if (local_2e4 == 0xd10ce2d) {
              *local_2f0 = -0x5d738a9e;
            }
            else if (local_2e4 == 0x108488e3) {
              _objc_release(local_1d0);
              *local_2f0 = -0x22bf9971;
              param_2 = (SEL)extraout_x1_29;
            }
            else if (local_2e4 == 0x10b6cb8d) {
              *local_2f0 = -0x6cea94bd;
            }
            goto LAB_00232994;
          }
          if (local_2e4 == 0x1154d25d) {
            uVar47 = DAT_004b1ff0 * DAT_004b1ff4 + 0x324f793U ^ 0x55048f1f | 0xa22260e0;
            bVar41 = 0xda0ef73c < uVar47;
            bVar40 = uVar47 == 0xda0ef73d;
            iVar42 = 0x5b7819d8;
            iVar46 = 0x32293219;
            auVar49 = auVar14;
            goto LAB_00237ee8;
          }
          if (local_2e4 != 0x117d7695) {
            if (local_2e4 == 0x120be2aa) {
              *local_2f0 = -0x4791f2d9;
            }
            goto LAB_00232994;
          }
          bVar40 = local_d1 == '\0';
          iVar42 = -0x4648c42f;
          iVar46 = -0x1d9f69bf;
LAB_00236a8c:
          if (bVar40) {
            iVar42 = iVar46;
          }
          goto LAB_00237f0c;
        }
        if (local_2e4 < 0x96f20ff) {
          if (local_2e4 < 0x7007bb9) {
            if (local_2e4 == 0x4e822a9) {
              uVar47 = 0;
              if (DAT_004b1fa4 != 0) {
                uVar47 = DAT_004b1fa0 / DAT_004b1fa4;
              }
              bVar40 = 0x61985c4a < (uVar47 + 0x539a4067 ^ 0xd3a33535) / 0x4a4bbe0;
              iVar42 = -0x12a96992;
              iVar46 = -0x6cc459c9;
              auVar50 = auVar19;
              goto LAB_00237b68;
            }
            if (local_2e4 == 0x5b4d2ac) {
              *local_2f0 = 0xb98f1b7;
              local_280 = 0;
            }
            else if (local_2e4 == 0x6e753a5) {
              *local_2f0 = -0x6639d16b;
            }
          }
          else if (local_2e4 == 0x7007bb9) {
            *local_2f0 = 0x76e359c0;
          }
          else if (local_2e4 == 0x818ba6c) {
            auVar52 = _objc_msgSend(local_e0,PTR_s_mutableCopy_0048a7a0);
            param_2 = auVar52._8_8_;
            local_e8 = auVar52._0_8_;
            *local_2f0 = -0x26debbfd;
          }
          else if (local_2e4 == 0x9104cd5) {
            _objc_enumerationMutation(local_118);
            *local_2f0 = -0x27e04392;
            param_2 = (SEL)extraout_x1_08;
          }
          goto LAB_00232994;
        }
        if (local_2e4 < 0xb585c59) {
          if (local_2e4 == 0x96f20ff) {
LAB_00235c48:
            *local_2f0 = 0x48565e2;
          }
          else if (local_2e4 == 0x9eb8140) {
            *local_2f0 = -0x2636ee97;
          }
          else if (local_2e4 == 0xb1224c8) {
            _objc_msgSend(local_118,PTR_s_countByEnumeratingWithState_obje_00489c48,local_90,
                          local_98,0x10);
            *local_2f0 = 0x7ce6fa41;
            param_2 = (SEL)extraout_x1_02;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == 0xb585c59) {
          _objc_retain(local_f0);
          iVar42 = 0x3a462bea;
          param_2 = (SEL)extraout_x1_36;
          goto LAB_00237ae4;
        }
        if (local_2e4 != 0xb90b59b) {
          if (local_2e4 == 0xb98f1b7) {
            local_2c0 = local_280;
            bVar40 = *(long *)*local_148 == local_150;
            iVar42 = 0x697ac097;
            iVar46 = -0x504158c6;
            goto LAB_00236c5c;
          }
          goto LAB_00232994;
        }
        _objc_msgSend(local_228,local_1a0,local_238);
        iVar42 = -0x4cc9f570;
        param_2 = (SEL)extraout_x1_30;
LAB_00237ae4:
        *local_2f0 = iVar42;
        goto LAB_00232994;
      }
      if (0x31dba511 < local_2e4) {
        if (local_2e4 < 0x3a462bea) {
          if (local_2e4 < 0x35d05f51) {
            if (local_2e4 == 0x31dba512) {
              local_218 = *local_b0;
              _objc_retain();
              local_219 = local_218 == 0;
              iVar42 = 0x7a857e7b;
              param_2 = (SEL)extraout_x1_34;
              goto LAB_00237ae4;
            }
            if (local_2e4 == 0x32293219) {
              uVar47 = 0;
              if (DAT_004b1ffc != 0) {
                uVar47 = DAT_004b1ff8 / DAT_004b1ffc;
              }
              _objc_msgSend(local_228,local_198);
              auVar51 = _objc_retainAutoreleasedReturnValue();
              iVar42 = 0x405c2f98;
              if (0x6bc78fe0 < (uVar47 + 0xd3a31d74 & 0x342cf603) + 0x1a43fc87) {
                iVar42 = 0x5b7819d8;
              }
              goto LAB_00237d28;
            }
            if (local_2e4 == 0x3389fa6e) {
              plVar48 = (long *)((long)plVar48 + -0x30);
              _objc_msgSend(param_1,PTR_s_bubbles_0048a120);
              _objc_retainAutoreleasedReturnValue();
              *local_2f0 = 0x6a67a5f1;
              param_2 = (SEL)extraout_x1_01;
            }
            goto LAB_00232994;
          }
          if (local_2e4 == 0x35d05f51) {
            local_1e0 = PTR__OBJC_CLASS___NSData_0048c9b8;
            *local_a8 = 0;
            *local_2f0 = -0x414cf214;
            goto LAB_00232994;
          }
          if (local_2e4 == 0x35daba23) {
            *local_2f0 = -0xcc3d666;
            goto LAB_00232994;
          }
          if (local_2e4 != 0x361141e0) goto LAB_00232994;
          uVar47 = DAT_004b1fe8 * DAT_004b1fec * -0x48c654a0 + 0x789f3960;
          iVar42 = _objc_msgSend(local_f8,local_168,local_230);
          local_239 = _objc_msgSend(local_f8,local_168,local_238);
          uVar43 = local_230;
          if (iVar42 == 0) {
            uVar43 = 0;
          }
          _objc_msgSend(local_228,local_190,uVar43);
          auVar49._8_8_ = extraout_x1_07;
          auVar49._0_8_ = local_110;
          bVar41 = 0x1c594651 < uVar47;
          bVar40 = uVar47 == 0x1c594652;
          iVar42 = 0x361141e0;
          iVar46 = -0x1cb6ed3d;
          goto LAB_00237ee8;
        }
        if (0x40ad7fff < local_2e4) {
          if (local_2e4 < 0x43fb5f92) {
            if (local_2e4 == 0x40ad8000) {
              bVar40 = 0x64da15bd <
                       ((uint)((ulong)(DAT_004b1e10 - DAT_004b1e14 & 0xdec76c0a) * 0x6cd69ff >> 0x3a
                              ) | 0xf1b500a4);
              iVar46 = 0x24918128;
              iVar42 = -0x4e8426ce;
              auVar52 = auVar2;
              goto LAB_00236f9c;
            }
            if (local_2e4 == 0x42ba63b5) {
              iVar42 = -0x1a4b343b;
              if ((((DAT_004b1ec0 ^ DAT_004b1ec4) & 0x4ac4895) + 0x2f2eb973 & 0x141de3b6) <
                  0x7cd47b79) {
                iVar42 = 0x656ae033;
              }
              goto LAB_00237f0c;
            }
          }
          else {
            if (local_2e4 == 0x43fb5f92) {
              uVar47 = (DAT_004b1eb0 - DAT_004b1eb4 | 0xa3a6ff3dU) + 0x3b351b4e;
              bVar41 = 0x21425bf4 < uVar47;
              bVar40 = uVar47 == 0x21425bf5;
              iVar42 = -0x264d8470;
              iVar46 = 0x64e245ec;
              auVar49 = auVar13;
              goto LAB_00237ee8;
            }
            if (local_2e4 == 0x4565fb4e) {
              bVar40 = (uint)((ulong)((DAT_004b1fd8 & DAT_004b1fdc) * -0x3b77f9dd) * 0x9f4c03 >>
                             0x35) == 0xdc3cceaf;
              iVar46 = -0x6c2d0d90;
              iVar42 = 0x5f7362b3;
              goto LAB_00237f08;
            }
          }
          goto LAB_00232994;
        }
        if (local_2e4 == 0x3a462bea) {
          uVar47 = DAT_004b1e98 - DAT_004b1e9c;
          _objc_retain(local_f0);
          auVar20._8_8_ = extraout_x1_46;
          auVar20._0_8_ = local_248;
          auVar51._8_8_ = extraout_x1_46;
          auVar51._0_8_ = local_248;
          iVar42 = 0x3a462bea;
          if ((uVar47 & 0x20088878) != 0x581bafb2) {
            iVar42 = -0x3e1253d;
            auVar51 = auVar20;
          }
LAB_00237d28:
          param_2 = auVar51._8_8_;
          local_248 = auVar51._0_8_;
          *local_2f0 = iVar42;
          goto LAB_00232994;
        }
        if (local_2e4 != 0x3f88425e) {
          if (local_2e4 == 0x405c2f98) {
            *local_2f0 = 0x12489c4d;
          }
          goto LAB_00232994;
        }
        _objc_release(local_c8);
        _objc_release(local_c0);
        iVar42 = -0x71ed388b;
        param_2 = (SEL)extraout_x1_44;
        goto LAB_00237ae4;
      }
      if (local_2e4 < 0x2755dc84) {
        if (local_2e4 < 0x2528c62c) {
          if (local_2e4 == 0x18dca917) {
            *local_2f0 = -0x67d66f99;
          }
          else if (local_2e4 == 0x1acc6598) {
            _objc_msgSend(param_1,local_b8);
            _objc_retainAutoreleasedReturnValue();
            *local_2f0 = -0x2f41b8ec;
            param_2 = (SEL)extraout_x1_27;
          }
          else if (local_2e4 == 0x24918128) {
            uVar47 = 0;
            if (DAT_004b1e1c != 0) {
              uVar47 = DAT_004b1e18 / DAT_004b1e1c;
            }
            DAT_004b0440 = local_7a;
            param_2 = (SEL)&DAT_004b0438;
            DAT_004b0441 = DAT_004b0438 ^ 0x5e;
            local_7b = DAT_004b0439 ^ 100;
            bVar40 = ((uVar47 ^ 0xd5563b87) + 0x8af9cbec | 0x4230efe9) == 0x6ce6e1b1;
            iVar42 = 0x24918128;
            iVar46 = 0x10b6cb8d;
            goto LAB_00236c5c;
          }
        }
        else if (local_2e4 == 0x2528c62c) {
          _objc_release(local_1e8);
          *local_2f0 = 0x15fbe4d0;
          param_2 = (SEL)extraout_x1_35;
        }
        else if (local_2e4 == 0x256e3a99) {
          *local_2f0 = -0x1d7138f;
        }
        else if (local_2e4 == 0x2636f758) {
          if (((uint)(DAT_004b1f80 * DAT_004b1f84) / 0x436e0a57 | 0xfc0bf57c) < 0x6dcf27c4) {
            iVar42 = 0x13168dab;
          }
          goto LAB_00237f0c;
        }
        goto LAB_00232994;
      }
      if (local_2e4 < 0x2d9311be) {
        if (local_2e4 == 0x2755dc84) {
          *local_2f0 = 0x736c4f08;
          local_290 = local_1f0;
          uStack_288 = local_200;
        }
        else {
          if (local_2e4 == 0x27844f87) {
            uVar47 = DAT_004b1fb8 | DAT_004b1fbc;
            _objc_msgSend(local_208,local_180,local_1e8,0,local_b0);
            auVar55 = _objc_retainAutoreleasedReturnValue();
            auVar26._8_8_ = auVar55._8_8_;
            auVar26._0_8_ = local_138;
            auVar52._8_8_ = auVar55._8_8_;
            auVar52._0_8_ = local_138;
            local_210 = auVar55._0_8_;
            iVar42 = 0x27844f87;
            if (((uVar47 ^ 0x105a61) & 0x10185fef ^ 0xecc8ace) < 0x4b3555e0) {
              iVar42 = -0x4f5aee69;
              auVar52 = auVar26;
            }
            goto LAB_00237f0c;
          }
          if (local_2e4 == 0x2870c18b) {
            bVar40 = DAT_004b1e00 + DAT_004b1e04 == -0x7128ec01;
            iVar46 = -0x4c196983;
            iVar42 = -0x57a62d00;
            goto LAB_002378b0;
          }
        }
        goto LAB_00232994;
      }
      if (local_2e4 < 0x3098b341) {
        if (local_2e4 == 0x2d9311be) {
          *local_2f0 = -0x3bbdc946;
        }
        else if (local_2e4 == 0x2fb61fcf) {
          *local_2f0 = 0x5162a4ee;
          local_2b0 = local_2d0;
        }
        goto LAB_00232994;
      }
      if (local_2e4 != 0x3098b341) {
        if (local_2e4 == 0x30bc759f) {
          *local_2f0 = -0x3508677e;
        }
        goto LAB_00232994;
      }
      bVar40 = (int)((long)((ulong)(DAT_004b1ef0 ^ DAT_004b1ef4 ^ 0x9a62b88c) * 0x94314b85) >> 0x3f)
               * -0x993738c == -0xf303d96;
      iVar46 = -0x6639d16b;
      iVar42 = 0x6e753a5;
    }
    else {
      if (local_2e4 < 0x665e691a) {
        if (local_2e4 < 0x564e201b) {
          if (local_2e4 < 0x4c24bb18) {
            if (local_2e4 < 0x48a9d4ef) {
              if (local_2e4 == 0x45ff1659) {
                uVar47 = 0;
                if (DAT_004b1f4c != 0) {
                  uVar47 = DAT_004b1f48 / DAT_004b1f4c;
                }
                _objc_msgSend(local_1c0,local_108,&PTR____CFConstantStringClassReference_004b0520);
                auVar54 = _objc_retainAutoreleasedReturnValue();
                uVar47 = (uVar47 * 0x3a902da3 ^ 0xad1ef3c1) / 0xe9aa82b;
                bVar41 = uVar47 < 0xa81fd2f1;
                bVar40 = uVar47 == 0xa81fd2f0;
                iVar46 = 0x45ff1659;
                iVar42 = 0x66d8e0a4;
                goto LAB_002377d0;
              }
              if (local_2e4 == 0x4689c41a) {
                uVar47 = (DAT_004b1f90 + DAT_004b1f94 & 0xbf9c394U) + 0x5459aed1 ^ 0xf9241545;
                bVar41 = 0x93d9d093 < uVar47;
                bVar40 = uVar47 == 0x93d9d094;
                iVar42 = -0x7fd7ae6f;
                iVar46 = 0x14ba78d0;
                auVar49 = auVar11;
                goto LAB_00237ee8;
              }
              if (local_2e4 == 0x471e4e8c) {
                *local_2f0 = -0x179b1547;
                local_278 = local_138;
              }
              goto LAB_00232994;
            }
            if (local_2e4 == 0x48a9d4ef) {
              _objc_autoreleaseReturnValue(local_2e0);
              param_2 = (SEL)extraout_x1_42;
LAB_002378f8:
              *local_2f0 = -0x14531999;
              goto LAB_00232994;
            }
            if (local_2e4 != 0x48f29c12) {
              if (local_2e4 == 0x4b5af75c) {
                *local_2f0 = 0x57e4b465;
              }
              goto LAB_00232994;
            }
            bVar40 = 0x602bb50a < (DAT_004b1f40 ^ DAT_004b1f44) * -0x448a5236 + 0x90c12d2;
            iVar42 = 0x45ff1659;
            iVar46 = -0x5b1af33d;
            auVar50 = auVar17;
            goto LAB_00237b68;
          }
          if (0x4f451f7f < local_2e4) {
            if (local_2e4 < 0x5162a4ee) {
              if (local_2e4 == 0x4f451f80) {
                uVar47 = DAT_004b2098 + DAT_004b209c;
                _objc_release(local_118);
                _objc_release(local_2d8);
                _objc_release(local_110);
                _objc_release(local_f8);
                _objc_release(local_f0);
                auVar27._8_8_ = extraout_x1_37;
                auVar27._0_8_ = local_138;
                auVar52._8_8_ = extraout_x1_37;
                auVar52._0_8_ = local_138;
                iVar42 = 0x2fb61fcf;
                if ((uint)((ulong)(uVar47 & 0x2980924 | 0xdd26125a) * 0x15a350bd >> 0x3c) ==
                    0x48e3e046) {
                  iVar42 = 0x4f451f80;
                  auVar52 = auVar27;
                }
                goto LAB_00237f0c;
              }
              if (local_2e4 == 0x4feb5dc3) {
                *local_2f0 = 0x15eff86;
              }
            }
            else {
              if (local_2e4 == 0x5162a4ee) {
                local_2e0 = local_2b0;
                goto LAB_002378f8;
              }
              if (local_2e4 == 0x5301b154) {
                iVar42 = DAT_004b2088 + DAT_004b208c;
                _objc_release(local_118);
                _objc_msgSend(local_f0,PTR_s_sortedArrayUsingComparator__0048b338,
                              &PTR___NSConcreteGlobalBlock_00480808);
                uVar43 = _objc_retainAutoreleasedReturnValue();
                puVar38 = PTR_s_mutableCopy_0048a7a0;
                local_270 = _objc_msgSend(uVar43,PTR_s_mutableCopy_0048a7a0);
                _objc_release(uVar43);
                param_1 = local_2f8;
                IVar44 = _objc_msgSend(local_270,puVar38);
                setBubbles_(param_1,(SEL)PTR_s_setBubbles__0048a810,IVar44);
                _objc_release(IVar44);
                auVar50._8_8_ = extraout_x1_16;
                auVar50._0_8_ = local_e0;
                bVar40 = 0x5b4ab74c < (iVar42 + 0x1c1cdcf7U ^ 0x40000141 | 0xbc3e4e8e);
                iVar42 = -0x2566e24a;
                iVar46 = -0x2a260262;
                goto LAB_00237b68;
              }
            }
            goto LAB_00232994;
          }
          if (local_2e4 == 0x4c24bb18) {
            uVar47 = (DAT_004b1ea0 & DAT_004b1ea4 | 0x64078) ^ 0xd420860 | 0xf0a9b183;
            bVar41 = 0x7de72d9c < uVar47;
            bVar40 = uVar47 == 0x7de72d9d;
            iVar42 = 0x7ce6fa41;
            iVar46 = 0xb1224c8;
            auVar49 = auVar10;
            goto LAB_00237ee8;
          }
          if (local_2e4 != 0x4eb554e6) {
            if (local_2e4 == 0x4f2ff7f3) {
              local_2d8 = lStack_2a0;
              local_2d0 = local_2a8;
              iVar42 = 0x4f451f80;
              if (0xa5e35f8b <
                  (((DAT_004b2090 | DAT_004b2094) ^ 0x6816821) & 0xe85e979) + 0x4966abee) {
                iVar42 = -0x33e2b750;
              }
              goto LAB_00237f0c;
            }
            goto LAB_00232994;
          }
          uVar47 = (uint)((ulong)(uint)(DAT_004b1f60 - DAT_004b1f64) * 0x6ef0da15 >> 0x3e) *
                   -0x12c092f5 & 0x261d814a;
          bVar41 = 0x51583f10 < uVar47;
          bVar40 = uVar47 == 0x51583f11;
          iVar42 = -0x29f9ed96;
          iVar46 = -0x38851117;
          auVar49 = auVar9;
          goto LAB_00237ee8;
        }
        if (local_2e4 < 0x5cd300e1) {
          if (local_2e4 < 0x5a770202) {
            if (local_2e4 == 0x564e201b) {
              _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_0048ca60,param_2);
              _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
              _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_1,PTR_s_basePath_0048b2c0);
              uVar43 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar43,PTR_s_stringByAppendingPathComponent__00489550,
                            &PTR____CFConstantStringClassReference_004b0560);
              _objc_retainAutoreleasedReturnValue();
              iVar42 = -0x6fade98e;
              param_2 = (SEL)extraout_x1_41;
              goto LAB_00237ae4;
            }
            if (local_2e4 == 0x57988768) {
              uVar47 = DAT_004b1e38 + DAT_004b1e3c;
              auVar52 = _objc_msgSend(local_c8,local_d0);
              auVar21._8_8_ = auVar52._8_8_;
              auVar21._0_8_ = local_248;
              auVar51._8_8_ = auVar52._8_8_;
              auVar51._0_8_ = local_248;
              local_d1 = auVar52._0_8_ == 0;
              iVar42 = -0x3c223d0c;
              if (0x265081ef < (uVar47 & 0xb2000800 ^ 0xc94abe7e)) {
                iVar42 = -0x6633e8ea;
                auVar51 = auVar21;
              }
              goto LAB_00237d28;
            }
            if (local_2e4 == 0x57e4b465) {
              uVar47 = (DAT_004b1f30 - DAT_004b1f34) * -0x3114f530 + 0xc190b2ce;
              bVar41 = 0x1a13f52f < uVar47;
              bVar40 = uVar47 == 0x1a13f530;
              iVar42 = -0x3cb7222f;
              iVar46 = 0x7891dff7;
              auVar49 = auVar12;
              goto LAB_00237ee8;
            }
          }
          else if (local_2e4 == 0x5a770202) {
            *local_2f0 = 0x65faa65b;
          }
          else if (local_2e4 == 0x5a80ba18) {
            iVar42 = 0x1624f3a7;
            if (local_139 == '\0') {
              iVar42 = 0x43fb5f92;
            }
            *local_2f0 = iVar42;
            local_298 = 0;
          }
          else if (local_2e4 == 0x5b7819d8) {
            _objc_msgSend(local_228,local_198);
            _objc_retainAutoreleasedReturnValue();
            *local_2f0 = 0x32293219;
            param_2 = (SEL)extraout_x1_10;
          }
          goto LAB_00232994;
        }
        if (local_2e4 < 0x63c2e9a2) {
          if (local_2e4 == 0x5cd300e1) {
            bVar40 = local_79 == '\0';
            iVar46 = -0x69f45f0;
            iVar42 = 0x2870c18b;
            goto LAB_00237f08;
          }
          if (local_2e4 == 0x5f7362b3) {
            *local_2f0 = -0x3e50112f;
          }
          else if (local_2e4 == 0x6045051a) {
            bVar41 = 0xdf1a27cc < local_74;
            bVar40 = local_74 == 0xdf1a27cd;
            iVar46 = -0x36676377;
            iVar42 = -0xf8a8618;
            auVar54 = auVar32;
            goto LAB_002377d0;
          }
          goto LAB_00232994;
        }
        if (local_2e4 < 0x656ae033) {
          if (local_2e4 == 0x63c2e9a2) goto LAB_00235c48;
          if (local_2e4 == 0x64e245ec) {
            *local_2f0 = -0x264d8470;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == 0x656ae033) {
          uVar47 = 0;
          if (DAT_004b1ecc != 0) {
            uVar47 = DAT_004b1ec8 / DAT_004b1ecc;
          }
          local_150 = *(long *)*local_148;
          local_158 = local_90 + 1;
          iVar42 = 0x656ae033;
          if ((uVar47 * 0x4346ab6 & 0x7c77e00) < 0xb2565e3b) {
            iVar42 = -0x10519202;
          }
          goto LAB_00237f0c;
        }
        if (local_2e4 != 0x65faa65b) goto LAB_00232994;
        iVar42 = -0x42f3a945;
        if (((DAT_004b2040 ^ DAT_004b2044 ^ 0x88e0c4) & 0x44dafec5) + 0x97ca6b8a < 0x653b8020) {
          iVar42 = -0x1785d67;
        }
        goto LAB_00237f0c;
      }
      if (local_2e4 < 0x72fb82c0) {
        if (local_2e4 < 0x6a67a5f1) {
          if (local_2e4 < 0x66ee2940) {
            if (local_2e4 == 0x665e691a) {
              *local_2f0 = 0x40ad8000;
            }
            else {
              if (local_2e4 == 0x66adc3fe) {
                bVar40 = 0xfadbba82 < (DAT_004b1fd0 - DAT_004b1fd4 | 0x737bf3ffU) + 0x18e62340;
                iVar46 = -0x6c2d0d90;
                iVar42 = 0x4565fb4e;
                auVar52 = auVar55;
                goto LAB_00236f9c;
              }
              if (local_2e4 == 0x66d8e0a4) {
                *local_2f0 = -0x710dc45b;
              }
            }
          }
          else {
            if (local_2e4 == 0x66ee2940) {
              bVar40 = 0x6883fc37 <
                       ((DAT_004b1e20 | DAT_004b1e24 | 0xae540d72) / 0x54c1a391 | 0x1200c434);
              iVar42 = 0x6a67a5f1;
              iVar46 = 0x3389fa6e;
              auVar50 = auVar18;
              goto LAB_00237b68;
            }
            if (local_2e4 == 0x67dd8b63) {
              *local_2f0 = -0x715ce028;
            }
            else if (local_2e4 == 0x697ac097) {
              local_1b8 = *(undefined8 *)(*local_158 + local_2c0 * 8);
              _objc_msgSend(local_110,local_108);
              auVar52 = _objc_retainAutoreleasedReturnValue();
              param_2 = auVar52._8_8_;
              local_1c0 = auVar52._0_8_;
              *local_2f0 = -0x3642d004;
            }
          }
          goto LAB_00232994;
        }
        if (local_2e4 < 0x70369a5d) {
          if (local_2e4 == 0x6a67a5f1) {
            uVar47 = (DAT_004b1e28 ^ DAT_004b1e2c) * -0x2d06c28a + 0xb32dd204;
            local_a0 = (byte *)((long)plVar48 + -0x10);
            local_a8 = (long *)((long)plVar48 + -0x20);
            plVar48 = (long *)((long)plVar48 + -0x30);
            local_b8 = PTR_s_bubbles_0048a120;
            local_b0 = plVar48;
            _objc_msgSend(param_1);
            auVar52 = _objc_retainAutoreleasedReturnValue();
            auVar49._8_8_ = auVar52._8_8_;
            auVar49._0_8_ = local_110;
            local_c0 = auVar52._0_8_;
            bVar41 = 0x7780a577 < uVar47;
            bVar40 = uVar47 == 0x7780a578;
            iVar42 = 0x3389fa6e;
            iVar46 = 0xd10ce2d;
            goto LAB_00237ee8;
          }
          if (local_2e4 == 0x6f4fa99a) {
            bVar40 = local_1c3 == 0;
            iVar46 = 0x7e2c915e;
            iVar42 = 0x48f29c12;
            goto LAB_00237f08;
          }
          if (local_2e4 == 0x6f672e82) {
            uVar47 = 0;
            if (DAT_004b1fc4 != 0) {
              uVar47 = DAT_004b1fc0 / DAT_004b1fc4;
            }
            uVar47 = (uint)((ulong)(uVar47 + 0x345a3bdf >> 4) * 0x8494e55 >> 0x37);
            bVar41 = 0xe0ea26ed < uVar47;
            bVar40 = uVar47 == 0xe0ea26ee;
            iVar46 = 0x31dba512;
            iVar42 = -0x5909fdc0;
            auVar54 = auVar33;
            goto LAB_002377d0;
          }
          goto LAB_00232994;
        }
        if (0x71527089 < local_2e4) {
          if (local_2e4 == 0x7152708a) {
            iVar42 = -0x4a2b2680;
            if (((DAT_004b2078 ^ DAT_004b207c) + 0x40b82470 & 0x2cdb49a4) * -0x37acbcf4 ==
                0x41d7566b) {
              iVar42 = 0x7152708a;
            }
            goto LAB_00237f0c;
          }
          if (local_2e4 == 0x724f81e4) {
            *local_2f0 = -0x327e1dd;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == 0x70369a5d) {
          _objc_release(local_100);
          *local_88 = 0;
          _objc_msgSend(local_f8,PTR_s_contentsOfDirectoryAtPath_error__0048b050,local_110);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain(*local_88);
          *local_2f0 = -0x5c550147;
          param_2 = (SEL)extraout_x1_38;
          goto LAB_00232994;
        }
        if (local_2e4 != 0x70504dba) goto LAB_00232994;
        bVar40 = ((DAT_004b2020 ^ DAT_004b2024) * -0x785bfa3 & 0x3585f2d4) == 0x8b280c19;
        iVar46 = -0x47aa4f48;
        iVar42 = 0x2528c62c;
LAB_00237f08:
        auVar30._8_8_ = param_2;
        auVar30._0_8_ = local_138;
        auVar52._8_8_ = param_2;
        auVar52._0_8_ = local_138;
        if (bVar40) {
          iVar42 = iVar46;
          auVar52 = auVar30;
        }
        goto LAB_00237f0c;
      }
      if (0x7891dff6 < local_2e4) {
        if (0x7acdb2f1 < local_2e4) {
          if (local_2e4 < 0x7e0d894d) {
            if (local_2e4 == 0x7acdb2f2) {
              *local_2f0 = -0x2987937;
            }
            else if (local_2e4 == 0x7ce6fa41) {
              uVar47 = DAT_004b1ea8 * DAT_004b1eac;
              local_130 = PTR_s_countByEnumeratingWithState_obje_00489c48;
              auVar52 = _objc_msgSend(local_118,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                      local_90,local_98,0x10);
              local_139 = auVar52._0_8_ == 0;
              bVar40 = 0xb6f2566b <
                       (((uint)((ulong)uVar47 * 0x457dfb2b >> 0x3e) | 0xd2959f5c) ^ 0xeb45acf3);
              iVar46 = 0xb1224c8;
              iVar42 = -0x1a2581b8;
              goto LAB_00236f9c;
            }
          }
          else if (local_2e4 == 0x7e0d894d) {
            local_90[1] = 0;
            *puVar39 = 0;
            puVar39[3] = 0;
            puVar39[2] = 0;
            puVar39[5] = 0;
            puVar39[4] = 0;
            puVar39[7] = 0;
            puVar39[6] = 0;
            _objc_retain(local_118);
            *local_2f0 = 0x4c24bb18;
            param_2 = (SEL)extraout_x1_39;
          }
          else if (local_2e4 == 0x7e2c915e) {
            bVar40 = ((DAT_004b2030 | DAT_004b2034) + 0xfea6902e | 0xf8547b7e) == 0x389e697d;
            iVar46 = -0x3bbdc946;
            iVar42 = 0x2d9311be;
            goto LAB_002378b0;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == 0x7891dff7) {
          *local_2f0 = -0x3cb7222f;
          goto LAB_00232994;
        }
        if (local_2e4 != 0x7a249d31) {
          if (local_2e4 == 0x7a857e7b) {
            iVar42 = -0x62df3687;
            if (local_219 == '\0') {
              iVar42 = 0x736c4f08;
            }
            *local_2f0 = iVar42;
            local_290 = local_218;
            uStack_288 = local_210;
          }
          goto LAB_00232994;
        }
        if ((DAT_004b1f88 + DAT_004b1f8c + 0xbc5e45beU & 0xdac148b8) != 0x4c37fb4) {
          iVar42 = -0x3215fc91;
        }
        goto LAB_00237f0c;
      }
      if (0x74ac4f2a < local_2e4) {
        if (local_2e4 == 0x74ac4f2b) {
          iVar42 = _objc_msgSend(local_f8,local_168,local_230);
          _objc_msgSend(local_f8,local_168,local_238);
          uVar43 = local_230;
          if (iVar42 == 0) {
            uVar43 = 0;
          }
          _objc_msgSend(local_228,local_190,uVar43);
          *local_2f0 = 0x361141e0;
          param_2 = (SEL)extraout_x1_43;
          goto LAB_00232994;
        }
        if (local_2e4 == 0x76e359c0) {
          *local_2f0 = 0x5cd300e1;
          goto LAB_00232994;
        }
        if (local_2e4 != 0x771525a9) goto LAB_00232994;
        iVar42 = -0x39a2791c;
        if (((DAT_004b2070 | DAT_004b2074) * 0x60da2490 + 0xbe2cb5a9 | 0x9f57a134) != 0x5f2e63ff) {
          iVar42 = 0x7152708a;
        }
        goto LAB_00237f0c;
      }
      if (local_2e4 != 0x72fb82c0) {
        if (local_2e4 == 0x736c4f08) {
          lVar1 = local_290;
          _objc_release(uStack_288);
          _objc_release(local_1e8);
          _objc_release(local_1d0);
          _objc_release(local_1c0);
          *local_2f0 = 0x1624f3a7;
          param_2 = (SEL)extraout_x1_33;
          local_298 = lVar1;
        }
        else if (local_2e4 == 0x736e007f) {
          _objc_msgSend(local_118,local_130,local_90,local_98,0x10);
          *local_2f0 = -0x3c2fa431;
          param_2 = (SEL)extraout_x1_03;
        }
        goto LAB_00232994;
      }
      bVar40 = (int)((long)((ulong)((DAT_004b1df0 | DAT_004b1df4) & 0x9f813c08 ^ 0xa03657f4) *
                           0xd4c30c65) >> 0x3f) == 0x5fd1e9ed;
      iVar46 = 0x76e359c0;
      iVar42 = 0x7007bb9;
    }
LAB_002378b0:
    if (!bVar40) {
      iVar42 = iVar46;
    }
    goto LAB_00237f0c;
  }
  if (local_2e4 < -0x36f1deb7) {
    if (local_2e4 < -0x572ae606) {
      if (local_2e4 < -0x6639d16b) {
        if (-0x6effa2c7 < local_2e4) {
          if (local_2e4 < -0x6c2d0d90) {
            if (local_2e4 == -0x6effa2c6) {
              _objc_msgSend(param_1,local_b8);
              auVar52 = _objc_retainAutoreleasedReturnValue();
              param_2 = auVar52._8_8_;
              local_c8 = auVar52._0_8_;
              local_d0 = PTR_s_count_00489538;
              *local_2f0 = -0x338f66c0;
            }
            else if (local_2e4 == -0x6cea94bd) {
              DAT_004b0442 = local_7b;
              DAT_004b0443 = DAT_004b043a ^ 0x14;
              DAT_004b0444 = DAT_004b043b ^ 0xb2;
              DAT_004b0445 = DAT_004b043c ^ 0xeb;
              DAT_004b042a = DAT_004b0420 ^ 0x2c;
              DAT_004b042b = DAT_004b0421 ^ 0x17;
              DAT_004b042c = DAT_004b0422 ^ 0x47;
              DAT_004b042d = DAT_004b0423 ^ 0xc2;
              DAT_004b042e = DAT_004b0424 ^ 0xea;
              DAT_004b042f = DAT_004b0425 ^ 2;
              DAT_004b0430 = DAT_004b0426 ^ 0x85;
              DAT_004b0431 = DAT_004b0427 ^ 0x4c;
              DAT_004b0432 = DAT_004b0428 ^ 0x44;
              DAT_004b0433 = DAT_004b0429 ^ 0x6d;
              *local_2f0 = -0x69f45f0;
            }
            else if (local_2e4 == -0x6cc459c9) {
              *local_b0 = 0;
              *local_2f0 = -0x12a96992;
            }
          }
          else if (local_2e4 == -0x6c2d0d90) {
            *local_2f0 = 0x4565fb4e;
          }
          else {
            if (local_2e4 == -0x67d66f99) {
              uVar47 = 0;
              if (DAT_004b1e84 != 0) {
                uVar47 = DAT_004b1e80 / DAT_004b1e84;
              }
              bVar40 = uVar47 == 0x5c951e8a;
              iVar46 = -0x2987937;
              iVar42 = 0x7acdb2f2;
              goto LAB_002378b0;
            }
            if (local_2e4 == -0x67788997) {
              _objc_msgSend(local_228,local_1a8,local_1b8);
              _objc_msgSend(local_f0,local_1b0,local_228);
              _objc_release(local_238);
              _objc_release(local_230);
              *local_2f0 = -0xb46eb51;
              param_2 = (SEL)extraout_x1_06;
            }
          }
          goto LAB_00232994;
        }
        if (-0x715ce029 < local_2e4) {
          if (local_2e4 == -0x715ce028) {
            bVar40 = 0x6d3d098f <
                     ((DAT_004b1e70 | DAT_004b1e74) * 0x3ae3906a + 0x79c3fc37 | 0x5c076df3);
            iVar46 = -0x5c550147;
            iVar42 = 0x70369a5d;
            goto LAB_00236f9c;
          }
          if (local_2e4 == -0x710dc45b) {
            local_1d1 = _objc_msgSend(local_f8,local_168,local_1d0);
            *local_2f0 = -0x2dd3c661;
            param_2 = (SEL)extraout_x1_22;
          }
          else if (local_2e4 == -0x6fade98e) {
            uVar47 = (uint)((ulong)(DAT_004b1e68 & DAT_004b1e6c) * 0x32534f43 >> 0x3d) + 0x513f9873;
            local_f0 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_0048ca60,param_2);
            _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
            local_f8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_1,PTR_s_basePath_0048b2c0);
            local_100 = _objc_retainAutoreleasedReturnValue();
            local_108 = PTR_s_stringByAppendingPathComponent__00489550;
            _objc_msgSend(local_100,PTR_s_stringByAppendingPathComponent__00489550,
                          &PTR____CFConstantStringClassReference_004b0560);
            auVar49 = _objc_retainAutoreleasedReturnValue();
            bVar41 = 0xd1963eb8 < uVar47;
            bVar40 = uVar47 == 0xd1963eb9;
            iVar42 = -0x6fade98e;
            iVar46 = 0x67dd8b63;
            goto LAB_00237ee8;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == -0x7fd7ae6f) {
          *(undefined8 *)((long)plVar48 + -0x10) = local_1d0;
          *(undefined8 *)((long)plVar48 + -8) = local_200;
          _NSLog(&PTR____CFConstantStringClassReference_004b0540);
          bVar40 = false;
          iVar42 = 0x14ba78d0;
          iVar46 = 0x2755dc84;
          param_2 = (SEL)extraout_x1_31;
        }
        else {
          if (local_2e4 == -0x732cf390) {
            *local_2f0 = 0x771525a9;
            goto LAB_00232994;
          }
          if (local_2e4 != -0x71ed388b) goto LAB_00232994;
          uVar47 = DAT_004b1e48 | DAT_004b1e4c;
          _objc_release(local_c8);
          _objc_release(local_c0);
          bVar40 = (uint)((ulong)(uVar47 & 0x255b10d0 ^ 0x4192a06a) * 0x56e564f5 >> 0x3d) ==
                   0x81ea41ce;
          iVar42 = 0x3f88425e;
          iVar46 = 0x117d7695;
          param_2 = (SEL)extraout_x1;
        }
      }
      else {
        if (-0x5b1af33e < local_2e4) {
          if (local_2e4 < -0x59e08108) {
            if (local_2e4 == -0x5b1af33d) {
              _objc_msgSend(local_1c0,local_108,&PTR____CFConstantStringClassReference_004b0520);
              _objc_retainAutoreleasedReturnValue();
              *local_2f0 = 0x45ff1659;
              param_2 = (SEL)extraout_x1_45;
            }
            else if (local_2e4 == -0x5ac27ee2) {
              *local_2f0 = -0x3a794e74;
            }
            else if (local_2e4 == -0x59ff6a0d) {
              _objc_msgSend(local_208,local_180,local_1e8,0,local_b0);
              _objc_retainAutoreleasedReturnValue();
              *local_2f0 = 0x27844f87;
              param_2 = (SEL)extraout_x1_12;
            }
          }
          else if (local_2e4 < -0x5909fdc0) {
            if (local_2e4 == -0x59e08108) {
              _objc_msgSend(local_1f0,local_178);
              _objc_retainAutoreleasedReturnValue();
              *local_2f0 = -0x42131dc2;
              param_2 = (SEL)extraout_x1_25;
            }
            else if (local_2e4 == -0x590bba90) {
              bVar40 = local_121 == '\0';
              iVar46 = -0x49494df0;
              iVar42 = 0x7e0d894d;
              goto LAB_00237f08;
            }
          }
          else if (local_2e4 == -0x5909fdc0) {
            _objc_retain(*local_b0);
            *local_2f0 = 0x31dba512;
            param_2 = (SEL)extraout_x1_26;
          }
          else if (local_2e4 == -0x57a62d00) {
            DAT_004b04cf = DAT_004b04c7 ^ 0x39;
            DAT_004b04d0 = DAT_004b04c8 ^ 0xd0;
            DAT_004b04d1 = DAT_004b04c9 ^ 0x80;
            DAT_004b04d2 = DAT_004b04ca ^ 0xfc;
            DAT_004b04d3 = DAT_004b04cb ^ 99;
            DAT_004b04d4 = DAT_004b04cc ^ 0xc0;
            DAT_004b04d5 = DAT_004b04cd ^ 0xef;
            DAT_004b04d6 = DAT_004b04ce ^ 0xea;
            DAT_004b0480 = DAT_004b0450 ^ 0xe6;
            DAT_004b0481 = DAT_004b0451 ^ 0xdb;
            DAT_004b0482 = DAT_004b0452 ^ 0xed;
            DAT_004b0483 = DAT_004b0453 ^ 199;
            DAT_004b0484 = DAT_004b0454 ^ 0xcd;
            DAT_004b0485 = DAT_004b0455 ^ 0x6d;
            DAT_004b0486 = DAT_004b0456 ^ 0x7e;
            DAT_004b0487 = DAT_004b0457 ^ 0x2e;
            DAT_004b0488 = DAT_004b0458 ^ 0x84;
            DAT_004b0489 = DAT_004b0459 ^ 0x6d;
            DAT_004b048a = DAT_004b045a ^ 0xba;
            DAT_004b048b = DAT_004b045b ^ 8;
            DAT_004b048c = DAT_004b045c ^ 0xe7;
            DAT_004b048d = DAT_004b045d ^ 0x25;
            DAT_004b048e = DAT_004b045e ^ 0x6d;
            DAT_004b048f = DAT_004b045f ^ 0xdb;
            DAT_004b0490 = DAT_004b0460 ^ 0x34;
            DAT_004b0491 = DAT_004b0461 ^ 0x39;
            DAT_004b0492 = DAT_004b0462 ^ 0x69;
            DAT_004b0493 = DAT_004b0463 ^ 0xc5;
            DAT_004b0494 = DAT_004b0464 ^ 0x98;
            DAT_004b0495 = DAT_004b0465 ^ 0xbf;
            DAT_004b0496 = DAT_004b0466 ^ 0x41;
            DAT_004b0497 = DAT_004b0467 ^ 0xce;
            DAT_004b0498 = DAT_004b0468 ^ 0xcd;
            DAT_004b0499 = DAT_004b0469 ^ 0x18;
            DAT_004b049a = DAT_004b046a ^ 0x6e;
            DAT_004b049b = DAT_004b046b ^ 0xe2;
            DAT_004b049c = DAT_004b046c ^ 0xdc;
            DAT_004b049d = DAT_004b046d ^ 0x12;
            DAT_004b049e = DAT_004b046e ^ 0xf;
            DAT_004b049f = DAT_004b046f ^ 0x90;
            DAT_004b04a0 = DAT_004b0470 ^ 0xae;
            DAT_004b04a1 = DAT_004b0471 ^ 0xfd;
            DAT_004b04a2 = DAT_004b0472 ^ 0xc6;
            param_2 = 0xa8;
            DAT_004b04a3 = DAT_004b0473 ^ 0xa8;
            DAT_004b04a4 = DAT_004b0474 ^ 0xcc;
            DAT_004b04a5 = DAT_004b0475 ^ 0x3f;
            DAT_004b04a6 = DAT_004b0476 ^ 0x39;
            DAT_004b04a7 = DAT_004b0477 ^ 0x69;
            DAT_004b04a8 = DAT_004b0478 ^ 0x5c;
            DAT_004b04a9 = DAT_004b0479 ^ 0xe7;
            DAT_004b04aa = DAT_004b047a ^ 0x4c;
            DAT_004b04ab = DAT_004b047b ^ 0x34;
            DAT_004b04ac = DAT_004b047c ^ 0xd9;
            DAT_004b04ad = DAT_004b047d ^ 0x3b;
            DAT_004b04ae = DAT_004b047e ^ 0xe3;
            DAT_004b04bb = DAT_004b04af ^ 0x72;
            DAT_004b04bc = DAT_004b04b0 ^ 0x46;
            DAT_004b04bd = DAT_004b04b1 ^ 0xf;
            DAT_004b04be = DAT_004b04b2 ^ 0xad;
            DAT_004b04bf = DAT_004b04b3 ^ 2;
            DAT_004b04c0 = DAT_004b04b4 ^ 0xc3;
            DAT_004b04c1 = DAT_004b04b5 ^ 0x99;
            DAT_004b04c2 = DAT_004b04b6 ^ 0xa1;
            DAT_004b04c3 = DAT_004b04b7 ^ 0x42;
            DAT_004b04c4 = DAT_004b04b8 ^ 1;
            DAT_004b04c5 = DAT_004b04b9 ^ 0xa4;
            DAT_004b04c6 = DAT_004b04ba ^ 199;
            DAT_004b043d = DAT_004b0434 ^ 0x29;
            DAT_004b043e = DAT_004b0435 ^ 0xbd;
            DAT_004b043f = DAT_004b0436 ^ 0xaf;
            *local_2f0 = -0x4c196983;
          }
          goto LAB_00232994;
        }
        if (local_2e4 < -0x5f507176) {
          if (local_2e4 != -0x6639d16b) {
            if (local_2e4 == -0x6633e8ea) {
              *local_2f0 = -0x572ae606;
            }
            else if (local_2e4 == -0x62df3687) {
              uVar43 = _objc_alloc(PTR_BubbleBoxInfo_0048cb40);
              local_228 = _objc_msgSend(uVar43,local_188,local_210);
              _objc_msgSend(local_1c0,local_108,&PTR____CFConstantStringClassReference_004b0500);
              local_230 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_1c0,local_108,&PTR____CFConstantStringClassReference_004b04e0);
              auVar52 = _objc_retainAutoreleasedReturnValue();
              param_2 = auVar52._8_8_;
              local_238 = auVar52._0_8_;
              *local_2f0 = 0x66adc3fe;
            }
            goto LAB_00232994;
          }
          uVar47 = 0;
          if (DAT_004b1efc != 0) {
            uVar47 = DAT_004b1ef8 / DAT_004b1efc;
          }
          bVar40 = (uVar47 + 0x8f3c3233 | 0xdae7d9) == 0x294bcbea;
          iVar42 = 0x6e753a5;
          iVar46 = 0x12e4223;
        }
        else {
          if (local_2e4 == -0x5f507176) {
            *local_2f0 = 0x818ba6c;
            goto LAB_00232994;
          }
          if (local_2e4 != -0x5d738a9e) {
            if (local_2e4 == -0x5c550147) {
              uVar47 = 0;
              if (DAT_004b1e7c != 0) {
                uVar47 = DAT_004b1e78 / DAT_004b1e7c;
              }
              uVar47 = (uVar47 + 0x2a0b0779 & 0xb026ec6) * -0x4ae430b0;
              _objc_release(local_100);
              *local_88 = 0;
              _objc_msgSend(local_f8,PTR_s_contentsOfDirectoryAtPath_error__0048b050,local_110);
              local_118 = _objc_retainAutoreleasedReturnValue();
              local_120 = *local_88;
              _objc_retain();
              auVar54._8_8_ = extraout_x1_05;
              auVar54._0_8_ = local_1d0;
              bVar41 = 0xeaea577 < uVar47;
              bVar40 = uVar47 == 0xeaea578;
              iVar46 = 0x70369a5d;
              iVar42 = 0x18dca917;
              goto LAB_002377d0;
            }
            goto LAB_00232994;
          }
          bVar40 = local_c0 == 0;
          iVar42 = -0x4648c42f;
          iVar46 = -0x6effa2c6;
        }
      }
LAB_00236c5c:
      auVar25._8_8_ = param_2;
      auVar25._0_8_ = local_138;
      auVar52._8_8_ = param_2;
      auVar52._0_8_ = local_138;
      if (!bVar40) {
        iVar42 = iVar46;
        auVar52 = auVar25;
      }
      goto LAB_00237f0c;
    }
    if (local_2e4 < -0x4648c42f) {
      if (local_2e4 < -0x4e8426ce) {
        if (local_2e4 < -0x504158c6) {
          if (local_2e4 == -0x572ae606) {
            uVar47 = ((DAT_004b1e40 ^ DAT_004b1e44) * 0x2cee8fce | 0x54ec8486) + 0xa5d8674f;
            bVar41 = 0xa6bd7f79 < uVar47;
            bVar40 = uVar47 == 0xa6bd7f7a;
            iVar46 = -0x71ed388b;
            iVar42 = 0x3f88425e;
            auVar54 = auVar36;
            goto LAB_002377d0;
          }
          if (local_2e4 == -0x56d9ada6) {
            *local_2f0 = -0x42131dc2;
          }
          else if (local_2e4 == -0x536a2911) {
            *local_2f0 = 0x3098b341;
          }
          goto LAB_00232994;
        }
        if (local_2e4 != -0x504158c6) {
          if (local_2e4 == -0x4fb0a575) {
            uVar47 = DAT_004b2018 + DAT_004b201c;
            _objc_release(local_228);
            _objc_release(local_210);
            auVar24._8_8_ = extraout_x1_20;
            auVar24._0_8_ = local_138;
            auVar52._8_8_ = extraout_x1_20;
            auVar52._0_8_ = local_138;
            iVar42 = -0x4fb0a575;
            if ((uVar47 ^ 0xa0a83a41) * 0x4f87d569 != -0x392bfffd) {
              iVar42 = -0x36f1deb7;
              auVar52 = auVar24;
            }
            goto LAB_00237f0c;
          }
          if (local_2e4 == -0x4f5aee69) {
            *local_2f0 = 0x6f672e82;
          }
          goto LAB_00232994;
        }
        bVar40 = 0x4f3003b4 < (DAT_004b1ee0 + DAT_004b1ee4) * -0x752f0e3e + 0x16ca4b2eU;
        iVar46 = -0x27e04392;
        iVar42 = 0x9104cd5;
        auVar52 = auVar8;
      }
      else {
        if (local_2e4 < -0x4a2b2680) {
          if (local_2e4 == -0x4e8426ce) {
            DAT_004b0440 = local_7a;
            DAT_004b0441 = DAT_004b0438 ^ 0x5e;
            *local_2f0 = 0x24918128;
          }
          else if (local_2e4 == -0x4cc9f570) {
            *local_2f0 = -0x2c488d45;
          }
          else if (local_2e4 == -0x4c196983) {
            DAT_004b04cf = DAT_004b04c7 ^ 0x39;
            DAT_004b04d0 = DAT_004b04c8 ^ 0xd0;
            DAT_004b04d1 = DAT_004b04c9 ^ 0x80;
            DAT_004b04d2 = DAT_004b04ca ^ 0xfc;
            DAT_004b04d3 = DAT_004b04cb ^ 99;
            DAT_004b04d4 = DAT_004b04cc ^ 0xc0;
            DAT_004b04d5 = DAT_004b04cd ^ 0xef;
            DAT_004b04d6 = DAT_004b04ce ^ 0xea;
            DAT_004b0480 = DAT_004b0450 ^ 0xe6;
            DAT_004b0481 = DAT_004b0451 ^ 0xdb;
            DAT_004b0482 = DAT_004b0452 ^ 0xed;
            DAT_004b0483 = DAT_004b0453 ^ 199;
            DAT_004b0484 = DAT_004b0454 ^ 0xcd;
            DAT_004b0485 = DAT_004b0455 ^ 0x6d;
            DAT_004b0486 = DAT_004b0456 ^ 0x7e;
            DAT_004b0487 = DAT_004b0457 ^ 0x2e;
            DAT_004b0488 = DAT_004b0458 ^ 0x84;
            DAT_004b0489 = DAT_004b0459 ^ 0x6d;
            DAT_004b048a = DAT_004b045a ^ 0xba;
            DAT_004b048b = DAT_004b045b ^ 8;
            DAT_004b048c = DAT_004b045c ^ 0xe7;
            DAT_004b048d = DAT_004b045d ^ 0x25;
            DAT_004b048e = DAT_004b045e ^ 0x6d;
            DAT_004b048f = DAT_004b045f ^ 0xdb;
            DAT_004b0490 = DAT_004b0460 ^ 0x34;
            DAT_004b0491 = DAT_004b0461 ^ 0x39;
            DAT_004b0492 = DAT_004b0462 ^ 0x69;
            DAT_004b0493 = DAT_004b0463 ^ 0xc5;
            DAT_004b0494 = DAT_004b0464 ^ 0x98;
            DAT_004b0495 = DAT_004b0465 ^ 0xbf;
            DAT_004b0496 = DAT_004b0466 ^ 0x41;
            DAT_004b0497 = DAT_004b0467 ^ 0xce;
            DAT_004b0498 = DAT_004b0468 ^ 0xcd;
            DAT_004b0499 = DAT_004b0469 ^ 0x18;
            DAT_004b049a = DAT_004b046a ^ 0x6e;
            DAT_004b049b = DAT_004b046b ^ 0xe2;
            DAT_004b049c = DAT_004b046c ^ 0xdc;
            DAT_004b049d = DAT_004b046d ^ 0x12;
            DAT_004b049e = DAT_004b046e ^ 0xf;
            DAT_004b049f = DAT_004b046f ^ 0x90;
            DAT_004b04a0 = DAT_004b0470 ^ 0xae;
            DAT_004b04a1 = DAT_004b0471 ^ 0xfd;
            DAT_004b04a2 = DAT_004b0472 ^ 0xc6;
            DAT_004b04a3 = DAT_004b0473 ^ 0xa8;
            DAT_004b04a4 = DAT_004b0474 ^ 0xcc;
            DAT_004b04a5 = DAT_004b0475 ^ 0x3f;
            DAT_004b04a6 = DAT_004b0476 ^ 0x39;
            DAT_004b04a7 = DAT_004b0477 ^ 0x69;
            DAT_004b04a8 = DAT_004b0478 ^ 0x5c;
            DAT_004b04a9 = DAT_004b0479 ^ 0xe7;
            DAT_004b04aa = DAT_004b047a ^ 0x4c;
            DAT_004b04ab = DAT_004b047b ^ 0x34;
            DAT_004b04ac = DAT_004b047c ^ 0xd9;
            DAT_004b04ad = DAT_004b047d ^ 0x3b;
            DAT_004b04ae = DAT_004b047e ^ 0xe3;
            DAT_004b04bb = DAT_004b04af ^ 0x72;
            DAT_004b04bc = DAT_004b04b0 ^ 0x46;
            DAT_004b04bd = DAT_004b04b1 ^ 0xf;
            DAT_004b04be = DAT_004b04b2 ^ 0xad;
            DAT_004b04bf = DAT_004b04b3 ^ 2;
            DAT_004b04c0 = DAT_004b04b4 ^ 0xc3;
            DAT_004b04c1 = DAT_004b04b5 ^ 0x99;
            DAT_004b04c2 = DAT_004b04b6 ^ 0xa1;
            DAT_004b04c3 = DAT_004b04b7 ^ 0x42;
            DAT_004b04c4 = DAT_004b04b8 ^ 1;
            DAT_004b04c5 = DAT_004b04b9 ^ 0xa4;
            DAT_004b04c6 = DAT_004b04ba ^ 199;
            DAT_004b043d = DAT_004b0434 ^ 0x29;
            DAT_004b043e = DAT_004b0435 ^ 0xbd;
            param_2 = 0xaf;
            DAT_004b043f = DAT_004b0436 ^ 0xaf;
            iVar42 = -0x4c196983;
            if (((DAT_004b1e08 & DAT_004b1e0c & 0x3c203d4b) * 0x288463cc ^ 0x599d079) < 0xa3af80df)
            {
              iVar42 = 0x665e691a;
            }
            *local_2f0 = iVar42;
            local_7a = DAT_004b0437 ^ 0x60;
          }
          goto LAB_00232994;
        }
        if (-0x47aa4f49 < local_2e4) {
          if (local_2e4 == -0x47aa4f48) {
            _objc_release(local_1e8);
            *local_2f0 = 0x2528c62c;
            param_2 = (SEL)extraout_x1_24;
          }
          else if (local_2e4 == -0x4791f2d9) {
            uVar47 = DAT_004b1f08 | DAT_004b1f0c;
            local_1c1 = _objc_msgSend(local_f8,local_160,local_1c0,local_a0);
            bVar40 = uVar47 * 0x72b5eaca == -0x709df759;
            iVar46 = -0x2efa4ed4;
            iVar42 = -0x3696addc;
            param_2 = (SEL)extraout_x1_15;
            goto LAB_00237f08;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == -0x4a2b2680) {
          iVar42 = 0x1624f3a7;
          if (local_261 == '\0') {
            iVar42 = -0x179b1547;
          }
          *local_2f0 = iVar42;
          local_278 = local_260;
          local_298 = 0;
          goto LAB_00232994;
        }
        if (local_2e4 != -0x49494df0) goto LAB_00232994;
        uVar47 = 0;
        if (DAT_004b1e94 != 0) {
          uVar47 = DAT_004b1e90 / DAT_004b1e94;
        }
        bVar40 = 0x3bb42bd9 < (uVar47 + 0xfe9fe1a1 ^ 0x533e4759);
        iVar46 = 0x3a462bea;
        iVar42 = 0xb585c59;
        auVar52 = auVar7;
      }
LAB_00236f9c:
      if (bVar40) {
        iVar42 = iVar46;
      }
      goto LAB_00237f0c;
    }
    if (local_2e4 < -0x3cb7222f) {
      if (local_2e4 < -0x414cf214) {
        if (local_2e4 == -0x4648c42f) {
          uVar47 = DAT_004b1e60 & DAT_004b1e64 ^ 0x225004 | 0x51dc8b71;
          bVar41 = 0x1c31c935 < uVar47;
          bVar40 = uVar47 == 0x1c31c936;
          iVar42 = -0x6fade98e;
          iVar46 = 0x564e201b;
          goto LAB_00237ee8;
        }
        if (local_2e4 != -0x42f3a945) {
          if (local_2e4 == -0x42131dc2) {
            uVar47 = DAT_004b1f78 | DAT_004b1f7c;
            _objc_msgSend(local_1f0,local_178);
            auVar55 = _objc_retainAutoreleasedReturnValue();
            auVar52._8_8_ = auVar55._8_8_;
            auVar52._0_8_ = local_138;
            local_200 = auVar55._0_8_;
            bVar40 = 0x9af724d5 < (uVar47 + 0x7627f52b >> 1) / 0x774aaa81;
            iVar46 = -0x59e08108;
            iVar42 = -0x1a5aff86;
            goto LAB_00236f9c;
          }
          goto LAB_00232994;
        }
        iVar46 = DAT_004b2048 + DAT_004b204c;
        _objc_release(local_1c0);
        auVar23._8_8_ = extraout_x1_19;
        auVar23._0_8_ = local_138;
        auVar52._8_8_ = extraout_x1_19;
        auVar52._0_8_ = local_138;
        local_250 = local_2c0 + 1;
        local_251 = local_250 == local_2b8;
        iVar42 = 0x30bc759f;
        if (0x81189452 < (iVar46 * 0x39144c2b + 0x9b442bd5U & 0x5757e4d1)) {
          iVar42 = -0x42f3a945;
          auVar52 = auVar23;
        }
      }
      else {
        if (local_2e4 == -0x414cf214) {
          _objc_msgSend(local_1e0,local_170,local_1d0,1,local_a8);
          local_1e8 = _objc_retainAutoreleasedReturnValue();
          local_1f0 = *local_a8;
          _objc_retain();
          local_1f1 = local_1f0 == 0;
          *local_2f0 = 0x4eb554e6;
          param_2 = (SEL)extraout_x1_28;
          goto LAB_00232994;
        }
        if (local_2e4 != -0x3f81184f) {
          if (local_2e4 == -0x3e50112f) {
            bVar40 = (DAT_004b1fe0 ^ DAT_004b1fe4 | 0x12a654d1) == 0xd4e4ae2;
            iVar42 = 0x361141e0;
            iVar46 = 0x74ac4f2b;
            goto LAB_00236a8c;
          }
          goto LAB_00232994;
        }
        local_1c3 = local_1c2 & 1;
        iVar42 = 0x4b5af75c;
        if ((((DAT_004b1f28 | DAT_004b1f2c) + 0x3ad33a92) / 0x69dd4a6b) * -0x248935e7 == -0x700e0aca
           ) {
          iVar42 = -0x3f81184f;
        }
      }
      goto LAB_00237f0c;
    }
    if (local_2e4 < -0x3bbdc946) {
      if (local_2e4 == -0x3cb7222f) {
        bVar40 = 0x569a7062 < (DAT_004b1f38 & DAT_004b1f3c) * -0x49d944 + 0xf89ac020;
        iVar42 = -0x3cb7222f;
        iVar46 = 0x6f4fa99a;
        goto LAB_00237b68;
      }
      if (local_2e4 == -0x3c2fa431) {
        uVar47 = (DAT_004b2058 * DAT_004b205c | 0xd44b438cU) / 0x7c776646 + 0xfcd6ef91;
        auVar53 = _objc_msgSend(local_118,local_130,local_90,local_98,0x10);
        bVar41 = 0xc9a296db < uVar47;
        bVar40 = uVar47 == 0xc9a296dc;
        iVar42 = -0x25350c8;
        goto LAB_00237610;
      }
      if (local_2e4 == -0x3c223d0c) {
        _objc_msgSend(local_c8,local_d0);
        *local_2f0 = 0x57988768;
        param_2 = (SEL)extraout_x1_11;
      }
      goto LAB_00232994;
    }
    if (local_2e4 < -0x39a2791c) {
      if (local_2e4 != -0x3bbdc946) {
        if (local_2e4 == -0x3a794e74) {
          local_1c2 = *local_a0;
          *local_2f0 = 0x35daba23;
        }
        goto LAB_00232994;
      }
      uVar47 = 0;
      if (DAT_004b203c != 0) {
        uVar47 = DAT_004b2038 / DAT_004b203c;
      }
      uVar47 = uVar47 * 0x7fb8b0 + 0xe459d4b2;
      bVar41 = 0x69cdee61 < uVar47;
      bVar40 = uVar47 == 0x69cdee62;
      iVar46 = 0x2d9311be;
      iVar42 = 0x5a770202;
      auVar54 = auVar37;
    }
    else {
      if (local_2e4 == -0x39a2791c) {
        *local_2f0 = 0x7152708a;
        goto LAB_00232994;
      }
      if (local_2e4 != -0x38851117) goto LAB_00232994;
      uVar47 = DAT_004b1f68 * DAT_004b1f6c * -0x2be3c4ac + 0x68068ad5U ^ 0xf3bf385;
      bVar41 = 0x452ddd34 < uVar47;
      bVar40 = uVar47 == 0x452ddd35;
      iVar46 = -0x29f9ed96;
      iVar42 = 0x16786cb7;
    }
  }
  else {
    if (-0x1a5aff87 < local_2e4) {
      if (-0x6b7c110 < local_2e4) {
        if (local_2e4 < -0x1d7138f) {
          if (local_2e4 < -0x327e1dd) {
            if (local_2e4 == -0x6b7c10f) {
              uVar47 = ((DAT_004b2050 & DAT_004b2054) + 0xbec64cf7 & 0x342cffcb) + 0x64e3ce4b;
              bVar41 = 0x7d8d69f6 < uVar47;
              bVar40 = uVar47 == 0x7d8d69f7;
              iVar42 = 0x736e007f;
LAB_00237610:
              local_260 = auVar53._0_8_;
              auVar22._8_8_ = auVar53._8_8_;
              auVar22._0_8_ = local_138;
              auVar52._8_8_ = auVar53._8_8_;
              auVar52._0_8_ = local_138;
              if (!bVar41 || bVar40) {
                iVar42 = -0x3c2fa431;
                auVar52 = auVar22;
              }
              goto LAB_00237f0c;
            }
            if (local_2e4 == -0x69f45f0) {
              DAT_004d1888 = 1;
              local_88 = (long *)((long)plVar48 + -0x10);
              local_90 = (undefined8 *)((long)plVar48 + -0x50);
              plVar48 = (long *)((long)plVar48 + -0xd0);
              local_98 = (undefined1 *)plVar48;
              *local_2f0 = 0x66ee2940;
            }
            else if (local_2e4 == -0x3e1253d) {
              *local_2f0 = -0x1a3f3320;
            }
          }
          else {
            if (local_2e4 == -0x327e1dd) {
              local_168 = PTR_s_fileExistsAtPath__0048a020;
              local_160 = PTR_s_fileExistsAtPath_isDirectory__0048a238;
              local_178 = PTR_s_localizedDescription_0048a030;
              local_170 = PTR_s_dataWithContentsOfFile_options_e_0048b310;
              local_188 = PTR_s_initWithConfig__0048b318;
              local_180 = PTR_s_JSONObjectWithData_options_error_0048ac70;
              local_198 = PTR_s_icon_0048b320;
              local_190 = PTR_s_setIcon__0048b288;
              local_1a8 = PTR_s_setPath__0048b328;
              local_1a0 = PTR_s_setCover__0048b280;
              local_1b0 = PTR_s_addObject__00489ba8;
              bVar40 = ((DAT_004b1ed8 ^ DAT_004b1edc) * 0x103713c1 + 0xe00aa90f | 0x58d84503) ==
                       0x82a20c5f;
              iVar42 = -0x327e1dd;
              iVar46 = 0x5b4d2ac;
              goto LAB_00236c5c;
            }
            if (local_2e4 == -0x2987937) {
              uVar47 = (DAT_004b1e88 * DAT_004b1e8c & 0x7b47982eU ^ 0xbcd44329) * -0x741088e9;
              local_121 = local_120 == 0;
              bVar41 = 0x150ab41f < uVar47;
              bVar40 = uVar47 == 0x150ab420;
              iVar42 = 0x7acdb2f2;
              iVar46 = -0x590bba90;
              auVar49 = auVar16;
              goto LAB_00237ee8;
            }
            if (local_2e4 == -0x25350c8) {
              *local_2f0 = 0x63c2e9a2;
            }
          }
        }
        else if (local_2e4 < 0x15eff86) {
          if (local_2e4 == -0x1d7138f) {
            *local_2f0 = 0x27844f87;
          }
          else if (local_2e4 == -0x1785d67) {
            _objc_release(local_1c0);
            *local_2f0 = -0x42f3a945;
            param_2 = (SEL)extraout_x1_17;
          }
          else if (local_2e4 == 0x12e4223) {
            *local_2f0 = 0x697ac097;
          }
        }
        else if (local_2e4 < 0x2da82ac) {
          if (local_2e4 == 0x15eff86) {
            *local_2f0 = 0x17db8e3;
          }
          else if (local_2e4 == 0x17db8e3) {
            bVar40 = local_1d1 == '\0';
            iVar46 = 0x108488e3;
            iVar42 = 0x35d05f51;
            goto LAB_00237f08;
          }
        }
        else {
          if (local_2e4 == 0x48565e2) {
            local_261 = local_260 == 0;
            bVar40 = 0xc474648f <
                     ((uint)((ulong)((DAT_004b2068 & DAT_004b206c) + 0xe8fb65a1) * 0x9f0154fd >>
                            0x3f) | 0x4cd5b84c);
            iVar46 = 0x96f20ff;
            iVar42 = -0x732cf390;
            auVar52 = auVar6;
            goto LAB_00236f9c;
          }
          if (local_2e4 == 0x2da82ac) {
            if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return local_2e0;
          }
        }
        goto LAB_00232994;
      }
      if (local_2e4 < -0x1699321c) {
        if (local_2e4 < -0x1a2581b8) {
          if (local_2e4 == -0x1a5aff86) {
            *local_2f0 = 0x2636f758;
          }
          else if (local_2e4 == -0x1a4b343b) {
            *local_2f0 = 0x656ae033;
          }
          else if (local_2e4 == -0x1a3f3320) {
            *local_2f0 = 0x4f2ff7f3;
            local_2a8 = local_f0;
            lStack_2a0 = local_120;
          }
        }
        else if (local_2e4 == -0x1a2581b8) {
          *local_2f0 = 0x5a80ba18;
        }
        else if (local_2e4 == -0x17c70dc6) {
          local_79 = local_78 == 0;
          *local_2f0 = 0x72fb82c0;
        }
        else if (local_2e4 == -0x179b1547) {
          local_2b8 = local_278;
          bVar40 = 0x20c8445b < (DAT_004b1ed0 * DAT_004b1ed4 & 0x66028090U) * -0x617fd6ca;
          iVar46 = -0x327e1dd;
          iVar42 = 0x724f81e4;
          auVar52 = auVar5;
          goto LAB_00236f9c;
        }
        goto LAB_00232994;
      }
      if (local_2e4 < -0x10519202) {
        if (local_2e4 == -0x1699321c) {
          *local_2f0 = -0x17c70dc6;
          goto LAB_00232994;
        }
        if (local_2e4 == -0x14531999) {
          uVar47 = DAT_004b20a8 | DAT_004b20ac;
          _objc_autoreleaseReturnValue(local_2e0);
          bVar40 = (uVar47 + 0x12d6d254 | 0x9f206806) == 0xe2d2a709;
          iVar42 = 0x48a9d4ef;
          iVar46 = 0x2da82ac;
          param_2 = (SEL)extraout_x1_23;
          goto LAB_00236c5c;
        }
        if (local_2e4 != -0x12a96992) goto LAB_00232994;
        uVar47 = ((DAT_004b1fa8 ^ DAT_004b1fac) * -0x2f0e6df4 & 0xcfbd7ab4) + 0xaef37204;
        local_208 = PTR__OBJC_CLASS___NSJSONSerialization_0048cba0;
        *local_b0 = 0;
        auVar49._0_8_ = local_110;
        bVar41 = 0x35d8c624 < uVar47;
        bVar40 = uVar47 == 0x35d8c625;
        iVar42 = -0x6cc459c9;
        iVar46 = 0x256e3a99;
      }
      else {
        if (local_2e4 < -0xcc3d666) {
          if (local_2e4 == -0x10519202) {
            *local_2f0 = 0x471e4e8c;
          }
          else if (local_2e4 == -0xf8a8618) {
            *local_2f0 = -0x36676377;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == -0xcc3d666) {
          iVar42 = 0x15280420;
          if (((DAT_004b1f20 - DAT_004b1f24) + 0x2984063cU | 0xbbefbfd4) < 0xf3ea7542) {
            iVar42 = -0x3f81184f;
          }
          goto LAB_00237f0c;
        }
        if (local_2e4 != -0xb46eb51) goto LAB_00232994;
        uVar47 = DAT_004b2008 ^ DAT_004b200c;
        _objc_msgSend(local_228,local_1a8,local_1b8);
        _objc_msgSend(local_f0,local_1b0,local_228);
        _objc_release(local_238);
        _objc_release(local_230);
        auVar49._8_8_ = extraout_x1_14;
        auVar49._0_8_ = local_110;
        uVar47 = (uVar47 * 0x715ec742 + 0x809d9cb) / 0x3f83056a;
        bVar41 = 0xab0ec445 < uVar47;
        bVar40 = uVar47 == 0xab0ec446;
        iVar42 = -0x67788997;
        iVar46 = 0x9eb8140;
      }
LAB_00237ee8:
      auVar28._8_8_ = auVar49._8_8_;
      auVar28._0_8_ = local_138;
      auVar52._8_8_ = auVar49._8_8_;
      auVar52._0_8_ = local_138;
      local_110 = auVar49._0_8_;
      if (!bVar41 || bVar40) {
        iVar42 = iVar46;
        auVar52 = auVar28;
      }
      goto LAB_00237f0c;
    }
    if (-0x2a260263 < local_2e4) {
      if (-0x2566e24b < local_2e4) {
        if (-0x22bf9972 < local_2e4) {
          if (local_2e4 < -0x1d9f69bf) {
            if (local_2e4 == -0x22bf9971) {
              *local_2f0 = 0x7e2c915e;
            }
            else if (local_2e4 == -0x1f708a99) {
              *local_2f0 = 0x42ba63b5;
            }
          }
          else if (local_2e4 == -0x1d9f69bf) {
            *local_2f0 = -0x2f41b8ec;
          }
          else if (local_2e4 == -0x1cb6ed3d) {
            bVar40 = local_239 == '\0';
            iVar46 = 0x1154d25d;
            iVar42 = 0xb90b59b;
            goto LAB_00237f08;
          }
          goto LAB_00232994;
        }
        if (local_2e4 == -0x2566e24a) {
          _objc_release(local_118);
          _objc_msgSend(local_f0,PTR_s_sortedArrayUsingComparator__0048b338,
                        &PTR___NSConcreteGlobalBlock_00480808);
          uVar43 = _objc_retainAutoreleasedReturnValue();
          puVar38 = PTR_s_mutableCopy_0048a7a0;
          uVar45 = _objc_msgSend(uVar43,PTR_s_mutableCopy_0048a7a0);
          _objc_release(uVar43);
          param_1 = local_2f8;
          IVar44 = _objc_msgSend(uVar45,puVar38);
          setBubbles_(param_1,(SEL)PTR_s_setBubbles__0048a810,IVar44);
          _objc_release(IVar44);
          iVar42 = 0x5301b154;
          param_2 = (SEL)extraout_x1_40;
          goto LAB_00237ae4;
        }
        if (local_2e4 != -0x23c94ba9) {
          if (local_2e4 == -0x23717fb9) {
            _objc_release(local_228);
            _objc_release(local_210);
            *local_2f0 = -0x4fb0a575;
            param_2 = (SEL)extraout_x1_09;
          }
          goto LAB_00232994;
        }
        _objc_release(local_248);
        iVar42 = -0x2c488d45;
        param_2 = (SEL)extraout_x1_32;
        goto LAB_00237ae4;
      }
      if (-0x26debbfe < local_2e4) {
        if (local_2e4 == -0x26debbfd) {
          _objc_release(local_e0);
          *local_2f0 = 0x5162a4ee;
          local_2b0 = local_e8;
          param_2 = (SEL)extraout_x1_21;
        }
        else if (local_2e4 == -0x264d8470) {
          local_148 = local_90 + 2;
          *local_2f0 = -0x1f708a99;
        }
        else if (local_2e4 == -0x2636ee97) {
          iVar42 = -0x4fb0a575;
          if (((DAT_004b2010 | DAT_004b2014) * 0x1300cdb7 + 0x42684463 ^ 0xe594cf1b) < 0x864ff64a) {
            iVar42 = -0x23717fb9;
          }
          goto LAB_00237f0c;
        }
        goto LAB_00232994;
      }
      if (local_2e4 == -0x2a260262) {
        *local_2f0 = 0x4f2ff7f3;
        local_2a8 = local_270;
        lStack_2a0 = local_2c8;
        goto LAB_00232994;
      }
      if (local_2e4 == -0x29f9ed96) {
        *local_2f0 = -0x38851117;
        goto LAB_00232994;
      }
      if (local_2e4 != -0x27e04392) goto LAB_00232994;
      uVar47 = DAT_004b1ee8 * DAT_004b1eec;
      _objc_enumerationMutation(local_118);
      auVar50._8_8_ = extraout_x1_00;
      auVar50._0_8_ = local_e0;
      bVar40 = 0x73030a99 < (uVar47 ^ 0xb21fba4d) + 0x8993944d;
      iVar42 = 0x9104cd5;
      iVar46 = -0x536a2911;
LAB_00237b68:
      auVar31._8_8_ = auVar50._8_8_;
      auVar31._0_8_ = local_138;
      auVar52._8_8_ = auVar50._8_8_;
      auVar52._0_8_ = local_138;
      local_e0 = auVar50._0_8_;
      if (bVar40) {
        iVar42 = iVar46;
        auVar52 = auVar31;
      }
      goto LAB_00237f0c;
    }
    if (local_2e4 < -0x338f66c0) {
      if (-0x3642d005 < local_2e4) {
        if (local_2e4 == -0x3642d004) {
          *local_a0 = 0;
          *local_2f0 = 0x120be2aa;
        }
        else if (local_2e4 == -0x3508677e) {
          iVar42 = -0x6b7c10f;
          if (local_251 == '\0') {
            iVar42 = 0xb98f1b7;
          }
          *local_2f0 = iVar42;
          local_280 = local_250;
        }
        else if (local_2e4 == -0x33e2b750) {
          _objc_release(local_118);
          _objc_release(local_2d8);
          _objc_release(local_110);
          _objc_release(local_f8);
          _objc_release(local_f0);
          *local_2f0 = 0x4f451f80;
          param_2 = (SEL)extraout_x1_04;
        }
        goto LAB_00232994;
      }
      if (local_2e4 == -0x36f1deb7) {
        *local_2f0 = 0x70504dba;
        goto LAB_00232994;
      }
      if (local_2e4 == -0x3696addc) {
        bVar40 = local_1c1 == '\0';
        iVar46 = 0x7e2c915e;
        iVar42 = -0x2edb955f;
      }
      else {
        if (local_2e4 != -0x36676377) goto LAB_00232994;
        local_78 = DAT_004d1888;
        bVar40 = (uint)((ulong)(DAT_004b1de8 ^ DAT_004b1dec | 0xfcbb4393) * 0x2c3f42f >> 0x37) *
                 0x582ff3a4 == -0x7483a121;
        iVar46 = -0x36676377;
        iVar42 = -0x1699321c;
      }
      goto LAB_00237f08;
    }
    if (local_2e4 < -0x2efa4ed4) {
      if (local_2e4 == -0x338f66c0) {
        uVar47 = 0;
        if (DAT_004b1e34 != 0) {
          uVar47 = DAT_004b1e30 / DAT_004b1e34;
        }
        uVar47 = uVar47 + 0x221f4dc2 | 0x826729e3;
        bVar41 = 0xe7ef1308 < uVar47;
        bVar40 = uVar47 == 0xe7ef1309;
        iVar42 = -0x3c223d0c;
        iVar46 = 0x57988768;
        auVar49 = auVar15;
        goto LAB_00237ee8;
      }
      if (local_2e4 == -0x3215fc91) {
        *local_2f0 = 0x4689c41a;
        goto LAB_00232994;
      }
      if (local_2e4 != -0x2f41b8ec) goto LAB_00232994;
      uVar47 = DAT_004b1e58 | DAT_004b1e5c;
      _objc_msgSend(param_1,local_b8);
      auVar50 = _objc_retainAutoreleasedReturnValue();
      bVar40 = 0x6bb4ff91 < (uVar47 * 0x48d6098c ^ 0x6c9dbeae) + 0x1ca554b0;
      iVar42 = -0x2f41b8ec;
      iVar46 = -0x5f507176;
      goto LAB_00237b68;
    }
    if (local_2e4 < -0x2dd3c661) {
      if (local_2e4 == -0x2efa4ed4) {
        _objc_msgSend(local_f8,local_160,local_1c0,local_a0);
        *local_2f0 = -0x4791f2d9;
        param_2 = (SEL)extraout_x1_18;
      }
      else if (local_2e4 == -0x2edb955f) {
        bVar40 = 0x25209c1c < (DAT_004b1f10 ^ DAT_004b1f14) * -0x41c62012 + 0x7f8665e4;
        iVar46 = -0x3a794e74;
        iVar42 = -0x5ac27ee2;
        auVar52 = auVar4;
        goto LAB_00236f9c;
      }
      goto LAB_00232994;
    }
    if (local_2e4 == -0x2dd3c661) {
      uVar47 = (DAT_004b1f50 & DAT_004b1f54) + 0x3dd8989d & 0xaed92a72 ^ 0xb77d34cd;
      bVar41 = 0x61b658f7 < uVar47;
      bVar40 = uVar47 == 0x61b658f8;
      iVar46 = 0x4feb5dc3;
      iVar42 = 0x15eff86;
      auVar54 = auVar35;
      goto LAB_002377d0;
    }
    if (local_2e4 != -0x2c488d45) goto LAB_00232994;
    uVar47 = ((DAT_004b2000 ^ DAT_004b2004) / 0x3182b6d2) * -0x3226e5f0;
    bVar41 = 0xf63c0202 < uVar47;
    bVar40 = uVar47 == 0xf63c0203;
    iVar46 = -0xb46eb51;
    iVar42 = -0x67788997;
    auVar54 = auVar34;
  }
LAB_002377d0:
  local_1d0 = auVar54._0_8_;
  auVar29._8_8_ = auVar54._8_8_;
  auVar29._0_8_ = local_138;
  auVar52._8_8_ = auVar54._8_8_;
  auVar52._0_8_ = local_138;
  if (!bVar41 || bVar40) {
    iVar42 = iVar46;
    auVar52 = auVar29;
  }
LAB_00237f0c:
  param_2 = auVar52._8_8_;
  local_138 = auVar52._0_8_;
  *local_2f0 = iVar42;
  goto LAB_00232994;
}



// ----- -[BubbleBoxMgr resizeImageIfNeededAtPath:] @ 002384bc -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxMgr::resizeImageIfNeededAtPath_(ID param_1,SEL param_2,ID param_3)

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
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
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
  uint uVar22;
  int iVar23;
  undefined8 uVar24;
  double in_d1;
  double dVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  int local_12c;
  long local_128;
  long local_120;
  undefined *local_118;
  char local_109;
  long local_108;
  long local_100;
  char local_f1;
  undefined8 local_f0;
  double local_e8;
  char local_d9;
  double local_d8;
  undefined *local_d0;
  long local_c8;
  undefined *local_c0;
  char local_b1;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  byte local_93;
  byte local_92;
  char local_91;
  int local_90;
  
  uVar19 = DAT_00479388;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = local_a8;
  local_12c = -0x4337aacc;
LAB_00238598:
  uVar24 = auVar26._8_8_;
  auVar29._8_8_ = uVar24;
  auVar29._0_8_ = local_100;
  auVar18._8_8_ = uVar24;
  auVar18._0_8_ = local_100;
  auVar17._8_8_ = uVar24;
  auVar17._0_8_ = local_100;
  auVar16._8_8_ = uVar24;
  auVar16._0_8_ = local_100;
  auVar15._8_8_ = uVar24;
  auVar15._0_8_ = local_100;
  auVar28._8_8_ = uVar24;
  auVar28._0_8_ = local_c8;
  auVar14._8_8_ = uVar24;
  auVar14._0_8_ = local_c8;
  auVar13._8_8_ = uVar24;
  auVar13._0_8_ = local_c8;
  auVar12._8_8_ = uVar24;
  auVar12._0_8_ = local_c8;
  auVar11._8_8_ = uVar24;
  auVar11._0_8_ = local_c8;
  auVar27._8_8_ = uVar24;
  auVar27._0_8_ = local_108;
  auVar10._8_8_ = uVar24;
  auVar10._0_8_ = local_108;
  auVar9._8_8_ = uVar24;
  auVar9._0_8_ = local_108;
  auVar8._8_8_ = uVar24;
  auVar8._0_8_ = local_108;
  auVar7._8_8_ = uVar24;
  auVar7._0_8_ = local_108;
  auVar6._8_8_ = uVar24;
  auVar6._0_8_ = local_108;
  local_a8 = auVar26._0_8_;
  if (local_12c < -0xd740397) {
    if (local_12c < -0x51820ea0) {
      if (local_12c < -0x68945644) {
        if (local_12c < -0x72329854) {
          if (local_12c < -0x79dc71de) {
            if (local_12c == -0x7ce34350) {
              local_12c = 0x46169f2a;
            }
            else if (local_12c == -0x7b8ee14d) {
              local_12c = -0x42508e93;
            }
            else if (local_12c == -0x7abc8707) {
              bVar21 = (DAT_004b2180 - DAT_004b2184) * 0x519a6cb5 == 0x1c73f138;
              iVar23 = 0x3be90c9a;
              local_12c = 0x66a4f42c;
LAB_00239258:
              if (!bVar21) {
                local_12c = iVar23;
              }
            }
          }
          else {
            if (local_12c == -0x79dc71de) {
              uVar22 = DAT_004b2198 & DAT_004b219c;
              local_f1 = _objc_msgSend(local_a8,local_b0,
                                       &PTR____CFConstantStringClassReference_004b0590);
              auVar29._8_8_ = extraout_x1_17;
              bVar21 = 0x6862bfd4 < ((uVar22 >> 3) / 0x1a6114a1 ^ 0x330f40cb) + 0x83fe993e;
              local_12c = -0x16477c1a;
              iVar23 = -0x2a92fa17;
              goto LAB_0023a348;
            }
            if (local_12c == -0x79ad4833) {
              uVar22 = DAT_004b2118 ^ DAT_004b211c;
              _objc_release(local_a0,uVar24);
              local_b0 = PTR_s_isEqualToString__00489d70;
              local_b1 = _objc_msgSend(local_a8,PTR_s_isEqualToString__00489d70,
                                       &PTR____CFConstantStringClassReference_004b05b0);
              auVar28._8_8_ = extraout_x1_20;
              bVar21 = 0xda783540 < ((uint)((ulong)uVar22 * 0x3ca21e59 >> 0x3d) ^ 0xc8bf46c3);
              iVar23 = 0x462040ef;
              local_12c = 0x569cf14c;
              goto LAB_0023a564;
            }
            if (local_12c == -0x73181049) goto LAB_00239ba4;
          }
          goto LAB_00238598;
        }
        if (local_12c < -0x6d3c2db2) {
          if (local_12c != -0x72329854) {
            if (local_12c == -0x6e7c985a) {
              uVar22 = ((DAT_004b2200 | DAT_004b2204 | 0x10007080) ^ 0x23128441) & 0x3312f4d1;
              bVar20 = 0x60d9ebd6 < uVar22;
              bVar21 = uVar22 == 0x60d9ebd7;
              local_12c = -0x6b33f9f5;
              iVar23 = 0x7f571bce;
              goto LAB_0023a4fc;
            }
            if (local_12c == -0x6e231760) {
              bVar21 = 0x2e8e7b0e < (DAT_004b2110 - DAT_004b2114) * 0x337bc4ea + 0x1aa960fU;
              iVar23 = -0x79ad4833;
              local_12c = 0x462040ef;
              auVar28 = auVar13;
              goto LAB_0023a564;
            }
            goto LAB_00238598;
          }
          uVar22 = 0;
          if (DAT_004b2104 != 0) {
            uVar22 = DAT_004b2100 / DAT_004b2104;
          }
          uVar22 = (uVar22 & 0x8060cac6) + 0x798f32fb;
          bVar20 = 0x3a8607dd < uVar22;
          bVar21 = uVar22 == 0x3a8607de;
          local_12c = -0x59716ba3;
          iVar23 = 0x3b839c4;
          goto LAB_0023a4fc;
        }
        if (-0x6b33f9f6 < local_12c) {
          if (local_12c == -0x6b33f9f5) {
            _objc_msgSend(local_128,local_118,param_3,1);
            auVar26._8_8_ = extraout_x1_14;
            auVar26._0_8_ = local_a8;
            local_12c = 0x7f571bce;
          }
          else if (local_12c == -0x6b2c6c0d) {
            uVar22 = 0;
            if (DAT_004b2244 != 0) {
              uVar22 = DAT_004b2240 / DAT_004b2244;
            }
            bVar21 = (uVar22 * -0x5ec6849d & 0xbf5ff7fd | 0xa855a4b4) == 0x855c236b;
            iVar23 = -0xaa907d4;
            local_12c = -0x51820ea0;
            auVar27 = auVar10;
            goto LAB_0023a2dc;
          }
          goto LAB_00238598;
        }
        if (local_12c != -0x6d3c2db2) {
          if (local_12c == -0x6b7d6dbd) {
            local_91 = local_90 == 0;
            local_12c = -0x55d39232;
          }
          goto LAB_00238598;
        }
        bVar21 = 0xaf838e16 < ((DAT_004b21d8 + DAT_004b21dc ^ 0xba37149U) + 0xd347f47d | 0xc4864a88)
        ;
        local_12c = -0x2dad712;
        iVar23 = 0x65f7f978;
        auVar29 = auVar18;
      }
      else {
        if (-0x5a2a97de < local_12c) {
          if (-0x55d39233 < local_12c) {
            if (local_12c < -0x547f7ada) {
              if (local_12c == -0x55d39232) {
                bVar21 = local_91 == '\0';
                iVar23 = 0xaaef936;
                local_12c = 0x7da735bf;
                auVar27 = auVar9;
                goto LAB_0023a2dc;
              }
              if (local_12c == -0x55b93f67) {
                _objc_release(local_a8,uVar24);
                auVar26._8_8_ = extraout_x1_01;
                auVar26._0_8_ = local_a8;
                local_12c = 0x174a0f8a;
              }
            }
            else if (local_12c == -0x547f7ada) {
              local_12c = 0x27de7ea0;
            }
            else if (local_12c == -0x547babcd) {
              _UIImagePNGRepresentation(local_f0);
              _objc_retainAutoreleasedReturnValue();
              auVar26._8_8_ = extraout_x1_07;
              auVar26._0_8_ = local_a8;
              local_12c = -0x30e5e9d6;
            }
            goto LAB_00238598;
          }
          if (local_12c == -0x5a2a97dd) {
            local_12c = -0x6e7c985a;
            goto LAB_00238598;
          }
          if (local_12c == -0x59a26f0c) {
            bVar21 = local_c8 == 0;
            local_12c = -0x6b2c6c0d;
            iVar23 = 0x441e26b9;
          }
          else {
            if (local_12c != -0x59716ba3) goto LAB_00238598;
            DAT_004b0584 = local_93 ^ 0x37;
            DAT_004b0585 = DAT_004b0581 ^ 0xcf;
            DAT_004b0586 = DAT_004b0582 ^ 0x36;
            DAT_004b0587 = DAT_004b0583 ^ 0xc5;
            bVar21 = (uint)((ulong)(DAT_004b2108 * DAT_004b210c + 0x75d9c5bU >> 2) * 0x21f97113 >>
                           0x3b) == 0xb542be71;
            local_12c = -0x59716ba3;
            iVar23 = -0x4e60bb0b;
          }
LAB_0023a368:
          auVar2._8_8_ = uVar24;
          auVar2._0_8_ = local_a8;
          auVar26._8_8_ = uVar24;
          auVar26._0_8_ = local_a8;
          if (!bVar21) {
            local_12c = iVar23;
            auVar26 = auVar2;
          }
          goto LAB_00238598;
        }
        if (local_12c < -0x624808f5) {
          if (local_12c == -0x68945644) {
            local_12c = 0x142a21b;
          }
          else if (local_12c == -0x67a912b0) {
            local_12c = -0x2e0c7c14;
          }
          else if (local_12c == -0x67736ebd) {
            _objc_msgSend(local_c8,local_d0);
            auVar26._8_8_ = extraout_x1_04;
            auVar26._0_8_ = local_a8;
            local_12c = -0x5f03df85;
          }
          goto LAB_00238598;
        }
        if (-0x5f03df86 < local_12c) {
          if (local_12c == -0x5f03df85) {
            local_d8 = (double)_objc_msgSend(local_c8,local_d0);
            auVar26._8_8_ = extraout_x1_11;
            auVar26._0_8_ = local_a8;
            local_12c = 0x59118daf;
          }
          else if (local_12c == -0x5b046868) {
            bVar21 = local_b1 == '\0';
            local_12c = -0x2929b8a;
            iVar23 = -0x2aa3cc64;
            goto LAB_00239914;
          }
          goto LAB_00238598;
        }
        if (local_12c == -0x624808f5) {
          local_12c = -0x14d0a909;
          goto LAB_00238598;
        }
        if (local_12c != -0x61e93a74) goto LAB_00238598;
        bVar21 = 0x78ae8621 <
                 (((DAT_004b21b0 | DAT_004b21b4 | 0xedb709e8) >> 2) / 0x3e775039 | 0x3cc7398c);
        local_12c = -0x2e0c7c14;
        iVar23 = -0x67a912b0;
        auVar29 = auVar17;
      }
LAB_0023a348:
      local_100 = auVar29._0_8_;
      auVar1._8_8_ = auVar29._8_8_;
      auVar1._0_8_ = local_a8;
      auVar26._8_8_ = auVar29._8_8_;
      auVar26._0_8_ = local_a8;
      if (bVar21) {
        local_12c = iVar23;
        auVar26 = auVar1;
      }
      goto LAB_00238598;
    }
    if (local_12c < -0x30e5e9d6) {
      if (-0x4337aacd < local_12c) {
        if (local_12c < -0x41d85ff7) {
          if (local_12c != -0x4337aacc) {
            if (local_12c == -0x42508e93) {
              bVar21 = ((DAT_004b2210 - DAT_004b2214 ^ 0x67ee4fe3U) + 0x3857cd) / 0xdece1a3 <
                       0xf20e7d9;
              iVar23 = -0x3fd73c7;
              local_12c = -0x6d9611f;
              goto LAB_0023a564;
            }
            if (local_12c == -0x42220818) {
              _objc_msgSend(local_c8,local_d0);
              auVar26._8_8_ = extraout_x1_06;
              auVar26._0_8_ = local_a8;
              local_12c = 0xb6026c5;
            }
            goto LAB_00238598;
          }
          bVar20 = false;
          bVar21 = false;
          iVar23 = -0x5d49993;
          local_12c = 0x4187a821;
        }
        else if (local_12c < -0x35f593d3) {
          if (local_12c != -0x41d85ff7) {
            if (local_12c == -0x3f5e812e) {
              local_12c = 0x4a8b3577;
            }
            goto LAB_00238598;
          }
          uVar22 = 0x903e46fU -
                   (int)((long)((ulong)(DAT_004b20f0 ^ DAT_004b20f4) * 0xe21292f9) >> 0x3f) &
                   0x800e403;
          bVar20 = 0x67812bcc < uVar22;
          bVar21 = uVar22 == 0x67812bcd;
          iVar23 = 0x68bf457;
          local_12c = 0x33acf8;
        }
        else {
          if (local_12c != -0x35f593d3) {
            if (local_12c == -0x340502d2) {
              local_12c = -0x7abc8707;
            }
            goto LAB_00238598;
          }
          uVar22 = 0;
          if (DAT_004b214c != 0) {
            uVar22 = DAT_004b2148 / DAT_004b214c;
          }
          uVar22 = (uVar22 ^ 0x27a327e5) * 0x394a1a24 + 0xc27cf1ec;
          local_d0 = PTR_s_size_0048b340;
          bVar20 = 0x67a7d101 < uVar22;
          bVar21 = uVar22 == 0x67a7d102;
          iVar23 = 0x63027f4d;
          local_12c = 0x32dd7c32;
        }
LAB_0023a218:
        if (!bVar20 || bVar21) {
          local_12c = iVar23;
        }
        goto LAB_00238598;
      }
      if (local_12c < -0x4992199e) {
        if (local_12c == -0x51820ea0) {
          uVar22 = DAT_004b2248 & DAT_004b224c;
          _objc_release(local_c8,uVar24);
          auVar27._8_8_ = extraout_x1_16;
          bVar21 = (uVar22 | 0x279917f4) / 0xaafa21b == 0xd2a8f0b9;
          iVar23 = -0xaa907d4;
          local_12c = -0x7ce34350;
          goto LAB_0023a2dc;
        }
        if (local_12c == -0x4e60bb0b) {
          local_12c = 0xaaef936;
        }
        else if (local_12c == -0x4d4fe092) {
          local_12c = -0x72329854;
        }
        goto LAB_00238598;
      }
      if (local_12c != -0x4992199e) {
        if (local_12c == -0x4814feb6) {
          _objc_release(local_f0,uVar24);
          auVar26._8_8_ = extraout_x1_21;
          auVar26._0_8_ = local_a8;
          local_12c = -0x4992199e;
        }
        else if (local_12c == -0x4544624a) {
          bVar21 = (DAT_004b2150 + DAT_004b2154 & 0x9eaeb43aU) == 0xe037833e;
          local_12c = -0x5f03df85;
          iVar23 = -0x67736ebd;
LAB_00239914:
          if (bVar21) {
            local_12c = iVar23;
          }
        }
        goto LAB_00238598;
      }
      uVar22 = (DAT_004b2238 + DAT_004b223c | 0xff5b685U) / 0x32211ce3 ^ 0x2d65348e;
      _objc_release(local_f0,uVar24);
      bVar20 = 0xa615c0d4 < uVar22;
      bVar21 = uVar22 == 0xa615c0d5;
      local_12c = -0x4992199e;
      iVar23 = -0x624808f5;
      uVar24 = extraout_x1_18;
    }
    else if (local_12c < -0x242fa587) {
      if (local_12c < -0x2aa3cc64) {
        if (local_12c == -0x30e5e9d6) {
          uVar22 = DAT_004b21a8 | DAT_004b21ac;
          _UIImagePNGRepresentation(local_f0);
          auVar29 = _objc_retainAutoreleasedReturnValue();
          bVar21 = 0x6c3e9ac4 < (uVar22 ^ 0x8300 | 0xbffb6c3d);
          local_12c = -0x547babcd;
          iVar23 = 0x331462ff;
        }
        else {
          if (local_12c != -0x2e0c7c14) {
            if (local_12c == -0x2d1e5f70) {
              iVar23 = DAT_004b21c8 + DAT_004b21cc;
              _UIImageJPEGRepresentation(uVar19,local_f0);
              auVar27 = _objc_retainAutoreleasedReturnValue();
              bVar21 = (uint)((ulong)(iVar23 + 0x3c35c487) * 0xfbf6cc7d >> 0x3d) == 0x4607260f;
              iVar23 = -0x2a9559a2;
              local_12c = -0xf752da5;
              goto LAB_0023a2dc;
            }
            goto LAB_00238598;
          }
          bVar21 = 0x446cf8ba <
                   ((DAT_004b21b8 | DAT_004b21bc) * -0x3c6f5e56 + 0x6824ae4e | 0x1db689de);
          local_12c = -0x67a912b0;
          iVar23 = 0x65c33c1e;
        }
        goto LAB_0023a348;
      }
      if (-0x2a92fa18 < local_12c) {
        if (local_12c != -0x2a92fa17) {
          if (local_12c == -0x269ba05e) {
            local_12c = -0xf768d37;
          }
          goto LAB_00238598;
        }
        bVar21 = local_f1 == '\0';
        iVar23 = 0x71475484;
        local_12c = 0x20c072b5;
        goto LAB_0023a2dc;
      }
      if (local_12c != -0x2aa3cc64) {
        if (local_12c == -0x2a9559a2) {
          _UIImageJPEGRepresentation(uVar19,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar24 = extraout_x1_00;
          goto LAB_00239848;
        }
        goto LAB_00238598;
      }
      uVar22 = (DAT_004b2120 - DAT_004b2124) * 0x412b9a18 + 0x91c5d760U & 0xa8a98c48;
      bVar20 = 0x5a69a1b1 < uVar22;
      bVar21 = uVar22 == 0x5a69a1b2;
      local_12c = 0x3bbe92e5;
      iVar23 = 0xa5124bb;
    }
    else {
      if (local_12c < -0x16477c1a) {
        if (local_12c == -0x242fa587) goto LAB_0023985c;
        if (local_12c == -0x1bb27711) {
          bVar21 = 0xe1544c9c < (DAT_004b2260 - DAT_004b2264 ^ 0x8000001fU | 0x7fdbff9d);
          iVar23 = -0x83ff1ed;
          local_12c = 0x5ad7afae;
          auVar28 = auVar14;
          goto LAB_0023a564;
        }
        if (local_12c == -0x1755f8e9) {
          uVar22 = 0;
          if (DAT_004b2174 != 0) {
            uVar22 = DAT_004b2170 / DAT_004b2174;
          }
          bVar21 = uVar22 * -0x23103762 == 0x1faed88d;
          iVar23 = 0xb6026c5;
          local_12c = -0x42220818;
          goto LAB_00239258;
        }
        goto LAB_00238598;
      }
      if (local_12c < -0xf768d37) {
        if (local_12c == -0x16477c1a) {
          _objc_msgSend(local_a8,local_b0,&PTR____CFConstantStringClassReference_004b0590);
          auVar26._8_8_ = extraout_x1_10;
          auVar26._0_8_ = local_a8;
          local_12c = -0x79dc71de;
        }
        else if (local_12c == -0x14d0a909) {
          local_12c = -0x6b2c6c0d;
        }
        goto LAB_00238598;
      }
      if (local_12c != -0xf768d37) {
        if (local_12c == -0xf752da5) {
          local_12c = 0x7dc1e719;
        }
        goto LAB_00238598;
      }
      uVar22 = DAT_004b2230 * DAT_004b2234 * 0x65509a46 ^ 0xd02c129U | 0xf2683e14;
      bVar20 = 0x82d4ad1 < uVar22;
      bVar21 = uVar22 == 0x82d4ad2;
      local_12c = -0x4992199e;
      iVar23 = -0x4814feb6;
    }
  }
  else {
    if (0x3010ce88 < local_12c) {
      if (0x569cf14b < local_12c) {
        if (local_12c < 0x65f7f978) {
          if (local_12c < 0x5c045287) {
            if (local_12c == 0x569cf14c) {
              local_12c = -0x5b046868;
            }
            else if (local_12c == 0x59118daf) {
              local_12c = 0x3842aeda;
            }
            else if (local_12c == 0x5ad7afae) {
              _objc_release(param_3,uVar24);
              auVar26._8_8_ = extraout_x1_05;
              auVar26._0_8_ = local_a8;
              local_12c = -0x83ff1ed;
            }
          }
          else if (local_12c < 0x63027f4d) {
            if (local_12c == 0x5c045287) {
              local_12c = 0x350b1acf;
            }
            else if (local_12c == 0x624e769c) {
              local_12c = -0x73181049;
            }
          }
          else if (local_12c == 0x63027f4d) {
            local_12c = -0x35f593d3;
          }
          else if (local_12c == 0x65c33c1e) {
            local_12c = 0x1e7c381c;
            local_120 = local_100;
          }
        }
        else if (local_12c < 0x71475484) {
          if (local_12c == 0x65f7f978) {
            local_12c = 0x1e7c381c;
            local_120 = local_108;
          }
          else if (local_12c == 0x66a4f42c) {
            _objc_msgSend(local_c8,local_d0);
            dVar25 = in_d1 * (400.0 / local_e8);
            uVar24 = _objc_msgSend(local_c8,PTR_s_scale_0048b088);
            _UIGraphicsBeginImageContextWithOptions(0x4079000000000000,dVar25,uVar24,0);
            in_d1 = 0.0;
            _objc_msgSend(0,0,0x4079000000000000,dVar25,local_c8,PTR_s_drawInRect__0048b348);
            _UIGraphicsGetImageFromCurrentImageContext();
            _objc_retainAutoreleasedReturnValue();
            _UIGraphicsEndImageContext();
            auVar26._8_8_ = extraout_x1_23;
            auVar26._0_8_ = local_a8;
            local_12c = 0x3be90c9a;
          }
          else if (local_12c == 0x681bd8d4) {
            bVar21 = (DAT_004b2220 | DAT_004b2224) == 0xb862ea6b;
            iVar23 = -0xd740397;
            local_12c = 0x1f613577;
            auVar27 = auVar6;
            goto LAB_0023a2dc;
          }
        }
        else if (local_12c < 0x7dc1e719) {
          if (local_12c == 0x71475484) {
LAB_00239848:
            auVar26._8_8_ = uVar24;
            auVar26._0_8_ = local_a8;
            local_12c = -0x2d1e5f70;
          }
          else if (local_12c == 0x7da735bf) {
            DAT_004b058c = DAT_004b0588 ^ 0x8d;
            DAT_004b058d = DAT_004b0589 ^ 0x7d;
            local_92 = DAT_004b058a ^ 0x4b;
            local_12c = -0x41d85ff7;
          }
        }
        else {
          if (local_12c == 0x7dc1e719) goto LAB_00239870;
          if (local_12c == 0x7f571bce) {
            uVar22 = 0;
            if (DAT_004b220c != 0) {
              uVar22 = DAT_004b2208 / DAT_004b220c;
            }
            _objc_msgSend(local_128,local_118,param_3,1);
            bVar21 = ((uVar22 & 0xc7a4ee01) + 0x37e9ddb6) / 0x1a444942 == 0x1842c6b4;
            local_12c = -0x6b33f9f5;
            iVar23 = -0x7b8ee14d;
            uVar24 = extraout_x1_08;
            goto LAB_0023a368;
          }
        }
        goto LAB_00238598;
      }
      if (local_12c < 0x4187a821) {
        if (local_12c < 0x350b1acf) {
          if (local_12c == 0x3010ce89) {
            local_12c = -0x59a26f0c;
          }
          else if (local_12c == 0x32dd7c32) {
            local_12c = -0x4544624a;
          }
          else if (local_12c == 0x331462ff) {
            local_12c = -0x61e93a74;
          }
        }
        else if (local_12c < 0x3bbe92e5) {
          if (local_12c == 0x3842aeda) {
            bVar21 = 0x6ead54ec <
                     (DAT_004b2160 * DAT_004b2164 | 0xb1850d1eU) * 0x72a82bdd + 0x6e10e446;
            local_12c = 0x27de7ea0;
            iVar23 = -0x547f7ada;
            auVar29 = auVar15;
            goto LAB_0023a348;
          }
          if (local_12c == 0x350b1acf) {
            return;
          }
        }
        else if (local_12c == 0x3bbe92e5) {
          local_12c = 0xa5124bb;
        }
        else if (local_12c == 0x3be90c9a) {
          uVar22 = (DAT_004b2188 * DAT_004b218c * 0x7255b330 | 0xa21f8a8eU) * -0x4b4070f9;
          _objc_msgSend(local_c8,local_d0);
          dVar25 = in_d1 * (400.0 / local_e8);
          uVar24 = _objc_msgSend(local_c8,PTR_s_scale_0048b088);
          _UIGraphicsBeginImageContextWithOptions(0x4079000000000000,dVar25,uVar24,0);
          in_d1 = 0.0;
          _objc_msgSend(0,0,0x4079000000000000,dVar25,local_c8,PTR_s_drawInRect__0048b348);
          _UIGraphicsGetImageFromCurrentImageContext();
          local_f0 = _objc_retainAutoreleasedReturnValue();
          _UIGraphicsEndImageContext();
          bVar20 = 0xcf9f17a8 < uVar22;
          bVar21 = uVar22 == 0xcf9f17a9;
          local_12c = 0x3be90c9a;
          iVar23 = -0x3f5e812e;
          uVar24 = extraout_x1_02;
          goto LAB_0023a4fc;
        }
        goto LAB_00238598;
      }
      if (0x462040ee < local_12c) {
        if (local_12c < 0x5050d0c4) {
          if (local_12c == 0x462040ef) {
            _objc_release(local_a0,uVar24);
            _objc_msgSend(local_a8,PTR_s_isEqualToString__00489d70,
                          &PTR____CFConstantStringClassReference_004b05b0);
            auVar26._8_8_ = extraout_x1_12;
            auVar26._0_8_ = local_a8;
            local_12c = -0x79ad4833;
          }
          else if (local_12c == 0x4a8b3577) {
            bVar21 = 0xa1af4240 <
                     ((DAT_004b2190 - DAT_004b2194) + 0xf6534ae9U & 0x4c3a1f48 | 0x4c380300);
            iVar23 = -0x16477c1a;
            local_12c = -0x79dc71de;
            auVar28 = auVar11;
            goto LAB_0023a564;
          }
        }
        else if (local_12c == 0x5050d0c4) {
          _objc_msgSend(local_c0,PTR_s_imageWithContentsOfFile__0048b0a8,param_3);
          _objc_retainAutoreleasedReturnValue();
          uVar24 = extraout_x1_13;
LAB_00239ba4:
          auVar26._8_8_ = uVar24;
          auVar26._0_8_ = local_a8;
          local_12c = 0x103f5ed5;
        }
        else if (local_12c == 0x5115acda) {
          local_12c = -0x6b7d6dbd;
        }
        goto LAB_00238598;
      }
      if (local_12c == 0x4187a821) {
        local_12c = -0x5d49993;
        goto LAB_00238598;
      }
      if (local_12c != 0x441e26b9) {
        if (local_12c == 0x46169f2a) {
          local_12c = -0x2929b8a;
        }
        goto LAB_00238598;
      }
      bVar21 = 0x9309150b < (DAT_004b2140 - DAT_004b2144) * -0x50175e22 + 0x5f481706U;
      iVar23 = -0x35f593d3;
      local_12c = 0x63027f4d;
      auVar28 = auVar12;
LAB_0023a564:
      local_c8 = auVar28._0_8_;
      auVar3._8_8_ = auVar28._8_8_;
      auVar3._0_8_ = local_a8;
      auVar26._8_8_ = auVar28._8_8_;
      auVar26._0_8_ = local_a8;
      if (bVar21) {
        local_12c = iVar23;
        auVar26 = auVar3;
      }
      goto LAB_00238598;
    }
    if (local_12c < 0x68bf457) {
      if (local_12c < -0x5d49993) {
        if (local_12c < -0x8e24124) {
          if (local_12c == -0xd740397) {
            _objc_release(local_128,uVar24);
            auVar26._8_8_ = extraout_x1_15;
            auVar26._0_8_ = local_a8;
            local_12c = 0x1f613577;
          }
          else if (local_12c == -0xc479a99) {
            local_12c = 0x681bd8d4;
          }
          else if (local_12c == -0xaa907d4) {
            _objc_release(local_c8,uVar24);
            auVar26._8_8_ = extraout_x1_03;
            auVar26._0_8_ = local_a8;
            local_12c = -0x51820ea0;
          }
        }
        else if (local_12c == -0x8e24124) {
          local_12c = -0x1bb27711;
        }
        else if (local_12c == -0x83ff1ed) {
          _objc_release(param_3,uVar24);
          auVar26._8_8_ = extraout_x1_19;
          auVar26._0_8_ = local_a8;
          local_12c = 0x5c045287;
        }
        else if (local_12c == -0x6d9611f) {
          local_12c = -0x3fd73c7;
        }
      }
      else if (local_12c < -0x2929b8a) {
        if (local_12c == -0x5d49993) {
          local_90 = DAT_004d1890;
          bVar21 = 0x53402800 < DAT_004b20e8 * DAT_004b20ec + 0x404ee57dU;
          local_12c = 0x4187a821;
          iVar23 = 0x5115acda;
          auVar29 = auVar16;
          goto LAB_0023a348;
        }
        if (local_12c == -0x3fd73c7) {
          local_12c = -0xc479a99;
        }
        else if (local_12c == -0x2dad712) {
LAB_00239870:
          local_12c = -0x6d3c2db2;
        }
      }
      else if (local_12c < 0x142a21b) {
        if (local_12c == -0x2929b8a) {
          bVar21 = (DAT_004b2250 + DAT_004b2254 + 0xa5f1ee7aU | 0x58bb4cb2) == 0x8f9c7c7e;
          local_12c = -0x55b93f67;
          iVar23 = 0x174a0f8a;
          goto LAB_0023a368;
        }
        if (local_12c == 0x33acf8) {
          DAT_004b058e = local_92;
          DAT_004b058f = DAT_004b058b ^ 0x18;
          local_12c = 0x68bf457;
        }
      }
      else {
        if (local_12c == 0x142a21b) {
          uVar22 = ((DAT_004b21e8 & DAT_004b21ec) / 0x2d527a04) * -0x2ede3efd + 0x9993a0f;
          local_109 = local_128 == 0;
          bVar20 = 0x7c044243 < uVar22;
          bVar21 = uVar22 == 0x7c044244;
          iVar23 = -0x68945644;
          local_12c = 0xaba2d65;
          goto LAB_0023a218;
        }
        if (local_12c == 0x3b839c4) {
          DAT_004b0584 = local_93 ^ 0x37;
          DAT_004b0585 = DAT_004b0581 ^ 0xcf;
          DAT_004b0586 = DAT_004b0582 ^ 0x36;
          DAT_004b0587 = DAT_004b0583 ^ 0xc5;
          local_12c = -0x59716ba3;
        }
      }
      goto LAB_00238598;
    }
    if (local_12c < 0x12aec7e1) {
      if (0xaba2d64 < local_12c) {
        if (local_12c < 0xe09cbfa) {
          if (local_12c == 0xaba2d65) {
            bVar21 = local_109 == '\0';
            local_12c = 0x681bd8d4;
            iVar23 = -0x242fa587;
            goto LAB_00239914;
          }
          if (local_12c != 0xb6026c5) goto LAB_00238598;
          uVar22 = DAT_004b2178 ^ DAT_004b217c;
          local_e8 = (double)_objc_msgSend(local_c8,local_d0);
          auVar28._8_8_ = extraout_x1;
          bVar21 = 0xf0ffa249 < (uVar22 * 0x274f4a6 + 0x84c79db0 ^ 0xe00653bd);
          iVar23 = 0xb6026c5;
          local_12c = -0x340502d2;
        }
        else {
          if (local_12c == 0xe09cbfa) {
            local_118 = PTR_s_writeToFile_atomically__0048b350;
            bVar21 = (uint)((ulong)((DAT_004b21f8 - DAT_004b21fc & 0x21c9bc7U) + 0x5cb722be) *
                            0x3fb04197 >> 0x3c) == 0x4bfd721d;
            iVar23 = 0x213befb9;
            local_12c = -0x5a2a97dd;
            auVar27 = auVar7;
            goto LAB_0023a2dc;
          }
          if (local_12c != 0x103f5ed5) goto LAB_00238598;
          uVar22 = DAT_004b2138 ^ DAT_004b213c;
          _objc_msgSend(local_c0,PTR_s_imageWithContentsOfFile__0048b0a8,param_3);
          auVar28 = _objc_retainAutoreleasedReturnValue();
          bVar21 = 0xd8cd0fd8 < ((uVar22 ^ 0x197cb84) * 0x703490b0 & 0x50a0be40);
          iVar23 = 0x5050d0c4;
          local_12c = 0x3010ce89;
        }
        goto LAB_0023a564;
      }
      if (local_12c == 0x68bf457) {
        DAT_004b058e = local_92;
        DAT_004b058f = DAT_004b058b ^ 0x18;
        local_93 = DAT_004b0580;
        local_12c = -0x4d4fe092;
        goto LAB_00238598;
      }
      if (local_12c != 0xa5124bb) {
        if (local_12c == 0xaaef936) {
          DAT_004d1890 = 1;
          uVar24 = _objc_retain(param_3);
          _objc_msgSend(uVar24,PTR_s_pathExtension_0048a1e8);
          local_a0 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_lowercaseString_0048a1f0);
          auVar26 = _objc_retainAutoreleasedReturnValue();
          local_12c = -0x6e231760;
        }
        goto LAB_00238598;
      }
      local_c0 = PTR__OBJC_CLASS___UIImage_0048c9c8;
      uVar22 = (DAT_004b2128 ^ DAT_004b212c ^ 0xb49f1e86) / 0x2a301053;
      bVar20 = 0xf5df81b4 < uVar22;
      bVar21 = uVar22 == 0xf5df81b5;
      local_12c = 0x3bbe92e5;
      iVar23 = 0x624e769c;
    }
    else {
      if (local_12c < 0x1f613577) {
        if (local_12c != 0x12aec7e1) {
          if (local_12c == 0x174a0f8a) {
            uVar22 = DAT_004b2258 | DAT_004b225c;
            _objc_release(local_a8,uVar24);
            auVar27._8_8_ = extraout_x1_22;
            bVar21 = (uVar22 * -0x32e7a7fe ^ 0xe11aabb4) / 0x25d66301 == 0xda5401ef;
            iVar23 = -0x55b93f67;
            local_12c = -0x8e24124;
            goto LAB_0023a2dc;
          }
          if (local_12c == 0x1e7c381c) {
            local_128 = local_120;
            uVar22 = DAT_004b21e0 + DAT_004b21e4 + 0x2f559e70;
            bVar20 = 0x10fa7099 < uVar22;
            bVar21 = uVar22 == 0x10fa709a;
            iVar23 = -0x68945644;
            local_12c = 0x142a21b;
            goto LAB_0023a218;
          }
          goto LAB_00238598;
        }
        bVar21 = local_d9 == '\0';
        iVar23 = -0x6b2c6c0d;
        local_12c = -0x1755f8e9;
        auVar27 = auVar8;
LAB_0023a2dc:
        local_108 = auVar27._0_8_;
        auVar4._8_8_ = auVar27._8_8_;
        auVar4._0_8_ = local_a8;
        auVar26._8_8_ = auVar27._8_8_;
        auVar26._0_8_ = local_a8;
        if (bVar21) {
          local_12c = iVar23;
          auVar26 = auVar4;
        }
        goto LAB_00238598;
      }
      if (0x213befb8 < local_12c) {
        if (local_12c == 0x213befb9) {
LAB_0023985c:
          local_12c = 0xe09cbfa;
        }
        else if (local_12c == 0x27de7ea0) {
          in_d1 = 400.0;
          local_d9 = 400.0 < local_d8;
          local_12c = 0x12aec7e1;
        }
        goto LAB_00238598;
      }
      if (local_12c == 0x1f613577) {
        uVar22 = DAT_004b2228 ^ DAT_004b222c;
        _objc_release(local_128,uVar24);
        uVar22 = -(int)((long)((ulong)(uVar22 + 0x15a5a1f3) * 0xbbfdea35) >> 0x3f);
        bVar20 = 0xee8f3d47 < uVar22;
        bVar21 = uVar22 == 0xee8f3d48;
        local_12c = -0xd740397;
        iVar23 = -0x269ba05e;
        uVar24 = extraout_x1_09;
        goto LAB_0023a4fc;
      }
      if (local_12c != 0x20c072b5) goto LAB_00238598;
      uVar22 = ((DAT_004b21a0 - DAT_004b21a4 ^ 0xa97d304U) & 0x1a97d3b7) + 0xf1e7faf1;
      bVar20 = 0x9455cc91 < uVar22;
      bVar21 = uVar22 == 0x9455cc92;
      local_12c = -0x30e5e9d6;
      iVar23 = -0x547babcd;
    }
  }
LAB_0023a4fc:
  auVar5._8_8_ = uVar24;
  auVar5._0_8_ = local_a8;
  auVar26._8_8_ = uVar24;
  auVar26._0_8_ = local_a8;
  if (!bVar20 || bVar21) {
    local_12c = iVar23;
    auVar26 = auVar5;
  }
  goto LAB_00238598;
}



// ----- -[BubbleBoxMgr fetchMasks] @ 0023a5ac -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::fetchMasks(ID param_1,SEL param_2)

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
  undefined8 *puVar15;
  bool bVar16;
  bool bVar17;
  int iVar18;
  undefined8 uVar19;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  undefined8 extraout_x1_04;
  SEL extraout_x1_05;
  SEL extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  SEL extraout_x1_09;
  SEL extraout_x1_10;
  undefined8 extraout_x1_11;
  SEL extraout_x1_12;
  SEL extraout_x1_13;
  SEL extraout_x1_14;
  undefined8 extraout_x1_15;
  SEL extraout_x1_16;
  undefined8 extraout_x1_17;
  uint uVar20;
  undefined1 *puVar21;
  int iVar22;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStack_1b0 [8];
  ID local_1a8;
  int *local_1a0;
  int local_194;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  char local_169;
  long local_168;
  char local_159;
  long local_158;
  undefined8 local_150;
  char local_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  char local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long *local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  byte local_77;
  byte local_76;
  char local_75;
  int local_74;
  long local_70;
  
  puVar21 = auStack_1b0;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = DAT_004d1894;
  local_1a0 = &local_194;
  local_194 = -0x1d9f746f;
  local_1a8 = param_1;
LAB_0023a660:
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = local_138;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_138;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_138;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_138;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_138;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_138;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_138;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_168;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_168;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_168;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = local_168;
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = local_168;
  if (local_194 < 0x17df5cda) {
    if (local_194 < -0x2332d45d) {
      if (local_194 < -0x4e2aa589) {
        if (-0x702760df < local_194) {
          if (-0x5e7e7aa8 < local_194) {
            if (local_194 < -0x51c4f2f1) {
              if (local_194 == -0x5e7e7aa7) {
                uVar20 = 0;
                if (DAT_004b2384 != 0) {
                  uVar20 = DAT_004b2380 / DAT_004b2384;
                }
                bVar17 = (uVar20 & 0xf80fd927 | 0x980fd025) == 0xfa4320f0;
                iVar18 = 0x317083b7;
                iVar22 = 0x7817d034;
LAB_0023c4dc:
                if (bVar17) {
                  iVar18 = iVar22;
                }
                goto LAB_0023c868;
              }
              if (local_194 == -0x593eeb70) {
                local_188 = local_178;
                local_f0 = PTR_s_lowercaseString_0048a1f0;
                local_e8 = PTR_s_pathExtension_0048a1e8;
                local_100 = PTR_s_stringByAppendingPathComponent__00489550;
                local_f8 = PTR_s_isEqualToString__00489d70;
                local_110 = PTR_s_addObject__00489ba8;
                local_108 = PTR_s_resizeImageIfNeededAtPath__0048b358;
                *local_1a0 = 0x46e05648;
                local_180 = 0;
              }
            }
            else if (local_194 == -0x51c4f2f1) {
              *local_1a0 = -0x77cfabe6;
            }
            else if (local_194 == -0x512ab34a) {
              _objc_msgSend(local_128,local_f0);
              auVar23 = _objc_retainAutoreleasedReturnValue();
              param_2 = auVar23._8_8_;
              local_130 = auVar23._0_8_;
              *local_1a0 = 0x42ae1dbf;
            }
            goto LAB_0023a660;
          }
          if (local_194 != -0x702760de) {
            if (local_194 == -0x6d7049f0) {
              bVar17 = local_75 == '\0';
              iVar22 = 0x2c22e421;
              iVar18 = 0x10209849;
              goto LAB_0023c3f4;
            }
            if (local_194 == -0x6bd5339d) {
              iVar18 = DAT_004b23b8 + DAT_004b23bc;
              _objc_release(local_a8,param_2);
              _objc_msgSend(local_b8,PTR_s_sortUsingComparator__0048b368,
                            &PTR___NSConcreteGlobalBlock_00480848);
              auVar25._8_8_ = extraout_x1_04;
              auVar25._0_8_ = local_138;
              bVar17 = 0xc94f356e < ((iVar18 + 0x6807d961U | 0x411c43d2) ^ 0x6a577a32);
              iVar22 = 0x4293dbb0;
              iVar18 = 0x664ea404;
              goto LAB_0023c7fc;
            }
            goto LAB_0023a660;
          }
          bVar17 = 0x2734192 <
                   ((DAT_004b23d0 + DAT_004b23d4 ^ 0x81000100U) & 0x871267a2) + 0x132d905e;
          iVar18 = -0x340db648;
          iVar22 = -0x3b2448fe;
          goto LAB_0023c538;
        }
        if (-0x7787f038 < local_194) {
          if (local_194 == -0x7787f037) {
            *local_1a0 = 0x520178b;
          }
          else if (local_194 == -0x71959e64) {
            iVar18 = 0x31b3c289;
            if (local_169 == '\0') {
              iVar18 = -0x593eeb70;
            }
            *local_1a0 = iVar18;
            local_178 = local_168;
          }
          else if (local_194 == -0x7097267e) {
            *local_1a0 = 0x546b51f3;
          }
          goto LAB_0023a660;
        }
        if (local_194 != -0x7c5dc1bb) {
          if (local_194 == -0x77cfabe6) {
            uVar20 = 0;
            if (DAT_004b22ec != 0) {
              uVar20 = DAT_004b22e8 / DAT_004b22ec;
            }
            iVar18 = 0x3823b919;
            if (0xe048388c < ((uVar20 ^ 0x881d420a) & 0xa8bd670b)) {
              iVar18 = -0x77cfabe6;
            }
            goto LAB_0023c868;
          }
          if (local_194 == -0x77b0e595) {
            *local_1a0 = 0x77cb04a5;
          }
          goto LAB_0023a660;
        }
        local_158 = local_190 + 1;
        bVar17 = (uint)((DAT_004b2368 + DAT_004b236c) * 0x6db533f0) / 0x48ca2e5d == 0xfa8944af;
        iVar18 = -0x7c5dc1bb;
        iVar22 = -0x4e2aa589;
        auVar23 = auVar1;
      }
      else {
        if (local_194 < -0x3b2448fe) {
          if (local_194 < -0x421bfdcc) {
            if (local_194 == -0x4e2aa589) {
              *local_1a0 = 0x7c6e4110;
            }
            else if (local_194 == -0x47c95719) {
              *local_1a0 = 0x27730409;
            }
            else if (local_194 == -0x45f46b75) {
              uVar20 = DAT_004b2358 | DAT_004b235c;
              _objc_release(local_150,param_2);
              bVar17 = 0x180913ba < (uVar20 * 0x55082bde ^ 0x40040896 | 0xb0d97168);
              iVar18 = -0x20e9eeac;
              iVar22 = 0x26fe0b5;
              param_2 = extraout_x1_01;
              goto LAB_0023c538;
            }
          }
          else if (local_194 == -0x421bfdcc) {
            *local_1a0 = 0x84c8ec8;
          }
          else {
            if (local_194 == -0x41f4f60c) {
              uVar20 = (DAT_004b2280 * DAT_004b2284 & 0x3c112U | 0xe57c2ce9) ^ 0x333f99e3;
              bVar16 = 0x1769c969 < uVar20;
              bVar17 = uVar20 == 0x1769c96a;
              iVar22 = -0x80816e9;
              iVar18 = -0x1b6be71d;
LAB_0023be98:
              auVar11._8_8_ = param_2;
              auVar11._0_8_ = local_138;
              auVar25._8_8_ = param_2;
              auVar25._0_8_ = local_138;
              if (!bVar16 || bVar17) {
                iVar18 = iVar22;
                auVar25 = auVar11;
              }
              goto LAB_0023c868;
            }
            if (local_194 == -0x3bef2243) {
              _objc_enumerationMutation(local_a8);
              *local_1a0 = 0x7a0c4dc0;
              param_2 = extraout_x1_02;
            }
          }
          goto LAB_0023a660;
        }
        if (local_194 < -0x340db648) {
          if (local_194 != -0x3b2448fe) {
            if (local_194 == -0x388c78b8) {
              bVar17 = local_111 == '\0';
              iVar18 = 0x10b7a0;
              iVar22 = 0x46b65fd0;
              goto LAB_0023c4dc;
            }
            if (local_194 == -0x346e9688) {
              *local_1a0 = 0x23cc71e2;
            }
            goto LAB_0023a660;
          }
          iVar18 = DAT_004b23d8 - DAT_004b23dc;
          _objc_autoreleaseReturnValue(local_b8);
          auVar23._8_8_ = extraout_x1_15;
          auVar23._0_8_ = local_168;
          bVar17 = (uint)((ulong)(iVar18 + 0x913449abU & 0xd3a01449) * 0x54eab115 >> 0x3d) ==
                   0x2d0ddb3b;
          iVar18 = -0x340db648;
          iVar22 = 0x465f3631;
        }
        else {
          if (-0x2f0a29a9 < local_194) {
            if (local_194 == -0x2f0a29a8) {
              uVar20 = ((DAT_004b2330 ^ DAT_004b2334) & 0x1ccbadb5) + 0x40a57f9f;
              bVar16 = 0x7a77b8f9 < uVar20;
              bVar17 = uVar20 == 0x7a77b8fa;
              iVar22 = 0x17df5cda;
              iVar18 = 0x2d6833df;
              goto LAB_0023be98;
            }
            if (local_194 == -0x2e8eb9c8) {
LAB_0023b710:
              *local_1a0 = 0x62ac9411;
            }
            goto LAB_0023a660;
          }
          if (local_194 == -0x340db648) {
            _objc_autoreleaseReturnValue(local_b8);
            *local_1a0 = -0x3b2448fe;
            param_2 = extraout_x1_10;
            goto LAB_0023a660;
          }
          if (local_194 != -0x31fd3a25) goto LAB_0023a660;
          local_159 = local_158 == local_188;
          bVar17 = ((DAT_004b2378 | DAT_004b237c) * -0x6682cea5 | 0x3bfc2fee) == 0x9f635390;
          iVar18 = -0x31fd3a25;
          iVar22 = 0x5b1ee5af;
          auVar23 = auVar2;
        }
      }
LAB_0023c864:
      auVar14._8_8_ = auVar23._8_8_;
      auVar14._0_8_ = local_138;
      auVar25._8_8_ = auVar23._8_8_;
      auVar25._0_8_ = local_138;
      local_168 = auVar23._0_8_;
      if (!bVar17) {
        iVar18 = iVar22;
        auVar25 = auVar14;
      }
    }
    else {
      if (-0x4bb3f21 < local_194) {
        if (local_194 < 0x8f52aa4) {
          if (local_194 < 0x520178b) {
            if (local_194 == -0x4bb3f20) {
              *local_1a0 = -0x31fd3a25;
            }
            else if (local_194 == 0x10b7a0) {
              local_120 = *(undefined8 *)(*local_e0 + local_190 * 8);
              _objc_msgSend(local_120,local_e8);
              auVar23 = _objc_retainAutoreleasedReturnValue();
              param_2 = auVar23._8_8_;
              local_128 = auVar23._0_8_;
              *local_1a0 = -0x512ab34a;
            }
            else if (local_194 == 0x26fe0b5) {
              *local_1a0 = 0x49562a90;
            }
          }
          else {
            if (local_194 == 0x520178b) {
              local_d0 = local_88 + 2;
              local_d8 = *(long *)*local_d0;
              bVar17 = ((DAT_004b22c8 ^ DAT_004b22cc) & 0x925601c0) == 0x38f95772;
              iVar18 = -0x7787f037;
              iVar22 = -0x7097267e;
              goto LAB_0023c864;
            }
            if (local_194 == 0x637f21a) {
              iVar18 = -0x5e7e7aa7;
              if (local_159 == '\0') {
                iVar18 = 0x46e05648;
              }
              *local_1a0 = iVar18;
              local_180 = local_158;
            }
            else if (local_194 == 0x84c8ec8) {
LAB_0023b0ec:
              *local_1a0 = 0x10a88f15;
            }
          }
          goto LAB_0023a660;
        }
        if (local_194 < 0x10209849) {
          if (local_194 == 0x8f52aa4) {
            _objc_msgSend(local_140,local_f8,&PTR____CFConstantStringClassReference_004b05d0);
            _objc_release(local_140);
            _objc_release(local_138);
            _objc_release(local_130);
            _objc_release(local_128);
            *local_1a0 = -0xabf339d;
            param_2 = extraout_x1_16;
            goto LAB_0023a660;
          }
          if (local_194 == 0x9cf89f6) goto LAB_0023b710;
          if (local_194 != 0xbf6d0f3) goto LAB_0023a660;
          DAT_004b058e = local_76 ^ 0x4b;
          local_77 = DAT_004b058b ^ 0x18;
          bVar17 = 0x7f44700f < (DAT_004b22a8 - DAT_004b22ac & 0x1077050U ^ 0x7f553877);
          iVar22 = 0x7ee55633;
          iVar18 = 0x21914260;
        }
        else {
          if (0x10a88f14 < local_194) {
            if (local_194 == 0x10a88f15) {
              bVar17 = 0xc29f251a <
                       (DAT_004b23a8 * DAT_004b23ac + 0x92ae055bU | 0x921703de) + 0x89d32964;
              iVar22 = 0x32cf3c55;
              iVar18 = -0x71959e64;
              auVar25 = auVar9;
              goto LAB_0023c7fc;
            }
            if (local_194 == 0x13f886fd) {
              *local_1a0 = -0x702760de;
            }
            goto LAB_0023a660;
          }
          if (local_194 != 0x10209849) {
            if (local_194 == 0x1050bce6) {
              DAT_004b0584 = DAT_004b0580 ^ 0x37;
              DAT_004b0585 = DAT_004b0581 ^ 0xcf;
              DAT_004b0586 = DAT_004b0582 ^ 0x36;
              DAT_004b0587 = DAT_004b0583 ^ 0xc5;
              DAT_004b058c = DAT_004b0588 ^ 0x8d;
              DAT_004b058d = DAT_004b0589 ^ 0x7d;
              *local_1a0 = 0x37b94890;
            }
            goto LAB_0023a660;
          }
          bVar17 = 0x23c6978c < (DAT_004b2290 * DAT_004b2294 + 0xa6aeb9e8U | 0x3d7b9897);
          iVar22 = 0x37b94890;
          iVar18 = 0x1050bce6;
          auVar25 = auVar8;
        }
        goto LAB_0023c7fc;
      }
      if (local_194 < -0x12a74167) {
        if (-0x1b6be71e < local_194) {
          if (local_194 == -0x1b6be71d) {
            bVar17 = (uint)((ulong)(DAT_004b2288 - DAT_004b228c ^ 0xd4873650) * 0x36e58f49 >> 0x3d)
                     == 0x3d55aa4d;
            iVar18 = -0x80816e9;
            iVar22 = -0x6d7049f0;
            auVar23 = auVar3;
            goto LAB_0023c864;
          }
          if (local_194 == -0x16c447e7) {
            *local_1a0 = -0x7c5dc1bb;
          }
          else if (local_194 == -0x152bccbf) {
            bVar17 = 0xbe28d596 <
                     (((uint)(DAT_004b23c0 * DAT_004b23c4) / 0x43731940 | 0x6c99ec4c) ^ 0x9c947500);
            iVar22 = 0x4085c4bd;
            iVar18 = 0x33f826bd;
            auVar25 = auVar7;
            goto LAB_0023c7fc;
          }
          goto LAB_0023a660;
        }
        if (local_194 == -0x2332d45d) {
          bVar17 = local_141 == '\0';
          iVar18 = 0x7c99b9d5;
          iVar22 = 0x3e51a685;
          goto LAB_0023c4dc;
        }
        if (local_194 == -0x20e9eeac) {
          _objc_release(local_150,param_2);
          *local_1a0 = -0x45f46b75;
          param_2 = extraout_x1_13;
          goto LAB_0023a660;
        }
        if (local_194 != -0x1d9f746f) goto LAB_0023a660;
        iVar18 = 0x1f507ca6;
        if (0x68fb9b66 < (DAT_004b2270 + DAT_004b2274 & 0xf7264111U) * 0x45e2c55b + 0x5c533021) {
          iVar18 = 0x1b02aae9;
        }
      }
      else {
        if (local_194 < -0xabf339d) {
          if (local_194 == -0x12a74167) {
            *local_1a0 = 0x2c22e421;
            goto LAB_0023a660;
          }
          if (local_194 != -0x114a9a14) {
            if (local_194 == -0xe93d785) {
              *local_1a0 = 0x10b7a0;
            }
            goto LAB_0023a660;
          }
          uVar20 = ((uint)((DAT_004b22c0 + DAT_004b22c4) * 0x143fd706) / 0x6d397025) * 0x4b9238f6;
          bVar16 = 0x714b8da8 < uVar20;
          bVar17 = uVar20 == 0x714b8da9;
          iVar18 = -0x7787f037;
          iVar22 = 0x520178b;
        }
        else {
          if (local_194 < -0x80816e9) {
            if (local_194 == -0xabf339d) {
              uVar20 = DAT_004b2348 & DAT_004b234c;
              local_141 = _objc_msgSend(local_140,local_f8,
                                        &PTR____CFConstantStringClassReference_004b05d0);
              _objc_release(local_140);
              _objc_release(local_138);
              _objc_release(local_130);
              _objc_release(local_128);
              bVar17 = 0x9bccd146 < (uVar20 | 0x7ce10d18) + 0x285433e1;
              iVar22 = -0x2332d45d;
              param_2 = extraout_x1_09;
LAB_0023ba04:
              auVar10._8_8_ = param_2;
              auVar10._0_8_ = local_138;
              auVar25._8_8_ = param_2;
              auVar25._0_8_ = local_138;
              iVar18 = -0xabf339d;
              if (bVar17) {
                iVar18 = iVar22;
                auVar25 = auVar10;
              }
              goto LAB_0023c868;
            }
            if (local_194 == -0x96c556f) {
              *local_1a0 = 0x1f6f5893;
            }
            goto LAB_0023a660;
          }
          if (local_194 == -0x80816e9) {
            *local_1a0 = -0x1b6be71d;
            goto LAB_0023a660;
          }
          if (local_194 != -0x650e54e) goto LAB_0023a660;
          uVar20 = ((DAT_004b22a0 - DAT_004b22a4) * -0x3b3c64e5 | 0xb10236e7U) * -0x77d9395f;
          bVar16 = 0x686035f2 < uVar20;
          bVar17 = uVar20 == 0x686035f3;
          iVar18 = 0x7ee55633;
          iVar22 = 0xbf6d0f3;
        }
LAB_0023c680:
        if (!bVar16 || bVar17) {
          iVar18 = iVar22;
        }
      }
    }
LAB_0023c868:
    param_2 = auVar25._8_8_;
    local_138 = auVar25._0_8_;
    *local_1a0 = iVar18;
    goto LAB_0023a660;
  }
  if (0x45b17677 < local_194) {
    if (local_194 < 0x62ac9411) {
      if (local_194 < 0x546b51f3) {
        if (local_194 < 0x46e05648) {
          if (local_194 < 0x465f3631) {
            if (local_194 == 0x45b17678) {
              *local_1a0 = 0x39a19e6d;
            }
            else if (local_194 == 0x462b1c5b) {
              DAT_004b058f = local_77;
              *local_1a0 = 0x5c2dc7d1;
            }
          }
          else {
            if (local_194 == 0x46b65fd0) {
              bVar17 = (uint)((ulong)((DAT_004b2300 & DAT_004b2304 & 0x3419a9a3) + 0x64b9891e) *
                              0x223da7af >> 0x3c) == 0x2e4abf3c;
              iVar22 = -0x3bef2243;
              iVar18 = 0x7a0c4dc0;
              goto LAB_0023c3f4;
            }
            if (local_194 == 0x465f3631) {
              if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
              }
              return local_b8;
            }
          }
        }
        else {
          if (local_194 == 0x46e05648) {
            local_190 = local_180;
            uVar20 = (uint)((ulong)((DAT_004b22f0 ^ DAT_004b22f4 | 0x12c21147) + 0x2c7bfed) *
                            0x33c24edf >> 0x3d);
            bVar16 = 0xbf6348eb < uVar20;
            bVar17 = uVar20 == 0xbf6348ec;
            iVar18 = -0x77b0e595;
            iVar22 = 0x77cb04a5;
            goto LAB_0023c680;
          }
          if (local_194 == 0x47df48ea) {
            uVar20 = 0;
            if (DAT_004b22e4 != 0) {
              uVar20 = DAT_004b22e0 / DAT_004b22e4;
            }
            iVar18 = -0x51c4f2f1;
            if ((uVar20 + 0xbf93fbc9 & 0xa3b320ac) < 0xb2409ad6) {
              iVar18 = -0x77cfabe6;
            }
            goto LAB_0023c868;
          }
          if (local_194 == 0x49562a90) {
            *local_1a0 = 0x3e51a685;
          }
        }
      }
      else if (local_194 < 0x5a58bd1c) {
        if (local_194 == 0x546b51f3) {
          bVar17 = 0x8ba7f0c <
                   ((DAT_004b22d0 ^ DAT_004b22d4) / 0x5770f867 + 0xca575f76 & 0x82025b07);
          iVar22 = 0x559f3490;
          iVar18 = 0x5a58bd1c;
          auVar25 = auVar4;
          goto LAB_0023c7fc;
        }
        if (local_194 == 0x551f94ad) {
          *local_1a0 = -0x41f4f60c;
        }
        else if (local_194 == 0x559f3490) {
          local_e0 = local_88 + 1;
          *local_1a0 = 0x71b0df53;
        }
      }
      else if (local_194 < 0x5c2dc7d1) {
        if (local_194 == 0x5a58bd1c) {
          *local_1a0 = 0x559f3490;
        }
        else if (local_194 == 0x5b1ee5af) {
          *local_1a0 = 0x637f21a;
        }
      }
      else {
        if (local_194 == 0x5c2dc7d1) {
          DAT_004b058f = local_77;
          bVar17 = (DAT_004b22b8 * DAT_004b22bc & 0xfefffbe3U | 0xfebb9be3) == 0x23eb306c;
          iVar18 = 0x462b1c5b;
          iVar22 = -0x12a74167;
          auVar23 = auVar24;
          goto LAB_0023c864;
        }
        if (local_194 == 0x620ec2b2) {
          *local_1a0 = -0x2e8eb9c8;
        }
      }
      goto LAB_0023a660;
    }
    if (local_194 < 0x7a0c4dc0) {
      if (0x71b0df52 < local_194) {
        if (local_194 == 0x71b0df53) {
          *local_1a0 = 0x47df48ea;
        }
        else {
          if (local_194 == 0x77cb04a5) {
            local_111 = *(long *)*local_d0 == local_d8;
            bVar17 = (uint)((ulong)((uint)(DAT_004b22f8 * DAT_004b22fc) >> 4) * 0x987de39 >> 0x37)
                     == 0x3b91455a;
            iVar22 = -0x77b0e595;
            iVar18 = -0x388c78b8;
LAB_0023c3f4:
            auVar12._8_8_ = param_2;
            auVar12._0_8_ = local_138;
            auVar25._8_8_ = param_2;
            auVar25._0_8_ = local_138;
            if (bVar17) {
              iVar18 = iVar22;
              auVar25 = auVar12;
            }
            goto LAB_0023c868;
          }
          if (local_194 == 0x7817d034) {
            _objc_msgSend(local_a8,local_c0,local_88,local_90,0x10);
            *local_1a0 = 0x317083b7;
            param_2 = extraout_x1_05;
          }
        }
        goto LAB_0023a660;
      }
      if (local_194 == 0x62ac9411) {
        uVar20 = 0;
        if (DAT_004b231c != 0) {
          uVar20 = DAT_004b2318 / DAT_004b231c;
        }
        bVar17 = 0x87cbfdcf <
                 0x77fff20dU - (int)((long)((ulong)(uVar20 * -0x2ca22531) * 0x90bc5d7b) >> 0x3f);
        iVar22 = 0x62ac9411;
        iVar18 = -0xe93d785;
        auVar25 = auVar5;
        goto LAB_0023c7fc;
      }
      if (local_194 == 0x664ea404) {
        *local_1a0 = -0x152bccbf;
        goto LAB_0023a660;
      }
      if (local_194 != 0x69776408) goto LAB_0023a660;
      uVar20 = 0;
      if (DAT_004b2324 != 0) {
        uVar20 = DAT_004b2320 / DAT_004b2324;
      }
      bVar17 = 0x1cb169b8 < ((uVar20 | 0x9cae045a) / 0x46704655) * -0x3fea939a;
      iVar18 = 0x7b41d7cb;
      iVar22 = 0x449aa330;
    }
    else {
      if (local_194 < 0x7c6e4110) {
        if (local_194 == 0x7a0c4dc0) {
          uVar20 = DAT_004b2308 - DAT_004b230c;
          _objc_enumerationMutation(local_a8);
          auVar23._8_8_ = extraout_x1_17;
          auVar23._0_8_ = local_168;
          bVar17 = (int)((long)((ulong)uVar20 * 0xc744aad1) >> 0x3f) == -0xf4efe0;
          iVar18 = -0x3bef2243;
          iVar22 = 0x620ec2b2;
          goto LAB_0023c864;
        }
        if (local_194 == 0x7ab36e00) {
          *local_1a0 = -0x650e54e;
        }
        else if (local_194 == 0x7b41d7cb) {
          _objc_release(local_130,param_2);
          *local_1a0 = 0x449aa330;
          param_2 = extraout_x1_07;
        }
        goto LAB_0023a660;
      }
      if (0x7eb602a5 < local_194) {
        if (local_194 == 0x7eb602a6) {
          bVar17 = 0xdafece1 < (DAT_004b2350 + DAT_004b2354 + 0xbe77c8efU ^ 0x1400081 | 0x1698fd7e);
          iVar18 = -0x20e9eeac;
          iVar22 = -0x45f46b75;
          goto LAB_0023c538;
        }
        if (local_194 == 0x7ee55633) {
          DAT_004b058e = local_76 ^ 0x4b;
          *local_1a0 = 0xbf6d0f3;
        }
        goto LAB_0023a660;
      }
      if (local_194 != 0x7c6e4110) {
        if (local_194 == 0x7c99b9d5) {
          _objc_msgSend(local_a0,local_100,local_120);
          local_150 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_1a8,local_108,local_150);
          _objc_msgSend(local_b8,local_110,local_120);
          *local_1a0 = 0x7eb602a6;
          param_2 = extraout_x1_00;
        }
        goto LAB_0023a660;
      }
      bVar17 = 0xf4f78e10 < ((DAT_004b2370 | DAT_004b2374) ^ 0x1001ff8c) * 0x60ce809e + 0xb1972756;
      iVar18 = -0x31fd3a25;
      iVar22 = -0x4bb3f20;
    }
LAB_0023c538:
    auVar13._8_8_ = param_2;
    auVar13._0_8_ = local_138;
    auVar25._8_8_ = param_2;
    auVar25._0_8_ = local_138;
    if (bVar17) {
      iVar18 = iVar22;
      auVar25 = auVar13;
    }
    goto LAB_0023c868;
  }
  if (local_194 < 0x32cf3c55) {
    if (local_194 < 0x27730409) {
      if (0x1f6f5892 < local_194) {
        if (local_194 == 0x1f6f5893) {
          _objc_msgSend(local_138,local_f0);
          auVar23 = _objc_retainAutoreleasedReturnValue();
          param_2 = auVar23._8_8_;
          local_140 = auVar23._0_8_;
          *local_1a0 = 0x3ebfd803;
        }
        else if (local_194 == 0x21914260) {
          *local_1a0 = 0x3d3b8b7a;
        }
        else if (local_194 == 0x23cc71e2) {
          local_169 = local_168 == 0;
          uVar20 = (uint)((ulong)(((DAT_004b2398 | DAT_004b239c) & 0xfa3391e9) + 0x3e56d0b0) *
                          0x2d84bbb5 >> 0x3d);
          bVar16 = 0xc34b1c6b < uVar20;
          bVar17 = uVar20 == 0xc34b1c6c;
          iVar18 = -0x346e9688;
          iVar22 = -0x421bfdcc;
          goto LAB_0023c680;
        }
        goto LAB_0023a660;
      }
      if (local_194 != 0x17df5cda) {
        if (local_194 == 0x1b02aae9) {
          local_75 = local_74 == 0;
          iVar18 = 0x1b02aae9;
          if (((uint)(DAT_004b2278 * DAT_004b227c) / 0x4cda8a83 & 1) < 0x5486694c) {
            iVar18 = 0x551f94ad;
          }
          goto LAB_0023c868;
        }
        if (local_194 == 0x1f507ca6) {
          *local_1a0 = 0x1b02aae9;
        }
        goto LAB_0023a660;
      }
      uVar20 = 0;
      if (DAT_004b233c != 0) {
        uVar20 = DAT_004b2338 / DAT_004b233c;
      }
      _objc_msgSend(local_120,local_e8);
      auVar25 = _objc_retainAutoreleasedReturnValue();
      bVar17 = 0x9680f5fe < (uVar20 + 0xebd7848 & 0xe8e2f5ed);
      iVar22 = 0x17df5cda;
      iVar18 = -0x96c556f;
    }
    else {
      if (0x307543ac < local_194) {
        if (local_194 < 0x31b3c289) {
          if (local_194 == 0x307543ad) {
            *local_1a0 = 0x7c99b9d5;
          }
          else if (local_194 == 0x317083b7) {
            uVar20 = DAT_004b2388 | DAT_004b238c;
            auVar23 = _objc_msgSend(local_a8,local_c0,local_88,local_90,0x10);
            bVar17 = (uVar20 & 0x44218021 | 0x40218001) == 0x63c92587;
            iVar18 = 0x317083b7;
            iVar22 = -0x47c95719;
            goto LAB_0023c864;
          }
        }
        else if (local_194 == 0x31b3c289) {
LAB_0023b894:
          *local_1a0 = -0x6bd5339d;
        }
        else if (local_194 == 0x31b7061d) {
          *local_1a0 = 0x3900bf7a;
        }
        goto LAB_0023a660;
      }
      if (local_194 != 0x27730409) {
        if (local_194 == 0x2c22e421) {
          DAT_004d1894 = 1;
          local_80 = (undefined8 *)(puVar21 + -0x10);
          local_88 = (undefined8 *)(puVar21 + -0x50);
          puVar21 = puVar21 + -0xd0;
          local_90 = puVar21;
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
          local_98 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_98,PTR_s_maskPath_0048a5b8);
          auVar23 = _objc_retainAutoreleasedReturnValue();
          param_2 = auVar23._8_8_;
          local_a0 = auVar23._0_8_;
          *local_1a0 = 0x31b7061d;
        }
        else if (local_194 == 0x2d6833df) {
          _objc_msgSend(local_120,local_e8);
          _objc_retainAutoreleasedReturnValue();
          *local_1a0 = 0x17df5cda;
          param_2 = extraout_x1_06;
        }
        goto LAB_0023a660;
      }
      uVar20 = 0;
      if (DAT_004b2394 != 0) {
        uVar20 = DAT_004b2390 / DAT_004b2394;
      }
      bVar17 = 0x9c15ab12 < (uVar20 & 0x3f24c42d) * 0x3088248a;
      iVar22 = -0x346e9688;
      iVar18 = 0x23cc71e2;
      auVar25 = auVar6;
    }
  }
  else {
    if (local_194 < 0x3d3b8b7a) {
      if (local_194 < 0x3823b919) {
        if (local_194 == 0x32cf3c55) goto LAB_0023b0ec;
        if (local_194 == 0x33f826bd) {
          _objc_release(local_a8,param_2);
          _objc_release(local_b0);
          _objc_release(local_a0);
          *local_1a0 = 0x4085c4bd;
          param_2 = extraout_x1_14;
        }
        else if (local_194 == 0x37b94890) {
          DAT_004b0584 = DAT_004b0580 ^ 0x37;
          DAT_004b0585 = DAT_004b0581 ^ 0xcf;
          DAT_004b0586 = DAT_004b0582 ^ 0x36;
          DAT_004b0587 = DAT_004b0583 ^ 0xc5;
          DAT_004b058c = DAT_004b0588 ^ 0x8d;
          DAT_004b058d = DAT_004b0589 ^ 0x7d;
          local_76 = DAT_004b058a;
          *local_1a0 = 0x7ab36e00;
        }
      }
      else if (local_194 == 0x3823b919) {
        *local_1a0 = -0x593eeb70;
        local_178 = local_c8;
      }
      else {
        if (local_194 == 0x3900bf7a) {
          _objc_release(local_98,param_2);
          _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
          uVar19 = _objc_retainAutoreleasedReturnValue();
          *local_80 = 0;
          _objc_msgSend(uVar19,PTR_s_contentsOfDirectoryAtPath_error__0048b050,local_a0);
          local_a8 = _objc_retainAutoreleasedReturnValue();
          local_b0 = *local_80;
          _objc_retain();
          _objc_release(uVar19);
          _objc_msgSend(PTR__OBJC_CLASS___NSMutableArray_0048ca60,PTR_s_array_00489b98);
          local_b8 = _objc_retainAutoreleasedReturnValue();
          puVar15 = local_88;
          local_88[1] = 0;
          *puVar15 = 0;
          puVar15[3] = 0;
          puVar15[2] = 0;
          puVar15[5] = 0;
          puVar15[4] = 0;
          puVar15[7] = 0;
          puVar15[6] = 0;
          _objc_retain(local_a8);
          local_c0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
          auVar24 = _objc_msgSend(local_a8,PTR_s_countByEnumeratingWithState_obje_00489c48,local_88,
                                  local_90,0x10);
          auVar23._8_8_ = auVar24._8_8_;
          auVar23._0_8_ = local_168;
          local_c8 = auVar24._0_8_;
          bVar17 = local_c8 == 0;
          iVar18 = 0x31b3c289;
          iVar22 = -0x114a9a14;
          goto LAB_0023c864;
        }
        if (local_194 == 0x39a19e6d) {
          _objc_release(local_128,param_2);
          *local_1a0 = 0x307543ad;
          param_2 = extraout_x1_03;
        }
      }
      goto LAB_0023a660;
    }
    if (local_194 < 0x4085c4bd) {
      if (local_194 == 0x3d3b8b7a) {
        uVar20 = 0;
        if (DAT_004b22b4 != 0) {
          uVar20 = DAT_004b22b0 / DAT_004b22b4;
        }
        iVar18 = 0x462b1c5b;
        if (uVar20 != 0x366f4ee) {
          iVar18 = 0x5c2dc7d1;
        }
        goto LAB_0023c868;
      }
      if (local_194 == 0x3e51a685) {
        bVar17 = ((uint)(DAT_004b2360 - DAT_004b2364) / 0x44756ddc & 2) * -0x4466c883 == 0x302b501d;
        iVar18 = -0x7c5dc1bb;
        iVar22 = -0x16c447e7;
        goto LAB_0023c4dc;
      }
      if (local_194 == 0x3ebfd803) {
        bVar17 = 0xbc9149cf < (DAT_004b2340 ^ DAT_004b2344 | 0x7d7d4447) * -0x6363c716 + 0x81fda942;
        iVar22 = 0x8f52aa4;
        goto LAB_0023ba04;
      }
      goto LAB_0023a660;
    }
    if (0x42ae1dbe < local_194) {
      if (local_194 == 0x42ae1dbf) {
        iVar18 = _objc_msgSend(local_130,local_f8,&PTR____CFConstantStringClassReference_004b05f0);
        bVar17 = iVar18 == 0;
        iVar22 = -0x2f0a29a8;
        iVar18 = 0x69776408;
        param_2 = extraout_x1_12;
        goto LAB_0023c3f4;
      }
      if (local_194 == 0x449aa330) {
        uVar20 = 0;
        if (DAT_004b232c != 0) {
          uVar20 = DAT_004b2328 / DAT_004b232c;
        }
        uVar20 = (uVar20 & 0xc34c51bc) + 0xfc8fc934;
        _objc_release(local_130,param_2);
        bVar16 = 0x54b2be1f < uVar20;
        bVar17 = uVar20 == 0x54b2be20;
        iVar22 = 0x7b41d7cb;
        iVar18 = 0x45b17678;
        param_2 = extraout_x1_08;
        goto LAB_0023be98;
      }
      goto LAB_0023a660;
    }
    if (local_194 != 0x4085c4bd) {
      if (local_194 == 0x4293dbb0) {
        _objc_release(local_a8,param_2);
        _objc_msgSend(local_b8,PTR_s_sortUsingComparator__0048b368,
                      &PTR___NSConcreteGlobalBlock_00480848);
        param_2 = extraout_x1;
        goto LAB_0023b894;
      }
      goto LAB_0023a660;
    }
    uVar20 = DAT_004b23c8 | DAT_004b23cc;
    _objc_release(local_a8,param_2);
    _objc_release(local_b0);
    _objc_release(local_a0);
    auVar25._8_8_ = extraout_x1_11;
    auVar25._0_8_ = local_138;
    bVar17 = 0x5a9a61b5 < (uVar20 * -0x576de725 + 0xa2bd5730) / 0x605eb471;
    iVar22 = 0x33f826bd;
    iVar18 = 0x13f886fd;
  }
LAB_0023c7fc:
  if (bVar17) {
    iVar18 = iVar22;
  }
  goto LAB_0023c868;
}



// ----- -[BubbleBoxMgr fetchCards] @ 0023cb48 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::fetchCards(ID param_1,SEL param_2)

{
  uint uVar1;
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
  undefined8 *puVar35;
  bool bVar36;
  bool bVar37;
  int iVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  SEL extraout_x1_05;
  SEL extraout_x1_06;
  undefined8 extraout_x1_07;
  SEL extraout_x1_08;
  undefined8 extraout_x1_09;
  SEL extraout_x1_10;
  SEL extraout_x1_11;
  SEL extraout_x1_12;
  SEL extraout_x1_13;
  SEL extraout_x1_14;
  SEL extraout_x1_15;
  int iVar41;
  undefined1 *puVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_1a0 [8];
  int *local_198;
  int local_18c;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  char local_161;
  long local_160;
  char local_151;
  long local_150;
  char local_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  char local_111;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  long *local_e8;
  long local_e0;
  long *local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_c0;
  ID local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  byte local_76;
  char local_75;
  int local_74;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = DAT_004d189c;
  local_198 = &local_18c;
  local_18c = 0x65821cec;
  puVar42 = auStack_1a0;
LAB_0023cbf0:
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = local_c8;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = local_c8;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = local_c8;
  auVar27._8_8_ = param_2;
  auVar27._0_8_ = local_c8;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = local_c8;
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = local_c8;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_c8;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = local_c8;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_c8;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_c8;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_c8;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_c8;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_c8;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_c8;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_c8;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_c8;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_c8;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_c8;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_c8;
  auVar44._8_8_ = param_2;
  auVar44._0_8_ = local_c8;
  auVar43._8_8_ = param_2;
  auVar43._0_8_ = local_a8;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_a8;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_a8;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_a8;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_a8;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_a8;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_a8;
  auVar46._8_8_ = param_2;
  auVar46._0_8_ = local_140;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_140;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_140;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_140;
  iVar38 = 0x4d399a31;
  if (local_18c < 0x5163f37) {
    if (-0x2589f3f7 < local_18c) {
      if (local_18c < -0xf5c147a) {
        if (local_18c < -0x1a0be7c0) {
          if (local_18c < -0x1e40e04a) {
            if (local_18c == -0x2589f3f6) {
              *local_198 = 0x7a5d602e;
              goto LAB_0023cbf0;
            }
            if (local_18c == -0x244a04d2) {
              DAT_004b0584 = DAT_004b0580 ^ 0x37;
              DAT_004b0585 = DAT_004b0581 ^ 0xcf;
              *local_198 = -0x1c1fc753;
              goto LAB_0023cbf0;
            }
            if (local_18c != -0x1f76990c) goto LAB_0023cbf0;
            iVar38 = DAT_004b2448 - DAT_004b244c;
            local_b0 = *local_80;
            _objc_retain(local_b0,param_2);
            _objc_release(local_a0);
            _objc_msgSend(PTR__OBJC_CLASS___NSMutableArray_0048ca60,PTR_s_array_00489b98);
            auVar46 = _objc_retainAutoreleasedReturnValue();
            puVar35 = local_88;
            param_2 = auVar46._8_8_;
            local_b8 = auVar46._0_8_;
            local_88[1] = 0;
            *puVar35 = 0;
            puVar35[3] = 0;
            puVar35[2] = 0;
            puVar35[5] = 0;
            puVar35[4] = 0;
            puVar35[7] = 0;
            puVar35[6] = 0;
            bVar37 = 0xd7710bd7 < iVar38 * -0x54a5eb33 + 0x17a45d41U;
            iVar41 = 0x52b0f815;
            iVar38 = -0x859b6a5;
LAB_0023ea20:
            auVar24._8_8_ = param_2;
            auVar24._0_8_ = local_c8;
            auVar44._8_8_ = param_2;
            auVar44._0_8_ = local_c8;
            if (bVar37) {
              iVar38 = iVar41;
              auVar44 = auVar24;
            }
          }
          else {
            if (local_18c == -0x1e40e04a) {
              _objc_msgSend(local_140,local_108,&PTR____CFConstantStringClassReference_004b0630);
              *local_198 = -0x26a7aecb;
              param_2 = extraout_x1_11;
              goto LAB_0023cbf0;
            }
            if (local_18c == -0x1c1fc753) {
              DAT_004b0584 = DAT_004b0580 ^ 0x37;
              DAT_004b0585 = DAT_004b0581 ^ 0xcf;
              local_76 = DAT_004b0582 ^ 0x36;
              *local_198 = -0x31d4a768;
              goto LAB_0023cbf0;
            }
            if (local_18c != -0x1b323354) goto LAB_0023cbf0;
            bVar37 = (DAT_004b2420 + DAT_004b2424 | 0x19b6dd36U) == 0x271bc291;
            iVar38 = 0x7d19ba75;
            iVar41 = 0x142a6f3a;
LAB_0023ee5c:
            auVar44 = auVar30;
            if (bVar37) {
              iVar38 = iVar41;
              auVar44 = auVar31;
            }
          }
        }
        else {
          if (local_18c < -0x141c94a2) {
            if (local_18c == -0x1a0be7c0) {
              uVar1 = (DAT_004b2498 - DAT_004b249c ^ 0x5a3d859eU) * -0x2ef4cc3b + 0x6a97512e;
              local_111 = *(long *)*local_d0 == local_e0;
              bVar36 = 0x99eaba43 < uVar1;
              bVar37 = uVar1 == 0x99eaba44;
              iVar41 = -0x1a0be7c0;
              iVar38 = 0x689f4349;
              auVar46 = auVar3;
              goto LAB_0023ea80;
            }
            if (local_18c == -0x154d1012) {
              iVar38 = _objc_msgSend(local_138,local_100,
                                     &PTR____CFConstantStringClassReference_004b0650);
              _objc_release(local_138);
              _objc_release(local_130);
              bVar37 = iVar38 == 0;
              iVar41 = -0x837bc38;
              iVar38 = -0x36d559b9;
              param_2 = extraout_x1_14;
              goto LAB_0023ee00;
            }
            if (local_18c == -0x14ad1748) {
              uVar1 = 0;
              if (DAT_004b2504 != 0) {
                uVar1 = DAT_004b2500 / DAT_004b2504;
              }
              bVar37 = 0x32aa2840 < uVar1 * -0x654b0ee5 + 0xe2b877ca;
              iVar38 = 0x72b10c83;
              iVar41 = -0x58b751fd;
              auVar43 = auVar6;
              goto LAB_0023ebac;
            }
            goto LAB_0023cbf0;
          }
          if (-0x12657da9 < local_18c) {
            if (local_18c == -0x12657da8) {
              _objc_enumerationMutation(local_a8);
              *local_198 = 0x45fb9c8e;
              param_2 = extraout_x1_05;
            }
            else if (local_18c == -0x10b5892a) {
              *local_198 = -0x1a0be7c0;
            }
            goto LAB_0023cbf0;
          }
          if (local_18c == -0x141c94a2) {
            *local_198 = 0x259b5e77;
            goto LAB_0023cbf0;
          }
          if (local_18c != -0x13ca448f) goto LAB_0023cbf0;
          iVar38 = 0x717d35d5;
          auVar44 = auVar22;
          if (((DAT_004b2460 & DAT_004b2464) + 0xc80e31ac & 0x8364c2b6) * -0x6379c7a3 == 0xbee39dd)
          {
            iVar38 = -0x2877c16;
            auVar44 = auVar23;
          }
        }
      }
      else {
        if (local_18c < -0x837bc38) {
          if (local_18c < -0xd003e7c) {
            if (local_18c == -0xf5c147a) {
              iVar38 = DAT_004b24f8 * DAT_004b24fc;
              _objc_release(local_140);
              auVar34._8_8_ = extraout_x1_09;
              auVar34._0_8_ = local_138;
              auVar45._8_8_ = extraout_x1_09;
              auVar45._0_8_ = local_138;
              iVar41 = -0x815170f;
              if (0x2fd5a5e1 < (iVar38 * 0x78f803d6 + 0xd60a250cU) / 0x753369b8) {
                iVar41 = -0x3b05ea67;
                auVar45 = auVar34;
              }
            }
            else {
              if (local_18c != -0xf071378) {
                if (local_18c == -0xdb461cc) {
                  *local_198 = 0x10925989;
                }
                goto LAB_0023cbf0;
              }
              uVar1 = 0;
              if (DAT_004b24cc != 0) {
                uVar1 = DAT_004b24c8 / DAT_004b24cc;
              }
              local_128 = *(undefined8 *)(local_120 + local_188 * 8);
              _objc_msgSend(local_128,local_f0);
              local_130 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_130,local_f8);
              auVar45 = _objc_retainAutoreleasedReturnValue();
              iVar41 = -0xf071378;
              if ((uVar1 + 0x43586204 ^ 0x559e0b31) < 0x48170ebb) {
                iVar41 = -0x28bdd179;
              }
            }
            param_2 = auVar45._8_8_;
            local_138 = auVar45._0_8_;
            *local_198 = iVar41;
            goto LAB_0023cbf0;
          }
          if (local_18c == -0xd003e7c) {
            bVar37 = 0xf8e6cb99 < (uint)(DAT_004b24f0 + DAT_004b24f4) / 0xa2179a + 0xb15ecf33;
            iVar38 = -0xf5c147a;
            iVar41 = -0x3b05ea67;
            auVar43 = auVar7;
            goto LAB_0023ebac;
          }
          if (local_18c == -0xa553696) {
            *local_198 = 0x65751add;
          }
          else if (local_18c == -0x859b6a5) {
            *local_198 = 0x57a67336;
          }
          goto LAB_0023cbf0;
        }
        if (-0x5be226c < local_18c) {
          if (local_18c < -0x2877c16) {
            if (local_18c == -0x5be226b) {
              *local_198 = -0x3d746c27;
            }
            else if (local_18c == -0x500853f) {
              bVar37 = 0x7b0de1f3 <
                       (((DAT_004b24b0 & DAT_004b24b4) + 0x53ed272a) / 0x4139e590) * 0x754be627;
              iVar41 = 0x6daf58a5;
              iVar38 = 0x2ec247c7;
              goto LAB_0023ea20;
            }
          }
          else if (local_18c == -0x2877c16) {
            *local_198 = 0x717d35d5;
          }
          else if (local_18c == 0x184142) {
            DAT_004b0586 = local_76;
            DAT_004b0587 = DAT_004b0583 ^ 0xc5;
            DAT_004b061a = DAT_004b0610 ^ 0x54;
            DAT_004b061b = DAT_004b0611 ^ 0xf6;
            DAT_004b061c = DAT_004b0612 ^ 0x1d;
            DAT_004b061d = DAT_004b0613 ^ 0x1e;
            DAT_004b061e = DAT_004b0614 ^ 0xc9;
            DAT_004b061f = DAT_004b0615 ^ 10;
            *local_198 = -0x1b323354;
          }
          goto LAB_0023cbf0;
        }
        if (local_18c != -0x837bc38) {
          if (local_18c == -0x815170f) {
            bVar37 = local_141 == '\0';
            iVar38 = -0x837bc38;
            iVar41 = -0x14ad1748;
            goto LAB_0023ee5c;
          }
          if (local_18c == -0x60bdfc6) {
            bVar37 = 0x73ac1ad < (DAT_004b2518 & DAT_004b251c) * 0x38513381 + 0x9cb6388c;
            iVar41 = 0x60e1bc91;
            goto LAB_0023e364;
          }
          goto LAB_0023cbf0;
        }
        bVar37 = ((DAT_004b2520 * DAT_004b2524 ^ 0x1005001U) & 0xdd185001) == 0x7fa4c53e;
        iVar41 = -0x69ef3e54;
        iVar38 = 0x43c2dcbb;
LAB_0023e9c4:
        auVar44 = auVar20;
        if (!bVar37) {
          iVar38 = iVar41;
          auVar44 = auVar21;
        }
      }
      goto LAB_0023ee60;
    }
    if (local_18c < -0x43350538) {
      if (local_18c < -0x69ef3e54) {
        if (local_18c < -0x726bfa06) {
          if (local_18c == -0x7ede5df1) {
            *local_198 = 0x35c55154;
          }
          else if (local_18c == -0x76468f5e) {
            *local_198 = 0x6b061281;
          }
          else if (local_18c == -0x7367319a) {
            *local_198 = -0xd003e7c;
          }
        }
        else if (local_18c == -0x726bfa06) {
          DAT_004d189c = 1;
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
          uVar39 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar39,PTR_s_cardPath_00489540);
          uVar40 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar39);
          _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
          uVar39 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar42 + -0x10) = 0;
          _objc_msgSend(uVar39,PTR_s_contentsOfDirectoryAtPath_error__0048b050,uVar40,
                        puVar42 + -0x10);
          _objc_retainAutoreleasedReturnValue();
          *local_198 = 0x501d69b8;
          puVar42 = puVar42 + -0xd0;
          param_2 = extraout_x1_10;
        }
        else if (local_18c == -0x6f775e39) {
          uVar1 = DAT_004b2558 + DAT_004b255c;
          auVar46 = _objc_msgSend(local_a8,local_c0,local_88,local_90,0x10);
          param_2 = auVar46._8_8_;
          local_160 = auVar46._0_8_;
          iVar38 = 0x3abd3552;
          if ((uVar1 & 0x9ff4ee66) + 0xee8fd25d < 0x88091589) {
            iVar38 = -0xa553696;
          }
          *local_198 = iVar38;
        }
        else if (local_18c == -0x6d8895d4) {
          *local_198 = -0x42aa61d2;
          local_170 = local_c8;
        }
        goto LAB_0023cbf0;
      }
      if (local_18c < -0x58b751fd) {
        if (local_18c == -0x69ef3e54) {
          local_150 = local_188 + 1;
          bVar37 = (DAT_004b2528 ^ DAT_004b252c) == 0x7668dcad;
          iVar41 = -0x69ef3e54;
          iVar38 = 0x6e2a8ac5;
          goto LAB_0023ee00;
        }
        if (local_18c == -0x652f1c93) {
          *local_198 = 0x3f854fb2;
          local_178 = 0;
        }
        else if (local_18c == -0x5f00118b) {
          *local_198 = 0x4d399a31;
        }
        goto LAB_0023cbf0;
      }
      if (local_18c < -0x46f12df9) {
        if (local_18c == -0x58b751fd) {
          _objc_msgSend(local_b8,local_110,local_128);
          *local_198 = 0x72b10c83;
          param_2 = extraout_x1_04;
          goto LAB_0023cbf0;
        }
        if (local_18c != -0x571c6b07) goto LAB_0023cbf0;
        auVar44 = auVar27;
        if ((uint)((ulong)((DAT_004b2450 ^ DAT_004b2454) * 0x7c7a13f5 + 0x46de2d23) * 0xcb3d497f >>
                  0x3c) == 0x62440735) {
          iVar38 = -0x5f00118b;
          auVar44 = auVar28;
        }
      }
      else {
        if (local_18c == -0x46f12df9) {
          bVar37 = 0x6a195e7f < ((DAT_004b2470 ^ DAT_004b2474 | 0xeb475ade) ^ 0xb96cdbdd);
          iVar41 = -0x7ede5df1;
          iVar38 = 0x35c55154;
          goto LAB_0023ea20;
        }
        if (local_18c != -0x4413428f) goto LAB_0023cbf0;
        uVar1 = ((DAT_004b2550 - DAT_004b2554 | 0x18e34245U) ^ 0xaec4a4e7) + 0xe8ac0a32;
        bVar36 = 0x20ba5ea1 < uVar1;
        bVar37 = uVar1 == 0x20ba5ea2;
        iVar38 = -0x6f775e39;
        iVar41 = 0x3abd3552;
LAB_0023dc74:
        auVar44 = auVar25;
        if (!bVar36 || bVar37) {
          iVar38 = iVar41;
          auVar44 = auVar26;
        }
      }
      goto LAB_0023ee60;
    }
    if (local_18c < -0x31d4a768) {
      if (-0x3b05ea68 < local_18c) {
        if (local_18c == -0x3b05ea67) {
          _objc_release(local_140);
          *local_198 = -0xf5c147a;
          param_2 = extraout_x1_12;
        }
        else if (local_18c == -0x38e6babc) {
          *local_198 = -0x60bdfc6;
        }
        else if (local_18c == -0x36d559b9) {
          uVar1 = 0;
          if (DAT_004b24d4 != 0) {
            uVar1 = DAT_004b24d0 / DAT_004b24d4;
          }
          bVar37 = (uVar1 * 0x13da4813 ^ 0x5fcbd8b) / 0x768d048e == 0x2a19d563;
          iVar38 = 0x3616d4b8;
          iVar41 = 0x5163f37;
          goto LAB_0023ee5c;
        }
        goto LAB_0023cbf0;
      }
      if (local_18c == -0x43350538) {
        *local_198 = -0x5be226b;
        goto LAB_0023cbf0;
      }
      if (local_18c == -0x42aa61d2) {
        local_180 = local_170;
        bVar37 = 0x4a4913f2 < ((DAT_004b2480 | DAT_004b2484) + 0x292f5699 ^ 0x6fedd81d) + 0x46a1d5a7
        ;
        iVar38 = 0x227de32c;
        iVar41 = 0x10e46a84;
        auVar43 = auVar5;
        goto LAB_0023ebac;
      }
      if (local_18c != -0x3d746c27) goto LAB_0023cbf0;
      bVar37 = local_75 == '\0';
      iVar41 = 0x4df5021f;
      iVar38 = 0x27e5d601;
      goto LAB_0023ee00;
    }
    if (local_18c < -0x29121182) {
      if (local_18c == -0x31d4a768) {
        *local_198 = 0x184142;
      }
      else if (local_18c == -0x2f11554a) {
        _objc_release(local_a8);
        _objc_msgSend(local_b8,PTR_s_sortUsingComparator__0048b368,
                      &PTR___NSConcreteGlobalBlock_00480868);
        *local_198 = 0x6dd1e0f7;
        param_2 = extraout_x1_15;
      }
      else if (local_18c == -0x2d934c43) {
        *local_198 = 0x649299a1;
      }
      goto LAB_0023cbf0;
    }
    if (-0x26a7aecc < local_18c) {
      if (local_18c == -0x26a7aecb) {
        local_141 = _objc_msgSend(local_140,local_108,
                                  &PTR____CFConstantStringClassReference_004b0630);
        *local_198 = -0x7367319a;
        param_2 = extraout_x1_06;
      }
      else if (local_18c == -0x261c0565) {
        *local_198 = -0x46f12df9;
      }
      goto LAB_0023cbf0;
    }
    if (local_18c != -0x29121182) {
      if (local_18c == -0x28bdd179) {
        *local_198 = -0x154d1012;
      }
      goto LAB_0023cbf0;
    }
    uVar1 = (DAT_004b24a0 - DAT_004b24a4 | 0xf3d29fbbU) + 0xbb877237;
    bVar36 = 0xbb8bd643 < uVar1;
    bVar37 = uVar1 == 0xbb8bd644;
    iVar41 = 0x45fb9c8e;
    iVar38 = -0x12657da8;
    auVar46 = auVar2;
  }
  else {
    if (0x45fb9c8d < local_18c) {
      if (0x66c3377c < local_18c) {
        if (local_18c < 0x6e2a8ac5) {
          if (local_18c < 0x6b71abe4) {
            if (local_18c == 0x66c3377d) {
              *local_198 = -0x500853f;
            }
            else {
              if (local_18c == 0x689f4349) {
                bVar37 = local_111 == '\0';
                iVar38 = 0x2c003293;
                iVar41 = -0x29121182;
                goto LAB_0023ee5c;
              }
              if (local_18c == 0x6b061281) {
                _objc_release(local_a8);
                _objc_release(local_b0);
                _objc_release(local_98);
                *local_198 = 0x52455444;
                param_2 = extraout_x1_00;
              }
            }
          }
          else if (local_18c == 0x6b71abe4) {
            *local_198 = -0x13ca448f;
          }
          else if (local_18c == 0x6daf58a5) {
            *local_198 = 0x2ec247c7;
          }
          else if (local_18c == 0x6dd1e0f7) {
            _objc_release(local_a8);
            _objc_msgSend(local_b8,PTR_s_sortUsingComparator__0048b368,
                          &PTR___NSConcreteGlobalBlock_00480868);
            *local_198 = -0x76468f5e;
            param_2 = extraout_x1_01;
          }
          goto LAB_0023cbf0;
        }
        if (local_18c < 0x73e76997) {
          if (local_18c == 0x6e2a8ac5) {
            *local_198 = 0x7feed17f;
            goto LAB_0023cbf0;
          }
          if (local_18c == 0x717d35d5) {
            uVar1 = 0;
            if (DAT_004b246c != 0) {
              uVar1 = DAT_004b2468 / DAT_004b246c;
            }
            local_e0 = *local_d8;
            local_e8 = local_88 + 1;
            iVar38 = -0x261c0565;
            auVar44 = auVar16;
            if (0xe25430a2 < (uVar1 + 0xe2161fed) / 0x3c9ade92) {
              iVar38 = -0x2877c16;
              auVar44 = auVar17;
            }
            goto LAB_0023ee60;
          }
          if (local_18c != 0x72b10c83) goto LAB_0023cbf0;
          uVar1 = DAT_004b2508 | DAT_004b250c;
          _objc_msgSend(local_b8,local_110,local_128);
          bVar37 = (uVar1 * 0x6269efe2) / 0xa53e31e == 0x5249a177;
          iVar41 = 0x72b10c83;
          iVar38 = -0x2d934c43;
          param_2 = extraout_x1_02;
        }
        else {
          if (0x7d19ba74 < local_18c) {
            if (local_18c == 0x7d19ba75) {
              DAT_004b0620 = DAT_004b0616 ^ 0x44;
              DAT_004b0621 = DAT_004b0617 ^ 0x4c;
              DAT_004b0622 = DAT_004b0618 ^ 0x7b;
              DAT_004b0623 = DAT_004b0619 ^ 0xd3;
              bVar37 = ((DAT_004b2428 | DAT_004b242c | 0x1a57975e) + 0x6cf174fb & 0xa93034a3) ==
                       0x75350cf5;
              iVar41 = 0x142a6f3a;
              iVar38 = 0x73e76997;
              goto LAB_0023ee00;
            }
            if (local_18c == 0x7feed17f) {
              bVar37 = 0xa73c2d17 < ((DAT_004b2530 & DAT_004b2534) + 0x8d043a9b & 0x683fc8f0);
              iVar41 = 0x19b663b2;
              iVar38 = 0x6f380d8;
              goto LAB_0023ea20;
            }
            goto LAB_0023cbf0;
          }
          if (local_18c == 0x73e76997) {
            *local_198 = 0x4df5021f;
            goto LAB_0023cbf0;
          }
          if (local_18c != 0x7a5d602e) goto LAB_0023cbf0;
          bVar37 = ((DAT_004b2540 + DAT_004b2544) * -0x2a47ce83 | 0xbb1358a2U) == 0x5eb016f5;
          iVar41 = 0x203648c3;
          iVar38 = 0x129abe50;
        }
LAB_0023ee00:
        auVar33._8_8_ = param_2;
        auVar33._0_8_ = local_c8;
        auVar44._8_8_ = param_2;
        auVar44._0_8_ = local_c8;
        if (bVar37) {
          iVar38 = iVar41;
          auVar44 = auVar33;
        }
        goto LAB_0023ee60;
      }
      if (0x57a67335 < local_18c) {
        if (local_18c < 0x649299a1) {
          if (local_18c != 0x57a67336) {
            if (local_18c == 0x5e351f8e) {
              bVar37 = 0x287d4b7e <
                       ((DAT_004b2570 & DAT_004b2574 | 0x94caa977) ^ 0x617d0e63) + 0xdf3961e6;
              iVar38 = -0x2f11554a;
              iVar41 = 0x6dd1e0f7;
              goto LAB_0023ebac;
            }
            if (local_18c == 0x60e1bc91) {
              *local_198 = -0x837bc38;
            }
            goto LAB_0023cbf0;
          }
          _objc_retain(local_a8,param_2);
          local_c0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
          auVar44 = _objc_msgSend(local_a8,PTR_s_countByEnumeratingWithState_obje_00489c48,local_88,
                                  local_90,0x10);
          iVar38 = 0x5e351f8e;
          if (auVar44._0_8_ != 0) {
            iVar38 = -0x571c6b07;
          }
        }
        else {
          if (local_18c != 0x649299a1) {
            if (local_18c == 0x65751add) {
              local_161 = local_160 == 0;
              *local_198 = 0x3a82dda7;
            }
            else if (local_18c == 0x65821cec) {
              local_75 = local_74 == 0;
              *local_198 = 0x1b4c8f07;
            }
            goto LAB_0023cbf0;
          }
          bVar37 = 0x9fa7b7dc <
                   (((DAT_004b2510 | DAT_004b2514) / 0x212b47b4 | 0x7b917818) ^ 0x35b851ed);
          iVar41 = -0x38e6babc;
LAB_0023e364:
          iVar38 = -0x60bdfc6;
          auVar44 = auVar18;
          if (bVar37) {
            iVar38 = iVar41;
            auVar44 = auVar19;
          }
        }
        goto LAB_0023ee60;
      }
      if (local_18c < 0x501d69b8) {
        if (local_18c == 0x45fb9c8e) {
          uVar1 = 0;
          if (DAT_004b24ac != 0) {
            uVar1 = DAT_004b24a8 / DAT_004b24ac;
          }
          _objc_enumerationMutation(local_a8);
          auVar43._8_8_ = extraout_x1_07;
          auVar43._0_8_ = local_a8;
          bVar37 = 0x4d265cd1 < (uVar1 & 0x7edf75b ^ 0xfdda1e9e) + 0x6eb21b11;
          iVar38 = 0x45fb9c8e;
          iVar41 = 0x66c3377d;
          goto LAB_0023ebac;
        }
        if (local_18c == 0x4d399a31) {
          local_d0 = local_88 + 2;
          local_d8 = (long *)*local_d0;
          auVar44 = auVar14;
          if (((DAT_004b2458 & DAT_004b245c) / 0x7b9ad075) * -0x60d2a588 < 0x57c766fa) {
            iVar38 = 0x6b71abe4;
            auVar44 = auVar15;
          }
          goto LAB_0023ee60;
        }
        if (local_18c == 0x4df5021f) {
          uVar1 = ((DAT_004b2430 & DAT_004b2434) + 0x1ebc6393) / 0x6f50bf73;
          bVar36 = uVar1 < 0x3c17f8b6;
          bVar37 = uVar1 == 0x3c17f8b5;
          iVar41 = -0x726bfa06;
          iVar38 = 0x501d69b8;
          goto LAB_0023ea80;
        }
        goto LAB_0023cbf0;
      }
      if (0x52b0f814 < local_18c) {
        if (local_18c == 0x52b0f815) {
          _objc_retain(*local_80,param_2);
          _objc_release(local_a0);
          _objc_msgSend(PTR__OBJC_CLASS___NSMutableArray_0048ca60,PTR_s_array_00489b98);
          _objc_retainAutoreleasedReturnValue();
          puVar35 = local_88;
          local_88[1] = 0;
          *puVar35 = 0;
          puVar35[3] = 0;
          puVar35[2] = 0;
          puVar35[5] = 0;
          puVar35[4] = 0;
          puVar35[7] = 0;
          puVar35[6] = 0;
          *local_198 = -0x1f76990c;
          param_2 = extraout_x1_03;
        }
        else if (local_18c == 0x57018bf1) {
          *local_198 = 0x1608f246;
        }
        goto LAB_0023cbf0;
      }
      if (local_18c != 0x501d69b8) {
        if (local_18c == 0x52455444) {
          _objc_autoreleaseReturnValue(local_b8);
          if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
          }
          return local_b8;
        }
        goto LAB_0023cbf0;
      }
      uVar1 = 0;
      if (DAT_004b243c != 0) {
        uVar1 = DAT_004b2438 / DAT_004b243c;
      }
      DAT_004d189c = 1;
      local_80 = (undefined8 *)(puVar42 + -0x10);
      local_88 = (undefined8 *)(puVar42 + -0x50);
      puVar42 = puVar42 + -0xd0;
      local_90 = puVar42;
      _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
      uVar39 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar39,PTR_s_cardPath_00489540);
      local_98 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar39);
      _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
      uVar39 = _objc_retainAutoreleasedReturnValue();
      local_a0 = uVar39;
      *local_80 = 0;
      _objc_msgSend(uVar39,PTR_s_contentsOfDirectoryAtPath_error__0048b050,local_98);
      auVar43 = _objc_retainAutoreleasedReturnValue();
      bVar37 = 0x95f727a2 < ((uVar1 & 0x1d237b4) + 0x1ff9de40 | 0xf8e95191);
      iVar38 = -0x726bfa06;
      iVar41 = -0x141c94a2;
LAB_0023ebac:
      auVar32._8_8_ = auVar43._8_8_;
      auVar32._0_8_ = local_c8;
      auVar44._8_8_ = auVar43._8_8_;
      auVar44._0_8_ = local_c8;
      local_a8 = auVar43._0_8_;
      if (bVar37) {
        iVar38 = iVar41;
        auVar44 = auVar32;
      }
      goto LAB_0023ee60;
    }
    if (local_18c < 0x259b5e77) {
      if (0x1608f245 < local_18c) {
        if (local_18c < 0x203648c3) {
          if (local_18c == 0x1608f246) {
            iVar38 = 0x5e351f8e;
            if (local_161 == '\0') {
              iVar38 = -0x42aa61d2;
            }
            *local_198 = iVar38;
            local_170 = local_160;
          }
          else if (local_18c == 0x19b663b2) {
            *local_198 = 0x6f380d8;
          }
          else if (local_18c == 0x1b4c8f07) {
            iVar38 = -0x43350538;
            if (DAT_004b2400 * DAT_004b2404 + 0x7c8d4171U < 0x8ca7d764) {
              iVar38 = -0x5be226b;
              auVar44 = auVar11;
            }
            goto LAB_0023ee60;
          }
        }
        else if (local_18c < 0x227de32c) {
          if (local_18c == 0x203648c3) {
            *local_198 = 0x129abe50;
          }
          else if (local_18c == 0x21811556) {
            _objc_msgSend(*(undefined8 *)(local_120 + local_188 * 8),local_f0);
            uVar39 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar39,local_f8);
            _objc_retainAutoreleasedReturnValue();
            *local_198 = -0xf071378;
            param_2 = extraout_x1;
          }
        }
        else {
          if (local_18c == 0x227de32c) {
            uVar1 = 0;
            if (DAT_004b248c != 0) {
              uVar1 = DAT_004b2488 / DAT_004b248c;
            }
            local_f8 = PTR_s_lowercaseString_0048a1f0;
            local_f0 = PTR_s_pathExtension_0048a1e8;
            local_108 = PTR_s_hasSuffix__0048aba8;
            local_100 = PTR_s_isEqualToString__00489d70;
            local_110 = PTR_s_addObject__00489ba8;
            bVar37 = (uVar1 & 0x1b644fdd) * 0x67ae78da == 0x69c8a383;
            iVar41 = 0x10e46a84;
            iVar38 = -0x652f1c93;
            goto LAB_0023ee00;
          }
          if (local_18c == 0x2289899d) {
            *local_198 = 0x2c003293;
          }
        }
        goto LAB_0023cbf0;
      }
      if (0x10e46a83 < local_18c) {
        if (local_18c == 0x10e46a84) {
          *local_198 = 0x227de32c;
        }
        else {
          if (local_18c == 0x129abe50) {
            bVar37 = 0x92f5cc6c <
                     ((DAT_004b2548 | DAT_004b254c) * 0x5d2b817e & 0x8b5f8862) + 0xf6d75d67;
            iVar41 = 0x203648c3;
            iVar38 = 0x41c55cbf;
            goto LAB_0023ea20;
          }
          if (local_18c == 0x142a6f3a) {
            DAT_004b0620 = DAT_004b0616 ^ 0x44;
            DAT_004b0621 = DAT_004b0617 ^ 0x4c;
            DAT_004b0622 = DAT_004b0618 ^ 0x7b;
            DAT_004b0623 = DAT_004b0619 ^ 0xd3;
            *local_198 = 0x7d19ba75;
          }
        }
        goto LAB_0023cbf0;
      }
      if (local_18c == 0x5163f37) {
        _objc_msgSend(local_128,local_f8);
        _objc_retainAutoreleasedReturnValue();
        *local_198 = 0x3616d4b8;
        param_2 = extraout_x1_08;
        goto LAB_0023cbf0;
      }
      if (local_18c != 0x6f380d8) {
        if (local_18c == 0x10925989) {
          uVar1 = ((DAT_004b24e0 ^ DAT_004b24e4 | 0xafb62067) ^ 0xa6456db2) * -0x712971c1;
          bVar36 = 0xe6a7e8d4 < uVar1;
          bVar37 = uVar1 == 0xe6a7e8d5;
          iVar38 = -0x1e40e04a;
          iVar41 = -0x26a7aecb;
          goto LAB_0023dc74;
        }
        goto LAB_0023cbf0;
      }
      local_151 = local_150 == local_180;
      bVar37 = 0x8b20cc <
               (uint)((ulong)((DAT_004b2538 | DAT_004b253c) + 0x4967a652) * 0x7c30598b >> 0x3e) +
               0xa2ad71bd;
      iVar38 = 0x19b663b2;
      iVar41 = -0x2589f3f6;
      auVar43 = auVar8;
      goto LAB_0023ebac;
    }
    if (0x3a82dda6 < local_18c) {
      if (local_18c < 0x3f854fb2) {
        if (local_18c == 0x3a82dda7) {
          bVar37 = DAT_004b2560 * DAT_004b2564 == -0x74e5fd2a;
          iVar38 = 0x57018bf1;
          iVar41 = 0x4389b02b;
          goto LAB_0023ee5c;
        }
        if (local_18c == 0x3abd3552) {
          _objc_msgSend(local_a8,local_c0,local_88,local_90,0x10);
          *local_198 = -0x6f775e39;
          param_2 = extraout_x1_13;
        }
        else if (local_18c == 0x3d3b6f7b) {
          iVar38 = -0xf071378;
          auVar44 = auVar12;
          if ((DAT_004b24c0 | DAT_004b24c4) * 0x51de7327 + 0x1764ea0a < 0x71cd00a8) {
            iVar38 = 0x21811556;
            auVar44 = auVar13;
          }
          goto LAB_0023ee60;
        }
      }
      else if (local_18c < 0x4389b02b) {
        if (local_18c == 0x3f854fb2) {
          local_188 = local_178;
          bVar37 = false;
          iVar38 = -0x1a0be7c0;
          iVar41 = -0x10b5892a;
          auVar43 = auVar9;
          goto LAB_0023ebac;
        }
        if (local_18c == 0x41c55cbf) {
          iVar38 = -0x4413428f;
          if (local_151 == '\0') {
            iVar38 = 0x3f854fb2;
          }
          *local_198 = iVar38;
          local_178 = local_150;
        }
      }
      else if (local_18c == 0x4389b02b) {
        *local_198 = 0x57018bf1;
      }
      else if (local_18c == 0x43c2dcbb) {
        *local_198 = -0x69ef3e54;
      }
      goto LAB_0023cbf0;
    }
    if (local_18c < 0x2ec247c7) {
      if (local_18c != 0x259b5e77) {
        if (local_18c == 0x27e5d601) {
          bVar37 = (uint)((ulong)((DAT_004b2410 ^ DAT_004b2414) + 0xfcb53833) * 0x1f73caa5 >> 0x3c)
                   == 0x681bb767;
          iVar41 = -0x1c1fc753;
          iVar38 = -0x244a04d2;
          goto LAB_0023e9c4;
        }
        if (local_18c == 0x2c003293) {
          local_120 = *local_e8;
          *local_198 = 0x3d3b6f7b;
        }
        goto LAB_0023cbf0;
      }
      bVar37 = 0x7e2af882 < ((DAT_004b2440 & DAT_004b2444 | 0xd2b26147) * -0x275cfaa9) / 0x1713fb6a;
      iVar38 = -0x1f76990c;
      iVar41 = 0x52b0f815;
      auVar43 = auVar10;
      goto LAB_0023ebac;
    }
    if (local_18c == 0x2ec247c7) {
      bVar37 = 0x4a9e347d < ((DAT_004b24b8 + DAT_004b24bc) * -0x5b63c41e ^ 0x8a62984dU);
      iVar41 = 0x6daf58a5;
      iVar38 = 0x2289899d;
      goto LAB_0023ea20;
    }
    if (local_18c == 0x35c55154) {
      uVar1 = 0;
      if (DAT_004b247c != 0) {
        uVar1 = DAT_004b2478 / DAT_004b247c;
      }
      uVar1 = uVar1 / 0x12f592e2 + 0x697e2743 & 0x49680350;
      bVar36 = 0x37391661 < uVar1;
      bVar37 = uVar1 == 0x37391662;
      iVar41 = -0x7ede5df1;
      iVar38 = -0x6d8895d4;
      auVar46 = auVar4;
      goto LAB_0023ea80;
    }
    if (local_18c != 0x3616d4b8) goto LAB_0023cbf0;
    uVar1 = (DAT_004b24d8 | DAT_004b24dc) & 0x76bd79b3 | 0x36ad79b3;
    _objc_msgSend(local_128,local_f8);
    auVar46 = _objc_retainAutoreleasedReturnValue();
    bVar36 = 0x3209e79b < uVar1;
    bVar37 = uVar1 == 0x3209e79c;
    iVar41 = 0x5163f37;
    iVar38 = -0xdb461cc;
  }
LAB_0023ea80:
  auVar29._8_8_ = auVar46._8_8_;
  auVar29._0_8_ = local_c8;
  auVar44._8_8_ = auVar46._8_8_;
  auVar44._0_8_ = local_c8;
  local_140 = auVar46._0_8_;
  if (!bVar36 || bVar37) {
    iVar38 = iVar41;
    auVar44 = auVar29;
  }
LAB_0023ee60:
  param_2 = auVar44._8_8_;
  local_c8 = auVar44._0_8_;
  *local_198 = iVar38;
  goto LAB_0023cbf0;
}



// ----- -[BubbleBoxMgr basePath] @ 0023f224 -----

/* WARNING: Removing unreachable block (ram,0x0023f590) */
/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::basePath(ID param_1,SEL param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  int iVar5;
  int iVar6;
  undefined1 auVar7 [16];
  int local_8c;
  ID local_88;
  undefined8 local_80;
  undefined8 local_78;
  byte local_6b;
  byte local_6a;
  char local_69;
  int local_68;
  
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_88;
  local_8c = -0x37682fa6;
  iVar5 = local_8c;
LAB_0023f2bc:
  do {
    while( true ) {
      local_8c = iVar5;
      local_88 = auVar7._0_8_;
      iVar5 = local_8c;
      if (0xaffd7a2 < local_8c) break;
      if (local_8c < -0x33f1bc12) {
        if (local_8c < -0x5f392cd3) {
          if (local_8c == -0x6870c553) {
            iVar5 = 0x723440f3;
          }
          else if (local_8c == -0x660a0c03) {
            iVar5 = 0x86f156f;
            if (local_69 == '\0') {
              iVar5 = 0x52185c04;
            }
          }
          else if (local_8c == -0x643c80b1) {
            uVar1 = DAT_004b25f8 | DAT_004b25fc;
            DAT_004d18a4 = 1;
            _NSSearchPathForDirectoriesInDomains(9,1,1);
            local_78 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_78,PTR_s_lastObject_00489bf8);
            local_80 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_80,PTR_s_stringByAppendingPathComponent__00489550,
                          &PTR____CFConstantStringClassReference_004b0690);
            auVar7 = _objc_retainAutoreleasedReturnValue();
            iVar5 = -0x6870c553;
            if (0x34c000f8 < (uint)((ulong)((uVar1 | 0xbb0b3195) ^ 0x9e043b07) * 0x8a5af719 >> 0x3b)
               ) {
              iVar5 = -0x643c80b1;
            }
          }
        }
        else if (local_8c == -0x5f392cd3) {
          DAT_004b0682 = local_6b;
          DAT_004b0683 = DAT_004b0679 ^ 1;
          iVar5 = -0x6a24be2;
        }
        else if (local_8c == -0x58c4fdb6) {
          iVar5 = -0x169ebd6d;
        }
        else if (local_8c == -0x37682fa6) {
          iVar5 = 0xaffd7a3;
        }
      }
      else if (local_8c < -0x10cff1a0) {
        iVar5 = 0x52185c04;
        if (local_8c != -0x33f1bc12) {
          if (local_8c == -0x25066bbe) {
            local_69 = local_68 == 0;
            iVar5 = -0x660a0c03;
          }
          else {
            iVar5 = local_8c;
            if ((local_8c == -0x169ebd6d) &&
               (iVar5 = -0x5f392cd3,
               ((uint)((ulong)(DAT_004b25e0 ^ DAT_004b25e4) * 0x19e068b7 >> 0x3c) | 0xf7a44690) !=
               0x7245434d)) {
              iVar5 = -0x6a24be2;
            }
          }
        }
      }
      else if (local_8c == -0x10cff1a0) {
        DAT_004b067a = DAT_004b0670 ^ 0x3a;
        DAT_004b067b = DAT_004b0671 ^ 0xd3;
        DAT_004b067c = DAT_004b0672 ^ 0x44;
        DAT_004b067d = DAT_004b0673 ^ 0x76;
        iVar5 = 0x4ab08e4f;
      }
      else if (local_8c == -0x6a24be2) {
        DAT_004b0682 = local_6b;
        DAT_004b0683 = DAT_004b0679 ^ 1;
        bVar3 = 0x9d235a90 <
                (((DAT_004b25e8 & DAT_004b25ec) + 0xe28b77c7 | 0x5b7fc780) ^ 0x978bda5f);
        iVar5 = -0x5f392cd3;
        iVar6 = -0x33f1bc12;
LAB_0023fa60:
        if (bVar3) {
          iVar5 = iVar6;
        }
      }
      else if (local_8c == 0x86f156f) {
        uVar1 = 0;
        if (DAT_004b25c4 != 0) {
          uVar1 = DAT_004b25c0 / DAT_004b25c4;
        }
        iVar5 = -0x10cff1a0;
        if (((uVar1 & 0x5745800e) * 0x2702944a) / 0x54771caf < 0x314762a) {
          iVar5 = 0x4ab08e4f;
        }
      }
    }
    if (0x52185c03 < local_8c) {
      if (local_8c < 0x704724b8) {
        if (local_8c == 0x52185c04) {
          uVar1 = (DAT_004b25f0 * DAT_004b25f4 ^ 0xb3400U) & 0x51ab740a ^ 0xad1455eb;
          bVar2 = 0x804ac47f < uVar1;
          bVar3 = uVar1 == 0x804ac480;
          iVar5 = -0x643c80b1;
          iVar6 = 0x38765f45;
          goto LAB_0023f920;
        }
        if (local_8c == 0x54a8965b) {
          bVar3 = 0x654e347b <
                  ((uint)(DAT_004b25d0 + DAT_004b25d4) / 0x2fbb4579 | 0x3b10137d) + 0x31e87373;
          iVar5 = 0x3654ce0b;
          iVar6 = 0x34a7d40a;
          goto LAB_0023fa60;
        }
        if (local_8c == 0x5508685c) {
          iVar5 = 0x54a8965b;
        }
      }
      else if (local_8c == 0x704724b8) {
        iVar5 = 0xaffd7a3;
      }
      else if (local_8c == 0x723440f3) {
        _objc_release(local_80);
        _objc_release(local_78);
        auVar7._8_8_ = extraout_x1_00;
        auVar7._0_8_ = local_88;
        iVar5 = 0x390a99a2;
      }
      else if (local_8c == 0x7ba279d7) {
        iVar5 = -0x25066bbe;
      }
      goto LAB_0023f2bc;
    }
    if (local_8c < 0x38765f45) {
      if (local_8c == 0xaffd7a3) {
        uVar1 = DAT_004b25b8 * DAT_004b25bc + 0xdbc5dd47U & 0xa553e4e9;
        local_68 = DAT_004d18a4;
        bVar2 = 0x7659677c < uVar1;
        bVar3 = uVar1 == 0x7659677d;
        iVar5 = 0xaffd7a3;
        iVar6 = 0x7ba279d7;
LAB_0023f920:
        if (!bVar2 || bVar3) {
          iVar5 = iVar6;
        }
      }
      else if (local_8c == 0x34a7d40a) {
        DAT_004b067e = local_6a ^ 0x46;
        DAT_004b067f = DAT_004b0675 ^ 0xfd;
        DAT_004b0680 = DAT_004b0676 ^ 0xed;
        DAT_004b0681 = DAT_004b0677 ^ 0x81;
        local_6b = DAT_004b0678 ^ 4;
        iVar5 = 0x3654ce0b;
        if (DAT_004b25d8 - DAT_004b25dc != 0x4e812680) {
          iVar5 = -0x58c4fdb6;
        }
      }
      else if (local_8c == 0x3654ce0b) {
        DAT_004b067e = local_6a ^ 0x46;
        DAT_004b067f = DAT_004b0675 ^ 0xfd;
        DAT_004b0680 = DAT_004b0676 ^ 0xed;
        DAT_004b0681 = DAT_004b0677 ^ 0x81;
        iVar5 = 0x34a7d40a;
      }
    }
    else if (local_8c == 0x38765f45) {
      DAT_004d18a4 = 1;
      _NSSearchPathForDirectoriesInDomains(9,1,1);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,PTR_s_lastObject_00489bf8);
      uVar4 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar4,PTR_s_stringByAppendingPathComponent__00489550,
                    &PTR____CFConstantStringClassReference_004b0690);
      _objc_retainAutoreleasedReturnValue();
      auVar7._8_8_ = extraout_x1;
      auVar7._0_8_ = local_88;
      iVar5 = -0x643c80b1;
    }
    else if (local_8c == 0x4ab08e4f) {
      DAT_004b067a = DAT_004b0670 ^ 0x3a;
      DAT_004b067b = DAT_004b0671 ^ 0xd3;
      DAT_004b067c = DAT_004b0672 ^ 0x44;
      DAT_004b067d = DAT_004b0673 ^ 0x76;
      local_6a = DAT_004b0674;
      iVar5 = 0x4ab08e4f;
      if (((DAT_004b25c8 + DAT_004b25cc ^ 0xc2df533U) * -0x64d9f47e & 0x218b1f40) != 0x33ee9d3d) {
        iVar5 = 0x5508685c;
      }
    }
    else if (local_8c == 0x390a99a2) {
      _objc_autoreleaseReturnValue(local_88,auVar7._8_8_);
      return local_88;
    }
  } while( true );
}



// ----- -[BubbleBoxMgr bubblePath] @ 0023fad8 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::bubblePath(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int iVar8;
  int iVar9;
  int local_7c;
  ID local_78;
  byte local_6b;
  byte local_6a;
  char local_69;
  int local_68;
  
  uVar1 = DAT_004b2600 ^ DAT_004b2604;
  local_7c = 0x2f5136b;
LAB_0023fbb0:
  puVar3 = PTR__OBJC_CLASS___NSString_0048c9b0;
  if (local_7c < 0x25d83480) {
    if (local_7c < -0x282be84c) {
      if (local_7c < -0x51077093) {
        if (-0x5f2a61fe < local_7c) {
          if (local_7c == -0x580de390) {
            iVar9 = -0x67aeea7f;
            if (local_69 == '\0') {
              iVar9 = -0x51077093;
            }
            goto LAB_002405cc;
          }
          if (local_7c == -0x5f2a61fd) {
            return local_78;
          }
          goto LAB_0023fbb0;
        }
        if (local_7c != -0x6fbcd51d) {
          if (local_7c == -0x67aeea7f) {
            DAT_004b06d0 = DAT_004b06b0 ^ 0x7f;
            DAT_004b06d1 = DAT_004b06b1 ^ 0xbc;
            DAT_004b06d2 = DAT_004b06b2 ^ 0x58;
            local_6a = DAT_004b06b3;
            iVar9 = 0x4f46258;
            goto LAB_002405cc;
          }
          goto LAB_0023fbb0;
        }
        local_69 = local_68 == 0;
        iVar9 = 0x392880c0;
      }
      else if (local_7c == -0x51077093) {
        DAT_004d18a8 = 1;
        _NSSearchPathForDirectoriesInDomains(5,1,1);
        uVar6 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar6,PTR_s_lastObject_00489bf8);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(puVar3,PTR_s_stringWithFormat__00489548,
                      &PTR____CFConstantStringClassReference_004b06f0);
        local_78 = _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar7);
        _objc_release(uVar6);
        param_2 = extraout_x1_01;
        iVar9 = 0x6ac225ec;
      }
      else {
        if (local_7c != -0x4c7afec0) {
          if (local_7c == -0x48d1228c) {
            uVar2 = 0;
            if (DAT_004b260c != 0) {
              uVar2 = DAT_004b2608 / DAT_004b260c;
            }
            local_68 = DAT_004d18a8;
            iVar9 = -0x3387924;
            if ((uVar2 ^ 0x59de1f2d) * 0x73162bc2 == -0x751a2844) {
              iVar9 = -0x48d1228c;
            }
            goto LAB_002405cc;
          }
          goto LAB_0023fbb0;
        }
        iVar9 = 0x3d438b95;
        if (0xe6639182 < ((DAT_004b2630 & DAT_004b2634 ^ 0x91ec7c72) / 0x64de80af | 0x71db7950)) {
          iVar9 = 0x699abdd9;
        }
      }
    }
    else if (local_7c < -0x3387924) {
      if (local_7c == -0x282be84c) {
        uVar2 = (DAT_004b2648 & DAT_004b264c & 0x33816182 | 0x4c3a9a3c) * -0x1d882042;
        _objc_autoreleaseReturnValue(local_78,param_2);
        bVar4 = 0x9a1037e7 < uVar2;
        bVar5 = uVar2 == 0x9a1037e8;
        iVar9 = 0x73fb395f;
        iVar8 = 0xce2c091;
        param_2 = extraout_x1_00;
LAB_002402cc:
        if (!bVar4 || bVar5) {
          iVar9 = iVar8;
        }
      }
      else if (local_7c == -0x2396ac11) {
        iVar9 = 0x6e0845d7;
        if ((DAT_004b2650 - DAT_004b2654 | 0xfd7fe7dfU) != 0x95a02d50) {
          iVar9 = 0x5d7e2fc1;
        }
      }
      else {
        iVar9 = 0x25d83480;
        if (local_7c != -0x22ab7547) goto LAB_0023fbb0;
      }
    }
    else if (local_7c < 0x4f46258) {
      if (local_7c != -0x3387924) {
        if (local_7c == 0x2f5136b) {
          iVar9 = 0x37b2b085;
          if (((uVar1 ^ 0xf800f8) & 0x41432b2a | 0x1032a22) < 0xa959e006) {
            iVar9 = -0x48d1228c;
          }
          goto LAB_002405cc;
        }
        goto LAB_0023fbb0;
      }
      iVar9 = -0x6fbcd51d;
    }
    else {
      if (local_7c == 0x4f46258) {
        uVar2 = (DAT_004b2620 & DAT_004b2624 & 0x25e2cca9) * -0x5844e136;
        bVar4 = 0xca181bfd < uVar2;
        bVar5 = uVar2 == 0xca181bfe;
        iVar9 = 0x3b88b10f;
        iVar8 = 0x386d5eeb;
        goto LAB_002402cc;
      }
      if (local_7c != 0xce2c091) goto LAB_0023fbb0;
      iVar9 = -0x2396ac11;
    }
  }
  else if (local_7c < 0x3d438b95) {
    if (local_7c < 0x386d5eeb) {
      if (local_7c == 0x25d83480) {
        uVar2 = 0;
        if (DAT_004b261c != 0) {
          uVar2 = DAT_004b2618 / DAT_004b261c;
        }
        uVar2 = (uVar2 | 0x25a0dc1) * -0x59c486e0;
        bVar4 = 0x90c56377 < uVar2;
        bVar5 = uVar2 == 0x90c56378;
        iVar9 = 0x25d83480;
        iVar8 = -0x580de390;
        goto LAB_002402cc;
      }
      iVar9 = -0x51077093;
      if (local_7c != 0x2ecf5eac) {
        if (local_7c != 0x37b2b085) goto LAB_0023fbb0;
        iVar9 = -0x48d1228c;
      }
    }
    else if (local_7c == 0x386d5eeb) {
      DAT_004b06d3 = local_6a ^ 0x19;
      DAT_004b06d4 = DAT_004b06b4 ^ 0x7f;
      DAT_004b06d5 = DAT_004b06b5 ^ 0x8d;
      DAT_004b06d6 = DAT_004b06b6 ^ 0xe8;
      DAT_004b06d7 = DAT_004b06b7 ^ 0x5f;
      DAT_004b06d8 = DAT_004b06b8 ^ 0x5e;
      DAT_004b06d9 = DAT_004b06b9 ^ 0x87;
      DAT_004b06da = DAT_004b06ba ^ 0xac;
      DAT_004b06db = DAT_004b06bb ^ 0x2b;
      DAT_004b06dc = DAT_004b06bc ^ 0xe4;
      DAT_004b06dd = DAT_004b06bd ^ 0xa1;
      DAT_004b06de = DAT_004b06be ^ 0x30;
      DAT_004b06df = DAT_004b06bf ^ 0x7e;
      DAT_004b06e0 = DAT_004b06c0 ^ 0x1c;
      iVar9 = 0x54f20269;
      if (0x4a155907 < (DAT_004b2628 + DAT_004b262c ^ 0x4e92e9fU) * -0x61a2db70) {
        iVar9 = 0x3b88b10f;
      }
      local_6b = DAT_004b06c1;
    }
    else if (local_7c == 0x392880c0) {
      iVar9 = 0x25d83480;
    }
    else {
      if (local_7c != 0x3b88b10f) goto LAB_0023fbb0;
      DAT_004b06d3 = local_6a ^ 0x19;
      DAT_004b06d4 = DAT_004b06b4 ^ 0x7f;
      DAT_004b06d5 = DAT_004b06b5 ^ 0x8d;
      DAT_004b06d6 = DAT_004b06b6 ^ 0xe8;
      DAT_004b06d7 = DAT_004b06b7 ^ 0x5f;
      DAT_004b06d8 = DAT_004b06b8 ^ 0x5e;
      DAT_004b06d9 = DAT_004b06b9 ^ 0x87;
      DAT_004b06da = DAT_004b06ba ^ 0xac;
      DAT_004b06db = DAT_004b06bb ^ 0x2b;
      DAT_004b06dc = DAT_004b06bc ^ 0xe4;
      DAT_004b06dd = DAT_004b06bd ^ 0xa1;
      DAT_004b06de = DAT_004b06be ^ 0x30;
      DAT_004b06df = DAT_004b06bf ^ 0x7e;
      DAT_004b06e0 = DAT_004b06c0 ^ 0x1c;
      iVar9 = 0x386d5eeb;
    }
  }
  else if (local_7c < 0x699abdd9) {
    if (local_7c == 0x3d438b95) {
      DAT_004b06e1 = local_6b ^ 0xad;
      DAT_004b06e2 = DAT_004b06c2 ^ 0x62;
      DAT_004b06e3 = DAT_004b06c3 ^ 0xac;
      DAT_004b06e4 = DAT_004b06c4 ^ 0xec;
      DAT_004b06e5 = DAT_004b06c5 ^ 0x5e;
      DAT_004b06e6 = DAT_004b06c6 ^ 0x9f;
      DAT_004b06e7 = DAT_004b06c7 ^ 0x68;
      DAT_004b06e8 = DAT_004b06c8 ^ 0x4c;
      iVar9 = 0x2ecf5eac;
    }
    else if (local_7c == 0x54f20269) {
      iVar9 = -0x4c7afec0;
    }
    else {
      if (local_7c != 0x5d7e2fc1) goto LAB_0023fbb0;
      iVar9 = 0x5d7e2fc1;
      if ((DAT_004b2658 * DAT_004b265c * -0x35d7584e | 0xdbafdf84U) != 0x5d02dfb7) {
        iVar9 = -0x5f2a61fd;
      }
    }
  }
  else if (local_7c < 0x6e0845d7) {
    if (local_7c == 0x699abdd9) {
      DAT_004b06e1 = local_6b ^ 0xad;
      DAT_004b06e2 = DAT_004b06c2 ^ 0x62;
      DAT_004b06e3 = DAT_004b06c3 ^ 0xac;
      DAT_004b06e4 = DAT_004b06c4 ^ 0xec;
      DAT_004b06e5 = DAT_004b06c5 ^ 0x5e;
      DAT_004b06e6 = DAT_004b06c6 ^ 0x9f;
      DAT_004b06e7 = DAT_004b06c7 ^ 0x68;
      DAT_004b06e8 = DAT_004b06c8 ^ 0x4c;
      iVar9 = 0x3d438b95;
    }
    else {
      if (local_7c != 0x6ac225ec) goto LAB_0023fbb0;
      iVar9 = 0x73fb395f;
      if ((uint)((ulong)((DAT_004b2640 - DAT_004b2644) * 0x288dc640 + 0x84902100) * 0xb5614a07 >>
                0x3e) != 0x946a4382) {
        iVar9 = -0x282be84c;
      }
    }
  }
  else if (local_7c == 0x6e0845d7) {
    iVar9 = 0x5d7e2fc1;
  }
  else {
    if (local_7c != 0x73fb395f) goto LAB_0023fbb0;
    _objc_autoreleaseReturnValue(local_78,param_2);
    param_2 = extraout_x1;
    iVar9 = -0x282be84c;
  }
LAB_002405cc:
  local_7c = iVar9;
  goto LAB_0023fbb0;
}



// ----- -[BubbleBoxMgr fullPath] @ 0024060c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::fullPath(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int local_7c;
  ID local_78;
  undefined8 local_70;
  byte local_66;
  char local_65;
  
  iVar3 = DAT_004d18ac;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_78;
  local_7c = -0x98499bf;
LAB_002406a8:
  local_78 = auVar8._0_8_;
  if (local_7c < -0x98499bf) {
    if (local_7c < -0x3cd7a3c6) {
      if (local_7c < -0x676e3571) {
        if (local_7c == -0x78ff0203) {
          bVar4 = false;
          iVar7 = -0x38c1d060;
          iVar6 = 0x53c09525;
LAB_00240d5c:
          if (!bVar4) {
            iVar7 = iVar6;
          }
        }
        else {
          iVar7 = -0x3cd7a3c6;
          if (local_7c != -0x76cc5dec) {
            if (local_7c != -0x67d067d8) goto LAB_002406a8;
            iVar7 = 0x1a22ebc5;
          }
        }
      }
      else if (local_7c == -0x676e3571) {
        iVar7 = -0x55f6b837;
        if (local_65 == '\0') {
          iVar7 = -0x78ff0203;
        }
      }
      else if (local_7c == -0x55f6b837) {
        DAT_004b04cf = DAT_004b04c7 ^ 0x39;
        iVar7 = 0x1564cf2b;
      }
      else {
        if (local_7c != -0x42af7e77) goto LAB_002406a8;
        iVar7 = 0x48413aa4;
      }
    }
    else if (local_7c < -0x2cad9015) {
      if (local_7c == -0x3cd7a3c6) {
        uVar1 = 0;
        if (DAT_004b267c != 0) {
          uVar1 = DAT_004b2678 / DAT_004b267c;
        }
        bVar4 = 0x8b84debb < ((uVar1 | 0xb4c6981d) * 0x6bb313ff ^ 0x274f04c2);
        iVar6 = -0x76cc5dec;
        iVar7 = -0x676e3571;
LAB_00240e8c:
        if (bVar4) {
          iVar7 = iVar6;
        }
      }
      else if (local_7c == -0x38c1d060) {
        DAT_004d18ac = 1;
        basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar5,PTR_s_stringByAppendingPathComponent__00489550,
                      &PTR____CFConstantStringClassReference_004b0710);
        _objc_retainAutoreleasedReturnValue();
        auVar8._8_8_ = extraout_x1_03;
        auVar8._0_8_ = local_78;
        iVar7 = 0x53c09525;
      }
      else {
        iVar7 = -0x15588045;
        if (local_7c != -0x3530c615) goto LAB_002406a8;
      }
    }
    else if (local_7c < -0x2645789a) {
      if (local_7c == -0x2cad9015) {
        local_66 = DAT_004b04c8 ^ 0xd0;
        iVar7 = -0x67d067d8;
        if (((uint)((ulong)(uint)(DAT_004b2688 + DAT_004b268c) * 0x7538c943 >> 0x3e) + 0x6f8de217 |
            0xbe79c067) < 0xddc24ad) {
          iVar7 = -0x2cad9015;
        }
      }
      else {
        if (local_7c != -0x27c9901b) goto LAB_002406a8;
        _objc_autoreleaseReturnValue(local_78);
        auVar8._8_8_ = extraout_x1;
        auVar8._0_8_ = local_78;
        iVar7 = 0x6b4013e6;
      }
    }
    else {
      if (local_7c != -0x2645789a) {
        if (local_7c == -0x15588045) {
          local_65 = iVar3 == 0;
          bVar4 = ((DAT_004b2668 ^ DAT_004b266c | 0x2789a12e) + 0xbca927ba & 0x3cac6bf9) ==
                  0x7db4389;
          iVar7 = -0x3530c615;
          iVar6 = -0x42af7e77;
          goto LAB_00240d5c;
        }
        goto LAB_002406a8;
      }
      uVar1 = DAT_004b26a8 + DAT_004b26ac;
      _objc_release(local_70,auVar8._8_8_);
      auVar2._8_8_ = extraout_x1_01;
      auVar2._0_8_ = local_78;
      auVar8._8_8_ = extraout_x1_01;
      auVar8._0_8_ = local_78;
      iVar7 = -0x2645789a;
      if ((0xec8f69e3U - (int)((long)((ulong)uVar1 * 0xd3d1cd45) >> 0x3f)) / 0x53b760bb < 0x19ebb77e
         ) {
        iVar7 = -0x20f8415;
        auVar8 = auVar2;
      }
    }
  }
  else if (local_7c < 0x14e58cf2) {
    if (local_7c < -0x20f8415) {
      if (local_7c == -0x98499bf) {
        iVar7 = -0x15588045;
        if (((DAT_004b2660 - DAT_004b2664 ^ 0x8100c9U) & 0xbf940c9) == 0x7f8b5fef) {
          iVar7 = -0x3530c615;
        }
      }
      else {
        if (local_7c == -0x39a72bf) {
          _objc_release(local_70,auVar8._8_8_);
          auVar8._8_8_ = extraout_x1_02;
          auVar8._0_8_ = local_78;
          iVar7 = -0x2645789a;
          goto LAB_00240e90;
        }
        if (local_7c != -0x2f79e8d) goto LAB_002406a8;
        iVar7 = -0x2645789a;
        if (((DAT_004b26a0 ^ DAT_004b26a4) + 0x69ea138 ^ 0xd3aff911) * -0x5ff2fbbd < 0x3e128e72) {
          iVar7 = -0x39a72bf;
        }
      }
    }
    else if (local_7c == -0x20f8415) {
      iVar7 = 0x10c00aa8;
    }
    else {
      if (local_7c != 0xe849034) {
        if (local_7c == 0x10c00aa8) {
          uVar1 = 0;
          if (DAT_004b26b4 != 0) {
            uVar1 = DAT_004b26b0 / DAT_004b26b4;
          }
          bVar4 = 0x6dddb093 < ((uVar1 + 0xe7449d11) / 0x400480ab | 0x9d7718dc);
          iVar6 = -0x27c9901b;
          iVar7 = 0x6b96f330;
          goto LAB_00240e8c;
        }
        goto LAB_002406a8;
      }
      iVar7 = -0x2f79e8d;
    }
  }
  else if (local_7c < 0x48413aa4) {
    iVar7 = -0x2cad9015;
    if (local_7c == 0x14e58cf2) goto LAB_00240e90;
    if (local_7c == 0x1564cf2b) {
      iVar7 = 0x14e58cf2;
      if ((DAT_004b2680 ^ DAT_004b2684) * 0x5d281408 != 0x39451b55) {
        iVar7 = -0x2cad9015;
      }
    }
    else {
      if (local_7c != 0x1a22ebc5) goto LAB_002406a8;
      DAT_004b04d0 = local_66;
      DAT_004b04d1 = DAT_004b04c9 ^ 0x80;
      DAT_004b04d2 = DAT_004b04ca ^ 0xfc;
      DAT_004b04d3 = DAT_004b04cb ^ 99;
      DAT_004b04d4 = DAT_004b04cc ^ 0xc0;
      DAT_004b04d5 = DAT_004b04cd ^ 0xef;
      DAT_004b04d6 = DAT_004b04ce ^ 0xea;
      iVar7 = -0x78ff0203;
    }
  }
  else {
    if (0x6b4013e5 < local_7c) {
      if (local_7c == 0x6b96f330) {
        _objc_autoreleaseReturnValue(local_78);
        auVar8._8_8_ = extraout_x1_00;
        auVar8._0_8_ = local_78;
        iVar7 = -0x27c9901b;
        goto LAB_00240e90;
      }
      if (local_7c == 0x6b4013e6) {
        return local_78;
      }
      goto LAB_002406a8;
    }
    if (local_7c == 0x48413aa4) {
      uVar1 = 0;
      if (DAT_004b2674 != 0) {
        uVar1 = DAT_004b2670 / DAT_004b2674;
      }
      iVar7 = -0x3cd7a3c6;
      if ((uVar1 / 0x5ac43f5b) * 0x2e812d7d + 0x88873c46 < 0x5ae80ed6) {
        iVar7 = -0x76cc5dec;
      }
      goto LAB_00240e90;
    }
    if (local_7c != 0x53c09525) goto LAB_002406a8;
    uVar1 = DAT_004b2698 ^ DAT_004b269c;
    DAT_004d18ac = 1;
    basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
    local_70 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(local_70,PTR_s_stringByAppendingPathComponent__00489550,
                  &PTR____CFConstantStringClassReference_004b0710);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    iVar7 = 0xe849034;
    if (((uVar1 ^ 0xf84e2cfc) * 0x444fb695 ^ 0x9e8cd516) < 0x9ebdf612) {
      iVar7 = -0x38c1d060;
    }
  }
LAB_00240e90:
  local_7c = iVar7;
  goto LAB_002406a8;
}



// ----- -[BubbleBoxMgr maskPath] @ 00240ed0 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::maskPath(ID param_1,SEL param_2)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_84;
  ID local_80;
  undefined8 local_78;
  byte local_6a;
  char local_69;
  int local_68;
  
  uVar1 = DAT_004b26c0 ^ DAT_004b26c4;
  local_84 = 0x36b4d8a4;
LAB_00240f9c:
  if (local_84 < 0xb81d24a) {
    if (local_84 < -0x388a7975) {
      if (local_84 < -0x5b1502c6) {
        if (local_84 == -0x7e48c143) {
          uVar7 = 0;
          if (DAT_004b270c != 0) {
            uVar7 = DAT_004b2708 / DAT_004b270c;
          }
          _objc_msgSend(local_78,PTR_s_stringByAppendingPathComponent__00489550,
                        &PTR____CFConstantStringClassReference_004b0740);
          local_80 = _objc_retainAutoreleasedReturnValue();
          _objc_release(local_78);
          _objc_autoreleaseReturnValue(local_80);
          uVar7 = -(int)((long)((ulong)(uVar7 * -0x3e78e35) * 0xe8cad135) >> 0x3f);
          bVar2 = 0xa0f7d2fd < uVar7;
          bVar3 = uVar7 == 0xa0f7d2fe;
          iVar5 = -0x7e48c143;
          iVar6 = 0x20ede241;
LAB_002415d0:
          if (!bVar2 || bVar3) {
            iVar5 = iVar6;
          }
        }
        else if (local_84 == -0x62f003ee) {
          DAT_004b0739 = local_6a;
          iVar5 = 0xb81d24a;
        }
        else {
          if (local_84 != -0x614b8490) goto LAB_00240f9c;
          DAT_004b073a = DAT_004b0734 ^ 0x7b;
          DAT_004b073b = DAT_004b0735 ^ 0x29;
          iVar5 = 0x54e3febe;
        }
      }
      else if (local_84 == -0x5b1502c6) {
LAB_00241368:
        iVar5 = -0x7e48c143;
      }
      else if (local_84 == -0x5b0cb454) {
        local_68 = DAT_004d18b0;
        iVar5 = 0x5bc3c275;
      }
      else {
        if (local_84 != -0x40412482) goto LAB_00240f9c;
        DAT_004b0736 = DAT_004b0730 ^ 0x75;
        DAT_004b0737 = DAT_004b0731 ^ 0x7e;
        DAT_004b0738 = DAT_004b0732 ^ 200;
        local_6a = DAT_004b0733 ^ 0x55;
        iVar5 = 0x311d1e10;
      }
    }
    else if (local_84 < -0x14c98170) {
      if (local_84 == -0x388a7975) {
        local_69 = local_68 == 0;
        iVar5 = -0x388a7975;
        if (0xf6a8fd7 < (DAT_004b26c8 ^ DAT_004b26cc ^ 0x2b14ba7b) + 0x274535a2) {
          iVar5 = 0x312a3067;
        }
      }
      else if (local_84 == -0x1c9c1aec) {
        DAT_004d18b0 = 1;
        basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
        local_78 = _objc_retainAutoreleasedReturnValue();
        iVar5 = 0x23d2bcf2;
      }
      else {
        if (local_84 != -0x1b5bae5f) goto LAB_00240f9c;
        iVar5 = 0x710e898f;
      }
    }
    else if (local_84 < -0x11aa5d8f) {
      iVar5 = -0x1c9c1aec;
      if (local_84 != -0x14c98170) {
        if (local_84 != -0x11f2bab8) goto LAB_00240f9c;
        iVar5 = 0x3e29acd2;
        if (((DAT_004b26d0 ^ DAT_004b26d4 | 0xa0294353) + 0x270c9eec ^ 0x8cfd3a96) < 0xcfc471c6) {
          iVar5 = 0x125d6b8;
        }
      }
    }
    else if (local_84 == -0x11aa5d8f) {
      iVar5 = -0x5b0cb454;
    }
    else {
      if (local_84 != 0x125d6b8) goto LAB_00240f9c;
      iVar5 = 0x125d6b8;
      if (0x9ca5669 < (DAT_004b26d8 ^ DAT_004b26dc ^ 0x63537e86) + 0x59fa7f55) {
        iVar5 = 0x7b9c9d14;
      }
    }
  }
  else if (local_84 < 0x36b4d8a4) {
    if (local_84 < 0x311d1e10) {
      if (local_84 < 0x20ede241) {
        if (local_84 == 0xb81d24a) {
          DAT_004b0739 = local_6a;
          bVar3 = (DAT_004b26e8 - DAT_004b26ec ^ 0x15207345U) * -0x59b7c7c4 == 0x5994635f;
          iVar6 = -0x1b5bae5f;
          goto LAB_00241630;
        }
        if (local_84 == 0x18c13d90) {
          iVar5 = -0x388a7975;
          goto LAB_002416ac;
        }
      }
      else {
        if (local_84 == 0x23d2bcf2) {
          iVar5 = -0x5b1502c6;
          goto LAB_002416ac;
        }
        if (local_84 == 0x20ede241) {
          return local_80;
        }
      }
      goto LAB_00240f9c;
    }
    if (local_84 == 0x311d1e10) {
      bVar3 = (int)((long)((ulong)((DAT_004b26e0 + DAT_004b26e4 & 0x732a7e9eU) + 0x855f758c) *
                          0xc81116eb) >> 0x3f) == 0x1e4ffc04;
      iVar6 = 0xb81d24a;
LAB_00241630:
      iVar5 = -0x62f003ee;
      if (!bVar3) {
        iVar5 = iVar6;
      }
      goto LAB_002416ac;
    }
    if (local_84 != 0x312a3067) {
      if (local_84 == 0x34ee1cdb) {
        _objc_msgSend(local_78,PTR_s_stringByAppendingPathComponent__00489550,
                      &PTR____CFConstantStringClassReference_004b0740);
        uVar4 = _objc_retainAutoreleasedReturnValue();
        _objc_release(local_78);
        _objc_autoreleaseReturnValue(uVar4);
        goto LAB_00241368;
      }
      goto LAB_00240f9c;
    }
    iVar5 = -0x11f2bab8;
  }
  else if (local_84 < 0x5bc3c275) {
    if (local_84 == 0x36b4d8a4) {
      bVar3 = 0x9604fa54 < (uint)((ulong)(uVar1 / 0x4b458ef8 | 0xc6aeb454) * 0x1dfebd83 >> 0x3c);
      iVar6 = -0x11aa5d8f;
      iVar5 = -0x5b0cb454;
    }
    else {
      iVar5 = 0x125d6b8;
      if (local_84 == 0x3e29acd2) goto LAB_002416ac;
      if (local_84 != 0x54e3febe) goto LAB_00240f9c;
      DAT_004b073a = DAT_004b0734 ^ 0x7b;
      DAT_004b073b = DAT_004b0735 ^ 0x29;
      bVar3 = 0xb0790070 <
              ((uint)((ulong)(DAT_004b26f8 ^ DAT_004b26fc) * 0x7802fdf3 >> 0x3d) + 0x94922565 &
              0x90100142);
      iVar6 = -0x614b8490;
      iVar5 = -0x14c98170;
    }
    if (bVar3) {
      iVar5 = iVar6;
    }
  }
  else if (local_84 < 0x7b9c9d14) {
    if (local_84 != 0x5bc3c275) {
      if (local_84 == 0x710e898f) {
        uVar7 = (DAT_004b26f0 + DAT_004b26f4) * -0xb2546f9 ^ 0x387cfb1c;
        bVar2 = 0xf2811388 < uVar7;
        bVar3 = uVar7 == 0xf2811389;
        iVar5 = -0x614b8490;
        iVar6 = 0x54e3febe;
        goto LAB_002415d0;
      }
      goto LAB_00240f9c;
    }
    iVar5 = 0x18c13d90;
  }
  else {
    if (local_84 != 0x7b9c9d14) {
      iVar5 = -0x388a7975;
      if (local_84 == 0x7e98bc94) goto LAB_002416ac;
      goto LAB_00240f9c;
    }
    iVar5 = -0x40412482;
    if (local_69 == '\0') {
      iVar5 = -0x1c9c1aec;
    }
  }
LAB_002416ac:
  local_84 = iVar5;
  goto LAB_00240f9c;
}



// ----- -[BubbleBoxMgr cardPath] @ 002416ec -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::cardPath(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  int local_84;
  ID local_80;
  undefined8 local_78;
  byte local_6b;
  byte local_6a;
  char local_69;
  int local_68;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_80;
  uVar1 = (DAT_004b2710 ^ DAT_004b2714) + 0xd0cfe311;
  local_84 = -0x20f4cead;
  iVar6 = local_84;
LAB_002417a4:
  while( true ) {
    while( true ) {
      local_84 = iVar6;
      local_80 = auVar8._0_8_;
      iVar6 = local_84;
      if (local_84 < 0x1fcc994e) break;
      if (local_84 < 0x4ce1d8f9) {
        if (local_84 < 0x3326bb85) {
          iVar6 = 0x11a1bb9b;
          if (local_84 != 0x1fcc994e) {
            if (local_84 == 0x21210ad7) {
              DAT_004d18b4 = 1;
              basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
              uVar5 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar5,PTR_s_stringByAppendingPathComponent__00489550,
                            &PTR____CFConstantStringClassReference_004b0770);
              _objc_retainAutoreleasedReturnValue();
              auVar8._8_8_ = extraout_x1_01;
              auVar8._0_8_ = local_80;
              iVar6 = -0x53e89089;
            }
            else {
              iVar6 = local_84;
              if ((local_84 == 0x227e28b4) &&
                 (iVar6 = 0x11a1bb9b,
                 (uint)((ulong)(DAT_004b2750 - DAT_004b2754 & 0xd0000a89) * 0xb55810d7 >> 0x3e) ==
                 0x8ae46018)) {
                iVar6 = 0x1fcc994e;
              }
            }
          }
        }
        else if (local_84 < 0x487e0e14) {
          if (local_84 == 0x3326bb85) {
            iVar6 = 0x485ff600;
          }
          else if (local_84 == 0x485ff600) {
            uVar2 = ((DAT_004b2718 & DAT_004b271c) + 0xb848084c & 0x7b8f258c) + 0x453c3ef7;
            local_68 = DAT_004d18b4;
            bVar3 = 0xf303ae33 < uVar2;
            bVar4 = uVar2 == 0xf303ae34;
            iVar6 = 0x3326bb85;
            iVar7 = -0x5197ed37;
            goto LAB_00241a44;
          }
        }
        else if (local_84 == 0x487e0e14) {
          DAT_004b0766 = local_6a ^ 0xc9;
          DAT_004b0767 = DAT_004b0761 ^ 0x1f;
          iVar6 = 0x597b16fc;
        }
        else if (local_84 == 0x48d8f838) {
          DAT_004b0768 = local_6b;
          DAT_004b0769 = DAT_004b0763 ^ 0x3d;
          DAT_004b076a = DAT_004b0764 ^ 0xcd;
          DAT_004b076b = DAT_004b0765 ^ 0xe8;
          iVar6 = 0x5f7937d0;
        }
      }
      else if (local_84 < 0x5f7937d0) {
        if (local_84 < 0x5207f957) {
          if (local_84 == 0x4ce1d8f9) {
            iVar6 = -0x5780e346;
          }
          else if (local_84 == 0x51d66d41) {
            uVar2 = DAT_004b2768 & DAT_004b276c;
            _objc_release(local_78,auVar8._8_8_);
            _objc_autoreleaseReturnValue(local_80);
            auVar8._8_8_ = extraout_x1;
            auVar8._0_8_ = local_80;
            bVar4 = 0x94289fd6 < (uVar2 / 0x1498fd80 + 0x8badb175 ^ 0xd06756);
            iVar7 = 0x51d66d41;
            iVar6 = 0x5207f957;
            goto LAB_00241e50;
          }
        }
        else if (local_84 == 0x597b16fc) {
          DAT_004b0766 = local_6a ^ 0xc9;
          DAT_004b0767 = DAT_004b0761 ^ 0x1f;
          local_6b = DAT_004b0762 ^ 0x70;
          iVar6 = -0x463072a9;
          if (0xeed01232 <
              (uint)((ulong)(DAT_004b2738 | DAT_004b273c) * 0x25fc72e3 >> 0x3b) + 0xb04fd675) {
            iVar6 = 0x597b16fc;
          }
        }
        else if (local_84 == 0x5207f957) {
          return local_80;
        }
      }
      else if (local_84 == 0x5f7937d0) {
        iVar6 = 0x21210ad7;
        if ((uint)-(int)((long)((ulong)((DAT_004b2740 ^ DAT_004b2744) + 0x21df9422) * 0xca3b0393) >>
                        0x3f) < 0xa992508) {
          iVar6 = -0x53e89089;
        }
      }
      else if (local_84 == 0x6d2a3549) {
        iVar6 = 0x227e28b4;
      }
      else if (local_84 == 0x74e1e17b) {
        iVar6 = -0x44fbe3f4;
        if (local_69 == '\0') {
          iVar6 = 0x5f7937d0;
        }
      }
    }
    if (local_84 < -0x44fbe3f4) break;
    if (local_84 < 0x13cea40) {
      if (local_84 == -0x44fbe3f4) {
        local_6a = DAT_004b0760;
        iVar6 = -0x59fca1c3;
      }
      else if (local_84 == -0x30f7ef6d) {
        uVar2 = 0;
        if (DAT_004b2724 != 0) {
          uVar2 = DAT_004b2720 / DAT_004b2724;
        }
        iVar6 = 0x13cea40;
        if ((uVar2 + 0x2474f42 & 0x244e32f6) < 0x9a2ae8be) {
          iVar6 = 0x1a84ce04;
        }
      }
      else if (local_84 == -0x20f4cead) {
        bVar3 = 0x394b21aa < uVar1;
        bVar4 = uVar1 == 0x394b21ab;
        iVar6 = 0x485ff600;
        iVar7 = 0x3326bb85;
LAB_00241a44:
        if (!bVar3 || bVar4) {
          iVar6 = iVar7;
        }
      }
    }
    else if (local_84 < 0x11a1bb9b) {
      iVar6 = 0x1a84ce04;
      if ((local_84 != 0x13cea40) && (iVar6 = local_84, local_84 == 0xf250a1c)) {
        iVar6 = 0x74e1e17b;
      }
    }
    else if (local_84 == 0x11a1bb9b) {
      uVar2 = 0;
      if (DAT_004b275c != 0) {
        uVar2 = DAT_004b2758 / DAT_004b275c;
      }
      iVar6 = 0x11a1bb9b;
      if ((uVar2 * 0xcc97458) / 0x6e101898 < 0x396eada7) {
        iVar6 = 0x4ce1d8f9;
      }
    }
    else if (local_84 == 0x1a84ce04) {
      local_69 = local_68 == 0;
      iVar6 = 0x1a84ce04;
      if ((DAT_004b2728 * DAT_004b272c | 0x7973a17bU) != 0x58465517) {
        iVar6 = 0xf250a1c;
      }
    }
  }
  if (local_84 < -0x53e89089) {
    if (local_84 == -0x777a06c2) {
      _objc_release(local_78,auVar8._8_8_);
      _objc_autoreleaseReturnValue(local_80);
      auVar8._8_8_ = extraout_x1_00;
      auVar8._0_8_ = local_80;
      iVar6 = 0x51d66d41;
      goto LAB_002417a4;
    }
    if (local_84 == -0x59fca1c3) {
      iVar6 = 0x597b16fc;
      if (((DAT_004b2730 & DAT_004b2734) + 0xa081a785 & 0x57b3255a) + 0xb82fe032 < 0x2f1138a) {
        iVar6 = 0x487e0e14;
      }
      goto LAB_002417a4;
    }
    if (local_84 != -0x5780e346) goto LAB_002417a4;
    bVar4 = 0xa7219085 < ((DAT_004b2760 + DAT_004b2764 + 0x84e8833cU | 0xaa96397c) ^ 0x384e348c);
    iVar7 = 0x51d66d41;
    iVar6 = -0x777a06c2;
  }
  else {
    if (local_84 != -0x53e89089) {
      if (local_84 == -0x5197ed37) {
        iVar6 = -0x30f7ef6d;
      }
      else if (local_84 == -0x463072a9) {
        iVar6 = 0x48d8f838;
      }
      goto LAB_002417a4;
    }
    uVar2 = DAT_004b2748 + DAT_004b274c;
    DAT_004d18b4 = 1;
    basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
    local_78 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(local_78,PTR_s_stringByAppendingPathComponent__00489550,
                  &PTR____CFConstantStringClassReference_004b0770);
    auVar8 = _objc_retainAutoreleasedReturnValue();
    bVar4 = 0xe97df246 < (uVar2 & 0x4314c208) + 0x70bff9f3;
    iVar7 = 0x21210ad7;
    iVar6 = 0x6d2a3549;
  }
LAB_00241e50:
  if (bVar4) {
    iVar6 = iVar7;
  }
  goto LAB_002417a4;
}



// ----- -[BubbleBoxMgr currentBubblePath] @ 00241ffc -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::currentBubblePath(ID param_1,SEL param_2)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  uint uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int local_e4;
  ID local_e0;
  ID local_d8;
  ID local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined *local_a0;
  char local_91;
  undefined *local_90;
  char local_81;
  long local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_b0;
  iVar1 = DAT_004b2770 - DAT_004b2774;
  local_e4 = -0x28f4510d;
LAB_002420d8:
  uVar7 = auVar10._8_8_;
  local_b0 = auVar10._0_8_;
  if (local_e4 < 0x1990af26) {
    if (local_e4 < -0x33906f22) {
      if (-0x5277fa71 < local_e4) {
        if (local_e4 < -0x442c495f) {
          if (local_e4 < -0x4ec37c73) {
            if (local_e4 == -0x5277fa70) {
              iVar9 = DAT_004b2838 + DAT_004b283c;
              _objc_msgSend(local_b8,local_c0,&PTR____CFConstantStringClassReference_004b0800);
              local_c8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_b0,PTR_s_stringByAppendingPathComponent__00489550,local_c8);
              auVar11 = _objc_retainAutoreleasedReturnValue();
              auVar4._8_8_ = auVar11._8_8_;
              auVar4._0_8_ = local_b0;
              auVar10._8_8_ = auVar11._8_8_;
              auVar10._0_8_ = local_b0;
              local_d0 = auVar11._0_8_;
              local_e4 = -0x5277fa70;
              if ((uint)(iVar9 * -0x41d4488f) / 0x2f0518bf != 0x31a2b823) {
                local_e4 = -0x6612426a;
                auVar10 = auVar4;
              }
            }
            else if (local_e4 == -0x50961928) {
              _objc_release(local_c8,uVar7);
              _objc_release(local_b0);
              auVar10._8_8_ = extraout_x1;
              auVar10._0_8_ = local_b0;
              local_e4 = 0x381e4cf2;
            }
          }
          else if (local_e4 == -0x4ec37c73) {
            local_e4 = -0x4ec37c73;
            if ((uint)((ulong)(((DAT_004b2818 | DAT_004b281c) & 0xa0436917) + 0x6a5cb3f0) *
                       0x146c848b >> 0x3b) != 0xc2c6e6d8) {
              local_e4 = 0x5d11fe17;
            }
          }
          else if (local_e4 == -0x49bc7ac2) {
            _objc_release(local_80,uVar7);
            _objc_autoreleaseReturnValue(local_e0);
            auVar10._8_8_ = extraout_x1_04;
            auVar10._0_8_ = local_b0;
            local_e4 = 0x294aa155;
          }
        }
        else if (local_e4 < -0x38a703ad) {
          if (local_e4 == -0x442c495f) {
            local_e4 = -0x4ec37c73;
          }
          else if (local_e4 == -0x40ba4493) {
            uVar8 = DAT_004b27d8 * DAT_004b27dc + 0x1b1aaacbU & 0x9ab35586 ^ 0x9a2e0309;
            auVar10 = _objc_msgSend(local_80,local_90);
            uVar7 = auVar10._8_8_;
            local_91 = auVar10._0_8_ == 0;
            bVar5 = 0xa09b91fb < uVar8;
            bVar6 = uVar8 == 0xa09b91fc;
            local_e4 = -0x1a3b03ef;
            iVar9 = 0x14123124;
            goto LAB_00242dd8;
          }
        }
        else if (local_e4 == -0x38a703ad) {
          local_e4 = 0x1f2b64ff;
          if (local_71 == '\0') {
            local_e4 = 0x446a92da;
          }
        }
        else if (local_e4 == -0x36145de6) {
          DAT_004b07e0 = DAT_004b07c0 ^ 0x9d;
          DAT_004b07e1 = DAT_004b07c1 ^ 0xc9;
          DAT_004b07e2 = DAT_004b07c2 ^ 0x59;
          DAT_004b07e3 = DAT_004b07c3 ^ 0x76;
          DAT_004b07e4 = DAT_004b07c4 ^ 0xd9;
          DAT_004b07e5 = DAT_004b07c5 ^ 0x3e;
          DAT_004b07e6 = DAT_004b07c6 ^ 0x5a;
          DAT_004b07e7 = DAT_004b07c7 ^ 0xd6;
          DAT_004b07e8 = DAT_004b07c8 ^ 0x95;
          DAT_004b07e9 = DAT_004b07c9 ^ 0x25;
          DAT_004b07ea = DAT_004b07ca ^ 0xfb;
          DAT_004b07eb = DAT_004b07cb ^ 200;
          DAT_004b07ec = DAT_004b07cc ^ 0xec;
          DAT_004b07ed = DAT_004b07cd ^ 0x2b;
          DAT_004b07ee = DAT_004b07ce ^ 0x39;
          DAT_004b07ef = DAT_004b07cf ^ 0x33;
          DAT_004b07f0 = DAT_004b07d0 ^ 0x10;
          DAT_004b07f1 = DAT_004b07d1 ^ 0x50;
          DAT_004b07f2 = DAT_004b07d2 ^ 10;
          DAT_004b07f3 = DAT_004b07d3 ^ 0xa2;
          DAT_004b07f4 = DAT_004b07d4 ^ 0xf4;
          DAT_004b07ad = DAT_004b07a6 ^ 0xf8;
          DAT_004b07ae = DAT_004b07a7 ^ 0x16;
          DAT_004b07af = DAT_004b07a8 ^ 0x91;
          DAT_004b07b0 = DAT_004b07a9 ^ 0xe3;
          DAT_004b07b1 = DAT_004b07aa ^ 0x35;
          DAT_004b07b2 = DAT_004b07ab ^ 0xd2;
          DAT_004b07b3 = DAT_004b07ac ^ 0xe9;
          DAT_004b079b = DAT_004b0790 ^ 0xf3;
          DAT_004b079c = DAT_004b0791 ^ 0x1c;
          DAT_004b079d = DAT_004b0792 ^ 0x39;
          DAT_004b079e = DAT_004b0793 ^ 0x7c;
          local_e4 = -0x36145de6;
          if (((DAT_004b2788 ^ DAT_004b278c ^ 0xfc07ffff) & 0x3f7dbcff | 0x3b359cbb) != 0xd2329228)
          {
            local_e4 = 0x43c5be85;
          }
          local_72 = DAT_004b0794 ^ 0x3c;
        }
        goto LAB_002420d8;
      }
      if (-0x61496e9e < local_e4) {
        if (local_e4 < -0x5b5e0b74) {
          if (local_e4 == -0x61496e9d) {
            DAT_004b079f = local_72;
            DAT_004b07a0 = DAT_004b0795 ^ 0x77;
            DAT_004b07a1 = DAT_004b0796 ^ 0x3a;
            local_73 = DAT_004b0797;
            local_e4 = 0x61fa4596;
            if (0xf0357b54 < ((DAT_004b2798 * DAT_004b279c ^ 0xbfc213e2U) / 0x68885389 ^ 0x3e85dd7e)
               ) {
              local_e4 = -0x61496e9d;
            }
          }
          else if ((local_e4 == -0x5cce30ef) &&
                  (local_e4 = -0x234a40ea,
                  0xe90b166c <
                  ((uint)(DAT_004b2800 * DAT_004b2804) / 0x2185b4d + 0x4a419c29 | 0x61f710a6))) {
            local_e4 = -0x25256553;
          }
        }
        else if (local_e4 == -0x5b5e0b74) {
          local_e4 = 0x4b01915f;
        }
        else if (local_e4 == -0x52d6e7ec) {
          uVar8 = 0;
          if (DAT_004b277c != 0) {
            uVar8 = DAT_004b2778 / DAT_004b277c;
          }
          local_70 = DAT_004d18b8;
          bVar6 = 0x84e65fa8 < ((uVar8 ^ 0x3fff000) & 0x767cd7bc | 0x625487bc);
          iVar9 = 0x704502d3;
          local_e4 = -0x5b5e0b74;
          goto LAB_002436a8;
        }
        goto LAB_002420d8;
      }
      if (local_e4 < -0x6612426a) {
        if (local_e4 == -0x7d01ee81) {
          local_e4 = -0x5cce30ef;
        }
        else if (local_e4 == -0x6a043588) {
          local_e4 = 0xf2bc3ed;
        }
        goto LAB_002420d8;
      }
      if (local_e4 == -0x6612426a) {
        local_e4 = 0x3ee3bced;
        goto LAB_002420d8;
      }
      if (local_e4 != -0x6488ab84) goto LAB_002420d8;
      bVar6 = local_91 == '\0';
      iVar9 = 0x60fd9f60;
    }
    else {
      if (-0x13e843f7 < local_e4) {
        if (local_e4 < 0xf2bc3ed) {
          if (local_e4 < -0xc9f40fa) {
            if (local_e4 != -0x13e843f6) {
              if (local_e4 == -0xdbc4cde) {
                uVar8 = 0;
                if (DAT_004b27b4 != 0) {
                  uVar8 = DAT_004b27b0 / DAT_004b27b4;
                }
                local_e4 = 0x630b2aed;
                if ((uVar8 * -0x207a8b2 | 0xabb4b2de) == 0xe6b1f1fa) {
                  local_e4 = 0x48ad408b;
                }
              }
              goto LAB_002420d8;
            }
          }
          else {
            if (local_e4 == -0xc9f40fa) {
              local_e4 = -0x5277fa70;
              if (((DAT_004b2830 ^ DAT_004b2834 ^ 0xe4c0004) & 0x2fdd115e) + 0x8bb057cf < 0x46bbf0ff
                 ) {
                local_e4 = 0x3e0429e3;
              }
              goto LAB_002420d8;
            }
            if (local_e4 != 0x647a91d) goto LAB_002420d8;
          }
          local_e4 = 0x3084ee0d;
          goto LAB_002420d8;
        }
        if (local_e4 < 0x125548db) {
          if (local_e4 == 0xf2bc3ed) {
            local_e4 = -0x4ec37c73;
            if (((DAT_004b2810 | DAT_004b2814) + 0x8c7b8096 & 0x457bc6e) * 0x61e8ba68 == -0x5993c4d2
               ) {
              local_e4 = -0x442c495f;
            }
          }
          else if (local_e4 == 0x123d79f7) {
            local_e4 = 0x3a9841d0;
          }
        }
        else if (local_e4 == 0x125548db) {
          _objc_msgSend(*(undefined8 *)(param_1 + 0x18),PTR_s_objectForKey__0048a370,
                        &PTR____CFConstantStringClassReference_004b0840);
          auVar11 = _objc_retainAutoreleasedReturnValue();
          auVar10._8_8_ = auVar11._8_8_;
          auVar10._0_8_ = local_b0;
          local_80 = auVar11._0_8_;
          local_e4 = -0xdbc4cde;
        }
        else if (local_e4 == 0x14123124) {
          local_e4 = 0x4534d17f;
        }
        goto LAB_002420d8;
      }
      if (local_e4 < -0x285956f2) {
        if (local_e4 < -0x2f1f545d) {
          if (local_e4 == -0x33906f22) {
            local_e0 = local_d8;
            uVar8 = 0;
            if (DAT_004b2854 != 0) {
              uVar8 = DAT_004b2850 / DAT_004b2854;
            }
            bVar6 = 0x5c4f4881 < (uVar8 ^ 0xd423802 | 0xa23c4279);
            iVar9 = 0x294aa155;
            local_e4 = -0x49bc7ac2;
            goto LAB_002436a8;
          }
          if (local_e4 == -0x311a89ce) {
            uVar8 = (DAT_004b27f8 + DAT_004b27fc & 0xdfa97b24U) / 0x685c23fb & 1;
            local_a0 = PTR_s_isEqualToString__00489d70;
            bVar5 = 0x53f1ff50 < uVar8;
            bVar6 = uVar8 == 0x53f1ff51;
            local_e4 = -0x311a89ce;
            iVar9 = -0x7d01ee81;
            goto LAB_00242dd8;
          }
        }
        else if (local_e4 == -0x2f1f545d) {
          local_e4 = -0xc9f40fa;
        }
        else if (local_e4 == -0x28f4510d) {
          bVar6 = 0x468b57b1 < (uint)((ulong)(uint)(iVar1 * -0x5c574602) * 0xb5925c3 >> 0x3a);
          local_e4 = -0x52d6e7ec;
          iVar9 = 0x704502d3;
          goto LAB_00242e90;
        }
        goto LAB_002420d8;
      }
      if (-0x234a40eb < local_e4) {
        if (local_e4 == -0x234a40ea) {
          uVar8 = DAT_004b2808 - DAT_004b280c;
          local_a1 = _objc_msgSend(local_80,local_a0,&PTR____CFConstantStringClassReference_004b0820
                                  );
          auVar2._8_8_ = extraout_x1_07;
          auVar2._0_8_ = local_b0;
          auVar10._8_8_ = extraout_x1_07;
          auVar10._0_8_ = local_b0;
          local_e4 = -0x234a40ea;
          if ((uVar8 ^ 0x6eda2c5f) * -0x53547e62 + 0xd8253f82 < 0xca47eed5) {
            local_e4 = -0x6a043588;
            auVar10 = auVar2;
          }
        }
        else if (local_e4 == -0x1a3b03ef) {
          _objc_msgSend(local_80,local_90);
          auVar10._8_8_ = extraout_x1_05;
          auVar10._0_8_ = local_b0;
          local_e4 = -0x40ba4493;
        }
        goto LAB_002420d8;
      }
      if (local_e4 != -0x285956f2) {
        if (local_e4 == -0x25256553) {
          _objc_msgSend(local_80,local_a0,&PTR____CFConstantStringClassReference_004b0820);
          auVar10._8_8_ = extraout_x1_01;
          auVar10._0_8_ = local_b0;
          local_e4 = -0x234a40ea;
        }
        goto LAB_002420d8;
      }
      bVar6 = local_81 == '\0';
      iVar9 = 0x647a91d;
    }
LAB_00243824:
    local_e4 = -0x33906f22;
    if (bVar6) {
      local_e4 = iVar9;
    }
    local_d8 = 0;
    goto LAB_002420d8;
  }
  if (0x446a92d9 < local_e4) {
    if (local_e4 < 0x61fa4596) {
      if (local_e4 < 0x4d7fcf5a) {
        if (local_e4 < 0x48ad408b) {
          if (local_e4 == 0x446a92da) {
            DAT_004d18b8 = 1;
            local_e4 = 0x125548db;
          }
          else if (local_e4 == 0x4534d17f) {
            uVar8 = (DAT_004b27e0 | DAT_004b27e4 | 0xfef41bc) + 0x48972a3f | 0xe49debe8;
            bVar5 = 0x7c771f7f < uVar8;
            bVar6 = uVar8 == 0x7c771f80;
            local_e4 = 0x3a9841d0;
            iVar9 = 0x123d79f7;
            goto LAB_00242dd8;
          }
        }
        else if (local_e4 == 0x48ad408b) {
          local_e4 = 0x630b2aed;
        }
        else if (local_e4 == 0x4b01915f) {
          local_71 = local_70 == 0;
          local_e4 = -0x38a703ad;
        }
      }
      else if (local_e4 < 0x5d11fe17) {
        if (local_e4 == 0x4d7fcf5a) {
          local_e4 = -0x33906f22;
          local_d8 = local_d0;
        }
        else if (local_e4 == 0x50da480e) {
          return local_e0;
        }
      }
      else {
        if (local_e4 == 0x5d11fe17) {
          bVar6 = local_a1 == '\0';
          iVar9 = 0x700f4003;
          goto LAB_00243824;
        }
        if (local_e4 == 0x60fd9f60) {
          bVar6 = 0x86f737cd <
                  ((uint)((ulong)(DAT_004b27f0 ^ DAT_004b27f4) * 0x310bd669 >> 0x3d) | 0x81916088);
          local_e4 = -0x311a89ce;
          iVar9 = 0x3a8cf9ea;
          goto LAB_00242e90;
        }
      }
    }
    else if (local_e4 < 0x704502d3) {
      if (local_e4 < 0x64830cd7) {
        if (local_e4 == 0x61fa4596) {
          local_e4 = 0x7e99407d;
        }
        else if (local_e4 == 0x630b2aed) {
          uVar8 = ((DAT_004b27b8 + DAT_004b27bc | 0x6dae0c59U) ^ 0x5600bc4) + 0x91d3c86f;
          local_81 = local_80 == 0;
          bVar5 = 0x3eea50f1 < uVar8;
          bVar6 = uVar8 == 0x3eea50f2;
          iVar9 = 0x630b2aed;
          local_e4 = -0x285956f2;
          goto LAB_002426ac;
        }
      }
      else if (local_e4 == 0x64830cd7) {
        basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
        _objc_retainAutoreleasedReturnValue();
        auVar10._8_8_ = extraout_x1_06;
        auVar10._0_8_ = local_b0;
        local_e4 = 0x20635c87;
      }
      else if (local_e4 == 0x700f4003) {
        uVar8 = 0;
        if (DAT_004b2824 != 0) {
          uVar8 = DAT_004b2820 / DAT_004b2824;
        }
        uVar8 = (uVar8 ^ 0x112884) & 0x41352ef6 | 0x240472;
        bVar5 = 0x3a0a4a5b < uVar8;
        bVar6 = uVar8 == 0x3a0a4a5c;
        local_e4 = 0x64830cd7;
        iVar9 = 0x20635c87;
LAB_00242dd8:
        auVar3._8_8_ = uVar7;
        auVar3._0_8_ = local_b0;
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = local_b0;
        if (!bVar5 || bVar6) {
          local_e4 = iVar9;
          auVar10 = auVar3;
        }
      }
    }
    else if (local_e4 < 0x7ca1a541) {
      if (local_e4 == 0x704502d3) {
        local_e4 = -0x52d6e7ec;
      }
      else if (local_e4 == 0x7530e3bd) {
        bVar6 = 0x280c7a2f < ((DAT_004b27d0 | DAT_004b27d4) * -0x499b93d8 + 0x12ad3b28 & 0x82797c00)
        ;
        local_e4 = -0x1a3b03ef;
        iVar9 = -0x40ba4493;
LAB_00242e90:
        if (bVar6) {
          local_e4 = iVar9;
        }
      }
    }
    else if (local_e4 == 0x7ca1a541) {
      local_e4 = 0x7530e3bd;
    }
    else if (local_e4 == 0x7e99407d) {
LAB_00243484:
      local_e4 = 0x3fac6cea;
    }
    goto LAB_002420d8;
  }
  if (local_e4 < 0x3a8cf9ea) {
    if (0x239438dd < local_e4) {
      if (local_e4 < 0x3084ee0d) {
        if (local_e4 == 0x239438de) {
          DAT_004b07a2 = local_73 ^ 0xec;
          DAT_004b07a3 = DAT_004b0798 ^ 0x91;
          DAT_004b07a4 = DAT_004b0799 ^ 0xf0;
          DAT_004b07a5 = DAT_004b079a ^ 0x61;
          goto LAB_00243484;
        }
        if (local_e4 == 0x294aa155) {
          uVar8 = 0;
          if (DAT_004b285c != 0) {
            uVar8 = DAT_004b2858 / DAT_004b285c;
          }
          _objc_release(local_80,uVar7);
          _objc_autoreleaseReturnValue(local_e0);
          bVar5 = 0xc0691875 < (uVar8 | 0xeff6fffb);
          bVar6 = (uVar8 | 0xeff6fffb) == 0xc0691876;
          iVar9 = 0x294aa155;
          local_e4 = 0x50da480e;
          uVar7 = extraout_x1_00;
LAB_002426ac:
          auVar11._8_8_ = uVar7;
          auVar11._0_8_ = local_b0;
          auVar10._8_8_ = uVar7;
          auVar10._0_8_ = local_b0;
          if (!bVar5 || bVar6) {
            local_e4 = iVar9;
            auVar10 = auVar11;
          }
        }
      }
      else if (local_e4 == 0x3084ee0d) {
        local_90 = PTR_s_length_00489d78;
        local_e4 = 0x7ca1a541;
        if (((uint)((ulong)(DAT_004b27c8 | DAT_004b27cc) * 0xad5e60f7 >> 0x3e) ^ 0x94479e03) <
            0x77efe222) {
          local_e4 = 0x3084ee0d;
        }
      }
      else if (local_e4 == 0x381e4cf2) {
        uVar8 = 0;
        if (DAT_004b284c != 0) {
          uVar8 = DAT_004b2848 / DAT_004b284c;
        }
        uVar8 = uVar8 * -0x78e26a67 + 0x11d84275;
        _objc_release(local_c8,uVar7);
        _objc_release(local_b0);
        bVar5 = 0x2136f516 < uVar8;
        bVar6 = uVar8 == 0x2136f517;
        local_e4 = 0x381e4cf2;
        iVar9 = 0x4d7fcf5a;
        uVar7 = extraout_x1_03;
        goto LAB_00242dd8;
      }
      goto LAB_002420d8;
    }
    if (local_e4 < 0x20635c87) {
      if (local_e4 == 0x1990af26) {
        local_e4 = -0x61496e9d;
        if (((uint)((ulong)(uint)(DAT_004b2790 + DAT_004b2794) * 0x3ada31c7 >> 0x3d) + 0x618af321 ^
            0x8fa092cf) < 0x8b1d693d) {
          local_e4 = 0x3ab7db34;
        }
        goto LAB_002420d8;
      }
      if (local_e4 != 0x1f2b64ff) goto LAB_002420d8;
      bVar6 = 0x1cfedb41 <
              (((DAT_004b2780 - DAT_004b2784) * -0x1453718a | 0x6b6c3a14U) ^ 0x53cee447);
      iVar9 = -0x36145de6;
      local_e4 = 0x226e6773;
    }
    else {
      if (local_e4 != 0x20635c87) {
        if (local_e4 == 0x226e6773) {
          DAT_004b07e0 = DAT_004b07c0 ^ 0x9d;
          DAT_004b07e1 = DAT_004b07c1 ^ 0xc9;
          DAT_004b07e2 = DAT_004b07c2 ^ 0x59;
          DAT_004b07e3 = DAT_004b07c3 ^ 0x76;
          DAT_004b07e4 = DAT_004b07c4 ^ 0xd9;
          DAT_004b07e5 = DAT_004b07c5 ^ 0x3e;
          DAT_004b07e6 = DAT_004b07c6 ^ 0x5a;
          DAT_004b07e7 = DAT_004b07c7 ^ 0xd6;
          DAT_004b07e8 = DAT_004b07c8 ^ 0x95;
          DAT_004b07e9 = DAT_004b07c9 ^ 0x25;
          DAT_004b07ea = DAT_004b07ca ^ 0xfb;
          DAT_004b07eb = DAT_004b07cb ^ 200;
          DAT_004b07ec = DAT_004b07cc ^ 0xec;
          DAT_004b07ed = DAT_004b07cd ^ 0x2b;
          DAT_004b07ee = DAT_004b07ce ^ 0x39;
          DAT_004b07ef = DAT_004b07cf ^ 0x33;
          DAT_004b07f0 = DAT_004b07d0 ^ 0x10;
          DAT_004b07f1 = DAT_004b07d1 ^ 0x50;
          DAT_004b07f2 = DAT_004b07d2 ^ 10;
          DAT_004b07f3 = DAT_004b07d3 ^ 0xa2;
          DAT_004b07f4 = DAT_004b07d4 ^ 0xf4;
          DAT_004b07ad = DAT_004b07a6 ^ 0xf8;
          DAT_004b07ae = DAT_004b07a7 ^ 0x16;
          DAT_004b07af = DAT_004b07a8 ^ 0x91;
          DAT_004b07b0 = DAT_004b07a9 ^ 0xe3;
          DAT_004b07b1 = DAT_004b07aa ^ 0x35;
          DAT_004b07b2 = DAT_004b07ab ^ 0xd2;
          DAT_004b07b3 = DAT_004b07ac ^ 0xe9;
          DAT_004b079b = DAT_004b0790 ^ 0xf3;
          DAT_004b079c = DAT_004b0791 ^ 0x1c;
          DAT_004b079d = DAT_004b0792 ^ 0x39;
          DAT_004b079e = DAT_004b0793 ^ 0x7c;
          local_e4 = -0x36145de6;
        }
        goto LAB_002420d8;
      }
      iVar9 = DAT_004b2828 + DAT_004b282c;
      basePath(param_1,(SEL)PTR_s_basePath_0048b2c0);
      auVar10 = _objc_retainAutoreleasedReturnValue();
      local_b8 = PTR__OBJC_CLASS___NSString_0048c9b0;
      local_c0 = PTR_s_stringWithFormat__00489548;
      bVar6 = 0xa9fa8c3a < (iVar9 + 0xa05c5b7fU & 0xff82c34b) + 0xe0cc1b74;
      iVar9 = 0x64830cd7;
      local_e4 = -0x2f1f545d;
    }
  }
  else {
    if (local_e4 < 0x3ee3bced) {
      if (local_e4 < 0x3ab7db34) {
        if (local_e4 == 0x3a8cf9ea) {
          local_e4 = -0x311a89ce;
        }
        else if (local_e4 == 0x3a9841d0) {
          local_e4 = 0x3a9841d0;
          if (((DAT_004b27e8 - DAT_004b27ec & 0x70846840U) + 0x97c4f6f7 | 0x1e7260fa) != 0xd381bc16)
          {
            local_e4 = -0x6488ab84;
          }
        }
      }
      else if (local_e4 == 0x3ab7db34) {
        DAT_004b079f = local_72;
        DAT_004b07a0 = DAT_004b0795 ^ 0x77;
        DAT_004b07a1 = DAT_004b0796 ^ 0x3a;
        local_e4 = -0x61496e9d;
      }
      else if (local_e4 == 0x3e0429e3) {
        _objc_msgSend(local_b8,local_c0,&PTR____CFConstantStringClassReference_004b0800);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_b0,PTR_s_stringByAppendingPathComponent__00489550,uVar7);
        _objc_retainAutoreleasedReturnValue();
        auVar10._8_8_ = extraout_x1_02;
        auVar10._0_8_ = local_b0;
        local_e4 = -0x5277fa70;
      }
      goto LAB_002420d8;
    }
    if (0x4013076f < local_e4) {
      if (local_e4 == 0x40130770) {
        local_e4 = 0x446a92da;
      }
      else if (local_e4 == 0x43c5be85) {
        local_e4 = 0x1990af26;
      }
      goto LAB_002420d8;
    }
    if (local_e4 == 0x3ee3bced) {
      local_e4 = -0x50961928;
      if (((DAT_004b2840 ^ DAT_004b2844) + 0xd62c98f1 | 0x231f329e) != 0xcac4c397) {
        local_e4 = 0x381e4cf2;
      }
      goto LAB_002420d8;
    }
    if (local_e4 != 0x3fac6cea) goto LAB_002420d8;
    DAT_004b07a2 = local_73 ^ 0xec;
    DAT_004b07a3 = DAT_004b0798 ^ 0x91;
    DAT_004b07a4 = DAT_004b0799 ^ 0xf0;
    DAT_004b07a5 = DAT_004b079a ^ 0x61;
    bVar6 = 0xd67d7981 < ((DAT_004b27a8 | DAT_004b27ac) & 0x12680015 | 0x480011);
    iVar9 = 0x3fac6cea;
    local_e4 = 0x40130770;
  }
LAB_002436a8:
  if (bVar6) {
    local_e4 = iVar9;
  }
  goto LAB_002420d8;
}



// ----- -[BubbleBoxMgr currentBubble] @ 00243af8 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::currentBubble(ID param_1,SEL param_2)

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
  long *plVar20;
  bool bVar21;
  bool bVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  undefined8 extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  SEL extraout_x1_05;
  undefined8 extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  undefined8 extraout_x1_09;
  SEL extraout_x1_10;
  SEL extraout_x1_11;
  SEL extraout_x1_12;
  SEL extraout_x1_13;
  SEL extraout_x1_14;
  SEL extraout_x1_15;
  SEL extraout_x1_16;
  SEL extraout_x1_17;
  SEL extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  SEL extraout_x1_22;
  SEL extraout_x1_23;
  SEL extraout_x1_24;
  SEL extraout_x1_25;
  SEL extraout_x1_26;
  SEL extraout_x1_27;
  SEL extraout_x1_28;
  int iVar25;
  uint uVar26;
  int iVar27;
  ID IVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  long local_1e0 [3];
  int *local_1c8;
  int local_1bc;
  ID local_1b8;
  long local_1b0;
  ID local_1a8;
  ID local_1a0;
  ID local_198;
  ID local_190;
  ID local_188;
  ID local_180;
  long lStack_178;
  ID local_170;
  ID local_168;
  ID local_160;
  ID local_158;
  char local_14b;
  char local_14a;
  char local_149;
  undefined *local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  ID local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined *local_108;
  char local_f9;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  char local_d9;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  char local_b1;
  long local_b0;
  undefined *local_a8;
  char local_99;
  ID local_98;
  ID *local_90;
  long *local_88;
  long *local_80;
  byte local_72;
  char local_71;
  int local_70;
  uint local_6c;
  
  plVar20 = local_1e0 + 2;
  local_6c = (DAT_004b2860 ^ DAT_004b2864) * -0x2478b56f + 0x6a330525 | 0xe7857510;
  local_1c8 = &local_1bc;
  local_1bc = 0x488cb9b9;
  local_1e0[2] = param_1;
LAB_00243be4:
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = local_c8;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_c8;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_c8;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_c8;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_c8;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_c8;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_c8;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_c8;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_c8;
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = local_110;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = local_f8;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_f8;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_e8;
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = local_e8;
  if (local_1bc < -0x385f984) {
    if (local_1bc < -0x37c8b40d) {
      if (-0x5bbdb73e < local_1bc) {
        if (local_1bc < -0x4a5313e4) {
          if (-0x5340033f < local_1bc) {
            if (local_1bc < -0x4f7778e4) {
              if (local_1bc == -0x5340033e) {
                *local_1c8 = -0x6bd3885;
              }
              else if (local_1bc == -0x528ea02b) {
                local_198 = local_168;
                uVar26 = 0;
                if (DAT_004b29e4 != 0) {
                  uVar26 = DAT_004b29e0 / DAT_004b29e4;
                }
                uVar26 = (uint)((ulong)(uVar26 * -0x16510421 + 0x7cfea4c4) * 0x330180b5 >> 0x3d);
                bVar22 = 0x9c065751 < uVar26;
                bVar21 = uVar26 == 0x9c065752;
                iVar25 = -0x5bf29c7a;
                iVar27 = -0x2f354712;
                auVar30 = auVar2;
                goto LAB_00245bf4;
              }
            }
            else if (local_1bc == -0x4f7778e4) {
              IVar28 = local_160;
              _objc_release(local_140);
              _objc_release(local_138);
              _objc_release(local_130);
              _objc_release(local_128);
              _objc_release(local_120);
              *local_1c8 = -0x528ea02b;
              param_2 = extraout_x1_27;
              local_168 = IVar28;
            }
            else if (local_1bc == -0x4b463ab2) {
              _objc_autoreleaseReturnValue(local_1b8);
              *local_1c8 = -0x5f102085;
              param_2 = extraout_x1_12;
            }
            goto LAB_00243be4;
          }
          if (-0x59e0bcc2 < local_1bc) {
            if (local_1bc == -0x59e0bcc1) {
              uVar26 = DAT_004b29f8 & DAT_004b29fc | 0xff5fe7ff;
              _objc_release(local_e8);
              bVar22 = 0xcda0a3d < uVar26;
              bVar21 = uVar26 == 0xcda0a3e;
              iVar27 = -0x4a5313e4;
              param_2 = extraout_x1_26;
LAB_00246b08:
              auVar15._8_8_ = param_2;
              auVar15._0_8_ = local_110;
              auVar31._8_8_ = param_2;
              auVar31._0_8_ = local_110;
              if (!bVar22 || bVar21) {
                iVar27 = -0x59e0bcc1;
                auVar31 = auVar15;
              }
              goto LAB_002467f4;
            }
            if (local_1bc == -0x58751a15) {
              _objc_retain(local_98,param_2);
              *local_1c8 = 0x68c760e7;
              param_2 = extraout_x1_11;
            }
            goto LAB_00243be4;
          }
          if (local_1bc != -0x5bbdb73d) {
            if (local_1bc == -0x5abdf4bd) {
              uVar26 = (int)((long)((ulong)((DAT_004b2998 ^ DAT_004b299c) + 0x97df7612) * 0xb4a9ddfd
                                   ) >> 0x3f) * -0x133270b4;
              bVar22 = 0xd3fab1bf < uVar26;
              bVar21 = uVar26 == 0xd3fab1c0;
              iVar27 = -0x5abdf4bd;
              iVar25 = 0x707b4742;
              auVar32 = auVar6;
              goto LAB_002467f0;
            }
            goto LAB_00243be4;
          }
          local_1b0 = lStack_178;
          local_1a8 = local_180;
          bVar21 = (uint)((ulong)(DAT_004b2a00 + DAT_004b2a04 | 0xfffafddd) * 0x4bf8666d >> 0x3e) ==
                   0x65ab7c7;
          iVar27 = 0x415998b9;
          iVar25 = -0x1f5649e6;
        }
        else {
          if (-0x3d013ea2 < local_1bc) {
            if (local_1bc < -0x3bf117d9) {
              if (local_1bc == -0x3d013ea1) {
                *local_1c8 = 0x754f6261;
              }
              else if (local_1bc == -0x3cd3abb5) {
                _objc_retain(*local_88,param_2);
                *local_1c8 = 0x15debddf;
                param_2 = extraout_x1_07;
              }
            }
            else if (local_1bc == -0x3bf117d9) {
              DAT_004d18bc = 1;
              local_80 = plVar20 + -2;
              plVar20 = plVar20 + -4;
              local_88 = plVar20;
              *local_1c8 = 0xf5893f4;
            }
            else if (local_1bc == -0x37ff1702) {
              DAT_004b04bb = DAT_004b04af ^ 0x72;
              DAT_004b04bc = DAT_004b04b0 ^ 0x46;
              DAT_004b04bd = DAT_004b04b1 ^ 0xf;
              DAT_004b04be = DAT_004b04b2 ^ 0xad;
              DAT_004b04bf = DAT_004b04b3 ^ 2;
              DAT_004b04c0 = DAT_004b04b4 ^ 0xc3;
              DAT_004b04c1 = DAT_004b04b5 ^ 0x99;
              DAT_004b04c2 = DAT_004b04b6 ^ 0xa1;
              DAT_004b04c3 = DAT_004b04b7 ^ 0x42;
              DAT_004b04c4 = DAT_004b04b8 ^ 1;
              DAT_004b04c5 = DAT_004b04b9 ^ 0xa4;
              DAT_004b04c6 = DAT_004b04ba ^ 199;
              local_72 = DAT_004b0876;
              bVar21 = 0xec8eae1e <
                       ((DAT_004b2878 & DAT_004b287c) + 0x7c98cf08 & 0x522c8f96) + 0xa0e8f583;
              iVar27 = -0x2739fdc8;
              iVar25 = -0x2fdb2730;
              goto LAB_002463ec;
            }
            goto LAB_00243be4;
          }
          if (local_1bc < -0x44b60b4d) {
            if (local_1bc == -0x4a5313e4) {
              *local_1c8 = -0x5bbdb73d;
              local_180 = local_1a0;
              lStack_178 = local_f0;
            }
            else if (local_1bc == -0x45160830) {
              bVar21 = (DAT_004b29d8 + DAT_004b29dc & 0xfc9590e0U) == 0x22a95a8c;
              iVar27 = -0x627ab9f;
              iVar25 = -0x28bde1e0;
              goto LAB_0024546c;
            }
            goto LAB_00243be4;
          }
          if (local_1bc == -0x44b60b4d) {
            *local_1c8 = 0x3c66e679;
            goto LAB_00243be4;
          }
          if (local_1bc != -0x43a4eb27) goto LAB_00243be4;
          bVar21 = (DAT_004b2990 ^ DAT_004b2994 | 0x428dbf27) == 0x2caf4e9;
          iVar27 = -0x5abdf4bd;
          iVar25 = 0x612f8a30;
        }
LAB_00246a4c:
        if (bVar21) {
          iVar27 = iVar25;
        }
        goto LAB_002467f4;
      }
      if (local_1bc < -0x6002cf6c) {
        if (local_1bc < -0x77888003) {
          if (local_1bc == -0x7f7cf284) {
            IVar28 = local_188;
            _objc_release(local_b0);
            *local_1c8 = 0x7eedb044;
            param_2 = extraout_x1_28;
            local_190 = IVar28;
          }
          else if (local_1bc == -0x7a975dcf) {
            *local_1c8 = -0xc03e370;
          }
          else if (local_1bc == -0x7a2930fe) {
            *local_1c8 = -0x2525a89f;
          }
        }
        else if (local_1bc < -0x6f7b8500) {
          if (local_1bc == -0x77888003) {
            local_90 = (ID *)(local_1e0[2] + 8);
            local_98 = *local_90;
            local_99 = local_98 == 0;
            iVar27 = -0x2951c4b;
            if (0x80a03e1a < ((DAT_004b2888 & DAT_004b288c & 0xd556658f) + 0x4575a0f4 & 0x9cde2707))
            {
              iVar27 = -0x77888003;
            }
            goto LAB_002467f4;
          }
          if (local_1bc == -0x76da3dfc) {
            *local_1c8 = 0x19c0ef89;
          }
        }
        else {
          if (local_1bc == -0x6f7b8500) {
            uVar26 = (DAT_004b28c0 ^ DAT_004b28c4) * -0x2198d988 + 0x6853a1dc;
            bVar22 = 0x5bb9002 < uVar26;
            bVar21 = uVar26 == 0x5bb9003;
            iVar27 = 0x6acd32ff;
            iVar25 = 0x20bc25bb;
            auVar32 = auVar7;
            goto LAB_002467f0;
          }
          if (local_1bc == -0x6422feb0) {
            *local_1c8 = -0x77888003;
          }
        }
        goto LAB_00243be4;
      }
      if (-0x5d3eb3ea < local_1bc) {
        if (local_1bc < -0x5c58ee14) {
          if (local_1bc == -0x5d3eb3e9) {
            bVar21 = local_99 == '\0';
            iVar25 = -0xd74d53b;
            iVar27 = -0x71c2494;
            goto LAB_00246734;
          }
          if (local_1bc == -0x5cc8e7dc) {
            FUN_00250328();
            _objc_retainAutoreleasedReturnValue();
            *local_1c8 = 0x7bea8daf;
            param_2 = extraout_x1_05;
          }
        }
        else if (local_1bc == -0x5c58ee14) {
          *local_1c8 = 0x659536e;
        }
        else if (local_1bc == -0x5bf29c7a) {
          uVar26 = DAT_004b29e8 + DAT_004b29ec;
          _objc_release(local_f8);
          bVar21 = 0x725eeeed < (uVar26 / 0x5430b246 + 0x80c566c7 | 0x5cc4efa2);
          iVar27 = -0x5bf29c7a;
          iVar25 = -0x5e8b4311;
          param_2 = extraout_x1_08;
LAB_002463ec:
          auVar16._8_8_ = param_2;
          auVar16._0_8_ = local_110;
          auVar31._8_8_ = param_2;
          auVar31._0_8_ = local_110;
          if (bVar21) {
            iVar27 = iVar25;
            auVar31 = auVar16;
          }
          goto LAB_002467f4;
        }
        goto LAB_00243be4;
      }
      if (local_1bc < -0x5e8b4311) {
        if (local_1bc == -0x6002cf6c) {
          bVar21 = 0x7b521a3b <
                   ((DAT_004b2950 - DAT_004b2954) * -0x151520e5 + 0x782721a8U | 0x9b678254);
          iVar27 = 0x76b202c5;
          iVar25 = 0x6998ed94;
          goto LAB_002463ec;
        }
        if (local_1bc == -0x5f102085) {
          uVar26 = (DAT_004b2a18 | DAT_004b2a1c) + 0xd25b490e & 0xd81e103d;
          _objc_autoreleaseReturnValue(local_1b8);
          auVar32._8_8_ = extraout_x1;
          auVar32._0_8_ = local_c8;
          bVar22 = 0xe5ea9fab < uVar26;
          bVar21 = uVar26 == 0xe5ea9fac;
          iVar27 = -0x4b463ab2;
          iVar25 = 0x5b7841bf;
          goto LAB_002467f0;
        }
        goto LAB_00243be4;
      }
      if (local_1bc == -0x5e8b4311) {
        *local_1c8 = 0x3f1a8087;
        local_170 = local_198;
        goto LAB_00243be4;
      }
      if (local_1bc != -0x5db50636) goto LAB_00243be4;
      uVar26 = 0;
      if (DAT_004b28dc != 0) {
        uVar26 = DAT_004b28d8 / DAT_004b28dc;
      }
      local_b1 = local_b0 == 0;
      bVar21 = uVar26 == 0xae693b56;
      iVar25 = 0x1ebc64fa;
      iVar27 = 0x4e583a88;
    }
    else {
      if (local_1bc < -0x2739fdc8) {
        if (local_1bc < -0x2dd0ab5d) {
          if (local_1bc < -0x322d3089) {
            if (local_1bc < -0x340d315b) {
              if (local_1bc == -0x37c8b40d) {
                *local_1c8 = -0xc43809e;
              }
              else if (local_1bc == -0x34405c5d) {
                iVar25 = DAT_004b2908 + DAT_004b290c;
                *local_88 = 0;
                _objc_msgSend(PTR__OBJC_CLASS___NSJSONSerialization_0048cba0,
                              PTR_s_JSONObjectWithData_options_error_0048ac70,local_d0,0);
                auVar29 = _objc_retainAutoreleasedReturnValue();
                bVar21 = 0x7104ea9c < (iVar25 + 0xfad28e58U | 0xdb07812);
                iVar25 = 0x7df32c1;
                iVar27 = 0x7cf19102;
                goto LAB_00245f6c;
              }
            }
            else if (local_1bc == -0x340d315b) {
              local_108 = PTR_s_m_nsCurUsrName_0048ac30;
              *local_1c8 = -0x6002cf6c;
            }
            else if (local_1bc == -0x32735ca6) {
LAB_002454d8:
              *local_1c8 = 0x63267227;
            }
            goto LAB_00243be4;
          }
          if (local_1bc < -0x2f354712) {
            if (local_1bc == -0x322d3089) {
              bVar21 = local_149 == '\0';
              iVar25 = 0x7586d212;
              iVar27 = 0x1bdfa077;
              goto LAB_00246734;
            }
            if (local_1bc == -0x2fdb2730) {
              *local_1c8 = -0x2dd0ab5d;
            }
            goto LAB_00243be4;
          }
          if (local_1bc == -0x2f354712) {
            _objc_release(local_f8);
            *local_1c8 = -0x5bf29c7a;
            param_2 = extraout_x1_24;
            goto LAB_00243be4;
          }
          if (local_1bc != -0x2e8de9f4) goto LAB_00243be4;
          iVar27 = 0x3fd0f012;
          if (((DAT_004b2940 ^ DAT_004b2944) + 0x99d8714f ^ 0x25221333) * 0x7935fa25 != 0x67313f75)
          {
            iVar27 = 0x4313a06a;
          }
        }
        else {
          if (-0x2950a1c8 < local_1bc) {
            if (local_1bc < -0x28bde1e0) {
              if (local_1bc == -0x2950a1c7) {
                uVar26 = (uint)((ulong)((DAT_004b28f0 ^ DAT_004b28f4 | 0x4573f0cc) * 0x2c93d52f) *
                                0x7a57ca6b >> 0x3e);
                bVar22 = 0xbcdbe9b9 < uVar26;
                bVar21 = uVar26 == 0xbcdbe9ba;
                iVar27 = -0x44b60b4d;
                iVar25 = 0x3c66e679;
                auVar32 = auVar3;
                goto LAB_002467f0;
              }
              if (local_1bc == -0x28c49ac2) {
                iVar25 = 0x1066ac5d;
                if (local_d9 == '\0') {
                  iVar25 = -0x5bbdb73d;
                }
                *local_1c8 = iVar25;
                lStack_178 = local_d8;
                local_180 = 0;
              }
            }
            else if (local_1bc == -0x28bde1e0) {
              *local_1c8 = -0x4f7778e4;
              local_160 = local_128;
            }
            else if (local_1bc == -0x28919a43) {
              *local_80 = 0;
              _objc_msgSend(PTR__OBJC_CLASS___NSData_0048c9b8,
                            PTR_s_dataWithContentsOfFile_options_e_0048b310,local_c8,1);
              local_d0 = _objc_retainAutoreleasedReturnValue();
              local_d8 = *local_80;
              _objc_retain();
              *local_1c8 = -0x2950a1c7;
              param_2 = extraout_x1_10;
            }
            goto LAB_00243be4;
          }
          if (local_1bc < -0x2a884d3d) {
            if (local_1bc == -0x2dd0ab5d) {
              DAT_004b0884 = local_72 ^ 0x4c;
              DAT_004b0885 = DAT_004b0877 ^ 0xa5;
              DAT_004b0886 = DAT_004b0878 ^ 0xe5;
              DAT_004b0887 = DAT_004b0879 ^ 2;
              *local_1c8 = -0x4cd60aa;
            }
            else if (local_1bc == -0x2c8d59e7) {
              uVar26 = DAT_004b29c8 ^ DAT_004b29cc;
              *local_90 = local_128;
              _objc_release(local_158);
              _objc_retain(local_128);
              auVar31._8_8_ = extraout_x1_02;
              auVar31._0_8_ = local_110;
              bVar21 = ((uVar26 & 0x17e0c98d) * -0x2c57c732 & 0x1cca88aa) == 0xca20a706;
              iVar27 = -0x2c8d59e7;
              iVar25 = -0x37c8b40d;
              goto LAB_0024546c;
            }
            goto LAB_00243be4;
          }
          if (local_1bc == -0x2a884d3d) {
            *local_1c8 = -0x7f7cf284;
            local_188 = local_1a8;
            goto LAB_00243be4;
          }
          if (local_1bc != -0x2a0cc7a7) goto LAB_00243be4;
          uVar26 = 0;
          if (DAT_004b2934 != 0) {
            uVar26 = DAT_004b2930 / DAT_004b2934;
          }
          iVar27 = -0x6bd3885;
          if (0xd86b59de < (uint)((ulong)uVar26 * 0x32e32005 >> 0x3d) * 0x67152963 + 0xcb408c63) {
            iVar27 = -0x5340033e;
          }
        }
        goto LAB_002467f4;
      }
      if (local_1bc < -0xc43809e) {
        if (local_1bc < -0x1f5649e6) {
          if (-0x21656fbe < local_1bc) {
            if (local_1bc == -0x21656fbd) {
              *local_1c8 = -0x28919a43;
            }
            else if (local_1bc == -0x1ff29379) {
              *local_1c8 = 0xc05897f;
            }
            goto LAB_00243be4;
          }
          if (local_1bc == -0x2739fdc8) {
            DAT_004b04bb = DAT_004b04af ^ 0x72;
            DAT_004b04bc = DAT_004b04b0 ^ 0x46;
            DAT_004b04bd = DAT_004b04b1 ^ 0xf;
            DAT_004b04be = DAT_004b04b2 ^ 0xad;
            DAT_004b04bf = DAT_004b04b3 ^ 2;
            DAT_004b04c0 = DAT_004b04b4 ^ 0xc3;
            DAT_004b04c1 = DAT_004b04b5 ^ 0x99;
            DAT_004b04c2 = DAT_004b04b6 ^ 0xa1;
            DAT_004b04c3 = DAT_004b04b7 ^ 0x42;
            DAT_004b04c4 = DAT_004b04b8 ^ 1;
            DAT_004b04c5 = DAT_004b04b9 ^ 0xa4;
            DAT_004b04c6 = DAT_004b04ba ^ 199;
            *local_1c8 = -0x37ff1702;
            goto LAB_00243be4;
          }
          if (local_1bc != -0x2525a89f) goto LAB_00243be4;
          local_70 = DAT_004d18bc;
          uVar26 = (uint)((ulong)((DAT_004b2868 - DAT_004b286c ^ 0x1018bf8fU) * 0x5196d4d4) *
                          0x7ab8074f >> 0x3e);
          bVar22 = 0x9c73a800 < uVar26;
          bVar21 = uVar26 == 0x9c73a801;
          iVar27 = -0x7a2930fe;
          iVar25 = -0x7a975dcf;
          auVar32 = auVar4;
          goto LAB_002467f0;
        }
        if (local_1bc < -0x102d664a) {
          if (local_1bc == -0x1f5649e6) {
            _objc_release(local_d0);
            _objc_release(local_c8);
            _objc_release(local_1b0);
            *local_1c8 = 0x415998b9;
            param_2 = extraout_x1_23;
          }
          else if (local_1bc == -0x16a54573) {
            *local_1c8 = -0x2e8de9f4;
          }
          goto LAB_00243be4;
        }
        if (local_1bc == -0x102d664a) {
          lVar24 = _objc_msgSend(local_110,local_118);
          _objc_release(local_110);
          iVar25 = -0x528ea02b;
          if (lVar24 != 0) {
            iVar25 = 0x4381951;
          }
          *local_1c8 = iVar25;
          local_168 = 0;
          param_2 = extraout_x1_25;
          goto LAB_00243be4;
        }
        if (local_1bc != -0xd74d53b) goto LAB_00243be4;
        bVar21 = (DAT_004b28a0 - DAT_004b28a4) * -0x67a638cd == 0x74e5076e;
        iVar25 = -0x58751a15;
        iVar27 = 0x68c760e7;
      }
      else {
        if (-0x6bd3886 < local_1bc) {
          if (local_1bc < -0x627ab9f) {
            if (local_1bc == -0x6bd3885) {
              local_f9 = local_f8 == 0;
              iVar27 = -0x16a54573;
              if (0xaa40cf8e <
                  (((DAT_004b2938 & DAT_004b293c) * -0x68330b32 | 0x39a200df) ^ 0xa52ae320)) {
                iVar27 = -0x6bd3885;
              }
              goto LAB_002467f4;
            }
            if (local_1bc == -0x69d196c) {
              uVar26 = ((DAT_004b2920 ^ DAT_004b2924) & 0x4f522184) + 0x84bcf928;
              bVar22 = 0xacb70414 < uVar26;
              bVar21 = uVar26 == 0xacb70415;
              iVar27 = -0x5cc8e7dc;
              iVar25 = 0x7bea8daf;
              auVar32 = auVar5;
              goto LAB_002467f0;
            }
          }
          else if (local_1bc == -0x627ab9f) {
            *local_1c8 = -0x45160830;
          }
          else if (local_1bc == -0x4cd60aa) {
            DAT_004b0888 = DAT_004b087a ^ 0x38;
            DAT_004b0889 = DAT_004b087b ^ 0x15;
            DAT_004b088a = DAT_004b087c ^ 0xe1;
            DAT_004b088b = DAT_004b087d ^ 200;
            DAT_004b088c = DAT_004b087e ^ 0xa5;
            DAT_004b088d = DAT_004b087f ^ 0x19;
            DAT_004b088e = DAT_004b0880 ^ 0xcf;
            DAT_004b088f = DAT_004b0881 ^ 0x42;
            DAT_004b0890 = DAT_004b0882 ^ 0x7b;
            DAT_004b0891 = DAT_004b0883 ^ 0xce;
            DAT_004b086b = DAT_004b0860 ^ 0xad;
            DAT_004b086c = DAT_004b0861 ^ 0x7b;
            DAT_004b086d = DAT_004b0862 ^ 0x59;
            DAT_004b086e = DAT_004b0863 ^ 0xb1;
            DAT_004b086f = DAT_004b0864 ^ 0xf6;
            DAT_004b0870 = DAT_004b0865 ^ 0x93;
            DAT_004b0871 = DAT_004b0866 ^ 0xd3;
            DAT_004b0872 = DAT_004b0867 ^ 0x6d;
            DAT_004b0873 = DAT_004b0868 ^ 0x3b;
            DAT_004b0874 = DAT_004b0869 ^ 0x75;
            DAT_004b0875 = DAT_004b086a ^ 0x3d;
            *local_1c8 = -0x3bf117d9;
          }
          goto LAB_00243be4;
        }
        if (-0x977f297 < local_1bc) {
          if (local_1bc == -0x977f296) {
            uVar26 = 0;
            if (DAT_004b28b4 != 0) {
              uVar26 = DAT_004b28b0 / DAT_004b28b4;
            }
            bVar21 = ((uVar26 ^ 0x7ff0) & 0x3296a2b0) * -0x2ccf461e == 0x329274f;
            iVar25 = 0x79e0e4e2;
            iVar27 = -0x2ed62b7;
            goto LAB_00246900;
          }
          if (local_1bc == -0x71c2494) {
            local_a8 = PTR_s_currentBubblePath_0048b008;
            *local_1c8 = -0x6f7b8500;
          }
          goto LAB_00243be4;
        }
        if (local_1bc != -0xc43809e) {
          if (local_1bc == -0xc03e370) {
            local_71 = local_70 == 0;
            *local_1c8 = 0x562d2a8f;
          }
          goto LAB_00243be4;
        }
        bVar21 = ((uint)(DAT_004b29d0 - DAT_004b29d4) / 0x37f6fe80 | 0x464c5db8) == 0x4a8b32f5;
        iVar25 = -0x627ab9f;
        iVar27 = -0x45160830;
      }
    }
LAB_00246734:
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = local_110;
    auVar31._8_8_ = param_2;
    auVar31._0_8_ = local_110;
    if (bVar21) {
      iVar27 = iVar25;
      auVar31 = auVar19;
    }
  }
  else if (local_1bc < 0x3ef74438) {
    if (local_1bc < 0x15debddf) {
      if (local_1bc < 0x7df32c1) {
        if (local_1bc < -0x138686a) {
          if (local_1bc == -0x385f984) {
            *local_1c8 = 0x2b378847;
          }
          else if (local_1bc == -0x2ed62b7) {
            *local_1c8 = 0x79e0e4e2;
          }
          else if (local_1bc == -0x2951c4b) {
            *local_1c8 = 0x54000ff0;
          }
          goto LAB_00243be4;
        }
        if (0x659536d < local_1bc) {
          if (local_1bc == 0x659536e) goto LAB_002454d8;
          if (local_1bc == 0x6a78a1a) {
            *local_1c8 = 0x7eedb044;
            local_190 = local_98;
          }
          goto LAB_00243be4;
        }
        if (local_1bc != -0x138686a) {
          if (local_1bc == 0x4381951) {
            _objc_msgSend(local_f8,local_108);
            local_120 = _objc_retainAutoreleasedReturnValue();
            uVar23 = _objc_alloc(PTR_BubbleBoxInfo_0048cb40);
            local_128 = _objc_msgSend(uVar23,PTR_s_initWithConfig__0048b318,local_e8);
            _objc_msgSend(local_b0,local_c0,&PTR____CFConstantStringClassReference_004b08c0);
            local_130 = _objc_retainAutoreleasedReturnValue();
            plVar20[-2] = local_120;
            _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithFormat__00489548,
                          &PTR____CFConstantStringClassReference_004b08a0);
            uVar23 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_b0,local_c0,uVar23);
            local_138 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar23);
            _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
            auVar29 = _objc_retainAutoreleasedReturnValue();
            param_2 = auVar29._8_8_;
            local_140 = auVar29._0_8_;
            *local_1c8 = 0x61d5a0fd;
          }
          goto LAB_00243be4;
        }
        uVar26 = 0;
        if (DAT_004b289c != 0) {
          uVar26 = DAT_004b2898 / DAT_004b289c;
        }
        uVar26 = uVar26 + 0xe1c2ed36 | 0xffead7ef;
        bVar22 = 0xc20466e0 < uVar26;
        bVar21 = uVar26 == 0xc20466e1;
        iVar25 = 0x1616c0e2;
        iVar27 = -0x5d3eb3e9;
LAB_00245bf4:
        auVar14._8_8_ = auVar30._8_8_;
        auVar14._0_8_ = local_110;
        auVar31._8_8_ = auVar30._8_8_;
        auVar31._0_8_ = local_110;
        local_f8 = auVar30._0_8_;
        if (!bVar22 || bVar21) {
          iVar27 = iVar25;
          auVar31 = auVar14;
        }
      }
      else {
        if (0x1066ac5c < local_1bc) {
          if (local_1bc < 0x1270fdd4) {
            if (local_1bc == 0x1066ac5d) {
              bVar21 = (DAT_004b2900 * DAT_004b2904 + 0x7f1f6f40U | 0x5b5019ff) * 0x2ac546bd ==
                       0x73e50414;
              iVar27 = -0x34405c5d;
              iVar25 = 0x7df32c1;
              goto LAB_00246a4c;
            }
            if (local_1bc == 0x11738837) {
              *local_1c8 = -0x977f296;
            }
          }
          else if (local_1bc == 0x1270fdd4) {
            *local_1c8 = -0x43a4eb27;
          }
          else if (local_1bc == 0x150057d3) {
            *local_1c8 = -0x102d664a;
          }
          goto LAB_00243be4;
        }
        if (local_1bc < 0xc05897f) {
          if (local_1bc == 0x7df32c1) {
            *local_88 = 0;
            _objc_msgSend(PTR__OBJC_CLASS___NSJSONSerialization_0048cba0,
                          PTR_s_JSONObjectWithData_options_error_0048ac70,local_d0,0);
            _objc_retainAutoreleasedReturnValue();
            *local_1c8 = -0x34405c5d;
            param_2 = extraout_x1_13;
          }
          else if (local_1bc == 0xaf64899) {
            *local_1c8 = -0x2a0cc7a7;
          }
          goto LAB_00243be4;
        }
        if (local_1bc == 0xc05897f) {
          *local_1c8 = 0x3201d13c;
          goto LAB_00243be4;
        }
        if (local_1bc != 0xf5893f4) goto LAB_00243be4;
        iVar27 = -0x77888003;
        if (0xc3212948 < ((DAT_004b2880 * DAT_004b2884 * 0xf10af40 | 0x3f22f5c1U) ^ 0x2bc930ba)) {
          iVar27 = -0x6422feb0;
        }
      }
    }
    else if (local_1bc < 0x3317accf) {
      if (0x1ebc64f9 < local_1bc) {
        if (local_1bc < 0x2b378847) {
          if (local_1bc == 0x1ebc64fa) {
            *local_1c8 = -0x5db50636;
          }
          else if (local_1bc == 0x20bc25bb) {
            _objc_msgSend(local_1e0[2],local_a8);
            _objc_retainAutoreleasedReturnValue();
            *local_1c8 = 0x6acd32ff;
            param_2 = extraout_x1_03;
          }
        }
        else {
          if (local_1bc == 0x2b378847) {
            bVar21 = 0x61a2978 <
                     (uint)((ulong)((DAT_004b28d0 & DAT_004b28d4) + 0x508c6c01 | 0x808ccced) *
                            0x100417b >> 0x36);
            iVar27 = -0x5db50636;
            iVar25 = 0x1ebc64fa;
            goto LAB_002463ec;
          }
          cVar1 = local_14b;
          if (local_1bc == 0x3201d13c) {
LAB_0024521c:
            iVar25 = 0x358fe000;
            if (cVar1 == '\0') {
              iVar25 = -0x4f7778e4;
            }
            *local_1c8 = iVar25;
            local_160 = 0;
          }
        }
        goto LAB_00243be4;
      }
      if (0x19c0ef88 < local_1bc) {
        if (local_1bc == 0x19c0ef89) {
          iVar25 = -0x69d196c;
          if (local_f0 != 0) {
            iVar25 = 0x3f1a8087;
          }
          *local_1c8 = iVar25;
          local_170 = 0;
        }
        else if (local_1bc == 0x1bdfa077) {
          iVar27 = 0x3317accf;
          if ((DAT_004b2980 + DAT_004b2984 & 0x94bb119fU) * 0x5910e827 + 0x7e7110f3 < 0x8124464) {
            iVar27 = 0x33de2d76;
          }
          goto LAB_002467f4;
        }
        goto LAB_00243be4;
      }
      if (local_1bc != 0x15debddf) {
        if (local_1bc == 0x1616c0e2) {
          *local_1c8 = -0x138686a;
        }
        goto LAB_00243be4;
      }
      iVar25 = DAT_004b2918 - DAT_004b291c;
      local_f0 = *local_88;
      _objc_retain(local_f0,param_2);
      auVar12._8_8_ = extraout_x1_19;
      auVar12._0_8_ = local_110;
      auVar31._8_8_ = extraout_x1_19;
      auVar31._0_8_ = local_110;
      iVar27 = 0x15debddf;
      if ((iVar25 * -0x7b583b46 & 0x24a8f562U) != 0x888d2ed6) {
        iVar27 = -0x76da3dfc;
        auVar31 = auVar12;
      }
    }
    else if (local_1bc < 0x3b242f5e) {
      if (0x358fdfff < local_1bc) {
        if (local_1bc == 0x358fe000) {
          uVar26 = (DAT_004b29b0 | DAT_004b29b4) * 0xe825d64 + 0xee472e80;
          bVar22 = 0x2ab16a52 < uVar26;
          bVar21 = uVar26 == 0x2ab16a53;
          iVar27 = 0x43698508;
          iVar25 = 0x3b415f11;
          auVar32 = auVar10;
          goto LAB_002467f0;
        }
        if (local_1bc == 0x3a1b8941) {
          bVar21 = 0xa1a87416 <
                   ((DAT_004b29a0 + DAT_004b29a4 & 0x4f94db57U) * -0x6db4c31a ^ 0xcc179838);
          iVar27 = 0xc05897f;
          iVar25 = -0x1ff29379;
          goto LAB_002463ec;
        }
        goto LAB_00243be4;
      }
      if (local_1bc != 0x3317accf) {
        if (local_1bc == 0x33de2d76) {
          _objc_msgSend(local_140,local_148,local_138);
          *local_1c8 = 0x3317accf;
          param_2 = extraout_x1_01;
        }
        goto LAB_00243be4;
      }
      uVar26 = DAT_004b2988 & DAT_004b298c;
      local_14a = _objc_msgSend(local_140,local_148,local_138);
      auVar11._8_8_ = extraout_x1_20;
      auVar11._0_8_ = local_110;
      auVar31._8_8_ = extraout_x1_20;
      auVar31._0_8_ = local_110;
      iVar27 = 0x1270fdd4;
      if ((uVar26 + 0x464212b4 ^ 0x9b1921e7) < 0x55306b56) {
        iVar27 = 0x3317accf;
        auVar31 = auVar11;
      }
    }
    else {
      if (0x3ba60444 < local_1bc) {
        if (local_1bc == 0x3ba60445) {
          uVar26 = 0;
          if (DAT_004b2874 != 0) {
            uVar26 = DAT_004b2870 / DAT_004b2874;
          }
          uVar26 = (uVar26 & 0x7e4e8004) * 0x473a6867;
          bVar22 = 0xa02d0b14 < uVar26;
          bVar21 = uVar26 == 0xa02d0b15;
          iVar27 = -0x2739fdc8;
          iVar25 = -0x37ff1702;
          goto LAB_002467f0;
        }
        if (local_1bc == 0x3c66e679) {
          local_d9 = local_d8 == 0;
          *local_1c8 = -0x28c49ac2;
        }
        goto LAB_00243be4;
      }
      if (local_1bc != 0x3b242f5e) {
        if (local_1bc == 0x3b415f11) {
          _objc_retain(local_128,param_2);
          *local_1c8 = 0x43698508;
          param_2 = extraout_x1_04;
        }
        goto LAB_00243be4;
      }
      iVar27 = -0x3cd3abb5;
      if ((DAT_004b2910 + DAT_004b2914 ^ 0x8186a068U | 0x66311e93) * 0x264ba7e5 != -0x1ce1bccf) {
        iVar27 = 0x15debddf;
      }
    }
  }
  else {
    if (0x68232b40 < local_1bc) {
      if (local_1bc < 0x7586d212) {
        if (local_1bc < 0x6acd32ff) {
          if (local_1bc < 0x68c760e7) {
            if (local_1bc == 0x68232b41) {
              _objc_msgSend(local_b0,PTR_s_stringByAppendingPathComponent__00489550,
                            &PTR____CFConstantStringClassReference_004b08e0);
              _objc_retainAutoreleasedReturnValue();
              *local_1c8 = 0x754f6261;
              param_2 = extraout_x1_14;
            }
            else if (local_1bc == 0x68bba88e) {
              bVar21 = (((DAT_004b29c0 | DAT_004b29c4) ^ 0x6a95cb3) & 0x46ab5eb3) == 0xb757e9eb;
              iVar25 = -0x2c8d59e7;
              iVar27 = 0x7bd37027;
              goto LAB_00246900;
            }
          }
          else {
            if (local_1bc == 0x68c760e7) {
              uVar26 = DAT_004b28a8 | DAT_004b28ac;
              _objc_retain(local_98,param_2);
              bVar21 = (uVar26 & 0x2054080) * -0x156623f2 == 0x3747e088;
              iVar25 = -0x58751a15;
              iVar27 = 0x11738837;
              param_2 = extraout_x1_17;
              goto LAB_00246734;
            }
            if (local_1bc == 0x6998ed94) {
              uVar26 = DAT_004b2958 - DAT_004b295c;
              _objc_msgSend(local_f8,local_108);
              auVar31 = _objc_retainAutoreleasedReturnValue();
              local_118 = PTR_s_length_00489d78;
              bVar21 = ((uint)((ulong)uVar26 * 0x4cbb301b >> 0x3e) | 0xf83c09ac) * -0xc0991bf ==
                       -0x6c3384bf;
              iVar27 = 0x76b202c5;
              iVar25 = 0x150057d3;
              goto LAB_0024546c;
            }
          }
        }
        else if (local_1bc < 0x7216f600) {
          if (local_1bc == 0x6acd32ff) {
            uVar26 = DAT_004b28c8 ^ DAT_004b28cc;
            _objc_msgSend(local_1e0[2],local_a8);
            auVar33 = _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = auVar33._8_8_;
            auVar29._0_8_ = local_e8;
            local_b0 = auVar33._0_8_;
            bVar21 = 0x323e8560 < ((uVar26 ^ 0xfff80) & 0x11020a8);
            iVar25 = 0x20bc25bb;
            iVar27 = -0x385f984;
            goto LAB_00245f6c;
          }
          cVar1 = local_14a;
          if (local_1bc == 0x707b4742) goto LAB_0024521c;
        }
        else if (local_1bc == 0x7216f600) {
          iVar25 = -0x528ea02b;
          if (local_f9 == '\0') {
            iVar25 = -0x340d315b;
          }
          *local_1c8 = iVar25;
          local_168 = 0;
        }
        else if (local_1bc == 0x754f6261) {
          uVar26 = DAT_004b28e8 * DAT_004b28ec + 0xa7fb30ecU | 0x3663722a;
          local_c0 = PTR_s_stringByAppendingPathComponent__00489550;
          _objc_msgSend(local_b0,PTR_s_stringByAppendingPathComponent__00489550,
                        &PTR____CFConstantStringClassReference_004b08e0);
          auVar32 = _objc_retainAutoreleasedReturnValue();
          bVar22 = 0x9d397e49 < uVar26;
          bVar21 = uVar26 == 0x9d397e4a;
          iVar27 = 0x68232b41;
          iVar25 = -0x21656fbd;
          goto LAB_002467f0;
        }
        goto LAB_00243be4;
      }
      if (0x7bd37026 < local_1bc) {
        if (local_1bc < 0x7cf19102) {
          if (local_1bc == 0x7bd37027) {
            *local_90 = local_128;
            _objc_release(local_158);
            _objc_retain(local_128);
            *local_1c8 = -0x2c8d59e7;
            param_2 = extraout_x1_16;
          }
          else if (local_1bc == 0x7bea8daf) {
            uVar26 = (DAT_004b2928 | DAT_004b292c) & 0xff47fd1d | 0xfd47dd14;
            FUN_00250328();
            auVar30 = _objc_retainAutoreleasedReturnValue();
            bVar22 = 0x6e5d884c < uVar26;
            bVar21 = uVar26 == 0x6e5d884d;
            iVar25 = -0x5cc8e7dc;
            iVar27 = 0xaf64899;
            goto LAB_00245bf4;
          }
        }
        else if (local_1bc == 0x7cf19102) {
          *local_1c8 = 0x3b242f5e;
        }
        else if (local_1bc == 0x7eedb044) {
          local_1b8 = local_190;
          bVar21 = 0xbd5fdd5c < DAT_004b2a10 * DAT_004b2a14 * 0xa35767d + 0x9c70b3b0U;
          iVar25 = -0x4b463ab2;
          iVar27 = -0x5f102085;
          auVar29 = auVar33;
LAB_00245f6c:
          auVar17._8_8_ = auVar29._8_8_;
          auVar17._0_8_ = local_110;
          auVar31._8_8_ = auVar29._8_8_;
          auVar31._0_8_ = local_110;
          local_e8 = auVar29._0_8_;
          if (bVar21) {
            iVar27 = iVar25;
            auVar31 = auVar17;
          }
          goto LAB_002467f4;
        }
        goto LAB_00243be4;
      }
      if (local_1bc < 0x76b202c5) {
        if (local_1bc == 0x7586d212) {
          local_14b = FUN_0025131c();
          *local_1c8 = 0x3a1b8941;
          param_2 = extraout_x1_15;
        }
        else if (local_1bc == 0x7649b233) {
          _objc_release(local_e8);
          *local_1c8 = -0x59e0bcc1;
          param_2 = extraout_x1_00;
        }
        goto LAB_00243be4;
      }
      if (local_1bc == 0x76b202c5) {
        _objc_msgSend(local_f8,local_108);
        _objc_retainAutoreleasedReturnValue();
        *local_1c8 = 0x6998ed94;
        param_2 = extraout_x1_18;
        goto LAB_00243be4;
      }
      if (local_1bc != 0x79e0e4e2) goto LAB_00243be4;
      uVar26 = (DAT_004b28b8 ^ DAT_004b28bc) & 0xf56ecbf5 | 0xe166c365;
      bVar22 = 0xf8a3c8ab < uVar26;
      bVar21 = uVar26 == 0xf8a3c8ac;
      iVar27 = 0x79e0e4e2;
      iVar25 = 0x6a78a1a;
      auVar32 = auVar8;
LAB_002467f0:
      auVar18._8_8_ = auVar32._8_8_;
      auVar18._0_8_ = local_110;
      auVar31._8_8_ = auVar32._8_8_;
      auVar31._0_8_ = local_110;
      local_c8 = auVar32._0_8_;
      if (!bVar22 || bVar21) {
        iVar27 = iVar25;
        auVar31 = auVar18;
      }
      goto LAB_002467f4;
    }
    if (0x4e583a87 < local_1bc) {
      if (local_1bc < 0x5b7841bf) {
        if (local_1bc < 0x54000ff0) {
          if (local_1bc == 0x4e583a88) {
            iVar25 = -0x7f7cf284;
            if (local_b1 == '\0') {
              iVar25 = -0x3d013ea1;
            }
            *local_1c8 = iVar25;
            local_188 = 0;
          }
          else if (local_1bc == 0x4ef48ef7) {
            *local_1c8 = 0x68bba88e;
          }
        }
        else {
          if (local_1bc == 0x54000ff0) {
            bVar21 = (((DAT_004b2890 | DAT_004b2894) + 0x29f8180a) / 0x2cf9aff7 | 0xbfd93fac) ==
                     0xce32a847;
            iVar25 = -0x138686a;
            iVar27 = 0x1616c0e2;
LAB_00246900:
            if (!bVar21) {
              iVar27 = iVar25;
            }
            goto LAB_002467f4;
          }
          if (local_1bc == 0x562d2a8f) {
            bVar21 = local_71 == '\0';
            iVar25 = -0x3bf117d9;
            iVar27 = 0x3ba60445;
            goto LAB_00246734;
          }
        }
      }
      else if (local_1bc < 0x61d5a0fd) {
        if (local_1bc == 0x612f8a30) {
          *local_1c8 = -0x5abdf4bd;
        }
        else if (local_1bc == 0x5b7841bf) {
          return local_1b8;
        }
      }
      else {
        if (local_1bc == 0x61d5a0fd) {
          iVar27 = 0x46859768;
          if (0xc0cd567 < (DAT_004b2960 - DAT_004b2964) * -0x36893779 + 0x6de43a8eU) {
            iVar27 = 0x3ef74438;
          }
          goto LAB_002467f4;
        }
        if (local_1bc == 0x63267227) {
          uVar26 = (DAT_004b2978 * DAT_004b297c | 0x76cef9c4U) / 0x1cb7219 | 0x76624c9;
          bVar22 = 0x8cff8355 < uVar26;
          bVar21 = uVar26 == 0x8cff8356;
          iVar27 = 0x63267227;
          iVar25 = -0x322d3089;
          auVar32 = auVar9;
          goto LAB_002467f0;
        }
      }
      goto LAB_00243be4;
    }
    if (local_1bc < 0x4313a06a) {
      if (0x3fd0f011 < local_1bc) {
        if (local_1bc == 0x3fd0f012) {
          *local_1c8 = 0x4313a06a;
        }
        else if (local_1bc == 0x415998b9) {
          uVar26 = DAT_004b2a08 ^ DAT_004b2a0c;
          _objc_release(local_d0);
          _objc_release(local_c8);
          _objc_release(local_1b0);
          auVar31._8_8_ = extraout_x1_09;
          auVar31._0_8_ = local_110;
          bVar21 = ((uVar26 & 0x155178a5) + 0xded3957b & 0xdfa0a905) == 0xc19816d;
          iVar27 = 0x415998b9;
          iVar25 = -0x2a884d3d;
LAB_0024546c:
          if (!bVar21) {
            iVar27 = iVar25;
          }
          goto LAB_002467f4;
        }
        goto LAB_00243be4;
      }
      if (local_1bc != 0x3ef74438) {
        if (local_1bc == 0x3f1a8087) {
          local_1a0 = local_170;
          uVar26 = (DAT_004b29f0 * DAT_004b29f4 | 0x9e871ea5U) * -0x72207b3d & 0x8d987a2c;
          bVar22 = 0xc0728f57 < uVar26;
          bVar21 = uVar26 == 0xc0728f58;
          iVar27 = 0x7649b233;
          goto LAB_00246b08;
        }
        goto LAB_00243be4;
      }
      uVar26 = 0;
      if (DAT_004b296c != 0) {
        uVar26 = DAT_004b2968 / DAT_004b296c;
      }
      local_148 = PTR_s_fileExistsAtPath__0048a020;
      local_149 = _objc_msgSend(local_140,PTR_s_fileExistsAtPath__0048a020,local_130);
      auVar13._8_8_ = extraout_x1_21;
      auVar13._0_8_ = local_110;
      auVar31._8_8_ = extraout_x1_21;
      auVar31._0_8_ = local_110;
      iVar27 = -0x5c58ee14;
      if (((uint)((ulong)uVar26 * 0x1125dea7 >> 0x3c) | 0xf0efffce) < 0x9edaafe9) {
        iVar27 = 0x3ef74438;
        auVar31 = auVar13;
      }
    }
    else {
      if (0x46859767 < local_1bc) {
        if (local_1bc == 0x46859768) {
          _objc_msgSend(local_140,PTR_s_fileExistsAtPath__0048a020,local_130);
          *local_1c8 = 0x3ef74438;
          param_2 = extraout_x1_22;
        }
        else if (local_1bc == 0x488cb9b9) {
          bVar21 = 0xebf035a0 < local_6c;
          iVar25 = -0x2525a89f;
          iVar27 = -0x7a2930fe;
          goto LAB_00245f6c;
        }
        goto LAB_00243be4;
      }
      if (local_1bc != 0x4313a06a) {
        if (local_1bc == 0x43698508) {
          uVar26 = (uint)(DAT_004b29b8 + DAT_004b29bc) / 0x30a141fe + 0xd50ebfdc ^ 0x4d26acab;
          _objc_retain(local_128,param_2);
          auVar32._8_8_ = extraout_x1_06;
          auVar32._0_8_ = local_c8;
          local_158 = *local_90;
          bVar22 = 0xdc6b19b0 < uVar26;
          bVar21 = uVar26 == 0xdc6b19b1;
          iVar27 = 0x3b415f11;
          iVar25 = 0x4ef48ef7;
          goto LAB_002467f0;
        }
        goto LAB_00243be4;
      }
      iVar27 = 0x7216f600;
      if (0x2aa74729 < ((DAT_004b2948 & DAT_004b294c) * -0x64b0d7d5 | 0xca989afa) + 0x1754094a) {
        iVar27 = 0x4313a06a;
      }
    }
  }
LAB_002467f4:
  param_2 = auVar31._8_8_;
  local_110 = auVar31._0_8_;
  *local_1c8 = iVar27;
  goto LAB_00243be4;
}



// ----- -[BubbleBoxMgr userDefaults] @ 0024ea40 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::userDefaults(ID param_1,SEL param_2)

{
  int iVar1;
  int local_4c;
  ID local_48;
  ID *local_40;
  
  local_4c = -0x79f6f4c2;
LAB_0024eb34:
  if (local_4c < 0x2a7c9197) {
    if (-0x1d1388f4 < local_4c) {
      if (local_4c == -0x1d1388f3) {
        local_48 = *local_40;
        iVar1 = -0xcf67736;
        goto LAB_0024ec20;
      }
      if (local_4c == -0xcf67736) {
        iVar1 = 0x305b0b30;
        if (0x19f63d79 < ((DAT_004b31e0 & DAT_004b31e4) + 0xbe18192b & 0x6610a87d)) {
          iVar1 = 0x62c09b87;
        }
        goto LAB_0024ec20;
      }
      if (local_4c == -0x1c8bd750) {
        return local_48;
      }
      goto LAB_0024eb34;
    }
    if (local_4c == -0x79f6f4c2) {
      iVar1 = 0x75fc1d99;
      if ((DAT_004b31d0 * DAT_004b31d4 ^ 0x80c00812U | 0x3f3bd648) + 0xddbdfff8 < 0xa1580b06) {
        iVar1 = -0x76f94285;
      }
      goto LAB_0024ec20;
    }
    if (local_4c != -0x76f94285) goto LAB_0024eb34;
    iVar1 = 0x2a7c9197;
    local_40 = (ID *)(param_1 + 0x18);
  }
  else if (local_4c < 0x62c09b87) {
    if (local_4c == 0x2a7c9197) {
      iVar1 = -0x1d1388f3;
    }
    else {
      if (local_4c != 0x305b0b30) goto LAB_0024eb34;
      iVar1 = 0x62c09b87;
    }
  }
  else if (local_4c == 0x62c09b87) {
    iVar1 = -0x1c8bd750;
    if ((DAT_004b31e8 ^ DAT_004b31ec) == 0x87cd7eda) {
      iVar1 = 0x62c09b87;
    }
  }
  else {
    iVar1 = -0x76f94285;
    if (local_4c != 0x75fc1d99) goto LAB_0024eb34;
  }
LAB_0024ec20:
  local_4c = iVar1;
  goto LAB_0024eb34;
}



// ----- -[BubbleBoxMgr setUserDefaults:] @ 0024ec4c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxMgr::setUserDefaults_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  iVar4 = DAT_004b31f0 - DAT_004b31f4;
  local_7c = 0x5c74f202;
  pIVar1 = (ID *)(param_1 + 0x18);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < 0x1fd7ce10) {
            if (local_7c < -0xd553ad2) {
              if (local_7c == -0x7ad9514a) {
                _objc_release(local_78);
                param_2 = extraout_x1_01;
                local_7c = -0x73c61091;
              }
              else if (local_7c == -0x73c61091) {
                uVar2 = DAT_004b3218 ^ DAT_004b321c;
                _objc_release(local_78);
                param_2 = extraout_x1_02;
                local_7c = -0x73c61091;
                if (uVar2 * 0x7633dfb5 + 0x79646a2f < 0xfe52a298) {
                  local_7c = 0x7f5af050;
                }
              }
              else if (local_7c == -0x413f1879) {
                _objc_retain(param_3,param_2);
                param_2 = extraout_x1;
                local_7c = 0x1d7eabc3;
              }
            }
            else if (local_7c == -0xd553ad2) {
              *local_70 = param_3;
              local_7c = 0x45a3a211;
            }
            else if (local_7c == -0xa106cff) {
              local_7c = 0x45a3a211;
              if (((DAT_004b3200 & DAT_004b3204) * -0x17d9c18d + 0x86464b17) / 0x4658cf53 ==
                  0xa77c23b8) {
                local_7c = -0xd553ad2;
              }
            }
            else if (local_7c == 0x1d7eabc3) {
              iVar3 = DAT_004b31f8 * DAT_004b31fc;
              _objc_retain(param_3,param_2);
              local_78 = *pIVar1;
              param_2 = extraout_x1_00;
              local_7c = 0x44f3913e;
              local_70 = pIVar1;
              if (0xdfcf2d1e < iVar3 + 0x6e45c631U) {
                local_7c = 0x1d7eabc3;
              }
            }
          }
          if (0x45d92f82 < local_7c) break;
          if (local_7c == 0x1fd7ce10) {
            local_7c = -0x73c61091;
            if (((DAT_004b3210 + DAT_004b3214 | 0x79c88d0U) + 0x93037d48 | 0xfbf3b4d0) < 0x2aed19fa)
            {
              local_7c = -0x7ad9514a;
            }
          }
          else if (local_7c == 0x44f3913e) {
            local_7c = -0xa106cff;
          }
          else if ((local_7c == 0x45a3a211) &&
                  (uVar2 = DAT_004b3208 ^ DAT_004b320c, *local_70 = param_3, local_7c = -0xd553ad2,
                  0x9b365f11 < ((uint)((ulong)uVar2 * 0xa571a1c7 >> 0x3e) | 0x24c4a9d9) + 0x87820601
                  )) {
            local_7c = 0x45d92f83;
          }
        }
        if (local_7c != 0x45d92f83) break;
        local_7c = 0x1fd7ce10;
      }
      if (local_7c != 0x5c74f202) break;
      local_7c = 0x1d7eabc3;
      if (iVar4 * -0x3807e072 == 0x7daa12a3) {
        local_7c = -0x413f1879;
      }
    }
  } while (local_7c != 0x7f5af050);
  return;
}



// ----- -[BubbleBoxMgr contact] @ 0024eff0 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::contact(ID param_1,SEL param_2)

{
  int local_1c;
  ID local_18;
  ID *local_10;
  
  local_1c = -0x1d5fe489;
  do {
    while( true ) {
      while( true ) {
        while (-0x1280eeca < local_1c) {
          if (local_1c == -0x1280eec9) {
            local_1c = -0x5407d24c;
          }
          else if (local_1c == 0x1df83a37) {
            local_18 = *local_10;
            local_1c = -0x58781e8f;
          }
          else if (local_1c == 0x742976ed) {
            local_1c = 0x1df83a37;
          }
        }
        if (local_1c != -0x5407d24c) break;
        local_1c = 0x742976ed;
        local_10 = (ID *)(param_1 + 0x20);
        if (((DAT_004b3228 * DAT_004b322c & 0x18d7445cU) + 0x6fb8761c & 0x161f5630) == 0xc342491a) {
          local_1c = -0x5407d24c;
        }
      }
      if (local_1c != -0x1d5fe489) break;
      local_1c = -0x1280eec9;
      if (0x2e52a6a2 < (DAT_004b3220 | DAT_004b3224 | 0xff79f3fd) + 0x8d1e2345) {
        local_1c = -0x5407d24c;
      }
    }
  } while (local_1c != -0x58781e8f);
  return local_18;
}



// ----- -[BubbleBoxMgr setContact:] @ 0024f154 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxMgr::setContact_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int local_74;
  ID local_70;
  
  pIVar1 = (ID *)(param_1 + 0x20);
  local_74 = 0x76bdf3c0;
  do {
    while( true ) {
      while( true ) {
        while (0x53dc449a < local_74) {
          if (local_74 == 0x53dc449b) {
            uVar2 = DAT_004b3238 - DAT_004b323c;
            *pIVar1 = param_3;
            _objc_release(local_70,param_2);
            param_2 = extraout_x1_01;
            local_74 = -0xd9b38ac;
            if ((uVar2 | 0x2ccad36d) == 0x20e17328) {
              local_74 = 0x18a7f4bf;
            }
          }
          else if (local_74 == 0x76bdf3c0) {
            _objc_retain(param_3);
            local_70 = *pIVar1;
            param_2 = extraout_x1_00;
            local_74 = -0x419d44e;
          }
        }
        if (local_74 != -0x419d44e) break;
        uVar2 = 0;
        if (DAT_004b3234 != 0) {
          uVar2 = DAT_004b3230 / DAT_004b3234;
        }
        local_74 = 0x53dc449b;
        if (((uVar2 ^ 0x7d0bd2d9) * 0x6b339ae9) / 0x1774feb6 == 0x3a81f3bc) {
          local_74 = 0x18a7f4bf;
        }
      }
      if (local_74 != 0x18a7f4bf) break;
      *pIVar1 = param_3;
      _objc_release(local_70,param_2);
      param_2 = extraout_x1;
      local_74 = 0x53dc449b;
    }
  } while (local_74 != -0xd9b38ac);
  return;
}



// ----- -[BubbleBoxMgr b_lastTime] @ 0024f2e4 -----

/* Function Stack Size: 0x10 bytes */

unsigned_int BubbleBoxMgr::b_lastTime(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  unsigned_int local_74;
  unsigned_int *local_70;
  
  local_78 = -0x6d19acc2;
  iVar1 = local_78;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_78 = iVar1, 0x285af2e6 < local_78) {
            if (local_78 < 0x6a3da647) {
              if (local_78 == 0x285af2e7) {
                local_74 = *local_70;
                iVar1 = 0x168918d9;
                if ((((DAT_004b3258 ^ DAT_004b325c) & 0x8cd1e19) + 0x763998e1 & 0x3e7cacca) ==
                    0x4fcc04be) {
                  iVar1 = 0x7bc60a7a;
                }
              }
              else if (local_78 == 0x3ffb5863) {
                iVar1 = 0x7d276637;
              }
              else {
                iVar1 = local_78;
                if ((local_78 == 0x454c981e) &&
                   (iVar1 = 0x285af2e7,
                   ((DAT_004b3250 ^ DAT_004b3254) + 0x3709fa85 ^ 0xa067f6c6) / 0x50aca337 ==
                   0x1fba8fe5)) {
                  iVar1 = 0x7bc60a7a;
                }
              }
            }
            else {
              iVar1 = 0x6d64afc;
              if ((((local_78 != 0x6a3da647) && (iVar1 = 0x285af2e7, local_78 != 0x7bc60a7a)) &&
                  (iVar1 = local_78, local_78 == 0x7d276637)) &&
                 (iVar1 = 0x941c846,
                 ((DAT_004b3268 & DAT_004b326c) * 0x48157207 ^ 0xc18e3670) + 0x3ba57dbb < 0x2ead349b
                 )) {
                iVar1 = 0x7d276637;
              }
            }
          }
          iVar1 = 0x6d64afc;
          if (0x6d64afb < local_78) break;
          if (local_78 == -0x6d19acc2) {
            if (((DAT_004b3240 & DAT_004b3244) / 0x7d09bd0b | 0xb57a1416) + 0xa2cbcc4a < 0x30046801)
            {
              iVar1 = 0x6a3da647;
            }
          }
          else if (local_78 == -0x4725fa49) {
            iVar1 = 0x454c981e;
          }
          else {
            iVar1 = local_78;
            if ((local_78 == -0x3d5bd7d2) &&
               (iVar1 = 0x3ffb5863,
               ((DAT_004b3260 | DAT_004b3264) * -0x5332d59b & 0x9d1ccf32) != 0x353ce878)) {
              iVar1 = 0x7d276637;
            }
          }
        }
        if (local_78 != 0x6d64afc) break;
        local_70 = (unsigned_int *)(param_1 + 0x10);
        if ((DAT_004b3248 | DAT_004b324c) != 0x4fbb2afb) {
          iVar1 = -0x4725fa49;
        }
      }
      if (local_78 != 0x168918d9) break;
      iVar1 = -0x3d5bd7d2;
    }
    iVar1 = local_78;
  } while (local_78 != 0x941c846);
  return local_74;
}



// ----- -[BubbleBoxMgr setB_lastTime:] @ 0024f62c -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxMgr::setB_lastTime_(ID param_1,SEL param_2,unsigned_int param_3)

{
  uint uVar1;
  int local_c;
  
  local_c = -0x32c75808;
  do {
    while( true ) {
      while (local_c < -0xe1ed1f8) {
        if (local_c == -0x774e16fb) {
          uVar1 = DAT_004b3278 ^ DAT_004b327c;
          *(unsigned_int *)(param_1 + 0x10) = param_3;
          local_c = 0x33e79f5f;
          if ((uVar1 * 0x70c34ba6 & 0x440dce) + 0x1ccebc06 < 0x2f69d702) {
            local_c = -0xe1ed1f8;
          }
        }
        else {
          if (local_c == -0x32c75808) goto LAB_0024f6dc;
          if (local_c == -0x4bc75819) {
            return;
          }
        }
      }
      if (local_c == -0xe1ed1f8) break;
      if (local_c == 0x33e79f5f) {
        *(unsigned_int *)(param_1 + 0x10) = param_3;
LAB_0024f6dc:
        local_c = -0x774e16fb;
      }
    }
    local_c = -0x4bc75819;
  } while( true );
}



// ----- -[BubbleBoxMgr bubbles] @ 0024f730 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::bubbles(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_1c;
  ID local_18;
  ID *local_10;
  
  uVar1 = 0;
  if (DAT_004b3284 != 0) {
    uVar1 = DAT_004b3280 / DAT_004b3284;
  }
  local_1c = -0x1792417c;
  do {
    while( true ) {
      while( true ) {
        while (local_1c < 0x2218bc58) {
          if (local_1c == -0x1792417c) {
            local_1c = 0xe7a0d9d;
            if (0x8c6ec847 < (uVar1 | 0xac9dd2e7) + 0xad77a1ce) {
              local_1c = 0x19e60598;
            }
          }
          else if (local_1c == 0xe7a0d9d) {
            local_1c = 0x2218bc58;
            local_10 = (ID *)(param_1 + 0x28);
            if (((DAT_004b3288 | DAT_004b328c) + 0x9a2f775a ^ 0x37000224 | 0x48e8f88a) == 0x537d6028
               ) {
              local_1c = 0xe7a0d9d;
            }
          }
          else if (local_1c == 0x19e60598) {
            local_1c = 0xe7a0d9d;
          }
        }
        if (local_1c != 0x2218bc58) break;
        local_1c = 0x2f7ca4cc;
      }
      if (local_1c != 0x2f7ca4cc) break;
      local_18 = *local_10;
      local_1c = 0x34837dc5;
    }
  } while (local_1c != 0x34837dc5);
  return local_18;
}



// ----- -[BubbleBoxMgr setBubbles:] @ 0024f894 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxMgr::setBubbles_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004b3290 + DAT_004b3294;
  local_7c = -0x644a2c0b;
LAB_0024f94c:
  do {
    while (0x147bf594 < local_7c) {
      if (local_7c < 0x302185a6) {
        if (local_7c == 0x147bf595) {
          *local_70 = param_3;
          local_7c = -0x57304da4;
        }
        else if (local_7c == 0x24eb5af6) {
          local_7c = 0x613cbbbd;
        }
        else if (local_7c == 0x26e2c7ac) {
          _objc_retain(param_3);
          param_2 = extraout_x1;
          local_7c = -0x71c7dfc1;
        }
      }
      else if (local_7c == 0x302185a6) {
        local_7c = 0x147bf595;
        if ((((DAT_004b32a0 | DAT_004b32a4) ^ 0x5a3394d7) + 0xbe9cbcff | 0x7654640a) < 0x855933c5) {
          local_7c = -0x57304da4;
        }
      }
      else if (local_7c == 0x613cbbbd) {
        bVar4 = 0x58da64f9 < ((DAT_004b32b0 | DAT_004b32b4) + 0xc86df937 ^ 0xebd77e8) * 0x466888b0;
        local_7c = 0x63be5d29;
LAB_0024fc08:
        if (bVar4) {
          local_7c = -0x7d45c21d;
        }
      }
      else if (local_7c == 0x63be5d29) {
        _objc_release(local_78,param_2);
        param_2 = extraout_x1_00;
        local_7c = -0x7d45c21d;
      }
    }
    if (local_7c < -0x5b1d29e4) {
      if (local_7c == -0x7d45c21d) {
        uVar2 = DAT_004b32b8 | DAT_004b32bc;
        _objc_release(local_78,param_2);
        bVar4 = 0x16622138 < (uVar2 * 0x2d78eca5 ^ 0x92fb308e);
        local_7c = -0x5b1d29e4;
        param_2 = extraout_x1_01;
        goto LAB_0024fc08;
      }
      if (local_7c == -0x71c7dfc1) {
        uVar2 = DAT_004b3298 & DAT_004b329c;
        _objc_retain(param_3);
        param_2 = extraout_x1_02;
        local_7c = -0x138c4e1;
        local_70 = (ID *)(param_1 + 0x28);
        if (0x8016388a < (uVar2 + 0xf54330dd | 0x64267c73) + 0xdc061f92) {
          local_7c = 0x26e2c7ac;
        }
      }
      else if ((local_7c == -0x644a2c0b) &&
              (local_7c = -0x71c7dfc1, (uVar1 ^ 0x25befd58) * 0x26174b3b + 0x2d42a44 < 0x218041d4))
      {
        local_7c = 0x26e2c7ac;
      }
      goto LAB_0024f94c;
    }
    if (local_7c == -0x57304da4) {
      iVar3 = DAT_004b32a8 * DAT_004b32ac;
      local_78 = *local_70;
      *local_70 = param_3;
      local_7c = 0x24eb5af6;
      if (0xae30ccd < ((iVar3 + 0xfc31d304U) / 0x11ab2e14 & 7)) {
        local_7c = 0x147bf595;
      }
    }
    else if (local_7c == -0x138c4e1) {
      local_7c = 0x302185a6;
    }
    else if (local_7c == -0x5b1d29e4) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxMgr bubbleInfoCache] @ 0024fc48 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxMgr::bubbleInfoCache(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_24;
  ID local_20;
  
  local_24 = 0x1726fa0b;
  do {
    while( true ) {
      while( true ) {
        while (-0x16e5d3b1 < local_24) {
          if (local_24 == -0x16e5d3b0) {
            local_24 = -0x18f97095;
          }
          else if ((local_24 == 0x1726fa0b) &&
                  (local_24 = -0x18f97095,
                  ((uint)((ulong)(((DAT_004b32c0 ^ DAT_004b32c4) & 0x8c7809ee) >> 1) * 0x205ac667 >>
                         0x3b) | 0x5ad1a0be) == 0x4788d276)) {
            local_24 = -0x16e5d3b0;
          }
        }
        if (local_24 != -0x5fe08ec0) break;
        local_24 = -0x7e492383;
      }
      if (local_24 != -0x18f97095) break;
      uVar1 = 0;
      if (DAT_004b32cc != 0) {
        uVar1 = DAT_004b32c8 / DAT_004b32cc;
      }
      local_20 = *(ID *)(param_1 + 0x30);
      local_24 = -0x16e5d3b0;
      if (0x442561aa < (uVar1 & 0xcc9f4e7b) * -0x1a47f20f + 0xcfe87188) {
        local_24 = -0x5fe08ec0;
      }
    }
  } while (local_24 != -0x7e492383);
  return local_20;
}



// ----- -[BubbleBoxMgr setBubbleInfoCache:] @ 0024fda0 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxMgr::setBubbleInfoCache_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int local_74;
  ID *local_70;
  
  local_74 = 0x2463382e;
  iVar2 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar2, iVar2 = local_74, local_74 < 0x2a140707) {
            if (local_74 < -0x23d84f45) {
              if (local_74 == -0x60f5a6d5) {
                iVar2 = 0x6244852b;
                if ((((DAT_004b32e0 - DAT_004b32e4) + 0xe3cc119U >> 2) / 0x38c4e0a7 | 0xefdfa560) !=
                    0xb718249) {
                  iVar2 = 0x7630adc9;
                }
              }
              else if ((local_74 == -0x409f668b) &&
                      (iVar2 = 0x6397e5f7, local_70 = (ID *)(param_1 + 0x30),
                      0xbd64fc17 <
                      ((DAT_004b32d8 ^ DAT_004b32dc | 0xc58246ec) / 0xd9d63d5 ^ 0xbf9773f2))) {
                iVar2 = 0x2a140707;
              }
            }
            else if (local_74 == -0x23d84f45) {
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_01;
              iVar2 = -0x60f5a6d5;
            }
            else if (local_74 == 0x2463382e) {
              iVar2 = -0x409f668b;
            }
          }
          if (local_74 < 0x6397e5f7) break;
          iVar2 = -0x409f668b;
          if ((local_74 != 0x6397e5f7) && (iVar2 = local_74, local_74 == 0x7630adc9)) {
            uVar1 = DAT_004b32e8 | DAT_004b32ec;
            IVar3 = *local_70;
            *local_70 = param_3;
            _objc_release(IVar3);
            param_2 = extraout_x1_00;
            iVar2 = 0x6244852b;
            if (0x992d4b68 < (uVar1 | 0x390f3f6c) * 0x629c9113 + 0xb88656ba) {
              iVar2 = 0x2f52067e;
            }
          }
        }
        if (local_74 != 0x2a140707) break;
        iVar2 = -0x23d84f45;
      }
      if (local_74 != 0x6244852b) break;
      IVar3 = *local_70;
      *local_70 = param_3;
      _objc_release(IVar3);
      param_2 = extraout_x1;
      iVar2 = 0x7630adc9;
    }
  } while (local_74 != 0x2f52067e);
  return;
}



// ----- -[BubbleBoxMgr .cxx_destruct] @ 00250050 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxMgr::_cxx_destruct(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  long local_70;
  
  iVar1 = DAT_004b32f0 * DAT_004b32f4;
  local_74 = -0x1e21c02c;
LAB_00250100:
  if (local_74 < -0x1e21c02c) {
    if (local_74 < -0x2165d04c) {
      if (local_74 == -0x72613f5c) {
        iVar3 = 0x7dffc3b0;
        if (((DAT_004b3300 ^ DAT_004b3304) + 0x31626fd6) / 0x285c5197 != 0x78ed622a) {
          iVar3 = 0xfdf1105;
        }
        goto LAB_002502ec;
      }
      if (local_74 == -0x5d6e2b82) {
        iVar3 = 0x4b437f16;
        goto LAB_002502ec;
      }
      if (local_74 == -0x7a4e4785) {
        return;
      }
      goto LAB_00250100;
    }
    if (local_74 == -0x2165d04c) {
      local_70 = param_1 + 0x30;
      iVar3 = -0x2165d04c;
      if (((DAT_004b32f8 + DAT_004b32fc & 0x36f13ffU) * -0x134816d8 & 0x8b007688) != 0xc78117b0) {
        iVar3 = -0x5d6e2b82;
      }
      goto LAB_002502ec;
    }
    iVar3 = -0x2165d04c;
    if (local_74 != -0x1e3d66c5) goto LAB_00250100;
  }
  else if (local_74 < 0x4b437f16) {
    if (local_74 == -0x1e21c02c) {
      iVar3 = -0x1e3d66c5;
      if ((iVar1 * 0x7bb894dd | 0xf7221774U) != 0x65a2c172) {
        iVar3 = -0x2165d04c;
      }
    }
    else {
      if (local_74 != 0xfdf1105) goto LAB_00250100;
      uVar2 = DAT_004b3308 | DAT_004b330c;
      _objc_storeStrong(param_1 + 0x20,0);
      _objc_storeStrong(param_1 + 0x18,0);
      _objc_storeStrong(param_1 + 8,0);
      iVar3 = -0x7a4e4785;
      if ((uVar2 & 0x9b2861ff) == 0xd3780b23) {
        iVar3 = 0x7dffc3b0;
      }
    }
  }
  else if (local_74 == 0x4b437f16) {
    _objc_storeStrong(local_70,0);
    _objc_storeStrong(param_1 + 0x28,0);
    iVar3 = -0x72613f5c;
  }
  else {
    if (local_74 != 0x7dffc3b0) goto LAB_00250100;
    _objc_storeStrong(param_1 + 0x20,0);
    _objc_storeStrong(param_1 + 0x18,0);
    _objc_storeStrong(param_1 + 8,0);
    iVar3 = 0xfdf1105;
  }
LAB_002502ec:
  local_74 = iVar3;
  goto LAB_00250100;
}


