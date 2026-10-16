// ##### +[isSeparatorNode:classes:] @ 0030c964
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isSeparatorNode_classes_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  byte local_1e9;
  long local_1e8;
  long local_1e0;
  byte local_1d1;
  long local_1d0;
  long local_1c8;
  char local_1b9;
  long local_1b8;
  char local_1a9;
  long local_1a8;
  char local_19a;
  char local_199;
  long local_198;
  undefined *local_190;
  long *local_188;
  long local_180;
  long *local_178;
  undefined8 *local_170;
  char local_161;
  long local_160;
  undefined *local_158;
  int local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [128];
  long local_78;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_1b8;
  local_78 = *(long *)PTR____stack_chk_guard_00481638;
  local_144 = -0x49c82396;
LAB_0030ca18:
  uVar8 = auVar10._8_8_;
  local_1b8 = auVar10._0_8_;
  if (local_144 < 0xe455823) {
    if (local_144 < -0x3c39ee19) {
      if (-0x5db8496c < local_144) {
        if (local_144 < -0x49c82396) {
          if (local_144 < -0x553610e4) {
            if (local_144 == -0x5db8496b) {
              bVar6 = 0xcfa94bdf <
                      (DAT_004bd360 + DAT_004bd364 + 0xa354d3bbU & 0xebeefbdb | 0xeb2a3893);
              iVar9 = 0x6064f7b3;
              local_144 = 0xcd26c2d;
              goto LAB_0030dbc8;
            }
            if (local_144 == -0x56460300) {
              local_1a8 = local_1e8 + 1;
              local_144 = 0x1d1efc19;
            }
            else if (local_144 == -0x59d19cdf) {
              if (*(long *)PTR____stack_chk_guard_00481638 != local_78) {
                    /* WARNING: Subroutine does not return */
                ___stack_chk_fail();
              }
              return (bool)local_1e9;
            }
          }
          else if (local_144 == -0x553610e4) {
            auVar10 = _objc_msgSend(param_4,local_158,&local_140,auStack_f8,0x10);
            local_144 = 0x17b1a663;
          }
          else if (local_144 == -0x547e378e) {
            bVar6 = (DAT_004bd370 & DAT_004bd374) == 0x545071b;
            local_144 = 0x4371130f;
            iVar9 = 0x142f8437;
            goto LAB_0030ded4;
          }
        }
        else if (local_144 < -0x41c493f6) {
          if (local_144 == -0x49c82396) {
            uVar1 = 0;
            if (DAT_004bd2d4 != 0) {
              uVar1 = DAT_004bd2d0 / DAT_004bd2d4;
            }
            bVar6 = (uVar1 + 0x85ab2772 | 0xa5fae40d) == 0xb380a431;
            iVar9 = -0x12b3c6fe;
            local_144 = -0x70b3b96f;
LAB_0030dd7c:
            if (!bVar6) {
              local_144 = iVar9;
            }
          }
          else if (local_144 == -0x41d09a19) {
            local_144 = 0x7878dd56;
          }
        }
        else if (local_144 == -0x41c493f6) {
          local_144 = -0x785b3e7f;
        }
        else if (local_144 == -0x3d8eb8f7) {
          uVar1 = DAT_004bd328 & DAT_004bd32c & 0xb008690 ^ 0x30c0282;
          _objc_enumerationMutation(param_4);
          bVar7 = 0x555ce8b4 < uVar1;
          bVar6 = uVar1 == 0x555ce8b5;
          local_144 = -0x6d0c9576;
          iVar9 = -0x41c493f6;
          uVar8 = extraout_x1_04;
          goto LAB_0030d670;
        }
        goto LAB_0030ca18;
      }
      if (local_144 < -0x7797a7eb) {
        if (local_144 < -0x78c89ed4) {
          if (local_144 == -0x7f54b5d4) {
            local_198 = *(long *)(*local_188 + local_1e8 * 8);
            local_144 = 0x3c097621;
          }
          else if (local_144 == -0x7c9095d4) {
            local_144 = -0x6a9a549d;
          }
          goto LAB_0030ca18;
        }
        if (local_144 != -0x78c89ed4) {
          if (local_144 == -0x785b3e7f) {
            local_144 = -0x3c39ee19;
          }
          goto LAB_0030ca18;
        }
        local_1e8 = local_1d0;
        bVar6 = *(long *)*local_170 == local_180;
        local_144 = -0x3c39ee19;
        iVar9 = 0x6752b6f8;
      }
      else {
        if (-0x70b3b970 < local_144) {
          if (local_144 == -0x70b3b96f) {
            _objc_retain(param_3,uVar8);
            _objc_retain(param_4);
            auVar10._8_8_ = extraout_x1_07;
            auVar10._0_8_ = local_1b8;
          }
          else if (local_144 == -0x6d0c9576) {
            _objc_enumerationMutation(param_4);
            auVar10._8_8_ = extraout_x1_06;
            auVar10._0_8_ = local_1b8;
          }
          else if (local_144 == -0x6a9a549d) {
            local_170 = &uStack_130;
            bVar6 = 0x7dd8c875 < ((DAT_004bd2f8 | DAT_004bd2fc) & 0x80c08044) + 0xd5d7f83b;
            iVar9 = -0x6a9a549d;
            local_144 = 0x7d5a46b5;
LAB_0030dbc8:
            if (bVar6) {
              local_144 = iVar9;
            }
          }
          goto LAB_0030ca18;
        }
        if (local_144 == -0x7797a7eb) {
          local_144 = 0x7c96bda4;
          goto LAB_0030ca18;
        }
        if (local_144 != -0x725d6b6a) goto LAB_0030ca18;
        local_180 = *local_178;
        bVar6 = (((DAT_004bd318 - DAT_004bd31c) + 0x2a2bda0dU ^ 0x1022805) & 0x3a36945) ==
                0xb0d0861d;
        local_144 = -0x725d6b6a;
        iVar9 = 0x40fe196e;
        local_188 = (long *)((ulong)&local_140 | 8);
      }
LAB_0030ded4:
      auVar4._8_8_ = uVar8;
      auVar4._0_8_ = local_1b8;
      auVar10._8_8_ = uVar8;
      auVar10._0_8_ = local_1b8;
      if (!bVar6) {
        local_144 = iVar9;
        auVar10 = auVar4;
      }
      goto LAB_0030ca18;
    }
    if (local_144 < -0x19ff64ca) {
      if (local_144 < -0x2ccf2fe4) {
        if (local_144 < -0x354cc96e) {
          if (local_144 == -0x3c39ee19) {
            bVar6 = 0xeaecca07 <
                    (uint)((ulong)((DAT_004bd330 * DAT_004bd334 ^ 0xe935f65U) + 0xd2b6ac31) *
                           0x24046537 >> 0x3d);
            local_144 = -0x7f54b5d4;
            iVar9 = 0x5b29a8b3;
            goto LAB_0030de78;
          }
          if (local_144 == -0x3bea66ba) {
            local_144 = 0x4620c5f;
            if ((uint)((ulong)((DAT_004bd358 ^ DAT_004bd35c) + 0xda8d1e67) * 0x2a13445f >> 0x3d) ==
                0x21eb96c4) {
              local_144 = -0xcababa5;
            }
          }
        }
        else if (local_144 == -0x354cc96e) {
          local_144 = 0x433f580a;
          if (local_19a == '\0') {
            local_144 = -0x56460300;
          }
          local_1d1 = 1;
        }
        else if (local_144 == -0x34e0d0b4) {
          local_144 = -0x553610e4;
          if (local_1a9 == '\0') {
            local_144 = -0x78c89ed4;
          }
          local_1d0 = local_1a8;
        }
      }
      else if (local_144 < -0x208e94ec) {
        if (local_144 == -0x2ccf2fe4) {
          local_144 = 0x799fb03c;
        }
        else if ((local_144 == -0x2a047bfe) &&
                (local_144 = 0x73c23791, 0x834f1f0 < (DAT_004bd2e0 | DAT_004bd2e4) + 0x8a9fcc1)) {
          local_144 = 0x4ec92f44;
        }
      }
      else if (local_144 == -0x208e94ec) {
        local_144 = 0x1687e748;
      }
      else if (local_144 == -0x1e9299bf) {
        bVar6 = DAT_004bd2f0 * DAT_004bd2f4 == 0x33b96482;
        iVar9 = -0x6a9a549d;
        local_144 = -0x7c9095d4;
        goto LAB_0030dd7c;
      }
      goto LAB_0030ca18;
    }
    if (local_144 < 0x3ae7872) {
      if (-0x11b2199c < local_144) {
        if (local_144 == -0x11b2199b) {
          uVar1 = DAT_004bd3c8 | DAT_004bd3cc;
          _objc_release(param_4);
          _objc_release(param_4);
          _objc_release(param_3);
          auVar3._8_8_ = extraout_x1_05;
          auVar3._0_8_ = local_1b8;
          auVar10._8_8_ = extraout_x1_05;
          auVar10._0_8_ = local_1b8;
          local_144 = -0x59d19cdf;
          if ((uVar1 | 0xbe4eb41e) == 0xbc3bed1) {
            local_144 = -0x11b2199b;
            auVar10 = auVar3;
          }
        }
        else if (local_144 == -0xcababa5) {
          local_144 = -0x3bea66ba;
        }
        goto LAB_0030ca18;
      }
      if (local_144 != -0x19ff64ca) {
        if (local_144 == -0x12b3c6fe) {
          uVar1 = DAT_004bd2d8 & DAT_004bd2dc;
          _objc_retain(param_3,uVar8);
          _objc_retain(param_4);
          bVar6 = (uVar1 / 0x2afa44d2) * -0x6174697a == -0x7c1fa895;
          local_144 = -0x70b3b96f;
          iVar9 = 0x512da837;
          uVar8 = extraout_x1_03;
          goto LAB_0030ded4;
        }
        goto LAB_0030ca18;
      }
      bVar6 = (DAT_004bd310 - DAT_004bd314 | 0x3bf7b3b7U) == 0xc1a454dc;
      local_144 = -0x725d6b6a;
      iVar9 = 0x173cb7ce;
    }
    else {
      if (0x55b6997 < local_144) {
        if (local_144 == 0x55b6998) {
          local_144 = 0x433f580a;
          if (local_1b9 == '\0') {
            local_144 = 0x39522bc7;
          }
          local_1c8 = local_1b8;
          local_1d1 = 0;
        }
        else {
          if (local_144 == 0xaf75f06) {
            bVar6 = 0x623d555f <
                    ((DAT_004bd350 + DAT_004bd354 | 0x8c3c9b70U) + 0x537c7878 | 0x3b051609);
            local_144 = -0xcababa5;
            iVar9 = -0x3bea66ba;
            goto LAB_0030de78;
          }
          if (local_144 == 0xcd26c2d) {
            _objc_msgSend(param_3,local_190,local_198);
            auVar10._8_8_ = extraout_x1;
            auVar10._0_8_ = local_1b8;
            local_144 = 0x6064f7b3;
          }
        }
        goto LAB_0030ca18;
      }
      if (local_144 == 0x3ae7872) {
        local_144 = 0x137c42dc;
        goto LAB_0030ca18;
      }
      if (local_144 != 0x4620c5f) goto LAB_0030ca18;
      bVar6 = local_199 == '\0';
      local_144 = -0x56460300;
      iVar9 = -0x5db8496b;
    }
    if (bVar6) {
      local_144 = iVar9;
    }
    goto LAB_0030ca18;
  }
  if (local_144 < 0x3f2d92d3) {
    if (local_144 < 0x1d1efc19) {
      if (local_144 < 0x142f8437) {
        if (0x12c8546d < local_144) {
          if (local_144 == 0x12c8546e) {
            uVar1 = (DAT_004bd300 | DAT_004bd304 | 0x6d2a4316) + 0x6bb0fae7 & 0x7033bb53;
            bVar7 = 0x851a5625 < uVar1;
            bVar6 = uVar1 == 0x851a5626;
            iVar9 = 0x137c42dc;
            local_144 = 0x3ae7872;
          }
          else {
            if (local_144 != 0x137c42dc) goto LAB_0030ca18;
            uVar1 = DAT_004bd308 + DAT_004bd30c + 0x34e3f608U | 0x2b4da88b;
            local_178 = (long *)*local_170;
            bVar7 = 0x29541a06 < uVar1;
            bVar6 = uVar1 == 0x29541a07;
            iVar9 = 0x137c42dc;
            local_144 = 0xeaae3d0;
          }
LAB_0030d974:
          auVar11._8_8_ = uVar8;
          auVar11._0_8_ = local_1b8;
          auVar10._8_8_ = uVar8;
          auVar10._0_8_ = local_1b8;
          if (!bVar7 || bVar6) {
            local_144 = iVar9;
            auVar10 = auVar11;
          }
          goto LAB_0030ca18;
        }
        if (local_144 != 0xe455823) {
          if (local_144 == 0xeaae3d0) {
            local_144 = -0x19ff64ca;
          }
          goto LAB_0030ca18;
        }
        local_1a9 = local_1a8 == local_1e0;
        bVar6 = 0x5c8514e < (DAT_004bd388 - DAT_004bd38c) * 0x3ceecf20 + 0x6a266cb2U;
        local_144 = 0x2c646c57;
        iVar9 = 0x36b5b90a;
      }
      else {
        if (0x173cb7cd < local_144) {
          if (local_144 == 0x173cb7ce) {
            local_144 = -0x725d6b6a;
          }
          else if ((local_144 == 0x17b1a663) &&
                  (local_144 = 0x3f2d92d3,
                  ((DAT_004bd3a0 + DAT_004bd3a4) * -0x50afaa8a & 0x9b98cc96U | 0x9018cc12) !=
                  0xe4c305f)) {
            local_144 = 0x41d1ebbb;
          }
          goto LAB_0030ca18;
        }
        if (local_144 != 0x142f8437) {
          if ((local_144 == 0x1687e748) &&
             (local_144 = 0x7c96bda4,
             ((DAT_004bd3b0 - DAT_004bd3b4) * -0x27027d9e + 0x8d34c62U | 0x88c0d157) < 0xc1bcd6ad))
          {
            local_144 = -0x7797a7eb;
          }
          goto LAB_0030ca18;
        }
        bVar6 = 0x230911d5 < (DAT_004bd378 * DAT_004bd37c ^ 0xc0e6079U) / 0x7cb4e7a1 + 0x95a99af5;
        local_144 = 0x4371130f;
        iVar9 = -0x354cc96e;
      }
    }
    else {
      if (0x36b5b909 < local_144) {
        if (local_144 < 0x3bad0e9f) {
          if (local_144 == 0x36b5b90a) {
            local_144 = 0x29718863;
          }
          else if (local_144 == 0x39522bc7) {
            local_1e0 = local_1c8;
            local_190 = PTR_s_isKindOfClass__00489c00;
            local_144 = -0x78c89ed4;
            local_1d0 = 0;
          }
        }
        else {
          if (local_144 == 0x3bad0e9f) {
            bVar6 = (DAT_004bd340 * DAT_004bd344 | 0xdf6e7ef3U) == 0x2c869f26;
            local_144 = -0x41d09a19;
            iVar9 = 0x7878dd56;
            goto LAB_0030ded4;
          }
          if (local_144 == 0x3c097621) {
            local_144 = 0x3bad0e9f;
          }
          else if (local_144 == 0x3c82eb96) {
            local_144 = 0xaf75f06;
          }
        }
        goto LAB_0030ca18;
      }
      if (local_144 < 0x29718863) {
        if (local_144 == 0x1d1efc19) {
          uVar1 = 0;
          if (DAT_004bd384 != 0) {
            uVar1 = DAT_004bd380 / DAT_004bd384;
          }
          bVar6 = 0xd0b473ae < (uVar1 | 0xae099515) + 0x70337f14;
          iVar9 = 0x2c646c57;
          local_144 = 0xe455823;
          goto LAB_0030dbc8;
        }
        if (local_144 == 0x1f4ece0e) {
          _objc_release(param_4);
          _objc_release(param_4);
          _objc_release(param_3);
          auVar10._8_8_ = extraout_x1_00;
          auVar10._0_8_ = local_1b8;
          local_144 = -0x11b2199b;
        }
        goto LAB_0030ca18;
      }
      if (local_144 != 0x29718863) {
        if (local_144 == 0x2c646c57) {
          local_144 = 0xe455823;
        }
        goto LAB_0030ca18;
      }
      bVar6 = 0xa034c07d < ((DAT_004bd390 + DAT_004bd394 & 0x682f90aeU) + 0xc7cdd82 ^ 0xacaec51a);
      local_144 = -0x2ccf2fe4;
      iVar9 = 0x799fb03c;
    }
  }
  else {
    if (local_144 < 0x5b29a8b3) {
      if (local_144 < 0x4371130f) {
        if (local_144 < 0x41d1ebbb) {
          if (local_144 == 0x3f2d92d3) {
            local_144 = 0x41d1ebbb;
          }
          else if (local_144 == 0x40fe196e) {
            local_144 = 0x39522bc7;
            local_1c8 = local_160;
          }
        }
        else if (local_144 == 0x41d1ebbb) {
          uVar1 = 0;
          if (DAT_004bd3ac != 0) {
            uVar1 = DAT_004bd3a8 / DAT_004bd3ac;
          }
          local_1b9 = local_1b8 == 0;
          local_144 = -0x208e94ec;
          if (0xa1191ea4 < ((uVar1 & 0x71db4304) * 0x361fc74a & 0x5a0520e0)) {
            local_144 = 0x41d1ebbb;
          }
        }
        else if (local_144 == 0x433f580a) {
          local_1e9 = local_1d1;
          local_144 = -0x11b2199b;
          if ((((DAT_004bd3c0 | DAT_004bd3c4) / 0x2d43f148 ^ 0xffffffff) & 0x80f40002) < 0xa73105) {
            local_144 = 0x1f4ece0e;
          }
        }
      }
      else if (local_144 < 0x512da837) {
        if (local_144 == 0x4371130f) {
          local_144 = 0x142f8437;
        }
        else if (local_144 == 0x4ec92f44) {
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uVar8 = _objc_retain(param_4,uVar8);
          _objc_msgSend(uVar8,PTR_s_countByEnumeratingWithState_obje_00489c48,&local_140,auStack_f8,
                        0x10);
          auVar10._8_8_ = extraout_x1_02;
          auVar10._0_8_ = local_1b8;
          local_144 = 0x73c23791;
        }
      }
      else if (local_144 == 0x512da837) {
        local_144 = -0x2a047bfe;
      }
      else if (local_144 == 0x5831e68a) {
        local_144 = 0x433f580a;
        if (local_161 == '\0') {
          local_144 = -0x1e9299bf;
        }
        local_1d1 = 0;
      }
      goto LAB_0030ca18;
    }
    if (0x73c23790 < local_144) {
      if (local_144 < 0x799fb03c) {
        if (local_144 == 0x73c23791) {
          uVar1 = DAT_004bd2e8 - DAT_004bd2ec;
          uStack_138 = 0;
          local_140 = 0;
          uStack_128 = 0;
          uStack_130 = 0;
          uStack_118 = 0;
          local_120 = 0;
          uStack_108 = 0;
          uStack_110 = 0;
          uVar8 = _objc_retain(param_4,uVar8);
          local_158 = PTR_s_countByEnumeratingWithState_obje_00489c48;
          auVar11 = _objc_msgSend(uVar8,PTR_s_countByEnumeratingWithState_obje_00489c48,&local_140,
                                  auStack_f8,0x10);
          auVar2._8_8_ = auVar11._8_8_;
          auVar2._0_8_ = local_1b8;
          auVar10._8_8_ = auVar11._8_8_;
          auVar10._0_8_ = local_1b8;
          local_160 = auVar11._0_8_;
          local_161 = local_160 == 0;
          local_144 = 0x5831e68a;
          if ((uVar1 & 0xe35c89d4) * 0x5cd4171d + 0x9c128ef8 < 0xaa38dd36) {
            local_144 = 0x73c23791;
            auVar10 = auVar2;
          }
        }
        else if (local_144 == 0x7878dd56) {
          uVar1 = ((DAT_004bd348 | DAT_004bd34c) ^ 0x2a492078) * -0x4894bb3c + 0x35625ec8;
          local_199 = local_198 == 0;
          bVar7 = 0xdb9e3a9b < uVar1;
          bVar6 = uVar1 == 0xdb9e3a9c;
          local_144 = -0x41d09a19;
          iVar9 = 0x3c82eb96;
LAB_0030d670:
          auVar5._8_8_ = uVar8;
          auVar5._0_8_ = local_1b8;
          auVar10._8_8_ = uVar8;
          auVar10._0_8_ = local_1b8;
          if (!bVar7 || bVar6) {
            local_144 = iVar9;
            auVar10 = auVar5;
          }
        }
      }
      else if (local_144 == 0x799fb03c) {
        local_144 = -0x34e0d0b4;
      }
      else if (local_144 == 0x7c96bda4) {
        local_144 = 0x7c96bda4;
        if ((uint)((ulong)((DAT_004bd3b8 ^ DAT_004bd3bc ^ 0x33566d) * 0x2a84df00) * 0x306e1f41 >>
                  0x3c) != 0x3e0de3d2) {
          local_144 = 0x55b6998;
        }
      }
      else if (local_144 == 0x7d5a46b5) {
        local_144 = 0x12c8546e;
      }
      goto LAB_0030ca18;
    }
    if (local_144 < 0x6752b6f8) {
      if (local_144 == 0x5b29a8b3) {
        local_144 = -0x7f54b5d4;
      }
      else if (local_144 == 0x6064f7b3) {
        uVar1 = (DAT_004bd368 * DAT_004bd36c | 0xffffff83U) & 0xb676428e;
        local_19a = _objc_msgSend(param_3,local_190,local_198);
        bVar7 = 0x1f2bee1a < uVar1;
        bVar6 = uVar1 == 0x1f2bee1b;
        iVar9 = 0xcd26c2d;
        local_144 = 0x6d96fcfc;
        uVar8 = extraout_x1_01;
        goto LAB_0030d974;
      }
      goto LAB_0030ca18;
    }
    if (local_144 != 0x6752b6f8) {
      if (local_144 == 0x6d96fcfc) {
        local_144 = -0x547e378e;
      }
      goto LAB_0030ca18;
    }
    bVar6 = 0xbc24b8ca < ((DAT_004bd320 ^ DAT_004bd324) & 0x1440a00) + 0x39c8423d;
    local_144 = -0x3d8eb8f7;
    iVar9 = -0x6d0c9576;
  }
LAB_0030de78:
  if (bVar6) {
    local_144 = iVar9;
  }
  goto LAB_0030ca18;
}



// #####################################