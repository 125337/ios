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