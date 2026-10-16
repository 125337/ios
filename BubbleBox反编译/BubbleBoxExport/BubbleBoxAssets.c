
// ===================== @interface BubbleBoxAssets : 24 methods =====================

// ----- -[BubbleBoxAssets init] @ 0014a95c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxAssets::init(ID param_1,SEL param_2)

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
  ID IVar24;
  ID *pIVar25;
  bool bVar26;
  undefined8 uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  SEL extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar28;
  int iVar29;
  int iVar30;
  undefined1 *puVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  ID local_c0 [3];
  int *local_a8;
  int local_9c;
  undefined8 local_98;
  undefined *local_90;
  undefined *puStack_88;
  char local_79;
  ID local_78;
  undefined1 *local_70;
  uint local_64;
  
  local_64 = (DAT_004a3a40 | DAT_004a3a44) * 0x263447bd + 0x991d727b & 0xe4132bc8;
  local_9c = 0x6cf77196;
  local_a8 = &local_9c;
  pIVar25 = local_c0 + 2;
  local_c0[2] = param_1;
LAB_0014aa24:
  auVar33._8_8_ = param_2;
  auVar33._0_8_ = local_78;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_98;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = local_98;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_98;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_98;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_98;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_98;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_98;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_98;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_98;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_98;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_98;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_98;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_98;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_98;
  auVar32._8_8_ = param_2;
  auVar32._0_8_ = local_98;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_98;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_98;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_98;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_98;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_98;
  puVar31 = (undefined1 *)pIVar25;
  if (local_9c < 0xe1b05ef) {
    if (local_9c < -0x1e74fa79) {
      if (local_9c < -0x4eac1079) {
        if (local_9c == -0x73f8ce4e) {
          *(undefined **)(local_70 + 8) = PTR_BubbleBoxAssets_0048cd68;
          auVar32._0_8_ = local_98;
          iVar30 = 0x7e4ecb47;
        }
        else {
          if (local_9c == -0x72972331) {
            iVar30 = -0x2d0b569f;
            auVar32 = auVar18;
            if ((DAT_004a3a98 + DAT_004a3a9c + 0x555736f3U ^ 0x1721c108 | 0x48c236e3) == 0xc63bcfbf)
            {
              iVar30 = -0x72972331;
              auVar32 = auVar19;
            }
            goto LAB_0014b180;
          }
          if (local_9c != -0x6ee40e91) goto LAB_0014aa24;
          uVar1 = DAT_004a3a88 + DAT_004a3a8c;
          _objc_msgSend(local_78,PTR_s_setBubbleFiles__0048afe0,local_98);
          _objc_release(local_98);
          _objc_msgSend(local_78,PTR_s_initBubbleFiles_0048afe8);
          _objc_msgSend(local_78,PTR_s_initBubbleInfo_0048aff0);
          auVar17._8_8_ = extraout_x1;
          auVar17._0_8_ = local_98;
          auVar32._8_8_ = extraout_x1;
          auVar32._0_8_ = local_98;
          iVar30 = 0x1f0f33c4;
          if (((uVar1 | 0x3c529cbb) + 0x5678fd3a | 0x9b37e1e0) < 0x415925fd) {
            iVar30 = 0x19d1d282;
            auVar32 = auVar17;
          }
        }
      }
      else {
        if (-0x2d0b56a0 < local_9c) {
          if (local_9c == -0x1f8cd4f1) {
            iVar30 = -0x72972331;
            auVar32 = auVar20;
            if ((((DAT_004a3a90 & DAT_004a3a94) * -0x4ff9f531) / 0xc1e12cc ^ 0xf02dc8a6) <
                0x394bd1a1) {
              iVar30 = 0xc20b1b6;
              auVar32 = auVar21;
            }
            goto LAB_0014b180;
          }
          if (local_9c == -0x2d0b569f) {
            return local_78;
          }
          goto LAB_0014aa24;
        }
        if (local_9c == -0x4eac1079) {
          puVar31 = (undefined1 *)((long)pIVar25 + -0x10);
          *(ID *)((long)pIVar25 + -0x10) = local_c0[2];
          iVar30 = 0x186b9e6b;
          local_70 = puVar31;
          auVar32 = auVar22;
          if (((DAT_004a3a48 | DAT_004a3a4c) * -0x18b87fad & 0x2ddb42f7) == 0x52bccf99) {
            iVar30 = 0x112f59ca;
            auVar32 = auVar23;
          }
          goto LAB_0014b180;
        }
        if (local_9c != -0x31bebda0) goto LAB_0014aa24;
        uVar1 = DAT_004a3a78 & DAT_004a3a7c;
        _objc_msgSend(puStack_88,local_90);
        auVar32 = _objc_retainAutoreleasedReturnValue();
        iVar30 = 0x51d3b6;
        if ((uVar1 + 0x1b9812fb & 0xfffeef6f | 0xbc9e6720) == 0x4d906581) {
          iVar30 = -0x47b1ef6;
        }
      }
    }
    else if (local_9c < -0x47b1ef6) {
      if (local_9c == -0x1e74fa79) {
        uVar1 = 0;
        if (DAT_004a3a74 != 0) {
          uVar1 = DAT_004a3a70 / DAT_004a3a74;
        }
        iVar30 = -0x47b1ef6;
        auVar32 = auVar14;
        if ((uVar1 ^ 0xf135b62c) + 0x116c649d < 0x553c27ab) {
          iVar30 = -0x31bebda0;
          auVar32 = auVar15;
        }
      }
      else {
        if (local_9c == -0x1ba0d43b) {
          uVar27 = _objc_alloc_init(PTR__OBJC_CLASS___NSCache_0048cae0,param_2);
          IVar24 = local_78;
          uVar28 = *(undefined8 *)(local_78 + 0x20);
          *(undefined8 *)(local_78 + 0x20) = uVar27;
          _objc_release(uVar28);
          _objc_msgSend(*(undefined8 *)(IVar24 + 0x20),PTR_s_setTotalCostLimit__0048afd8,0x3200000);
          auVar32._8_8_ = extraout_x1_00;
          auVar32._0_8_ = local_98;
          local_90 = PTR_s_array_00489b98;
          puStack_88 = PTR__OBJC_CLASS___NSMutableArray_0048ca60;
          iVar30 = -0x1e74fa79;
          goto LAB_0014b180;
        }
        if (local_9c != -0x109f1242) goto LAB_0014aa24;
        iVar30 = DAT_004a3a68 + DAT_004a3a6c;
        auVar33 = _objc_msgSendSuper2(local_70,PTR_s_init_00489660);
        local_79 = auVar33._0_8_ == 0;
        bVar26 = 0x814556e4 < (iVar30 + 0x62976cf1U ^ 0x6ee5c50f) + 0x50952069;
        iVar30 = 0x33e5b268;
        iVar29 = 0x2216beb0;
LAB_0014ace8:
        local_78 = auVar33._0_8_;
        auVar16._8_8_ = auVar33._8_8_;
        auVar16._0_8_ = local_98;
        auVar32._8_8_ = auVar33._8_8_;
        auVar32._0_8_ = local_98;
        if (bVar26) {
          iVar30 = iVar29;
          auVar32 = auVar16;
        }
      }
    }
    else if (local_9c == -0x47b1ef6) {
      _objc_msgSend(puStack_88,local_90);
      _objc_retainAutoreleasedReturnValue();
      auVar32._8_8_ = extraout_x1_02;
      auVar32._0_8_ = local_98;
      iVar30 = -0x31bebda0;
    }
    else if (local_9c == 0x51d3b6) {
      iVar30 = 0xe1b05ef;
      auVar32 = auVar3;
    }
    else {
      if (local_9c != 0xc20b1b6) goto LAB_0014aa24;
      iVar30 = -0x72972331;
      auVar32 = auVar2;
    }
  }
  else if (local_9c < 0x2216beb0) {
    if (local_9c < 0x19d1d282) {
      if (local_9c == 0xe1b05ef) {
        iVar30 = 0x19d1d282;
        auVar32 = auVar12;
        if (((DAT_004a3a80 * DAT_004a3a84 | 0xaa49a37cU) + 0x485e2f7c & 0xd7535fa2) != 0xca59e255) {
          iVar30 = -0x6ee40e91;
          auVar32 = auVar13;
        }
      }
      else if (local_9c == 0x112f59ca) {
        *(ID *)((long)pIVar25 + -0x10) = local_c0[2];
        puVar31 = (undefined1 *)((long)pIVar25 + -0x10);
        iVar30 = -0x4eac1079;
        auVar32 = auVar5;
      }
      else {
        if (local_9c != 0x186b9e6b) goto LAB_0014aa24;
        iVar30 = 0x6a610c97;
        auVar32 = auVar4;
      }
    }
    else if (local_9c == 0x19d1d282) {
      _objc_msgSend(local_78,PTR_s_setBubbleFiles__0048afe0,local_98);
      _objc_release(local_98);
      _objc_msgSend(local_78,PTR_s_initBubbleFiles_0048afe8);
      _objc_msgSend(local_78,PTR_s_initBubbleInfo_0048aff0);
      auVar32._8_8_ = extraout_x1_03;
      auVar32._0_8_ = local_98;
      iVar30 = -0x6ee40e91;
    }
    else if (local_9c == 0x1ab8b8e9) {
LAB_0014af30:
      auVar32._8_8_ = param_2;
      auVar32._0_8_ = local_98;
      iVar30 = -0x109f1242;
    }
    else {
      iVar30 = -0x1f8cd4f1;
      auVar32 = auVar11;
      if (local_9c != 0x1f0f33c4) goto LAB_0014aa24;
    }
  }
  else if (local_9c < 0x6a610c97) {
    if (local_9c == 0x2216beb0) {
      iVar30 = -0x1f8cd4f1;
      auVar32 = auVar9;
      if (local_79 == '\0') {
        iVar30 = -0x1ba0d43b;
        auVar32 = auVar10;
      }
    }
    else {
      if (local_9c == 0x33e5b268) {
        _objc_msgSendSuper2(local_70,PTR_s_init_00489660);
        param_2 = extraout_x1_01;
        goto LAB_0014af30;
      }
      if (local_9c != 0x62878e7a) goto LAB_0014aa24;
      iVar30 = 0x1ab8b8e9;
      auVar32 = auVar6;
    }
  }
  else if (local_9c == 0x6a610c97) {
    iVar30 = -0x73f8ce4e;
    if ((DAT_004a3a50 * DAT_004a3a54 + 0x8759735cU | 0x57272a2a) + 0x16ced700 < 0xef4531fe) {
      iVar30 = 0x7e4ecb47;
      auVar32 = auVar7;
    }
  }
  else {
    if (local_9c != 0x7e4ecb47) {
      if (local_9c == 0x6cf77196) {
        bVar26 = 0xd6cdf2d8 < local_64;
        iVar30 = -0x4eac1079;
        iVar29 = 0x112f59ca;
        goto LAB_0014ace8;
      }
      goto LAB_0014aa24;
    }
    *(undefined **)(local_70 + 8) = PTR_BubbleBoxAssets_0048cd68;
    auVar8._8_8_ = param_2;
    auVar8._0_8_ = local_98;
    auVar32._0_8_ = local_98;
    iVar30 = 0x7e4ecb47;
    if (((DAT_004a3a58 & DAT_004a3a5c ^ 0x19c2a11) & 0x19eba55) != 0x255861a4) {
      iVar30 = 0x62878e7a;
      auVar32 = auVar8;
    }
  }
LAB_0014b180:
  param_2 = auVar32._8_8_;
  local_98 = auVar32._0_8_;
  *local_a8 = iVar30;
  pIVar25 = (ID *)puVar31;
  goto LAB_0014aa24;
}



// ----- -[BubbleBoxAssets initBubbleInfo] @ 0014b1c0 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxAssets::initBubbleInfo(ID param_1,SEL param_2)

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
  undefined1 *puVar32;
  bool bVar33;
  bool bVar34;
  undefined8 uVar35;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  SEL extraout_x1_05;
  undefined8 extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  undefined8 extraout_x1_09;
  uint uVar36;
  int iVar37;
  int iVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auStack_150 [8];
  int *local_148;
  int local_13c;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  char local_111;
  long local_110;
  char local_101;
  long local_100;
  undefined8 local_f8;
  char local_e9;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined *local_d8;
  long *local_d0;
  long local_c8;
  long *local_c0;
  undefined8 *local_b8;
  char local_a9;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  byte local_77;
  byte local_76;
  char local_75;
  int local_74;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = DAT_004d1474;
  local_148 = &local_13c;
  local_13c = -0x7fd38138;
  puVar32 = auStack_150;
LAB_0014b280:
  auVar41._8_8_ = param_2;
  auVar41._0_8_ = local_a8;
  auVar31._8_8_ = param_2;
  auVar31._0_8_ = local_a8;
  auVar30._8_8_ = param_2;
  auVar30._0_8_ = local_a8;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_110;
  auVar28._8_8_ = param_2;
  auVar28._0_8_ = local_110;
  auVar26._8_8_ = param_2;
  auVar26._0_8_ = local_110;
  auVar25._8_8_ = param_2;
  auVar25._0_8_ = local_110;
  auVar24._8_8_ = param_2;
  auVar24._0_8_ = local_110;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_110;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_110;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_110;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_110;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_110;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_110;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_110;
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
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_110;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_110;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_110;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_110;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_110;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_110;
  auVar40._8_8_ = param_2;
  auVar40._0_8_ = local_110;
  auVar39._8_8_ = param_2;
  auVar39._0_8_ = local_90;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = local_90;
  if (local_13c < 0x11e648a4) {
    if (local_13c < -0x45c9632b) {
      if (local_13c < -0x69dd25cd) {
        if (local_13c < -0x794f13ee) {
          if (local_13c < -0x7cf91309) {
            if (local_13c == -0x7fd38138) {
              bVar34 = (DAT_004a3aa0 & DAT_004a3aa4) * -0x58473570 == 0x34ee6e34;
              iVar37 = -0x20e8f1f8;
              iVar38 = 0x4d1c8d80;
              goto LAB_0014c988;
            }
            if (local_13c == -0x7d2c67de) {
              _objc_release(local_98);
              *local_148 = -0x2e235a35;
              param_2 = extraout_x1_01;
            }
          }
          else if (local_13c == -0x7cf91309) {
            local_e0 = (undefined8 *)(*local_d0 + local_138 * 8);
            *local_148 = 0x3cd1369c;
          }
          else if (local_13c == -0x7ca78434) {
            iVar37 = 0x2328bb98;
            if (local_111 == '\0') {
              iVar37 = 0x35f5a5ee;
            }
            *local_148 = iVar37;
            local_120 = local_110;
          }
          goto LAB_0014b280;
        }
        if (local_13c < -0x7346c030) {
          if (local_13c == -0x794f13ee) {
            _objc_msgSend(local_e8,local_d8,&PTR____CFConstantStringClassReference_004a2a10);
            *local_148 = -0x25a7596a;
            param_2 = extraout_x1_07;
          }
          else if (local_13c == -0x76ab9234) {
            *local_148 = 0x63739905;
          }
          goto LAB_0014b280;
        }
        if (local_13c == -0x7346c030) {
          iVar37 = 0x33487c36;
          auVar40 = auVar17;
          if (DAT_004a3b50 - DAT_004a3b54 == -0x1d962b71) {
            iVar37 = 0xeb88a79;
            auVar40 = auVar18;
          }
        }
        else {
          if (local_13c != -0x72899576) {
            if (local_13c == -0x7256d78c) {
              _objc_enumerationMutation(local_98,param_2);
              *local_148 = 0x167eb35c;
              param_2 = extraout_x1;
            }
            goto LAB_0014b280;
          }
          uVar36 = DAT_004a3b48 ^ DAT_004a3b4c;
          auVar40 = _objc_msgSend(local_98,local_a0,local_80,local_88,0x10);
          iVar37 = -0x72899576;
          if ((uVar36 * 0x184a2604 & 0x4263eae0) != 0x5ae7acb2) {
            iVar37 = 0x731db511;
          }
        }
      }
      else {
        if (local_13c < -0x6565eacc) {
          if (local_13c < -0x682cac8f) {
            if (local_13c == -0x69dd25cd) {
              bubbleFileMap(param_1,(SEL)PTR_s_bubbleFileMap_0048aff8);
              _objc_retainAutoreleasedReturnValue();
              *local_148 = 0x44e4e81;
              param_2 = extraout_x1_08;
            }
            else if (local_13c == -0x68484444) {
              *local_148 = 0x588ca2a3;
            }
          }
          else if (local_13c == -0x682cac8f) {
            *local_148 = 0x7aa4d6d8;
          }
          else if (local_13c == -0x66cfeb42) {
            uVar36 = 0;
            if (DAT_004a3b84 != 0) {
              uVar36 = DAT_004a3b80 / DAT_004a3b84;
            }
            bVar34 = (uVar36 & 0x29b21f3c | 0x28820d3c) == 0x54b28c9d;
            iVar37 = -0x2f529c91;
            iVar38 = 0x3b230dbb;
            goto LAB_0014c744;
          }
          goto LAB_0014b280;
        }
        if (-0x5130fa47 < local_13c) {
          if (local_13c == -0x5130fa46) {
            _objc_msgSend(local_98,local_a0,local_80,local_88,0x10);
            *local_148 = -0x72899576;
            param_2 = extraout_x1_05;
          }
          else if (local_13c == -0x4b6f7ddc) {
            DAT_004a29e0 = DAT_004a29b0 ^ 0xf8;
            DAT_004a29e1 = DAT_004a29b1 ^ 0x9a;
            DAT_004a29e2 = DAT_004a29b2 ^ 0xc3;
            DAT_004a29e3 = DAT_004a29b3 ^ 0x23;
            DAT_004a29e4 = DAT_004a29b4 ^ 0x56;
            DAT_004a29e5 = DAT_004a29b5 ^ 0x47;
            DAT_004a29e6 = DAT_004a29b6 ^ 0x90;
            DAT_004a29e7 = DAT_004a29b7 ^ 0xb2;
            DAT_004a29e8 = DAT_004a29b8 ^ 0x96;
            DAT_004a29e9 = DAT_004a29b9 ^ 0x49;
            DAT_004a29ea = DAT_004a29ba ^ 0x52;
            DAT_004a29eb = DAT_004a29bb ^ 0x28;
            DAT_004a29ec = DAT_004a29bc ^ 0x62;
            *local_148 = 0x729453a6;
          }
          else if (local_13c == -0x4740354d) {
LAB_0014bb24:
            *local_148 = 0x28d72ad1;
          }
          goto LAB_0014b280;
        }
        if (local_13c != -0x6565eacc) {
          if (local_13c == -0x5c9a7b10) {
            bVar34 = local_75 == '\0';
            iVar38 = 0x7aa4d6d8;
            iVar37 = -0x6565eacc;
            auVar41 = auVar30;
            goto LAB_0014cde0;
          }
          goto LAB_0014b280;
        }
        bVar34 = 0xd957e953 <
                 ((DAT_004a3ab0 ^ DAT_004a3ab4) * -0x1efde445 ^ 0x4a0a7675) + 0xdca053cd;
        iVar38 = 0x729453a6;
        iVar37 = -0x4b6f7ddc;
LAB_0014ce44:
        auVar40 = auVar25;
        if (bVar34) {
          iVar37 = iVar38;
          auVar40 = auVar26;
        }
      }
    }
    else if (local_13c < -0x2545c796) {
      if (local_13c < -0x2f529c91) {
        if (local_13c < -0x35ebae33) {
          if (local_13c == -0x45c9632b) {
            *local_148 = -0x4740354d;
          }
          else if (local_13c == -0x4437b84d) {
            *local_148 = 0x4a9fc9b5;
          }
        }
        else if (local_13c == -0x35ebae33) {
          local_b8 = local_80 + 2;
          local_c0 = (long *)*local_b8;
          *local_148 = 0x4f8c7f25;
        }
        else if (local_13c == -0x3215ae88) {
          *local_148 = 0x3d31cc75;
        }
        goto LAB_0014b280;
      }
      if (local_13c < -0x27247c2c) {
        if (local_13c == -0x2f529c91) {
          *local_148 = 0x3b230dbb;
          goto LAB_0014b280;
        }
        if (local_13c != -0x2e235a35) goto LAB_0014b280;
        uVar36 = 0;
        if (DAT_004a3b7c != 0) {
          uVar36 = DAT_004a3b78 / DAT_004a3b7c;
        }
        uVar36 = (uVar36 * 0x693d3c61 & 0xf9571c98) + 0x4bc08c7;
        _objc_release(local_98);
        bVar33 = 0xa0ce6d5e < uVar36;
        bVar34 = uVar36 == 0xa0ce6d5f;
        iVar38 = -0x7d2c67de;
        iVar37 = 0x525bbc6f;
        param_2 = extraout_x1_04;
      }
      else {
        if (local_13c != -0x27247c2c) {
          if (local_13c == -0x26de7597) {
            local_100 = local_138 + 1;
            *local_148 = 0x2456711a;
          }
          else if (local_13c == -0x25a7596a) {
            uVar36 = (DAT_004a3b18 ^ DAT_004a3b1c) * -0x1e9f9cdc + 0xc45340d8;
            local_e9 = _objc_msgSend(local_e8,local_d8,
                                     &PTR____CFConstantStringClassReference_004a2a10);
            bVar33 = 0xe7dc4c2a < uVar36;
            bVar34 = uVar36 == 0xe7dc4c2b;
            iVar37 = -0x794f13ee;
            iVar38 = 0x5240fa5d;
            param_2 = extraout_x1_00;
            goto LAB_0014bf50;
          }
          goto LAB_0014b280;
        }
        uVar36 = (DAT_004a3b68 | DAT_004a3b6c | 0xe7fa6ff9) ^ 0x18adc3be;
        bVar33 = 0x97b4232c < uVar36;
        bVar34 = uVar36 == 0x97b4232d;
        iVar38 = -0x1f8d625b;
        iVar37 = -0x7ca78434;
      }
LAB_0014c5a4:
      auVar27._8_8_ = param_2;
      auVar27._0_8_ = local_110;
      auVar40._8_8_ = param_2;
      auVar40._0_8_ = local_110;
      if (!bVar33 || bVar34) {
        iVar37 = iVar38;
        auVar40 = auVar27;
      }
    }
    else if (local_13c < -0xe1cbdef) {
      if (local_13c < -0x1f8d625b) {
        if (local_13c == -0x2545c796) {
          bVar34 = 0x192022a7 <
                   (uint)((ulong)((uint)((ulong)(uint)(DAT_004a3ad0 + DAT_004a3ad4) * 0x80f07bd9 >>
                                        0x3f) | 0xe0eab9f8) * 0x55fd4a8d >> 0x3e);
          iVar38 = -0x69dd25cd;
          iVar37 = 0x44e4e81;
          goto LAB_0014ce44;
        }
        if (local_13c == -0x20e8f1f8) {
          uVar36 = (DAT_004a3aa8 & DAT_004a3aac) / 0x355f3247 + 0x7223a27a ^ 0xc79d895;
          local_75 = local_74 == 0;
          bVar33 = 0x5f48f75 < uVar36;
          bVar34 = uVar36 == 0x5f48f76;
          iVar38 = 0x4d1c8d80;
          iVar37 = 0x4b8d6756;
          goto LAB_0014c5a4;
        }
        goto LAB_0014b280;
      }
      if (local_13c == -0x1f8d625b) {
        *local_148 = -0x27247c2c;
        goto LAB_0014b280;
      }
      if (local_13c != -0x1cb7c2a0) {
        if (local_13c == -0x161f844c) {
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
          auVar39 = _objc_retainAutoreleasedReturnValue();
          param_2 = auVar39._8_8_;
          local_f8 = auVar39._0_8_;
          *local_148 = 0x97e20e5;
        }
        goto LAB_0014b280;
      }
      DAT_004a29f3 = local_77 ^ 0x74;
      DAT_004a29f4 = DAT_004a29c4 ^ 0x81;
      DAT_004a29f5 = DAT_004a29c5 ^ 0x1c;
      DAT_004a29f6 = DAT_004a29c6 ^ 100;
      DAT_004a29f7 = DAT_004a29c7 ^ 0x9e;
      DAT_004a29f8 = DAT_004a29c8 ^ 0xfa;
      DAT_004a29f9 = DAT_004a29c9 ^ 0x11;
      DAT_004a29fa = DAT_004a29ca ^ 0x5e;
      DAT_004a29fb = DAT_004a29cb ^ 0x5b;
      DAT_004a29fc = DAT_004a29cc;
      DAT_004a29fd = DAT_004a29cd ^ 0xa2;
      DAT_004a29fe = DAT_004a29ce ^ 0xe4;
      DAT_004a29ff = DAT_004a29cf ^ 0x92;
      DAT_004a2a00 = DAT_004a29d0 ^ 0xe6;
      DAT_004a2a01 = DAT_004a29d1 ^ 0x6b;
      DAT_004a2a02 = DAT_004a29d2 ^ 0xa2;
      DAT_004a2a03 = DAT_004a29d3 ^ 0xe7;
      DAT_004a2a04 = DAT_004a29d4 ^ 0xf4;
      DAT_004a2a05 = DAT_004a29d5 ^ 0x16;
      iVar37 = -0x1cb7c2a0;
      auVar40 = auVar28;
      if ((((DAT_004a3ac8 ^ DAT_004a3acc) + 0xe9e014ca) / 0xf9f4f28 | 0xaecd97a9) != 0xb86b05cf) {
        iVar37 = -0x682cac8f;
        auVar40 = auVar29;
      }
    }
    else {
      if (0x97e20e4 < local_13c) {
        if (local_13c == 0x97e20e5) {
          *local_148 = -0xe1cbdef;
        }
        else if (local_13c == 0xeb88a79) {
          *local_148 = 0x33487c36;
        }
        else if (local_13c == 0x113068e7) {
          local_138 = local_128;
          bVar34 = *(long *)*local_b8 == local_c8;
          iVar37 = -0x7cf91309;
          iVar38 = 0x171538a7;
          goto LAB_0014c744;
        }
        goto LAB_0014b280;
      }
      if (local_13c != -0xe1cbdef) {
        if (local_13c == 0x44e4e81) {
          iVar37 = DAT_004a3ad8 + DAT_004a3adc;
          bubbleFileMap(param_1,(SEL)PTR_s_bubbleFileMap_0048aff8);
          auVar39 = _objc_retainAutoreleasedReturnValue();
          bVar34 = 0xbdcb58e7 < (iVar37 + 0xa99fde88U & 0xfff2f727 | 0x3f202705);
          iVar37 = -0x69dd25cd;
          iVar38 = -0x45c9632b;
          goto LAB_0014c554;
        }
        goto LAB_0014b280;
      }
      iVar37 = 0x6cdcd152;
      auVar40 = auVar23;
      if (((DAT_004a3b20 | DAT_004a3b24) * 0x70bf9668 + 0xbc417175 | 0xcdb0d8ad) != 0xe6e3e637) {
        iVar37 = 0x7a2e1913;
        auVar40 = auVar24;
      }
    }
  }
  else {
    if (0x4a9fc9b4 < local_13c) {
      if (local_13c < 0x63739905) {
        if (local_13c < 0x516279f2) {
          if (local_13c < 0x4c5d176e) {
            if (local_13c == 0x4a9fc9b5) {
              DAT_004a29ed = local_76;
              DAT_004a29ee = DAT_004a29be ^ 0x86;
              DAT_004a29ef = DAT_004a29bf ^ 0x3c;
              DAT_004a29f0 = DAT_004a29c0 ^ 0x55;
              DAT_004a29f1 = DAT_004a29c1 ^ 0x9d;
              DAT_004a29f2 = DAT_004a29c2 ^ 0x6a;
              local_77 = DAT_004a29c3;
              *local_148 = 0x11e648a4;
            }
            else if (local_13c == 0x4b8d6756) {
              *local_148 = -0x5c9a7b10;
            }
          }
          else {
            if (local_13c == 0x4c5d176e) {
              bVar34 = local_a9 == '\0';
              iVar37 = 0x2328bb98;
              iVar38 = -0x35ebae33;
              goto LAB_0014c988;
            }
            if (local_13c == 0x4d1c8d80) {
              *local_148 = -0x20e8f1f8;
            }
            else if (local_13c == 0x4f8c7f25) {
              local_c8 = *local_c0;
              *local_148 = 0x5566e90b;
            }
          }
        }
        else if (local_13c < 0x5566e90b) {
          if (local_13c == 0x5240fa5d) {
            bVar34 = local_e9 == '\0';
            iVar38 = -0x26de7597;
            iVar37 = -0x161f844c;
            auVar41 = auVar31;
            goto LAB_0014cde0;
          }
          if (local_13c == 0x525bbc6f) {
            *local_148 = -0x66cfeb42;
          }
          else if (local_13c == 0x516279f2) {
            if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return;
          }
        }
        else if (local_13c == 0x5566e90b) {
          local_d0 = local_80 + 1;
          *local_148 = 0x35f5a5ee;
          local_120 = local_a8;
        }
        else if (local_13c == 0x588ca2a3) {
          uVar36 = (uint)((ulong)(DAT_004a3b60 * DAT_004a3b64 * 0x78550e6d | 0x8a9e59f) * 0x21a085db
                         >> 0x3c);
          bVar33 = 0xe3e71fb8 < uVar36;
          bVar34 = uVar36 == 0xe3e71fb9;
          iVar37 = -0x1f8d625b;
          iVar38 = -0x27247c2c;
LAB_0014bf50:
          auVar19._8_8_ = param_2;
          auVar19._0_8_ = local_110;
          auVar40._8_8_ = param_2;
          auVar40._0_8_ = local_110;
          if (!bVar33 || bVar34) {
            iVar37 = iVar38;
            auVar40 = auVar19;
          }
          goto LAB_0014cea0;
        }
      }
      else if (local_13c < 0x7108e4e9) {
        if (local_13c < 0x6b97d5e3) {
          if (local_13c == 0x63739905) {
            *local_148 = -0x7cf91309;
          }
          else if (local_13c == 0x685a2565) {
            DAT_004a29f3 = local_77 ^ 0x74;
            DAT_004a29f4 = DAT_004a29c4 ^ 0x81;
            DAT_004a29f5 = DAT_004a29c5 ^ 0x1c;
            DAT_004a29f6 = DAT_004a29c6 ^ 100;
            DAT_004a29f7 = DAT_004a29c7 ^ 0x9e;
            DAT_004a29f8 = DAT_004a29c8 ^ 0xfa;
            DAT_004a29f9 = DAT_004a29c9 ^ 0x11;
            DAT_004a29fa = DAT_004a29ca ^ 0x5e;
            DAT_004a29fb = DAT_004a29cb ^ 0x5b;
            DAT_004a29fc = DAT_004a29cc;
            DAT_004a29fd = DAT_004a29cd ^ 0xa2;
            DAT_004a29fe = DAT_004a29ce ^ 0xe4;
            DAT_004a29ff = DAT_004a29cf ^ 0x92;
            DAT_004a2a00 = DAT_004a29d0 ^ 0xe6;
            DAT_004a2a01 = DAT_004a29d1 ^ 0x6b;
            DAT_004a2a02 = DAT_004a29d2 ^ 0xa2;
            DAT_004a2a03 = DAT_004a29d3 ^ 0xe7;
            DAT_004a2a04 = DAT_004a29d4 ^ 0xf4;
            DAT_004a2a05 = DAT_004a29d5 ^ 0x16;
            *local_148 = -0x1cb7c2a0;
          }
        }
        else {
          if (local_13c == 0x6b97d5e3) {
            bVar34 = DAT_004a3b10 + DAT_004a3b14 == 0x4561c51e;
            iVar37 = -0x25a7596a;
            iVar38 = -0x794f13ee;
LAB_0014c988:
            auVar40 = auVar15;
            if (bVar34) {
              iVar37 = iVar38;
              auVar40 = auVar16;
            }
            goto LAB_0014cea0;
          }
          if (local_13c == 0x6cdcd152) {
            _objc_msgSend(local_f8,PTR_s_currentBubble_0048a848);
            uVar35 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar35,PTR_s_setIsMergeBubble__0048b000,1);
            _objc_release(uVar35);
            _objc_release(local_f8);
            *local_148 = 0x7a2e1913;
            param_2 = extraout_x1_03;
          }
        }
      }
      else if (local_13c < 0x731db511) {
        if (local_13c == 0x7108e4e9) {
          iVar37 = 0x2e6f0dd4;
          if (local_101 == '\0') {
            iVar37 = 0x113068e7;
          }
          *local_148 = iVar37;
          local_128 = local_100;
        }
        else if (local_13c == 0x729453a6) {
          DAT_004a29e0 = DAT_004a29b0 ^ 0xf8;
          DAT_004a29e1 = DAT_004a29b1 ^ 0x9a;
          DAT_004a29e2 = DAT_004a29b2 ^ 0xc3;
          DAT_004a29e3 = DAT_004a29b3 ^ 0x23;
          DAT_004a29e4 = DAT_004a29b4 ^ 0x56;
          DAT_004a29e5 = DAT_004a29b5 ^ 0x47;
          DAT_004a29e6 = DAT_004a29b6 ^ 0x90;
          DAT_004a29e7 = DAT_004a29b7 ^ 0xb2;
          DAT_004a29e8 = DAT_004a29b8 ^ 0x96;
          DAT_004a29e9 = DAT_004a29b9 ^ 0x49;
          DAT_004a29ea = DAT_004a29ba ^ 0x52;
          DAT_004a29eb = DAT_004a29bb ^ 0x28;
          DAT_004a29ec = DAT_004a29bc ^ 0x62;
          local_76 = DAT_004a29bd ^ 0xcf;
          bVar34 = DAT_004a3ab8 * DAT_004a3abc * -0x2094c078 == -0x1cbfefac;
          iVar38 = 0x729453a6;
          iVar37 = -0x4437b84d;
LAB_0014cde0:
          local_a8 = auVar41._0_8_;
          auVar14._8_8_ = auVar41._8_8_;
          auVar14._0_8_ = local_110;
          auVar40._8_8_ = auVar41._8_8_;
          auVar40._0_8_ = local_110;
          if (bVar34) {
            iVar37 = iVar38;
            auVar40 = auVar14;
          }
          goto LAB_0014cea0;
        }
      }
      else if (local_13c == 0x731db511) {
        *local_148 = -0x7346c030;
      }
      else {
        if (local_13c == 0x7a2e1913) {
          iVar37 = DAT_004a3b28 + DAT_004a3b2c;
          _objc_msgSend(local_f8,PTR_s_currentBubble_0048a848);
          uVar35 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar35,PTR_s_setIsMergeBubble__0048b000,1);
          _objc_release(uVar35);
          _objc_release(local_f8);
          auVar39._8_8_ = extraout_x1_06;
          auVar39._0_8_ = local_90;
          bVar34 = 0x1d67c0f9 < (iVar37 + 0xbbea461bU | 0xffd9235a) + 0xdecf87f9;
          iVar37 = 0x6cdcd152;
          iVar38 = 0x2ae2ae85;
          goto LAB_0014c554;
        }
        if (local_13c == 0x7aa4d6d8) {
          DAT_004d1474 = 1;
          local_80 = (undefined8 *)(puVar32 + -0x40);
          *(undefined8 *)(puVar32 + -0x38) = 0;
          *local_80 = 0;
          *(undefined8 *)(puVar32 + -0x28) = 0;
          *(undefined8 *)(puVar32 + -0x30) = 0;
          *(undefined8 *)(puVar32 + -0x18) = 0;
          *(undefined8 *)(puVar32 + -0x20) = 0;
          *(undefined8 *)(puVar32 + -8) = 0;
          *(undefined8 *)(puVar32 + -0x10) = 0;
          local_88 = puVar32 + -0xc0;
          *local_148 = -0x2545c796;
          puVar32 = puVar32 + -0xc0;
        }
      }
      goto LAB_0014b280;
    }
    if (local_13c < 0x2cfc5037) {
      if (local_13c < 0x18da270d) {
        if (local_13c < 0x167eb35c) {
          if (local_13c != 0x11e648a4) {
            if (local_13c == 0x11edf401) {
              *local_148 = 0x113068e7;
              local_128 = 0;
            }
            goto LAB_0014b280;
          }
          iVar37 = 0x685a2565;
          auVar40 = auVar10;
          if (((DAT_004a3ac0 | DAT_004a3ac4) & 0xc583380a ^ 0x84007c08) < 0x9a6c1e88) {
            iVar37 = -0x1cb7c2a0;
            auVar40 = auVar11;
          }
        }
        else if (local_13c == 0x167eb35c) {
          uVar36 = DAT_004a3b08 + DAT_004a3b0c;
          _objc_enumerationMutation(local_98,param_2);
          auVar7._8_8_ = extraout_x1_09;
          auVar7._0_8_ = local_110;
          auVar40._8_8_ = extraout_x1_09;
          auVar40._0_8_ = local_110;
          iVar37 = 0x167eb35c;
          if (0xf3a8c67 < (uVar36 ^ 0x2ceaea04) * 0x6403f962) {
            iVar37 = -0x76ab9234;
            auVar40 = auVar7;
          }
        }
        else {
          if (local_13c != 0x171538a7) goto LAB_0014b280;
          iVar37 = -0x7256d78c;
          auVar40 = auVar8;
          if (0x9523d465 < (DAT_004a3b00 + DAT_004a3b04 & 0xa10ee85fU) + 0xc97b426a) {
            iVar37 = 0x167eb35c;
            auVar40 = auVar9;
          }
        }
      }
      else {
        if (local_13c < 0x2456711a) {
          if (local_13c == 0x18da270d) {
            *local_148 = 0x2cfc5037;
          }
          else if (local_13c == 0x2328bb98) {
            bVar34 = 0xcb2d7497 <
                     (DAT_004a3b70 + DAT_004a3b74 & 0x3171cdcdU) * -0x799fc2ff + 0xe01180ec;
            iVar37 = -0x2e235a35;
            iVar38 = -0x7d2c67de;
            auVar39 = auVar1;
LAB_0014c554:
            auVar22._8_8_ = auVar39._8_8_;
            auVar22._0_8_ = local_110;
            auVar40._8_8_ = auVar39._8_8_;
            auVar40._0_8_ = local_110;
            local_90 = auVar39._0_8_;
            if (bVar34) {
              iVar37 = iVar38;
              auVar40 = auVar22;
            }
            goto LAB_0014cea0;
          }
          goto LAB_0014b280;
        }
        if (local_13c != 0x2456711a) {
          if (local_13c == 0x28d72ad1) {
            uVar36 = DAT_004a3ae8 & DAT_004a3aec;
            _objc_msgSend(local_90,PTR_s_allKeys_0048a9b8);
            local_98 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_90);
            local_a0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
            auVar41 = _objc_msgSend(local_98,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                    local_80,local_88,0x10);
            local_a9 = auVar41._0_8_ == 0;
            bVar34 = (uVar36 / 0x7ace2bad) * -0x39b81f1e == -0x558d373a;
            iVar38 = 0x2d0b1bc2;
            iVar37 = 0x4c5d176e;
            goto LAB_0014cde0;
          }
          if (local_13c == 0x2ae2ae85) {
            *local_148 = 0x2328bb98;
          }
          goto LAB_0014b280;
        }
        iVar37 = 0x18da270d;
        auVar40 = auVar12;
        if (((DAT_004a3b30 * DAT_004a3b34 | 0xb82b6cU) ^ 0x18dde4b6) < 0xe8c6936e) {
          iVar37 = 0x2cfc5037;
          auVar40 = auVar13;
        }
      }
    }
    else if (local_13c < 0x33487c36) {
      if (local_13c < 0x2d45af7a) {
        if (local_13c != 0x2cfc5037) {
          if (local_13c == 0x2d0b1bc2) {
            _objc_msgSend(local_90,PTR_s_allKeys_0048a9b8);
            uVar35 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_90);
            _objc_msgSend(uVar35,PTR_s_countByEnumeratingWithState_obje_00489c48,local_80,local_88,
                          0x10);
            param_2 = extraout_x1_02;
            goto LAB_0014bb24;
          }
          goto LAB_0014b280;
        }
        local_101 = local_100 == local_130;
        iVar37 = 0x2d45af7a;
        auVar40 = auVar3;
        if ((DAT_004a3b38 | DAT_004a3b3c) == 0xac14f911) {
          iVar37 = 0x2cfc5037;
          auVar40 = auVar4;
        }
      }
      else {
        if (local_13c == 0x2d45af7a) {
          *local_148 = 0x7108e4e9;
          goto LAB_0014b280;
        }
        if (local_13c != 0x2e6f0dd4) goto LAB_0014b280;
        iVar37 = -0x5130fa46;
        if (((DAT_004a3b40 ^ DAT_004a3b44) + 0x21adb317 & 0x4bde0cb4) != 0x147ce8a9) {
          iVar37 = -0x72899576;
          auVar40 = auVar2;
        }
      }
    }
    else {
      if (local_13c < 0x3b230dbb) {
        if (local_13c == 0x33487c36) {
          local_111 = local_110 == 0;
          iVar37 = -0x68484444;
          auVar40 = auVar5;
          if ((DAT_004a3b58 + DAT_004a3b5c + 0xe0f44366U & 0xbcaa17d8) == 0x4541c2fd) {
            iVar37 = 0x33487c36;
            auVar40 = auVar6;
          }
          goto LAB_0014cea0;
        }
        if (local_13c != 0x35f5a5ee) goto LAB_0014b280;
        local_130 = local_120;
        bVar34 = ((DAT_004a3af0 ^ DAT_004a3af4) * -0x26facd74 & 0x61896cdc) == 0x81b30703;
        iVar37 = -0x3215ae88;
        iVar38 = 0x3d31cc75;
      }
      else {
        if (local_13c != 0x3b230dbb) {
          if (local_13c == 0x3cd1369c) {
            local_e8 = *local_e0;
            *local_148 = 0x6b97d5e3;
          }
          else if (local_13c == 0x3d31cc75) {
            local_d8 = PTR_s_hasPrefix__00489d80;
            bVar34 = 0x1fcddb13 <
                     ((DAT_004a3af8 & DAT_004a3afc) + 0x6824c121 | 0xa032f6cc) + 0xcdf848b0;
            iVar37 = -0x3215ae88;
            iVar38 = 0x11edf401;
            goto LAB_0014c554;
          }
          goto LAB_0014b280;
        }
        bVar34 = ((DAT_004a3b88 ^ DAT_004a3b8c) * -0x267892d4 ^ 0x952df870) * -0x1b5fe251 ==
                 -0x38ea81fe;
        iVar37 = -0x2f529c91;
        iVar38 = 0x516279f2;
      }
LAB_0014c744:
      auVar40 = auVar20;
      if (!bVar34) {
        iVar37 = iVar38;
        auVar40 = auVar21;
      }
    }
  }
LAB_0014cea0:
  param_2 = auVar40._8_8_;
  local_110 = auVar40._0_8_;
  *local_148 = iVar37;
  goto LAB_0014b280;
}



// ----- -[BubbleBoxAssets initBubbleFiles] @ 0014cefc -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxAssets::initBubbleFiles(ID param_1,SEL param_2)

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
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
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
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_f8;
  byte local_f1;
  undefined **local_f0;
  undefined **local_e8;
  byte local_dc;
  char local_db;
  char local_da;
  char local_d9;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_b8;
  uVar1 = DAT_004a3b90 + DAT_004a3b94;
  local_f8 = 0x752f9640;
LAB_0014cfc4:
  uVar14 = auVar17._8_8_;
  auVar18._8_8_ = uVar14;
  auVar18._0_8_ = local_80;
  auVar11._8_8_ = uVar14;
  auVar11._0_8_ = local_80;
  auVar10._8_8_ = uVar14;
  auVar10._0_8_ = local_80;
  auVar9._8_8_ = uVar14;
  auVar9._0_8_ = local_80;
  auVar8._8_8_ = uVar14;
  auVar8._0_8_ = local_80;
  local_b8 = auVar17._0_8_;
  if (local_f8 < 0x1bda4cff) {
    if (local_f8 < -0x35e97161) {
      if (local_f8 < -0x5176aecc) {
        if (-0x61e4b7fe < local_f8) {
          if (local_f8 < -0x542a2914) {
            if (local_f8 == -0x61e4b7fd) {
              iVar15 = DAT_004a3c28 + DAT_004a3c2c;
              local_da = _objc_msgSend(local_d0,local_d8,local_c8);
              auVar3._8_8_ = extraout_x1_05;
              auVar3._0_8_ = local_b8;
              auVar17._8_8_ = extraout_x1_05;
              auVar17._0_8_ = local_b8;
              local_f8 = -0x61e4b7fd;
              if (iVar15 * -0x11346b00 + 0x4e646320U < 0xd5fdeee7) {
                local_f8 = 0x28f4b59b;
                auVar17 = auVar3;
              }
            }
            else if ((local_f8 == -0x5bb33ba6) &&
                    (local_f8 = 0x1e51409b,
                    ((DAT_004a3c30 ^ DAT_004a3c34) + 0x2f2a6ec0 ^ 0xa1e193d9) < 0x77209a04)) {
              local_f8 = 0x1e615fa2;
            }
          }
          else if (local_f8 == -0x542a2914) {
            DAT_004a2a5c = local_72;
            DAT_004a2a5d = DAT_004a2a4f ^ 0x6a;
            DAT_004a2a5e = DAT_004a2a50 ^ 0x56;
            DAT_004a2a5f = DAT_004a2a51 ^ 0xca;
            DAT_004a2a60 = DAT_004a2a52 ^ 0xf7;
            DAT_004a2a61 = DAT_004a2a53 ^ 0xb;
            DAT_004a2a3b = DAT_004a2a30 ^ 0x4d;
            DAT_004a2a3c = DAT_004a2a31 ^ 0x2f;
            local_f8 = 0x52bc24ea;
          }
          else if (local_f8 == -0x53e53c7a) {
            local_f8 = -0x1fecac59;
          }
          goto LAB_0014cfc4;
        }
        if (local_f8 < -0x795c10f4) {
          if (local_f8 == -0x7eab12c6) {
            local_f8 = 0x7024b80b;
            if (local_db == '\0') {
              local_f8 = 0x52154e4e;
            }
            local_dc = 1;
            local_e8 = &PTR_s_loadLocalBubbleFiles_0048b020;
          }
          else if ((local_f8 == -0x7b6b6b6d) &&
                  (local_f8 = -0x1f2dd9a3,
                  (DAT_004a3c20 * DAT_004a3c24 & 0xc70e15dU | 0x470810d) * -0x3638303a < 0x44d07604)
                  ) {
            local_f8 = -0x61e4b7fd;
          }
          goto LAB_0014cfc4;
        }
        if (local_f8 == -0x795c10f4) {
          local_f8 = 0x5c0ec327;
          goto LAB_0014cfc4;
        }
        if (local_f8 != -0x68473777) goto LAB_0014cfc4;
        bVar13 = (DAT_004a3c80 & DAT_004a3c84) * -0x4e5e28fd == -0x686740f5;
        local_f8 = 0x71bf82e4;
        iVar15 = 0x2251f712;
LAB_0014e950:
        if (bVar13) {
          local_f8 = iVar15;
        }
        goto LAB_0014cfc4;
      }
      if (local_f8 < -0x4507ea3b) {
        if (local_f8 < -0x4eecc131) {
          if (local_f8 == -0x5176aecc) {
            local_f8 = 0x52154e4e;
          }
          else if (local_f8 == -0x4fefb42f) {
            local_f8 = 0x7024b80b;
            if (local_da == '\0') {
              local_f8 = -0x5bb33ba6;
            }
            local_dc = 0;
            local_e8 = &PTR_s_loadBubbleFiles_0048b018;
          }
        }
        else {
          if (local_f8 == -0x4eecc131) {
            DAT_004a2a3d = local_73;
            DAT_004a2a3e = DAT_004a2a33 ^ 0x44;
            DAT_004a2a3f = DAT_004a2a34 ^ 0x75;
            DAT_004a2a40 = DAT_004a2a35 ^ 4;
            DAT_004a2a41 = DAT_004a2a36 ^ 0x37;
            DAT_004a2a42 = DAT_004a2a37 ^ 0x61;
            DAT_004a2a43 = DAT_004a2a38 ^ 0x96;
            DAT_004a2a44 = DAT_004a2a39 ^ 0x5c;
            DAT_004a2a45 = DAT_004a2a3a ^ 0x3d;
            bVar13 = (DAT_004a3be8 & DAT_004a3bec | 0x1ccc53a1) == 0x49b44688;
            local_f8 = 0x461a4a49;
            iVar15 = 0x2519fea8;
            goto LAB_0014e868;
          }
          if (local_f8 == -0x4b048902) {
            DAT_004a2a54 = DAT_004a2a46 ^ 0xba;
            DAT_004a2a55 = DAT_004a2a47 ^ 0x8a;
            DAT_004a2a56 = DAT_004a2a48 ^ 0xe5;
            DAT_004a2a57 = DAT_004a2a49 ^ 0x46;
            DAT_004a2a58 = DAT_004a2a4a ^ 0x15;
            DAT_004a2a59 = DAT_004a2a4b ^ 0x5a;
            DAT_004a2a5a = DAT_004a2a4c ^ 2;
            DAT_004a2a5b = DAT_004a2a4d ^ 0x14;
            local_72 = DAT_004a2a4e ^ 0xd;
            local_f8 = 0x6b91c52a;
          }
        }
        goto LAB_0014cfc4;
      }
      if (-0x3f374be2 < local_f8) {
        if (local_f8 == -0x3f374be1) {
          uVar16 = DAT_004a3c78 & DAT_004a3c7c;
          _objc_release(local_90,uVar14);
          auVar2._8_8_ = extraout_x1_07;
          auVar2._0_8_ = local_b8;
          auVar17._8_8_ = extraout_x1_07;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x7a68f36e;
          if (0x9e78e3ff < uVar16 * -0x2df7166f) {
            local_f8 = -0x3a58346a;
            auVar17 = auVar2;
          }
        }
        else if (local_f8 == -0x3a58346a) {
          _objc_release(local_90,uVar14);
          auVar17._8_8_ = extraout_x1_04;
          auVar17._0_8_ = local_b8;
          local_f8 = -0x3f374be1;
        }
        else if (local_f8 == -0x3790c560) {
          uVar16 = (DAT_004a3be0 * DAT_004a3be4 ^ 0x41080209U) & 0x770ea3e9;
          bVar12 = 0x3b7e6c6c < uVar16;
          bVar13 = uVar16 == 0x3b7e6c6d;
          iVar15 = -0x4eecc131;
          local_f8 = 0x461a4a49;
          goto LAB_0014e4f8;
        }
        goto LAB_0014cfc4;
      }
      if (local_f8 == -0x4507ea3b) {
        local_f8 = 0x4f63ee89;
        goto LAB_0014cfc4;
      }
      if (local_f8 != -0x3fde1d06) goto LAB_0014cfc4;
      local_70 = DAT_004d1478;
      bVar13 = ((DAT_004a3b98 ^ DAT_004a3b9c) & 0x85c0f9f2) == 0x368ecd3d;
      iVar15 = -0x1cd892cc;
      local_f8 = -0x2f4b04a6;
    }
    else {
      if (local_f8 < -0x1be1055a) {
        if (-0x238472d4 < local_f8) {
          if (local_f8 < -0x1fecac59) {
            if (local_f8 == -0x238472d3) {
              local_f8 = -0x2775c60e;
            }
            else if (local_f8 == -0x22c1d8ed) {
              setIsLoadLocalBubble_
                        (param_1,(SEL)PTR_s_setIsLoadLocalBubble__0048b010,(uint)local_f1);
              _objc_msgSend(param_1,*local_f0);
              auVar17._8_8_ = extraout_x1_02;
              auVar17._0_8_ = local_b8;
              local_f8 = 0x1bda4cff;
            }
          }
          else {
            if (local_f8 == -0x1fecac59) {
              uVar16 = 0;
              if (DAT_004a3c04 != 0) {
                uVar16 = DAT_004a3c00 / DAT_004a3c04;
              }
              bVar13 = 0x770108a9 < (uVar16 | 0x26e44399) * 0xc9a452c + 0x1e1f7688;
              local_f8 = 0x66ffc47a;
              iVar15 = 0x3cce199;
              auVar18 = auVar11;
              goto LAB_0014e8d0;
            }
            if (local_f8 == -0x1f2dd9a3) {
              _objc_msgSend(local_d0,local_d8,local_c8);
              auVar17._8_8_ = extraout_x1_06;
              auVar17._0_8_ = local_b8;
              local_f8 = -0x61e4b7fd;
            }
            else if (local_f8 == -0x1cd892cc) {
              local_f8 = -0x3fde1d06;
            }
          }
          goto LAB_0014cfc4;
        }
        if (-0x2f4b04a7 < local_f8) {
          if (local_f8 == -0x2f4b04a6) {
            local_f8 = 0x5956425;
          }
          else if (local_f8 == -0x2775c60e) {
            uVar16 = (DAT_004a3c70 + DAT_004a3c74 | 0x2d617bd8U) * -0x64222c2f + 0x5ee88f51;
            bVar12 = 0xf536ac8e < uVar16;
            bVar13 = uVar16 == 0xf536ac8f;
            local_f8 = -0x3a58346a;
            iVar15 = -0x3f374be1;
LAB_0014dc20:
            auVar6._8_8_ = uVar14;
            auVar6._0_8_ = local_b8;
            auVar17._8_8_ = uVar14;
            auVar17._0_8_ = local_b8;
            if (!bVar12 || bVar13) {
              local_f8 = iVar15;
              auVar17 = auVar6;
            }
          }
          goto LAB_0014cfc4;
        }
        if (local_f8 == -0x35e97161) {
          _objc_release(local_a0,uVar14);
          auVar17._8_8_ = extraout_x1_11;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x625eb660;
          goto LAB_0014cfc4;
        }
        if (local_f8 != -0x31f2fca9) goto LAB_0014cfc4;
        uVar16 = 0;
        if (DAT_004a3bd4 != 0) {
          uVar16 = DAT_004a3bd0 / DAT_004a3bd4;
        }
        bVar13 = 0x2abc6e57 < ((uVar16 | 0x2194a39c) * -0x368a516 | 0x63961cca);
        local_f8 = -0x542a2914;
        iVar15 = 0x52bc24ea;
        goto LAB_0014e8d0;
      }
      if (-0x1d6861e < local_f8) {
        if (local_f8 < 0x3cce199) {
          if (local_f8 == -0x1d6861d) {
            local_f8 = -0x3790c560;
          }
          else if (local_f8 == 0x1e1b76e) {
            _objc_msgSend(local_b0,local_c0,&PTR____CFConstantStringClassReference_004a2a70);
            uVar14 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_90,local_98,uVar14);
            local_c8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar14);
            _objc_release(local_b8);
            _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
            local_d0 = _objc_retainAutoreleasedReturnValue();
            local_d8 = PTR_s_fileExistsAtPath__0048a020;
            local_d9 = _objc_msgSend(local_d0,PTR_s_fileExistsAtPath__0048a020,local_a0);
            auVar17._8_8_ = extraout_x1_01;
            auVar17._0_8_ = local_b8;
            local_f8 = -0x13b7a8fd;
          }
        }
        else if (local_f8 == 0x3cce199) {
          _objc_msgSend(local_80,local_88);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(local_80);
          auVar17._8_8_ = extraout_x1_08;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x66ffc47a;
        }
        else {
          if (local_f8 == 0x5956425) {
            bVar13 = (DAT_004a3ba0 ^ DAT_004a3ba4) * -0x661ca010 == -0x1f324e69;
            local_f8 = 0x449344a6;
            iVar15 = 0x277ebdcd;
            goto LAB_0014e950;
          }
          if (local_f8 == 0x9171ac8) {
            return;
          }
        }
        goto LAB_0014cfc4;
      }
      if (local_f8 < -0x13b7a8fd) {
        if (local_f8 == -0x1be1055a) {
          bVar13 = (DAT_004a3bf0 & DAT_004a3bf4 & 0xa2214810 | 0x22010000) == 0xc30fd7bf;
          local_f8 = 0x73187d28;
          iVar15 = 0x21d50480;
          goto LAB_0014e950;
        }
        if (local_f8 == -0x15405313) {
          _objc_msgSend(local_90,PTR_s_stringByAppendingPathComponent__00489550,
                        &PTR____CFConstantStringClassReference_004a2a90);
          _objc_retainAutoreleasedReturnValue();
          FUN_00167a78();
          uVar14 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar14,PTR_s_m_nsCurUsrName_0048ac30);
          _objc_retainAutoreleasedReturnValue();
          auVar17._8_8_ = extraout_x1_00;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x29505e47;
        }
        goto LAB_0014cfc4;
      }
      if (local_f8 == -0x13b7a8fd) {
        bVar13 = local_d9 == '\0';
        iVar15 = -0x5bb33ba6;
        local_f8 = -0x7b6b6b6d;
        goto LAB_0014e3e8;
      }
      if (local_f8 != -0x8bc0c10) goto LAB_0014cfc4;
      bVar13 = local_71 == '\0';
      iVar15 = -0x1be1055a;
      local_f8 = 0x397786fe;
    }
LAB_0014e3e8:
    if (bVar13) {
      local_f8 = iVar15;
    }
    goto LAB_0014cfc4;
  }
  if (local_f8 < 0x4f63ee89) {
    if (local_f8 < 0x28f4b59b) {
      if (local_f8 < 0x21d50480) {
        if (local_f8 < 0x1e51409b) {
          if (local_f8 == 0x1bda4cff) {
            setIsLoadLocalBubble_(param_1,(SEL)PTR_s_setIsLoadLocalBubble__0048b010,(uint)local_f1);
            _objc_msgSend(param_1,*local_f0);
            auVar17._8_8_ = extraout_x1_12;
            auVar17._0_8_ = local_b8;
            local_f8 = -0x5176aecc;
          }
          else if (local_f8 == 0x1e344a9e) {
            local_f8 = 0x33983f9a;
          }
        }
        else if (local_f8 == 0x1e51409b) {
          iVar15 = DAT_004a3c38 - DAT_004a3c3c;
          local_db = FUN_001689d8();
          auVar4._8_8_ = extraout_x1_14;
          auVar4._0_8_ = local_b8;
          auVar17._8_8_ = extraout_x1_14;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x617f857f;
          if ((iVar15 + 0xb57f3a03U ^ 0x2e7a23cd) < 0xa84819b0) {
            local_f8 = 0x1e51409b;
            auVar17 = auVar4;
          }
        }
        else if (local_f8 == 0x1e615fa2) {
          FUN_001689d8();
          auVar17._8_8_ = extraout_x1_03;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x1e51409b;
        }
      }
      else if (local_f8 < 0x2519fea8) {
        if (local_f8 == 0x21d50480) {
          DAT_004d1478 = 1;
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
          _objc_retainAutoreleasedReturnValue();
          auVar17._8_8_ = extraout_x1_13;
          auVar17._0_8_ = local_b8;
          local_f8 = 0x73187d28;
        }
        else if (local_f8 == 0x2251f712) {
          local_f8 = 0x71bf82e4;
        }
      }
      else if (local_f8 == 0x2519fea8) {
        local_f8 = -0x1be1055a;
      }
      else if (local_f8 == 0x277ebdcd) {
        local_f8 = 0x449344a6;
      }
      goto LAB_0014cfc4;
    }
    if (local_f8 < 0x3c718216) {
      if (local_f8 < 0x33983f9a) {
        if (local_f8 == 0x28f4b59b) {
          local_f8 = -0x4fefb42f;
        }
        else if (local_f8 == 0x29505e47) {
          local_98 = PTR_s_stringByAppendingPathComponent__00489550;
          uVar16 = 0;
          if (DAT_004a3c1c != 0) {
            uVar16 = DAT_004a3c18 / DAT_004a3c1c;
          }
          _objc_msgSend(local_90,PTR_s_stringByAppendingPathComponent__00489550,
                        &PTR____CFConstantStringClassReference_004a2a90);
          local_a0 = _objc_retainAutoreleasedReturnValue();
          FUN_00167a78();
          local_a8 = _objc_retainAutoreleasedReturnValue();
          local_b0 = PTR__OBJC_CLASS___NSString_0048c9b0;
          _objc_msgSend(local_a8,PTR_s_m_nsCurUsrName_0048ac30);
          auVar17 = _objc_retainAutoreleasedReturnValue();
          local_c0 = PTR_s_stringWithFormat__00489548;
          bVar13 = uVar16 == 0x1999df9a;
          iVar15 = -0x15405313;
          local_f8 = 0x534641e8;
          goto LAB_0014e3e8;
        }
        goto LAB_0014cfc4;
      }
      if (local_f8 == 0x33983f9a) {
        bVar13 = DAT_004a3c60 + DAT_004a3c64 == 0x4199ab81;
        local_f8 = 0x625eb660;
        iVar15 = -0x35e97161;
        goto LAB_0014e950;
      }
      if (local_f8 != 0x397786fe) goto LAB_0014cfc4;
      bVar13 = ((uint)((ulong)(DAT_004a3bc0 & DAT_004a3bc4 ^ 0xf6dd8ad8) * 0x23a5dfd5 >> 0x3b) |
               0xeb8b4bb) == 0x9ab5c2a3;
      local_f8 = -0x4b048902;
      iVar15 = 0x66772aa3;
      goto LAB_0014e950;
    }
    if (local_f8 < 0x44ba2e26) {
      if (local_f8 == 0x3c718216) {
        _objc_release(local_d0,uVar14);
        _objc_release(local_c8);
        _objc_release(local_a8);
        auVar17._8_8_ = extraout_x1_15;
        auVar17._0_8_ = local_b8;
        local_f8 = 0x776c12c4;
      }
      else if (local_f8 == 0x449344a6) {
        local_71 = local_70 == 0;
        bVar13 = 0x553b1eda < ((DAT_004a3ba8 & DAT_004a3bac) + 0x54ae29f6 & 0xd609eb6a) + 0xe8f47a2a
        ;
        iVar15 = 0x277ebdcd;
        local_f8 = -0x795c10f4;
LAB_0014de28:
        if (bVar13) {
          local_f8 = iVar15;
        }
      }
      goto LAB_0014cfc4;
    }
    if (local_f8 != 0x44ba2e26) {
      if (local_f8 == 0x44bb9ebc) {
        bVar13 = local_90 == 0;
        local_f8 = -0x2775c60e;
        iVar15 = 0x44ba2e26;
        goto LAB_0014e868;
      }
      if (local_f8 == 0x461a4a49) {
        DAT_004a2a3d = local_73;
        DAT_004a2a3e = DAT_004a2a33 ^ 0x44;
        DAT_004a2a3f = DAT_004a2a34 ^ 0x75;
        DAT_004a2a40 = DAT_004a2a35 ^ 4;
        DAT_004a2a41 = DAT_004a2a36 ^ 0x37;
        DAT_004a2a42 = DAT_004a2a37 ^ 0x61;
        DAT_004a2a43 = DAT_004a2a38 ^ 0x96;
        DAT_004a2a44 = DAT_004a2a39 ^ 0x5c;
        DAT_004a2a45 = DAT_004a2a3a ^ 0x3d;
        local_f8 = -0x4eecc131;
      }
      goto LAB_0014cfc4;
    }
    uVar16 = 0;
    if (DAT_004a3c14 != 0) {
      uVar16 = DAT_004a3c10 / DAT_004a3c14;
    }
    bVar13 = (uVar16 * -0x562339fe | 0xce925bbf) / 0x7edd6f01 < 0xe2652644;
    local_f8 = -0x15405313;
    iVar15 = 0x29505e47;
    auVar18 = auVar10;
  }
  else if (local_f8 < 0x6b044813) {
    if (0x5c0ec326 < local_f8) {
      if (local_f8 < 0x625eb660) {
        if (local_f8 == 0x5c0ec327) {
          uVar16 = (DAT_004a3bb0 + DAT_004a3bb4 & 0x7b1416a7U) * -0x7f4ffe5b + 0xca27b274;
          bVar12 = 0x7aab60d4 < uVar16;
          bVar13 = uVar16 == 0x7aab60d5;
          iVar15 = -0x4507ea3b;
          local_f8 = 0x4f63ee89;
LAB_0014e4f8:
          auVar5._8_8_ = uVar14;
          auVar5._0_8_ = local_b8;
          auVar17._8_8_ = uVar14;
          auVar17._0_8_ = local_b8;
          if (!bVar12 || bVar13) {
            local_f8 = iVar15;
            auVar17 = auVar5;
          }
        }
        else if (local_f8 == 0x617f857f) {
          local_f8 = -0x7eab12c6;
        }
      }
      else {
        if (local_f8 == 0x625eb660) {
          iVar15 = DAT_004a3c68 - DAT_004a3c6c;
          _objc_release(local_a0,uVar14);
          auVar17._8_8_ = extraout_x1_09;
          auVar17._0_8_ = local_b8;
          bVar13 = ((iVar15 * -0x129ca015 ^ 0x80887c09U) & 0x9f9d7c69) == 0xb69d0845;
          iVar15 = 0x625eb660;
          local_f8 = 0x7b7cdec7;
          goto LAB_0014e3e8;
        }
        if (local_f8 == 0x66772aa3) {
          DAT_004a2a54 = DAT_004a2a46 ^ 0xba;
          DAT_004a2a55 = DAT_004a2a47 ^ 0x8a;
          DAT_004a2a56 = DAT_004a2a48 ^ 0xe5;
          DAT_004a2a57 = DAT_004a2a49 ^ 0x46;
          DAT_004a2a58 = DAT_004a2a4a ^ 0x15;
          DAT_004a2a59 = DAT_004a2a4b ^ 0x5a;
          DAT_004a2a5a = DAT_004a2a4c ^ 2;
          DAT_004a2a5b = DAT_004a2a4d ^ 0x14;
          local_f8 = -0x4b048902;
        }
        else if (local_f8 == 0x66ffc47a) {
          uVar16 = DAT_004a3c08 + DAT_004a3c0c;
          _objc_msgSend(local_80,local_88);
          local_90 = _objc_retainAutoreleasedReturnValue();
          _objc_release(local_80);
          uVar16 = -(int)((long)((ulong)((uVar16 | 0x9635560a) + 0x637d5966) * 0x8f5cd069) >> 0x3f);
          bVar12 = 0xe9e49887 < uVar16;
          bVar13 = uVar16 == 0xe9e49888;
          local_f8 = 0x3cce199;
          iVar15 = 0x6b044813;
          uVar14 = extraout_x1;
          goto LAB_0014dc20;
        }
      }
      goto LAB_0014cfc4;
    }
    if (0x52bc24e9 < local_f8) {
      if (local_f8 == 0x52bc24ea) {
        DAT_004a2a5c = local_72;
        DAT_004a2a5d = DAT_004a2a4f ^ 0x6a;
        DAT_004a2a5e = DAT_004a2a50 ^ 0x56;
        DAT_004a2a5f = DAT_004a2a51 ^ 0xca;
        DAT_004a2a60 = DAT_004a2a52 ^ 0xf7;
        DAT_004a2a61 = DAT_004a2a53 ^ 0xb;
        DAT_004a2a3b = DAT_004a2a30 ^ 0x4d;
        DAT_004a2a3c = DAT_004a2a31 ^ 0x2f;
        local_73 = DAT_004a2a32 ^ 3;
        bVar13 = ((DAT_004a3bd8 * DAT_004a3bdc | 0x42c202b1U) ^ 0x40014021 | 0xbd1c0c46) ==
                 0x7c1f4162;
        local_f8 = -0x542a2914;
        iVar15 = -0x1d6861d;
LAB_0014e868:
        if (!bVar13) {
          local_f8 = iVar15;
        }
      }
      else if (local_f8 == 0x534641e8) {
        local_f8 = 0x1e1b76e;
      }
      goto LAB_0014cfc4;
    }
    if (local_f8 != 0x4f63ee89) {
      if (local_f8 == 0x52154e4e) {
        bVar13 = 0x5620ee77 <
                 ((uint)((ulong)(DAT_004a3c50 & DAT_004a3c54 ^ 0x88438eaa) * 0x973d7a3d >> 0x3f) |
                 0xe58392b8);
        iVar15 = 0x776c12c4;
        local_f8 = 0x3c718216;
        goto LAB_0014de28;
      }
      goto LAB_0014cfc4;
    }
    bVar13 = 0x1ab6507f < (((DAT_004a3bb8 ^ DAT_004a3bbc) & 0xf152963d | 0xa1028025) ^ 0xc2007cf0);
    local_f8 = -0x4507ea3b;
    iVar15 = -0x8bc0c10;
    auVar18 = auVar8;
  }
  else if (local_f8 < 0x73187d28) {
    if (local_f8 < 0x7024b80b) {
      if (local_f8 == 0x6b044813) {
        local_f8 = 0x44bb9ebc;
      }
      else if (local_f8 == 0x6b91c52a) {
        local_f8 = -0x31f2fca9;
      }
      goto LAB_0014cfc4;
    }
    if (local_f8 == 0x7024b80b) {
      local_f0 = local_e8;
      local_f1 = local_dc;
      bVar13 = ((uint)((ulong)(DAT_004a3c40 * DAT_004a3c44 ^ 0x3174e519) * 0x60e9a85 >> 0x3a) |
               0x3f143b78) == 0xb8d7522e;
      local_f8 = -0x22c1d8ed;
      iVar15 = 0x1bda4cff;
      goto LAB_0014e868;
    }
    if (local_f8 != 0x71bf82e4) goto LAB_0014cfc4;
    bVar13 = 0x3f572d87 < (DAT_004a3c88 + DAT_004a3c8c & 0xd7761cddU | 0x465610d5);
    local_f8 = 0x2251f712;
    iVar15 = 0x9171ac8;
    auVar18 = auVar9;
  }
  else {
    if (0x776c12c3 < local_f8) {
      if (local_f8 == 0x776c12c4) {
        uVar16 = (DAT_004a3c58 + DAT_004a3c5c & 0x1fe8aecfU) * -0x35cf23d2 | 0xe304da58;
        _objc_release(local_d0,uVar14);
        _objc_release(local_c8);
        _objc_release(local_a8);
        bVar12 = 0xc19b2781 < uVar16;
        bVar13 = uVar16 == 0xc19b2782;
        iVar15 = 0x3c718216;
        local_f8 = 0x1e344a9e;
        uVar14 = extraout_x1_10;
        goto LAB_0014e4f8;
      }
      if (local_f8 == 0x7a68f36e) {
        local_f8 = -0x68473777;
      }
      else if (local_f8 == 0x7b7cdec7) {
        local_f8 = -0x238472d3;
      }
      goto LAB_0014cfc4;
    }
    if (local_f8 != 0x73187d28) {
      if (local_f8 == 0x752f9640) {
        bVar13 = (uVar1 & 0x3ef0c5ab | 0x2630c18a) == 0x4ca311ae;
        iVar15 = -0x1cd892cc;
        local_f8 = -0x3fde1d06;
        goto LAB_0014e3e8;
      }
      goto LAB_0014cfc4;
    }
    uVar16 = DAT_004a3bf8 * DAT_004a3bfc;
    DAT_004d1478 = 1;
    _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
    auVar18 = _objc_retainAutoreleasedReturnValue();
    local_88 = PTR_s_currentBubblePath_0048b008;
    bVar13 = 0xdcb684b < (uVar16 ^ 0x200181 | 0x1bd3f67e);
    local_f8 = 0x21d50480;
    iVar15 = -0x53e53c7a;
  }
LAB_0014e8d0:
  local_80 = auVar18._0_8_;
  auVar7._8_8_ = auVar18._8_8_;
  auVar7._0_8_ = local_b8;
  auVar17._8_8_ = auVar18._8_8_;
  auVar17._0_8_ = local_b8;
  if (bVar13) {
    local_f8 = iVar15;
    auVar17 = auVar7;
  }
  goto LAB_0014cfc4;
}



// ----- -[BubbleBoxAssets loadBubbleFiles] @ 0014e990 -----

/* WARNING: Removing unreachable block (ram,0x00150c78) */
/* WARNING: Removing unreachable block (ram,0x00151b70) */
/* WARNING: Removing unreachable block (ram,0x001523a0) */
/* WARNING: Removing unreachable block (ram,0x001502d4) */
/* WARNING: Removing unreachable block (ram,0x001539f4) */
/* WARNING: Removing unreachable block (ram,0x001539f8) */
/* Function Stack Size: 0x10 bytes */

void BubbleBoxAssets::loadBubbleFiles(ID param_1,SEL param_2)

{
  uint uVar1;
  ID IVar2;
  uint *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  int iVar7;
  CCCryptorStatus CVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  size_t *psVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  undefined8 *puVar21;
  size_t sVar22;
  void *pvVar23;
  void *pvVar24;
  size_t dataInLength;
  undefined *puVar25;
  undefined8 *puVar26;
  CCCryptorRef p_Var27;
  undefined1 *puVar28;
  CCCryptorRef *pp_Var29;
  undefined1 auStack_2d0 [224];
  undefined1 auStack_1f0 [16];
  size_t local_1e0 [2];
  size_t local_1d0 [2];
  CCCryptorRef local_1c0 [2];
  undefined8 local_1b0 [2];
  undefined8 local_1a0 [2];
  undefined8 local_190 [2];
  undefined8 local_180 [3];
  uint local_164;
  undefined *local_160;
  undefined8 *local_158;
  long local_150;
  undefined *local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 *local_128;
  size_t *local_120;
  undefined1 *local_118;
  undefined8 *local_110;
  undefined8 *local_108;
  uint *local_100;
  long *plStack_f8;
  CCCryptorRef *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  long local_d8;
  size_t *local_d0;
  ID local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  do {
  } while (0x6774af0f <
           (int)((long)((ulong)(DAT_004a3c98 & DAT_004a3c9c) * 0xd60c3ead) >> 0x3f) * -0x5f2a33bd +
           0x31cabf59U);
  do {
  } while ((DAT_004a3ca8 - DAT_004a3cac) * 0x79363954 == 0x4a556b36);
  if (DAT_004d147c == 0) {
    DAT_004a2a3b = DAT_004a2a30 ^ 0x4d;
    DAT_004a2a3c = DAT_004a2a31 ^ 0x2f;
    DAT_004a2a3d = DAT_004a2a32 ^ 3;
    DAT_004a2a3e = DAT_004a2a33 ^ 0x44;
    DAT_004a2a3f = DAT_004a2a34 ^ 0x75;
    do {
      DAT_004a2a40 = DAT_004a2a35 ^ 4;
      DAT_004a2a41 = DAT_004a2a36 ^ 0x37;
      DAT_004a2a42 = DAT_004a2a37 ^ 0x61;
      DAT_004a2a43 = DAT_004a2a38 ^ 0x96;
      DAT_004a2a44 = DAT_004a2a39 ^ 0x5c;
      DAT_004a2a45 = DAT_004a2a3a ^ 0x3d;
      DAT_004a2b73 = DAT_004a2b6e ^ 0x28;
      DAT_004a2b74 = DAT_004a2b6f ^ 0xfe;
      DAT_004a2b75 = DAT_004a2b70 ^ 0x51;
      DAT_004a2b76 = DAT_004a2b71 ^ 0xd6;
      DAT_004a2b77 = DAT_004a2b72 ^ 0xe4;
      DAT_004a2a54 = DAT_004a2a46 ^ 0xba;
      DAT_004a2a55 = DAT_004a2a47 ^ 0x8a;
      DAT_004a2a56 = DAT_004a2a48 ^ 0xe5;
      DAT_004a2a57 = DAT_004a2a49 ^ 0x46;
      DAT_004a2a58 = DAT_004a2a4a ^ 0x15;
      DAT_004a2a59 = DAT_004a2a4b ^ 0x5a;
      DAT_004a2a5a = DAT_004a2a4c ^ 2;
      DAT_004a2a5b = DAT_004a2a4d ^ 0x14;
      DAT_004a2a5c = DAT_004a2a4e ^ 0xd;
      DAT_004a2a5d = DAT_004a2a4f ^ 0x6a;
      DAT_004a2a5e = DAT_004a2a50 ^ 0x56;
      DAT_004a2a5f = DAT_004a2a51 ^ 0xca;
      DAT_004a2a60 = DAT_004a2a52 ^ 0xf7;
      DAT_004a2a61 = DAT_004a2a53 ^ 0xb;
      DAT_004a2ba0 = DAT_004a2b80 ^ 10;
      DAT_004a2ba1 = DAT_004a2b81 ^ 0x51;
      DAT_004a2ba2 = DAT_004a2b82 ^ 0x5e;
      DAT_004a2ba3 = DAT_004a2b83 ^ 0x61;
      DAT_004a2ba4 = DAT_004a2b84 ^ 0xe;
      DAT_004a2ba5 = DAT_004a2b85 ^ 0xc3;
      DAT_004a2ba6 = DAT_004a2b86 ^ 0xab;
      DAT_004a2ba7 = DAT_004a2b87 ^ 0x58;
      DAT_004a2ba8 = DAT_004a2b88 ^ 0x95;
      DAT_004a2ba9 = DAT_004a2b89 ^ 0x5e;
      DAT_004a2baa = DAT_004a2b8a ^ 0x2c;
      DAT_004a2bab = DAT_004a2b8b ^ 0x2d;
      DAT_004a2bac = DAT_004a2b8c ^ 199;
      DAT_004a2bad = DAT_004a2b8d ^ 0x31;
      DAT_004a2bae = DAT_004a2b8e ^ 0xae;
      DAT_004a2baf = DAT_004a2b8f ^ 0x2e;
      DAT_004a2bb0 = DAT_004a2b90 ^ 0x22;
      DAT_004a2bb1 = DAT_004a2b91 ^ 0xa0;
      DAT_004a2bb2 = DAT_004a2b92 ^ 0xbc;
      DAT_004a2bb3 = DAT_004a2b93 ^ 0xfd;
      DAT_004a2bb4 = DAT_004a2b94 ^ 0x50;
      DAT_004a2bb5 = DAT_004a2b95 ^ 0x9d;
      DAT_004a2bb6 = DAT_004a2b96 ^ 0xb6;
      DAT_004a2bb7 = DAT_004a2b97 ^ 0xcf;
      DAT_004a2b1f = DAT_004a2b1c ^ 0xc5;
      DAT_004a2b20 = DAT_004a2b1d ^ 0xcb;
      DAT_004a2b21 = DAT_004a2b1e ^ 0x16;
      DAT_004a2b6a = DAT_004a2b66 ^ 0x1f;
      DAT_004a2b6b = DAT_004a2b67 ^ 0xb;
      DAT_004a2b6c = DAT_004a2b68 ^ 0x1d;
      DAT_004a2b6d = DAT_004a2b69 ^ 0xde;
      DAT_004a2b0c = DAT_004a2afc ^ 0x33;
      DAT_004a2b0d = DAT_004a2afd ^ 5;
    } while (((DAT_004a3cb8 - DAT_004a3cbc) + 0xb6f284b9U ^ 0x553cf1c5) * -0x1353d90a < 0x1a3174c5);
    do {
      DAT_004a2b0e = DAT_004a2afe ^ 10;
      DAT_004a2b0f = DAT_004a2aff ^ 0x3b;
      DAT_004a2b10 = DAT_004a2b00 ^ 0x49;
      DAT_004a2b11 = DAT_004a2b01 ^ 0xd3;
      DAT_004a2b12 = DAT_004a2b02 ^ 0x7b;
      DAT_004a2b13 = DAT_004a2b03 ^ 0xc5;
      DAT_004a2b14 = DAT_004a2b04 ^ 0x8d;
      DAT_004a2b15 = DAT_004a2b05 ^ 0x15;
      DAT_004a2b16 = DAT_004a2b06 ^ 0xa9;
      uVar1 = 0;
      if (DAT_004a3ccc != 0) {
        uVar1 = DAT_004a3cc8 / DAT_004a3ccc;
      }
      DAT_004a2b17 = DAT_004a2b07 ^ 0xf6;
      DAT_004a2b18 = DAT_004a2b08 ^ 0xf7;
      DAT_004a2b19 = DAT_004a2b09 ^ 0x48;
      DAT_004a2b1a = DAT_004a2b0a ^ 0xac;
      DAT_004a2b1b = DAT_004a2b0b ^ 0xc6;
      DAT_004a2b50 = DAT_004a2b30 ^ 0xfb;
      DAT_004a2b51 = DAT_004a2b31 ^ 0xbc;
      DAT_004a2b52 = DAT_004a2b32 ^ 0xb9;
      DAT_004a2b53 = DAT_004a2b33 ^ 0xeb;
      DAT_004a2b54 = DAT_004a2b34 ^ 0x84;
      DAT_004a2b55 = DAT_004a2b35 ^ 0x27;
      DAT_004a2b56 = DAT_004a2b36 ^ 0x83;
      DAT_004a2b57 = DAT_004a2b37 ^ 0x92;
      DAT_004a2b58 = DAT_004a2b38 ^ 0x6e;
      DAT_004a2b59 = DAT_004a2b39 ^ 0x97;
      DAT_004a2b5a = DAT_004a2b3a ^ 0x14;
      DAT_004a2b5b = DAT_004a2b3b ^ 0x17;
      DAT_004a2b5c = DAT_004a2b3c ^ 0xb8;
      DAT_004a2b5d = DAT_004a2b3d ^ 0x7c;
      DAT_004a2b5e = DAT_004a2b3e ^ 0x82;
      DAT_004a2b5f = DAT_004a2b3f ^ 0xcc;
      DAT_004a2b60 = DAT_004a2b40 ^ 0xad;
      DAT_004a2b61 = DAT_004a2b41 ^ 0x9d;
      DAT_004a2b62 = DAT_004a2b42 ^ 0x6c;
      DAT_004a2b63 = DAT_004a2b43 ^ 0xb7;
      DAT_004a2b64 = DAT_004a2b44 ^ 0xc5;
      DAT_004a2b65 = DAT_004a2b45 ^ 0x5e;
      DAT_004a2b25 = DAT_004a2b22 ^ 0x3c;
      DAT_004a2b26 = DAT_004a2b23 ^ 0x97;
      DAT_004a2b27 = DAT_004a2b24 ^ 0xf;
      DAT_004a2ae0 = DAT_004a2ac0 ^ 0xfd;
      DAT_004a2ae1 = DAT_004a2ac1 ^ 0xa4;
      DAT_004a2ae2 = DAT_004a2ac2 ^ 0xb8;
      DAT_004a2ae3 = DAT_004a2ac3 ^ 0x5f;
      DAT_004a2ae4 = DAT_004a2ac4 ^ 0xb1;
      DAT_004a2ae5 = DAT_004a2ac5 ^ 0xb3;
      DAT_004a2ae6 = DAT_004a2ac6 ^ 0xf4;
      DAT_004a2ae7 = DAT_004a2ac7 ^ 0x1e;
      DAT_004a2ae8 = DAT_004a2ac8 ^ 0x46;
      DAT_004a2ae9 = DAT_004a2ac9 ^ 0x14;
      DAT_004a2aea = DAT_004a2aca ^ 0x15;
      DAT_004a2aeb = DAT_004a2acb ^ 0x61;
      DAT_004a2aec = DAT_004a2acc ^ 0xe3;
      DAT_004a2aed = DAT_004a2acd ^ 0xfd;
      DAT_004a2aee = DAT_004a2ace ^ 0x5b;
      DAT_004a2aef = DAT_004a2acf ^ 0x48;
      DAT_004a2af0 = DAT_004a2ad0 ^ 0x2a;
      DAT_004a2af1 = DAT_004a2ad1 ^ 0x98;
      DAT_004a2af2 = DAT_004a2ad2 ^ 0x2f;
      DAT_004a2af3 = DAT_004a2ad3 ^ 0x1b;
      DAT_004a2af4 = DAT_004a2ad4 ^ 0xeb;
      DAT_004a2af5 = DAT_004a2ad5 ^ 0xc9;
      DAT_004a2af6 = DAT_004a2ad6 ^ 0xf9;
      DAT_004a2af7 = DAT_004a2ad7 ^ 0xf7;
      DAT_004a2af8 = DAT_004a2ad8 ^ 0x4d;
      DAT_004a2af9 = DAT_004a2ad9 ^ 0xef;
      DAT_004a2afa = DAT_004a2ada ^ 0x5c;
      DAT_004a2afb = DAT_004a2adb ^ 0x69;
      DAT_004a2ab5 = DAT_004a2ab0 ^ 6;
      DAT_004a2ab6 = DAT_004a2ab1 ^ 0x54;
      DAT_004a2ab7 = DAT_004a2ab2 ^ 0xb2;
      DAT_004a2ab8 = DAT_004a2ab3 ^ 0x58;
      DAT_004a2ab9 = DAT_004a2ab4 ^ 0xc;
    } while ((uVar1 | 0x50fbbb27) + 0x46f74509 < 0x116c7937);
  }
  DAT_004d147c = 1;
  local_80 = local_180;
  local_108 = local_190;
  local_110 = local_1a0;
  local_128 = local_1b0;
  local_f0 = local_1c0;
  local_d0 = local_1d0;
  local_120 = local_1e0;
  local_118 = auStack_1f0;
  puVar28 = local_118;
  local_c8 = param_1;
  if ((DAT_004a3cd0 + DAT_004a3cd4) * 0x74221ab == 0x7698a2d) {
    puVar28 = auStack_2d0;
    _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,PTR_s_shared_00489458);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,PTR_s_currentBubblePath_0048b008);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    FUN_00167a78();
    _objc_retainAutoreleasedReturnValue();
  }
  puVar25 = PTR_s_currentBubblePath_0048b008;
  puVar16 = PTR_s_shared_00489458;
  local_78 = (undefined8 *)PTR_s_m_nsCurUsrName_0048ac30;
  do {
    puVar6 = puVar28;
    iVar7 = DAT_004a3cd8 + DAT_004a3cdc;
    puVar28 = puVar6 + -0xe0;
    _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,puVar16);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar10,puVar25);
    lVar11 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    FUN_00167a78();
    uVar10 = _objc_retainAutoreleasedReturnValue();
    puVar19 = local_78;
  } while (iVar7 == 0x31d68312);
  local_100 = (uint *)(puVar6 + -0x10);
  plStack_f8 = (long *)(puVar6 + -0x20);
  local_b8 = puVar28;
  local_98 = (undefined8 *)(puVar6 + -0x60);
  if (((DAT_004a3ce0 ^ DAT_004a3ce4) + 0xe05fa69b ^ 0x74160a84) < 0x44193789) goto LAB_0014fe64;
  while( true ) {
    uVar1 = DAT_004a3ce8 | DAT_004a3cec;
    _objc_msgSend(uVar10,puVar19);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_s_stringByAppendingPathComponent__00489550;
    _objc_msgSend(lVar11,PTR_s_stringByAppendingPathComponent__00489550,
                  &PTR____CFConstantStringClassReference_004a2d00);
    lVar13 = _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_s_stringWithFormat__00489548;
    *(undefined8 *)(puVar6 + -0xf0) = uVar12;
    _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithFormat__00489548,
                  &PTR____CFConstantStringClassReference_004a2ca0);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar11,puVar25,uVar14);
    puVar15 = (undefined *)_objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    puVar25 = PTR_s_fileExistsAtPath__0048a020;
    iVar7 = _objc_msgSend(uVar14,PTR_s_fileExistsAtPath__0048a020,lVar13);
    if (0xb54c2a56 < (uVar1 + 0xb1171fc9 | 0x6adbbf7f)) break;
LAB_0014fe64:
    _objc_msgSend(uVar10,puVar19);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    puVar16 = PTR_s_stringByAppendingPathComponent__00489550;
    _objc_msgSend(lVar11,PTR_s_stringByAppendingPathComponent__00489550,
                  &PTR____CFConstantStringClassReference_004a2d00);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    *(undefined8 *)(puVar6 + -0xf0) = uVar14;
    _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithFormat__00489548,
                  &PTR____CFConstantStringClassReference_004a2ca0);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(lVar11,puVar16,uVar14);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,PTR_s_defaultManager_0048a018);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend(uVar14,PTR_s_fileExistsAtPath__0048a020,uVar12);
  }
  local_e0 = uVar12;
  local_d8 = lVar11;
  local_c0 = puVar15;
  local_b0 = uVar10;
  local_a8 = lVar13;
  local_a0 = uVar14;
  if (iVar7 == 0) {
    puVar19 = (undefined8 *)0x0;
    IVar2 = local_c8;
    goto LAB_0015032c;
  }
  iVar7 = _objc_msgSend(uVar14,puVar25,puVar15);
  puVar19 = local_78;
  do {
  } while ((DAT_004a3cf8 * DAT_004a3cfc + 0x75d0c7a4U ^ 0xeee139ba) / 0x5283fbe1 == 0x78609f4e);
  if (iVar7 == 0) {
    puVar19 = (undefined8 *)0x0;
    uVar14 = local_a0;
    lVar13 = local_a8;
    uVar10 = local_b0;
    IVar2 = local_c8;
    lVar11 = local_d8;
    uVar12 = local_e0;
    goto LAB_0015032c;
  }
  do {
  } while (0x2c5aadbd < (((DAT_004a3d08 | DAT_004a3d0c) + 0xa781c709 | 0x309eed22) ^ 0x1879fe97));
  _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,PTR_s_stringWithContentsOfFile_encodin_0048b128,
                puVar15,4,0);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  uVar14 = _objc_alloc(PTR__OBJC_CLASS___NSData_0048c9b8);
  local_140 = PTR_s_initWithBase64EncodedString_opti_0048ac68;
  local_138 = uVar10;
  local_130 = _objc_msgSend(uVar14,PTR_s_initWithBase64EncodedString_opti_0048ac68,uVar10,0);
  FUN_00167a78();
  local_88 = (undefined *)_objc_retainAutoreleasedReturnValue();
  _objc_msgSend(local_88,puVar19);
  local_78 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
  *(undefined8 **)(puVar6 + -0xf0) = local_78;
  _objc_msgSend(PTR__OBJC_CLASS___NSString_0048c9b0,puVar16,
                &PTR____CFConstantStringClassReference_004a2cc0);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  FUN_0016ef70();
  puVar16 = (undefined *)_objc_retainAutoreleasedReturnValue();
  _objc_release(uVar10);
  local_90 = puVar16;
  _objc_msgSend(puVar16,PTR_s_stringByAppendingString__00489d88,
                &PTR____CFConstantStringClassReference_004a2c80);
  uVar10 = _objc_retainAutoreleasedReturnValue();
  local_e8 = PTR_s_length_00489d78;
  lVar11 = _objc_msgSend();
  puVar16 = PTR__OBJC_CLASS___NSMutableString_0048cbb8;
  if (0xe134b380 <
      ((uint)((ulong)(uint)(DAT_004a3d10 + DAT_004a3d14) * 0x2ea0ebab >> 0x3c) & 1) + 0xb789947) {
    _objc_msgSend(PTR__OBJC_CLASS___NSMutableString_0048cbb8,PTR_s_stringWithCapacity__0048acd8,
                  lVar11);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar25 = PTR_s_stringWithCapacity__0048acd8;
  lVar13 = lVar11 + -1;
  do {
    iVar7 = DAT_004a3d18 - DAT_004a3d1c;
    _objc_msgSend(puVar16,puVar25,lVar11);
    uVar14 = _objc_retainAutoreleasedReturnValue();
    puVar5 = local_90;
    pp_Var29 = local_f0;
    puVar20 = PTR_s_characterAtIndex__0048b130;
    puVar15 = PTR_s_appendFormat__0048ace0;
  } while (iVar7 * -0x7b04362f == -0x6398bbd2);
  if (-1 < lVar13) {
    do {
    } while (0xfd018623 < ((DAT_004a3d28 & DAT_004a3d2c) + 0x91eec16e ^ 0xee31736c));
    do {
      uVar12 = _objc_msgSend(uVar10,puVar20,lVar13);
      *(undefined8 *)(puVar6 + -0xf0) = uVar12;
      _objc_msgSend(uVar14,puVar15,&PTR____CFConstantStringClassReference_004a2c60);
      lVar13 = lVar13 + -1;
    } while (lVar13 != -1);
  }
  puVar19 = local_80;
  if (((uint)((ulong)(DAT_004a3d30 * DAT_004a3d34 & 0x4e192306) * 0x6d7bbc3d >> 0x3b) | 0x62ccde3b)
      < 0xa337928a) goto LAB_001510d8;
  do {
    FUN_0016ef70(uVar14);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_msgSend(uVar12,PTR_s_substringToIndex__0048ac90,0x10);
    uVar18 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    *puVar19 = puVar5;
    puVar19[1] = uVar18;
LAB_001510d8:
    uVar1 = DAT_004a3d38 ^ DAT_004a3d3c;
    FUN_0016ef70(uVar14);
    uVar12 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar14);
    _objc_release(uVar10);
    _objc_msgSend(uVar12,PTR_s_substringToIndex__0048ac90,0x10);
    uVar18 = _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar12);
    puVar16 = PTR_s_arrayWithObjects_count__00489778;
    *puVar19 = puVar5;
    puVar19[1] = uVar18;
  } while (uVar1 * -0x6b4a236e == -0x7ba5f83d);
  _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,puVar19,2)
  ;
  puVar19 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
  _objc_release(uVar18);
  _objc_release(puVar5);
  _objc_release(local_78);
  _objc_release(local_88);
  uVar14 = local_130;
  uVar10 = local_138;
  do {
  } while (((uint)((ulong)(DAT_004a3d48 & DAT_004a3d4c) * 0x6278d3d3 >> 0x3e) ^ 0xa76027c3) -
           0xab750d < 0x3fd0d26f);
  if (puVar19 == (undefined8 *)0x0) {
LAB_0015129c:
    puVar21 = (undefined8 *)0x0;
  }
  else {
    if ((((DAT_004a3d50 | DAT_004a3d54) + 0x96d27c1b ^ 0x510224a0) & 0x5322e4f3) == 0x65406d48) {
      _objc_msgSend(puVar19,PTR_s_count_00489538);
    }
    lVar11 = _objc_msgSend(puVar19,PTR_s_count_00489538);
    puVar25 = local_e8;
    uVar12 = local_130;
    do {
    } while (((DAT_004a3d58 - DAT_004a3d5c ^ 0xa268265bU) / 0x257ded01) * -0x51100382 == -0x5e39241a
            );
    if (lVar11 != 2) goto LAB_0015129c;
    local_148 = puVar16;
    do {
    } while (0xd975726f <
             0x2bc8596bU -
             (int)((long)((ulong)(DAT_004a3d68 + DAT_004a3d6c ^ 0xa21cce9c) * 0x8c99fbdd) >> 0x3f));
    local_90 = PTR_s_firstObject_00489bf0;
    local_80 = puVar19;
    while( true ) {
      puVar19 = local_80;
      local_88 = (undefined *)
                 (CONCAT44(local_88._4_4_,DAT_004a3d78 + DAT_004a3d7c + -0x303b95) | 0x24def24f);
      _objc_msgSend(local_80,local_90);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_s_dataUsingEncoding__0048ac98;
      _objc_msgSend(uVar10,PTR_s_dataUsingEncoding__0048ac98,4);
      puVar15 = (undefined *)_objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_msgSend(puVar19,PTR_s_lastObject_00489bf8);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar10,puVar16,4);
      puVar20 = (undefined *)_objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar16 = PTR__OBJC_CLASS___NSMutableData_0048cba8;
      lVar11 = _objc_msgSend(uVar12,puVar25);
      _objc_msgSend(puVar16,PTR_s_dataWithLength__0048aca0,lVar11 + 0x10);
      puVar21 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
      uVar10 = _objc_retainAutorelease(puVar15);
      puVar16 = PTR_s_bytes_0048aca8;
      local_78 = (undefined8 *)_objc_msgSend(uVar10,PTR_s_bytes_0048aca8);
      sVar22 = _objc_msgSend(puVar15,puVar25);
      uVar10 = _objc_retainAutorelease(puVar20);
      pvVar23 = (void *)_objc_msgSend(uVar10,puVar16);
      uVar10 = _objc_retainAutorelease(uVar12);
      pvVar24 = (void *)_objc_msgSend(uVar10,puVar16);
      dataInLength = _objc_msgSend(uVar12,puVar25);
      puVar26 = local_80;
      puVar19 = local_108;
      if (0x4958b64b < (uint)local_88) break;
      _objc_msgSend(local_80,local_90);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_s_dataUsingEncoding__0048ac98;
      _objc_msgSend(uVar10,PTR_s_dataUsingEncoding__0048ac98,4);
      uVar14 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_msgSend(puVar26,PTR_s_lastObject_00489bf8);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar10,puVar16,4);
      uVar18 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      puVar16 = PTR__OBJC_CLASS___NSMutableData_0048cba8;
      lVar11 = _objc_msgSend(uVar12,puVar25);
      _objc_msgSend(puVar16,PTR_s_dataWithLength__0048aca0,lVar11 + 0x10);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = _objc_retainAutorelease(uVar14);
      puVar16 = PTR_s_bytes_0048aca8;
      _objc_msgSend(uVar10,PTR_s_bytes_0048aca8);
      _objc_msgSend(uVar14,puVar25);
      uVar10 = _objc_retainAutorelease(uVar18);
      _objc_msgSend(uVar10,puVar16);
      uVar10 = _objc_retainAutorelease(uVar12);
      _objc_msgSend(uVar10,puVar16);
      _objc_msgSend(uVar12,puVar25);
    }
    while( true ) {
      local_88 = puVar20;
      local_90 = puVar15;
      iVar7 = DAT_004a3d88 * DAT_004a3d8c;
      uVar10 = _objc_retainAutorelease(puVar21);
      uVar10 = _objc_msgSend(uVar10,PTR_s_mutableBytes_0048acb0);
      uVar14 = _objc_msgSend(puVar21,puVar25);
      *(undefined8 *)(puVar6 + -0xf8) = uVar14;
      *(undefined8 **)(puVar6 + -0xf0) = puVar19;
      *(undefined8 *)(puVar6 + -0x100) = uVar10;
      CVar8 = _CCCrypt(1,0,1,local_78,sVar22,pvVar23,pvVar24,dataInLength,
                       *(void **)(puVar6 + -0x100),*(size_t *)(puVar6 + -0xf8),
                       *(size_t **)(puVar6 + -0xf0));
      uVar10 = local_138;
      if (0x2d99f189 < (iVar7 + 0xf4c57aa4U & 0xf70ef5ab)) break;
      uVar10 = _objc_retainAutorelease(puVar21);
      uVar10 = _objc_msgSend(uVar10,PTR_s_mutableBytes_0048acb0);
      uVar14 = _objc_msgSend(puVar21,puVar25);
      *(undefined8 *)(puVar6 + -0xf8) = uVar14;
      *(undefined8 **)(puVar6 + -0xf0) = puVar19;
      *(undefined8 *)(puVar6 + -0x100) = uVar10;
      _CCCrypt(1,0,1,local_78,sVar22,pvVar23,pvVar24,dataInLength,*(void **)(puVar6 + -0x100),
               *(size_t *)(puVar6 + -0xf8),*(size_t **)(puVar6 + -0xf0));
      puVar15 = local_90;
      puVar20 = local_88;
    }
    puVar25 = local_88;
    uVar14 = local_130;
    puVar19 = local_80;
    puVar16 = local_90;
    local_78 = puVar21;
    if (CVar8 == 0) {
      puVar19 = local_108;
      puVar16 = PTR_s_setLength__0048acb8;
      puVar25 = PTR_s_initWithData_encoding__0048ac60;
      if ((((DAT_004a3d90 | DAT_004a3d94) >> 1) / 0x6e0e8c97 ^ 0x5050b | 0x7b987af4) == 0x6e665603)
      {
        _objc_msgSend(puVar21,PTR_s_setLength__0048acb8,*local_108);
        _objc_alloc(PTR__OBJC_CLASS___NSString_0048c9b0);
        puVar21 = local_78;
        puVar19 = local_108;
        puVar16 = PTR_s_setLength__0048acb8;
        puVar25 = PTR_s_initWithData_encoding__0048ac60;
      }
      do {
        uVar1 = DAT_004a3d98 - DAT_004a3d9c;
        _objc_msgSend(puVar21,puVar16,*puVar19);
        uVar12 = _objc_alloc(PTR__OBJC_CLASS___NSString_0048c9b0);
      } while ((uVar1 / 0x3ee0c478 | 0x5dd7bf25) < 0x475be0c7);
      uVar1 = 0;
      if (DAT_004a3da4 != 0) {
        uVar1 = DAT_004a3da0 / DAT_004a3da4;
      }
      if ((uVar1 ^ 0x3d490a2c) * -0x6c14d8c2 == -0x1a2ed7d2) goto LAB_0015191c;
      while (uVar1 = DAT_004a3da8 * DAT_004a3dac, lVar11 = _objc_msgSend(uVar12,puVar25,puVar21,4),
            puVar19 = local_80, puVar16 = local_90, uVar14 = local_130,
            0xd04687ba < (uVar1 | 0x77ffff67)) {
LAB_0015191c:
        _objc_msgSend(uVar12,puVar25,puVar21,4);
      }
      if (lVar11 == 0) {
        puVar21 = (undefined8 *)0x0;
        puVar25 = local_88;
      }
      else {
        uVar12 = _objc_alloc(PTR__OBJC_CLASS___NSData_0048c9b8);
        puVar25 = (undefined *)_objc_msgSend(uVar12,local_140,lVar11,1);
        puVar21 = local_110;
        *local_110 = 0;
        local_140 = puVar25;
        _objc_msgSend(PTR__OBJC_CLASS___NSJSONSerialization_0048cba0,
                      PTR_s_JSONObjectWithData_options_error_0048ac70,puVar25,0,puVar21);
        puVar26 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
        local_110 = (undefined8 *)_objc_retain(*puVar21);
        local_150 = lVar11;
        local_108 = puVar26;
        if (local_110 == (undefined8 *)0x0) {
          local_158 = (undefined8 *)PTR_s_allKeys_0048a9b8;
          _objc_msgSend(puVar26);
          uVar12 = _objc_retainAutoreleasedReturnValue();
          local_160 = PTR_s_containsObject__0048a9c0;
          iVar7 = _objc_msgSend(uVar12,PTR_s_containsObject__0048a9c0,
                                &PTR____CFConstantStringClassReference_004a2ce0);
          _objc_release(uVar12);
          do {
          } while (((DAT_004a3db8 - DAT_004a3dbc ^ 0x2d0a35e3U) + 0xc26abf61 | 0x6e87480c) <
                   0x1c966196);
          if (iVar7 == 0) goto LAB_00151b74;
          puVar21 = local_108;
          puVar26 = local_158;
          if ((((DAT_004a3dc0 ^ DAT_004a3dc4) * -0x1c4fddbd) / 0x2679478b | 0xf8819511) < 0x92629acf
             ) {
            _objc_msgSend(local_108,local_158);
            _objc_retainAutoreleasedReturnValue();
            puVar21 = local_108;
            puVar26 = local_158;
          }
          do {
            uVar1 = DAT_004a3dc8 | DAT_004a3dcc;
            _objc_msgSend(puVar21,puVar26);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            puVar16 = local_160;
          } while (0xdac57e96 <
                   (uint)((ulong)(uVar1 + 0xce29a483 >> 2) * 0x14526c05 >> 0x39) + 0x8395b69);
          while (uVar1 = DAT_004a3dd8 + DAT_004a3ddc,
                uVar9 = _objc_msgSend(uVar12,puVar16,&PTR____CFConstantStringClassReference_004a2c40
                                     ), puVar21 = local_108, uVar14 = local_130, puVar26 = local_158
                , 0x43ac48cf <
                  ((uint)((ulong)(uVar1 ^ 0x2be0ca1) * 0x6050f5cb >> 0x3e) | 0x26f00470)) {
            _objc_msgSend(uVar12,puVar16,&PTR____CFConstantStringClassReference_004a2c40);
          }
          do {
          } while (((DAT_004a3de8 & DAT_004a3dec) + 0xb63db034 | 0xf2ba9215) < 0xe898e19b);
          if (uVar9 == 0) {
LAB_00151f70:
            puVar25 = local_88;
            uVar9 = uVar9 ^ 1;
            _objc_release(uVar12);
            puVar16 = local_90;
          }
          else {
            local_164 = uVar9;
            if ((DAT_004a3df0 ^ DAT_004a3df4 | 0x236b23f9) + 0x218fbf4a < 0xd5f6188e)
            goto LAB_00151cc4;
            do {
              _objc_msgSend(puVar21,puVar26);
              _objc_retainAutoreleasedReturnValue();
LAB_00151cc4:
              uVar1 = DAT_004a3df8 ^ DAT_004a3dfc;
              _objc_msgSend(puVar21,puVar26);
              uVar18 = _objc_retainAutoreleasedReturnValue();
            } while ((uVar1 * -0x333723e3 & 0x3c3a70f6) * -0x3b6ef6e1 < 0x279237eb);
            iVar7 = _objc_msgSend(uVar18,local_160,&PTR____CFConstantStringClassReference_004a2be0);
            _objc_release(uVar18);
            _objc_release(uVar12);
            puVar16 = PTR_s_objectForKeyedSubscript__00489d00;
            if (iVar7 != 0) {
              _objc_msgSend(puVar21,PTR_s_objectForKeyedSubscript__00489d00,
                            &PTR____CFConstantStringClassReference_004a2c40);
              uVar12 = _objc_retainAutoreleasedReturnValue();
              *local_128 = uVar12;
              if (((DAT_004a3e00 & DAT_004a3e04 & 0x2f01dd37) + 0xba3793e6 | 0x9101afb1) <
                  0xf53a419f) goto LAB_00151df8;
              do {
                _objc_msgSend(puVar21,puVar16,&PTR____CFConstantStringClassReference_004a2be0);
                _objc_retainAutoreleasedReturnValue();
LAB_00151df8:
                uVar1 = DAT_004a3e08 | DAT_004a3e0c;
                _objc_msgSend(puVar21,puVar16,&PTR____CFConstantStringClassReference_004a2be0);
                uVar18 = _objc_retainAutoreleasedReturnValue();
                puVar26 = local_128;
                puVar25 = local_148;
              } while ((uVar1 | 0x1b20f5ee) * 0x24a854dc + 0xa50a3cf8 < 0x5184e42d);
              uVar1 = 0;
              if (DAT_004a3e14 != 0) {
                uVar1 = DAT_004a3e10 / DAT_004a3e14;
              }
              if ((uVar1 + 0x4bdea317 & 0xe1bafcfa) * -0x7487037f < 0xc6b8e23) goto LAB_00151f34;
              while( true ) {
                uVar1 = DAT_004a3e18 - DAT_004a3e1c;
                puVar26[1] = uVar18;
                _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,puVar25,puVar26,2);
                puVar21 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
                uVar9 = local_164;
                if ((uVar1 ^ 0x5cd95426) < 0xbe9503b2) break;
LAB_00151f34:
                puVar26[1] = uVar18;
                _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,puVar25,puVar26,2);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar18);
              }
              goto LAB_00151f70;
            }
            uVar9 = 1;
            puVar25 = local_88;
            puVar16 = local_90;
          }
        }
        else {
LAB_00151b74:
          uVar9 = 0;
          puVar21 = (undefined8 *)0x0;
          puVar25 = local_88;
        }
        _objc_release(local_108);
        _objc_release(local_140);
        _objc_release(local_110);
        _objc_release(local_150);
        if (uVar9 != 0) goto LAB_00151720;
      }
    }
    else {
LAB_00151720:
      do {
      } while (0x7cfd5e97 < ((DAT_004a3e28 & DAT_004a3e2c) + 0x7ba4ca3f & 0x314a194d) + 0xf506cae3);
      puVar21 = (undefined8 *)0x0;
    }
    puVar26 = local_78;
    if (((DAT_004a3e30 & DAT_004a3e34) + 0x42561b78 ^ 0x1ffffe | 0xb5fdbfc) != 0xe403e28)
    goto LAB_00151f88;
    do {
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar16);
LAB_00151f88:
      uVar1 = DAT_004a3e38 | DAT_004a3e3c;
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar16);
      pp_Var29 = local_f0;
    } while (((uint)((ulong)(uVar1 * 0x95c9e09) * 0x2bf4e32b >> 0x3d) | 0x4cfca7ea) == 0x528e9f50);
  }
  while( true ) {
    uVar1 = DAT_004a3e48 + DAT_004a3e4c;
    _objc_release(puVar19);
    _objc_release(uVar14);
    _objc_release(uVar10);
    puVar15 = local_c0;
    puVar16 = PTR_s_count_00489538;
    if (((uVar1 | 0xf5fdf56) * 0x3df654e4 & 0x111cf200) < 0x3127ec55) break;
    _objc_release(puVar19);
    _objc_release(uVar14);
    _objc_release(uVar10);
  }
  if (puVar21 == (undefined8 *)0x0) {
    puVar19 = (undefined8 *)0x0;
    uVar12 = local_e0;
  }
  else {
    do {
    } while (0xf5a2e99b < (DAT_004a3e58 & DAT_004a3e5c & 0x138eb04c) * 0x225e929);
    if (0xb0f69841 <
        ((uint)((ulong)(uint)(DAT_004a3e60 * DAT_004a3e64) * 0x41e65ff1 >> 0x3e) * -0x2aa720ab |
        0x320bf950)) {
      _objc_msgSend(puVar21,PTR_s_count_00489538);
    }
    lVar13 = _objc_msgSend(puVar21,puVar16);
    lVar11 = local_a8;
    do {
    } while (0xf19956ae < (DAT_004a3e68 & DAT_004a3e6c | 0x52c30dbd) + 0x74673d5f);
    if (lVar13 == 2) {
      _objc_msgSend(local_a0,PTR_s_attributesOfItemAtPath_error__0048b0e8,local_a8,0);
      lVar13 = _objc_retainAutoreleasedReturnValue();
      uVar10 = _objc_msgSend(lVar13,PTR_s_fileSize_0048b0f0);
      _objc_msgSend(PTR__OBJC_CLASS___NSMutableData_0048cba8,PTR_s_dataWithCapacity__0048b0f8,uVar10
                   );
      local_108 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
      local_140 = (undefined *)_objc_autoreleasePoolPush();
      _objc_msgSend(puVar21,PTR_s_firstObject_00489bf0);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      puVar16 = PTR_s_dataUsingEncoding__0048ac98;
      _objc_msgSend(uVar10,PTR_s_dataUsingEncoding__0048ac98,4);
      local_130 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_msgSend(puVar21,PTR_s_lastObject_00489bf8);
      uVar10 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar10,puVar16,4);
      local_138 = _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar10);
      _objc_msgSend(PTR__OBJC_CLASS___NSFileHandle_0048cbf0,
                    PTR_s_fileHandleForReadingAtPath__0048b100,lVar11);
      local_78 = (undefined8 *)_objc_retainAutoreleasedReturnValue();
      puVar25 = local_e8;
      uVar10 = local_130;
      puVar16 = PTR_s_bytes_0048aca8;
      do {
      } while (((DAT_004a3e78 - DAT_004a3e7c) * -0x5d610331 + 0xf3a92e44U & 0xcda2047e) ==
               0x4d2077ea);
      if (local_78 == (undefined8 *)0x0) {
        local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
        uVar10 = local_138;
        puVar16 = local_140;
        puVar26 = local_108;
        uVar14 = local_130;
      }
      else {
        do {
          local_150 = lVar13;
          local_158 = puVar21;
          uVar1 = 0;
          if (DAT_004a3e9c != 0) {
            uVar1 = DAT_004a3e98 / DAT_004a3e9c;
          }
          *pp_Var29 = (CCCryptorRef)0x0;
          uVar14 = _objc_retainAutorelease(uVar10);
          pvVar23 = (void *)_objc_msgSend(uVar14,puVar16);
          sVar22 = _objc_msgSend(uVar10,puVar25);
          uVar14 = local_138;
          puVar21 = local_158;
          lVar13 = local_150;
        } while ((uVar1 ^ 0x12980355 | 0x6d41fc20) + 0x5cd5cbdf < 0x4d5517e2);
        if (((DAT_004a3ea0 - DAT_004a3ea4) * -0x79811fe4 | 0x730827acU) != 0x7b6adc5b)
        goto LAB_00152554;
        do {
          uVar10 = _objc_retainAutorelease(uVar14);
          pvVar24 = (void *)_objc_msgSend(uVar10,puVar16);
          _CCCryptorCreate(1,0,1,pvVar23,sVar22,pvVar24,pp_Var29);
LAB_00152554:
          uVar1 = DAT_004a3ea8 ^ DAT_004a3eac;
          uVar10 = _objc_retainAutorelease(uVar14);
          pvVar24 = (void *)_objc_msgSend(uVar10,puVar16);
          CVar8 = _CCCryptorCreate(1,0,1,pvVar23,sVar22,pvVar24,pp_Var29);
          lVar13 = local_150;
        } while (0x2f09d731 < (uVar1 * -0x3804d2d ^ 0x5a1346f8) / 0x510d40d3);
        local_148 = (undefined *)CONCAT44(local_148._4_4_,(uint)(CVar8 == 0));
        if (CVar8 == 0) {
          do {
          } while (0x2c782bb2 < (DAT_004a3eb8 * DAT_004a3ebc + 0x3c76e411U ^ 0x477ce8cf));
          do {
          } while (0x7915bb41 <
                   ((DAT_004a3ec8 ^ DAT_004a3ecc) / 0x34260d8a ^ 0x22b9eb0e) + 0x498d9519);
          do {
          } while ((DAT_004a3ed8 & DAT_004a3edc | 0x7ffffa76) == 0x83c5f8d8);
          _objc_msgSend(PTR__OBJC_CLASS___NSMutableData_0048cba8,PTR_s_dataWithLength__0048aca0,
                        0x400010);
          uVar10 = _objc_retainAutoreleasedReturnValue();
          do {
          } while ((((DAT_004a3ee8 & DAT_004a3eec) + 0x94985a78) / 0x2226a712 ^ 0xf895d5ff) <
                   0xa2fb2862);
          local_80 = (undefined8 *)puVar16;
          local_90 = PTR_s_readDataOfLength__0048b110;
          do {
          } while ((uint)((ulong)(DAT_004a3ef8 * DAT_004a3efc | 0xdafee5ec) * 0x5569d7fd >> 0x3e) ==
                   0x4f63099a);
          local_128 = (undefined8 *)PTR_s_mutableBytes_0048acb0;
          local_110 = (undefined8 *)PTR_s_appendBytes_length__0048b120;
          do {
            if (0xdcdfc553 < ((DAT_004a3f00 & DAT_004a3f04) / 0x44c2b9c0 + 0xc5db511e) / 0x3d01d443)
            {
              _objc_autoreleasePoolPush();
            }
            do {
              uVar1 = DAT_004a3f08 | DAT_004a3f0c;
              uVar14 = _objc_autoreleasePoolPush();
            } while (0x8384cf7a <
                     (uint)((ulong)((uVar1 & 0x1eca1d1f) + 0x4e19306c) * 0x488b32ab >> 0x3d));
            do {
            } while ((uint)((ulong)((DAT_004a3f18 | DAT_004a3f1c) + 0xe29b0494) * 0x7be5a08f >> 0x3e
                           ) * -0x111fdb88 == -0x4c705385);
            _objc_msgSend(local_78,local_90,0x400000);
            uVar12 = _objc_retainAutoreleasedReturnValue();
            psVar17 = local_d0;
            do {
            } while ((((DAT_004a3f28 | DAT_004a3f2c) + 0x5e172eab | 0xc7f0259a) ^ 0x20a0397e) <
                     0xd1ab69cc);
            lVar11 = _objc_msgSend(uVar12,local_e8);
            do {
            } while (0xc32a4d26 < ((DAT_004a3f38 - DAT_004a3f3c | 0xda2e1f61U) ^ 0xa48d3343));
            if (lVar11 != 0) {
              do {
              } while (((DAT_004a3f68 - DAT_004a3f6c | 0xc17d1b33U) + 0x999d2162 ^ 0x3432c52a) <
                       0x1e1ea5a6);
              uVar1 = 0;
              if (DAT_004a3f74 != 0) {
                uVar1 = DAT_004a3f70 / DAT_004a3f74;
              }
              if (0x16faac21 < (uVar1 + 0xcc5c7fc6 ^ 0x9bf43c0b) / 0x52004ef5) goto LAB_00152a70;
              while (*psVar17 = 0, (DAT_004a3f78 ^ DAT_004a3f7c | 0xf9efbffd) < 0x651b8784) {
LAB_00152a70:
                *psVar17 = 0;
              }
              p_Var27 = *local_f0;
              uVar18 = _objc_retainAutorelease(uVar12);
              pvVar23 = (void *)_objc_msgSend(uVar18,local_80);
              do {
              } while (0xd4dca8ca < ((DAT_004a3f88 | DAT_004a3f8c) ^ 0x40408008 | 0xbe367f75));
              local_88 = (undefined *)_objc_msgSend(uVar12,local_e8);
              if ((DAT_004a3f90 - DAT_004a3f94) * 0x2ddd1232 + 0x66b97e8dU < 0x3b64186a)
              goto LAB_00152b5c;
              while (uVar1 = DAT_004a3f98 * DAT_004a3f9c, _objc_retainAutorelease(uVar10),
                    (uVar1 & 0x3d820e32) * -0x332c291d == -0x7d6488d5) {
LAB_00152b5c:
                _objc_retainAutorelease(uVar10);
              }
              do {
              } while (0x5c8b4d7f <
                       ((uint)((ulong)(uint)(DAT_004a3fa8 * DAT_004a3fac) * 0x8869b59 >> 0x3a) ^
                       0xbe2af7bb) + 0x4f29e036);
              pvVar24 = (void *)_objc_msgSend(uVar10,local_128);
              sVar22 = _objc_msgSend(uVar10,local_e8);
              CVar8 = _CCCryptorUpdate(p_Var27,pvVar23,(size_t)local_88,pvVar24,sVar22,local_d0);
              do {
              } while (0x2513afc2 < ((DAT_004a3fb8 - DAT_004a3fbc) + 0x24ffa21bU) / 0x7235c13c);
              if (CVar8 != 0) {
                do {
                } while (((DAT_004a3fc8 & DAT_004a3fcc) / 0x25bcf63b & 2 | 0xee275dc4) < 0x85ee22d2)
                ;
                _objc_msgSend(PTR__OBJC_CLASS___NSException_0048cbf8,
                              PTR_s_exceptionWithName_reason_userInf_0048b118,
                              &PTR____CFConstantStringClassReference_004a2c20,
                              &PTR____CFConstantStringClassReference_004a2c00,0);
                _objc_retainAutoreleasedReturnValue();
                do {
                } while (0x4ad5401e <
                         (uint)((ulong)(DAT_004a3fd8 | DAT_004a3fdc) * 0x4e314d81 >> 0x3e) +
                         0xd3fb6e3);
                if (0x78214df8 <
                    (DAT_004a3fe0 - DAT_004a3fe4 & 0xe9639799U | 0xc0201781) + 0xd6e3acb7)
                goto LAB_001534b8;
                do {
                  _objc_autorelease();
LAB_001534b8:
                  iVar7 = DAT_004a3fe8 * DAT_004a3fec;
                  _objc_autorelease();
                } while (iVar7 * 0x7c5c61f0 == 0x4780b7c3);
                do {
                } while ((0x8d928343U -
                          (int)((long)((ulong)(DAT_004a3ff8 ^ DAT_004a3ffc) * 0xbd57a3c3) >> 0x3f) |
                         0xd44a96f1) < 0x3193f50e);
                    /* WARNING: Subroutine does not return */
                _objc_exception_throw();
              }
              if (0xc97f4151 < ((DAT_004a4030 & DAT_004a4034 & 0xf714ad4) * 0x2e153a4d ^ 0x26ce06e9)
                 ) {
                _objc_retainAutorelease(uVar10);
              }
              do {
                iVar7 = DAT_004a4038 * DAT_004a403c;
                _objc_retainAutorelease(uVar10);
              } while (iVar7 == 0x76061bc0);
              do {
              } while (0x9ca00b73 < DAT_004a4048 * DAT_004a404c * -0x256c64b0 + 0xf4c7bfaU);
              uVar18 = _objc_msgSend(uVar10,local_80);
              uVar1 = 0;
              if (DAT_004a405c != 0) {
                uVar1 = DAT_004a4058 / DAT_004a405c;
              }
              do {
              } while ((uVar1 + 0xc01ad6b6 & 0x892004) == 0x4527a058);
              do {
              } while (0x2c72e480 <
                       (uint)((ulong)(DAT_004a4068 * DAT_004a406c ^ 0x22441649U | 0x5193e116) *
                              0x4771b7f7 >> 0x3e));
              _objc_msgSend(local_108,local_110,uVar18,*local_d0);
              do {
              } while (((DAT_004a4078 - DAT_004a407c) + 0xd7c72126U & 0x8ba8e431) == 0x9ea1440c);
              do {
              } while (0xd8f09726 <
                       (DAT_004a4088 * DAT_004a408c + 0xbb2f5080U & 0x7f9ce822 | 0xb00c802));
            }
            uVar1 = 0;
            if (DAT_004a4094 != 0) {
              uVar1 = DAT_004a4090 / DAT_004a4094;
            }
            if (uVar1 * -0xa2809b8 == 0x554ccfeb) goto LAB_00152f3c;
            while (uVar1 = DAT_004a4098 | DAT_004a409c, _objc_release(uVar12),
                  (uVar1 / 0x15eb38f7) * 0x1f0206bb + 0x2843f95e < 0x9ee7c172) {
LAB_00152f3c:
              _objc_release(uVar12);
            }
            uVar1 = 0;
            if (DAT_004a40ac != 0) {
              uVar1 = DAT_004a40a8 / DAT_004a40ac;
            }
            do {
            } while (0x8efd68ac < (uVar1 ^ 0x21da9df3) * -0x40b24d7a + 0x39d207eb);
            _objc_autoreleasePoolPop(uVar14);
            pp_Var29 = local_f0;
            puVar28 = local_118;
            psVar17 = local_120;
            uVar14 = local_130;
            lVar13 = local_150;
            puVar21 = local_158;
            do {
            } while (0x78a6f69c <
                     (DAT_004a40b8 + DAT_004a40bc + 0x1e934335U & 0x5fe5adca | 0x13602c00));
          } while (lVar11 != 0);
          do {
          } while (((uint)((ulong)((DAT_004a40c8 & DAT_004a40cc) + 0x1f0ce74c) * 0x3265a30f >> 0x3c)
                   | 0xd2852d04) == 0x89469939);
          if (((DAT_004a40d0 - DAT_004a40d4) + 0x1762723aU | 0xc5122722) * -0x2f12f2ff < 0xf197f210)
          goto LAB_001535a0;
          do {
            *psVar17 = 0;
LAB_001535a0:
            uVar1 = 0;
            if (DAT_004a40dc != 0) {
              uVar1 = DAT_004a40d8 / DAT_004a40dc;
            }
            *psVar17 = 0;
          } while (0x657afb20 < uVar1 * -0x76024423 + 0x64219142);
          uVar1 = 0;
          if (DAT_004a40ec != 0) {
            uVar1 = DAT_004a40e8 / DAT_004a40ec;
          }
          do {
          } while ((uVar1 + 0x72d4f854 | 0x759dc64e) == 0xb638c540);
          CVar8 = _CCCryptorFinal(*pp_Var29,puVar28,0x10,psVar17);
          do {
          } while ((DAT_004a40f8 & DAT_004a40fc & 0x424002a ^ 0xdd68bc0a) < 0xd5a88058);
          do {
          } while (0xa007ba5b <
                   ((DAT_004a4108 + DAT_004a410c & 0x393efed4U) + 0x95fc3bd9 ^ 0x15b25a7e));
          uVar1 = 0;
          if (DAT_004a411c != 0) {
            uVar1 = DAT_004a4118 / DAT_004a411c;
          }
          do {
          } while (0x5de0f4b6 < uVar1 * 0x26d266a4 + 0x2ffa1528);
          if (CVar8 == 0 && *psVar17 != 0) {
            do {
            } while (0xcf338ae4 <
                     (uint)((ulong)(DAT_004a4128 & DAT_004a412c & 0xf28e629d ^ 0xcb5aaee0) *
                            0x6c9795d3 >> 0x3e));
            _objc_msgSend(local_108,local_110,puVar28);
          }
          do {
          } while (0x900623b6 <
                   ((DAT_004a4158 - DAT_004a415c | 0x7948c34fU) ^ 0x60a352fa) / 0xa7c9a9b);
          if (((DAT_004a4160 | DAT_004a4164) ^ 0x10 | 0xef7fffef) < 0x8a5822d1) {
            _objc_release(uVar10);
          }
          _objc_release(uVar10);
          puVar26 = local_108;
          do {
          } while (((DAT_004a4168 * DAT_004a416c & 0x772efa5fU) * 0x1434250a & 0xca1cd472) <
                   0x1d5732f9);
          p_Var27 = *pp_Var29;
          do {
          } while (0x7b845e75 < (DAT_004a4178 * DAT_004a417c + 0x4ad147b8U & 0x46d20efc));
          if (p_Var27 != (CCCryptorRef)0x0) {
            do {
            } while ((int)((long)((ulong)((DAT_004a4188 & DAT_004a418c ^ 0x33c27ab1) + 0x70efccca) *
                                 0xe05fd469) >> 0x3f) == 0x685af618);
            _CCCryptorRelease(p_Var27);
          }
          do {
          } while (0xb85dd47e < (DAT_004a41c8 + DAT_004a41cc & 0x7de6616fU | 0x7d46616f));
          do {
          } while ((DAT_004a41d8 - DAT_004a41dc & 0xe9bcb317U | 0x41b89117) == 0xff7ccf73);
          _objc_msgSend(local_78,PTR_s_closeFile_0048b108);
          uVar10 = local_138;
          puVar16 = local_140;
        }
        else {
          _objc_msgSend(local_78,PTR_s_closeFile_0048b108);
          uVar10 = local_138;
          puVar16 = local_140;
          puVar26 = local_108;
          puVar21 = local_158;
          uVar14 = local_130;
        }
      }
      while( true ) {
        uVar1 = DAT_004a41e8 & DAT_004a41ec;
        _objc_release(local_78);
        _objc_release(uVar10);
        _objc_release(uVar14);
        _objc_autoreleasePoolPop(puVar16);
        if ((uint)((int)((long)((ulong)(uVar1 * -0x61a941a5) * 0xa1e820f3) >> 0x3f) * 0x31a97122) <
            0xa9420632) break;
        _objc_release(local_78);
        _objc_release(uVar10);
        _objc_release(uVar14);
        _objc_autoreleasePoolPop(puVar16);
      }
      if ((int)local_148 == 0) {
        puVar19 = (undefined8 *)0x0;
      }
      else {
        if (((DAT_004a41f0 ^ DAT_004a41f4 | 0xece5f8cf) + 0xe7abccfe | 0x3b73d08a) == 0xb965fe15) {
          _objc_retain(puVar26);
        }
        do {
          iVar7 = DAT_004a41f8 - DAT_004a41fc;
          puVar26 = (undefined8 *)_objc_retain(puVar26);
          puVar19 = puVar26;
        } while (0x854d5b0f <
                 (uint)-(int)((long)((ulong)(iVar7 + 0x6e6875edU | 0x915fdc57) * 0xa2ff278b) >> 0x3f
                             ));
      }
      uVar12 = local_e0;
      if (((DAT_004a4210 | DAT_004a4214) * 0x48f8980f | 0xbf79722d) == 0x22fac3a3)
      goto LAB_0015349c;
      while( true ) {
        uVar1 = DAT_004a4218 * DAT_004a421c;
        _objc_release(puVar26);
        _objc_release(lVar13);
        puVar15 = local_c0;
        if ((uVar1 | 0x761dae5) * 0x3907bf46 != 0x46b4eeda) break;
LAB_0015349c:
        _objc_release(puVar26);
        _objc_release(lVar13);
      }
    }
    else {
      puVar19 = (undefined8 *)0x0;
      uVar12 = local_e0;
    }
  }
  if ((DAT_004a4220 ^ DAT_004a4224) * 0x71dbe1e1 == 0x1036ad66) goto LAB_00152540;
  while (uVar1 = DAT_004a4228 | DAT_004a422c, _objc_release(puVar21), uVar14 = local_a0,
        lVar13 = local_a8, uVar10 = local_b0, IVar2 = local_c8, lVar11 = local_d8,
        (uVar1 + 0xd3274c3 | 0x5ad7e324) * -0x49015c79 < 0x79af221) {
LAB_00152540:
    _objc_release(puVar21);
  }
LAB_0015032c:
  do {
    uVar1 = DAT_004a4238 | DAT_004a423c;
    _objc_release(uVar14);
    _objc_release(puVar15);
    _objc_release(lVar13);
    _objc_release(uVar12);
    _objc_release(uVar10);
    _objc_release(lVar11);
    uVar18 = *(undefined8 *)(IVar2 + 8);
    *(undefined8 **)(IVar2 + 8) = puVar19;
    _objc_release(uVar18);
    plVar4 = plStack_f8;
    puVar3 = local_100;
  } while (0xe383cbb6 < ((uVar1 & 0xe6f70fef | 0x6310149) ^ 0xef189d3d));
  lVar11 = *(long *)(IVar2 + 8);
  if (lVar11 != 0) {
    *local_100 = 0;
    puVar19 = local_98;
    uVar1 = 0;
    if (DAT_004a424c != 0) {
      uVar1 = DAT_004a4248 / DAT_004a424c;
    }
    do {
    } while (uVar1 + 0xd7c3a17a < 0x152d5aba);
    do {
    } while (0x5f11c298 < ((DAT_004a4258 ^ DAT_004a425c) + 0x68458901 | 0xdae52407) / 0x6c4a19f8);
    _objc_msgSend(lVar11,PTR_s_getBytes_length__0048b028,puVar3,4);
    if ((DAT_004a4260 ^ DAT_004a4264) == 0xfda8dddf) {
      uVar1 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
      uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
      *puVar3 = uVar1;
      *(ulong *)(IVar2 + 0x10) = (ulong)uVar1;
    }
    do {
      uVar1 = DAT_004a4268 & DAT_004a426c;
      uVar9 = (*puVar3 & 0xff00ff00) >> 8 | (*puVar3 & 0xff00ff) << 8;
      uVar9 = uVar9 >> 0x10 | uVar9 << 0x10;
      *puVar3 = uVar9;
      puVar28 = local_b8;
      *(ulong *)(IVar2 + 0x10) = (ulong)uVar9;
    } while (0x89abfa48 < (uint)((ulong)(uVar1 + 0x379c4d7a) * 0x8458ae1 >> 0x3a));
    do {
    } while (((DAT_004a4278 - DAT_004a427c) + 0xb6e586f0U | 0xf9e3df91) < 0xcbd6c4b0);
    do {
    } while (((DAT_004a4288 - DAT_004a428c) * 0xb4cb10e ^ 0x2421cb14U) / 0x2351485d == 0x2cea5486);
    _objc_msgSend(*(undefined8 *)(IVar2 + 8),PTR_s_subdataWithRange__0048b030,4);
    psVar17 = (size_t *)_objc_retainAutoreleasedReturnValue();
    *plVar4 = 0;
    uVar1 = 0;
    if (DAT_004a429c != 0) {
      uVar1 = DAT_004a4298 / DAT_004a429c;
    }
    do {
    } while ((uVar1 & 0xb7b5ff7e | 0x85b17f2e) == 0x34829aff);
    do {
    } while ((DAT_004a42a8 - DAT_004a42ac & 0x2923100U) * -0x55ab0447 == -0x25b5489d);
    _objc_msgSend(PTR__OBJC_CLASS___NSJSONSerialization_0048cba0,
                  PTR_s_JSONObjectWithData_options_error_0048ac70,psVar17,0,plVar4);
    uVar10 = _objc_retainAutoreleasedReturnValue();
    lVar11 = *plVar4;
    _objc_retain(lVar11);
    if (lVar11 == 0) {
      _objc_msgSend(PTR__OBJC_CLASS___NSMutableDictionary_0048cbd0,PTR_s_dictionary_0048b038);
      local_a0 = _objc_retainAutoreleasedReturnValue();
      if (((DAT_004a42e0 & DAT_004a42e4) + 0xed8592db ^ 0xf3fc3b79) * 0x2de172ff < 0x830b9ae0) {
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[7] = 0;
        puVar19[6] = 0;
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
      }
      do {
        puVar19[1] = 0;
        *puVar19 = 0;
        puVar19[3] = 0;
        puVar19[2] = 0;
        puVar19[5] = 0;
        puVar19[4] = 0;
        puVar19[7] = 0;
        puVar19[6] = 0;
      } while (0xf1b4c283 <
               (uint)((ulong)(DAT_004a42e8 & DAT_004a42ec) * 0x265dd149 >> 0x3d) * 0x7857dbd0 +
               0x1645c590);
      uVar14 = _objc_retain(uVar10);
      local_c0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
      local_80 = (undefined8 *)
                 _objc_msgSend(uVar14,PTR_s_countByEnumeratingWithState_obje_00489c48,puVar19,
                               puVar28,0x10);
      do {
      } while ((((DAT_004a42f8 | DAT_004a42fc) & 0xe3b006cd) / 0xab0717b) * -0x5de47fb6 < 0x3590be6a
              );
      do {
      } while (((DAT_004a4308 + DAT_004a430c & 0x65aa83c8U) * 0x7096c099 | 0xad2e9c3c) < 0x843ebdc0)
      ;
      local_d8 = lVar11;
      local_d0 = psVar17;
      local_b0 = uVar10;
      if (local_80 != (undefined8 *)0x0) {
        local_a8 = *(long *)puVar19[2];
        uVar1 = 0;
        if (DAT_004a431c != 0) {
          uVar1 = DAT_004a4318 / DAT_004a431c;
        }
        do {
        } while (((uVar1 | 0x19752da8) ^ 0x8b8fe8fc) + 0xde6160b2 < 0x4587ef3a);
        do {
          local_90 = PTR_s_setObject_forKeyedSubscript__0048b040;
          local_88 = PTR_s_objectForKeyedSubscript__00489d00;
          do {
          } while (((DAT_004a4328 + DAT_004a432c & 0x3cf4fb13U) + 0xa1a06c39 ^ 0x41e58e4e) <
                   0x532031eb);
          local_78 = (undefined8 *)0x0;
          do {
            do {
            } while (((uint)((ulong)(uint)(DAT_004a4338 * DAT_004a433c) * 0x39231f79 >> 0x3d) ^
                     0xf4a5b503) * 0x6007312b == 0xb0b0df1);
            if (*(long *)puVar19[2] != local_a8) {
              _objc_enumerationMutation(local_b0);
            }
            do {
            } while ((uint)((ulong)(DAT_004a4348 & DAT_004a434c ^ 0xde2d0490) * 0x136aa5b >> 0x35) +
                     0xec0a623f < 0x2645f93);
            uVar10 = *(undefined8 *)(puVar19[1] + (long)local_78 * 8);
            uVar1 = 0;
            if (DAT_004a435c != 0) {
              uVar1 = DAT_004a4358 / DAT_004a435c;
            }
            do {
            } while ((uVar1 & 0x96bbf6f ^ 0xce466c5f) + 0xb4059f2 < 0x5a3aad0);
            _objc_msgSend(uVar10,local_88,&PTR____CFConstantStringClassReference_004a2bc0);
            uVar14 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,local_90,uVar10,uVar14);
            if (0x7728199b <
                (uint)((ulong)(DAT_004a4360 * DAT_004a4364 + 0x4d82650fU & 0x724cabe8) * 0x2fe0059f
                      >> 0x3c)) {
              _objc_release(uVar14);
            }
            do {
              iVar7 = DAT_004a4368 + DAT_004a436c;
              _objc_release(uVar14);
              puVar19 = local_98;
            } while (0x740ec1c1 < (iVar7 + 0xfd808e2aU & 0x2fffffff | 0xfb6adc4));
            do {
            } while ((DAT_004a4378 + DAT_004a437c & 0xb4241400U | 0x201400) == 0x396071b2);
            local_78 = (undefined8 *)((long)local_78 + 1);
            do {
            } while (0x14e9d93c <
                     ((DAT_004a4388 | DAT_004a438c) * -0x2272338d + 0xb2dd0738 ^ 0xf993b3b3));
          } while (local_78 != local_80);
          do {
          } while (0xd2399e4a < (DAT_004a4398 ^ DAT_004a439c) * 0x56ae4200);
          local_80 = (undefined8 *)_objc_msgSend(local_b0,local_c0,local_98,local_b8,0x10);
        } while (local_80 != (undefined8 *)0x0);
      }
      uVar10 = local_b0;
      _objc_release(local_b0);
      IVar2 = local_c8;
      psVar17 = local_d0;
      lVar11 = local_d8;
      do {
      } while (((DAT_004a43a8 ^ DAT_004a43ac) * -0x3c87ec8f + 0xea619e85 | 0xdb140956) < 0xdc8baf23)
      ;
      uVar14 = _objc_msgSend(local_a0,PTR_s_copy_00489c40);
      do {
      } while (((DAT_004a43b8 ^ DAT_004a43bc) / 0x4ebbde0d + 0xcc19abad | 0x2707896f) < 0x7f12ef59);
      do {
      } while ((DAT_004a43c8 + DAT_004a43cc & 0x32de6644U) == 0x4a30279e);
      _objc_msgSend(IVar2,PTR_s_setBubbleFileMap__0048b048,uVar14);
      do {
        uVar1 = DAT_004a43d8 & DAT_004a43dc;
        _objc_release(uVar14);
      } while (0x4fb4a21 < (uVar1 & 0x8441b50 | 0x440b50));
      _objc_release(local_a0);
    }
    if (((DAT_004a43e0 - DAT_004a43e4) + 0x153976dcU | 0xdae9a155) * -0x1dd05859 < 0xe0d3acab)
    goto LAB_00150ef8;
    do {
      _objc_release(uVar10);
      _objc_release(lVar11);
LAB_00150ef8:
      iVar7 = DAT_004a43e8 * DAT_004a43ec;
      _objc_release(uVar10);
      _objc_release(lVar11);
    } while ((iVar7 + 0x11f5402eU & 0x67b708c6) * -0x241bd6a1 == -0x6a753c0a);
    if ((int)((long)((ulong)((DAT_004a43f0 & DAT_004a43f4 ^ 0xc001e020) & 0xd089e5b0) * 0xa42aeedd)
             >> 0x3f) == -0x4817b46b) goto LAB_00151000;
    while (iVar7 = DAT_004a43f8 * DAT_004a43fc, _objc_release(psVar17),
          (uint)((ulong)(uint)(iVar7 * -0x5a03af05) * 0x25480aa5 >> 0x3b) + 0xda7c4ce4 < 0xcccf55c1)
    {
LAB_00151000:
      _objc_release(psVar17);
    }
    do {
    } while (0x38c8ac7f < (DAT_004a4408 ^ DAT_004a440c | 0x933224b0) + 0x122975df);
  }
  if (*(long *)PTR____stack_chk_guard_00481638 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ----- -[BubbleBoxAssets loadLocalBubbleFiles] @ 00153cc4 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxAssets::loadLocalBubbleFiles(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ID IVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  ID *pIVar9;
  ID local_250;
  int *local_248;
  int local_23c;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  ID local_1f8;
  char local_1e9;
  long local_1e8;
  char local_1d9;
  long local_1d8;
  char local_1c9;
  long local_1c8;
  char local_1b9;
  long local_1b8;
  undefined8 local_1b0;
  char local_1a2;
  char local_1a1;
  undefined8 local_1a0;
  undefined8 *local_198;
  char local_189;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  long *local_170;
  char local_161;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  char local_131;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  long *local_118;
  undefined8 *local_110;
  long *local_108;
  long local_100;
  undefined8 *local_f8;
  char local_e9;
  long local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  undefined8 *local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  byte local_7a;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  pIVar9 = &local_250;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  uVar7 = 0;
  if (DAT_004a4474 != 0) {
    uVar7 = DAT_004a4470 / DAT_004a4474;
  }
  local_74 = 0x298f4f0dU - (int)((long)((ulong)uVar7 * 0x824a43bf) >> 0x3f) ^ 0x495108ca;
  local_248 = &local_23c;
  local_23c = 0xe6a00b9;
  local_250 = param_1;
LAB_00153de8:
  puVar1 = local_88;
  iVar4 = 0x2dbebb13;
  if (local_23c < 0xd619dff) {
    if (-0x2d7cae4f < local_23c) {
      if (local_23c < -0x72670dd) {
        if (local_23c < -0x163acfb3) {
          if (local_23c < -0x20b2b4d2) {
            if (local_23c < -0x23a03e92) {
              if (local_23c == -0x2d7cae4e) {
                uVar7 = DAT_004a46a8 ^ DAT_004a46ac;
                _objc_release(local_c8);
                bVar3 = (uVar7 + 0x9d0a9508 | 0x4ae55f25) == 0x8099f663;
                iVar4 = -0x38a24156;
                iVar8 = -0x72f64b19;
                goto LAB_00157cf8;
              }
              if (local_23c == -0x2946a8b3) {
                *local_248 = 0x49615d20;
              }
              else if (local_23c == -0x26b0c222) {
                iVar4 = FUN_001689d8();
                bVar3 = iVar4 == 0;
                iVar8 = 0x64cd620;
                iVar4 = 0xfee2513;
                goto LAB_00157370;
              }
            }
            else if (local_23c == -0x23a03e92) {
              *local_248 = 0x2dbebb13;
            }
            else if (local_23c == -0x23871683) {
              *local_248 = 0x560a1470;
            }
            else if (local_23c == -0x21424894) {
              local_1b8 = local_238 + 1;
              *local_248 = -0x6526cc75;
            }
          }
          else if (local_23c < -0x1d300946) {
            if (local_23c == -0x1fc7e665) {
              uVar7 = 0;
              if (DAT_004a46cc != 0) {
                uVar7 = DAT_004a46c8 / DAT_004a46cc;
              }
              iVar4 = -0x20b2b4d2;
              if ((uVar7 * 0x85b3453 & 0x16752002) == 0x78766fd9) {
                iVar4 = -0x1fc7e665;
              }
              goto LAB_00158108;
            }
            if (local_23c == -0x1f0a6b27) {
              _objc_msgSend(local_b8,PTR_s_shared_00489458);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar6,PTR_s_currentBubblePath_0048b008);
              _objc_retainAutoreleasedReturnValue();
              *local_248 = 0x6845ca4d;
            }
            else if (local_23c == -0x20b2b4d2) {
              if (*(long *)PTR____stack_chk_guard_00481638 == local_70) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
          }
          else {
            if (local_23c == -0x1d300946) {
              bVar3 = local_e9 == '\0';
              iVar4 = 0x120bcedf;
              iVar8 = -0x44cbbe31;
              goto LAB_00158104;
            }
            if (local_23c == -0x178618bd) {
              *local_88 = &cf___;
              puVar1[1] = &PTR____CFConstantStringClassReference_004a2e70;
              puVar1[2] = &PTR____CFConstantStringClassReference_004a2dd0;
              puVar1[3] = &PTR____CFConstantStringClassReference_004a2e50;
              puVar1[4] = &PTR____CFConstantStringClassReference_004a2e10;
              puVar1[5] = &PTR____CFConstantStringClassReference_004a2db0;
              local_d0 = puVar1 + 6;
              *local_248 = -0x3f3cf27b;
            }
            else if (local_23c == -0x17469f50) {
              uVar7 = (uint)((ulong)(uint)(DAT_004a4500 + DAT_004a4504) * 0x2e32fd4b >> 0x3c) *
                      -0x2c6431b5 + 0x47e5481a;
              bVar2 = 0xf723c4e9 < uVar7;
              bVar3 = uVar7 == 0xf723c4ea;
              iVar8 = -0x38e4c434;
              iVar4 = -0x3861108d;
              goto LAB_00157510;
            }
          }
          goto LAB_00153de8;
        }
        if (-0x1094546b < local_23c) {
          if (local_23c < -0xbc20b2a) {
            if (local_23c == -0x1094546a) {
              local_1a0 = *local_198;
              *local_248 = 0x636456f2;
            }
            else if (local_23c == -0xff1ba4a) {
              *local_248 = 0x1e199d27;
            }
            else if (local_23c == -0xfe79b1f) {
              *local_248 = -0x31994295;
            }
          }
          else if (local_23c == -0xbc20b2a) {
            *local_248 = 0x9948b85;
          }
          else if (local_23c == -0xbbf8259) {
            *local_248 = -0x5220d0c1;
          }
          else if (local_23c == -0x79b6125) {
            _objc_release(local_b0);
            *local_248 = 0x7a4d697b;
          }
          goto LAB_00153de8;
        }
        if (local_23c < -0x15277712) {
          if (local_23c == -0x163acfb3) {
            _objc_enumerationMutation(local_d8);
            *local_248 = -0x4a41f77c;
          }
          else if (local_23c == -0x15cc591b) {
            bVar3 = ((DAT_004a4480 ^ DAT_004a4484) & 0xbf2bb98) == 0x8891bd2e;
            iVar8 = 0x61dbeb75;
            iVar4 = 0x29e815db;
LAB_00156994:
            if (!bVar3) {
              iVar4 = iVar8;
            }
            goto LAB_00158108;
          }
          goto LAB_00153de8;
        }
        if (local_23c == -0x15277712) {
          local_1c9 = local_1c8 == 0;
          bVar3 = 0xbf7c532e <
                  ((DAT_004a4638 & DAT_004a463c) * -0x39f03e45 + 0xd8ab9fbc ^ 0x4f5bcbce);
          iVar4 = -0x15277712;
          iVar8 = 0x3213668b;
          goto LAB_00157900;
        }
        if (local_23c != -0x141df83f) {
          if (local_23c == -0x13d94721) {
            bVar3 = (DAT_004a4678 + DAT_004a467c + 0x385947baU | 0x15acf7b1) * -0x435776b4 ==
                    -0x3cd02737;
            iVar4 = -0x13d94721;
            iVar8 = 0x55a1dc9;
            goto LAB_00157cf8;
          }
          goto LAB_00153de8;
        }
        bVar3 = ((DAT_004a4650 * DAT_004a4654 ^ 0x20e21af3U) + 0xa4ae01f1 & 0x53db116e) ==
                0xa9691f24;
        iVar4 = 0xe01b41b;
        iVar8 = 0xb84019b;
LAB_00157cf8:
        if (!bVar3) {
          iVar4 = iVar8;
        }
        goto LAB_00158108;
      }
      if (local_23c < 0x3578bde) {
        if (local_23c < -0x21b5d68) {
          if (local_23c < -0x3c0c8af) {
            if (local_23c == -0x72670dd) {
              bVar3 = local_189 == '\0';
              iVar4 = 0x7b4fdf9e;
              iVar8 = -0x45ca1ac0;
              goto LAB_00158104;
            }
            if (local_23c == -0x4379234) {
              local_230 = local_210;
              bVar3 = true;
              iVar4 = -0x40c0f7a5;
              iVar8 = 0x6e1edac7;
              goto LAB_00157900;
            }
            goto LAB_00153de8;
          }
          if (local_23c == -0x3c0c8af) {
            *local_248 = -0x15cc591b;
            goto LAB_00153de8;
          }
          if (local_23c == -0x3154527) {
            _objc_release(local_1f8);
            *local_248 = -0x445d4744;
            goto LAB_00153de8;
          }
          if (local_23c != -0x2429107) goto LAB_00153de8;
          iVar4 = DAT_004a4668 * DAT_004a466c;
          local_1e8 = _objc_msgSend(local_d8,local_e0,local_90,local_98,0x10);
          bVar3 = (iVar4 * 0x21c7c552 & 0x738c8ef3U | 0x620c8a93) == 0xe0ccfbb1;
          iVar4 = 0x4bcfdb0c;
          iVar8 = -0x4f385bc3;
        }
        else {
          if (0x1434a2a < local_23c) {
            if (local_23c == 0x1434a2b) {
              *local_248 = -0x17469f50;
            }
            else if (local_23c == 0x25f7b60) {
              *local_248 = 0x7fe98902;
            }
            else if (local_23c == 0x260bbbe) {
              bVar3 = 0xe11bdc3f < ((DAT_004a4550 ^ DAT_004a4554) + 0x11565dcf | 0x274e8ac3);
              iVar4 = -0x5efc9acb;
              iVar8 = 0x418b0cfe;
              goto LAB_00157900;
            }
            goto LAB_00153de8;
          }
          if (local_23c == -0x21b5d68) {
            uVar7 = 0;
            if (DAT_004a45cc != 0) {
              uVar7 = DAT_004a45c8 / DAT_004a45cc;
            }
            local_198 = (undefined8 *)(*local_118 + local_238 * 8);
            bVar2 = 0x5e215a08 < uVar7 + 0xef9bc011;
            bVar3 = uVar7 + 0xef9bc011 == 0x5e215a09;
            iVar8 = -0x21b5d68;
            iVar4 = -0x656af83c;
            goto LAB_00157510;
          }
          if (local_23c == -0x5e03cb) {
            DAT_004a2d5d = local_7a;
            DAT_004a2d5e = DAT_004a2d53 ^ 0xe4;
            DAT_004a2d5f = DAT_004a2d54 ^ 0x13;
            DAT_004a2d60 = DAT_004a2d55 ^ 0x86;
            DAT_004a2d61 = DAT_004a2d56 ^ 0x11;
            DAT_004a2d62 = DAT_004a2d57 ^ 0x79;
            DAT_004a2d63 = DAT_004a2d58 ^ 0xca;
            DAT_004a2d49 = DAT_004a2d44 ^ 0x4a;
            DAT_004a2d4a = DAT_004a2d45 ^ 0x61;
            DAT_004a2d4b = DAT_004a2d46 ^ 0xfd;
            DAT_004a2d4c = DAT_004a2d47 ^ 0x14;
            DAT_004a2d4d = DAT_004a2d48 ^ 0xc0;
            DAT_004a2d25 = DAT_004a2d20 ^ 0xfa;
            DAT_004a2d26 = DAT_004a2d21 ^ 0x3f;
            DAT_004a2d27 = DAT_004a2d22 ^ 5;
            DAT_004a2d28 = DAT_004a2d23 ^ 0x94;
            DAT_004a2d29 = DAT_004a2d24 ^ 0x58;
            DAT_004a2d3f = DAT_004a2d3a ^ 0x2e;
            DAT_004a2d40 = DAT_004a2d3b ^ 0xc;
            DAT_004a2d41 = DAT_004a2d3c ^ 0xf9;
            DAT_004a2d42 = DAT_004a2d3d ^ 0xe6;
            DAT_004a2d43 = DAT_004a2d3e ^ 0xc;
            DAT_004a2d7f = DAT_004a2d78 ^ 4;
            DAT_004a2d80 = DAT_004a2d79 ^ 0x1f;
            DAT_004a2d81 = DAT_004a2d7a ^ 0xbc;
            DAT_004a2d82 = DAT_004a2d7b ^ 0x82;
            DAT_004a2d83 = DAT_004a2d7c ^ 0x72;
            DAT_004a2d84 = DAT_004a2d7d ^ 0x22;
            iVar4 = 0x7cc09250;
            if ((DAT_004a44b8 | DAT_004a44bc) == 0xc1078a89) {
              iVar4 = -0x5e03cb;
            }
            goto LAB_00158108;
          }
          if (local_23c != -0x20b7c2) goto LAB_00153de8;
          _objc_release(local_c0);
          bVar3 = local_c8 == 0;
          iVar4 = -0x56af62cc;
          iVar8 = -0x178618bd;
        }
        goto LAB_00157cf8;
      }
      if (0x55a1dc8 < local_23c) {
        if (0x9948b84 < local_23c) {
          if (local_23c == 0x9948b85) {
            local_f8 = local_90 + 2;
            local_100 = *(long *)*local_f8;
            bVar3 = 0x6455e845 <
                    (uint)((ulong)(DAT_004a4518 + DAT_004a451c + 0x623771d1U | 0x2a6c486e) *
                           0x484bd6fd >> 0x3e);
            iVar8 = -0xbc20b2a;
            iVar4 = 0x2fa2e3a0;
            goto LAB_00157d90;
          }
          if (local_23c == 0xa00ac10) {
            *local_248 = -0x4bdf45c9;
          }
          else if (local_23c == 0xb84019b) {
            iVar4 = DAT_004a4658 * DAT_004a465c;
            _objc_release(local_158);
            _objc_release(local_158);
            bVar3 = (iVar4 + 0x8a6f08b1U ^ 0x1904004 | 0xa6678bd3) == 0xca1d003f;
            iVar8 = 0xe01b41b;
            iVar4 = -0xbbf8259;
            goto LAB_00157370;
          }
          goto LAB_00153de8;
        }
        if (local_23c == 0x55a1dc9) {
          iVar4 = 0x120bcedf;
          if (local_1e9 == '\0') {
            iVar4 = 0x48f9d274;
          }
          *local_248 = iVar4;
          local_200 = local_1e8;
          goto LAB_00153de8;
        }
        if (local_23c != 0x570c338) {
          if (local_23c == 0x64cd620) {
            iVar4 = 0xd619dff;
            if ((DAT_004a46c0 ^ DAT_004a46c4) * 0xd832c11 + 0xd7168dc4 < 0x7f77252c) {
              iVar4 = -0x1fc7e665;
            }
            goto LAB_00158108;
          }
          goto LAB_00153de8;
        }
        uVar7 = DAT_004a4698 & DAT_004a469c;
        _objc_release(local_d8);
        iVar4 = 0x175c6a65;
        if (0xa1deb7b1 < (uVar7 + 0x97cf0611 & 0x71d9ec90)) {
          iVar4 = 0x570c338;
        }
        goto LAB_00158108;
      }
      if (0x3914e16 < local_23c) {
        if (local_23c == 0x3914e17) {
          *local_248 = -0x4903ee67;
        }
        else if (local_23c == 0x3b98b02) {
          _objc_msgSend(local_148,local_120,local_1a0);
          _objc_retainAutoreleasedReturnValue();
          *local_248 = 0x79dc35d0;
        }
        else if (local_23c == 0x3fef2b7) {
          *local_248 = 0x64c955e7;
        }
        goto LAB_00153de8;
      }
      if (local_23c == 0x3578bde) {
        *local_248 = -0x6f30a628;
        goto LAB_00153de8;
      }
      if (local_23c != 0x3774197) goto LAB_00153de8;
      bVar3 = ((DAT_004a4608 - DAT_004a460c) + 0x62061086U) / 0x2545b564 == 0xb837530d;
      iVar8 = 0x78e42de7;
      iVar4 = -0x23871683;
LAB_00157370:
      if (bVar3) {
        iVar4 = iVar8;
      }
      goto LAB_00158108;
    }
    if (-0x4f385bc4 < local_23c) {
      if (-0x3e5f6a4c < local_23c) {
        if (local_23c < -0x3854e0af) {
          if (local_23c < -0x38e4c434) {
            if (local_23c == -0x3e5f6a4b) {
              *local_248 = -0x4379234;
              local_210 = local_160;
            }
            else if (local_23c == -0x3d483d4f) {
              *local_248 = 0x203d2b30;
            }
          }
          else if (local_23c == -0x38e4c434) {
            uVar7 = DAT_004a4508 & DAT_004a450c;
            local_e0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
            local_e8 = _objc_msgSend(local_d8,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                     local_90,local_98,0x10);
            local_e9 = local_e8 == 0;
            iVar4 = -0x1d300946;
            if ((uVar7 + 0xe9378117 ^ 0x71122d81) < 0x57c28e94) {
              iVar4 = -0x38e4c434;
            }
            *local_248 = iVar4;
          }
          else if (local_23c == -0x38a24156) {
            _objc_release(local_c8);
            *local_248 = -0x2d7cae4e;
          }
          else if (local_23c == -0x3861108d) {
            _objc_msgSend(local_d8,PTR_s_countByEnumeratingWithState_obje_00489c48,local_90,local_98
                          ,0x10);
            *local_248 = -0x38e4c434;
          }
        }
        else if (local_23c < -0x31994295) {
          if (local_23c == -0x3854e0af) {
            bVar3 = local_1a1 == '\0';
            iVar4 = 0x74a9d2ac;
            iVar8 = 0x25cee0b2;
            goto LAB_00158104;
          }
          if (local_23c == -0x3631d553) {
            *local_248 = 0x6195d0c4;
          }
          else if (local_23c == -0x3491aa61) {
            _objc_release(local_d8);
            IVar5 = _objc_msgSend(local_b0,PTR_s_mutableCopy_0048a7a0);
            setBubbleFileMap_(local_250,(SEL)PTR_s_setBubbleFileMap__0048b048,IVar5);
            *local_248 = -0x6a6dfe5d;
          }
        }
        else {
          if (local_23c == -0x31994295) {
            uVar7 = (DAT_004a4620 + DAT_004a4624 & 0x70128454U) + 0xb94846b2;
            bVar2 = 0x1825d4a9 < uVar7;
            bVar3 = uVar7 == 0x1825d4aa;
            iVar4 = 0x55294f2f;
            iVar8 = 0x72f8e587;
            goto LAB_0015808c;
          }
          if (local_23c == -0x2fff848c) {
            *local_248 = 0x7b5ad8a9;
          }
          else if (local_23c == -0x2edb6320) {
            _objc_msgSend(local_1a0,local_180,&PTR____CFConstantStringClassReference_004a2d90);
            *local_248 = 0x5b0c6258;
          }
        }
        goto LAB_00153de8;
      }
      if (local_23c < -0x462901d7) {
        if (local_23c < -0x4bdf45c9) {
          if (local_23c == -0x4f385bc3) {
            *local_248 = 0x637488a2;
          }
          else if (local_23c == -0x4d565bd3) {
            iVar4 = -0x141df83f;
            if (local_1c9 == '\0') {
              iVar4 = -0x4379234;
            }
            *local_248 = iVar4;
            local_210 = local_1c8;
          }
          goto LAB_00153de8;
        }
        if (local_23c == -0x4bdf45c9) {
          bVar3 = 0xdac948e2 < (DAT_004a4598 * DAT_004a459c ^ 0x80062002U | 0x5f69decd);
          iVar8 = 0xa00ac10;
          iVar4 = -0x3e5f6a4b;
          goto LAB_00157d90;
        }
        if (local_23c != -0x4a41f77c) {
          if (local_23c == -0x4903ee67) {
            local_88 = (undefined8 *)((long)pIVar9 + -0x40);
            local_90 = (undefined8 *)((long)pIVar9 + -0x80);
            local_98 = (undefined1 *)((long)pIVar9 + -0x100);
            local_a0 = (undefined8 *)((long)pIVar9 + -0x140);
            pIVar9 = (ID *)((long)pIVar9 + -0x1c0);
            local_a8 = (undefined1 *)pIVar9;
            *local_248 = -0x26b0c222;
          }
          goto LAB_00153de8;
        }
        uVar7 = DAT_004a4548 | DAT_004a454c;
        _objc_enumerationMutation(local_d8);
        iVar4 = -0x4a41f77c;
        if ((uVar7 * 0x1d23b316 & 0xa14c892) < 0x3dd162a9) {
          iVar4 = 0xe8e809d;
        }
      }
      else {
        if (local_23c < -0x445d4744) {
          if (local_23c == -0x462901d7) {
            DAT_004d1480 = 1;
            *local_248 = -0x64a7048e;
            goto LAB_00153de8;
          }
          if (local_23c == -0x45ca1ac0) {
            _objc_enumerationMutation(local_158);
            *local_248 = 0x38178061;
            goto LAB_00153de8;
          }
          if (local_23c != -0x44cbbe31) goto LAB_00153de8;
          uVar7 = 0;
          if (DAT_004a4514 != 0) {
            uVar7 = DAT_004a4510 / DAT_004a4514;
          }
          bVar3 = 0x29ca4bfa < (uVar7 & 0xc232c0c0 ^ 0x10e11c09);
          iVar8 = -0xbc20b2a;
          iVar4 = 0x9948b85;
LAB_00157d90:
          if (bVar3) {
            iVar4 = iVar8;
          }
          goto LAB_00158108;
        }
        if (local_23c == -0x445d4744) {
          iVar4 = 0x570c338;
          if ((uint)((ulong)((DAT_004a4690 | DAT_004a4694) + 0xc4195d8a ^ 0xa6f6733d) * 0x72bdbc11
                    >> 0x3e) == 0x9eb35447) {
            iVar4 = 0x3734e512;
          }
        }
        else {
          if (local_23c == -0x40c0f7a5) {
            *local_248 = 0x6e1edac7;
            goto LAB_00153de8;
          }
          if (local_23c != -0x3f3cf27b) goto LAB_00153de8;
          iVar4 = -0x78a9abbc;
          if ((DAT_004a44f0 * DAT_004a44f4 * 0x6d977eb + 0x730f68c0U ^ 0x5433ed8) < 0x8235d53c) {
            iVar4 = 0x3dc0b715;
          }
        }
      }
      goto LAB_00158108;
    }
    if (-0x656af83d < local_23c) {
      if (local_23c < -0x5dd8cdf6) {
        if (local_23c < -0x64a7048e) {
          if (local_23c == -0x656af83c) {
            *local_248 = -0x1094546a;
          }
          else if (local_23c == -0x6526cc75) {
            uVar7 = 0;
            if (DAT_004a4614 != 0) {
              uVar7 = DAT_004a4610 / DAT_004a4614;
            }
            bVar3 = 0x7e36e728 < ((uVar7 ^ 0xcd2a86b5) / 0x4833751d) * 0x756ae2c0;
            iVar8 = -0x6dd20fa3;
            iVar4 = 0x6cc90f66;
            goto LAB_00157d90;
          }
        }
        else {
          if (local_23c == -0x64a7048e) {
            uVar7 = 0;
            if (DAT_004a44cc != 0) {
              uVar7 = DAT_004a44c8 / DAT_004a44cc;
            }
            uVar7 = (int)((long)((ulong)(uVar7 ^ 0xd618c54c) * 0xb7c5c68d) >> 0x3f) * -0x55c3408f;
            DAT_004d1480 = 1;
            bVar2 = 0x5e50510f < uVar7;
            bVar3 = uVar7 == 0x5e505110;
            iVar4 = -0x462901d7;
            iVar8 = 0x3914e17;
            goto LAB_0015808c;
          }
          if (local_23c == -0x6293f387) {
            _objc_msgSend(local_150,local_130,local_148,0);
            uVar6 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_150);
            puVar1 = local_a0;
            local_a0[1] = 0;
            *puVar1 = 0;
            puVar1[3] = 0;
            puVar1[2] = 0;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[7] = 0;
            puVar1[6] = 0;
            uVar6 = _objc_retain(uVar6);
            _objc_msgSend(uVar6,local_e0,local_a0,local_a8,0x10);
            *local_248 = 0x7132e010;
          }
          else if (local_23c == -0x5efc9acb) {
            *local_248 = 0x12a0c904;
          }
        }
        goto LAB_00153de8;
      }
      if (local_23c < -0x56af62cc) {
        if (local_23c == -0x5dd8cdf6) {
          *local_248 = 0x73c54d92;
          goto LAB_00153de8;
        }
        if (local_23c != -0x58763529) {
          if (local_23c == -0x57bf9814) {
            bVar3 = 0x9cef49a9 < ((DAT_004a4670 - DAT_004a4674) + 0x856e273cU & 0x81b456ef);
            iVar4 = -0x13d94721;
            iVar8 = -0x6ef41c87;
            goto LAB_00157900;
          }
          goto LAB_00153de8;
        }
        uVar7 = 0;
        if (DAT_004a457c != 0) {
          uVar7 = DAT_004a4578 / DAT_004a457c;
        }
        _objc_msgSend(local_c8,local_120,local_140);
        local_148 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,local_128);
        local_150 = _objc_retainAutoreleasedReturnValue();
        iVar4 = -0x58763529;
        if (0x14fbaef6 < ((uVar7 / 0x4c830611) * -0x7af45744 | 0xb4890cf4)) {
          iVar4 = 0x46791d48;
        }
      }
      else {
        if (local_23c == -0x56af62cc) {
          uVar7 = 0;
          if (DAT_004a46a4 != 0) {
            uVar7 = DAT_004a46a0 / DAT_004a46a4;
          }
          bVar3 = ((uVar7 | 0x331150b5) + 0xaf4c4512 & 0x61a5c604) == 0x11f3dec2;
          iVar4 = -0x2d7cae4e;
          iVar8 = -0x38a24156;
          goto LAB_00158104;
        }
        if (local_23c == -0x5220d0c1) {
          _objc_release(local_148);
          local_1d8 = local_228 + 1;
          *local_248 = 0x774243c6;
          goto LAB_00153de8;
        }
        if (local_23c != -0x51ced5b4) goto LAB_00153de8;
        iVar4 = 0x5007eb45;
        if (((DAT_004a44b0 ^ DAT_004a44b4) & 0x1a0) < 0x2adefae5) {
          iVar4 = -0x5e03cb;
        }
      }
      goto LAB_00158108;
    }
    if (local_23c < -0x705746c7) {
      if (local_23c < -0x76d11504) {
        if (local_23c == -0x7ba046aa) {
          _objc_msgSend(PTR__OBJC_CLASS___NSMutableDictionary_0048cbd0,PTR_s_dictionary_0048b038);
          _objc_retainAutoreleasedReturnValue();
          *local_248 = -0x76d11504;
        }
        else if (local_23c == -0x78a9abbc) {
          *local_d0 = &PTR____CFConstantStringClassReference_004a2df0;
          _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,
                        local_88,7);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = local_90;
          local_90[1] = 0;
          *puVar1 = 0;
          puVar1[3] = 0;
          puVar1[2] = 0;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[7] = 0;
          puVar1[6] = 0;
          _objc_retain();
          *local_248 = 0x3dc0b715;
        }
        goto LAB_00153de8;
      }
      if (local_23c == -0x76d11504) {
        uVar7 = (DAT_004a44d8 + DAT_004a44dc) * -0x5c39d8ec + 0x5c4f4a03;
        _objc_msgSend(PTR__OBJC_CLASS___NSMutableDictionary_0048cbd0,PTR_s_dictionary_0048b038);
        local_b0 = _objc_retainAutoreleasedReturnValue();
        local_b8 = PTR_BubbleBoxMgr_0048c9a8;
        bVar2 = 0x5601918f < uVar7;
        bVar3 = uVar7 == 0x56019190;
        iVar8 = -0x7ba046aa;
        iVar4 = -0x5dd8cdf6;
        goto LAB_00157510;
      }
      if (local_23c != -0x73833421) {
        if (local_23c == -0x72f64b19) {
          *local_248 = -0x79b6125;
        }
        goto LAB_00153de8;
      }
      iVar4 = 0x3936dab1;
      if (((DAT_004a4570 ^ DAT_004a4574) & 0x72713322) != 0x25c5edf8) {
        iVar4 = -0x58763529;
      }
      goto LAB_00158108;
    }
    if (local_23c < -0x6dd20fa3) {
      if (local_23c == -0x705746c7) {
        uVar7 = (DAT_004a4560 ^ DAT_004a4564) + 0xa99c973d;
        bVar2 = 0x6f89d246 < uVar7;
        bVar3 = uVar7 == 0x6f89d247;
        iVar4 = 0x1e199d27;
        iVar8 = -0xff1ba4a;
        goto LAB_0015808c;
      }
      if (local_23c != -0x6f30a628) {
        if (local_23c == -0x6ef41c87) {
          *local_248 = -0x13d94721;
        }
        goto LAB_00153de8;
      }
      if (0xca97977f <
          ((uint)((ulong)(DAT_004a4490 | DAT_004a4494) * 0xb74c3085 >> 0x3f) ^ 0x290c704f) +
          0x8d9c3499) {
        iVar4 = -0x23a03e92;
      }
      goto LAB_00158108;
    }
    if (local_23c == -0x6dd20fa3) {
      local_1b9 = local_1b8 == local_230;
      *local_248 = -0xfe79b1f;
      goto LAB_00153de8;
    }
    if (local_23c == -0x6b871c56) {
      *local_248 = 0x6d6a2851;
      goto LAB_00153de8;
    }
    if (local_23c != -0x6a6dfe5d) goto LAB_00153de8;
    uVar7 = (DAT_004a4688 - DAT_004a468c ^ 0xe622437bU) + 0x726fea57;
    _objc_release(local_d8);
    local_1f8 = _objc_msgSend(local_b0,PTR_s_mutableCopy_0048a7a0);
    setBubbleFileMap_(local_250,(SEL)PTR_s_setBubbleFileMap__0048b048,local_1f8);
    bVar2 = 0x41d74e70 < uVar7;
    bVar3 = uVar7 == 0x41d74e71;
    iVar8 = -0x3491aa61;
    iVar4 = 0x1af3aced;
  }
  else {
    if (0x4d38fc83 < local_23c) {
      iVar4 = 0x4fcf73ff;
      if (local_23c < 0x6e1edac7) {
        if (local_23c < 0x60632641) {
          if (local_23c < 0x55294f2f) {
            if (local_23c < 0x4ef7feca) {
              if (local_23c == 0x4d38fc84) {
                local_1a1 = _objc_msgSend(local_1a0,local_180,
                                          &PTR____CFConstantStringClassReference_004a2e30);
                *local_248 = -0x3854e0af;
              }
              else if (local_23c == 0x4e00f08d) {
                uVar7 = ((DAT_004a4580 ^ DAT_004a4584) & 0xd953076b) / 0x5890a7eb & 2;
                bVar2 = 0xc0c979c < uVar7;
                bVar3 = uVar7 == 0xc0c979d;
                iVar4 = -0x6293f387;
                iVar8 = 0x7132e010;
                goto LAB_0015808c;
              }
              goto LAB_00153de8;
            }
            if (local_23c == 0x4ef7feca) {
              uVar7 = (DAT_004a4590 | DAT_004a4594 | 0xfedf0606) * 0x1e5dcaa9 ^ 0x40d9c073;
              bVar2 = 0x87aea018 < uVar7;
              bVar3 = uVar7 == 0x87aea019;
              iVar8 = -0x4bdf45c9;
              iVar4 = 0xa00ac10;
              goto LAB_00157510;
            }
            if (local_23c != 0x4fcf73ff) {
              if (local_23c == 0x5007eb45) {
                DAT_004a2d5d = local_7a;
                DAT_004a2d5e = DAT_004a2d53 ^ 0xe4;
                DAT_004a2d5f = DAT_004a2d54 ^ 0x13;
                DAT_004a2d60 = DAT_004a2d55 ^ 0x86;
                DAT_004a2d61 = DAT_004a2d56 ^ 0x11;
                DAT_004a2d62 = DAT_004a2d57 ^ 0x79;
                DAT_004a2d63 = DAT_004a2d58 ^ 0xca;
                DAT_004a2d49 = DAT_004a2d44 ^ 0x4a;
                DAT_004a2d4a = DAT_004a2d45 ^ 0x61;
                DAT_004a2d4b = DAT_004a2d46 ^ 0xfd;
                DAT_004a2d4c = DAT_004a2d47 ^ 0x14;
                DAT_004a2d4d = DAT_004a2d48 ^ 0xc0;
                DAT_004a2d25 = DAT_004a2d20 ^ 0xfa;
                DAT_004a2d26 = DAT_004a2d21 ^ 0x3f;
                DAT_004a2d27 = DAT_004a2d22 ^ 5;
                DAT_004a2d28 = DAT_004a2d23 ^ 0x94;
                DAT_004a2d29 = DAT_004a2d24 ^ 0x58;
                DAT_004a2d3f = DAT_004a2d3a ^ 0x2e;
                DAT_004a2d40 = DAT_004a2d3b ^ 0xc;
                DAT_004a2d41 = DAT_004a2d3c ^ 0xf9;
                DAT_004a2d42 = DAT_004a2d3d ^ 0xe6;
                DAT_004a2d43 = DAT_004a2d3e ^ 0xc;
                DAT_004a2d7f = DAT_004a2d78 ^ 4;
                DAT_004a2d80 = DAT_004a2d79 ^ 0x1f;
                DAT_004a2d81 = DAT_004a2d7a ^ 0xbc;
                DAT_004a2d82 = DAT_004a2d7b ^ 0x82;
                DAT_004a2d83 = DAT_004a2d7c ^ 0x72;
                DAT_004a2d84 = DAT_004a2d7d ^ 0x22;
                *local_248 = -0x5e03cb;
              }
              goto LAB_00153de8;
            }
            if (0x37fd35ce < ((DAT_004a4648 ^ DAT_004a464c) * -0x411eafcf + 0xf00614cd | 0x72545554)
               ) {
              iVar4 = -0x4d565bd3;
            }
          }
          else {
            if (local_23c < 0x5a7302f1) {
              if (local_23c != 0x55294f2f) {
                if (local_23c == 0x560a1470) {
                  _objc_msgSend(local_b0,local_188,local_1b0,local_1a0);
                  _objc_release(local_1b0);
                  *local_248 = -0x21424894;
                }
                else if (local_23c == 0x58342f75) {
                  uVar7 = 0;
                  if (DAT_004a4634 != 0) {
                    uVar7 = DAT_004a4630 / DAT_004a4634;
                  }
                  bVar3 = 0x2056e013 < (uVar7 | 0x3dc73a5f) * 0x276c5ca4 + 0xf463bceb;
                  iVar8 = -0x15277712;
                  iVar4 = 0x42d24a43;
                  goto LAB_00157d90;
                }
                goto LAB_00153de8;
              }
              bVar3 = 0xbb446614 <
                      (DAT_004a4628 * DAT_004a462c * 0x7d923599 + 0x75e0af5dU ^ 0xe0b8b5d7);
              iVar8 = 0x55294f2f;
              iVar4 = 0x74ced56d;
              goto LAB_00157d90;
            }
            if (local_23c == 0x5a7302f1) {
              bVar3 = local_131 == '\0';
              iVar4 = -0x705746c7;
              iVar8 = 0x110c100a;
LAB_00158104:
              if (bVar3) {
                iVar4 = iVar8;
              }
            }
            else {
              if (local_23c != 0x5b0c6258) {
                if (local_23c == 0x601a130c) {
                  local_170 = (long *)*local_110;
                  *local_248 = 0x60632641;
                }
                goto LAB_00153de8;
              }
              uVar7 = DAT_004a45d8 ^ DAT_004a45dc;
              local_1a2 = _objc_msgSend(local_1a0,local_180,
                                        &PTR____CFConstantStringClassReference_004a2d90);
              iVar4 = 0x3388a949;
              if (0xa992604f < (uVar7 + 0xd731e3d2 & 0x37a4ee7f | 0x3580ee16)) {
                iVar4 = 0x5b0c6258;
              }
            }
          }
        }
        else {
          if (local_23c < 0x63fc7d23) {
            if (local_23c < 0x61dbeb75) {
              if (local_23c == 0x60632641) {
                local_178 = *local_170;
                *local_248 = 0x4ef7feca;
              }
              else if (local_23c == 0x6195d0c4) {
                uVar7 = (DAT_004a4478 - DAT_004a447c | 0x643794a4U) * -0x5b2c2a16 + 0x45204944;
                local_78 = DAT_004d1480;
                bVar2 = 0x960c7c64 < uVar7;
                bVar3 = uVar7 == 0x960c7c65;
                iVar8 = 0x6195d0c4;
                iVar4 = -0x3c0c8af;
                goto LAB_00157510;
              }
              goto LAB_00153de8;
            }
            if (local_23c != 0x61dbeb75) {
              if (local_23c == 0x636456f2) {
                iVar4 = _objc_msgSend(local_1a0,local_180,
                                      &PTR____CFConstantStringClassReference_004a2e90);
                bVar3 = iVar4 == 0;
                iVar4 = 0x74a9d2ac;
                iVar8 = 0x4d38fc84;
                goto LAB_00158104;
              }
              if (local_23c == 0x637488a2) {
                local_1e9 = local_1e8 == 0;
                *local_248 = -0x57bf9814;
              }
              goto LAB_00153de8;
            }
            uVar7 = (DAT_004a4488 | DAT_004a448c | 0x305e8f6f) + 0x2a60cb89;
            local_79 = local_78 == 0;
            bVar2 = 0xe264a7bc < uVar7;
            bVar3 = uVar7 == 0xe264a7bd;
            iVar4 = 0x29e815db;
            iVar8 = 0x3578bde;
          }
          else {
            if (0x6cc90f65 < local_23c) {
              if (local_23c == 0x6cc90f66) {
                *local_248 = -0x6dd20fa3;
              }
              else {
                if (local_23c == 0x6d6a2851) {
                  local_108 = local_90 + 1;
                  local_110 = local_a0 + 2;
                  bVar3 = 0x96b111e6 <
                          (((DAT_004a4528 | DAT_004a452c) & 0xe5004d45) + 0x6a9daca3 & 0xea0138a0);
                  iVar8 = -0x6b871c56;
                  iVar4 = 0x763721e7;
                  goto LAB_00157d90;
                }
                if (local_23c == 0x6dd8a6b8) {
                  *local_248 = -0x51ced5b4;
                }
              }
              goto LAB_00153de8;
            }
            if (local_23c == 0x63fc7d23) {
              DAT_004a2d85 = DAT_004a2d7e ^ 0x77;
              DAT_004a2d73 = DAT_004a2d6e ^ 100;
              DAT_004a2d74 = DAT_004a2d6f ^ 0x46;
              DAT_004a2d75 = DAT_004a2d70 ^ 0x66;
              DAT_004a2d76 = DAT_004a2d71 ^ 100;
              DAT_004a2d77 = DAT_004a2d72 ^ 0xdd;
              DAT_004a2d36 = DAT_004a2d32 ^ 0x53;
              DAT_004a2d37 = DAT_004a2d33 ^ 0x5d;
              DAT_004a2d38 = DAT_004a2d34 ^ 0x34;
              DAT_004a2d39 = DAT_004a2d35 ^ 0x23;
              DAT_004a2d2e = DAT_004a2d2a ^ 0xdd;
              DAT_004a2d2f = DAT_004a2d2b ^ 0x11;
              DAT_004a2d30 = DAT_004a2d2c ^ 0x3e;
              DAT_004a2d31 = DAT_004a2d2d ^ 0xa2;
              *local_248 = 0x2320c1b3;
              goto LAB_00153de8;
            }
            if (local_23c != 0x64c955e7) {
              if (local_23c == 0x6845ca4d) {
                uVar7 = DAT_004a44e8 ^ DAT_004a44ec;
                _objc_msgSend(local_b8,PTR_s_shared_00489458);
                local_c0 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(local_c0,PTR_s_currentBubblePath_0048b008);
                local_c8 = _objc_retainAutoreleasedReturnValue();
                bVar3 = ((uVar7 / 0x1b633464) * 0x495ca9ab >> 4) / 0xfd59bb7 == 0xbaed6cf4;
                iVar4 = 0x6845ca4d;
                iVar8 = 0x3f4c197f;
                goto LAB_00157cf8;
              }
              goto LAB_00153de8;
            }
            uVar7 = (DAT_004a4600 - DAT_004a4604) + 0x2eaeef18U ^ 0x568e1633;
            bVar2 = 0xa0266978 < uVar7;
            bVar3 = uVar7 == 0xa0266979;
            iVar4 = 0x78e42de7;
            iVar8 = 0x3774197;
          }
LAB_0015808c:
          if (!bVar2 || bVar3) {
            iVar4 = iVar8;
          }
        }
      }
      else if (local_23c < 0x763721e7) {
        if (local_23c < 0x72f8e587) {
          if (local_23c < 0x6f407440) {
            if (local_23c != 0x6e1edac7) {
              if (local_23c == 0x6ea1922f) {
                uVar7 = 0;
                if (DAT_004a4644 != 0) {
                  uVar7 = DAT_004a4640 / DAT_004a4644;
                }
                if (((uint)((ulong)(uVar7 + 0x5d6d58b6) * 0x9f762d63 >> 0x3f) | 0xf70b0884) <
                    0xb6b9f328) {
                  iVar4 = 0x4a51e133;
                }
                goto LAB_00158108;
              }
              goto LAB_00153de8;
            }
            local_188 = PTR_s_setObject_forKeyedSubscript__0048b040;
            local_180 = PTR_s_hasSuffix__0048aba8;
            bVar3 = 0xdb17afb7 <
                    ((DAT_004a45a8 & DAT_004a45ac ^ 0x7bdd4e3) * -0x1581f525 | 0xc21cff78);
            iVar4 = -0x40c0f7a5;
            iVar8 = 0x32a1eb60;
          }
          else {
            if (local_23c == 0x6f407440) {
              local_118 = local_a0 + 1;
              *local_248 = 0x48f9d274;
              local_200 = local_e8;
              goto LAB_00153de8;
            }
            if (local_23c != 0x6f721730) {
              if (local_23c == 0x7132e010) {
                uVar7 = 0;
                if (DAT_004a458c != 0) {
                  uVar7 = DAT_004a4588 / DAT_004a458c;
                }
                uVar7 = (uVar7 / 0x679d07e1) * 0xa48e28d & 0x12360a42;
                _objc_msgSend(local_150,local_130,local_148,0);
                local_158 = _objc_retainAutoreleasedReturnValue();
                _objc_release(local_150);
                puVar1 = local_a0;
                local_a0[1] = 0;
                *puVar1 = 0;
                puVar1[3] = 0;
                puVar1[2] = 0;
                puVar1[5] = 0;
                puVar1[4] = 0;
                puVar1[7] = 0;
                puVar1[6] = 0;
                _objc_retain(local_158);
                local_160 = _objc_msgSend(local_158,local_e0,local_a0,local_a8,0x10);
                local_161 = local_160 == 0;
                bVar2 = 0xc740a32 < uVar7;
                bVar3 = uVar7 == 0xc740a33;
                iVar4 = -0x6293f387;
                iVar8 = 0x133541e7;
                goto LAB_0015808c;
              }
              goto LAB_00153de8;
            }
            bVar3 = 0x2eb1fd3e < ((DAT_004a45e0 | DAT_004a45e4) + 0xc6448d03 & 0x379d9e14);
            iVar4 = 0x45eb7f0c;
            iVar8 = 0x20c2c7f2;
          }
        }
        else {
          if (0x743c1323 < local_23c) {
            if (local_23c == 0x743c1324) {
              *local_248 = 0x64cd620;
            }
            else {
              if (local_23c == 0x74a9d2ac) {
                iVar4 = 0x3b98b02;
                if (0x1c43ab4d <
                    (DAT_004a45f0 - DAT_004a45f4 & 0x2224ba54U ^ 0x71baebc1) + 0xbfa7050) {
                  iVar4 = 0x79dc35d0;
                }
                goto LAB_00158108;
              }
              if (local_23c == 0x74ced56d) {
                iVar4 = 0x736e8ba3;
                if (local_1b9 == '\0') {
                  iVar4 = 0x3b04d96c;
                }
                *local_248 = iVar4;
                local_218 = local_1b8;
              }
            }
            goto LAB_00153de8;
          }
          if (local_23c == 0x72f8e587) {
            *local_248 = 0x55294f2f;
            goto LAB_00153de8;
          }
          if (local_23c == 0x736e8ba3) {
            local_1c8 = _objc_msgSend(local_158,local_e0,local_a0,local_a8,0x10);
            *local_248 = 0x58342f75;
            goto LAB_00153de8;
          }
          if (local_23c != 0x73c54d92) goto LAB_00153de8;
          bVar3 = 0xf323da11 <
                  ((DAT_004a44e0 - DAT_004a44e4) + 0x35375b46U | 0x526ec4b1) * -0x7cbc5939;
          iVar4 = 0x6845ca4d;
          iVar8 = -0x1f0a6b27;
        }
LAB_00157900:
        if (bVar3) {
          iVar4 = iVar8;
        }
      }
      else if (local_23c < 0x7b4fdf9e) {
        if (local_23c < 0x78e42de7) {
          if (local_23c == 0x763721e7) {
            *local_248 = 0x6f407440;
          }
          else {
            if (local_23c == 0x774243c6) {
              bVar3 = (DAT_004a4660 + DAT_004a4664 + 0x2ff95800U | 0xfcff7edf) == 0xe361a654;
              iVar4 = 0x203d2b30;
              iVar8 = -0x3d483d4f;
              goto LAB_00158104;
            }
            if (local_23c == 0x77e294e4) {
              *local_248 = 0x47cf3d4f;
            }
          }
          goto LAB_00153de8;
        }
        if (local_23c == 0x78e42de7) {
          *local_248 = 0x3774197;
          goto LAB_00153de8;
        }
        if (local_23c != 0x79dc35d0) {
          if (local_23c == 0x7a4d697b) {
            bVar3 = 0xa472d8ad <
                    ((DAT_004a46b0 ^ DAT_004a46b4) + 0xff283de & 0xb11d3810) * -0x3172f5d1;
            iVar4 = -0x2946a8b3;
            iVar8 = 0x49615d20;
            goto LAB_00157900;
          }
          goto LAB_00153de8;
        }
        iVar8 = DAT_004a45f8 + DAT_004a45fc;
        _objc_msgSend(local_148,local_120,local_1a0);
        local_1b0 = _objc_retainAutoreleasedReturnValue();
        iVar4 = 0x3fef2b7;
        if ((iVar8 + 0xafacd3dbU & 0x15a9a9ed) + 0xb7679934 < 0x3d0350a0) {
          iVar4 = 0x79dc35d0;
        }
      }
      else {
        if (0x7cc0924f < local_23c) {
          if (local_23c == 0x7cc09250) {
            *local_248 = 0x63fc7d23;
          }
          else if (local_23c == 0x7f694f5e) {
            DAT_004a2d69 = DAT_004a2d64 ^ 0xbe;
            DAT_004a2d6a = DAT_004a2d65 ^ 0xe9;
            DAT_004a2d6b = DAT_004a2d66 ^ 0xf5;
            DAT_004a2d6c = DAT_004a2d67 ^ 0xbc;
            DAT_004a2d6d = DAT_004a2d68 ^ 0xc1;
            DAT_004a2d59 = DAT_004a2d4e ^ 0x58;
            DAT_004a2d5a = DAT_004a2d4f ^ 0x26;
            DAT_004a2d5b = DAT_004a2d50 ^ 0xe3;
            DAT_004a2d5c = DAT_004a2d51 ^ 0x8f;
            *local_248 = 0x7b5ad8a9;
          }
          else if (local_23c == 0x7fe98902) {
            uVar7 = (DAT_004a45b8 & DAT_004a45bc | 0xb4fc86f7) + 0xce51ac45;
            local_189 = *(long *)*local_110 == local_178;
            bVar2 = 0xf633056c < uVar7;
            bVar3 = uVar7 == 0xf633056d;
            iVar4 = 0x7fe98902;
            iVar8 = -0x72670dd;
            goto LAB_0015808c;
          }
          goto LAB_00153de8;
        }
        if (local_23c == 0x7b4fdf9e) {
          *local_248 = -0x21b5d68;
          goto LAB_00153de8;
        }
        if (local_23c != 0x7b5ad8a9) {
          if (local_23c == 0x7bd4aa91) {
            *local_248 = -0x21b5d68;
          }
          goto LAB_00153de8;
        }
        DAT_004a2d69 = DAT_004a2d64 ^ 0xbe;
        DAT_004a2d6a = DAT_004a2d65 ^ 0xe9;
        DAT_004a2d6b = DAT_004a2d66 ^ 0xf5;
        DAT_004a2d6c = DAT_004a2d67 ^ 0xbc;
        DAT_004a2d6d = DAT_004a2d68 ^ 0xc1;
        DAT_004a2d59 = DAT_004a2d4e ^ 0x58;
        DAT_004a2d5a = DAT_004a2d4f ^ 0x26;
        DAT_004a2d5b = DAT_004a2d50 ^ 0xe3;
        DAT_004a2d5c = DAT_004a2d51 ^ 0x8f;
        local_7a = DAT_004a2d52 ^ 3;
        iVar4 = 0x6dd8a6b8;
        if ((DAT_004a44a8 | DAT_004a44ac) * -0x1f62568c == -0x26d43458) {
          iVar4 = 0x7b5ad8a9;
        }
      }
      goto LAB_00158108;
    }
    if (0x2dbebb12 < local_23c) {
      if (0x3dc0b714 < local_23c) {
        if (0x46791d47 < local_23c) {
          if (local_23c < 0x49615d20) {
            if (local_23c == 0x46791d48) {
              *local_248 = 0x4e00f08d;
            }
            else if (local_23c == 0x47cf3d4f) {
              local_131 = *(long *)*local_f8 == local_100;
              *local_248 = 0x5a7302f1;
            }
            else if (local_23c == 0x48f9d274) {
              local_220 = local_200;
              local_128 = PTR_s_defaultManager_0048a018;
              local_120 = PTR_s_stringByAppendingPathComponent__00489550;
              local_130 = PTR_s_contentsOfDirectoryAtPath_error__0048b050;
              *local_248 = 0x1e677e48;
              local_208 = 0;
            }
          }
          else {
            if (local_23c == 0x49615d20) {
              bVar3 = 0x5f17511a <
                      ((uint)((ulong)(DAT_004a46b8 * DAT_004a46bc + 0xd7b66b09) * 0x7ee5e2f >> 0x3a)
                      | 0xac8f5f1c);
              iVar4 = -0x2946a8b3;
              iVar8 = 0x743c1324;
              goto LAB_00157900;
            }
            if (local_23c == 0x4a51e133) {
              *local_248 = 0x4fcf73ff;
            }
            else if (local_23c == 0x4bcfdb0c) {
              _objc_msgSend(local_d8,local_e0,local_90,local_98,0x10);
LAB_00155668:
              *local_248 = -0x2429107;
            }
          }
          goto LAB_00153de8;
        }
        if (0x418b0cfd < local_23c) {
          if (local_23c == 0x418b0cfe) {
            *local_248 = -0x5efc9acb;
          }
          else if (local_23c == 0x42d24a43) {
            *local_248 = -0x15277712;
          }
          else if (local_23c == 0x45eb7f0c) {
            *local_248 = 0x20c2c7f2;
          }
          goto LAB_00153de8;
        }
        if (local_23c != 0x3dc0b715) {
          if (local_23c == 0x3f4c197f) {
            *local_248 = -0x20b7c2;
          }
          goto LAB_00153de8;
        }
        uVar7 = DAT_004a44f8 ^ DAT_004a44fc;
        *local_d0 = &PTR____CFConstantStringClassReference_004a2df0;
        _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,
                      local_88,7);
        local_d8 = _objc_retainAutoreleasedReturnValue();
        puVar1 = local_90;
        local_90[1] = 0;
        *puVar1 = 0;
        puVar1[3] = 0;
        puVar1[2] = 0;
        puVar1[5] = 0;
        puVar1[4] = 0;
        puVar1[7] = 0;
        puVar1[6] = 0;
        _objc_retain();
        iVar4 = 0x1434a2b;
        if (uVar7 == 0x2a42d312) {
          iVar4 = 0x3dc0b715;
        }
        goto LAB_00158108;
      }
      if (local_23c < 0x3388a949) {
        if (local_23c < 0x30d46d82) {
          if (local_23c == 0x2dbebb13) {
            if (DAT_004a4498 + DAT_004a449c != -0x1a3ef053) {
              iVar4 = 0x33bda763;
            }
            goto LAB_00158108;
          }
          if (local_23c == 0x2fa2e3a0) {
            *local_248 = 0x18a24000;
          }
          goto LAB_00153de8;
        }
        if (local_23c != 0x30d46d82) {
          if (local_23c == 0x3213668b) {
            *local_248 = 0x6ea1922f;
          }
          else if (local_23c == 0x32a1eb60) {
            *local_248 = 0x3b04d96c;
            local_218 = 0;
          }
          goto LAB_00153de8;
        }
        bVar3 = local_1a2 == '\0';
        iVar8 = -0x21424894;
        iVar4 = 0x74a9d2ac;
      }
      else {
        if (0x38178060 < local_23c) {
          if (local_23c == 0x38178061) {
            *local_248 = 0x7b4fdf9e;
          }
          else if (local_23c == 0x3936dab1) {
            _objc_msgSend(local_c8,local_120,local_140);
            _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_0048ca98,local_128);
            _objc_retainAutoreleasedReturnValue();
            *local_248 = -0x58763529;
          }
          else if (local_23c == 0x3b04d96c) {
            local_238 = local_218;
            uVar7 = (DAT_004a45b0 | DAT_004a45b4) & 0xfb7f7fff | 0xf97c7f6d;
            bVar2 = 0xab1fba50 < uVar7;
            bVar3 = uVar7 == 0xab1fba51;
            iVar4 = 0x7fe98902;
            iVar8 = 0x25f7b60;
            goto LAB_0015808c;
          }
          goto LAB_00153de8;
        }
        if (local_23c == 0x3388a949) {
          *local_248 = 0x6f721730;
          goto LAB_00153de8;
        }
        if (local_23c != 0x33bda763) {
          if (local_23c == 0x3734e512) {
            _objc_release(local_d8);
            *local_248 = 0x570c338;
          }
          goto LAB_00153de8;
        }
        bVar3 = local_79 == '\0';
        iVar8 = 0x2320c1b3;
        iVar4 = -0x2fff848c;
      }
      goto LAB_00157370;
    }
    if (local_23c < 0x1af3aced) {
      if (0x110c1009 < local_23c) {
        if (local_23c < 0x133541e7) {
          if (local_23c == 0x110c100a) {
            iVar4 = -0x163acfb3;
            if (0x3ff02464 < (DAT_004a4540 - DAT_004a4544 | 0xa0fcdfb1U) + 0x8860ba7f) {
              iVar4 = -0x4a41f77c;
            }
            goto LAB_00158108;
          }
          if (local_23c == 0x120bcedf) {
            bVar3 = false;
            iVar8 = -0x3491aa61;
            iVar4 = -0x6a6dfe5d;
            goto LAB_00157d90;
          }
          if (local_23c == 0x12a0c904) {
            *local_248 = -0x705746c7;
          }
        }
        else {
          if (local_23c == 0x133541e7) {
            bVar3 = local_161 == '\0';
            iVar4 = -0x141df83f;
            iVar8 = 0x601a130c;
            goto LAB_00158104;
          }
          if (local_23c == 0x175c6a65) {
            *local_248 = -0x56af62cc;
          }
          else if (local_23c == 0x18a24000) {
            uVar7 = (DAT_004a4520 - DAT_004a4524) * -0x5e8e56d5 + 0xaf0a04df;
            bVar2 = 0x924c5075 < uVar7;
            bVar3 = uVar7 == 0x924c5076;
            iVar8 = -0x6b871c56;
            iVar4 = 0x6d6a2851;
            goto LAB_00157510;
          }
        }
        goto LAB_00153de8;
      }
      if (local_23c < 0xe6a00b9) {
        if (local_23c == 0xd619dff) {
          *local_248 = -0x1fc7e665;
        }
        else if (local_23c == 0xe01b41b) {
          _objc_release(local_158);
          _objc_release(local_158);
          *local_248 = 0xb84019b;
        }
        goto LAB_00153de8;
      }
      if (local_23c == 0xe6a00b9) {
        bVar3 = local_74 == 0x6f7ed1d7;
        iVar8 = 0x6195d0c4;
        iVar4 = -0x3631d553;
        goto LAB_00156994;
      }
      if (local_23c == 0xe8e809d) {
        *local_248 = 0x260bbbe;
        goto LAB_00153de8;
      }
      if (local_23c != 0xfee2513) goto LAB_00153de8;
      uVar7 = ((DAT_004a44d0 + DAT_004a44d4 | 0x6d165c27U) ^ 0xc1c3dc5c) / 0x1a1c6753;
      bVar2 = 0xd603bdb3 < uVar7;
      bVar3 = uVar7 == 0xd603bdb4;
      iVar8 = -0x76d11504;
      iVar4 = -0x7ba046aa;
    }
    else {
      if (0x2320c1b2 < local_23c) {
        if (local_23c < 0x28cf1127) {
          if (local_23c == 0x2320c1b3) {
            *local_248 = -0x64a7048e;
          }
          else if (local_23c == 0x25cee0b2) {
            *local_248 = 0x5b0c6258;
          }
          else if (local_23c == 0x28550888) goto LAB_00155668;
        }
        else if (local_23c == 0x28cf1127) {
          iVar4 = 0x28550888;
          if (local_1d9 == '\0') {
            iVar4 = 0x1e677e48;
          }
          *local_248 = iVar4;
          local_208 = local_1d8;
        }
        else if (local_23c == 0x29e815db) {
          *local_248 = 0x61dbeb75;
        }
        else if (local_23c == 0x2b0b7969) {
          *local_248 = -0x73833421;
        }
        goto LAB_00153de8;
      }
      if (local_23c < 0x1e677e48) {
        if (local_23c == 0x1af3aced) {
          *local_248 = -0x3154527;
        }
        else if (local_23c == 0x1e199d27) {
          local_140 = *(undefined8 *)(*local_108 + local_228 * 8);
          bVar3 = 0x338251e3 <
                  (uint)((ulong)(uint)(DAT_004a4568 - DAT_004a456c) * 0xb084ee7f >> 0x3e) *
                  -0x391d85c5;
          iVar4 = 0x1e199d27;
          iVar8 = 0x2b0b7969;
          goto LAB_00157900;
        }
        goto LAB_00153de8;
      }
      if (local_23c != 0x1e677e48) {
        if (local_23c == 0x203d2b30) {
          local_1d9 = local_1d8 == local_220;
          *local_248 = 0x28cf1127;
        }
        else if (local_23c == 0x20c2c7f2) {
          bVar3 = 0xc9225034 < (DAT_004a45e8 & DAT_004a45ec ^ 0x41d4ac43) + 0xede70d60;
          iVar8 = 0x45eb7f0c;
          iVar4 = 0x30d46d82;
          goto LAB_00157d90;
        }
        goto LAB_00153de8;
      }
      local_228 = local_208;
      uVar7 = DAT_004a4530 + DAT_004a4534 + 0x4010a519U & 0xcfebdfe3 | 0xcbcb8963;
      bVar2 = 0x2fca0f3c < uVar7;
      bVar3 = uVar7 == 0x2fca0f3d;
      iVar8 = 0x77e294e4;
      iVar4 = 0x47cf3d4f;
    }
  }
LAB_00157510:
  if (!bVar2 || bVar3) {
    iVar4 = iVar8;
  }
LAB_00158108:
  *local_248 = iVar4;
  goto LAB_00153de8;
}



// ----- -[BubbleBoxAssets fileExistsWithName:] @ 00158414 -----

/* Function Stack Size: 0x18 bytes */

bool BubbleBoxAssets::fileExistsWithName_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  uint uVar3;
  int iVar4;
  int local_88;
  byte local_83;
  byte local_82;
  byte local_81;
  long local_80;
  undefined8 local_78;
  undefined *local_70;
  char local_65;
  
  local_88 = 0x4ed03dbf;
LAB_00158498:
  while (local_88 < -0x89395d9) {
    if (local_88 < -0x5d247843) {
      if (local_88 < -0x69c321fa) {
        if (local_88 == -0x7690f8bd) {
          uVar3 = 0;
          if (DAT_004a470c != 0) {
            uVar3 = DAT_004a4708 / DAT_004a470c;
          }
          uVar3 = uVar3 * -0x5fd00070 ^ 0xdd73357c;
          local_81 = local_80 != 0;
          _objc_release();
          _objc_release(local_78);
          bVar1 = 0xfdfdd66 < uVar3;
          bVar2 = uVar3 == 0xfdfdd67;
          iVar4 = 0x5f1e4c31;
          local_88 = 0x98bf156;
          param_2 = extraout_x1_01;
LAB_001589d8:
          if (!bVar1 || bVar2) {
            local_88 = iVar4;
          }
        }
        else if (local_88 == -0x6ba63f4e) {
          local_88 = -0x3ea63b53;
          if (local_65 == '\0') {
            local_88 = -0x89395d9;
          }
          local_82 = 0;
        }
      }
      else if (local_88 == -0x69c321fa) {
        local_88 = -0x385bbefd;
        if ((DAT_004a4718 * DAT_004a471c ^ 0x40109082U | 0xbd6b6711) * 0x32dd5b7f < 0x76dac6c5) {
          local_88 = -0x69c321fa;
        }
      }
      else if (local_88 == -0x5e5da624) {
        local_88 = -0x69c321fa;
      }
      else if (local_88 == -0x5d2b641b) {
        uVar3 = 0;
        if (DAT_004a46ec != 0) {
          uVar3 = DAT_004a46e8 / DAT_004a46ec;
        }
        uVar3 = (uVar3 * 0x49168d02 ^ 0x110000c0) & 0x7724dac6;
        bVar1 = 0xb58214fc < uVar3;
        bVar2 = uVar3 == 0xb58214fd;
        local_88 = -0x5d2b641b;
        iVar4 = -0x6ba63f4e;
LAB_00158658:
        if (!bVar1 || bVar2) {
          local_88 = iVar4;
        }
      }
    }
    else if (local_88 < -0x385bbefd) {
      if (local_88 == -0x5d247843) {
LAB_00158700:
        local_88 = -0x5d2b641b;
      }
      else if (local_88 == -0x3ea63b53) {
        local_83 = local_82;
        local_88 = -0x69c321fa;
        if ((uint)((ulong)(DAT_004a4710 * DAT_004a4714 + 0xec9ff7d9) * 0x29eb987d >> 0x3d) *
            0x6e83fb61 == 0x79209a39) {
          local_88 = -0x5e5da624;
        }
      }
      else if (local_88 == -0x3c092787) {
        local_88 = 0x7ed16e96;
      }
    }
    else if (local_88 == -0x2f367486) {
      local_88 = 0x7bcf58e;
    }
    else {
      if (local_88 == -0x282584ee) {
        uVar3 = (uint)((ulong)((uint)((ulong)(uint)(DAT_004a4700 + DAT_004a4704) * 0x16eb025 >> 0x37
                                     ) ^ 0x64a2c301) * 0x2ce12087 >> 0x3c);
        bVar1 = 0x16e3a746 < uVar3;
        bVar2 = uVar3 == 0x16e3a747;
        iVar4 = -0x7690f8bd;
        local_88 = 0x5f1e4c31;
        goto LAB_001589d8;
      }
      if (local_88 == -0x385bbefd) {
        return (bool)local_83;
      }
    }
  }
  if (local_88 < 0x4ed03dbf) {
    if (0x98bf155 < local_88) {
      if (local_88 == 0x98bf156) {
        local_88 = -0x3ea63b53;
        local_82 = local_81;
      }
      else if (local_88 == 0x21200fe9) {
        local_88 = 0x652d6716;
      }
      else if (local_88 == 0x2c34c33b) {
        local_88 = 0x5af63ea8;
      }
      goto LAB_00158498;
    }
    if (local_88 != -0x89395d9) {
      if (local_88 == 0x7bcf58e) goto LAB_00158700;
      goto LAB_00158498;
    }
    bVar2 = (uint)((ulong)(DAT_004a46f0 + DAT_004a46f4 ^ 0xde61080U | 0xf000ae27) * 0x3d88ab4b >>
                  0x3d) == 0x157c670c;
    iVar4 = 0x652d6716;
    local_88 = 0x21200fe9;
  }
  else {
    if (0x5f1e4c30 < local_88) {
      if (local_88 == 0x5f1e4c31) {
        _objc_release(local_80);
        _objc_release(local_78);
        local_88 = -0x7690f8bd;
        param_2 = extraout_x1_00;
      }
      else {
        if (local_88 == 0x652d6716) {
          uVar3 = (DAT_004a46f8 * DAT_004a46fc ^ 0x530181c1U | 0xac7e1e3e) + 0xf7a86ba6;
          local_70 = PTR_s_bubbleFileMap_0048aff8;
          bVar1 = 0x4d50be74 < uVar3;
          bVar2 = uVar3 == 0x4d50be75;
          iVar4 = 0x21200fe9;
          local_88 = 0x2c34c33b;
          goto LAB_001589d8;
        }
        if (local_88 == 0x7ed16e96) {
          uVar3 = 0;
          if (DAT_004a46dc != 0) {
            uVar3 = DAT_004a46d8 / DAT_004a46dc;
          }
          uVar3 = (uVar3 & 0x7869b5cc) + 0x8f619bd3;
          local_65 = param_3 == 0;
          bVar1 = 0xfbbf73ed < uVar3;
          bVar2 = uVar3 == 0xfbbf73ee;
          local_88 = 0x7ed16e96;
          iVar4 = -0x2f367486;
          goto LAB_00158658;
        }
      }
      goto LAB_00158498;
    }
    if (local_88 != 0x4ed03dbf) {
      if (local_88 == 0x5af63ea8) {
        _objc_retain(param_3,param_2);
        _objc_msgSend(param_1,local_70);
        local_78 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_78,PTR_s_objectForKeyedSubscript__00489d00,param_3);
        local_80 = _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        local_88 = -0x282584ee;
        param_2 = extraout_x1;
      }
      goto LAB_00158498;
    }
    bVar2 = false;
    iVar4 = 0x7ed16e96;
    local_88 = -0x3c092787;
  }
  if (!bVar2) {
    local_88 = iVar4;
  }
  goto LAB_00158498;
}



// ----- -[BubbleBoxAssets fileDataWithName:] @ 00158a84 -----

/* WARNING: Removing unreachable block (ram,0x00159d14) */
/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::fileDataWithName_(ID param_1,SEL param_2,ID param_3)

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
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined8 uVar14;
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
  uint uVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_fc;
  ID local_f8;
  ID local_f0;
  ID local_e8;
  ID local_e0;
  long local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined *local_a0;
  char local_91;
  long local_90;
  undefined *local_88;
  undefined8 local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_90;
  uVar1 = DAT_004a4720 + DAT_004a4724 + 0x307b23e1U ^ 0x1ac80c55 | 0xe135f2aa;
  local_fc = 0x7d085d0d;
LAB_00158b54:
  puVar10 = PTR_s_unsignedIntegerValue_0048b060;
  uVar14 = auVar16._8_8_;
  auVar18._8_8_ = uVar14;
  auVar18._0_8_ = local_b0;
  auVar17._8_8_ = uVar14;
  auVar17._0_8_ = local_b8;
  auVar9._8_8_ = uVar14;
  auVar9._0_8_ = local_b8;
  auVar8._8_8_ = uVar14;
  auVar8._0_8_ = local_b8;
  local_90 = auVar16._0_8_;
  if (local_fc < 0x170e69bb) {
    if (-0x26fde142 < local_fc) {
      if (local_fc < 0x85ece6) {
        if (local_fc < -0xed7d7ac) {
          if (local_fc < -0x13c9daa9) {
            if (local_fc == -0x26fde141) {
              _objc_msgSend(local_90,local_88,&PTR____CFConstantStringClassReference_004a2ef0);
              _objc_retainAutoreleasedReturnValue();
              auVar16._8_8_ = extraout_x1_07;
              auVar16._0_8_ = local_90;
              local_fc = -0x44b9c681;
            }
            else if (local_fc == -0x15afeab2) {
              DAT_004d1488 = 1;
              _objc_retain(param_3);
              bubbleFileMap(param_1,(SEL)PTR_s_bubbleFileMap_0048aff8);
              local_80 = _objc_retainAutoreleasedReturnValue();
              local_88 = PTR_s_objectForKeyedSubscript__00489d00;
              _objc_msgSend(local_80,PTR_s_objectForKeyedSubscript__00489d00,param_3);
              auVar16 = _objc_retainAutoreleasedReturnValue();
              local_fc = 0x3e159b45;
            }
            else if (local_fc == -0x15bfa6f7) {
              return local_f8;
            }
          }
          else if (local_fc == -0x13c9daa9) {
            local_70 = DAT_004d1488;
            local_fc = 0x795a1a08;
          }
          else if (local_fc == -0x11436a8d) {
            local_fc = 0x25da4840;
          }
        }
        else if (local_fc < -0x709ca58) {
          if (local_fc == -0xed7d7ac) {
            local_73 = local_72 ^ 0x5d;
            bVar12 = 0x812797d6 < (DAT_004a4768 - DAT_004a476c) * -0x73a9365a + 0xac38bd6cU;
            iVar13 = 0x1687874e;
            local_fc = 0x5c8aa4ff;
            auVar17 = auVar8;
            goto LAB_0015a164;
          }
          if (local_fc == -0xc954bed) {
            bVar12 = local_71 == '\0';
            iVar13 = -0x15afeab2;
            local_fc = 0x52839518;
            goto LAB_0015a0b0;
          }
        }
        else if (local_fc == -0x709ca58) {
          _objc_retain(local_a8);
          auVar16._8_8_ = extraout_x1_11;
          auVar16._0_8_ = local_90;
          local_fc = 0x3a3f9d7;
        }
        else if (local_fc == 0x71ee2f) {
          local_fc = 0x97a6149;
        }
      }
      else if (local_fc < 0xf5a54a6) {
        if (local_fc < 0x97a6149) {
          if (local_fc == 0x85ece6) {
            local_fc = -0x321f31c5;
            if (0x2bda80ce < ((DAT_004a4770 ^ DAT_004a4774) * -0x6c09da03 ^ 0x4f9547e4) + 0x1668c141
               ) {
              local_fc = 0x164be393;
            }
          }
          else if (local_fc == 0x3a3f9d7) {
            uVar15 = DAT_004a47c8 & DAT_004a47cc;
            _objc_retain(local_a8);
            bVar12 = 0x1dfc0307 < (uVar15 & 0x2280816c | 0x22008120);
            local_fc = 0x3a3f9d7;
            iVar13 = 0x2c49760b;
            uVar14 = extraout_x1_00;
LAB_00159bbc:
            auVar4._8_8_ = uVar14;
            auVar4._0_8_ = local_90;
            auVar16._8_8_ = uVar14;
            auVar16._0_8_ = local_90;
            if (bVar12) {
              local_fc = iVar13;
              auVar16 = auVar4;
            }
          }
        }
        else if (local_fc == 0x97a6149) {
          local_a0 = PTR_BubbleBoxCache_0048cbd8;
          bVar12 = (DAT_004a47a8 + DAT_004a47ac | 0x7d7defffU) / 0x38d5037f == 0x82881cfe;
          iVar13 = 0x71ee2f;
          local_fc = 0x577048db;
LAB_0015a0b0:
          auVar3._8_8_ = uVar14;
          auVar3._0_8_ = local_90;
          auVar16._8_8_ = uVar14;
          auVar16._0_8_ = local_90;
          if (bVar12) {
            local_fc = iVar13;
            auVar16 = auVar3;
          }
        }
        else if (local_fc == 0x9cf6eda) {
          _objc_msgSend(local_a0,PTR_s_getData__0048b058,param_3);
          _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(PTR__OBJC_CLASS___NSData_0048c9b8,PTR_s_class_00489650);
          auVar16._8_8_ = extraout_x1_03;
          auVar16._0_8_ = local_90;
          local_fc = 0x301d513c;
        }
      }
      else if (local_fc < 0x164be393) {
        if (local_fc == 0xf5a54a6) {
          uVar15 = 0;
          if (DAT_004a473c != 0) {
            uVar15 = DAT_004a4738 / DAT_004a473c;
          }
          local_71 = local_70 == 0;
          local_fc = 0x1b024bb1;
          if (0x90b8669e < (uVar15 & 0x10201000)) {
            local_fc = 0xf5a54a6;
          }
        }
        else if (local_fc == 0x141bd056) {
          local_fc = -0x300b7306;
          if (((DAT_004a4800 - DAT_004a4804) * -0x46734534 + 0xec11378cU | 0x56417aa5) == 0xa963df4e
             ) {
            local_fc = 0x230dd3db;
          }
        }
      }
      else if (local_fc == 0x164be393) {
        DAT_004a2ec1 = local_73;
        DAT_004a2ec2 = DAT_004a2ebb ^ 0x5a;
        DAT_004a2ec3 = DAT_004a2ebc ^ 0xd3;
        DAT_004a2ec4 = DAT_004a2ebd ^ 0xea;
        DAT_004a2ec5 = DAT_004a2ebe ^ 0xde;
        DAT_004a2ec6 = DAT_004a2ebf ^ 0x81;
        DAT_004a2ec7 = DAT_004a2ec0 ^ 0xeb;
        DAT_004a2eb5 = DAT_004a2eb0 ^ 10;
        DAT_004a2eb6 = DAT_004a2eb1 ^ 0xd8;
        DAT_004a2eb7 = DAT_004a2eb2 ^ 8;
        DAT_004a2eb8 = DAT_004a2eb3 ^ 0xd9;
        DAT_004a2eb9 = DAT_004a2eb4 ^ 0xf;
        local_fc = 0x6ecfe6b4;
        if ((DAT_004a4778 + DAT_004a477c & 0x8858150U) + 0x1fbca87e < 0xd687c64) {
          local_fc = 0x164be393;
        }
      }
      else if (local_fc == 0x1687874e) {
        local_fc = -0xed7d7ac;
      }
      goto LAB_00158b54;
    }
    if (local_fc < -0x531e1422) {
      if (local_fc < -0x66163002) {
        if (local_fc < -0x7ec9fa9a) {
          if (local_fc == -0x7f709d2e) {
            uVar15 = DAT_004a4818 & DAT_004a481c;
            _objc_release(local_90,uVar14);
            _objc_release(param_3);
            _objc_autoreleaseReturnValue(local_f8);
            auVar5._8_8_ = extraout_x1_09;
            auVar5._0_8_ = local_90;
            auVar16._8_8_ = extraout_x1_09;
            auVar16._0_8_ = local_90;
            local_fc = -0x15bfa6f7;
            if ((uVar15 * -0x3b6f542f + 0x56b9a5cc | 0x8512de16) < 0x413139ea) {
              local_fc = -0x7f709d2e;
              auVar16 = auVar5;
            }
          }
          else if (local_fc == -0x7f2d36b1) {
            _objc_release(local_90,uVar14);
            _objc_release(param_3);
            _objc_autoreleaseReturnValue(local_f8);
            auVar16._8_8_ = extraout_x1;
            auVar16._0_8_ = local_90;
            local_fc = -0x7f709d2e;
          }
        }
        else {
          if (local_fc == -0x7ec9fa9a) {
            uVar15 = (DAT_004a47f0 * DAT_004a47f4 + 0xfb0ecf6eU | 0xc1e75661) + 0x5729b1df;
            bVar11 = 0xa8f87aa4 < uVar15;
            bVar12 = uVar15 == 0xa8f87aa5;
            local_fc = -0x6f25a60b;
            iVar13 = 0x4835ff3a;
            goto LAB_00159fb4;
          }
          if (local_fc == -0x6f25a60b) {
            _objc_msgSend(local_b8,PTR_s_unsignedIntegerValue_0048b060);
            _objc_release(local_b8);
            _objc_msgSend(local_90,local_88,&PTR____CFConstantStringClassReference_004a2ed0);
            uVar14 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar14,puVar10);
            _objc_release(uVar14);
            auVar16._8_8_ = extraout_x1_02;
            auVar16._0_8_ = local_90;
            local_fc = 0x4835ff3a;
          }
        }
      }
      else if (local_fc < -0x5d626b4b) {
        if (local_fc == -0x66163002) {
          local_fc = 0xf5a54a6;
        }
        else if (local_fc == -0x62276a71) {
          local_fc = 0x141bd056;
        }
      }
      else if (local_fc == -0x5d626b4b) {
        local_fc = 0xf5a54a6;
      }
      else if (local_fc == -0x5b76bc85) {
        local_fc = -0x3eb35563;
      }
      goto LAB_00158b54;
    }
    if (-0x321f31c6 < local_fc) {
      if (local_fc < -0x2bf5587c) {
        if (local_fc == -0x321f31c5) {
          DAT_004a2ec1 = local_73;
          DAT_004a2ec2 = DAT_004a2ebb ^ 0x5a;
          DAT_004a2ec3 = DAT_004a2ebc ^ 0xd3;
          DAT_004a2ec4 = DAT_004a2ebd ^ 0xea;
          DAT_004a2ec5 = DAT_004a2ebe ^ 0xde;
          DAT_004a2ec6 = DAT_004a2ebf ^ 0x81;
          DAT_004a2ec7 = DAT_004a2ec0 ^ 0xeb;
          DAT_004a2eb5 = DAT_004a2eb0 ^ 10;
          DAT_004a2eb6 = DAT_004a2eb1 ^ 0xd8;
          DAT_004a2eb7 = DAT_004a2eb2 ^ 8;
          DAT_004a2eb8 = DAT_004a2eb3 ^ 0xd9;
          DAT_004a2eb9 = DAT_004a2eb4 ^ 0xf;
          local_fc = 0x164be393;
        }
        else if (local_fc == -0x300b7306) {
          uVar15 = DAT_004a4808 | DAT_004a480c;
          _objc_msgSend(uStack_d0,PTR_s_subdataWithRange__0048b030,local_c0 + local_d8 + 4,local_c8)
          ;
          local_e0 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(PTR_BubbleBoxCache_0048cbd8,PTR_s_setData_key__0048b068,local_e0,param_3);
          auVar17._8_8_ = extraout_x1_06;
          bVar12 = 0xd4b09788 < ((uVar15 & 0xf5ae88d) * -0xc990e30) / 0xe8067dc;
          iVar13 = 0x230dd3db;
          local_fc = -0x2bf5587c;
          goto LAB_0015a164;
        }
      }
      else if (local_fc == -0x2bf5587c) {
        local_fc = 0x4127ca46;
        local_e8 = local_e0;
      }
      else if (local_fc == -0x2914ca44) {
        _objc_release(local_80,uVar14);
        auVar16._8_8_ = extraout_x1_12;
        auVar16._0_8_ = local_90;
        local_fc = 0x74c604bd;
      }
      else if (local_fc == -0x2713cdd5) {
        uVar15 = 0;
        if (DAT_004a474c != 0) {
          uVar15 = DAT_004a4748 / DAT_004a474c;
        }
        uVar15 = uVar15 * -0x8a77631 + 0xea869648 ^ 0x9131b7fc;
        bVar11 = 0x38c5d651 < uVar15;
        bVar12 = uVar15 == 0x38c5d652;
        iVar13 = -0x2713cdd5;
        local_fc = -0xc954bed;
LAB_00159730:
        local_b0 = auVar18._0_8_;
        auVar7._8_8_ = auVar18._8_8_;
        auVar7._0_8_ = local_90;
        auVar16._8_8_ = auVar18._8_8_;
        auVar16._0_8_ = local_90;
        if (!bVar11 || bVar12) {
          local_fc = iVar13;
          auVar16 = auVar7;
        }
      }
      goto LAB_00158b54;
    }
    if (-0x3eb35564 < local_fc) {
      if (local_fc == -0x3eb35563) {
        local_fc = -0x531e1422;
        if ((DAT_004a47d8 - DAT_004a47dc | 0x38229c6eU) * -0xf15ff14 + 0xf20e0858 < 0x1b696366) {
          local_fc = -0x3eb35563;
        }
      }
      else if (local_fc == -0x3834b2c3) {
        local_fc = 0x19427cd4;
      }
      goto LAB_00158b54;
    }
    if (local_fc == -0x531e1422) {
      local_fc = 0x4127ca46;
      local_e8 = local_a8;
      goto LAB_00158b54;
    }
    if (local_fc != -0x44b9c681) goto LAB_00158b54;
    uVar15 = DAT_004a47e8 & DAT_004a47ec;
    _objc_msgSend(local_90,local_88,&PTR____CFConstantStringClassReference_004a2ef0);
    auVar17 = _objc_retainAutoreleasedReturnValue();
    bVar12 = 0x55a3f4d4 < (uint)((ulong)((uVar15 | 0x8fcbc5f8) ^ 0xe30058e8) * 0x62923a4f >> 0x3d);
    iVar13 = -0x26fde141;
    local_fc = 0x785aba81;
LAB_0015a164:
    local_b8 = auVar17._0_8_;
    auVar6._8_8_ = auVar17._8_8_;
    auVar6._0_8_ = local_90;
    auVar16._8_8_ = auVar17._8_8_;
    auVar16._0_8_ = local_90;
    if (bVar12) {
      local_fc = iVar13;
      auVar16 = auVar6;
    }
    goto LAB_00158b54;
  }
  if (local_fc < 0x4835ff3a) {
    if (0x27835286 < local_fc) {
      if (local_fc < 0x3e159b45) {
        if (local_fc < 0x2dccd073) {
          if (local_fc == 0x27835287) {
            bVar12 = (DAT_004a47a0 | DAT_004a47a4) == 0x651fe9cd;
            iVar13 = 0x97a6149;
            local_fc = 0x71ee2f;
LAB_00159fec:
            if (!bVar12) {
              local_fc = iVar13;
            }
          }
          else if (local_fc == 0x2c49760b) {
            local_fc = 0x4797ad91;
          }
        }
        else if (local_fc == 0x2dccd073) {
          local_fc = 0x26c58c11;
        }
        else if (local_fc == 0x301d513c) {
          uVar15 = (DAT_004a47b8 - DAT_004a47bc) * 0x50424074 + 0xb6ea1b48U ^ 0x68093941;
          _objc_msgSend(local_a0,PTR_s_getData__0048b058,param_3);
          local_a8 = _objc_retainAutoreleasedReturnValue();
          auVar18 = _objc_msgSend(PTR__OBJC_CLASS___NSData_0048c9b8,PTR_s_class_00489650);
          bVar11 = 0x569d33c < uVar15;
          bVar12 = uVar15 == 0x569d33d;
          iVar13 = 0x301d513c;
          local_fc = 0x2dccd073;
          goto LAB_00159730;
        }
        goto LAB_00158b54;
      }
      if (local_fc < 0x41407463) {
        if (local_fc == 0x3e159b45) {
          bVar12 = (DAT_004a4780 + DAT_004a4784 + 0x197ba6f9U & 0x681d4e92) == 0x3b4a40de;
          iVar13 = -0x2914ca44;
          local_fc = 0x74c604bd;
          goto LAB_0015a0b0;
        }
        if (local_fc == 0x4127ca46) {
          local_f0 = local_e8;
          _objc_release(local_a8,uVar14);
          auVar16._8_8_ = extraout_x1_01;
          auVar16._0_8_ = local_90;
          local_fc = 0x712cbac7;
        }
        goto LAB_00158b54;
      }
      if (local_fc != 0x41407463) {
        if ((local_fc == 0x4797ad91) &&
           (local_fc = -0x3eb35563,
           0x97e896ab < ((DAT_004a47d0 & DAT_004a47d4) + 0xf185e317 | 0x2a7aad47))) {
          local_fc = -0x5b76bc85;
        }
        goto LAB_00158b54;
      }
      bVar12 = 0x6b51deaa < ((DAT_004a47c0 * DAT_004a47c4 & 0x5d45f88bU) + 0xba332dd1 | 0x4bf21a44);
      iVar13 = 0x3a3f9d7;
      local_fc = -0x709ca58;
      goto LAB_0015a164;
    }
    if (local_fc < 0x23f1296a) {
      if (0x1b024bb0 < local_fc) {
        if (local_fc == 0x1b024bb1) {
          local_fc = 0x4fff8130;
        }
        else if (local_fc == 0x230dd3db) {
          _objc_msgSend(uStack_d0,PTR_s_subdataWithRange__0048b030,local_c0 + local_d8 + 4,local_c8)
          ;
          uVar14 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(PTR_BubbleBoxCache_0048cbd8,PTR_s_setData_key__0048b068,uVar14,param_3);
          auVar16._8_8_ = extraout_x1_04;
          auVar16._0_8_ = local_90;
          local_fc = -0x300b7306;
        }
        goto LAB_00158b54;
      }
      if (local_fc != 0x170e69bb) {
        if (local_fc == 0x19427cd4) {
          bVar12 = ((DAT_004a4760 ^ DAT_004a4764 | 0x87580c63) + 0x3ad11ae4 | 0x76ac464) ==
                   0x78ad2678;
          iVar13 = -0xed7d7ac;
          local_fc = 0x1687874e;
          goto LAB_00159fec;
        }
        goto LAB_00158b54;
      }
      local_72 = DAT_004a2eba;
      uVar15 = ((DAT_004a4758 ^ DAT_004a475c) & 0xb1481010 | 0xeb6edaf) / 0x4200cdd0;
      bVar11 = 0x6620ffc3 < uVar15;
      bVar12 = uVar15 == 0x6620ffc4;
      local_fc = 0x5cdbb309;
      iVar13 = -0x3834b2c3;
    }
    else {
      if (0x26c58c10 < local_fc) {
        if (local_fc == 0x26c58c11) {
          iVar13 = _objc_msgSend(local_a8,PTR_s_isKindOfClass__00489c00,local_b0);
          bVar12 = iVar13 == 0;
          iVar13 = 0x2778b0b6;
          local_fc = 0x41407463;
          uVar14 = extraout_x1_10;
          goto LAB_0015a0b0;
        }
        if (local_fc == 0x2778b0b6) {
          bVar12 = 0x9530a616 <
                   (((DAT_004a47e0 | DAT_004a47e4) & 0x4b56c14e) + 0xf280118 & 0x4e7a802a);
          iVar13 = -0x26fde141;
          local_fc = -0x44b9c681;
          auVar17 = auVar9;
          goto LAB_0015a164;
        }
        goto LAB_00158b54;
      }
      if (local_fc == 0x23f1296a) {
        local_fc = -0x2713cdd5;
        goto LAB_00158b54;
      }
      if (local_fc != 0x25da4840) goto LAB_00158b54;
      uVar15 = (DAT_004a4790 - DAT_004a4794) + 0xa8b5dce3U | 0x78ae6b31;
      bVar11 = 0xe4a5666e < uVar15;
      bVar12 = uVar15 == 0xe4a5666f;
      local_fc = 0x4beebb2f;
      iVar13 = 0x5221b9ca;
    }
  }
  else if (local_fc < 0x5c8aa4ff) {
    if (local_fc < 0x52839518) {
      if (0x4fff812f < local_fc) {
        if (local_fc == 0x4fff8130) {
          bVar12 = 0x786550aa <
                   (uint)((ulong)((DAT_004a4740 + DAT_004a4744) * 0x2e53d001 + 0x50c17d44) *
                          0x3a5f7b1 >> 0x39);
          local_fc = -0x2713cdd5;
          iVar13 = 0x23f1296a;
          goto LAB_00159bbc;
        }
        if (local_fc == 0x5221b9ca) {
          local_fc = 0x4beebb2f;
        }
        goto LAB_00158b54;
      }
      if (local_fc == 0x4835ff3a) {
        iVar13 = DAT_004a47f8 - DAT_004a47fc;
        local_c0 = _objc_msgSend(local_b8,PTR_s_unsignedIntegerValue_0048b060);
        _objc_release(local_b8);
        _objc_msgSend(local_90,local_88,&PTR____CFConstantStringClassReference_004a2ed0);
        uVar14 = _objc_retainAutoreleasedReturnValue();
        local_c8 = _objc_msgSend(uVar14,puVar10);
        _objc_release(uVar14);
        auVar2._8_8_ = extraout_x1_08;
        auVar2._0_8_ = local_90;
        auVar16._8_8_ = extraout_x1_08;
        auVar16._0_8_ = local_90;
        uStack_d0 = *(undefined8 *)(param_1 + 8);
        local_d8 = *(long *)(param_1 + 0x10);
        local_fc = -0x6f25a60b;
        if (iVar13 * -0x8f2cb0a != -0x4b9e1f91) {
          local_fc = -0x62276a71;
          auVar16 = auVar2;
        }
        goto LAB_00158b54;
      }
      if (local_fc != 0x4beebb2f) goto LAB_00158b54;
      uVar15 = (DAT_004a4798 * DAT_004a479c + 0x114a154fU ^ 0x4110c011) & 0x5532c651;
      local_91 = local_90 == 0;
      bVar11 = 0x6d10ce02 < uVar15;
      bVar12 = uVar15 == 0x6d10ce03;
      local_fc = 0x4beebb2f;
      iVar13 = 0x6bfe5a02;
    }
    else {
      if (0x577048da < local_fc) {
        if (local_fc == 0x577048db) {
          local_fc = 0x56507aa3;
        }
        else if (local_fc == 0x5a98b0df) {
          local_fc = -0x13c9daa9;
        }
        goto LAB_00158b54;
      }
      if (local_fc != 0x52839518) {
        if (local_fc == 0x56507aa3) {
          bVar12 = ((DAT_004a47b0 & DAT_004a47b4) / 0x494706ac) * 0x61537e98 == 0x1fe81f03;
          iVar13 = 0x301d513c;
          local_fc = 0x9cf6eda;
          goto LAB_00159fec;
        }
        goto LAB_00158b54;
      }
      uVar15 = 0;
      if (DAT_004a4754 != 0) {
        uVar15 = DAT_004a4750 / DAT_004a4754;
      }
      uVar15 = uVar15 * -0x6e0905fc + 0xa01b4a3b;
      bVar11 = 0xaf984aa4 < uVar15;
      bVar12 = uVar15 == 0xaf984aa5;
      local_fc = 0x5cdbb309;
      iVar13 = 0x170e69bb;
    }
  }
  else {
    if (local_fc < 0x712cbac7) {
      if (local_fc < 0x6bfe5a02) {
        if (local_fc == 0x5c8aa4ff) {
          local_fc = 0x85ece6;
        }
        else if (local_fc == 0x5cdbb309) {
          local_fc = 0x170e69bb;
        }
      }
      else if (local_fc == 0x6bfe5a02) {
        local_fc = 0x712cbac7;
        if (local_91 == '\0') {
          local_fc = 0x27835287;
        }
        local_f0 = 0;
      }
      else if (local_fc == 0x6ecfe6b4) {
        local_fc = -0x15afeab2;
      }
      goto LAB_00158b54;
    }
    if (local_fc < 0x785aba81) {
      if (local_fc == 0x712cbac7) {
        local_f8 = local_f0;
        local_fc = -0x7f2d36b1;
        if (0x7ae93e3 < ((DAT_004a4810 + DAT_004a4814 | 0xd72b2ef9U) ^ 0xe5797921)) {
          local_fc = -0x7f709d2e;
        }
      }
      else if (local_fc == 0x74c604bd) {
        _objc_release(local_80,uVar14);
        auVar16._8_8_ = extraout_x1_05;
        auVar16._0_8_ = local_90;
        local_fc = -0x11436a8d;
      }
      goto LAB_00158b54;
    }
    if (local_fc == 0x785aba81) {
      local_fc = -0x7ec9fa9a;
      goto LAB_00158b54;
    }
    if (local_fc == 0x795a1a08) {
      local_fc = -0x5d626b4b;
      goto LAB_00158b54;
    }
    if (local_fc != 0x7d085d0d) goto LAB_00158b54;
    bVar11 = 0x8dc7ed3a < uVar1;
    bVar12 = uVar1 == 0x8dc7ed3b;
    local_fc = -0x13c9daa9;
    iVar13 = 0x5a98b0df;
  }
LAB_00159fb4:
  if (!bVar11 || bVar12) {
    local_fc = iVar13;
  }
  goto LAB_00158b54;
}



// ----- -[BubbleBoxAssets dataWithContentsOfFile:] @ 0015a36c -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::dataWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int local_dc;
  ID local_d8;
  ID local_d0;
  ID local_c8;
  ID IStack_c0;
  char local_b1;
  ID local_b0;
  undefined *local_a8;
  char local_99;
  ID local_98;
  undefined *local_90;
  undefined *puStack_88;
  char local_79;
  ID local_78;
  undefined8 local_70;
  char local_61;
  
  _objc_retain(param_3);
  local_dc = -0x6c2b28e6;
LAB_0015a3f0:
  if (local_dc < 0x1adf0050) {
    if (local_dc < -0x2f8b78c9) {
      if (local_dc < -0x503488bf) {
        if (local_dc < -0x696b05a4) {
          if (local_dc == -0x7795d4c7) {
            local_dc = 0x7b5fc0f9;
          }
          else {
            if (local_dc == -0x6c2b28e6) {
              bVar2 = 0x4f59130a <
                      ((uint)((ulong)(DAT_004a4820 ^ DAT_004a4824) * 0x3e9154cd >> 0x3d) |
                      0x311560d0);
              iVar5 = 0x6a1e392a;
              local_dc = 0x26c57e0c;
              goto LAB_0015b5d4;
            }
            if (local_dc == -0x696c8b53) {
              local_dc = -0x7795d4c7;
              if ((DAT_004a4830 | DAT_004a4834 | 0x1dffbf5d) * 0x5f8e985c + 0x25093c84 < 0xd86eccd6)
              {
                local_dc = 0x7b5fc0f9;
              }
            }
          }
          goto LAB_0015a3f0;
        }
        if (local_dc < -0x5e407557) {
          if (local_dc == -0x696b05a4) {
            local_dc = -0x696b05a4;
            if (0x8a5ee59 < (DAT_004a48a8 | DAT_004a48ac) * 0x5f29c66f + 0x78a9528b) {
              local_dc = 0x3c418e7f;
            }
          }
          else if (local_dc == -0x68e9b2cd) {
            local_dc = 0x1adf0050;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc != -0x5e407557) {
          if (local_dc == -0x57e309ff) {
            local_dc = -0x2c598ead;
          }
          goto LAB_0015a3f0;
        }
        uVar6 = (DAT_004a48c8 ^ DAT_004a48cc) * 0x5a4f5234 | 0x76e3d009;
        bVar1 = 0xae4f9e5f < uVar6;
        bVar2 = uVar6 == 0xae4f9e60;
        local_dc = -0x503488bf;
        iVar5 = -0x1b839bb4;
      }
      else if (local_dc < -0x4142ceb0) {
        if (local_dc < -0x4320db07) {
          if (local_dc == -0x503488bf) {
            local_dc = -0x5e407557;
          }
          else if (local_dc == -0x4e1be953) {
            local_dc = -0x2f8b78c9;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc != -0x4320db07) {
          if (local_dc == -0x41eaf73b) {
            local_dc = 0x75fa3718;
          }
          goto LAB_0015a3f0;
        }
        uVar6 = (DAT_004a48b0 * DAT_004a48b4 + 0x8f273879U | 0x275ad3b1) + 0x1dd11edc;
        bVar1 = 0x18fbc07a < uVar6;
        bVar2 = uVar6 == 0x18fbc07b;
        local_dc = 0x627d07aa;
        iVar5 = 0x610c5c8e;
      }
      else {
        if (-0x3e749cc6 < local_dc) {
          if (local_dc == -0x3e749cc5) {
            _objc_retain(local_98);
            local_dc = 0x6d469854;
          }
          else if (local_dc == -0x325a481b) {
            uVar6 = DAT_004a48d8 + DAT_004a48dc;
            _objc_retain(local_b0);
            bVar2 = 0x4f608ece < (uVar6 ^ 0x62bd6bb8) / 0x5c20644c;
            iVar5 = -0x10f48e8;
            local_dc = -0x68e9b2cd;
            goto LAB_0015b5d4;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc != -0x4142ceb0) {
          if (local_dc == -0x3f1f3cab) {
            local_dc = 0x6abdce59;
          }
          goto LAB_0015a3f0;
        }
        iVar5 = DAT_004a48f8 + DAT_004a48fc;
        _objc_release(local_d8);
        _objc_release(param_3);
        _objc_autoreleaseReturnValue(local_d0);
        uVar6 = (iVar5 * 0x4f74e0f0 + 0x29d3d8e0U) / 0x34109545;
        bVar1 = 0xa1642f6 < uVar6;
        bVar2 = uVar6 == 0xa1642f7;
        local_dc = -0x1b750dc2;
        iVar5 = 0x4647680;
      }
LAB_0015b09c:
      if (!bVar1 || bVar2) {
        local_dc = iVar5;
      }
      goto LAB_0015a3f0;
    }
    if (-0x1b839bb5 < local_dc) {
      if (local_dc < -0x10f48e8) {
        if (local_dc < -0x83375ed) {
          if (local_dc == -0x1b839bb4) {
            local_dc = 0x579b5615;
            if (local_b1 == '\0') {
              local_dc = -0x26d61203;
            }
            goto LAB_0015b0c8;
          }
          if (local_dc == -0x1b750dc2) {
            _objc_release(local_d8);
            _objc_release(param_3);
            _objc_autoreleaseReturnValue(local_d0);
            local_dc = -0x4142ceb0;
          }
        }
        else if (local_dc == -0x83375ed) {
          bVar2 = (uint)(byte)((ulong)((DAT_004a4840 & DAT_004a4844) + 0x9822af1d >> 3) * 0x99b06e7
                              >> 0x38) * 0x7adee69b == -0x185dae71;
          local_dc = 0x70bbc467;
          iVar5 = 0x2fe9f365;
LAB_0015b130:
          if (bVar2) {
            local_dc = iVar5;
          }
        }
        else if (local_dc == -0x3ec8896) {
          local_dc = 0x398a9953;
        }
      }
      else if (local_dc < 0x4647680) {
        if (local_dc == -0x10f48e8) {
          _objc_retain(local_b0);
          local_dc = -0x325a481b;
        }
        else if (local_dc == 0x119001d) {
          local_79 = local_78 == 0;
          bVar2 = (uint)((ulong)(uint)(DAT_004a4858 - DAT_004a485c) * 0x1816fc97 >> 0x3a) *
                  0x101d0e51 == -0x16e32e67;
          iVar5 = 0x119001d;
          local_dc = 0x52ee941a;
          goto LAB_0015b260;
        }
      }
      else if (local_dc == 0x10750a6b) {
        local_dc = -0x696c8b53;
      }
      else if (local_dc == 0x4647680) {
        return local_d0;
      }
      goto LAB_0015a3f0;
    }
    if (local_dc < -0x26d61203) {
      if (local_dc == -0x2f8b78c9) {
        local_99 = local_98 == 0;
        bVar2 = 0xea813bf6 < (DAT_004a4888 + DAT_004a488c ^ 0x5323857aU) * -0x8422b69 + 0x2b421a4b;
        iVar5 = -0x2f8b78c9;
        local_dc = -0x1ecbd37c;
        goto LAB_0015b5d4;
      }
      if (local_dc == -0x2ef1f270) {
        local_a8 = PTR_s_fileDataWithName__0048b078;
        local_dc = -0x4320db07;
      }
      else if (local_dc == -0x2c598ead) {
        _objc_release(local_98);
        local_dc = 0x462203b5;
      }
      goto LAB_0015a3f0;
    }
    if (-0x23ce7dad < local_dc) {
      if (local_dc == -0x23ce7dac) {
        local_dc = 0x6b86a038;
      }
      else if (local_dc == -0x1ecbd37c) {
        bVar2 = local_99 == '\0';
        local_dc = -0x2c598ead;
        iVar5 = -0x3e749cc5;
        goto LAB_0015b130;
      }
      goto LAB_0015a3f0;
    }
    if (local_dc != -0x26d61203) {
      if (local_dc == -0x26803687) {
        uVar6 = 0;
        if (DAT_004a4864 != 0) {
          uVar6 = DAT_004a4860 / DAT_004a4864;
        }
        uVar6 = (uVar6 | 0x6db88e4a) ^ 0x96eb9cd;
        bVar1 = 0x31c50091 < uVar6;
        bVar2 = uVar6 == 0x31c50092;
        local_dc = 0x42f6d4a7;
        iVar5 = 0x43b09605;
        goto LAB_0015b09c;
      }
      goto LAB_0015a3f0;
    }
    bVar2 = 0xd4671e68 < ((DAT_004a48d0 * DAT_004a48d4 ^ 0xe992ccbbU) + 0xa5c5c198) / 0xae0a8f1d;
    iVar5 = -0x10f48e8;
    local_dc = -0x325a481b;
  }
  else {
    if (local_dc < 0x579b5615) {
      if (0x3a583376 < local_dc) {
        if (local_dc < 0x43b09605) {
          if (local_dc < 0x3e8438af) {
            if (local_dc == 0x3a583377) {
              local_dc = 0x3e8438af;
            }
            else if (local_dc == 0x3c418e7f) {
              local_dc = 0x579b5615;
              IStack_c0 = local_78;
              local_c8 = local_98;
            }
          }
          else {
            if (local_dc == 0x3e8438af) {
              bVar2 = 0x164c6118 < (DAT_004a4870 - DAT_004a4874 ^ 0x4090053fU) + 0x6ea77351;
              iVar5 = 0x3311384b;
              local_dc = 0x64b283de;
              goto LAB_0015b5d4;
            }
            if (local_dc == 0x42f6d4a7) {
              local_90 = PTR_s_dataWithContentsOfFile__00489580;
              puStack_88 = PTR__OBJC_CLASS___NSData_0048c9b8;
              local_dc = 0x42f6d4a7;
              if ((DAT_004a4868 ^ DAT_004a486c) != 0x8a514e49) {
                local_dc = 0x3a583377;
              }
            }
          }
        }
        else if (local_dc < 0x4f7a8744) {
          if (local_dc == 0x43b09605) {
            local_dc = 0x42f6d4a7;
          }
          else if ((local_dc == 0x462203b5) &&
                  (local_dc = 0x6fe7ec01,
                  0x7a1b2605 <
                  ((DAT_004a48a0 + DAT_004a48a4) * 0x544820d9 & 0xb58dd02U) + 0x856faad0)) {
            local_dc = -0x696b05a4;
          }
        }
        else if (local_dc == 0x4f7a8744) {
          uVar6 = 0;
          if (DAT_004a4854 != 0) {
            uVar6 = DAT_004a4850 / DAT_004a4854;
          }
          bVar2 = uVar6 * 0x36239ae6 == -0x3ae6d7d2;
          iVar5 = 0x119001d;
          local_dc = 0x59f0e7fa;
LAB_0015b36c:
          if (!bVar2) {
            local_dc = iVar5;
          }
        }
        else if (local_dc == 0x52ee941a) {
          local_dc = 0x579b5615;
          if (local_79 == '\0') {
            local_dc = -0x26803687;
          }
          local_c8 = 0;
          IStack_c0 = local_78;
        }
        goto LAB_0015a3f0;
      }
      if (local_dc < 0x2fe9f365) {
        if (local_dc != 0x1adf0050) {
          if (local_dc == 0x26c57e0c) {
            bVar3 = isLoadLocalBubble(param_1,(SEL)PTR_s_isLoadLocalBubble_0048b070);
            local_61 = (char)bVar3;
            local_dc = 0x10750a6b;
          }
          else if (local_dc == 0x2bb4656c) {
            bVar2 = (DAT_004a4880 & DAT_004a4884) * -0x3474aaa0 == -0xce83166;
            iVar5 = -0x2f8b78c9;
            local_dc = -0x4e1be953;
            goto LAB_0015b36c;
          }
          goto LAB_0015a3f0;
        }
        bVar2 = 0x6d2bd3c5 < (DAT_004a48e0 | DAT_004a48e4 | 0xa180f75b) + 0x4254ed6;
        local_dc = -0x3ec8896;
        iVar5 = 0x398a9953;
      }
      else {
        if (local_dc < 0x3311384b) {
          if (local_dc == 0x2fe9f365) {
            bubbleFileMap(param_1,(SEL)PTR_s_bubbleFileMap_0048aff8);
            uVar4 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar4,PTR_s_objectForKeyedSubscript__00489d00,param_3);
            _objc_retainAutoreleasedReturnValue();
            local_dc = 0x70bbc467;
          }
          else if (local_dc == 0x31c11851) {
            local_dc = 0x579b5615;
LAB_0015b0c8:
            local_c8 = local_b0;
            IStack_c0 = local_b0;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc == 0x3311384b) {
          _objc_msgSend(puStack_88,local_90,local_78);
          local_98 = _objc_retainAutoreleasedReturnValue();
          local_dc = 0x6f96c24f;
          goto LAB_0015a3f0;
        }
        if (local_dc != 0x398a9953) goto LAB_0015a3f0;
        bVar2 = 0x17bc4c10 < ((DAT_004a48e8 | DAT_004a48ec) * 0x27cd043e & 0x5ad186a0 | 0x40518600);
        local_dc = -0x3ec8896;
        iVar5 = 0x31c11851;
      }
LAB_0015b57c:
      if (bVar2) {
        local_dc = iVar5;
      }
      goto LAB_0015a3f0;
    }
    if (local_dc < 0x6b222664) {
      if (local_dc < 0x627d07aa) {
        if (local_dc != 0x579b5615) {
          if (local_dc == 0x59f0e7fa) {
            local_dc = 0x119001d;
          }
          else if (local_dc == 0x610c5c8e) {
            _objc_msgSend(param_1,local_a8,param_3);
            _objc_retainAutoreleasedReturnValue();
            local_dc = 0x627d07aa;
          }
          goto LAB_0015a3f0;
        }
        local_d8 = IStack_c0;
        local_d0 = local_c8;
        bVar2 = 0xe944557d < (DAT_004a48f0 & DAT_004a48f4 & 0x17c7ff27 | 0x1407f527);
        iVar5 = -0x1b750dc2;
        local_dc = -0x4142ceb0;
      }
      else {
        if (0x6a1e3929 < local_dc) {
          if (local_dc == 0x6a1e392a) {
            isLoadLocalBubble(param_1,(SEL)PTR_s_isLoadLocalBubble_0048b070);
            local_dc = 0x26c57e0c;
          }
          else if (local_dc == 0x6abdce59) {
            uVar6 = (byte)((ulong)(DAT_004a48c0 + DAT_004a48c4 ^ 0xa9e2123c) * 0x50abcb5 >> 0x38) |
                    0x766b5d8;
            bVar1 = 0x85102893 < uVar6;
            bVar2 = uVar6 == 0x85102894;
            local_dc = -0x503488bf;
            iVar5 = -0x5e407557;
            goto LAB_0015b09c;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc != 0x627d07aa) {
          if (local_dc == 0x64b283de) {
            _objc_msgSend(puStack_88,local_90,local_78);
            _objc_retainAutoreleasedReturnValue();
            local_dc = 0x3311384b;
          }
          goto LAB_0015a3f0;
        }
        uVar6 = DAT_004a48b8 | DAT_004a48bc;
        _objc_msgSend(param_1,local_a8,param_3);
        local_b0 = _objc_retainAutoreleasedReturnValue();
        local_b1 = local_b0 == 0;
        bVar2 = 0xafecbde0 < (uVar6 ^ 0xcaa03414) + 0xa9a4b622;
        iVar5 = 0x610c5c8e;
        local_dc = -0x3f1f3cab;
      }
    }
    else {
      if (0x6fe7ec00 < local_dc) {
        if (local_dc < 0x75fa3718) {
          if (local_dc == 0x6fe7ec01) {
            local_dc = -0x696b05a4;
          }
          else if (local_dc == 0x70bbc467) {
            uVar6 = ((DAT_004a4848 | DAT_004a484c) ^ 0x4011200) & 0x44b5764 | 0x480460;
            bubbleFileMap(param_1,(SEL)PTR_s_bubbleFileMap_0048aff8);
            local_70 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_70,PTR_s_objectForKeyedSubscript__00489d00,param_3);
            local_78 = _objc_retainAutoreleasedReturnValue();
            bVar1 = 0x4566b42 < uVar6;
            bVar2 = uVar6 == 0x4566b43;
            local_dc = 0x70bbc467;
            iVar5 = -0x23ce7dac;
            goto LAB_0015b09c;
          }
          goto LAB_0015a3f0;
        }
        if (local_dc == 0x75fa3718) {
          uVar6 = 0;
          if (DAT_004a489c != 0) {
            uVar6 = DAT_004a4898 / DAT_004a489c;
          }
          bVar2 = 0x2505c51a < (uVar6 & 0xc16331df ^ 0xa2180f34);
          local_dc = -0x41eaf73b;
          iVar5 = -0x57e309ff;
          goto LAB_0015b57c;
        }
        if (local_dc != 0x7b5fc0f9) goto LAB_0015a3f0;
        bVar2 = 0x8b6697ae < (DAT_004a4838 + DAT_004a483c) * -0x5bb3c5ff + 0xe29b3e5fU;
        local_dc = 0x7b5fc0f9;
        iVar5 = 0x6b222664;
        goto LAB_0015b57c;
      }
      if (local_dc < 0x6d469854) {
        if (local_dc == 0x6b222664) {
          bVar2 = local_61 == '\0';
          iVar5 = -0x2ef1f270;
          local_dc = -0x83375ed;
LAB_0015b260:
          if (bVar2) {
            local_dc = iVar5;
          }
        }
        else if (local_dc == 0x6b86a038) {
          _objc_release(local_70);
          local_dc = 0x4f7a8744;
        }
        goto LAB_0015a3f0;
      }
      if (local_dc != 0x6d469854) {
        if (local_dc == 0x6f96c24f) {
          local_dc = 0x2bb4656c;
        }
        goto LAB_0015a3f0;
      }
      bVar2 = 0x2ca051b2 < ((DAT_004a4890 - DAT_004a4894 | 0xf274f5deU) / 0x76b5b5d4) * 0x2f0b441;
      iVar5 = -0x41eaf73b;
      local_dc = 0x75fa3718;
    }
  }
LAB_0015b5d4:
  if (bVar2) {
    local_dc = iVar5;
  }
  goto LAB_0015a3f0;
}



// ----- -[BubbleBoxAssets imageWithContentsOfFile:] @ 0015b618 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::imageWithContentsOfFile_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  int iVar8;
  ID IVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar10;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  int local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  char local_79;
  long local_78;
  undefined *local_70;
  char local_65;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_78;
  uVar2 = (DAT_004a4900 | DAT_004a4904 | 0xd8e0f4ca) + 0x7afc75ed ^ 0xae460973;
  local_bc = -0xf9389a8;
LAB_0015b6e0:
  while( true ) {
    uVar10 = auVar11._8_8_;
    local_78 = auVar11._0_8_;
    auVar12._8_8_ = uVar10;
    auVar12._0_8_ = local_88;
    if (0xf0e025e < local_bc) break;
    if (local_bc < -0x2d039e8d) {
      if (local_bc < -0x64467ec9) {
        if (local_bc < -0x75385b08) {
          if (local_bc == -0x77260129) {
            _objc_retain(param_3);
            auVar11._8_8_ = extraout_x1_03;
            auVar11._0_8_ = local_78;
            local_bc = 0x63518652;
          }
          else if (local_bc == -0x76ae8d6a) {
            bVar6 = 0xba3bac09 < (DAT_004a4970 & DAT_004a4974 & 0x3daefd2e | 0x3d8e792a);
            local_bc = -0x1de2ccef;
            iVar8 = 0x682104e4;
LAB_0015c0a8:
            if (bVar6) {
              local_bc = iVar8;
            }
          }
        }
        else if (local_bc == -0x75385b08) {
          iVar8 = _objc_msgSend(param_3,local_90,local_88);
          auVar11._8_8_ = extraout_x1_05;
          auVar11._0_8_ = local_78;
          local_bc = -0xe3bf3d8;
          if (iVar8 == 0) {
            local_bc = -0x3b6c1dc7;
          }
          local_b8 = 0;
        }
        else if (local_bc == -0x6ed36b2e) {
          _objc_msgSend(PTR__OBJC_CLASS___NSNull_0048cbe0,PTR_s_class_00489650);
          auVar11._8_8_ = extraout_x1_07;
          auVar11._0_8_ = local_78;
          local_bc = -0x8655d64;
        }
        else if (local_bc == -0x6c68b707) {
          local_bc = -0xe3bf3d8;
          local_b8 = local_b0;
        }
      }
      else if (local_bc < -0x54f697fe) {
        if (local_bc == -0x64467ec9) {
          local_90 = PTR_s_isKindOfClass__00489c00;
          local_bc = -0x75385b08;
        }
        else if (local_bc == -0x61f535bb) {
          local_bc = 0x4f841dad;
        }
      }
      else if (local_bc == -0x54f697fe) {
        local_bc = 0x1ee4e5f0;
      }
      else if (local_bc == -0x5405c23f) {
        _objc_retain(param_3);
        auVar11._8_8_ = extraout_x1_08;
        auVar11._0_8_ = local_78;
        local_bc = -0x77260129;
      }
      else if (local_bc == -0x3b6c1dc7) {
        uVar1 = 0;
        if (DAT_004a4964 != 0) {
          uVar1 = DAT_004a4960 / DAT_004a4964;
        }
        local_bc = -0x131fecf;
        if ((int)((long)((ulong)((uVar1 | 0x2e9baef8) * 0x427eac) * 0xaa040751) >> 0x3f) ==
            -0x1ace8294) {
          local_bc = 0x498cfd1f;
        }
      }
    }
    else if (local_bc < -0xe3bf3d8) {
      if (local_bc < -0x1de2ccef) {
        if (local_bc == -0x2d039e8d) {
          local_70 = PTR_s_length_00489d78;
          bVar6 = 0xd80ac985 < ((DAT_004a4928 & DAT_004a492c) + 0xfd63072b | 0xac42a242);
          iVar8 = 0x23d3a941;
          local_bc = -0x54f697fe;
          goto LAB_0015be70;
        }
        if (local_bc == -0x1ff669b5) {
          iVar8 = -0x16eb2a1f;
          cVar3 = local_79;
          goto LAB_0015bf50;
        }
      }
      else if (local_bc == -0x1de2ccef) {
        uVar1 = DAT_004a4978 - DAT_004a497c;
        _objc_msgSend(local_a8,PTR_s_scale_0048b088);
        local_b0 = _objc_msgSend(local_a0,PTR_s_initWithData_scale__0048b090,local_98);
        _objc_release(local_a8);
        auVar12._8_8_ = extraout_x1_04;
        bVar6 = (uVar1 | 0x4b6bbb7) * 0x2da1b538 == 0x4c601633;
        iVar8 = -0x1de2ccef;
        local_bc = -0x61f535bb;
LAB_0015c308:
        auVar4._8_8_ = auVar12._8_8_;
        auVar4._0_8_ = local_78;
        auVar11._8_8_ = auVar12._8_8_;
        auVar11._0_8_ = local_78;
        local_88 = auVar12._0_8_;
        if (bVar6) {
          local_bc = iVar8;
          auVar11 = auVar4;
        }
      }
      else if (local_bc == -0x16eb2a1f) {
        local_bc = -0x6ed36b2e;
        if (((DAT_004a4950 | DAT_004a4954) + 0xf9cef99f & 0xae450b71) != 0x4c641154) {
          local_bc = -0x8655d64;
        }
      }
      else if (local_bc == -0xf9389a8) {
        bVar7 = 0x9134d3dd < uVar2;
        bVar6 = uVar2 == 0x9134d3de;
        local_bc = -0x77260129;
        iVar8 = -0x5405c23f;
LAB_0015bda0:
        auVar5._8_8_ = uVar10;
        auVar5._0_8_ = local_78;
        auVar11._8_8_ = uVar10;
        auVar11._0_8_ = local_78;
        if (!bVar7 || bVar6) {
          local_bc = iVar8;
          auVar11 = auVar5;
        }
      }
    }
    else if (local_bc < -0x131fecf) {
      if (local_bc == -0x8655d64) {
        uVar1 = DAT_004a4958 & DAT_004a495c;
        auVar12 = _objc_msgSend(PTR__OBJC_CLASS___NSNull_0048cbe0,PTR_s_class_00489650);
        bVar6 = (uVar1 & 0xa5f733f) * -0x71a6b210 == 0x1ab59bbb;
        iVar8 = -0x6ed36b2e;
        local_bc = -0x6938656;
        goto LAB_0015c308;
      }
      if (local_bc == -0x6938656) {
        local_bc = -0x64467ec9;
      }
      else if (local_bc == -0xe3bf3d8) {
        _objc_release(param_3,uVar10);
        IVar9 = _objc_autoreleaseReturnValue(local_b8);
        return IVar9;
      }
    }
    else if (local_bc == -0x131fecf) {
      dataWithContentsOfFile_(param_1,(SEL)PTR_s_dataWithContentsOfFile__00489580,param_3);
      local_98 = _objc_retainAutoreleasedReturnValue();
      local_a0 = _objc_alloc(PTR__OBJC_CLASS___UIImage_0048c9c8);
      _objc_msgSend(PTR__OBJC_CLASS___UIScreen_0048cbe8,PTR_s_mainScreen_0048b080);
      auVar12 = _objc_retainAutoreleasedReturnValue();
      auVar11._8_8_ = auVar12._8_8_;
      auVar11._0_8_ = local_78;
      local_a8 = auVar12._0_8_;
      local_bc = 0x6a850c38;
    }
    else if (local_bc == 0x186aed7) {
      uVar1 = 0;
      if (DAT_004a498c != 0) {
        uVar1 = DAT_004a4988 / DAT_004a498c;
      }
      uVar1 = (uVar1 ^ 0x53a187d8) + 0x51d79eb3 & 0x4ba06c5b;
      _objc_release(local_98,uVar10);
      bVar7 = 0x2ea05cad < uVar1;
      bVar6 = uVar1 == 0x2ea05cae;
      local_bc = 0x7132f53e;
      iVar8 = -0x6c68b707;
      uVar10 = extraout_x1_02;
      goto LAB_0015bda0;
    }
  }
  if (0x4cc297f7 < local_bc) {
    if (local_bc < 0x6a850c38) {
      if (local_bc < 0x63518652) {
        if (local_bc == 0x4cc297f8) {
          local_79 = local_78 == 0;
          local_bc = 0x4cc297f8;
          if ((uint)((ulong)(DAT_004a4948 - DAT_004a494c | 0xe0f753b7) * 0x44e9e865 >> 0x3e) <
              0x5d5aeef6) {
            local_bc = -0x1ff669b5;
          }
          goto LAB_0015b6e0;
        }
        if (local_bc != 0x4f841dad) goto LAB_0015b6e0;
        uVar1 = ((DAT_004a4980 ^ DAT_004a4984) / 0x15ed4307 | 0x218bc0be) ^ 0x972c3ff8;
        bVar7 = 0xabd5d03c < uVar1;
        bVar6 = uVar1 == 0xabd5d03d;
        iVar8 = 0x7132f53e;
        local_bc = 0x186aed7;
      }
      else {
        if (local_bc == 0x63518652) {
          local_bc = 0xf0e025f;
          goto LAB_0015b6e0;
        }
        if (local_bc != 0x6554c610) {
          if (local_bc == 0x682104e4) {
            _objc_msgSend(local_a8,PTR_s_scale_0048b088);
            _objc_msgSend(local_a0,PTR_s_initWithData_scale__0048b090,local_98);
            _objc_release(local_a8);
            auVar11._8_8_ = extraout_x1;
            auVar11._0_8_ = local_78;
            local_bc = -0x1de2ccef;
          }
          goto LAB_0015b6e0;
        }
        uVar1 = (DAT_004a4920 ^ DAT_004a4924) + 0x9c585c7 & 0x3e100042;
        bVar7 = 0xaf4e7016 < uVar1;
        bVar6 = uVar1 == 0xaf4e7017;
        iVar8 = -0x2d039e8d;
        local_bc = 0x23d3a941;
      }
      if (!bVar7 || bVar6) {
        local_bc = iVar8;
      }
      goto LAB_0015b6e0;
    }
    if (local_bc < 0x7132f53e) {
      if (local_bc == 0x6a850c38) {
        local_bc = -0x76ae8d6a;
      }
      else if (local_bc == 0x6e377f60) {
        uVar1 = (DAT_004a4910 | DAT_004a4914 | 0xcb502ded) / 0x496cfc82 & 2;
        bVar7 = 0xdeb9940c < uVar1;
        bVar6 = uVar1 == 0xdeb9940d;
        local_bc = 0x78caad4b;
        iVar8 = 0x43294ed2;
        goto LAB_0015bda0;
      }
    }
    else if (local_bc == 0x7132f53e) {
      _objc_release(local_98,uVar10);
      auVar11._8_8_ = extraout_x1_06;
      auVar11._0_8_ = local_78;
      local_bc = 0x186aed7;
    }
    else if (local_bc == 0x78caad4b) {
      local_bc = 0x43294ed2;
    }
    else if (local_bc == 0x7c798b77) {
      uVar1 = DAT_004a4938 & DAT_004a493c;
      auVar11 = _objc_msgSend(param_3,local_70);
      bVar6 = 0x70e5a17f < ((uVar1 & 0x8b5e3e51) / 0x73dd1129) * 0x34d78280;
      iVar8 = 0x7c798b77;
      local_bc = 0x22b2f5e8;
LAB_0015be70:
      if (bVar6) {
        local_bc = iVar8;
      }
    }
    goto LAB_0015b6e0;
  }
  if (local_bc < 0x31e204a2) {
    if (0x1ee4e5ef < local_bc) {
      if (local_bc == 0x1ee4e5f0) {
        bVar6 = 0xf649f6ef < (DAT_004a4930 ^ DAT_004a4934 | 0x8aaf16f8) / 0x71278541 + 0xbb3915e6;
        local_bc = 0x7c798b77;
        iVar8 = 0x36ed0ad8;
        goto LAB_0015c0a8;
      }
      if (local_bc == 0x22b2f5e8) {
        local_bc = 0x170dfb8d;
      }
      else if (local_bc == 0x23d3a941) {
        local_bc = -0x2d039e8d;
      }
      goto LAB_0015b6e0;
    }
    if (local_bc == 0xf0e025f) {
      local_65 = param_3 == 0;
      local_bc = 0x6e377f60;
      goto LAB_0015b6e0;
    }
    if (local_bc != 0x170dfb8d) goto LAB_0015b6e0;
  }
  else {
    if (local_bc < 0x3afff394) {
      if (local_bc == 0x31e204a2) {
        iVar8 = 0x6554c610;
        cVar3 = local_65;
LAB_0015bf50:
        local_bc = -0xe3bf3d8;
        if (cVar3 == '\0') {
          local_bc = iVar8;
        }
        local_b8 = 0;
      }
      else if (local_bc == 0x36ed0ad8) {
        _objc_msgSend(param_3,local_70);
        auVar11._8_8_ = extraout_x1_01;
        auVar11._0_8_ = local_78;
        local_bc = 0x7c798b77;
      }
      goto LAB_0015b6e0;
    }
    if (local_bc != 0x3afff394) {
      if (local_bc == 0x43294ed2) {
        bVar6 = (DAT_004a4918 & DAT_004a491c & 0xa9e2dc27) / 0x60d8fc9a == 0xc0b50f22;
        iVar8 = 0x78caad4b;
        local_bc = 0x31e204a2;
        goto LAB_0015c308;
      }
      if (local_bc == 0x498cfd1f) {
        dataWithContentsOfFile_(param_1,(SEL)PTR_s_dataWithContentsOfFile__00489580,param_3);
        _objc_retainAutoreleasedReturnValue();
        _objc_alloc(PTR__OBJC_CLASS___UIImage_0048c9c8);
        _objc_msgSend(PTR__OBJC_CLASS___UIScreen_0048cbe8,PTR_s_mainScreen_0048b080);
        _objc_retainAutoreleasedReturnValue();
        auVar11._8_8_ = extraout_x1_00;
        auVar11._0_8_ = local_78;
        local_bc = -0x131fecf;
      }
      goto LAB_0015b6e0;
    }
  }
  local_bc = 0x4cc297f8;
  goto LAB_0015b6e0;
}



// ----- -[BubbleBoxAssets darkFileExistsWithName:] @ 0015c36c -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::darkFileExistsWithName_(ID param_1,SEL param_2,ID param_3)

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
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
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
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  int local_124;
  ID local_120;
  ID local_118;
  ID local_110;
  ID local_108;
  ID local_100;
  undefined *local_f8;
  char local_e9;
  ID local_e8;
  undefined *local_e0;
  char local_d1;
  ID local_d0;
  undefined *local_c8;
  char local_b9;
  undefined *local_b8;
  ID local_b0;
  undefined *local_a8;
  char local_99;
  ID local_98;
  undefined *local_90;
  char local_81;
  undefined *local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_e8;
  uVar14 = (uint)((ulong)((DAT_004a4990 & DAT_004a4994 ^ 0xbe37b9f4) >> 2) * 0x26030d9 >> 0x37);
  local_124 = -0x4e50cb97;
LAB_0015c444:
  uVar13 = auVar17._8_8_;
  local_e8 = auVar17._0_8_;
  auVar18._8_8_ = uVar13;
  auVar18._0_8_ = local_d0;
  auVar4._8_8_ = uVar13;
  auVar4._0_8_ = local_d0;
  auVar3._8_8_ = uVar13;
  auVar3._0_8_ = local_d0;
  auVar2._8_8_ = uVar13;
  auVar2._0_8_ = local_d0;
  auVar1._8_8_ = uVar13;
  auVar1._0_8_ = local_d0;
  if (-0x7ce13a3 < local_124) {
    if (local_124 < 0x36e0594f) {
      if (local_124 < 0x1ab65451) {
        if (local_124 < 0xb92a7cf) {
          if (local_124 < 0x739c175) {
            if (local_124 == -0x7ce13a2) {
              local_124 = -0x501511a8;
              local_108 = local_b0;
            }
            else if (local_124 == -0x7ab2429) {
              local_124 = 0x59c6f403;
            }
            else if (local_124 == -0x52b67b5) {
              local_124 = 0x34ae1076;
            }
          }
          else {
            if (local_124 == 0x739c175) {
              uVar16 = 0;
              if (DAT_004a4a1c != 0) {
                uVar16 = DAT_004a4a18 / DAT_004a4a1c;
              }
              local_a8 = PTR_s_stringByReplacingOccurrencesOfSt_00489d90;
              uVar16 = (uint)((ulong)(uVar16 * 0x2ed5ff8b + 0x443d195a) * 0x288552cf >> 0x3c);
              bVar12 = 0x1cd0d63e < uVar16;
              bVar11 = uVar16 == 0x1cd0d63f;
              local_124 = 0x739c175;
              iVar15 = 0x2fe6a7fc;
              auVar18 = auVar1;
              goto LAB_0015eb14;
            }
            if (local_124 == 0x93b6ba2) {
              local_124 = 0x1865925e;
            }
            else if (local_124 == 0xa169f06) {
              local_124 = -0x3e4947b1;
              local_110 = local_118;
            }
          }
        }
        else if (local_124 < 0x122b3aa9) {
          if (local_124 == 0xb92a7cf) {
            _objc_msgSend(param_3,local_f8,&PTR____CFConstantStringClassReference_004a2fa0,
                          &PTR____CFConstantStringClassReference_004a3000);
            _objc_retainAutoreleasedReturnValue();
            auVar17._8_8_ = extraout_x1_06;
            auVar17._0_8_ = local_e8;
            local_124 = 0x59c6f403;
          }
          else if (local_124 == 0xedea11f) {
            _objc_msgSend(param_3,local_b8,&PTR____CFConstantStringClassReference_004a2fa0);
            auVar17._8_8_ = extraout_x1_12;
            auVar17._0_8_ = local_e8;
          }
          else if (local_124 == 0xf57d298) {
            bVar11 = local_d1 == '\0';
            iVar15 = -0x59192a62;
            local_124 = 0x77bcdd9f;
LAB_0015eb9c:
            if (bVar11) {
              local_124 = iVar15;
            }
          }
        }
        else if (local_124 < 0x171e370b) {
          if (local_124 == 0x122b3aa9) {
            DAT_004a2f92 = DAT_004a2f8a ^ 0x5f;
            DAT_004a2f93 = DAT_004a2f8b ^ 0xa1;
            DAT_004a2f94 = DAT_004a2f8c ^ 0x8d;
            DAT_004a2f95 = DAT_004a2f8d ^ 0x92;
            DAT_004a2f96 = DAT_004a2f8e ^ 0x7e;
            DAT_004a2f97 = DAT_004a2f8f ^ 0x94;
            DAT_004a2f98 = DAT_004a2f90 ^ 99;
            DAT_004a2f99 = DAT_004a2f91 ^ 0x2d;
            DAT_004a2f85 = DAT_004a2f80 ^ 0x10;
            DAT_004a2f86 = DAT_004a2f81 ^ 0xed;
            DAT_004a2f87 = DAT_004a2f82 ^ 0xf5;
            DAT_004a2f88 = DAT_004a2f83 ^ 0x84;
            DAT_004a2f89 = DAT_004a2f84 ^ 0x44;
            local_124 = 0x31f4e8f6;
          }
          else if (local_124 == 0x14efe1ee) {
            local_124 = -0x52bc4967;
          }
        }
        else {
          if (local_124 == 0x171e370b) {
            uVar16 = 0;
            if (DAT_004a499c != 0) {
              uVar16 = DAT_004a4998 / DAT_004a499c;
            }
            local_70 = DAT_004d148c;
            bVar11 = 0x4e2be451 < (uVar16 | 0x732efef5) * 0x382117ae;
            local_124 = -0x1ef680d0;
            iVar15 = 0x48d1f2f4;
            goto LAB_0015e940;
          }
          if (local_124 == 0x1865925e) {
            local_124 = -0x44e1fff8;
          }
        }
        goto LAB_0015c444;
      }
      if (local_124 < 0x2712330c) {
        if (local_124 < 0x22957f24) {
          if (local_124 == 0x1ab65451) {
            local_124 = -0x451df653;
          }
          else {
            if (local_124 == 0x1cf103d4) {
              bVar11 = local_71 == '\0';
              iVar15 = 0x34ae1076;
              local_124 = 0x1e3ba83e;
              goto LAB_0015eb9c;
            }
            if ((local_124 == 0x1e3ba83e) &&
               (local_124 = 0x122b3aa9,
               ((uint)((ulong)(DAT_004a49b0 | DAT_004a49b4) * 0x3c198e9b >> 0x3c) ^ 0xe247b643) *
               0x72a26a35 < 0xe573a6b5)) {
              local_124 = 0x31f4e8f6;
            }
          }
          goto LAB_0015c444;
        }
        if (local_124 != 0x22957f24) {
          if (local_124 == 0x22c6101d) {
            local_124 = 0x36e0594f;
          }
          else if (local_124 == 0x23948a04) {
            uVar16 = ((DAT_004a49a0 & DAT_004a49a4 ^ 0xa40d03c8) + 0x240e26a5) / 0x79b0b7f7;
            bVar12 = uVar16 < 0x497078ba;
            bVar11 = uVar16 == 0x497078b9;
            iVar15 = -0xf206904;
            local_124 = 0x2712330c;
            goto LAB_0015eb7c;
          }
          goto LAB_0015c444;
        }
        bVar11 = (DAT_004a49f0 * DAT_004a49f4 ^ 0x2480200U | 0x9d97f94f) == 0x6087cf0;
        local_124 = -0x480c1b4f;
        iVar15 = 0x59452515;
      }
      else {
        if (0x31f4e8f5 < local_124) {
          if (local_124 < 0x354ea1e2) {
            if (local_124 == 0x31f4e8f6) {
              DAT_004a2f92 = DAT_004a2f8a ^ 0x5f;
              DAT_004a2f93 = DAT_004a2f8b ^ 0xa1;
              DAT_004a2f94 = DAT_004a2f8c ^ 0x8d;
              DAT_004a2f95 = DAT_004a2f8d ^ 0x92;
              DAT_004a2f96 = DAT_004a2f8e ^ 0x7e;
              DAT_004a2f97 = DAT_004a2f8f ^ 0x94;
              DAT_004a2f98 = DAT_004a2f90 ^ 99;
              uVar16 = 0;
              if (DAT_004a49bc != 0) {
                uVar16 = DAT_004a49b8 / DAT_004a49bc;
              }
              DAT_004a2f99 = DAT_004a2f91 ^ 0x2d;
              DAT_004a2f85 = DAT_004a2f80 ^ 0x10;
              DAT_004a2f86 = DAT_004a2f81 ^ 0xed;
              DAT_004a2f87 = DAT_004a2f82 ^ 0xf5;
              DAT_004a2f88 = DAT_004a2f83 ^ 0x84;
              DAT_004a2f89 = DAT_004a2f84 ^ 0x44;
              local_72 = DAT_004a2f74;
              local_124 = 0x31f4e8f6;
              if ((uVar16 ^ 0x8c8d3b5) * -0x26468030 != -0x360a46b9) {
                local_124 = 0x1ab65451;
              }
            }
            else if (local_124 == 0x34ae1076) {
              bVar11 = (DAT_004a49d0 * DAT_004a49d4 & 0x225268b5U) * -0x60ee4934 == 0x79dbf9b6;
              local_124 = -0x3c08dae9;
              iVar15 = 0x4a10a347;
              goto LAB_0015df94;
            }
          }
          else {
            if (local_124 == 0x354ea1e2) {
              uVar16 = 0;
              if (DAT_004a4a44 != 0) {
                uVar16 = DAT_004a4a40 / DAT_004a4a44;
              }
              bVar11 = 0x9ee7cb5a < (uVar16 ^ 0x8288046 | 0xa5537b19) + 0xfd789b04;
              local_124 = 0x14efe1ee;
              goto LAB_0015ea24;
            }
            if (local_124 == 0x36d1d226) {
              local_d1 = _objc_msgSend(param_3,local_b8,
                                       &PTR____CFConstantStringClassReference_004a2fe0);
              auVar17._8_8_ = extraout_x1_04;
              auVar17._0_8_ = local_e8;
              local_124 = -0x67c22d0e;
            }
          }
          goto LAB_0015c444;
        }
        if (local_124 != 0x2712330c) {
          if (local_124 == 0x2f94eb3b) {
            local_124 = -0x70896d7c;
          }
          else if (local_124 == 0x2fe6a7fc) {
            local_124 = -0x61ac8187;
          }
          goto LAB_0015c444;
        }
        uVar16 = 0;
        if (DAT_004a49ac != 0) {
          uVar16 = DAT_004a49a8 / DAT_004a49ac;
        }
        bVar11 = (uVar16 + 0x6e313256 | 0x2191f42) == 0x78fae4fb;
        local_124 = -0xf206904;
        iVar15 = 0x1cf103d4;
      }
LAB_0015e82c:
      if (!bVar11) {
        local_124 = iVar15;
      }
      goto LAB_0015c444;
    }
    if (local_124 < 0x59452515) {
      if (local_124 < 0x43cadb7c) {
        if (local_124 < 0x3eddc8b2) {
          if (local_124 == 0x36e0594f) {
            local_124 = 0x3f93bc87;
            if (0x88cbedce < (DAT_004a4ad0 + DAT_004a4ad4 | 0xeeee4dcaU) + 0x5dc876a0) {
              local_124 = -0x68428083;
            }
          }
          else {
            if (local_124 == 0x3815af94) {
              uVar16 = (DAT_004a4a00 ^ DAT_004a4a04) + 0x98acb658 ^ 0x2022261 | 0x5dc5891e;
              bVar12 = 0x99f0aa2a < uVar16;
              bVar11 = uVar16 == 0x99f0aa2b;
              iVar15 = -0x6058bd9d;
              local_124 = 0x6be3dc87;
              goto LAB_0015eb7c;
            }
            if (local_124 == 0x3e5aafa1) {
              uVar16 = 0;
              if (DAT_004a4a94 != 0) {
                uVar16 = DAT_004a4a90 / DAT_004a4a94;
              }
              bVar11 = (uVar16 + 0x829ec5dc | 0x69e79263) == 0x67629e15;
              iVar15 = -0x5f15dae7;
              local_124 = 0x69187ae8;
LAB_0015cbac:
              if (!bVar11) {
                local_124 = iVar15;
              }
            }
          }
        }
        else if (local_124 == 0x3eddc8b2) {
          local_124 = 0x5634c3e9;
        }
        else if (local_124 == 0x3f93bc87) {
          local_124 = 0x3f93bc87;
          if (DAT_004a4ad8 - DAT_004a4adc != -0x67da3d9) {
            local_124 = -0x620e94b9;
          }
        }
        else if (local_124 == 0x4302a651) {
          local_f8 = PTR_s_stringByReplacingOccurrencesOfSt_00489d90;
          local_124 = -0x7ab2429;
        }
        goto LAB_0015c444;
      }
      if (local_124 < 0x4a10a347) {
        if (local_124 == 0x43cadb7c) {
          DAT_004a2f7f = local_73 ^ 0xae;
          DAT_004a2f6e = DAT_004a2f68 ^ 0x4c;
          DAT_004a2f6f = DAT_004a2f69 ^ 0xdc;
          DAT_004a2f70 = DAT_004a2f6a ^ 0xfa;
          DAT_004a2f71 = DAT_004a2f6b ^ 0xea;
          DAT_004a2f72 = DAT_004a2f6c ^ 0x4b;
          DAT_004a2f73 = DAT_004a2f6d ^ 0x14;
          DAT_004a2f5b = DAT_004a2f4e ^ 0xc6;
          DAT_004a2f5c = DAT_004a2f4f ^ 0x37;
          DAT_004a2f5d = DAT_004a2f50 ^ 7;
          DAT_004a2f5e = DAT_004a2f51 ^ 0x65;
          DAT_004a2f5f = DAT_004a2f52 ^ 0xe0;
          DAT_004a2f60 = DAT_004a2f53 ^ 0x78;
          DAT_004a2f61 = DAT_004a2f54 ^ 0xf8;
          DAT_004a2f62 = DAT_004a2f55 ^ 0x90;
          DAT_004a2f63 = DAT_004a2f56 ^ 0xcc;
          DAT_004a2f64 = DAT_004a2f57 ^ 0x4d;
          DAT_004a2f65 = DAT_004a2f58 ^ 0xa6;
          DAT_004a2f66 = DAT_004a2f59 ^ 0xf0;
          DAT_004a2f67 = DAT_004a2f5a ^ 0x14;
          DAT_004a2f46 = DAT_004a2f3e ^ 0x82;
          DAT_004a2f47 = DAT_004a2f3f ^ 0xdc;
          DAT_004a2f48 = DAT_004a2f40 ^ 0xe7;
          DAT_004a2f49 = DAT_004a2f41 ^ 0x56;
          DAT_004a2f4a = DAT_004a2f42 ^ 0x4d;
          DAT_004a2f4b = DAT_004a2f43 ^ 0x5e;
          DAT_004a2f4c = DAT_004a2f44 ^ 0x49;
          DAT_004a2f4d = DAT_004a2f45 ^ 0x6a;
          DAT_004a2f31 = DAT_004a2f24 ^ 0x4f;
          DAT_004a2f32 = DAT_004a2f25 ^ 0x27;
          DAT_004a2f33 = DAT_004a2f26 ^ 0x7b;
          DAT_004a2f34 = DAT_004a2f27 ^ 0xf9;
          DAT_004a2f35 = DAT_004a2f28 ^ 0x20;
          DAT_004a2f36 = DAT_004a2f29 ^ 0xde;
          DAT_004a2f37 = DAT_004a2f2a ^ 0xb7;
          DAT_004a2f38 = DAT_004a2f2b ^ 0x36;
          DAT_004a2f39 = DAT_004a2f2c ^ 0x91;
          DAT_004a2f3a = DAT_004a2f2d ^ 0xf1;
          DAT_004a2f3b = DAT_004a2f2e ^ 0xe4;
          DAT_004a2f3c = DAT_004a2f2f ^ 0xe6;
          DAT_004a2f3d = DAT_004a2f30 ^ 0x96;
          DAT_004a2d69 = DAT_004a2d64 ^ 0xbe;
          DAT_004a2d6a = DAT_004a2d65 ^ 0xe9;
          DAT_004a2d6b = DAT_004a2d66 ^ 0xf5;
          DAT_004a2d6c = DAT_004a2d67 ^ 0xbc;
          DAT_004a2d6d = DAT_004a2d68 ^ 0xc1;
          DAT_004a2f1a = DAT_004a2f10 ^ 0x4b;
          DAT_004a2f1b = DAT_004a2f11 ^ 0xd2;
          DAT_004a2f1c = DAT_004a2f12 ^ 0x75;
          DAT_004a2f1d = DAT_004a2f13 ^ 0x28;
          DAT_004a2f1e = DAT_004a2f14 ^ 0x3e;
          DAT_004a2f1f = DAT_004a2f15 ^ 0xb;
          DAT_004a2f20 = DAT_004a2f16 ^ 0x4a;
          DAT_004a2f21 = DAT_004a2f17 ^ 0x22;
          DAT_004a2f22 = DAT_004a2f18 ^ 0xb6;
          DAT_004a2f23 = DAT_004a2f19 ^ 0x69;
          bVar11 = (DAT_004a49c8 | DAT_004a49cc) * 0x11057107 == -0x5ef9eb0d;
          local_124 = 0x78d42390;
          iVar15 = -0x52b67b5;
          goto LAB_0015e82c;
        }
        if (local_124 == 0x48d1f2f4) {
          local_124 = -0xd83d2b7;
        }
        else if (local_124 == 0x495a41cc) {
          _objc_msgSend(param_3,local_b8,&PTR____CFConstantStringClassReference_004a3040);
          auVar17._8_8_ = extraout_x1_01;
          auVar17._0_8_ = local_e8;
          local_124 = -0xbcfdd3a;
        }
        goto LAB_0015c444;
      }
      if (local_124 < 0x50025b69) {
        if (local_124 == 0x4a10a347) {
          DAT_004d148c = 1;
          local_124 = -0x3c08dae9;
        }
        else if (local_124 == 0x4e76d294) {
          local_124 = -0x278d136b;
        }
        goto LAB_0015c444;
      }
      if (local_124 == 0x50025b69) {
        local_124 = 0x22957f24;
        goto LAB_0015c444;
      }
      if (local_124 != 0x5634c3e9) goto LAB_0015c444;
      uVar16 = 0;
      if (DAT_004a4a8c != 0) {
        uVar16 = DAT_004a4a88 / DAT_004a4a8c;
      }
      local_e0 = PTR_s_stringByReplacingOccurrencesOfSt_00489d90;
      bVar11 = 0x656accbf < ((uVar16 + 0x9ee4025c ^ 0xc00022a2) & 0xe00d26a7);
      iVar15 = 0x3eddc8b2;
      local_124 = 0x649fcb12;
    }
    else {
      if (local_124 < 0x6bfec4c6) {
        if (local_124 < 0x649fcb12) {
          if (local_124 == 0x59452515) {
            bVar11 = ((DAT_004a49f8 & DAT_004a49fc ^ 0xb1aac38) + 0x91add06d | 0xd29c98f9) ==
                     0xfd37c7e3;
            iVar15 = -0x480c1b4f;
            local_124 = -0x2a235863;
            goto LAB_0015eb9c;
          }
          if (local_124 == 0x59c6f403) {
            uVar16 = DAT_004a4ac8 + DAT_004a4acc;
            _objc_msgSend(param_3,local_f8,&PTR____CFConstantStringClassReference_004a2fa0,
                          &PTR____CFConstantStringClassReference_004a3000);
            auVar18 = _objc_retainAutoreleasedReturnValue();
            auVar7._8_8_ = auVar18._8_8_;
            auVar7._0_8_ = local_e8;
            auVar17._8_8_ = auVar18._8_8_;
            auVar17._0_8_ = local_e8;
            local_100 = auVar18._0_8_;
            local_124 = 0x22c6101d;
            if (0x4dbe66eb < ((uint)((ulong)uVar16 * 0x1afc8bc7 >> 0x3b) + 0x2da32337 & 0x2021001f))
            {
              local_124 = 0x59c6f403;
              auVar17 = auVar7;
            }
          }
          else if (local_124 == 0x6003d68f) {
            bVar11 = local_b9 == '\0';
            local_124 = 0x354ea1e2;
            iVar15 = 0x36d1d226;
LAB_0015df94:
            if (bVar11) {
              local_124 = iVar15;
            }
          }
        }
        else if (local_124 == 0x649fcb12) {
          local_124 = 0x3e5aafa1;
        }
        else if (local_124 == 0x69187ae8) {
          _objc_msgSend(param_3,local_e0,&PTR____CFConstantStringClassReference_004a2fe0,
                        &PTR____CFConstantStringClassReference_004a2fc0);
          _objc_retainAutoreleasedReturnValue();
          auVar17._8_8_ = extraout_x1_11;
          auVar17._0_8_ = local_e8;
          local_124 = -0x5f15dae7;
        }
        else if (local_124 == 0x6be3dc87) {
          local_124 = -0x6058bd9d;
        }
        goto LAB_0015c444;
      }
      if (local_124 < 0x75f068f0) {
        if (local_124 == 0x6bfec4c6) {
          uVar13 = _objc_retain(param_3);
          _objc_msgSend(uVar13,PTR_s_containsString__0048b098,
                        &PTR____CFConstantStringClassReference_004a3060);
          auVar17._8_8_ = extraout_x1_07;
          auVar17._0_8_ = local_e8;
          local_124 = -0x4816bc43;
          goto LAB_0015c444;
        }
        if (local_124 == 0x6cd885dc) {
          local_b8 = PTR_s_hasSuffix__0048aba8;
          local_124 = -0x11b6f4b1;
          goto LAB_0015c444;
        }
        if (local_124 != 0x718bf42b) goto LAB_0015c444;
        uVar16 = DAT_004a4aa8 - DAT_004a4aac;
        local_e9 = _objc_msgSend(param_3,local_b8,&PTR____CFConstantStringClassReference_004a2fa0);
        auVar17._8_8_ = extraout_x1_02;
        auVar17._0_8_ = local_e8;
        bVar11 = 0x5e5c7049 <
                 (uint)((ulong)((uVar16 & 0xc579ec68 | 0x40298028) >> 3) * 0x4b10d49 >> 0x36);
        iVar15 = 0xedea11f;
        local_124 = 0x4e76d294;
      }
      else {
        if (local_124 < 0x77bcdd9f) {
          if (local_124 == 0x75f068f0) {
            bVar11 = ((DAT_004a4a60 | DAT_004a4a64 | 0x77f278f1) / 0x6b87346e) * -0x6b3c0c4a ==
                     -0x609b9907;
            local_124 = 0x1865925e;
            iVar15 = 0x93b6ba2;
            goto LAB_0015df94;
          }
          if (local_124 == 0x76310e9b) {
            local_124 = 0x4302a651;
            if (local_e9 == '\0') {
              local_124 = -0x3e4947b1;
            }
            local_110 = 0;
          }
          goto LAB_0015c444;
        }
        if (local_124 != 0x77bcdd9f) {
          if (local_124 == 0x78d42390) {
            DAT_004a2f7f = local_73 ^ 0xae;
            DAT_004a2f6e = DAT_004a2f68 ^ 0x4c;
            DAT_004a2f6f = DAT_004a2f69 ^ 0xdc;
            DAT_004a2f70 = DAT_004a2f6a ^ 0xfa;
            DAT_004a2f71 = DAT_004a2f6b ^ 0xea;
            DAT_004a2f72 = DAT_004a2f6c ^ 0x4b;
            DAT_004a2f73 = DAT_004a2f6d ^ 0x14;
            DAT_004a2f5b = DAT_004a2f4e ^ 0xc6;
            DAT_004a2f5c = DAT_004a2f4f ^ 0x37;
            DAT_004a2f5d = DAT_004a2f50 ^ 7;
            DAT_004a2f5e = DAT_004a2f51 ^ 0x65;
            DAT_004a2f5f = DAT_004a2f52 ^ 0xe0;
            DAT_004a2f60 = DAT_004a2f53 ^ 0x78;
            DAT_004a2f61 = DAT_004a2f54 ^ 0xf8;
            DAT_004a2f62 = DAT_004a2f55 ^ 0x90;
            DAT_004a2f63 = DAT_004a2f56 ^ 0xcc;
            DAT_004a2f64 = DAT_004a2f57 ^ 0x4d;
            DAT_004a2f65 = DAT_004a2f58 ^ 0xa6;
            DAT_004a2f66 = DAT_004a2f59 ^ 0xf0;
            DAT_004a2f67 = DAT_004a2f5a ^ 0x14;
            DAT_004a2f46 = DAT_004a2f3e ^ 0x82;
            DAT_004a2f47 = DAT_004a2f3f ^ 0xdc;
            DAT_004a2f48 = DAT_004a2f40 ^ 0xe7;
            DAT_004a2f49 = DAT_004a2f41 ^ 0x56;
            DAT_004a2f4a = DAT_004a2f42 ^ 0x4d;
            DAT_004a2f4b = DAT_004a2f43 ^ 0x5e;
            DAT_004a2f4c = DAT_004a2f44 ^ 0x49;
            DAT_004a2f4d = DAT_004a2f45 ^ 0x6a;
            DAT_004a2f31 = DAT_004a2f24 ^ 0x4f;
            DAT_004a2f32 = DAT_004a2f25 ^ 0x27;
            DAT_004a2f33 = DAT_004a2f26 ^ 0x7b;
            DAT_004a2f34 = DAT_004a2f27 ^ 0xf9;
            DAT_004a2f35 = DAT_004a2f28 ^ 0x20;
            DAT_004a2f36 = DAT_004a2f29 ^ 0xde;
            DAT_004a2f37 = DAT_004a2f2a ^ 0xb7;
            DAT_004a2f38 = DAT_004a2f2b ^ 0x36;
            DAT_004a2f39 = DAT_004a2f2c ^ 0x91;
            DAT_004a2f3a = DAT_004a2f2d ^ 0xf1;
            DAT_004a2f3b = DAT_004a2f2e ^ 0xe4;
            DAT_004a2f3c = DAT_004a2f2f ^ 0xe6;
            DAT_004a2f3d = DAT_004a2f30 ^ 0x96;
            DAT_004a2d69 = DAT_004a2d64 ^ 0xbe;
            DAT_004a2d6a = DAT_004a2d65 ^ 0xe9;
            DAT_004a2d6b = DAT_004a2d66 ^ 0xf5;
            DAT_004a2d6c = DAT_004a2d67 ^ 0xbc;
            DAT_004a2d6d = DAT_004a2d68 ^ 0xc1;
            DAT_004a2f1a = DAT_004a2f10 ^ 0x4b;
            DAT_004a2f1b = DAT_004a2f11 ^ 0xd2;
            DAT_004a2f1c = DAT_004a2f12 ^ 0x75;
            DAT_004a2f1d = DAT_004a2f13 ^ 0x28;
            DAT_004a2f1e = DAT_004a2f14 ^ 0x3e;
            DAT_004a2f1f = DAT_004a2f15 ^ 0xb;
            DAT_004a2f20 = DAT_004a2f16 ^ 0x4a;
            DAT_004a2f21 = DAT_004a2f17 ^ 0x22;
            DAT_004a2f22 = DAT_004a2f18 ^ 0xb6;
            DAT_004a2f23 = DAT_004a2f19 ^ 0x69;
            local_124 = 0x43cadb7c;
          }
          goto LAB_0015c444;
        }
        bVar11 = 0x2f05ab13 < ((DAT_004a4a80 | DAT_004a4a84) + 0x1842cc14 ^ 0x7db84b62);
        iVar15 = 0x5634c3e9;
        local_124 = 0x3eddc8b2;
      }
    }
LAB_0015df1c:
    if (bVar11) {
      local_124 = iVar15;
    }
    goto LAB_0015c444;
  }
  if (-0x44e1fff9 < local_124) {
    if (-0x25726561 < local_124) {
      if (local_124 < -0x18448c13) {
        if (local_124 < -0x1ef680d0) {
          if (local_124 == -0x25726560) {
            local_99 = _objc_msgSend(param_3,local_80,
                                     &PTR____CFConstantStringClassReference_004a30a0);
            auVar17._8_8_ = extraout_x1_05;
            auVar17._0_8_ = local_e8;
          }
          else if (local_124 == -0x2558b541) {
            _objc_release(param_3,uVar13);
            _objc_autoreleaseReturnValue(local_120);
            auVar17._8_8_ = extraout_x1_09;
            auVar17._0_8_ = local_e8;
            local_124 = -0x726caece;
          }
          else if (local_124 == -0x20e3b419) {
            local_124 = -0x7f0834b4;
          }
        }
        else if (local_124 == -0x1ef680d0) {
          local_124 = 0x171e370b;
        }
        else if (local_124 == -0x19661d4e) {
          _objc_msgSend(param_3,local_a8,&PTR____CFConstantStringClassReference_004a30a0,
                        &PTR____CFConstantStringClassReference_004a3080);
          _objc_retainAutoreleasedReturnValue();
          auVar17._8_8_ = extraout_x1_10;
          auVar17._0_8_ = local_e8;
          local_124 = -0x75acd3ea;
        }
        else if (local_124 == -0x18e7b413) {
          local_124 = -0x77349e2e;
        }
      }
      else {
        if (-0x11b6f4b2 < local_124) {
          if (local_124 < -0xd83d2b7) {
            if (local_124 != -0x11b6f4b1) {
              if (local_124 == -0xf206904) {
                local_124 = 0x2712330c;
              }
              goto LAB_0015c444;
            }
            uVar16 = (DAT_004a4a30 - DAT_004a4a34) + 0xfe330b05;
            bVar12 = 0xe24284be < uVar16;
            bVar11 = uVar16 == 0xe24284bf;
            iVar15 = -0xbcfdd3a;
            local_124 = 0x495a41cc;
          }
          else {
            if (local_124 == -0xd83d2b7) {
              local_71 = local_70 == 0;
              local_124 = 0x23948a04;
              goto LAB_0015c444;
            }
            if (local_124 != -0xbcfdd3a) goto LAB_0015c444;
            uVar16 = (DAT_004a4a38 - DAT_004a4a3c & 0x2def91f3U) * 0x2cbba3b6 + 0x3c579300;
            local_b9 = _objc_msgSend(param_3,local_b8,
                                     &PTR____CFConstantStringClassReference_004a3040);
            bVar12 = 0xdef76395 < uVar16;
            bVar11 = uVar16 == 0xdef76396;
            iVar15 = -0xbcfdd3a;
            local_124 = -0x27c163f7;
            uVar13 = extraout_x1_03;
          }
LAB_0015eb7c:
          auVar10._8_8_ = uVar13;
          auVar10._0_8_ = local_e8;
          auVar17._8_8_ = uVar13;
          auVar17._0_8_ = local_e8;
          if (!bVar12 || bVar11) {
            local_124 = iVar15;
            auVar17 = auVar10;
          }
          goto LAB_0015c444;
        }
        if (local_124 == -0x18448c13) {
          bVar11 = 0xdf5d2398 < (DAT_004a49e0 * DAT_004a49e4 + 0x2fcb3f99U) / 0x58b8e7b6;
          local_124 = -0x4816bc43;
          iVar15 = 0x6bfec4c6;
          goto LAB_0015e940;
        }
        if (local_124 == -0x179b156c) {
          local_124 = -0x501511a8;
          local_108 = local_e8;
        }
        else if (local_124 == -0x14aab76e) {
          bVar11 = (DAT_004a4a50 ^ DAT_004a4a54) * 0x6e9d0fcb == 0x4e7e6895;
          iVar15 = -0x35829b2f;
          local_124 = -0x4dad810f;
          goto LAB_0015eb9c;
        }
      }
      goto LAB_0015c444;
    }
    if (local_124 < -0x33b53e56) {
      if (local_124 < -0x3c08dae9) {
        if (local_124 < -0x3f0fe035) {
          if (local_124 == -0x44e1fff8) {
            local_124 = -0x501511a8;
            local_108 = local_d0;
          }
          else if (local_124 == -0x425307fd) {
            local_124 = -0x501511a8;
            local_108 = local_98;
          }
        }
        else if (local_124 == -0x3e4947b1) {
          local_120 = local_110;
          local_124 = -0x726caece;
          if (((DAT_004a4af0 & DAT_004a4af4 & 0x1c31c220) * 0x3bb65b4c | 0x706df01b) < 0x3690e891) {
            local_124 = -0x2558b541;
          }
        }
        else if (local_124 == -0x3f0fe035) {
          return local_120;
        }
      }
      else {
        if (local_124 == -0x3c08dae9) {
          uVar16 = DAT_004a49d8 * DAT_004a49dc * 0x2d6d115a + 0xced9b080;
          DAT_004d148c = 1;
          bVar12 = 0xc9a9c633 < uVar16;
          bVar11 = uVar16 == 0xc9a9c634;
          local_124 = 0x4a10a347;
          iVar15 = -0x4d7ec415;
          auVar18 = auVar4;
          goto LAB_0015eb14;
        }
        if (local_124 == -0x391a9cda) {
          local_124 = -0x14aab76e;
        }
        else if (local_124 == -0x35829b2f) {
          _objc_msgSend(param_3,local_c8,&PTR____CFConstantStringClassReference_004a3040,
                        &PTR____CFConstantStringClassReference_004a3020);
          _objc_retainAutoreleasedReturnValue();
          auVar17._8_8_ = extraout_x1_00;
          auVar17._0_8_ = local_e8;
          local_124 = -0x4dad810f;
        }
      }
      goto LAB_0015c444;
    }
    if (local_124 < -0x2a235863) {
      if (local_124 == -0x33b53e56) {
        bVar11 = local_99 == '\0';
        local_124 = -0x6737135c;
        iVar15 = 0x6cd885dc;
        goto LAB_0015df94;
      }
      if (local_124 == -0x2fb060d1) {
        local_124 = -0x724a214d;
      }
      else if (local_124 == -0x2ca48045) {
        local_124 = -0x7ce13a2;
      }
      goto LAB_0015c444;
    }
    if (local_124 == -0x2a235863) {
      bVar11 = local_81 == '\0';
      iVar15 = -0x25726560;
      local_124 = 0x3815af94;
      goto LAB_0015eb9c;
    }
    if (local_124 == -0x27c163f7) {
      local_124 = 0x6003d68f;
      goto LAB_0015c444;
    }
    if (local_124 != -0x278d136b) goto LAB_0015c444;
    uVar16 = (DAT_004a4ab0 ^ DAT_004a4ab4) + 0x415c68f3 & 0x7dda4b7a ^ 0x1a2f3b00;
    bVar12 = 0xf887bb9b < uVar16;
    bVar11 = uVar16 == 0xf887bb9c;
    local_124 = -0x20e3b419;
    iVar15 = -0x7f0834b4;
LAB_0015eb14:
    auVar8._8_8_ = auVar18._8_8_;
    auVar8._0_8_ = local_e8;
    auVar17._8_8_ = auVar18._8_8_;
    auVar17._0_8_ = local_e8;
    local_d0 = auVar18._0_8_;
    if (!bVar12 || bVar11) {
      local_124 = iVar15;
      auVar17 = auVar8;
    }
    goto LAB_0015c444;
  }
  if (local_124 < -0x61ac8187) {
    if (-0x71c0b90f < local_124) {
      if (local_124 < -0x67c22d0e) {
        if (local_124 == -0x71c0b90e) {
          local_124 = 0x75f068f0;
        }
        else {
          if (local_124 == -0x70896d7c) {
            uVar16 = DAT_004a4a78 + DAT_004a4a7c & 0x1a100215U ^ 0xa8104355;
            bVar12 = 0x2d2b8d8e < uVar16;
            bVar11 = uVar16 == 0x2d2b8d8f;
            iVar15 = 0x2f94eb3b;
            local_124 = 0xf57d298;
            goto LAB_0015eb7c;
          }
          if (local_124 == -0x68428083) {
            local_124 = 0x3f93bc87;
          }
        }
      }
      else if (local_124 < -0x6689c4d5) {
        if (local_124 == -0x67c22d0e) {
          bVar11 = (DAT_004a4a70 & DAT_004a4a74) * -0x6818021e == -0x196410f6;
          local_124 = -0x70896d7c;
          iVar15 = 0x2f94eb3b;
          goto LAB_0015df94;
        }
        if (local_124 == -0x6737135c) {
          uVar16 = 0;
          if (DAT_004a4a14 != 0) {
            uVar16 = DAT_004a4a10 / DAT_004a4a14;
          }
          bVar11 = (uVar16 + 0x53c590f5 & 0x1e216bda) == 0xda7f0502;
          iVar15 = 0x739c175;
          local_124 = -0x76e1ae69;
          goto LAB_0015cbac;
        }
      }
      else {
        if (local_124 == -0x6689c4d5) {
          bVar11 = 0xfe656a6 < ((DAT_004a49c0 - DAT_004a49c4) + 0x46489201U & 0x1100440);
          iVar15 = 0x78d42390;
          local_124 = 0x43cadb7c;
          goto LAB_0015df1c;
        }
        if (local_124 == -0x620e94b9) {
          local_124 = -0x501511a8;
          local_108 = local_100;
        }
      }
      goto LAB_0015c444;
    }
    if (-0x75acd3eb < local_124) {
      if (local_124 == -0x75acd3ea) {
        uVar16 = DAT_004a4a28 ^ DAT_004a4a2c;
        _objc_msgSend(param_3,local_a8,&PTR____CFConstantStringClassReference_004a30a0,
                      &PTR____CFConstantStringClassReference_004a3080);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        auVar5._8_8_ = auVar18._8_8_;
        auVar5._0_8_ = local_e8;
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._0_8_ = local_e8;
        local_b0 = auVar18._0_8_;
        local_124 = -0x75acd3ea;
        if ((uVar16 * 0x3745ebe5 | 0x70bdb235) + 0x13d55820 < 0x8cdc7e1e) {
          local_124 = -0x2ca48045;
          auVar17 = auVar5;
        }
      }
      else if (local_124 == -0x726caece) {
        uVar16 = 0;
        if (DAT_004a4afc != 0) {
          uVar16 = DAT_004a4af8 / DAT_004a4afc;
        }
        _objc_release(param_3,uVar13);
        _objc_autoreleaseReturnValue(local_120);
        auVar6._8_8_ = extraout_x1_08;
        auVar6._0_8_ = local_e8;
        auVar17._8_8_ = extraout_x1_08;
        auVar17._0_8_ = local_e8;
        local_124 = -0x3f0fe035;
        if (0xf8270856 < ((uVar16 + 0x320519e) / 0xea181e | 0xe8486348)) {
          local_124 = -0x726caece;
          auVar17 = auVar6;
        }
      }
      else if (local_124 == -0x724a214d) {
        local_124 = 0xa169f06;
      }
      goto LAB_0015c444;
    }
    if (local_124 != -0x7f0834b4) {
      if (local_124 == -0x77349e2e) {
        _objc_msgSend(param_3,local_90,&PTR____CFConstantStringClassReference_004a3060,
                      &PTR____CFConstantStringClassReference_004a3080);
        auVar18 = _objc_retainAutoreleasedReturnValue();
        auVar17._8_8_ = auVar18._8_8_;
        auVar17._0_8_ = local_e8;
        local_98 = auVar18._0_8_;
        local_124 = -0x425307fd;
      }
      else if (local_124 == -0x76e1ae69) {
        local_124 = 0x739c175;
      }
      goto LAB_0015c444;
    }
    uVar16 = 0;
    if (DAT_004a4abc != 0) {
      uVar16 = DAT_004a4ab8 / DAT_004a4abc;
    }
    bVar11 = 0x9ed06e4c < ((uVar16 ^ 0x3d35175a) * -0x3de32cf1 | 0xc1566873);
    local_124 = -0x20e3b419;
    iVar15 = 0x76310e9b;
  }
  else if (local_124 < -0x501511a8) {
    if (-0x59192a63 < local_124) {
      if (local_124 == -0x59192a62) {
        local_124 = 0x718bf42b;
      }
      else if (local_124 == -0x52bc4967) {
        local_c8 = PTR_s_stringByReplacingOccurrencesOfSt_00489d90;
        bVar11 = 0xcf880130 < ((DAT_004a4a48 | DAT_004a4a4c) & 0x189655f2 | 0x9211b0) + 0x2abee404;
        local_124 = -0x391a9cda;
LAB_0015ea24:
        if (bVar11) {
          local_124 = -0x52bc4967;
        }
      }
      else if (local_124 == -0x5053ad9c) {
        local_124 = -0x179b156c;
      }
      goto LAB_0015c444;
    }
    if (local_124 == -0x61ac8187) {
      uVar16 = (DAT_004a4a20 & DAT_004a4a24) * 0x74e372ca + 0xb5cc0c82;
      bVar12 = 0x106e549d < uVar16;
      bVar11 = uVar16 == 0x106e549e;
      local_124 = -0x75acd3ea;
      iVar15 = -0x19661d4e;
      auVar18 = auVar3;
      goto LAB_0015eb14;
    }
    if (local_124 != -0x6058bd9d) {
      if (local_124 == -0x5f15dae7) {
        uVar16 = DAT_004a4a98 - DAT_004a4a9c;
        _objc_msgSend(param_3,local_e0,&PTR____CFConstantStringClassReference_004a2fe0,
                      &PTR____CFConstantStringClassReference_004a2fc0);
        auVar17 = _objc_retainAutoreleasedReturnValue();
        bVar11 = 0x3266561e < (uVar16 / 0x3d1bf42e + 0x29ed3ed7 & 0x20881ac1);
        iVar15 = 0x69187ae8;
        local_124 = -0x5053ad9c;
        goto LAB_0015df1c;
      }
      goto LAB_0015c444;
    }
    local_90 = PTR_s_stringByReplacingOccurrencesOfSt_00489d90;
    bVar11 = 0x91340cd2 < ((DAT_004a4a08 ^ DAT_004a4a0c ^ 0xfd1fba5f) + 0x7e597b42 ^ 0xa26745f7);
    local_124 = 0x6be3dc87;
    iVar15 = -0x18e7b413;
  }
  else {
    if (local_124 < -0x4d7ec415) {
      if (local_124 == -0x501511a8) {
        local_118 = local_108;
        uVar16 = ((DAT_004a4ae0 - DAT_004a4ae4 | 0x201d4af7U) ^ 0xd6150c83) * 0x7e8b4c79;
        bVar12 = 0xdd1e96cc < uVar16;
        bVar11 = uVar16 == 0xdd1e96cd;
        iVar15 = -0x2fb060d1;
        local_124 = -0x724a214d;
        goto LAB_0015eb7c;
      }
      if (local_124 != -0x4e50cb97) {
        if (local_124 == -0x4dad810f) {
          uVar16 = (DAT_004a4a58 * DAT_004a4a5c | 0x95bbd7cfU) + 0x30afa335;
          _objc_msgSend(param_3,local_c8,&PTR____CFConstantStringClassReference_004a3040,
                        &PTR____CFConstantStringClassReference_004a3020);
          auVar18 = _objc_retainAutoreleasedReturnValue();
          bVar12 = 0xc0caac73 < uVar16;
          bVar11 = uVar16 == 0xc0caac74;
          local_124 = -0x35829b2f;
          iVar15 = -0x71c0b90e;
          goto LAB_0015eb14;
        }
        goto LAB_0015c444;
      }
      bVar12 = 0x8ea120d3 < uVar14;
      bVar11 = uVar14 == 0x8ea120d4;
      local_124 = -0x1ef680d0;
      iVar15 = 0x171e370b;
      auVar18 = auVar2;
      goto LAB_0015eb14;
    }
    if (-0x480c1b50 < local_124) {
      if (local_124 == -0x480c1b4f) {
        local_124 = 0x59452515;
      }
      else if (local_124 == -0x451df653) {
        DAT_004a2f7a = local_72 ^ 0x4a;
        DAT_004a2f7b = DAT_004a2f75 ^ 0x61;
        DAT_004a2f7c = DAT_004a2f76 ^ 0xed;
        DAT_004a2f7d = DAT_004a2f77 ^ 0xe5;
        DAT_004a2f7e = DAT_004a2f78 ^ 0x2d;
        local_73 = DAT_004a2f79;
        local_124 = -0x6689c4d5;
      }
      goto LAB_0015c444;
    }
    if (local_124 == -0x4d7ec415) {
      local_124 = -0x18448c13;
      goto LAB_0015c444;
    }
    if (local_124 != -0x4816bc43) goto LAB_0015c444;
    uVar16 = DAT_004a49e8 * DAT_004a49ec;
    uVar13 = _objc_retain(param_3);
    local_80 = PTR_s_containsString__0048b098;
    local_81 = _objc_msgSend(uVar13,PTR_s_containsString__0048b098,
                             &PTR____CFConstantStringClassReference_004a3060);
    bVar11 = 0xc55aa3e5 < (uVar16 & 0x9f824c85 ^ 0x1d81d8d5) + 0x2ddbae8f;
    local_124 = -0x4816bc43;
    iVar15 = 0x50025b69;
    uVar13 = extraout_x1;
  }
LAB_0015e940:
  auVar9._8_8_ = uVar13;
  auVar9._0_8_ = local_e8;
  auVar17._8_8_ = uVar13;
  auVar17._0_8_ = local_e8;
  if (bVar11) {
    local_124 = iVar15;
    auVar17 = auVar9;
  }
  goto LAB_0015c444;
}



// ----- -[BubbleBoxAssets getImageWithName:] @ 0015ede4 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::getImageWithName_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined1 auVar8 [16];
  int local_94;
  ID local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined *local_78;
  ID local_70;
  
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_88;
  iVar1 = DAT_004a4b00 + DAT_004a4b04;
  local_94 = 0x189de8a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            puVar6 = PTR_s_darkFileExistsWithName__0048b0a0;
            local_88 = auVar8._0_8_;
            if (0x88272b3 < local_94) break;
            if (local_94 < -0xfda6317) {
              if (local_94 == -0x7f914452) {
                uVar3 = 0;
                if (DAT_004a4b1c != 0) {
                  uVar3 = DAT_004a4b18 / DAT_004a4b1c;
                }
                IVar2 = param_3;
                if (local_70 != 0) {
                  IVar2 = local_70;
                }
                _objc_msgSend(param_1,local_80,IVar2);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _objc_release(param_3);
                _objc_msgSend(local_78,PTR_s_imageInLightMode_darkMode__0048b0b0,local_88,uVar7);
                local_90 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                auVar5._8_8_ = extraout_x1_01;
                auVar5._0_8_ = local_88;
                auVar8._8_8_ = extraout_x1_01;
                auVar8._0_8_ = local_88;
                local_94 = 0x14049c37;
                if (((uint)((ulong)(uVar3 + 0x23e68131) * 0x873ef029 >> 0x3f) | 0x3b6fd3b8) <
                    0x302ee92d) {
                  local_94 = -0x60a85f56;
                  auVar8 = auVar5;
                }
              }
              else if (local_94 == -0x60a85f56) {
                IVar2 = param_3;
                if (local_70 != 0) {
                  IVar2 = local_70;
                }
                _objc_msgSend(param_1,local_80,IVar2);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _objc_release(param_3);
                _objc_msgSend(local_78,PTR_s_imageInLightMode_darkMode__0048b0b0,local_88,uVar7);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar7);
                auVar8._8_8_ = extraout_x1_02;
                auVar8._0_8_ = local_88;
                local_94 = -0x7f914452;
              }
              else if (local_94 == -0x5d9e7c6e) {
                _objc_release(local_88);
                _objc_release(local_70);
                _objc_autoreleaseReturnValue(local_90);
                auVar8._8_8_ = extraout_x1;
                auVar8._0_8_ = local_88;
                local_94 = -0xa454193;
              }
            }
            else if (local_94 == -0xfda6317) {
              local_94 = 0x49913e26;
            }
            else if (local_94 == -0xa454193) {
              uVar3 = DAT_004a4b28 ^ DAT_004a4b2c;
              _objc_release(local_88);
              _objc_release(local_70);
              _objc_autoreleaseReturnValue(local_90);
              auVar4._8_8_ = extraout_x1_03;
              auVar4._0_8_ = local_88;
              auVar8._8_8_ = extraout_x1_03;
              auVar8._0_8_ = local_88;
              local_94 = -0xa454193;
              if (0x989b67c4 < ((uVar3 & 0x7e058be8) + 0xee3187c6 | 0xbfde7877)) {
                local_94 = 0x7ac9e706;
                auVar8 = auVar4;
              }
            }
            else if ((local_94 == 0x189de8a) && (local_94 = 0x507c49c9, iVar1 == 0x6bde83b8)) {
              local_94 = 0x618e2f08;
            }
          }
          if (0x507c49c8 < local_94) break;
          if (local_94 == 0x88272b4) {
            uVar3 = 0;
            if (DAT_004a4b24 != 0) {
              uVar3 = DAT_004a4b20 / DAT_004a4b24;
            }
            local_94 = -0x5d9e7c6e;
            if ((uint)((ulong)(uVar3 * 0x6ef63978) * 0x26a17fd7 >> 0x3b) < 0xcbe95183) {
              local_94 = -0xa454193;
            }
          }
          else if (local_94 == 0x14049c37) {
            local_94 = 0x88272b4;
          }
          else if (local_94 == 0x49913e26) {
            uVar3 = 0;
            if (DAT_004a4b14 != 0) {
              uVar3 = DAT_004a4b10 / DAT_004a4b14;
            }
            local_94 = -0x7f914452;
            if (0x6e0ea3a7 < (uVar3 + 0x73a275ac | 0x3901d239) + 0xefd16f8f) {
              local_94 = -0x60a85f56;
            }
          }
        }
        if (local_94 != 0x507c49c9) break;
        uVar3 = DAT_004a4b08 - DAT_004a4b0c;
        _objc_retain(param_3,auVar8._8_8_);
        darkFileExistsWithName_(param_1,(SEL)puVar6,param_3);
        local_70 = _objc_retainAutoreleasedReturnValue();
        local_78 = PTR__OBJC_CLASS___UIImage_0048c9c8;
        local_80 = PTR_s_imageWithContentsOfFile__0048b0a8;
        imageWithContentsOfFile_(param_1,(SEL)PTR_s_imageWithContentsOfFile__0048b0a8,param_3);
        auVar8 = _objc_retainAutoreleasedReturnValue();
        local_94 = -0xfda6317;
        if (0x9bd143b6 < ((uint)((ulong)(uVar3 ^ 0xbb9e4ada) * 0x6fa40c87 >> 0x3e) | 0x591b86f8)) {
          local_94 = 0x507c49c9;
        }
      }
      if (local_94 != 0x618e2f08) break;
      _objc_retain(param_3,auVar8._8_8_);
      darkFileExistsWithName_(param_1,(SEL)puVar6,param_3);
      _objc_retainAutoreleasedReturnValue();
      imageWithContentsOfFile_(param_1,(SEL)PTR_s_imageWithContentsOfFile__0048b0a8,param_3);
      _objc_retainAutoreleasedReturnValue();
      auVar8._8_8_ = extraout_x1_00;
      auVar8._0_8_ = local_88;
      local_94 = 0x507c49c9;
    }
  } while (local_94 != 0x7ac9e706);
  return local_90;
}



// ----- -[BubbleBoxAssets imageWithName:] @ 0015f2f8 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::imageWithName_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined *puVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  bool bVar11;
  bool bVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ID IVar18;
  SEL extraout_x1;
  SEL extraout_x1_00;
  undefined8 extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  undefined8 extraout_x1_05;
  SEL extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  int iVar19;
  int iVar20;
  undefined1 extraout_b0;
  undefined1 extraout_b0_00;
  undefined1 extraout_var;
  undefined1 extraout_var_00;
  undefined1 extraout_var_01;
  undefined1 extraout_var_02;
  undefined1 extraout_var_03;
  undefined1 extraout_var_04;
  undefined1 extraout_var_05;
  undefined1 extraout_var_06;
  undefined1 extraout_var_07;
  undefined1 extraout_var_08;
  undefined1 extraout_var_09;
  undefined1 extraout_var_10;
  undefined1 extraout_var_11;
  undefined1 extraout_var_12;
  undefined1 auVar21 [16];
  undefined1 auStack_170 [8];
  ID local_168;
  ID local_160;
  int *local_158;
  int local_14c;
  long local_148;
  long local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  undefined *local_118;
  char local_109;
  long local_108;
  char local_f9;
  long local_f8;
  char local_e9;
  undefined8 local_e8;
  undefined8 *local_e0;
  char local_d1;
  undefined *local_d0;
  long *local_c8;
  long local_c0;
  undefined8 *local_b8;
  char local_a9;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  byte local_7b;
  byte local_7a;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = (DAT_004a4b30 & DAT_004a4b34) + 0x862c751b & 0x141163c1 ^ 0x4ca0b95f;
  local_158 = &local_14c;
  local_14c = -0x2afdc4d0;
  puVar10 = auStack_170;
  local_168 = param_1;
  local_160 = param_3;
LAB_0015f3fc:
  uVar13 = local_138;
  IVar18 = local_160;
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = local_120;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_120;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_120;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_120;
  if (local_14c < -0x652d21) {
    if (local_14c < -0x4fa09d9f) {
      if (local_14c < -0x69fe26a6) {
        if (local_14c < -0x778978c2) {
          if (-0x7bfb25f0 < local_14c) {
            if (local_14c == -0x7bfb25ef) {
              bVar12 = 0x6ed2105b < (DAT_004a4b70 | DAT_004a4b74) * -0x64b7c3c6 + 0xd95af0f6;
              iVar20 = 0x77868bea;
              iVar19 = 0x3f587449;
              auVar21 = auVar4;
              goto LAB_00160f6c;
            }
            if (local_14c == -0x7a4d4cf2) {
              uVar1 = (uint)((ulong)((DAT_004a4c48 & DAT_004a4c4c) + 0xc6bd1f9e) * 0x3a6f6b23 >>
                            0x3d) * 0x655bc085;
              bVar11 = 0xbf494901 < uVar1;
              bVar12 = uVar1 == 0xbf494902;
              iVar19 = 0x7380c33b;
              iVar20 = -0x76fca7f5;
              goto LAB_001615b4;
            }
            if (local_14c == -0x786f1891) {
              *local_158 = -0x47cea21c;
            }
            goto LAB_0015f3fc;
          }
          if (local_14c != -0x7dac8767) {
            if (local_14c == -0x7ceb6f9d) {
              *local_158 = -0x1e30372c;
            }
            goto LAB_0015f3fc;
          }
          local_d1 = *(long *)*local_b8 == local_c0;
          iVar19 = -0x2d398dff;
          if (0xa2197f38 < ((DAT_004a4bc8 + DAT_004a4bcc) * 0x6bf48a25 + 0xc1493fa0U & 0xac46ebbe))
          {
            iVar19 = -0x7dac8767;
          }
        }
        else if (local_14c < -0x763deb24) {
          if (local_14c == -0x778978c2) {
            *local_158 = 0x2c9391a1;
            goto LAB_0015f3fc;
          }
          if (local_14c != -0x77846296) {
            if (local_14c == -0x76fca7f5) {
              iVar19 = 0x3ba71078;
              if (local_109 == '\0') {
                iVar19 = -0x56fbe9d0;
              }
              *local_158 = iVar19;
              local_128 = local_108;
              goto LAB_001609e8;
            }
            goto LAB_0015f3fc;
          }
          iVar19 = -0x7ceb6f9d;
          if (((DAT_004a4be8 - DAT_004a4bec & 0x3437e987U) * -0x735cdc62 & 0x344f50d0) == 0x1acef813
             ) {
            iVar19 = -0x77846296;
          }
        }
        else {
          if (local_14c == -0x763deb24) {
            *local_158 = -0x3a9592a2;
            goto LAB_0015f3fc;
          }
          if (local_14c != -0x6e9a742b) {
            if (local_14c == -0x6d4526e1) {
              *local_158 = -0x56fbe9d0;
              local_128 = local_a8;
            }
            goto LAB_0015f3fc;
          }
          uVar1 = (DAT_004a4c30 ^ DAT_004a4c34) * 0x73fc1a85 + 0xc7f73bcf | 0x47bed3a0;
          bVar11 = 0x12a43081 < uVar1;
          bVar12 = uVar1 == 0x12a43082;
          iVar19 = -0x5242b92b;
          iVar20 = 0xe0f3f7a;
LAB_001615b4:
          if (!bVar11 || bVar12) {
            iVar19 = iVar20;
          }
        }
      }
      else if (local_14c < -0x5e24f99e) {
        if (local_14c < -0x62aff1cd) {
          if (local_14c == -0x69fe26a6) {
            *local_158 = -0x62aff1cd;
          }
          else if (local_14c == -0x6786483c) {
            auVar21 = _objc_msgSend(local_98,local_a0,local_88,local_90,0x10);
            param_2 = auVar21._8_8_;
            local_a8 = auVar21._0_8_;
            local_a9 = local_a8 == 0;
            *local_158 = 0x317c21d1;
          }
          else if (local_14c == -0x62ba26b1) {
            *local_158 = -0x46d07095;
          }
          goto LAB_0015f3fc;
        }
        if (local_14c != -0x62aff1cd) {
          if (local_14c == -0x62a05c99) {
            *local_158 = -0x5105850f;
          }
          else if (local_14c == -0x613d57c8) {
            *local_158 = 0x130668c8;
          }
          goto LAB_0015f3fc;
        }
        bVar12 = local_e9 == '\0';
        iVar20 = 0x459d0051;
        iVar19 = -0x5c94c030;
LAB_00160ee8:
        if (bVar12) {
          iVar19 = iVar20;
        }
      }
      else {
        if (local_14c < -0x54346d33) {
          if (local_14c == -0x5e24f99e) {
            DAT_004a30cb = DAT_004a30c0 ^ 0xad;
            DAT_004a30cc = DAT_004a30c1 ^ 0x4b;
            DAT_004a30cd = DAT_004a30c2 ^ 0xd4;
            DAT_004a30ce = DAT_004a30c3 ^ 0x48;
            DAT_004a30cf = DAT_004a30c4 ^ 0x93;
            DAT_004a30d0 = DAT_004a30c5 ^ 0x95;
            DAT_004a30d1 = DAT_004a30c6 ^ 0xda;
            DAT_004a30d2 = DAT_004a30c7 ^ 7;
            DAT_004a30d3 = DAT_004a30c8 ^ 0x22;
            *local_158 = 0x3540fadf;
          }
          else if (local_14c == -0x5c94c030) {
LAB_0015fc40:
            *local_158 = -0x345d73f5;
          }
          else if (local_14c == -0x56fbe9d0) {
            local_140 = local_128;
            local_d0 = PTR_s_fileExistsWithName__0048b0c0;
            *local_158 = 0x7c9c3e39;
            local_130 = 0;
          }
          goto LAB_0015f3fc;
        }
        if (local_14c == -0x54346d33) {
          local_f9 = local_f8 == local_140;
          bVar12 = 0xf901b241 < ((DAT_004a4c28 & DAT_004a4c2c ^ 0x8a900081) & 0xcadc8081);
          iVar20 = -0x54346d33;
          iVar19 = 0x675442aa;
          auVar21 = auVar3;
        }
        else {
          if (local_14c == -0x5242b92b) {
            uVar1 = (uint)((ulong)(DAT_004a4c38 & DAT_004a4c3c | 0xfb4bf64) * 0xbbb83d0b >> 0x3c) ^
                    0x4cd423e5;
            local_109 = local_108 == 0;
            bVar11 = 0xa00fdfba < uVar1;
            bVar12 = uVar1 == 0xa00fdfbb;
            iVar19 = 0xe0f3f7a;
            iVar20 = -0x62a05c99;
            goto LAB_001615b4;
          }
          if (local_14c != -0x5105850f) goto LAB_0015f3fc;
          uVar1 = 0;
          if (DAT_004a4c44 != 0) {
            uVar1 = DAT_004a4c40 / DAT_004a4c44;
          }
          bVar12 = 0x36ba2acd <
                   ((uint)((ulong)(uVar1 ^ 0xc9f9bfdf) * 0x6eda3eb3 >> 0x3e) | 0x375c8578);
          iVar20 = -0x7a4d4cf2;
          iVar19 = 0x7380c33b;
          auVar21 = auVar2;
        }
LAB_00160f6c:
        if (bVar12) {
          iVar19 = iVar20;
        }
      }
    }
    else if (local_14c < -0x328d83cd) {
      if (local_14c < -0x46d07095) {
        if (local_14c < -0x4d96df9a) {
          if (local_14c == -0x4fa09d9f) {
            uVar1 = 0;
            if (DAT_004a4c6c != 0) {
              uVar1 = DAT_004a4c68 / DAT_004a4c6c;
            }
            _objc_msgSend(param_1,local_118,local_e8);
            auVar21 = _objc_retainAutoreleasedReturnValue();
            bVar12 = 0x5c5d63f5 <
                     (uint)((ulong)(uVar1 + 0x84128a2 & 0xc5849608) * 0x4a1c43a9 >> 0x3d);
            iVar20 = 0x76d57ac0;
            iVar19 = -0x786f1891;
            goto LAB_00160f6c;
          }
          if (local_14c == -0x4e3f52a2) {
            bVar12 = local_79 == '\0';
            iVar20 = 0x5fed551;
            iVar19 = 0x2c245522;
            goto LAB_00160ee8;
          }
          goto LAB_0015f3fc;
        }
        if (local_14c == -0x4d96df9a) {
          uVar1 = 0;
          if (DAT_004a4c64 != 0) {
            uVar1 = DAT_004a4c60 / DAT_004a4c64;
          }
          bVar12 = (uVar1 + 0xd153c507 | 0x29fef711) == 0xcce9c2d2;
          iVar20 = -0x4fa09d9f;
          iVar19 = 0x76d57ac0;
          goto LAB_00160c30;
        }
        if (local_14c == -0x482366bb) {
          _objc_msgSend(param_1,local_d0,*local_e0);
          *local_158 = -0x143cbf0;
          param_2 = extraout_x1_04;
          goto LAB_0015f3fc;
        }
        if (local_14c != -0x47cea21c) goto LAB_0015f3fc;
        iVar19 = -0x19205a3;
        if ((DAT_004a4c70 * DAT_004a4c74 ^ 0x2ddeaa4U) * 0x38bd27c0 != 0x713ae374) {
          iVar19 = -0x2dbf7861;
        }
      }
      else if (local_14c < -0x3e94dfab) {
        if (local_14c != -0x46d07095) {
          if (local_14c == -0x462cf2d6) {
            *local_158 = -0x54346d33;
          }
          else if (local_14c == -0x453c9611) {
            _objc_enumerationMutation(local_98);
            *local_158 = 0x64310639;
            param_2 = extraout_x1_00;
          }
          goto LAB_0015f3fc;
        }
        local_b8 = local_88 + 2;
        iVar19 = -0x46d07095;
        if ((DAT_004a4bb8 - DAT_004a4bbc) * 0x62d910cb != 0x25d79dfc) {
          iVar19 = -0x763deb24;
        }
      }
      else {
        if (local_14c == -0x3e94dfab) {
          *local_158 = -0x4d96df9a;
          goto LAB_0015f3fc;
        }
        if (local_14c == -0x3a9592a2) {
          local_c0 = *(long *)*local_b8;
          local_c8 = local_88 + 1;
          *local_158 = -0x6d4526e1;
          goto LAB_0015f3fc;
        }
        if (local_14c != -0x345d73f5) goto LAB_0015f3fc;
        local_118 = PTR_s_getImageWithName__0048b0c8;
        iVar19 = -0x3e94dfab;
        if (((DAT_004a4c58 ^ DAT_004a4c5c) * 0xa7e6423 ^ 0xa1748269) + 0xe745fd < 0xd1bd5c27) {
          iVar19 = -0x345d73f5;
        }
      }
    }
    else if (local_14c < -0x18845f7e) {
      if (local_14c < -0x2afdc4d0) {
        if (local_14c == -0x328d83cd) {
          bVar12 = ((DAT_004a4b40 - DAT_004a4b44) + 0x5547ed2fU & 0xb3925065 | 0x12021064) ==
                   0xe70d905e;
          iVar20 = -0x778978c2;
          iVar19 = 0x2c9391a1;
          goto LAB_00160ee8;
        }
        if (local_14c == -0x2dbf7861) {
          iVar19 = -0x2dbf7861;
          if ((DAT_004a4c78 | DAT_004a4c7c | 0xdc77bbe7) + 0x445e31ba < 0xebf6d391) {
            iVar19 = -0x4b93bc;
          }
          goto LAB_001615b8;
        }
        if (local_14c != -0x2d398dff) goto LAB_0015f3fc;
        bVar12 = local_d1 == '\0';
        iVar19 = -0x1e30372c;
        iVar20 = 0x7d2fec81;
      }
      else {
        if (local_14c == -0x2afdc4d0) {
          bVar11 = 0x34f8b758 < local_74;
          bVar12 = local_74 == 0x34f8b759;
          iVar20 = 0x5b57ce39;
LAB_00160fd0:
          iVar19 = -0x2b2543d;
          if (!bVar11 || bVar12) {
            iVar19 = iVar20;
          }
          goto LAB_001615b8;
        }
        if (local_14c == -0x2925511e) {
          uVar1 = DAT_004a4b88 - DAT_004a4b8c;
          DAT_004d1494 = 1;
          local_88 = (undefined8 *)(puVar10 + -0x60);
          local_90 = puVar10 + -0xe0;
          uVar13 = _objc_retain(local_160,param_2);
          puVar8 = PTR_s_stringByAppendingString__00489d88;
          _objc_msgSend(uVar13,PTR_s_stringByAppendingString__00489d88,
                        &PTR____CFConstantStringClassReference_004a3140);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -0x20) = uVar13;
          _objc_msgSend(IVar18,puVar8,&PTR____CFConstantStringClassReference_004a3120);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -0x18) = uVar14;
          _objc_msgSend(PTR__OBJC_CLASS___UIScreen_0048cbe8,PTR_s_mainScreen_0048b080);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar15,PTR_s_scale_0048b088);
          *(ulong *)(puVar10 + -0xf0) =
               CONCAT17(extraout_var_12,
                        CONCAT16(extraout_var_10,
                                 CONCAT15(extraout_var_08,
                                          CONCAT14(extraout_var_06,
                                                   CONCAT13(extraout_var_04,
                                                            CONCAT12(extraout_var_02,
                                                                     CONCAT11(extraout_var_00,
                                                                              extraout_b0_00)))))));
          _objc_msgSend(IVar18,PTR_s_stringByAppendingFormat__0048b0b8,
                        &PTR____CFConstantStringClassReference_004a3100);
          uVar16 = _objc_retainAutoreleasedReturnValue();
          param_1 = local_168;
          *(undefined8 *)(puVar10 + -0x10) = uVar16;
          _objc_msgSend(IVar18,puVar8,&PTR____CFConstantStringClassReference_004a30e0);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -8) = uVar17;
          _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,
                        puVar10 + -0x20,4);
          local_98 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          puVar9 = local_88;
          local_88[1] = 0;
          *puVar9 = 0;
          puVar9[3] = 0;
          puVar9[2] = 0;
          puVar9[5] = 0;
          puVar9[4] = 0;
          puVar9[7] = 0;
          puVar9[6] = 0;
          bVar12 = 0x1b08e4e6 < (uVar1 ^ 0x98bdb09c) + 0xe7354d30;
          iVar19 = 0x59bb8de5;
          iVar20 = 0x51292333;
          puVar10 = puVar10 + -0xe0;
          param_2 = extraout_x1_08;
          goto LAB_00161544;
        }
        if (local_14c != -0x1e30372c) goto LAB_0015f3fc;
        bVar12 = (int)((long)((ulong)(uint)(DAT_004a4bf0 - DAT_004a4bf4) * 0x812f8d23) >> 0x3f) *
                 0x13083e56 == 0x2f3b299b;
        iVar19 = 0x41554497;
        iVar20 = 0x1711fb18;
      }
      if (bVar12) {
        iVar19 = iVar20;
      }
    }
    else {
      if (local_14c < -0x2b2543d) {
        if (local_14c == -0x18845f7e) {
          *local_158 = 0xddc29de;
        }
        else {
          if (local_14c == -0x64d1408) {
            uVar1 = DAT_004a4b98 & DAT_004a4b9c;
            _objc_retain(local_98,param_2);
            local_a0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
            bVar12 = ((uVar1 & 0x2ac96ddb) * 0x63d3808e) / 0x504c716f == 0xeed49793;
            iVar19 = 0x6f8c44c;
            iVar20 = 0x49a81210;
            param_2 = extraout_x1_07;
            goto LAB_00161304;
          }
          if (local_14c == -0x2b85eaf) goto LAB_0015fc40;
        }
        goto LAB_0015f3fc;
      }
      if (local_14c == -0x2b2543d) {
        uVar1 = ((DAT_004a4b38 | DAT_004a4b3c) * 0x7edc646c ^ 0x55d6a5d3) * -0x5fb92c86;
        local_78 = DAT_004d1494;
        bVar11 = 0x84afd545 < uVar1;
        bVar12 = uVar1 == 0x84afd546;
        iVar20 = 0x75791bc4;
        goto LAB_00160fd0;
      }
      if (local_14c == -0x19205a3) {
        *local_158 = -0x2dbf7861;
        goto LAB_0015f3fc;
      }
      if (local_14c != -0x143cbf0) goto LAB_0015f3fc;
      uVar1 = DAT_004a4c08 ^ DAT_004a4c0c;
      local_e8 = *local_e0;
      local_e9 = _objc_msgSend(param_1,local_d0);
      auVar6._8_8_ = extraout_x1_01;
      auVar6._0_8_ = local_120;
      auVar21._8_8_ = extraout_x1_01;
      auVar21._0_8_ = local_120;
      iVar19 = -0x69fe26a6;
      if (0xce7fa419 < (uVar1 ^ 0x92828800 | 0x2d2c6747)) {
        iVar19 = -0x143cbf0;
        auVar21 = auVar6;
      }
    }
  }
  else if (local_14c < 0x42a99a6f) {
    if (0x1d52e257 < local_14c) {
      if (local_14c < 0x330c8210) {
        if (local_14c < 0x2c9391a1) {
          if (local_14c == 0x1d52e258) {
            bVar12 = 0x45c894f3 < ((DAT_004a4b50 | DAT_004a4b54) + 0x8cdc7e08 | 0xaf55fb47);
            iVar20 = 0x4a6151cb;
            iVar19 = 0x322d79bd;
            goto LAB_00160f6c;
          }
          if (local_14c == 0x2390f601) {
            *local_158 = 0x299a99c;
          }
          else if (local_14c == 0x2c245522) {
            bVar12 = (uint)((ulong)(uint)(DAT_004a4b60 * DAT_004a4b64) * 0xe9bbd139 >> 0x3c) *
                     0x1d27f660 == -0x3dd11978;
            iVar19 = -0x5e24f99e;
            iVar20 = 0x3540fadf;
LAB_00161304:
            auVar5._8_8_ = param_2;
            auVar5._0_8_ = local_120;
            auVar21._8_8_ = param_2;
            auVar21._0_8_ = local_120;
            if (!bVar12) {
              iVar19 = iVar20;
              auVar21 = auVar5;
            }
            goto LAB_001615b8;
          }
        }
        else if (local_14c == 0x2c9391a1) {
          local_79 = local_78 == 0;
          *local_158 = 0x55dc3d56;
        }
        else if (local_14c == 0x317c21d1) {
          iVar19 = 0x3ba71078;
          if (local_a9 == '\0') {
            iVar19 = 0x7eef9515;
          }
          *local_158 = iVar19;
LAB_001609e8:
          local_138 = 0;
        }
        else if (local_14c == 0x322d79bd) {
          *local_158 = 0x4a6151cb;
        }
      }
      else if (local_14c < 0x3f587449) {
        if (local_14c == 0x330c8210) {
          *local_158 = -0x7dac8767;
        }
        else {
          if (local_14c == 0x3540fadf) {
            DAT_004a30cb = DAT_004a30c0 ^ 0xad;
            DAT_004a30cc = DAT_004a30c1 ^ 0x4b;
            DAT_004a30cd = DAT_004a30c2 ^ 0xd4;
            DAT_004a30ce = DAT_004a30c3 ^ 0x48;
            DAT_004a30cf = DAT_004a30c4 ^ 0x93;
            DAT_004a30d0 = DAT_004a30c5 ^ 0x95;
            DAT_004a30d1 = DAT_004a30c6 ^ 0xda;
            DAT_004a30d2 = DAT_004a30c7 ^ 7;
            DAT_004a30d3 = DAT_004a30c8 ^ 0x22;
            local_7a = DAT_004a30c9 ^ 0x31;
            bVar12 = (DAT_004a4b68 & DAT_004a4b6c) * -0x55a4baa2 == 0x14ab2a8a;
            iVar19 = -0x5e24f99e;
            iVar20 = -0x18845f7e;
            goto LAB_00161304;
          }
          if (local_14c == 0x3ba71078) {
            _objc_release(local_98);
            _objc_release(local_98);
            _objc_release(local_160);
            if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            IVar18 = _objc_autoreleaseReturnValue(uVar13);
            return IVar18;
          }
        }
      }
      else if (local_14c == 0x3f587449) {
        DAT_004a2f99 = local_7b;
        *local_158 = 0x77868bea;
      }
      else {
        if (local_14c == 0x409832c8) {
          uVar1 = 0;
          if (DAT_004a4b94 != 0) {
            uVar1 = DAT_004a4b90 / DAT_004a4b94;
          }
          iVar19 = -0x64d1408;
          if (((uVar1 ^ 0xa3080a0) & 0xa71f1e8) * -0x66351e50 == -0x2a92ecfd) {
            iVar19 = 0x6f8c44c;
          }
          goto LAB_001615b8;
        }
        if (local_14c == 0x41554497) {
          uVar1 = ((DAT_004a4bf8 + DAT_004a4bfc) * 0x73812d92 & 0x774c7bdaU) * 0x2266f436;
          local_e0 = (undefined8 *)(*local_c8 + local_148 * 8);
          bVar11 = 0x29723f56 < uVar1;
          bVar12 = uVar1 == 0x29723f57;
          iVar20 = 0x41554497;
          iVar19 = -0x613d57c8;
          goto LAB_0015fe14;
        }
      }
      goto LAB_0015f3fc;
    }
    if (local_14c < 0x6f8c44c) {
      if (local_14c < 0x15ba0c2) {
        if (local_14c != -0x652d21) {
          if (local_14c == -0x4b93bc) {
            *local_158 = 0x3ba71078;
            local_138 = local_120;
          }
          goto LAB_0015f3fc;
        }
        iVar19 = -0x77846296;
        if ((DAT_004a4be0 * DAT_004a4be4 | 0x5f8f77fdU) == 0xd696e30d) {
          iVar19 = 0x666fadae;
        }
      }
      else {
        if (local_14c == 0x15ba0c2) {
          _objc_msgSend(local_98,local_a0,local_88,local_90,0x10);
          *local_158 = -0x6786483c;
          param_2 = extraout_x1_02;
          goto LAB_0015f3fc;
        }
        if (local_14c != 0x299a99c) {
          if (local_14c == 0x5fed551) {
            iVar19 = 0x59bb8de5;
            if (((DAT_004a4b80 ^ DAT_004a4b84) & 0x17bf8b03 | 0x17b78803) != 0x1faa0ed1) {
              iVar19 = -0x2925511e;
            }
            goto LAB_001615b8;
          }
          goto LAB_0015f3fc;
        }
        local_f8 = local_148 + 1;
        iVar19 = 0x88b4300;
        if ((DAT_004a4c18 ^ DAT_004a4c1c | 0xdd11ca65) * -0x7be2df4d == -0x4a5a0893) {
          iVar19 = 0x299a99c;
        }
      }
    }
    else {
      if (local_14c < 0xe0f3f7a) {
        if (local_14c == 0x6f8c44c) {
          _objc_retain(local_98,param_2);
          *local_158 = -0x64d1408;
          param_2 = extraout_x1_03;
        }
        else if (local_14c == 0x88b4300) {
          *local_158 = 0x75c5a790;
        }
        else if (local_14c == 0xddc29de) {
          DAT_004a30d4 = local_7a;
          DAT_004a30d5 = DAT_004a30ca ^ 0x24;
          DAT_004a2d69 = DAT_004a2d64 ^ 0xbe;
          DAT_004a2d6a = DAT_004a2d65 ^ 0xe9;
          DAT_004a2d6b = DAT_004a2d66 ^ 0xf5;
          DAT_004a2d6c = DAT_004a2d67 ^ 0xbc;
          DAT_004a2d6d = DAT_004a2d68 ^ 0xc1;
          DAT_004a2d25 = DAT_004a2d20 ^ 0xfa;
          DAT_004a2d26 = DAT_004a2d21 ^ 0x3f;
          DAT_004a2d27 = DAT_004a2d22 ^ 5;
          DAT_004a2d28 = DAT_004a2d23 ^ 0x94;
          DAT_004a2d29 = DAT_004a2d24 ^ 0x58;
          DAT_004a2f92 = DAT_004a2f8a ^ 0x5f;
          DAT_004a2f93 = DAT_004a2f8b ^ 0xa1;
          DAT_004a2f94 = DAT_004a2f8c ^ 0x8d;
          DAT_004a2f95 = DAT_004a2f8d ^ 0x92;
          DAT_004a2f96 = DAT_004a2f8e ^ 0x7e;
          DAT_004a2f97 = DAT_004a2f8f ^ 0x94;
          DAT_004a2f98 = DAT_004a2f90 ^ 99;
          local_7b = DAT_004a2f91 ^ 0x2d;
          *local_158 = -0x7bfb25ef;
        }
        goto LAB_0015f3fc;
      }
      if (local_14c == 0xe0f3f7a) {
        *local_158 = -0x5242b92b;
        goto LAB_0015f3fc;
      }
      if (local_14c != 0x130668c8) {
        if (local_14c == 0x1711fb18) {
          *local_158 = 0x41554497;
        }
        goto LAB_0015f3fc;
      }
      iVar19 = -0x143cbf0;
      if (((DAT_004a4c00 & DAT_004a4c04) + 0xa791b6cc | 0xaff622cf) < 0xdae34351) {
        iVar19 = -0x482366bb;
      }
    }
  }
  else if (local_14c < 0x64310639) {
    if (0x51292332 < local_14c) {
      if (local_14c < 0x5b57ce39) {
        if (local_14c == 0x51292333) {
          *local_158 = 0x409832c8;
        }
        else if (local_14c == 0x55dc3d56) {
          *local_158 = 0x1d52e258;
        }
        else if (local_14c == 0x59bb8de5) {
          DAT_004d1494 = 1;
          uVar13 = _objc_retain(local_160,param_2);
          puVar8 = PTR_s_stringByAppendingString__00489d88;
          _objc_msgSend(uVar13,PTR_s_stringByAppendingString__00489d88,
                        &PTR____CFConstantStringClassReference_004a3140);
          uVar13 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -0x20) = uVar13;
          _objc_msgSend(IVar18,puVar8,&PTR____CFConstantStringClassReference_004a3120);
          uVar14 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -0x18) = uVar14;
          _objc_msgSend(PTR__OBJC_CLASS___UIScreen_0048cbe8,PTR_s_mainScreen_0048b080);
          uVar15 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar15,PTR_s_scale_0048b088);
          *(ulong *)(puVar10 + -0xf0) =
               CONCAT17(extraout_var_11,
                        CONCAT16(extraout_var_09,
                                 CONCAT15(extraout_var_07,
                                          CONCAT14(extraout_var_05,
                                                   CONCAT13(extraout_var_03,
                                                            CONCAT12(extraout_var_01,
                                                                     CONCAT11(extraout_var,
                                                                              extraout_b0)))))));
          _objc_msgSend(IVar18,PTR_s_stringByAppendingFormat__0048b0b8,
                        &PTR____CFConstantStringClassReference_004a3100);
          uVar16 = _objc_retainAutoreleasedReturnValue();
          param_1 = local_168;
          *(undefined8 *)(puVar10 + -0x10) = uVar16;
          _objc_msgSend(IVar18,puVar8,&PTR____CFConstantStringClassReference_004a30e0);
          uVar17 = _objc_retainAutoreleasedReturnValue();
          *(undefined8 *)(puVar10 + -8) = uVar17;
          _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,PTR_s_arrayWithObjects_count__00489778,
                        puVar10 + -0x20,4);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar17);
          _objc_release(uVar16);
          _objc_release(uVar15);
          _objc_release(uVar14);
          _objc_release(uVar13);
          *(undefined8 *)(puVar10 + -0x38) = 0;
          *(undefined8 *)(puVar10 + -0x40) = 0;
          *(undefined8 *)(puVar10 + -0x28) = 0;
          *(undefined8 *)(puVar10 + -0x30) = 0;
          *(undefined8 *)(puVar10 + -0x58) = 0;
          *(undefined8 *)(puVar10 + -0x60) = 0;
          *(undefined8 *)(puVar10 + -0x48) = 0;
          *(undefined8 *)(puVar10 + -0x50) = 0;
          *local_158 = -0x2925511e;
          puVar10 = puVar10 + -0xe0;
          param_2 = extraout_x1;
        }
      }
      else if (local_14c == 0x5b57ce39) {
        *local_158 = -0x2b2543d;
      }
      else if (local_14c == 0x61b8f4e6) {
        *local_158 = -0x652d21;
      }
      else if (local_14c == 0x62c42f75) {
        auVar21 = _objc_msgSend(local_98,local_a0,local_88,local_90,0x10);
        param_2 = auVar21._8_8_;
        local_108 = auVar21._0_8_;
        *local_158 = -0x6e9a742b;
      }
      goto LAB_0015f3fc;
    }
    if (local_14c < 0x49a81210) {
      if (local_14c == 0x42a99a6f) {
        bVar12 = 0xdd129d23 < (DAT_004a4ba0 - DAT_004a4ba4 | 0x6cf3ba7U) * -0x26f3ccd0 + 0xe4737ab5;
        iVar19 = -0x6786483c;
        iVar20 = 0x15ba0c2;
LAB_00161544:
        auVar7._8_8_ = param_2;
        auVar7._0_8_ = local_120;
        auVar21._8_8_ = param_2;
        auVar21._0_8_ = local_120;
        if (bVar12) {
          iVar19 = iVar20;
          auVar21 = auVar7;
        }
      }
      else {
        if (local_14c != 0x459d0051) goto LAB_0015f3fc;
        iVar19 = 0x2390f601;
        if ((DAT_004a4c10 * DAT_004a4c14 & 0x3536ed3fU) != 0xe8d676de) {
          iVar19 = 0x299a99c;
        }
      }
    }
    else {
      if (local_14c == 0x49a81210) {
        *local_158 = 0x42a99a6f;
        goto LAB_0015f3fc;
      }
      if (local_14c == 0x49b930e1) {
        iVar19 = 0x62c42f75;
        if (local_f9 == '\0') {
          iVar19 = 0x7c9c3e39;
        }
        *local_158 = iVar19;
        local_130 = local_f8;
        goto LAB_0015f3fc;
      }
      if (local_14c != 0x4a6151cb) goto LAB_0015f3fc;
      uVar1 = (DAT_004a4b58 - DAT_004a4b5c) * -0x33bbf4e8 & 0x6f21e280U ^ 0x8d644891;
      bVar11 = 0x4860b7cd < uVar1;
      bVar12 = uVar1 == 0x4860b7ce;
      iVar20 = 0x322d79bd;
      iVar19 = -0x4e3f52a2;
LAB_0015fe14:
      if (!bVar11 || bVar12) {
        iVar19 = iVar20;
      }
    }
  }
  else {
    if (local_14c < 0x75c5a790) {
      if (local_14c < 0x680d1a07) {
        if (local_14c == 0x64310639) {
          uVar1 = DAT_004a4bd8 - DAT_004a4bdc;
          _objc_enumerationMutation(local_98);
          auVar21._8_8_ = extraout_x1_05;
          auVar21._0_8_ = local_120;
          bVar12 = 0x149c9613 <
                   (uint)((ulong)(uVar1 & 0x6aa4c02a) * 0xc49390d >> 0x3a) * -0x262ab33d;
          iVar20 = 0x64310639;
          iVar19 = 0x61b8f4e6;
          goto LAB_00160f6c;
        }
        if (local_14c == 0x666fadae) {
          *local_158 = -0x77846296;
        }
        else if (local_14c == 0x675442aa) {
          *local_158 = 0x49b930e1;
        }
      }
      else if (local_14c == 0x680d1a07) {
        *local_158 = 0x5fed551;
      }
      else if (local_14c == 0x7380c33b) {
        *local_158 = -0x7a4d4cf2;
      }
      else if (local_14c == 0x75791bc4) {
        *local_158 = -0x328d83cd;
      }
      goto LAB_0015f3fc;
    }
    if (local_14c < 0x7c9c3e39) {
      if (local_14c != 0x75c5a790) {
        if (local_14c == 0x76d57ac0) {
          _objc_msgSend(param_1,local_118,local_e8);
          _objc_retainAutoreleasedReturnValue();
          *local_158 = -0x4fa09d9f;
          param_2 = extraout_x1_06;
        }
        else if (local_14c == 0x77868bea) {
          DAT_004a2f99 = local_7b;
          *local_158 = 0x680d1a07;
        }
        goto LAB_0015f3fc;
      }
      uVar1 = 0;
      if (DAT_004a4c24 != 0) {
        uVar1 = DAT_004a4c20 / DAT_004a4c24;
      }
      bVar12 = (uVar1 + 0xce45de6e & 0x3ed20f74 | 0x14120a10) == 0xa6cd2397;
      iVar20 = -0x54346d33;
      iVar19 = -0x462cf2d6;
LAB_00160c30:
      if (!bVar12) {
        iVar19 = iVar20;
      }
    }
    else {
      if (local_14c != 0x7c9c3e39) {
        if (local_14c == 0x7d2fec81) {
          uVar1 = (DAT_004a4bd0 + DAT_004a4bd4 | 0x1b8eef8U) * -0x20f60640 + 0x8ba6cb80;
          bVar11 = 0x9e03800a < uVar1;
          bVar12 = uVar1 == 0x9e03800b;
          iVar19 = 0x64310639;
          iVar20 = -0x453c9611;
          goto LAB_001615b4;
        }
        if (local_14c == 0x7eef9515) {
          uVar1 = 0;
          if (DAT_004a4bb4 != 0) {
            uVar1 = DAT_004a4bb0 / DAT_004a4bb4;
          }
          iVar19 = -0x62ba26b1;
          if (0x6ecfc6d2 < ((uVar1 ^ 0x6486ea0e) + 0x96c4bf59 & 0xf54c8d00)) {
            iVar19 = -0x46d07095;
          }
          goto LAB_001615b8;
        }
        goto LAB_0015f3fc;
      }
      local_148 = local_130;
      iVar19 = -0x7dac8767;
      if (0xf7c4839d < ((DAT_004a4bc0 - DAT_004a4bc4) + 0x7e78bdf4U & 0x40004808)) {
        iVar19 = 0x330c8210;
      }
    }
  }
LAB_001615b8:
  param_2 = auVar21._8_8_;
  local_120 = auVar21._0_8_;
  *local_158 = iVar19;
  goto LAB_0015f3fc;
}



// ----- -[BubbleBoxAssets svgImageNamed:fromConfig:] @ 0016164c -----

/* WARNING: Removing unreachable block (ram,0x0016258c) */
/* Function Stack Size: 0x20 bytes */

ID BubbleBoxAssets::svgImageNamed_fromConfig_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar10;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int local_cc;
  ID local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  undefined *local_a0;
  undefined8 local_98;
  char local_89;
  long local_88;
  undefined *local_80;
  ID local_78;
  byte local_6a;
  char local_69;
  int local_68;
  
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_88;
  uVar11 = (uint)((ulong)((DAT_004a4c80 - DAT_004a4c84 & 0x77409572U ^ 0xe06de10a) >> 1) * 0x9990711
                 >> 0x3a);
  local_cc = 0x2736c755;
LAB_0016172c:
  uVar10 = auVar13._8_8_;
  local_88 = auVar13._0_8_;
  auVar12._8_8_ = uVar10;
  auVar12._0_8_ = local_a8;
  auVar3._8_8_ = uVar10;
  auVar3._0_8_ = local_a8;
  auVar2._8_8_ = uVar10;
  auVar2._0_8_ = local_a8;
  if (-0xfa54ab6 < local_cc) {
    if (local_cc < 0x2db7e51f) {
      if (local_cc < 0x244e8196) {
        if (local_cc < 0x1b3d75cf) {
          if (local_cc < 0xd5cf0f1) {
            if (local_cc == -0xfa54ab5) {
              DAT_004d1498 = 1;
              _objc_retain(param_4,uVar10);
              auVar13._8_8_ = extraout_x1_01;
              auVar13._0_8_ = local_88;
              local_cc = 0x6bd8adc2;
            }
            else if (local_cc == -0xa3b8b08) {
              bVar8 = ((DAT_004a4cb0 ^ DAT_004a4cb4) & 0x76e5ed4f | 0x76a56d45) == 0xcae7f1ad;
              local_cc = -0xfcbb754;
              iVar9 = 0x310bcf72;
              goto LAB_00162878;
            }
          }
          else if (local_cc == 0xe65c8ee) {
            local_89 = local_88 == 0;
            local_cc = -0x4e84578a;
            if ((int)((long)((ulong)(uint)(DAT_004a4cf8 + DAT_004a4cfc) * 0x939c6405) >> 0x3f) *
                0x408cc02c + 0x5077ed8bU < 0x3affbfca) {
              local_cc = 0xe65c8ee;
            }
          }
          else if (local_cc == 0xd5cf0f1) {
            return local_c8;
          }
        }
        else if (local_cc == 0x1b3d75cf) {
          _objc_msgSend(param_3,PTR_s_stringByAppendingString__00489d88,
                        &PTR____CFConstantStringClassReference_004a3180);
          auVar12 = _objc_retainAutoreleasedReturnValue();
          auVar13._8_8_ = auVar12._8_8_;
          auVar13._0_8_ = local_88;
          local_78 = auVar12._0_8_;
          local_80 = PTR_s_fileExistsWithName__0048b0c0;
          local_cc = -0x19af8451;
        }
        else if (local_cc == 0x1b79d2d1) {
          local_69 = local_68 == 0;
          local_cc = 0x1b79d2d1;
          if ((DAT_004a4c98 & DAT_004a4c9c & 0x26802003) != 0x9c161a9f) {
            local_cc = 0x2853b8f2;
          }
        }
        else if (local_cc == 0x1dcbecaf) {
          bVar8 = DAT_004a4d00 * DAT_004a4d04 == 0x592189ba;
          local_cc = 0x49fafc8e;
          iVar9 = 0x34847a16;
LAB_00162760:
          auVar6._8_8_ = auVar12._8_8_;
          auVar6._0_8_ = local_88;
          auVar13._8_8_ = auVar12._8_8_;
          auVar13._0_8_ = local_88;
          local_a8 = auVar12._0_8_;
          if (!bVar8) {
            local_cc = iVar9;
            auVar13 = auVar6;
          }
        }
        goto LAB_0016172c;
      }
      if (local_cc < 0x2736c755) {
        if (local_cc == 0x244e8196) {
          local_cc = 0x36db7897;
          if (0xdf8bd7a4 < (DAT_004a4cf0 ^ DAT_004a4cf4 | 0xffdffffd)) {
            local_cc = 0xe65c8ee;
          }
          goto LAB_0016172c;
        }
        if (local_cc == 0x2661d5fa) {
          bVar8 = false;
          local_cc = -0xfa54ab5;
          iVar9 = 0x6bd8adc2;
          auVar12 = auVar3;
          goto LAB_00162760;
        }
        if (local_cc != 0x26d8dbf8) goto LAB_0016172c;
        uVar1 = (DAT_004a4d38 + DAT_004a4d3c) * 0x3940c280 + 0xeb72fe50;
        _objc_release(local_88);
        bVar7 = 0x9cc23444 < uVar1;
        bVar8 = uVar1 == 0x9cc23445;
        iVar9 = -0x56f68d95;
        local_cc = -0x159a1892;
        uVar10 = extraout_x1_00;
      }
      else {
        if (0x2853b8f1 < local_cc) {
          if (local_cc == 0x2853b8f2) {
            local_cc = -0x12c55245;
          }
          else if (local_cc == 0x2c474de0) {
            DAT_004a3171 = DAT_004a3166 ^ 0x42;
            DAT_004a3172 = DAT_004a3167 ^ 0x58;
            DAT_004a3173 = DAT_004a3168 ^ 0x61;
            DAT_004a3174 = DAT_004a3169 ^ 0xd5;
            DAT_004a3175 = DAT_004a316a ^ 0xdc;
            local_cc = 0x2661d5fa;
          }
          goto LAB_0016172c;
        }
        if (local_cc != 0x2736c755) {
          if (local_cc == 0x28388e4c) {
            uVar1 = DAT_004a4ce8 * DAT_004a4cec;
            dataWithContentsOfFile_(param_1,(SEL)PTR_s_dataWithContentsOfFile__00489580,local_78);
            auVar13 = _objc_retainAutoreleasedReturnValue();
            bVar8 = 0xe3c3626f < (uVar1 & 0x406060);
            iVar9 = 0x4477c2c5;
            local_cc = 0x66971ff2;
            goto LAB_00162000;
          }
          goto LAB_0016172c;
        }
        bVar7 = 0xae77fe73 < uVar11;
        bVar8 = uVar11 == 0xae77fe74;
        iVar9 = -0x184025bd;
        local_cc = -0x307718ee;
      }
LAB_00162508:
      auVar4._8_8_ = uVar10;
      auVar4._0_8_ = local_88;
      auVar13._8_8_ = uVar10;
      auVar13._0_8_ = local_88;
      if (!bVar7 || bVar8) {
        local_cc = iVar9;
        auVar13 = auVar4;
      }
      goto LAB_0016172c;
    }
    if (local_cc < 0x4477c2c5) {
      if (local_cc < 0x36db7897) {
        if (local_cc == 0x2db7e51f) {
          local_cc = 0x2c474de0;
        }
        else if (local_cc == 0x310bcf72) {
          DAT_004a2d25 = DAT_004a2d20 ^ 0xfa;
          DAT_004a2d26 = DAT_004a2d21 ^ 0x3f;
          DAT_004a2d27 = DAT_004a2d22 ^ 5;
          DAT_004a2d28 = DAT_004a2d23 ^ 0x94;
          local_cc = -0xfcbb754;
        }
        else if (local_cc == 0x34847a16) {
          bVar8 = (DAT_004a4d08 + DAT_004a4d0c | 0x8fcbb6cfU) == 0x7acbeab3;
          iVar9 = 0x49fafc8e;
          local_cc = -0x43f8b072;
          goto LAB_001624e0;
        }
        goto LAB_0016172c;
      }
      if (local_cc < 0x3a500ea9) {
        if (local_cc == 0x36db7897) {
          local_cc = 0xe65c8ee;
        }
        else if (local_cc == 0x376cd896) {
          uVar1 = (DAT_004a4d20 ^ DAT_004a4d24 | 0x20405b80) ^ 0x21201680 | 0xde9f2056;
          bVar7 = 0xdbf42553 < uVar1;
          bVar8 = uVar1 == 0xdbf42554;
          local_cc = -0x69d075f8;
          iVar9 = -0x2a4ae042;
LAB_00162428:
          if (!bVar7 || bVar8) {
            local_cc = iVar9;
          }
        }
        goto LAB_0016172c;
      }
      if (local_cc == 0x3a500ea9) {
        _objc_release(local_78);
        _objc_release(param_4);
        _objc_autoreleaseReturnValue(local_c8);
        auVar13._8_8_ = extraout_x1_04;
        auVar13._0_8_ = local_88;
        local_cc = -0x6379b730;
        goto LAB_0016172c;
      }
      if (local_cc != 0x3f842556) goto LAB_0016172c;
    }
    else {
      if (0x5382fdad < local_cc) {
        if (local_cc < 0x6bd8adc2) {
          if (local_cc == 0x5382fdae) {
            local_cc = -0x673cdbc4;
          }
          else if (local_cc == 0x66971ff2) {
            local_cc = 0x244e8196;
          }
        }
        else {
          if (local_cc == 0x6bd8adc2) {
            uVar1 = 0;
            if (DAT_004a4cdc != 0) {
              uVar1 = DAT_004a4cd8 / DAT_004a4cdc;
            }
            DAT_004d1498 = 1;
            _objc_retain(param_4,uVar10);
            auVar12._8_8_ = extraout_x1_05;
            bVar8 = (int)((long)((ulong)(uVar1 * 0x7da530bd ^ 0xa5c874b6) * 0x84247da1) >> 0x3f) ==
                    0x7a9b9564;
            local_cc = -0xfa54ab5;
            iVar9 = -0x35590e0c;
            goto LAB_00162760;
          }
          if (local_cc == 0x7827f962) {
            DAT_004a2d29 = local_6a ^ 0x58;
            DAT_004a316b = DAT_004a3160 ^ 0xde;
            DAT_004a316c = DAT_004a3161 ^ 0x43;
            DAT_004a316d = DAT_004a3162 ^ 0xa3;
            DAT_004a316e = DAT_004a3163 ^ 0x88;
            DAT_004a316f = DAT_004a3164 ^ 0xcb;
            DAT_004a3170 = DAT_004a3165 ^ 0xdb;
            local_cc = 0x2db7e51f;
          }
        }
        goto LAB_0016172c;
      }
      if (local_cc != 0x4477c2c5) {
        if (local_cc == 0x48a10e68) {
          local_cc = 0x376cd896;
        }
        else if (local_cc == 0x49fafc8e) {
          local_cc = 0x34847a16;
        }
        goto LAB_0016172c;
      }
      dataWithContentsOfFile_(param_1,(SEL)PTR_s_dataWithContentsOfFile__00489580,local_78);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = extraout_x1_07;
    }
    auVar13._8_8_ = uVar10;
    auVar13._0_8_ = local_88;
    local_cc = 0x28388e4c;
    goto LAB_0016172c;
  }
  if (local_cc < -0x43f8b072) {
    if (-0x65d82395 < local_cc) {
      if (local_cc < -0x56f68d95) {
        if (local_cc == -0x65d82394) {
          local_c8 = local_b8;
          bVar8 = (uint)((ulong)((DAT_004a4d40 & DAT_004a4d44 ^ 0x5ec86c70) + 0x407485bb) *
                         0x5de1985d >> 0x3d) == 0x7a62a666;
          local_cc = -0x6379b730;
          iVar9 = 0x3a500ea9;
LAB_00162878:
          if (bVar8) {
            local_cc = iVar9;
          }
        }
        else if (local_cc == -0x65bf07fe) {
          auVar12 = _objc_getClass(&DAT_004a316b);
          auVar13._8_8_ = auVar12._8_8_;
          auVar13._0_8_ = local_88;
          local_98 = auVar12._0_8_;
          local_cc = -0x2a0417ee;
        }
        else if (local_cc == -0x6379b730) {
          uVar1 = DAT_004a4d48 - DAT_004a4d4c;
          _objc_release(local_78);
          _objc_release(param_4);
          _objc_autoreleaseReturnValue(local_c8);
          auVar5._8_8_ = extraout_x1;
          auVar5._0_8_ = local_88;
          auVar13._8_8_ = extraout_x1;
          auVar13._0_8_ = local_88;
          local_cc = 0x3a500ea9;
          if (0x53554ead < (uVar1 ^ 0x4ec28032) * 0x2095d7ed + 0x81a5e9d1) {
            local_cc = 0xd5cf0f1;
            auVar13 = auVar5;
          }
        }
      }
      else if (local_cc < -0x4e84578a) {
        if (local_cc == -0x56f68d95) {
          _objc_release(local_88);
          auVar13._8_8_ = extraout_x1_02;
          auVar13._0_8_ = local_88;
          local_cc = 0x26d8dbf8;
        }
        else if (local_cc == -0x525f1637) {
          local_cc = -0x6999d4a6;
        }
      }
      else if (local_cc == -0x4e84578a) {
        local_cc = 0x1dcbecaf;
      }
      else if ((local_cc == -0x476d466b) &&
              (local_cc = -0x2e4984ea,
              (uint)((ulong)((DAT_004a4c90 * DAT_004a4c94 & 0xe6cb298cU) + 0xfb513259) * 0x32553829
                    >> 0x3d) < 0x31dd7f02)) {
        local_cc = 0x1b79d2d1;
      }
      goto LAB_0016172c;
    }
    if (local_cc < -0x74ae45d4) {
      if (local_cc == -0x7f1a3cea) {
        DAT_004a2d29 = local_6a ^ 0x58;
        DAT_004a316b = DAT_004a3160 ^ 0xde;
        DAT_004a316c = DAT_004a3161 ^ 0x43;
        DAT_004a316d = DAT_004a3162 ^ 0xa3;
        DAT_004a316e = DAT_004a3163 ^ 0x88;
        DAT_004a316f = DAT_004a3164 ^ 0xcb;
        DAT_004a3170 = DAT_004a3165 ^ 0xdb;
        local_cc = 0x7827f962;
        goto LAB_0016172c;
      }
      if (local_cc == -0x7e82875a) {
        local_cc = -0x476d466b;
        goto LAB_0016172c;
      }
      if (local_cc != -0x7b4dc8a0) goto LAB_0016172c;
      bVar8 = ((DAT_004a4cc0 & DAT_004a4cc4 ^ 0xdcc0a3d3) + 0xb8927e5c | 0x46ee0c4b) == 0x35a6b55e;
      iVar9 = -0x7f1a3cea;
      local_cc = 0x7827f962;
    }
    else {
      if (local_cc < -0x6999d4a6) {
        if (local_cc == -0x74ae45d4) {
          local_cc = 0x5382fdae;
        }
        else if (local_cc == -0x69d075f8) {
          uVar1 = DAT_004a4d28 ^ DAT_004a4d2c;
          _objc_msgSend(local_98,local_a0,local_88,param_4);
          auVar12 = _objc_retainAutoreleasedReturnValue();
          bVar8 = (int)((long)((ulong)((uVar1 ^ 0x6c9b157a) + 0xb3c42c61) * 0xa9cc67ab) >> 0x3f) ==
                  0x6a68743f;
          local_cc = -0x69d075f8;
          iVar9 = -0x3f649cc5;
          goto LAB_00162760;
        }
        goto LAB_0016172c;
      }
      if (local_cc == -0x6999d4a6) {
        uVar1 = ((DAT_004a4d18 | DAT_004a4d1c) & 0x6ec43ced | 0x62403081) * 0x47c975e3;
        local_a0 = PTR_s_imageData_fromConfig__0048b0d0;
        bVar7 = 0xcab8ccc1 < uVar1;
        bVar8 = uVar1 == 0xcab8ccc2;
        local_cc = -0x525f1637;
        iVar9 = 0x48a10e68;
        goto LAB_00162428;
      }
      if (local_cc != -0x673cdbc4) goto LAB_0016172c;
      bVar8 = local_69 == '\0';
      iVar9 = 0x2661d5fa;
      local_cc = -0xa3b8b08;
    }
  }
  else {
    if (local_cc < -0x1bad154e) {
      if (local_cc < -0x307718ee) {
        if (local_cc == -0x43f8b072) {
          local_cc = -0x1246b400;
          if (local_89 == '\0') {
            local_cc = -0x65bf07fe;
          }
          local_b0 = 0;
        }
        else if (local_cc == -0x3f649cc5) {
          local_cc = -0x1246b400;
          local_b0 = local_a8;
        }
        else if (local_cc == -0x35590e0c) {
          local_cc = 0x1b3d75cf;
        }
      }
      else if (local_cc < -0x2a4ae042) {
        if (local_cc == -0x307718ee) {
          local_cc = -0x184025bd;
        }
        else if (local_cc == -0x2e4984ea) {
          local_cc = 0x1b79d2d1;
        }
      }
      else if (local_cc == -0x2a4ae042) {
        _objc_msgSend(local_98,local_a0,local_88,param_4);
        _objc_retainAutoreleasedReturnValue();
        auVar13._8_8_ = extraout_x1_03;
        auVar13._0_8_ = local_88;
        local_cc = -0x69d075f8;
      }
      else if (local_cc == -0x2a0417ee) {
        bVar8 = 0x5cd8fff9 < ((DAT_004a4d10 ^ DAT_004a4d14 ^ 0x6e80c5e0) & 0x6ec8eff4 ^ 0x9ac73a1);
        iVar9 = -0x525f1637;
        local_cc = -0x6999d4a6;
LAB_00162000:
        if (bVar8) {
          local_cc = iVar9;
        }
      }
      goto LAB_0016172c;
    }
    if (local_cc < -0x159a1892) {
      if (local_cc == -0x1bad154e) {
        local_cc = -0x7b4dc8a0;
      }
      else if (local_cc == -0x19af8451) {
        iVar9 = _objc_msgSend(param_1,local_80,local_78);
        auVar13._8_8_ = extraout_x1_06;
        auVar13._0_8_ = local_88;
        local_cc = 0x3f842556;
        if (iVar9 == 0) {
          local_cc = -0x65d82394;
        }
        local_b8 = 0;
      }
      else if (local_cc == -0x184025bd) {
        uVar1 = (DAT_004a4c88 ^ DAT_004a4c8c) + 0x82f81aaa | 0x83fa1f62;
        local_68 = DAT_004d1498;
        bVar7 = 0x3b015343 < uVar1;
        bVar8 = uVar1 == 0x3b015344;
        iVar9 = -0x184025bd;
        local_cc = -0x7e82875a;
        goto LAB_00162508;
      }
      goto LAB_0016172c;
    }
    if (local_cc < -0x1246b400) {
      if (local_cc == -0x159a1892) {
        local_cc = -0x65d82394;
        local_b8 = local_c0;
      }
      else if ((local_cc == -0x12c55245) &&
              (local_cc = -0x74ae45d4,
              ((DAT_004a4ca0 ^ DAT_004a4ca4) / 0x554f96 & 0x2bf) + 0xfaa36b4 < 0xc98fc4a4)) {
        local_cc = 0x5382fdae;
      }
      goto LAB_0016172c;
    }
    if (local_cc != -0x1246b400) {
      if (local_cc == -0xfcbb754) {
        DAT_004a2d25 = DAT_004a2d20 ^ 0xfa;
        DAT_004a2d26 = DAT_004a2d21 ^ 0x3f;
        DAT_004a2d27 = DAT_004a2d22 ^ 5;
        DAT_004a2d28 = DAT_004a2d23 ^ 0x94;
        local_6a = DAT_004a2d24;
        bVar8 = (((DAT_004a4cb8 | DAT_004a4cbc) & 0x4fc5cdbd) + 0xed396748) / 0x2f9afc73 ==
                0xe1ebb3c7;
        local_cc = -0xfcbb754;
        iVar9 = -0x1bad154e;
        auVar12 = auVar2;
        goto LAB_00162760;
      }
      goto LAB_0016172c;
    }
    local_c0 = local_b0;
    bVar8 = (uint)((ulong)((DAT_004a4d30 - DAT_004a4d34) + 0x323f238dU & 0xfe5679a2) * 0x8e4b2977 >>
                  0x3e) == 0x81d171b0;
    iVar9 = -0x56f68d95;
    local_cc = 0x26d8dbf8;
  }
LAB_001624e0:
  if (bVar8) {
    local_cc = iVar9;
  }
  goto LAB_0016172c;
}



// ----- -[BubbleBoxAssets cacheImage:] @ 00165ce8 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxAssets::cacheImage_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  undefined8 uVar2;
  int local_74;
  ID local_70;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_74 = 0x824d281;
  iVar1 = local_74;
  do {
    while( true ) {
      while( true ) {
        while (local_74 = iVar1, -0x3d6cadfe < local_74) {
          iVar1 = -0x4ee4e5ff;
          if ((local_74 != -0x3d6cadfd) && (iVar1 = local_74, local_74 == 0x824d281)) {
            local_70 = _objc_msgSend(uVar2,PTR_s_objectForKey__0048a370,param_3);
            iVar1 = -0x71ee663a;
          }
        }
        iVar1 = -0x3d6cadfd;
        if (local_74 != -0x71ee663a) break;
        if ((DAT_004a4f10 * DAT_004a4f14 * -0x419f7fb1 + 0x260369faU) / 0x1c64bf22 < 0xebf96a8c) {
          iVar1 = -0x4ee4e5ff;
        }
      }
      if (local_74 != -0x4ee4e5ff) break;
      if (0x5c48ddf7 < (DAT_004a4f18 + DAT_004a4f1c & 0xc90226daU ^ 0xf4ea412b)) {
        iVar1 = -0x6e75fa2d;
      }
    }
    iVar1 = local_74;
  } while (local_74 != -0x6e75fa2d);
  return local_70;
}



// ----- -[BubbleBoxAssets setCacheImage:key:] @ 00165e68 -----

/* Function Stack Size: 0x20 bytes */

void BubbleBoxAssets::setCacheImage_key_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  undefined8 *local_70;
  
  uVar1 = DAT_004a4f20 & DAT_004a4f24;
  local_74 = -0x1e191bb9;
  iVar3 = local_74;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, -0x43407750 < local_74) {
            if (local_74 < 0x19266cd0) {
              if (local_74 == -0x4340774f) {
                _objc_msgSend(*local_70,PTR_s_setObject_forKey__0048a380,param_3,param_4);
                iVar3 = -0x4ee98f0a;
              }
              else if (local_74 == -0x2fa14e81) {
                iVar3 = -0x4ee98f0a;
                if (0xdbf33235 < (DAT_004a4f30 + DAT_004a4f34) * -0x681363b6 + 0xdcf69b54U) {
                  iVar3 = -0x4340774f;
                }
              }
              else if ((local_74 == -0x1e191bb9) &&
                      (iVar3 = -0x59690168,
                      (uVar1 + 0x53e961de) / 0x57e338e9 + 0x1d59f04d < 0x53878815)) {
                iVar3 = -0x73bbc0ba;
              }
            }
            else if (local_74 == 0x19266cd0) {
              iVar3 = -0x2fa14e81;
            }
            else if (local_74 == 0x5a5361fb) {
              iVar3 = -0x69f63760;
            }
            else if (local_74 == 0x6932dc11) {
              iVar3 = -0x7b759d97;
            }
          }
          if (-0x59690169 < local_74) break;
          if (local_74 == -0x7b759d97) {
            iVar3 = 0x5a5361fb;
            if ((DAT_004a4f40 - DAT_004a4f44 ^ 0xb35d1b1dU) / 0x2024ba88 + 0x232531d1 < 0xc576e876)
            {
              iVar3 = -0x69f63760;
            }
          }
          else if (local_74 == -0x73bbc0ba) {
            iVar3 = -0x59690168;
            local_70 = (undefined8 *)(param_1 + 0x20);
            if (((uint)((ulong)(uint)(DAT_004a4f28 * DAT_004a4f2c) * 0x75fa831 >> 0x36) & 1) !=
                0x705c8d02) {
              iVar3 = 0x19266cd0;
            }
          }
          else if (local_74 == -0x69f63760) {
            iVar3 = -0x4986b79f;
          }
        }
        iVar3 = -0x73bbc0ba;
      } while (local_74 == -0x59690168);
      if (local_74 != -0x4ee98f0a) break;
      uVar2 = DAT_004a4f38 | DAT_004a4f3c;
      _objc_msgSend(*local_70,PTR_s_setObject_forKey__0048a380,param_3,param_4);
      iVar3 = 0x6932dc11;
      if (uVar2 + 0xbac8bcf6 < 0x5ac6b53) {
        iVar3 = -0x4340774f;
      }
    }
    iVar3 = local_74;
  } while (local_74 != -0x4986b79f);
  return;
}



// ----- -[BubbleBoxAssets cache] @ 001661c4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxAssets::cache(ID param_1,SEL param_2)

{
  int iVar1;
  int local_74;
  ID local_70;
  
  local_74 = 0x4e5fdda8;
LAB_001662b4:
  if (local_74 < 0x12b0d86) {
    if (-0x43d98dc < local_74) {
      if (local_74 == -0x43d98db) {
        iVar1 = 0x12b0d86;
        goto LAB_001663e4;
      }
      if (local_74 == -0x2e06fd6) {
        return local_70;
      }
      goto LAB_001662b4;
    }
    if (local_74 == -0x65f7870d) {
      iVar1 = 0x76945fec;
      goto LAB_001663e4;
    }
    iVar1 = 0x56754457;
    if (local_74 != -0x32d37059) goto LAB_001662b4;
  }
  else {
    iVar1 = -0x32d37059;
    if (local_74 < 0x56754457) {
      if (local_74 == 0x12b0d86) {
        iVar1 = 0x76945fec;
        if ((uint)((ulong)((DAT_004a4f60 | DAT_004a4f64) & 0xc028a200 | 0x15170c7f) * 0x7b3ae8d9 >>
                  0x3e) == 0x30c3292a) {
          iVar1 = -0x65f7870d;
        }
      }
      else {
        if (local_74 != 0x4e5fdda8) goto LAB_001662b4;
        if ((uint)((ulong)((DAT_004a4f50 | DAT_004a4f54) + 0x93639efb) * 0x3019dc99 >> 0x3c) !=
            0x31ff6e2d) {
          iVar1 = 0x56754457;
        }
      }
    }
    else if (local_74 == 0x56754457) {
      local_70 = *(ID *)(param_1 + 0x20);
      if (((DAT_004a4f58 ^ DAT_004a4f5c) & 0x9f103695 | 0x97003495) != 0x7c508698) {
        iVar1 = -0x43d98db;
      }
    }
    else {
      if (local_74 != 0x76945fec) goto LAB_001662b4;
      iVar1 = 0x76945fec;
      if ((DAT_004a4f68 * DAT_004a4f6c + 0xfb87cfa1U) / 0x7723c62a != 0xf30d2005) {
        iVar1 = -0x2e06fd6;
      }
    }
  }
LAB_001663e4:
  local_74 = iVar1;
  goto LAB_001662b4;
}



// ----- -[BubbleBoxAssets setCache:] @ 0016641c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxAssets::setCache_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  ID IVar3;
  int local_74;
  
  pIVar1 = (ID *)(param_1 + 0x20);
  _objc_retain(param_3);
  IVar3 = *pIVar1;
  local_74 = 0x42f4fe0e;
  do {
    while( true ) {
      while( true ) {
        while (0x5d60c134 < local_74) {
          if (local_74 == 0x5d60c135) {
            uVar2 = DAT_004a4f78 | DAT_004a4f7c;
            *pIVar1 = param_3;
            _objc_release(IVar3);
            local_74 = 0x5d60c135;
            if ((uVar2 + 0xbff32ba2 | 0x43086e5c) != 0x63e7c631) {
              local_74 = -0x501d9d25;
            }
          }
          else if (local_74 == 0x6efb571b) {
            *pIVar1 = param_3;
            _objc_release(IVar3);
            local_74 = 0x5d60c135;
          }
        }
        if (local_74 != -0x501d9d25) break;
        local_74 = 0x22a9c85a;
      }
      if (local_74 != 0x42f4fe0e) break;
      uVar2 = 0;
      if (DAT_004a4f74 != 0) {
        uVar2 = DAT_004a4f70 / DAT_004a4f74;
      }
      local_74 = 0x6efb571b;
      if (uVar2 != 0xb88766) {
        local_74 = 0x5d60c135;
      }
    }
  } while (local_74 != 0x22a9c85a);
  return;
}



// ----- -[BubbleBoxAssets bubbleFiles] @ 0016658c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxAssets::bubbleFiles(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x2553c572;
LAB_00166680:
  if (local_7c < 0x1a7208d8) {
    if (local_7c < -0x2d9f07af) {
      if (local_7c == -0x47dff0a2) {
        iVar1 = -0x723d5ba9;
        goto LAB_0016682c;
      }
      if (local_7c == -0x3c8117a9) {
        local_78 = *local_70;
        iVar1 = 0x5a227548;
        if (((uint)((ulong)(uint)(DAT_004a4f98 * DAT_004a4f9c) * 0xef068bf >> 0x3b) * -0x727cc1d5 &
            0xf19c36c2) < 0x4fffebc9) {
          iVar1 = 0x3c8aad82;
        }
        goto LAB_0016682c;
      }
      if (local_7c == -0x723d5ba9) {
        return local_78;
      }
      goto LAB_00166680;
    }
    if (local_7c == -0x2d9f07af) {
      iVar1 = -0x47dff0a2;
      if (0xe955fcb0 < (DAT_004a4fa0 & DAT_004a4fa4) * -0x42efc230 + 0x7eabc26a) {
        iVar1 = 0x620e1c55;
      }
    }
    else {
      if (local_7c != -0x2553c572) {
        if (local_7c == -0x18ac7bac) {
          iVar1 = -0x3c8117a9;
          if (((DAT_004a4f90 ^ DAT_004a4f94 | 0xd6a4ba2) + 0x35ca4add | 0xf11bd6b3) == 0x38651e08) {
            iVar1 = 0x3c8aad82;
          }
          goto LAB_0016682c;
        }
        goto LAB_00166680;
      }
      iVar1 = 0x2e5a9627;
    }
  }
  else if (local_7c < 0x3c8aad82) {
    if (local_7c == 0x1a7208d8) {
      iVar1 = -0x18ac7bac;
    }
    else if (local_7c == 0x2e5a9627) {
      iVar1 = 0x3be876a1;
      local_70 = (ID *)(param_1 + 0x28);
      if (0x6f93db48 < (((DAT_004a4f88 | DAT_004a4f8c) ^ 0x8fc00288 | 0x3fd977) ^ 0xe76c394a)) {
        iVar1 = 0x1a7208d8;
      }
    }
    else {
      iVar1 = 0x2e5a9627;
      if (local_7c != 0x3be876a1) goto LAB_00166680;
    }
  }
  else {
    iVar1 = -0x3c8117a9;
    if (local_7c != 0x3c8aad82) {
      if (local_7c == 0x5a227548) {
        iVar1 = -0x2d9f07af;
      }
      else {
        if (local_7c != 0x620e1c55) goto LAB_00166680;
        iVar1 = -0x47dff0a2;
      }
    }
  }
LAB_0016682c:
  local_7c = iVar1;
  goto LAB_00166680;
}



// ----- -[BubbleBoxAssets setBubbleFiles:] @ 0016686c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxAssets::setBubbleFiles_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  uint uVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar3 = DAT_004a4fb0 | DAT_004a4fb4;
  local_7c = 0x1b25e0d1;
  pIVar1 = (ID *)(param_1 + 0x28);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < 0xb38592c) {
            if (local_7c < -0x21c7c986) {
              if (local_7c == -0x76d088d7) {
                *local_70 = param_3;
                _objc_release(local_78,param_2);
                param_2 = extraout_x1_00;
                local_7c = 0x1043bf5e;
              }
              else if (local_7c == -0x41abfde0) {
                local_7c = -0x25e5d3c3;
              }
              else if ((local_7c == -0x25e5d3c3) &&
                      (local_7c = 0xb38592c, 0xe1b3be85 < DAT_004a4fd8 + DAT_004a4fdc + 0x14551d75U)
                      ) {
                local_7c = -0x41abfde0;
              }
            }
            else if (local_7c == -0x21c7c986) {
              _objc_retain(param_3);
              param_2 = extraout_x1_01;
              local_7c = 0x6153a126;
            }
            else if (local_7c == -0x9a406db) {
              local_7c = 0x1043bf5e;
              if (((uint)((ulong)(DAT_004a4fc0 ^ DAT_004a4fc4 | 0x694738e3) * 0x869c0157 >> 0x3f) ^
                  0xddfd779b) < 0x58c711bf) {
                local_7c = -0x76d088d7;
              }
            }
            else if ((local_7c == 0xac80de2) &&
                    (local_7c = -0x25e5d3c3,
                    ((DAT_004a4fd0 ^ DAT_004a4fd4) * -0x13561048 | 0xe78828c9) < 0x360cdf5e)) {
              local_7c = -0x41abfde0;
            }
          }
          if (local_7c < 0x528b2a04) break;
          if (local_7c == 0x528b2a04) {
            local_7c = -0x9a406db;
          }
          else if (local_7c == 0x5703f0a0) {
            local_7c = 0xac80de2;
          }
          else if (local_7c == 0x6153a126) {
            uVar2 = DAT_004a4fb8 & DAT_004a4fbc;
            _objc_retain(param_3);
            local_78 = *pIVar1;
            param_2 = extraout_x1;
            local_7c = -0x21c7c986;
            local_70 = pIVar1;
            if ((uVar2 + 0xf61459a2 & 0x6004d834) != 0xab10bdda) {
              local_7c = 0x528b2a04;
            }
          }
        }
        if (local_7c != 0x1043bf5e) break;
        uVar2 = DAT_004a4fc8 - DAT_004a4fcc;
        *local_70 = param_3;
        _objc_release(local_78,param_2);
        param_2 = extraout_x1_02;
        local_7c = 0x5703f0a0;
        if ((int)((long)((ulong)(uVar2 | 0x48bcba85) * 0x9ce98233) >> 0x3f) == 0x57b1bce8) {
          local_7c = -0x76d088d7;
        }
      }
      if (local_7c != 0x1b25e0d1) break;
      local_7c = -0x21c7c986;
      if (((uVar3 | 0x3f5ab6de) + 0x9082c34e & 0xd3dcc169) < 0x8518a430) {
        local_7c = 0x6153a126;
      }
    }
  } while (local_7c != 0xb38592c);
  return;
}



// ----- -[BubbleBoxAssets bubbleFileMap] @ 00166bfc -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxAssets::bubbleFileMap(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_44;
  ID local_40;
  
  local_44 = 0x31fb9802;
LAB_00166cb8:
  if (local_44 < 0x22ce8bcb) {
    if (local_44 < -0x1f4265ec) {
      if (local_44 == -0x4d217ec0) {
        iVar2 = 0x42ba258d;
      }
      else {
        iVar2 = 0x22ce8bcb;
        if (local_44 != -0x3d35e960) goto LAB_00166cb8;
      }
    }
    else if (local_44 == -0x1f4265ec) {
      iVar2 = 0x33c230e2;
    }
    else {
      if (local_44 != -0xba61dd9) goto LAB_00166cb8;
      iVar2 = -0x1f4265ec;
    }
  }
  else {
    if (0x33c230e1 < local_44) {
      if (local_44 == 0x42ba258d) {
        uVar1 = 0;
        if (DAT_004a4ff4 != 0) {
          uVar1 = DAT_004a4ff0 / DAT_004a4ff4;
        }
        iVar2 = -0x1f4265ec;
        if ((uVar1 * -0x1d59f808 | 0x3bf1c869) == 0xdbedda14) {
          iVar2 = -0xba61dd9;
        }
        goto LAB_00166d94;
      }
      if (local_44 == 0x33c230e2) {
        return local_40;
      }
      goto LAB_00166cb8;
    }
    if (local_44 == 0x22ce8bcb) {
      local_40 = *(ID *)(param_1 + 0x30);
      iVar2 = -0x4d217ec0;
      goto LAB_00166d94;
    }
    if (local_44 != 0x31fb9802) goto LAB_00166cb8;
    iVar2 = -0x3d35e960;
    if (((uint)(DAT_004a4fe0 - DAT_004a4fe4) / 0x6438539 | 0x1e16ab80) < 0x870c5752) {
      iVar2 = 0x22ce8bcb;
    }
  }
LAB_00166d94:
  local_44 = iVar2;
  goto LAB_00166cb8;
}



// ----- -[BubbleBoxAssets setBubbleFileMap:] @ 00166dc0 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxAssets::setBubbleFileMap_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  ID IVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar5;
  int local_74;
  ID *local_70;
  
  iVar1 = DAT_004a5000 - DAT_004a5004;
  local_74 = 0x3f7513;
LAB_00166e68:
  if (local_74 < 0x3f7513) {
    if (-0x1f8f9f96 < local_74) {
      if (local_74 == -0x1f8f9f95) {
        _objc_retain(param_3,param_2);
        param_2 = extraout_x1_01;
        iVar5 = 0x7c41b05a;
        goto LAB_00167138;
      }
      if (local_74 == -0x1a979c83) {
        IVar4 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar4);
        param_2 = extraout_x1_00;
        iVar5 = 0x15a293aa;
        goto LAB_00167138;
      }
      if (local_74 == -0x118885b2) {
        return;
      }
      goto LAB_00166e68;
    }
    if (local_74 == -0x7f8a9fe1) {
      iVar5 = 0x6eb6f33d;
      goto LAB_00167138;
    }
    if (local_74 == -0x5408c4f0) {
      bVar3 = 0x690b402a < ((DAT_004a5008 ^ DAT_004a500c) / 0x155a0637 ^ 0x8851142e) * -0x602caa89;
      iVar5 = 0x62fb87ca;
      local_70 = (ID *)(param_1 + 0x30);
      goto LAB_0016707c;
    }
    iVar5 = -0x5408c4f0;
    if (local_74 != -0x37d2f7b5) goto LAB_00166e68;
  }
  else if (local_74 < 0x6eb6f33d) {
    if (local_74 == 0x3f7513) {
      bVar3 = 0x1f57e27e < (iVar1 + 0xa47f5511U ^ 0x239bd76c);
      iVar5 = -0x37d2f7b5;
LAB_0016707c:
      if (bVar3) {
        iVar5 = -0x5408c4f0;
      }
    }
    else if (local_74 == 0x15a293aa) {
      uVar2 = 0;
      if (DAT_004a502c != 0) {
        uVar2 = DAT_004a5028 / DAT_004a502c;
      }
      IVar4 = *local_70;
      *local_70 = param_3;
      _objc_release(IVar4);
      param_2 = extraout_x1_02;
      iVar5 = -0x118885b2;
      if (((uVar2 ^ 0x5fca5840) + 0x28689c83 ^ 0x103fb9d8) < 0x5cc64b5d) {
        iVar5 = -0x1a979c83;
      }
    }
    else {
      if (local_74 != 0x62fb87ca) goto LAB_00166e68;
      iVar5 = 0x78a1ea47;
    }
  }
  else if (local_74 == 0x6eb6f33d) {
    iVar5 = -0x1a979c83;
    if (((uint)((ulong)(DAT_004a5020 & DAT_004a5024) * 0x1e61a043 >> 0x3c) ^ 0x16f457c3) *
        0x69767a27 < 0xf25959a6) {
      iVar5 = 0x15a293aa;
    }
  }
  else if (local_74 == 0x78a1ea47) {
    iVar5 = 0x7c41b05a;
    if (0x419e0e8a < (uint)((ulong)(DAT_004a5010 - DAT_004a5014 | 0x7f37df7c) * 0x218b6251 >> 0x3d))
    {
      iVar5 = -0x1f8f9f95;
    }
  }
  else {
    if (local_74 != 0x7c41b05a) goto LAB_00166e68;
    uVar2 = DAT_004a5018 | DAT_004a501c;
    _objc_retain(param_3,param_2);
    param_2 = extraout_x1;
    iVar5 = -0x1f8f9f95;
    if ((uVar2 + 0x8dad777f & 0x8c19d4) != 0x7590bf47) {
      iVar5 = -0x7f8a9fe1;
    }
  }
LAB_00167138:
  local_74 = iVar5;
  goto LAB_00166e68;
}



// ----- -[BubbleBoxAssets isLoadLocalBubble] @ 00167174 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxAssets::isLoadLocalBubble(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_6c;
  byte local_66;
  byte local_65;
  
  local_6c = 0xcab619e;
LAB_0016729c:
  if (local_6c < 0x34e0faa3) {
    iVar2 = 0x34e0faa3;
    if (local_6c < 0x18d12855) {
      if (local_6c == -0x1136b5fe) {
        uVar1 = 0;
        if (DAT_004a5054 != 0) {
          uVar1 = DAT_004a5050 / DAT_004a5054;
        }
        iVar2 = 0x4386f246;
        if ((int)((long)((ulong)((uVar1 ^ 0x69c0f87f) + 0x3d627cba) * 0x9a12669d) >> 0x3f) ==
            -0x58d6dd4c) {
          iVar2 = 0x67d48f47;
        }
        goto LAB_00167480;
      }
      if (local_6c == 0xcab619e) {
        if (((uint)((ulong)((DAT_004a5030 & DAT_004a5034) + 0x57455cc7) * 0xb24a051 >> 0x3a) |
            0x367d3578) < 0x7b730646) {
          iVar2 = 0x28dbb955;
        }
        goto LAB_00167480;
      }
      if (local_6c == -0x906b526) {
        return (bool)local_66;
      }
      goto LAB_0016729c;
    }
    if (local_6c == 0x18d12855) {
      iVar2 = -0x1136b5fe;
    }
    else {
      if (local_6c == 0x246b882d) {
        iVar2 = 0x6c1193a0;
        if ((DAT_004a5040 ^ DAT_004a5044) * -0x5e736cd5 == 0x669f8513) {
          iVar2 = 0x7e221940;
        }
        goto LAB_00167480;
      }
      if (local_6c != 0x28dbb955) goto LAB_0016729c;
      local_65 = *(byte *)(param_1 + 0x18);
      if ((int)((long)((ulong)(uint)(DAT_004a5038 - DAT_004a503c) * 0x9d20147d) >> 0x3f) *
          -0x65bf8f88 != -0x5aff4b85) {
        iVar2 = 0x36e9c73f;
      }
    }
  }
  else if (local_6c < 0x67d48f47) {
    iVar2 = 0x28dbb955;
    if (local_6c != 0x34e0faa3) {
      if (local_6c == 0x36e9c73f) {
        iVar2 = 0x246b882d;
      }
      else {
        if (local_6c != 0x4386f246) goto LAB_0016729c;
        iVar2 = -0x906b526;
        if ((uint)((ulong)(DAT_004a5058 * DAT_004a505c | 0xf7edefe5) * 0x5061b3ed >> 0x3e) ==
            0x28f49b6b) {
          iVar2 = 0x67d48f47;
        }
      }
    }
  }
  else if (local_6c == 0x67d48f47) {
    iVar2 = 0x4386f246;
  }
  else if (local_6c == 0x6c1193a0) {
    local_66 = local_65 & 1;
    iVar2 = 0x18d12855;
    if (((DAT_004a5048 & DAT_004a504c | 0x3866c25c) + 0x2932000d & 0x618b1e6e) == 0x25d8a43) {
      iVar2 = 0x6c1193a0;
    }
  }
  else {
    iVar2 = 0x6c1193a0;
    if (local_6c != 0x7e221940) goto LAB_0016729c;
  }
LAB_00167480:
  local_6c = iVar2;
  goto LAB_0016729c;
}



// ----- -[BubbleBoxAssets setIsLoadLocalBubble:] @ 001674b8 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxAssets::setIsLoadLocalBubble_(ID param_1,SEL param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_6c;
  undefined1 local_65;
  
  iVar1 = DAT_004a5060 + DAT_004a5064;
  local_6c = 0x36d87d54;
  iVar3 = local_6c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_6c = iVar3, iVar3 = local_6c, 0x5c098f1 < local_6c) {
            if (local_6c < 0x484f3393) {
              if (local_6c == 0x5c098f2) {
                uVar2 = 0;
                if (DAT_004a5074 != 0) {
                  uVar2 = DAT_004a5070 / DAT_004a5074;
                }
                iVar3 = 0x54fa8d49;
                if (0xfc8492d6 < uVar2 + 0xad2813c0) {
                  iVar3 = -0x335a5e7b;
                }
              }
              else if (local_6c == 0x1db63158) {
                iVar3 = -0x6ef2bf9a;
              }
              else if ((local_6c == 0x36d87d54) &&
                      (iVar3 = 0x484f3393, 0xd1143535 < iVar1 * -0x61581ba1 + 0xbf502742U)) {
                iVar3 = -0x481e067b;
              }
            }
            else if (local_6c == 0x484f3393) {
              local_65 = (undefined1)param_3;
              iVar3 = 0x484f3393;
              if (0x2f167f10 <
                  (((DAT_004a5068 ^ DAT_004a506c) & 0x66165764) * -0x46f91e4e ^ 0x8e3b59da)) {
                iVar3 = 0x75e9ae88;
              }
            }
            else if (local_6c == 0x54fa8d49) {
              *(undefined1 *)(param_1 + 0x18) = local_65;
              iVar3 = -0x67e84855;
            }
            else if (local_6c == 0x75e9ae88) {
              iVar3 = 0x5c098f2;
            }
          }
          if (local_6c < -0x481e067b) break;
          iVar3 = 0x484f3393;
          if (local_6c != -0x481e067b) {
            if (local_6c == -0x335a5e7b) {
              *(undefined1 *)(param_1 + 0x18) = local_65;
              iVar3 = 0x54fa8d49;
            }
            else {
              iVar3 = local_6c;
              if ((local_6c == -0x1a3f8aec) &&
                 (iVar3 = 0x1db63158,
                 DAT_004a5080 * DAT_004a5084 * -0x76536343 + 0x171736b6U < 0xe36982ad)) {
                iVar3 = -0x6ef2bf9a;
              }
            }
          }
        }
        if (local_6c != -0x6ef2bf9a) break;
        iVar3 = -0x6ef2bf9a;
        if (0x2c0b68cb < ((DAT_004a5088 & DAT_004a508c ^ 0x20390241) & 0xe8b942dd ^ 0xe6e3e773)) {
          iVar3 = -0x50f6691e;
        }
      }
      if (local_6c != -0x67e84855) break;
      iVar3 = -0x1a3f8aec;
    }
  } while (local_6c != -0x50f6691e);
  return;
}



// ----- -[BubbleBoxAssets .cxx_destruct] @ 001677a0 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxAssets::_cxx_destruct(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  int local_68;
  
  iVar1 = DAT_004a5090 + DAT_004a5094;
  local_68 = 0x4a2f40;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x1588f72a < local_68) {
            if (local_68 < 0x4fab528c) {
              if (local_68 == 0x1588f72b) {
                local_68 = 0x774d2189;
              }
              else if ((local_68 == 0x3a00439a) &&
                      (uVar2 = DAT_004a50a8 + DAT_004a50ac, _objc_storeStrong(param_1 + 0x20,0),
                      local_68 = -0x23532709,
                      0x9d4a7cf5 < (uVar2 | 0x462ad4c3) * -0x268ffa67 + 0x2103c60d)) {
                local_68 = -0x252926a9;
              }
            }
            else if (local_68 == 0x4fab528c) {
              uVar2 = 0;
              if (DAT_004a509c != 0) {
                uVar2 = DAT_004a5098 / DAT_004a509c;
              }
              _objc_storeStrong(param_1 + 0x30,0);
              _objc_storeStrong(param_1 + 0x28,0);
              local_68 = 0x4fab528c;
              if (0xa5f23db4 < (uVar2 & 0xe6438058) / 0x357c5aad + 0xe65d3731) {
                local_68 = 0x1588f72b;
              }
            }
            else if ((local_68 == 0x774d2189) &&
                    (local_68 = -0x252926a9,
                    ((DAT_004a50a0 | DAT_004a50a4) * -0x1995c0b8) / 0x7c629865 < 0x7c7f4899)) {
              local_68 = 0x3a00439a;
            }
          }
          if (local_68 < -0x23532709) break;
          if (local_68 == -0x23532709) {
            local_68 = -0x3d493718;
          }
          else if ((local_68 == 0x4a2f40) &&
                  (local_68 = 0x4fab528c, iVar1 * -0x2d4c715 + 0x94c1a2d8U < 0x2525c7a7)) {
            local_68 = -0x4df731fb;
          }
        }
        if (local_68 != -0x4df731fb) break;
        _objc_storeStrong(param_1 + 0x30,0);
        _objc_storeStrong(param_1 + 0x28,0);
        local_68 = 0x4fab528c;
      }
      if (local_68 != -0x252926a9) break;
      _objc_storeStrong(param_1 + 0x20,0);
      local_68 = 0x3a00439a;
    }
  } while (local_68 != -0x3d493718);
  _objc_storeStrong(param_1 + 8,0);
  return;
}


