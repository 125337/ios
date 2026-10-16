// ##### +[isSeparatorMessage:] @ 002fc6a8
// #####################################

/* Function Stack Size: 0x18 bytes */

bool BubbleMessageMerge::isSeparatorMessage_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  SEL extraout_x1_04;
  SEL extraout_x1_05;
  SEL extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  SEL extraout_x1_09;
  SEL extraout_x1_10;
  SEL extraout_x1_11;
  SEL extraout_x1_12;
  SEL extraout_x1_13;
  SEL extraout_x1_14;
  SEL extraout_x1_15;
  SEL extraout_x1_16;
  int local_e0;
  byte local_dc;
  byte local_db;
  byte local_da;
  byte local_d9;
  int local_d8;
  char local_d1;
  undefined *local_d0;
  char local_c1;
  int local_c0;
  char local_b9;
  uint local_b8;
  char local_b1;
  int local_b0;
  char local_a9;
  int local_a8;
  char local_a1;
  undefined *local_a0;
  char local_95;
  int local_94;
  undefined *local_90;
  char local_81;
  undefined8 local_80;
  undefined *local_78;
  undefined *local_70;
  char local_65;
  
  iVar3 = DAT_004bc840 - DAT_004bc844;
  local_e0 = 0x6ebc021f;
LAB_002fc780:
  if (local_e0 < 0x97655b) {
    if (local_e0 < -0x3b75cf3d) {
      if (local_e0 < -0x5926457e) {
        if (-0x6749c986 < local_e0) {
          if (local_e0 < -0x600fd00f) {
            if (local_e0 == -0x6749c985) {
              local_e0 = -0x37630c58;
            }
            else if (local_e0 == -0x64e31cbc) {
              local_b0 = _objc_msgSend(param_3,local_90);
              local_e0 = -0x60a4fa1e;
              param_2 = extraout_x1_10;
            }
            else if (local_e0 == -0x60a4fa1e) {
              bVar5 = false;
              local_e0 = -0x1ded8b29;
              iVar6 = -0x600fd00f;
              goto LAB_002fe128;
            }
          }
          else if (local_e0 == -0x600fd00f) {
            local_e0 = -0x1ded8b29;
          }
          else if (local_e0 == -0x5f32f369) {
            local_e0 = 0xd70c0d;
          }
          else if (local_e0 == -0x5a40d1ae) {
            local_e0 = 0x71298c4e;
          }
          goto LAB_002fc780;
        }
        if (local_e0 < -0x6f560fe3) {
          if (local_e0 == -0x798c2cee) {
LAB_002fd7f8:
            local_e0 = 0x742ff686;
          }
          else {
            if (local_e0 == -0x76301a53) {
              bVar5 = (DAT_004bc8c0 - DAT_004bc8c4) * -0x73ab7c44 == 0x31937e41;
              iVar6 = -0x1f148bc1;
              local_e0 = 0x4a30a227;
              goto LAB_002fde2c;
            }
            if (local_e0 == -0x7340a273) {
              local_e0 = -0x45872470;
            }
          }
          goto LAB_002fc780;
        }
        if (local_e0 == -0x6f560fe3) {
          local_70 = PTR_BubbleBoxConfig_0048c990;
          bVar5 = DAT_004bc868 * DAT_004bc86c * -0x3568fdcc == 0x3970a3ce;
          iVar6 = 0x7a67f502;
          local_e0 = 0x37932e0d;
          goto LAB_002fe2f4;
        }
        if (local_e0 != -0x6ddc20db) {
          if (local_e0 == -0x6c10fdff) {
            local_e0 = -0x3b923a94;
          }
          goto LAB_002fc780;
        }
        bVar5 = (DAT_004bc930 | DAT_004bc934 | 0x52a087dd) * 0xa778032 == -0x2eea249d;
        local_e0 = -0x374beaec;
        iVar6 = -0x4d40c739;
      }
      else {
        if (-0x4981907f < local_e0) {
          if (-0x431ac2f3 < local_e0) {
            if (local_e0 == -0x431ac2f2) {
              local_c1 = local_c0 == 0x31;
              bVar5 = 0xbcb050a5 < (DAT_004bc928 | DAT_004bc92c) * -0x6c1efd21 + 0x52280ce6;
              iVar6 = -0x5926457e;
              local_e0 = -0x292c373c;
              goto LAB_002fe238;
            }
            if (local_e0 == -0x3cb5fb99) {
              local_b8 = _objc_msgSend(param_3,local_90);
              local_e0 = 0x611177d0;
              param_2 = extraout_x1_12;
            }
            else if ((local_e0 == -0x3b923a94) &&
                    (local_e0 = -0x5a40d1ae,
                    (((DAT_004bc890 ^ DAT_004bc894) + 0xcfbf3a18) * -0x1517586b & 0x129dd32a) !=
                    0xff406326)) {
              local_e0 = 0x71298c4e;
            }
            goto LAB_002fc780;
          }
          if (local_e0 != -0x4981907e) {
            if (local_e0 == -0x46a6fcec) {
              bVar5 = local_81 == '\0';
              iVar6 = 0x399c2bf7;
              local_e0 = -0x396b3e80;
              goto LAB_002fe2f4;
            }
            if (local_e0 == -0x45872470) {
              local_65 = param_3 == 0;
              local_e0 = -0x54a0b123;
            }
            goto LAB_002fc780;
          }
          uVar1 = DAT_004bc958 & DAT_004bc95c;
          iVar6 = _objc_msgSend(param_3,local_d0);
          local_d1 = iVar6 == 0x3e4;
          bVar5 = 0x867d66e0 < (uVar1 ^ 0x46940806 | 0xa16932b9) + 0x7a638c74;
          iVar6 = -0x4981907e;
          local_e0 = 0x79798f58;
          param_2 = extraout_x1_06;
          goto LAB_002fe238;
        }
        if (-0x4d40c73a < local_e0) {
          if (local_e0 == -0x4d40c739) {
            uVar1 = (DAT_004bc938 * DAT_004bc93c | 0xbe7fbfcdU) * -0x1ac12781;
            bVar4 = 0xabe876e3 < uVar1;
            bVar5 = uVar1 == 0xabe876e4;
            local_e0 = -0x374beaec;
            iVar6 = 0x2d78c142;
            goto LAB_002fe458;
          }
          if (local_e0 == -0x4ce782b8) {
            _objc_retain(param_3,param_2);
            local_e0 = -0x5061b169;
            param_2 = extraout_x1_11;
          }
          else if (local_e0 == -0x4ca34728) {
            iVar6 = -0x3cb5fb99;
            cVar2 = local_b1;
            goto LAB_002fdd7c;
          }
          goto LAB_002fc780;
        }
        if (local_e0 == -0x5926457e) goto LAB_002fd7e4;
        if (local_e0 == -0x54a0b123) {
          local_e0 = -0x24efb301;
          goto LAB_002fc780;
        }
        if (local_e0 != -0x5061b169) goto LAB_002fc780;
        uVar1 = 0;
        if (DAT_004bc84c != 0) {
          uVar1 = DAT_004bc848 / DAT_004bc84c;
        }
        _objc_retain(param_3,param_2);
        bVar5 = ((uVar1 ^ 0x9000003a) & 0xbd00633b) * 0x1a32984b == 0x1529e8f4;
        local_e0 = -0x4ce782b8;
        iVar6 = -0x6749c985;
        param_2 = extraout_x1_00;
      }
      if (!bVar5) {
        local_e0 = iVar6;
      }
      goto LAB_002fc780;
    }
    if (-0x26777a56 < local_e0) {
      if (-0x1cad4959 < local_e0) {
        if (local_e0 < -0xe4b9999) {
          if (local_e0 < -0x159fd0c9) {
            if (local_e0 == -0x1cad4958) {
              bVar5 = 0xb555a080 < (DAT_004bc980 * DAT_004bc984 + 0xc85c0a78U & 0x67c4444c);
              local_e0 = -0x937582;
              iVar6 = 0x68f64917;
              goto LAB_002fe128;
            }
            if (local_e0 == -0x16993899) {
              return (bool)local_dc;
            }
          }
          else if (local_e0 == -0x159fd0c9) {
            _objc_msgSend(param_3,local_90);
            local_e0 = 0x19a25e6c;
            param_2 = extraout_x1_05;
          }
          else if (local_e0 == -0x141e7361) {
            uVar1 = 0;
            if (DAT_004bc87c != 0) {
              uVar1 = DAT_004bc878 / DAT_004bc87c;
            }
            _objc_msgSend(local_70,local_78);
            local_80 = _objc_retainAutoreleasedReturnValue();
            local_81 = _objc_msgSend(local_80,PTR_s_emoticonSeparator_0048a900);
            local_90 = PTR_s_m_uiMessageType_0048b840;
            bVar5 = 0xa385d50b < ((uVar1 | 0x904c9d2c) ^ 0x8c86d733);
            iVar6 = -0x141e7361;
            local_e0 = -0x46a6fcec;
            param_2 = extraout_x1;
            goto LAB_002fe238;
          }
        }
        else {
          if (local_e0 == -0xe4b9999) {
            uVar1 = (DAT_004bc978 & DAT_004bc97c & 0x1b19206d | 0x8100025) * -0x66ecd86f;
            local_d9 = local_d8 == 0x3e;
            bVar4 = 0xa6e79382 < uVar1;
            bVar5 = uVar1 == 0xa6e79383;
            local_e0 = 0x6ada8818;
            iVar6 = 0xce65c5c;
            goto LAB_002fe458;
          }
          if (local_e0 == -0xa8bf94f) goto LAB_002fd7f8;
          if (local_e0 == -0x937582) {
            bVar5 = 0x808d6813 <
                    (((DAT_004bc988 | DAT_004bc98c) ^ 0x5e59df59) + 0x8bafe249) / 0x719e5f9c;
            iVar6 = -0x937582;
            local_e0 = 0x4d293fd7;
            goto LAB_002fe238;
          }
        }
        goto LAB_002fc780;
      }
      if (-0x1f148bc2 < local_e0) {
        if (local_e0 == -0x1f148bc1) {
          uVar1 = DAT_004bc8c8 | DAT_004bc8cc;
          local_a8 = _objc_msgSend(param_3,local_90);
          bVar5 = (uVar1 | 0xcef62ef6) == 0x433faaa0;
          iVar6 = -0x1f148bc1;
          local_e0 = 0x6f580bb1;
          param_2 = extraout_x1_16;
          goto LAB_002fe2f4;
        }
        if (local_e0 == -0x1ee68158) {
          uVar1 = (DAT_004bc860 - DAT_004bc864) + 0xcf755a18U & 0x8204f465 | 0x80001041;
          bVar4 = 0x635d6c07 < uVar1;
          bVar5 = uVar1 == 0x635d6c08;
          local_e0 = -0x6f560fe3;
          iVar6 = 0x7a67f502;
        }
        else {
          if (local_e0 != -0x1ded8b29) goto LAB_002fc780;
          uVar1 = (DAT_004bc8f8 | DAT_004bc8fc) * -0x29eb1cdc + 0xa0e80ee;
          local_b1 = local_b0 == 0x2b;
          bVar4 = 0x70f90f42 < uVar1;
          bVar5 = uVar1 == 0x70f90f43;
          local_e0 = -0x1ded8b29;
          iVar6 = 0x21ee1fed;
        }
LAB_002fe458:
        if (!bVar4 || bVar5) {
          local_e0 = iVar6;
        }
        goto LAB_002fc780;
      }
      if (local_e0 == -0x26777a55) {
        _objc_msgSend(local_70,local_78);
        uVar7 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar7,PTR_s_emoticonSeparator_0048a900);
        local_e0 = -0x141e7361;
        param_2 = extraout_x1_15;
      }
      else if (local_e0 == -0x24efb301) {
        local_e0 = -0x32a9b5c3;
        if (local_65 == '\0') {
          local_e0 = -0x1ee68158;
        }
        local_db = 0;
      }
      else if (local_e0 == -0x212a1c10) {
        bVar5 = 0x84af5364 <
                (((DAT_004bc8b0 | DAT_004bc8b4) + 0x58a657f0 | 0xce783eef) ^ 0x443cb7d7);
        iVar6 = 0x560d8766;
        local_e0 = 0x79c666a7;
        goto LAB_002fe238;
      }
      goto LAB_002fc780;
    }
    if (local_e0 < -0x2dc395cf) {
      if (local_e0 < -0x37630c58) {
        if (local_e0 == -0x3b75cf3d) {
          local_e0 = -0x159fd0c9;
          if (((DAT_004bc910 - DAT_004bc914 ^ 0x840880U) & 0xdbcf5afd | 0x9949523d) != 0xd15bbc3a) {
            local_e0 = 0x19a25e6c;
          }
        }
        else {
          if (local_e0 == -0x3ad91efd) {
            bVar5 = 0xea912d09 < (DAT_004bc8e0 ^ DAT_004bc8e4) * 0x28a0e2fa + 0x92337402;
            local_e0 = 0x6a35b2b4;
            iVar6 = 0x140bee24;
            goto LAB_002fe128;
          }
          if (local_e0 == -0x396b3e80) {
            local_94 = _objc_msgSend(param_3,local_90);
            local_e0 = -0x798c2cee;
            param_2 = extraout_x1_02;
          }
        }
        goto LAB_002fc780;
      }
      if (local_e0 != -0x37630c58) {
        if (local_e0 == -0x374beaec) {
          local_e0 = -0x4d40c739;
        }
        else if (local_e0 == -0x32a9b5c3) {
          local_dc = local_db;
          local_e0 = -0x2824ac5c;
          if (0x6e5bd1fb <
              (((uint)(DAT_004bc990 + DAT_004bc994) / 0x6d4973a4 ^ 0xffffffff) & 0x90018d)) {
            local_e0 = 0x153c8551;
          }
        }
        goto LAB_002fc780;
      }
      bVar5 = 0x479d225e < ((DAT_004bc850 ^ DAT_004bc854) / 0x351cc02e | 0xf39c7278);
      iVar6 = -0x45872470;
      local_e0 = -0x7340a273;
    }
    else {
      if (-0x2830b2bb < local_e0) {
        if (local_e0 == -0x2830b2ba) {
          uVar1 = 0;
          if (DAT_004bc964 != 0) {
            uVar1 = DAT_004bc960 / DAT_004bc964;
          }
          local_e0 = -0x5f32f369;
          if (0x949e961 < (uVar1 & 0x1cca1554 | 0x1cca0400) + 0xa5a4682e) {
            local_e0 = 0xd70c0d;
          }
        }
        else if (local_e0 == -0x2824ac5c) {
          uVar1 = DAT_004bc998 | DAT_004bc99c;
          _objc_release(param_3);
          param_2 = extraout_x1_14;
          local_e0 = -0x16993899;
          if ((uVar1 & 0x12d87a98 | 0x2881a80) + 0x5d65bb3b < 0x1d202034) {
            local_e0 = -0x2824ac5c;
          }
        }
        else if (local_e0 == -0x26b3dec6) {
          bVar5 = ((DAT_004bc970 - DAT_004bc974) * -0x5b730070 | 0xdb69fedbU) == 0x1a98253c;
          local_e0 = -0xe4b9999;
          iVar6 = 0x6ada8818;
          goto LAB_002fdfe4;
        }
        goto LAB_002fc780;
      }
      if (local_e0 != -0x2dc395cf) {
        if (local_e0 == -0x292c373c) {
          local_e0 = -0x6ddc20db;
        }
        else if (local_e0 == -0x2848d9a8) {
          uVar1 = (DAT_004bc908 + DAT_004bc90c | 0x2c4040cU) * 0x16f25428 + 0x9585f900;
          bVar4 = 0x2ad6c8d0 < uVar1;
          bVar5 = uVar1 == 0x2ad6c8d1;
          iVar6 = -0x2848d9a8;
          local_e0 = 0x288f37ba;
          goto LAB_002fd690;
        }
        goto LAB_002fc780;
      }
      bVar5 = 0x309a550 < ((DAT_004bc900 ^ DAT_004bc904) & 0x41018124) + 0x2286ffe0;
      iVar6 = -0x2848d9a8;
      local_e0 = 0xc1f371b;
    }
  }
  else {
    if (local_e0 < 0x4bb9ec2f) {
      if (local_e0 < 0x21ee1fed) {
        if (local_e0 < 0xce65c5c) {
          if (local_e0 < 0x84d4de3) {
            if (local_e0 == 0x97655b) {
              bVar5 = (uint)((ulong)((DAT_004bc8d0 & DAT_004bc8d4) * 0x2f3a261) * 0x197a8c07 >> 0x3c
                            ) == 0xa3c34b46;
              iVar6 = 0x76e8b794;
              local_e0 = 0x195f5256;
            }
            else {
              if (local_e0 == 0xd70c0d) {
                local_e0 = 0xd70c0d;
                if (0x26d857eb < (DAT_004bc968 & DAT_004bc96c | 0xe8dce66b) * -0x7e2b992d) {
                  local_e0 = 0x7a0449bb;
                }
                goto LAB_002fc780;
              }
              if (local_e0 != 0x15c5bda) goto LAB_002fc780;
              bVar5 = false;
              iVar6 = 0x65969499;
              local_e0 = 0x5dd22d56;
            }
LAB_002fde2c:
            if (!bVar5) {
              local_e0 = iVar6;
            }
            goto LAB_002fc780;
          }
          if (local_e0 == 0x84d4de3) {
            local_a1 = _objc_msgSend(local_80,local_a0);
            local_e0 = -0x212a1c10;
            param_2 = extraout_x1_07;
          }
          else if (local_e0 == 0xc1f371b) {
            local_e0 = -0x2848d9a8;
          }
          else if (local_e0 == 0xc731d74) {
            local_e0 = 0x5c486bf4;
          }
        }
        else if (local_e0 < 0x195f5256) {
          if (local_e0 == 0xce65c5c) {
            local_e0 = -0x1cad4958;
          }
          else if (local_e0 == 0x140bee24) {
            local_e0 = 0x6a35b2b4;
          }
          else if (local_e0 == 0x153c8551) {
            _objc_release(param_3);
            local_e0 = -0x2824ac5c;
            param_2 = extraout_x1_03;
          }
        }
        else if (local_e0 == 0x195f5256) {
          local_e0 = 0x76e8b794;
        }
        else if (local_e0 == 0x19a25e6c) {
          uVar1 = DAT_004bc918 + DAT_004bc91c;
          local_c0 = _objc_msgSend(param_3,local_90);
          param_2 = extraout_x1_13;
          local_e0 = 0x3232416d;
          if (0xed52ff55 < (uVar1 | 0xf7ddf59b) * 0x5d9fdd29) {
            local_e0 = 0x19a25e6c;
          }
        }
        else if (local_e0 == 0x1b9890aa) {
          bVar5 = local_a1 == '\0';
          iVar6 = -0x3cb5fb99;
          local_e0 = -0x76301a53;
LAB_002fe2f4:
          if (bVar5) {
            local_e0 = iVar6;
          }
        }
        goto LAB_002fc780;
      }
      if (local_e0 < 0x3232416d) {
        if (local_e0 < 0x288f37ba) {
          if (local_e0 == 0x21ee1fed) {
            local_e0 = -0x4ca34728;
          }
          else if (local_e0 == 0x2303b9d5) {
            bVar5 = DAT_004bc950 - DAT_004bc954 == 0x1f34e89e;
            local_e0 = -0x4981907e;
            iVar6 = 0x751defa8;
LAB_002fdfe4:
            if (bVar5) {
              local_e0 = iVar6;
            }
          }
          else if (local_e0 == 0x276f6608) {
            local_db = local_da;
            _objc_release(local_80);
            local_e0 = -0x32a9b5c3;
            param_2 = extraout_x1_01;
          }
          goto LAB_002fc780;
        }
        if (local_e0 == 0x288f37ba) {
          bVar5 = local_b9 == '\0';
          iVar6 = -0x3b75cf3d;
        }
        else {
          if (local_e0 != 0x2caf047b) {
            if (local_e0 == 0x2d78c142) {
              local_e0 = 0x15c5bda;
              if (local_c1 == '\0') {
                local_e0 = 0x276f6608;
              }
              local_da = 0;
            }
            goto LAB_002fc780;
          }
          bVar5 = local_a9 == '\0';
          iVar6 = -0x64e31cbc;
        }
LAB_002fe040:
        local_e0 = 0x276f6608;
        if (bVar5) {
          local_e0 = iVar6;
        }
LAB_002fe044:
        local_da = 1;
        goto LAB_002fc780;
      }
      if (local_e0 < 0x3fe70530) {
        if (local_e0 == 0x3232416d) {
          local_e0 = 0x4bb9ec2f;
        }
        else if (local_e0 == 0x37932e0d) {
          local_e0 = 0x5af0caa7;
        }
        else if (local_e0 == 0x399c2bf7) {
          bVar5 = 0xee345d92 < (DAT_004bc8a0 * DAT_004bc8a4 * 0x313d2952 + 0x24b8c77eU ^ 0x9fc34cf);
          local_e0 = 0x5c486bf4;
          iVar6 = 0xc731d74;
LAB_002fe128:
          if (bVar5) {
            local_e0 = iVar6;
          }
        }
      }
      else if (local_e0 == 0x3fe70530) {
        local_d8 = _objc_msgSend(param_3,local_d0);
        local_e0 = -0x26b3dec6;
        param_2 = extraout_x1_08;
      }
      else if (local_e0 == 0x45eb253d) {
        local_e0 = 0x84d4de3;
      }
      else if (local_e0 == 0x4a30a227) {
        _objc_msgSend(param_3,local_90);
        local_e0 = -0x1f148bc1;
        param_2 = extraout_x1_04;
      }
      goto LAB_002fc780;
    }
    if (local_e0 < 0x6ada8818) {
      if (local_e0 < 0x5dd22d56) {
        if (local_e0 < 0x5a2fc733) {
          if (local_e0 == 0x4bb9ec2f) {
LAB_002fd7e4:
            local_e0 = -0x431ac2f2;
          }
          else if (local_e0 == 0x4d293fd7) {
            local_e0 = 0x276f6608;
            local_da = local_d9;
          }
          else if (local_e0 == 0x560d8766) {
            uVar1 = (uint)((ulong)(DAT_004bc8b8 + DAT_004bc8bc + 0xab5c21d8) * 0xc0dca29 >> 0x3b) |
                    0x1df38216;
            bVar4 = 0xe1e66533 < uVar1;
            bVar5 = uVar1 == 0xe1e66534;
            local_e0 = 0x560d8766;
            iVar6 = 0x1b9890aa;
            goto LAB_002fe458;
          }
        }
        else if (local_e0 == 0x5a2fc733) {
          local_e0 = -0x3ad91efd;
        }
        else if (local_e0 == 0x5af0caa7) {
          local_78 = PTR_s_shared_00489458;
          local_e0 = 0x78d6f2a6;
        }
        else if (local_e0 == 0x5c486bf4) {
          local_a0 = PTR_s_mediaSeparator_0048a910;
          bVar5 = 0xdab31fd8 < (DAT_004bc8a8 ^ DAT_004bc8ac) * 0x45992df5 + 0xa6d58c2b;
          iVar6 = 0x5c486bf4;
          local_e0 = 0x45eb253d;
          goto LAB_002fe238;
        }
      }
      else if (local_e0 < 0x682b87c2) {
        if (local_e0 == 0x5dd22d56) {
          local_e0 = 0x65969499;
        }
        else if (local_e0 == 0x611177d0) {
          local_b9 = 999 < local_b8;
          local_e0 = -0x2dc395cf;
        }
        else if (local_e0 == 0x65969499) {
          local_d0 = PTR_s_m_uiAppMsgInnerType_0048b848;
          bVar5 = 0x57dee3c1 <
                  ((DAT_004bc948 * DAT_004bc94c & 0x22b3f5b3U) * -0x65b0eb2c & 0xe21d4820);
          local_e0 = 0x5dd22d56;
          iVar6 = 0x6d9acc4e;
          goto LAB_002fe128;
        }
      }
      else {
        if (local_e0 == 0x682b87c2) {
          iVar6 = 0x399c2bf7;
          cVar2 = local_95;
LAB_002fdd7c:
          local_e0 = 0x276f6608;
          if (cVar2 == '\0') {
            local_e0 = iVar6;
          }
          goto LAB_002fe044;
        }
        if (local_e0 == 0x68f64917) {
          local_e0 = -0x937582;
        }
        else if (local_e0 == 0x6a35b2b4) {
          uVar1 = (DAT_004bc8e8 ^ DAT_004bc8ec) + 0x857b98e5 | 0xffec2c6a;
          bVar4 = 0x706e18c2 < uVar1;
          bVar5 = uVar1 == 0x706e18c3;
          iVar6 = 0x140bee24;
          local_e0 = 0x2caf047b;
          goto LAB_002fd690;
        }
      }
      goto LAB_002fc780;
    }
    if (local_e0 < 0x751defa8) {
      if (local_e0 < 0x6f580bb1) {
        if (local_e0 == 0x6ada8818) {
          local_e0 = -0xe4b9999;
        }
        else if (local_e0 == 0x6d9acc4e) {
          local_e0 = 0x2303b9d5;
        }
        else if (local_e0 == 0x6ebc021f) {
          bVar5 = (uint)((ulong)(iVar3 + 0xfad43c46) * 0x5c0c0b71 >> 0x3e) * 0x4d33857c ==
                  -0x1a9540d2;
          iVar6 = -0x4ce782b8;
          local_e0 = -0x5061b169;
          goto LAB_002fe2f4;
        }
      }
      else if (local_e0 == 0x6f580bb1) {
        local_e0 = 0x97655b;
      }
      else if (local_e0 == 0x71298c4e) {
        local_e0 = 0x682b87c2;
        if (0x90709318 < (DAT_004bc898 * DAT_004bc89c * -0x7e053035 + 0x33bf3cb3U & 0x70ccbb18)) {
          local_e0 = 0x71298c4e;
        }
      }
      else if (local_e0 == 0x742ff686) {
        uVar1 = ((uint)((ulong)(uint)(DAT_004bc888 + DAT_004bc88c) * 0x68fe208f >> 0x3e) |
                0xf3b3abae) ^ 0x48bc8488;
        local_95 = local_94 == 0x2f;
        bVar4 = 0x1a3a0c87 < uVar1;
        bVar5 = uVar1 == 0x1a3a0c88;
        iVar6 = -0xa8bf94f;
        local_e0 = -0x6c10fdff;
LAB_002fd690:
        if (!bVar4 || bVar5) {
          local_e0 = iVar6;
        }
      }
      goto LAB_002fc780;
    }
    if (0x79798f57 < local_e0) {
      if (local_e0 < 0x7a0449bb) {
        if (local_e0 == 0x79798f58) {
          local_e0 = -0x2830b2ba;
        }
        else if (local_e0 == 0x79c666a7) {
          local_e0 = 0x560d8766;
        }
      }
      else {
        if (local_e0 == 0x7a0449bb) {
          bVar5 = local_d1 == '\0';
          iVar6 = 0x3fe70530;
          goto LAB_002fe040;
        }
        if (local_e0 == 0x7a67f502) {
          local_e0 = -0x6f560fe3;
        }
      }
      goto LAB_002fc780;
    }
    if (local_e0 == 0x751defa8) {
      _objc_msgSend(param_3,local_d0);
      local_e0 = -0x4981907e;
      param_2 = extraout_x1_09;
      goto LAB_002fc780;
    }
    if (local_e0 != 0x76e8b794) {
      if (local_e0 == 0x78d6f2a6) {
        bVar5 = (uint)((ulong)(DAT_004bc870 - DAT_004bc874 ^ 0x902410U | 0xe32cdbcd) * 0x26d50299 >>
                      0x3c) == 0xac2776a6;
        iVar6 = -0x141e7361;
        local_e0 = -0x26777a55;
        goto LAB_002fde2c;
      }
      goto LAB_002fc780;
    }
    local_a9 = local_a8 == 3;
    bVar5 = 0x7293aa52 <
            (uint)((ulong)((DAT_004bc8d8 + DAT_004bc8dc) * -0x471d6529 + 0xa4baa8bb) * 0x8bf936f1 >>
                  0x3f);
    iVar6 = 0x195f5256;
    local_e0 = 0x5a2fc733;
  }
LAB_002fe238:
  if (bVar5) {
    local_e0 = iVar6;
  }
  goto LAB_002fc780;
}



// #####################################