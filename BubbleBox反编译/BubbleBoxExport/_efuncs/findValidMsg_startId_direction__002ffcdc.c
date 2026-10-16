// ##### +[findValidMsg:startId:direction:] @ 002ffcdc
// #####################################

/* Function Stack Size: 0x24 bytes */

ID BubbleMessageMerge::findValidMsg_startId_direction_
             (ID param_1,SEL param_2,ID param_3,unsigned_int param_4,long_long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar8;
  undefined8 extraout_x1_07;
  int iVar9;
  undefined1 auVar10 [16];
  int local_11c;
  ID local_118;
  unsigned_int local_10c;
  long local_108;
  unsigned_int local_100;
  uint local_fc;
  ID local_f8;
  unsigned_int local_f0;
  unsigned_int local_ec;
  long local_e8;
  uint local_e0;
  char local_d9;
  long local_d8;
  char local_c9;
  ID local_c8;
  char local_bd;
  uint local_bc;
  unsigned_int local_b8;
  char local_b1;
  undefined *local_b0;
  char local_a5;
  uint local_a4;
  undefined *local_a0;
  undefined8 local_98;
  char local_89;
  char local_79;
  long local_78;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_c8;
  uVar1 = ((DAT_004bcab0 ^ DAT_004bcab4) * 0x77e58aa1 | 0x636fda29) + 0xcf625b5;
  local_11c = -0x38960f08;
LAB_002ffdd0:
  uVar8 = auVar10._8_8_;
  local_c8 = auVar10._0_8_;
  if (-0x9679347 < local_11c) {
    if (0x2ce0239e < local_11c) {
      if (local_11c < 0x5e0371d1) {
        if (local_11c < 0x45e47c34) {
          if (local_11c < 0x2e615325) {
            if (local_11c == 0x2ce0239f) {
              local_11c = 0x2e615325;
              if (((DAT_004bcaf8 | DAT_004bcafc) & 0xbdfffff7 | 0xadfddae6) == 0xb73bba34) {
                local_11c = 0x2ce0239f;
              }
            }
            else if (local_11c == 0x2db54e81) {
              bVar7 = 0x6e110a52 < (DAT_004bcbd0 + DAT_004bcbd4 | 0xdffffecfU);
              iVar9 = -0x6b94fda8;
              local_11c = -0x14f5145c;
              goto LAB_003011e8;
            }
          }
          else {
            if (local_11c == 0x2e615325) goto LAB_00300c70;
            if (local_11c == 0x3c0aec8f) {
              local_11c = -0x66828ab6;
            }
            else if (local_11c == 0x451c3fb5) {
              local_11c = -0x5c4c9845;
              if (local_d9 == '\0') {
                local_11c = 0x26ac5246;
              }
              local_e8 = local_d8;
              local_ec = local_10c;
              local_f8 = 0;
            }
          }
        }
        else if (local_11c < 0x4fb1a081) {
          if (local_11c == 0x45e47c34) {
            local_11c = 0x25a4994d;
          }
          else if (local_11c == 0x46b71522) {
            local_11c = -0x66b822a5;
          }
          else if (local_11c == 0x4708b53d) {
            bVar7 = (uint)((ulong)(DAT_004bcb00 + DAT_004bcb04 + 0x5813e600) * 0x7baab141 >> 0x3e)
                    == 0xfcaed721;
            local_11c = -0x172e2911;
            iVar9 = -0x5ebfa135;
            goto LAB_00301440;
          }
        }
        else if (local_11c == 0x4fb1a081) {
          local_11c = 0x22e5820a;
        }
        else if (local_11c == 0x58dd47f9) {
          local_11c = 0x762e4929;
          if (local_c9 == '\0') {
            local_11c = -0x5c4c9845;
          }
          local_f8 = local_c8;
        }
        else if (local_11c == 0x5defa468) {
          local_11c = 0x4fb1a081;
        }
      }
      else if (local_11c < 0x762e4929) {
        if (local_11c < 0x67dee25c) {
          if (local_11c == 0x5e0371d1) {
            local_11c = 0x114e70f1;
          }
          else if (local_11c == 0x652fac29) {
            _dispatch_once(&DAT_004d1b00,&PTR___NSConcreteGlobalBlock_00480d80);
            auVar10._8_8_ = extraout_x1_01;
            auVar10._0_8_ = local_c8;
            local_11c = 0x6d87e174;
          }
        }
        else if (local_11c == 0x67dee25c) {
          _objc_msgSend(local_98,local_a0,param_3);
          auVar10._8_8_ = extraout_x1_04;
          auVar10._0_8_ = local_c8;
          local_11c = -0x6202b98a;
        }
        else if (local_11c == 0x69d72a0b) {
          _objc_msgSend(DAT_004d1af8,local_b0,param_3,local_10c);
          _objc_retainAutoreleasedReturnValue();
          auVar10._8_8_ = extraout_x1_05;
          auVar10._0_8_ = local_c8;
          local_11c = -0x170e69f4;
        }
        else if (local_11c == 0x6d87e174) {
          local_11c = -0x29232f65;
        }
      }
      else if (local_11c < 0x7921f2ca) {
        if (local_11c == 0x762e4929) {
          bVar7 = 0xb1bd5184 <
                  ((DAT_004bcbc0 * DAT_004bcbc4 ^ 0x521ccc96U) / 0x3697822e) * 0x86d2523;
          iVar9 = 0x9cd7010;
LAB_00300fb8:
          local_11c = -0x76cd020e;
          if (bVar7) {
            local_11c = iVar9;
          }
        }
        else if (local_11c == 0x7779ce82) {
          _objc_retain(param_3);
          auVar10._8_8_ = extraout_x1_03;
          auVar10._0_8_ = local_c8;
          local_11c = -0x5f35ebcc;
        }
        else if (local_11c == 0x78f8999a) goto LAB_00300c5c;
      }
      else if (local_11c == 0x79273af8) {
        local_10c = local_f0;
        local_11c = 0x69d72a0b;
        if (0x8fea391d <
            ((uint)(DAT_004bcbb0 * DAT_004bcbb4 * 0x268d25c0) / 0xa6908217 | 0xf796b6b2)) {
          local_11c = -0x170e69f4;
        }
      }
      else if (local_11c == 0x7a59d17d) {
        local_11c = -0x3aec8fd0;
      }
      else if (local_11c == 0x7921f2ca) {
        return local_118;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c < 0x16a74787) {
      if (local_11c < 0x9cd7010) {
        if (local_11c < -0x1f926) {
          if (local_11c == -0x9679346) {
            local_11c = -0x69765af2;
          }
          else if (local_11c == -0x88813f) {
            local_11c = 0xc71d2aa;
          }
        }
        else if (local_11c == -0x1f926) {
LAB_00300c5c:
          local_11c = -0x69bd4933;
        }
        else if (local_11c == 0x1861d3f) {
          local_11c = -0x718872ad;
          if (((DAT_004bcb88 + DAT_004bcb8c & 0xba4fc291U) + 0x71081c20) / 0x7d08c99c == 0xd229e12)
          {
            local_11c = 0x1861d3f;
          }
        }
        else if ((local_11c == 0x8baf565) &&
                (local_11c = 0x1861d3f,
                ((DAT_004bcb80 & DAT_004bcb84 & 0x7e3ba34) + 0x522fb0bf | 0xf61e7781) < 0x1b571b72))
        {
          local_11c = -0x1e182cf5;
        }
        goto LAB_002ffdd0;
      }
      if (0xc71d2a9 < local_11c) {
        if (local_11c == 0xc71d2aa) {
          bVar7 = ((DAT_004bcb18 + DAT_004bcb1c ^ 0x15fabd8dU) * -0x79cca533 & 0x509a5316) ==
                  0x8d875826;
          local_11c = 0xc71d2aa;
          iVar9 = 0x5defa468;
        }
        else {
          if (local_11c == 0x107984d1) {
            local_11c = -0x6609df56;
            goto LAB_002ffdd0;
          }
          if (local_11c != 0x114e70f1) goto LAB_002ffdd0;
          local_79 = local_78 == -1;
          bVar7 = (DAT_004bcad8 * DAT_004bcadc & 0x60d854b4U ^ 0x4360fd9a) * -0x4334cf0a ==
                  0x6275f0ac;
          local_11c = 0x114e70f1;
          iVar9 = -0x6391d2df;
        }
LAB_00301440:
        if (!bVar7) {
          local_11c = iVar9;
        }
        goto LAB_002ffdd0;
      }
      if (local_11c == 0x9cd7010) {
        local_11c = -0x76cd020e;
      }
      else if (local_11c == 0xb322073) {
        uVar2 = DAT_004bcbe8 ^ DAT_004bcbec;
        _objc_release(param_3,uVar8);
        _objc_autoreleaseReturnValue(local_118);
        auVar5._8_8_ = extraout_x1_07;
        auVar5._0_8_ = local_c8;
        auVar10._8_8_ = extraout_x1_07;
        auVar10._0_8_ = local_c8;
        local_11c = 0xb322073;
        if ((uVar2 + 0x23f82e4b | 0x428ded08) != 0x38f64a53) {
          local_11c = 0x7921f2ca;
          auVar10 = auVar5;
        }
      }
      else if (local_11c == 0xb7f55b2) {
        local_fc = local_e0;
        bVar7 = (int)((long)((ulong)((DAT_004bcb50 & DAT_004bcb54) + 0x57b65ffa | 0x412347e9) *
                            0xba6d079b) >> 0x3f) == 0x3dceb1de;
        local_11c = -0x66828ab6;
        iVar9 = 0x3c0aec8f;
        goto LAB_003013b8;
      }
      goto LAB_002ffdd0;
    }
    if (0x22d2f9d3 < local_11c) {
      if (local_11c < 0x25a4994d) {
        if (local_11c == 0x22d2f9d4) {
          local_11c = -0x31df3e23;
        }
        else if (local_11c == 0x22e5820a) {
          local_11c = 0x107984d1;
          if (DAT_004bcb20 - DAT_004bcb24 != -0x2ff080e8) {
            local_11c = -0x6609df56;
          }
        }
        else if (local_11c == 0x22eb0da1) {
LAB_00300c70:
          local_11c = -0x13926946;
        }
      }
      else if (local_11c == 0x25a4994d) {
        local_11c = -0x5c4c9845;
        if (local_b1 == '\0') {
          local_11c = -0x34f0ff7a;
        }
        local_f8 = 0;
      }
      else {
        if (local_11c == 0x26ac5246) {
          local_100 = local_ec;
          local_108 = local_e8;
          bVar7 = local_a5 == '\0';
          iVar9 = -0x5f2c06d0;
          local_11c = 0x78f8999a;
          goto LAB_003016d0;
        }
        if (local_11c == 0x28d2ef0c) {
          local_11c = 0xb7f55b2;
          local_e0 = local_a4;
        }
      }
      goto LAB_002ffdd0;
    }
    if (0x1b8392cd < local_11c) {
      if (local_11c == 0x1b8392ce) {
        local_11c = 0x26ac5246;
        local_e8 = 0;
        local_ec = param_4;
      }
      else if (local_11c == 0x1e56add4) {
        _dispatch_once(&DAT_004d1b00,&PTR___NSConcreteGlobalBlock_00480d80);
        auVar10._8_8_ = extraout_x1_02;
        auVar10._0_8_ = local_c8;
        local_11c = 0x652fac29;
      }
      else if ((local_11c == 0x211b8231) &&
              (local_11c = -0x73a60c4b, (DAT_004bcb30 | DAT_004bcb34) / 0x6d5d2fdc != 0x6296d8b3)) {
        local_11c = -0x4a194884;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c != 0x16a74787) {
      if (local_11c == 0x16c9ffa2) {
        local_11c = 0x45e47c34;
      }
      goto LAB_002ffdd0;
    }
    bVar7 = 0x6ce7366e < (DAT_004bcad0 - DAT_004bcad4 ^ 0xd95b02fU) / 0xf18f497 + 0x776cb7a9;
    iVar9 = 0x114e70f1;
    local_11c = 0x5e0371d1;
LAB_003011e8:
    if (bVar7) {
      local_11c = iVar9;
    }
    goto LAB_002ffdd0;
  }
  if (local_11c < -0x4a194884) {
    if (-0x69765af3 < local_11c) {
      if (-0x6391d2e0 < local_11c) {
        if (local_11c < -0x5f2c06d0) {
          if (local_11c == -0x6391d2df) {
            bVar7 = local_79 == '\0';
            iVar9 = -0x2e7834fb;
            local_11c = -0x14234a56;
            goto LAB_003016d0;
          }
          if (local_11c == -0x6202b98a) {
            uVar2 = 0;
            if (DAT_004bcb4c != 0) {
              uVar2 = DAT_004bcb48 / DAT_004bcb4c;
            }
            local_a4 = _objc_msgSend(local_98,local_a0,param_3);
            auVar3._8_8_ = extraout_x1_06;
            auVar3._0_8_ = local_c8;
            auVar10._8_8_ = extraout_x1_06;
            auVar10._0_8_ = local_c8;
            local_11c = -0x6202b98a;
            if ((uVar2 ^ 0xe77abf27) + 0xd945b856 < 0xefffa931) {
              local_11c = 0x28d2ef0c;
              auVar10 = auVar3;
            }
            goto LAB_002ffdd0;
          }
          if (local_11c != -0x5f35ebcc) goto LAB_002ffdd0;
          uVar2 = (DAT_004bcab8 - DAT_004bcabc) * 0x33f4a882 + 0x8f26608aU | 0x83b7efc;
          _objc_retain(param_3);
          bVar6 = 0xcfe1755d < uVar2;
          bVar7 = uVar2 == 0xcfe1755e;
          local_11c = -0x5f35ebcc;
          iVar9 = 0x46b71522;
          uVar8 = extraout_x1;
        }
        else {
          if (local_11c == -0x5f2c06d0) {
            bVar7 = ((DAT_004bcb90 ^ DAT_004bcb94) * 0x3b9e4730 + 0xe95e7132 & 0x17fdc520) ==
                    0x2ea4fe23;
            local_11c = -0x31df3e23;
            iVar9 = 0x22d2f9d4;
            goto LAB_003013b8;
          }
          if (local_11c != -0x5ebfa135) {
            if (local_11c == -0x5c4c9845) {
              local_118 = local_f8;
              local_11c = -0x670670b7;
              if (0x85a82221 <
                  (0xb7272f07U -
                   (int)((long)((ulong)(uint)(DAT_004bcbe0 * DAT_004bcbe4) * 0xb4101a17) >> 0x3f) |
                  0xdbfffdaa)) {
                local_11c = 0xb322073;
              }
            }
            goto LAB_002ffdd0;
          }
          uVar2 = (DAT_004bcb08 + DAT_004bcb0c & 0x80c0088U) * -0x5e861506;
          bVar6 = 0xfb7372e1 < uVar2;
          bVar7 = uVar2 == 0xfb7372e2;
          local_11c = -0x172e2911;
          iVar9 = 0x22eb0da1;
        }
LAB_003015c4:
        auVar4._8_8_ = uVar8;
        auVar4._0_8_ = local_c8;
        auVar10._8_8_ = uVar8;
        auVar10._0_8_ = local_c8;
        if (!bVar6 || bVar7) {
          local_11c = iVar9;
          auVar10 = auVar4;
        }
        goto LAB_002ffdd0;
      }
      if (local_11c < -0x66b822a5) {
        if (local_11c == -0x69765af2) {
          bVar7 = (DAT_004bcba0 * DAT_004bcba4 + 0x9cd382c2U | 0x1446a25a) == 0x5d7e6381;
          local_11c = -0x75a79449;
          iVar9 = -0x76d0047d;
LAB_003013b8:
          if (bVar7) {
            local_11c = iVar9;
          }
        }
        else if (local_11c == -0x670670b7) {
          _objc_release(param_3,uVar8);
          _objc_autoreleaseReturnValue(local_118);
          auVar10._8_8_ = extraout_x1_00;
          auVar10._0_8_ = local_c8;
          local_11c = 0xb322073;
        }
        goto LAB_002ffdd0;
      }
      if (local_11c != -0x66b822a5) {
        if (local_11c == -0x66828ab6) {
          local_a5 = (long)param_5 < 0;
          local_b0 = PTR_s_GetMsg_LocalID__0048b878;
          bVar7 = 0xa090b390 < ((DAT_004bcb58 - DAT_004bcb5c) + 0x7d5b3850U | 0x16df515a);
          iVar9 = 0x3c0aec8f;
          local_11c = 0x1b8392ce;
          goto LAB_003011e8;
        }
        if (local_11c == -0x6609df56) {
          local_89 = 0 < (long)param_5;
          bVar7 = ((DAT_004bcb28 + DAT_004bcb2c) * 0x6794a889 & 0x23d3d4aaU) == 0xabd557;
          iVar9 = 0x107984d1;
          local_11c = -0x2fb0bd00;
          goto LAB_003016d0;
        }
        goto LAB_002ffdd0;
      }
      bVar7 = 0xdff00bab < (((DAT_004bcac0 | DAT_004bcac4) ^ 0xce3985d4) + 0x3f34de38 ^ 0x1c532f76);
      iVar9 = -0x4890889c;
      local_11c = -0x6fee7340;
      goto LAB_003011e8;
    }
    if (-0x73a60c4c < local_11c) {
      if (local_11c < -0x6fee7340) {
        if (local_11c == -0x73a60c4b) {
          local_11c = -0x4a194884;
        }
        else if (local_11c == -0x718872ad) {
          local_11c = 0x79273af8;
          local_f0 = local_b8;
        }
      }
      else {
        if (local_11c == -0x6fee7340) {
          uVar2 = 0;
          if (DAT_004bcacc != 0) {
            uVar2 = DAT_004bcac8 / DAT_004bcacc;
          }
          local_78 = DAT_004d1b00;
          bVar7 = 0xdceba13c < (uVar2 * 0x5b49652a + 0x37260d64 & 0x8f5e5db8);
          iVar9 = -0x4890889c;
          local_11c = -0x1e2e2a51;
          goto LAB_003011e8;
        }
        if (local_11c == -0x6b94fda8) {
          local_11c = 0x451c3fb5;
        }
        else if (local_11c == -0x69bd4933) {
          local_b1 = local_100 == 0;
          bVar7 = (DAT_004bcb68 & DAT_004bcb6c & 0xea9c1f7e | 0x6a801f5e) == 0x4b23d474;
          iVar9 = -0x69bd4933;
          local_11c = -0x161658a7;
LAB_003016d0:
          if (bVar7) {
            local_11c = iVar9;
          }
        }
      }
      goto LAB_002ffdd0;
    }
    if (local_11c < -0x76d0047d) {
      if (local_11c == -0x7e314cdc) {
        local_98 = DAT_004d1af8;
        local_11c = 0x211b8231;
      }
      else if (local_11c == -0x7c79a1b3) {
        local_11c = -0x2f31e0c8;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c == -0x76d0047d) {
      local_11c = -0x75a79449;
      goto LAB_002ffdd0;
    }
    if (local_11c == -0x76cd020e) {
      local_d8 = local_108 + 1;
      bVar7 = 0x674f11d9 < ((DAT_004bcbc8 - DAT_004bcbcc) + 0x993c9d4aU & 0xb9dcef1) * -0x5fa5bdf7;
      iVar9 = 0x7a59d17d;
      goto LAB_00300fb8;
    }
    if (local_11c != -0x75a79449) goto LAB_002ffdd0;
    local_bd = local_fc < local_bc;
    bVar7 = 0x384f34d9 < ((DAT_004bcba8 ^ DAT_004bcbac) * -0xcc3ca38 | 0x1be2cd02);
    local_11c = -0x76d0047d;
    iVar9 = -0x7c79a1b3;
  }
  else {
    if (local_11c < -0x295c596f) {
      if (local_11c < -0x38960f08) {
        if (local_11c < -0x3f6b2cc6) {
          if (local_11c == -0x4a194884) {
            local_a0 = PTR_s_GetLastMsgLocalID__0048b870;
            local_11c = -0x211e932f;
            if (0xaf7e0460 < (DAT_004bcb38 | DAT_004bcb3c | 0x1a91defc) / 0x6768c19e + 0x66554407) {
              local_11c = -0x4a194884;
            }
          }
          else if (local_11c == -0x4890889c) {
            local_11c = -0x6fee7340;
          }
        }
        else if (local_11c == -0x3f6b2cc6) {
          local_11c = 0x2ce0239f;
        }
        else if (local_11c == -0x3aec8fd0) {
          local_d9 = local_d8 == 0xf;
          local_11c = 0x2db54e81;
        }
        else if (local_11c == -0x394fd74e) {
          local_11c = 0x16c9ffa2;
          if (((DAT_004bcb70 ^ DAT_004bcb74) / 0xaa7ad5b6 | 0x5ffc7dde) < 0x944cddd4) {
            local_11c = 0x45e47c34;
          }
        }
      }
      else if (local_11c < -0x2fb0bd00) {
        if (local_11c == -0x38960f08) {
          bVar6 = 0x8bcc2f2 < uVar1;
          bVar7 = uVar1 == 0x8bcc2f3;
          local_11c = -0x5f35ebcc;
          iVar9 = 0x7779ce82;
          goto LAB_003015c4;
        }
        if (local_11c == -0x34f0ff7a) {
          local_b8 = local_100 - 1;
          local_11c = 0x8baf565;
        }
        else if (local_11c == -0x31df3e23) {
          local_bc = local_100 + 1;
          bVar7 = ((DAT_004bcb98 | DAT_004bcb9c) + 0x2f1cc8c6 & 0x8bba399c) * -0x3496b9cd ==
                  -0x67116264;
          local_11c = 0x22d2f9d4;
          iVar9 = -0x9679346;
          goto LAB_00301440;
        }
      }
      else if (local_11c == -0x2fb0bd00) {
        local_11c = -0x7e314cdc;
        if (local_89 == '\0') {
          local_11c = 0xb7f55b2;
        }
        local_e0 = 0;
      }
      else if (local_11c == -0x2f31e0c8) {
        local_11c = -0x5c4c9845;
        if (local_bd == '\0') {
          local_11c = 0x79273af8;
        }
        local_f0 = local_bc;
        local_f8 = 0;
      }
      else if (local_11c == -0x2e7834fb) {
        bVar7 = 0x9c1ca8a4 < (DAT_004bcae0 * DAT_004bcae4 & 0x82b50358U ^ 0x3beee664) + 0x2f6aeac4;
        iVar9 = 0x652fac29;
        local_11c = 0x1e56add4;
        goto LAB_003011e8;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c < -0x172e2911) {
      if (local_11c < -0x211e932f) {
        if (local_11c == -0x295c596f) {
          local_11c = -0x6202b98a;
          if (0x43264592 < (DAT_004bcb40 - DAT_004bcb44 ^ 0x40084084U | 0x9fd19552) * -0x15e94815) {
            local_11c = 0x67dee25c;
          }
        }
        else if ((local_11c == -0x29232f65) &&
                (local_11c = 0x2ce0239f,
                0xb64d5dfd < ((uint)(DAT_004bcaf0 * DAT_004bcaf4) / 0x1e839c39) * 0x4e8819ea)) {
          local_11c = -0x3f6b2cc6;
        }
      }
      else if (local_11c == -0x211e932f) {
        local_11c = -0x295c596f;
      }
      else if (local_11c == -0x1e2e2a51) {
        local_11c = 0x16a74787;
      }
      else if (local_11c == -0x1e182cf5) {
        local_11c = 0x1861d3f;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c < -0x14f5145c) {
      if (local_11c == -0x172e2911) {
        local_11c = -0x5ebfa135;
      }
      else if (local_11c == -0x170e69f4) {
        iVar9 = DAT_004bcbb8 + DAT_004bcbbc;
        _objc_msgSend(DAT_004d1af8,local_b0,param_3,local_10c);
        auVar10 = _objc_retainAutoreleasedReturnValue();
        local_c9 = auVar10._0_8_ == 0;
        local_11c = -0x170e69f4;
        if (((uint)((ulong)(iVar9 + 0x75e8eb2cU >> 2) * 0x20f2ce8b >> 0x3b) ^ 0x86195587) <
            0xffd28c09) {
          local_11c = 0x58dd47f9;
        }
      }
      else if (local_11c == -0x161658a7) {
        local_11c = -0x394fd74e;
      }
      goto LAB_002ffdd0;
    }
    if (local_11c == -0x14f5145c) {
      local_11c = -0x6b94fda8;
      goto LAB_002ffdd0;
    }
    if (local_11c == -0x14234a56) {
      local_11c = 0x4708b53d;
      goto LAB_002ffdd0;
    }
    if (local_11c != -0x13926946) goto LAB_002ffdd0;
    uVar2 = 0;
    if (DAT_004bcb14 != 0) {
      uVar2 = DAT_004bcb10 / DAT_004bcb14;
    }
    bVar7 = 0x98c862a3 < (uVar2 + 0x6043d394 ^ 0x15e965fe);
    local_11c = 0xc71d2aa;
    iVar9 = -0x88813f;
  }
  if (bVar7) {
    local_11c = iVar9;
  }
  goto LAB_002ffdd0;
}



// #####################################