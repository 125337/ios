// ##### +[updateAllNodes:scroll:] @ 0030dfb8
// #####################################

/* WARNING: Removing unreachable block (ram,0x00311e28) */
/* Function Stack Size: 0x1c bytes */

void BubbleMessageMerge::updateAllNodes_scroll_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  int iVar14;
  uint uVar15;
  undefined8 *puVar16;
  int iVar17;
  undefined1 auStack_360 [4];
  bool local_35c;
  ID local_358;
  ID local_350;
  int *local_348;
  int local_33c;
  ulong local_338;
  long local_330;
  long local_328;
  long local_320;
  ulong local_318;
  ulong local_310;
  long local_308;
  long local_300;
  long local_2f8;
  ulong local_2f0;
  code *local_2e8;
  char local_2d9;
  undefined8 local_2d8;
  char local_2c9;
  undefined8 local_2c8;
  char local_2b9;
  undefined8 local_2b8;
  char local_2a9;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  char local_289;
  undefined8 local_288;
  char local_279;
  undefined8 local_278;
  char local_269;
  undefined8 local_268;
  char local_259;
  undefined8 local_258;
  undefined8 local_250;
  char local_241;
  undefined8 local_240;
  char local_231;
  undefined8 local_230;
  char local_221;
  undefined8 local_220;
  undefined8 local_218;
  char local_20a;
  char local_209;
  long local_208;
  char local_1f9;
  undefined8 local_1f8;
  undefined8 local_1f0;
  char local_1e1;
  ulong local_1e0;
  long local_1d8;
  char local_1c9;
  undefined8 local_1c8;
  undefined8 local_1c0;
  ulong local_1b8;
  long local_1b0;
  char local_1a1;
  undefined8 local_1a0;
  char local_191;
  long local_190;
  ulong local_188;
  char local_179;
  undefined8 local_178;
  char local_169;
  long local_168;
  undefined8 *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined *local_c8;
  char local_b9;
  undefined8 *local_b8;
  undefined8 local_b0;
  char local_a1;
  undefined *local_a0;
  undefined1 local_91;
  undefined8 *local_90;
  undefined8 *local_88;
  uint local_7c;
  
  uVar3 = DAT_00479600;
  uVar2 = DAT_004795b8;
  puVar16 = (undefined8 *)auStack_360;
  local_7c = ((DAT_004bd3d0 & DAT_004bd3d4) * -0x66e18333 + 0x85bf3475) / 0x95f9a302;
  local_348 = &local_33c;
  local_33c = -0x3f413612;
  local_35c = param_4;
  local_358 = param_1;
  local_350 = param_3;
LAB_0030e100:
  puVar6 = local_88;
  puVar5 = local_90;
  IVar4 = local_358;
  if (local_33c < -0xc19720) {
    if (-0x36cbb192 < local_33c) {
      if (local_33c < -0x1e94e8af) {
        if (-0x2aea1326 < local_33c) {
          if (local_33c < -0x24b3bbcb) {
            if (local_33c < -0x284c046b) {
              if (local_33c < -0x2948bf76) {
                if (local_33c == -0x2aea1325) {
                  iVar14 = 0x77f74c2d;
                  if (local_2d9 == '\0') {
                    iVar14 = -0x6172519;
                  }
                  *local_348 = iVar14;
                  local_2f0 = local_338;
                  goto LAB_0030e100;
                }
                if (local_33c != -0x29b4c44a) goto LAB_0030e100;
                uVar15 = (DAT_004bd7c0 + DAT_004bd7c4 + 0xd80b5186U ^ 0x729221b) * 0x2168a2a0;
                bVar7 = 0x7c4a178 < uVar15;
                bVar8 = uVar15 == 0x7c4a179;
                iVar17 = -0x37794803;
                iVar14 = -0x3b00f736;
              }
              else {
                if (local_33c == -0x2948bf76) {
                  _objc_msgSend(local_328,local_158,local_278);
                  _objc_release(local_278);
                  *local_348 = 0x2385066b;
                  goto LAB_0030e100;
                }
                if (local_33c == -0x28db66ba) {
                  uVar15 = DAT_004bd798 * DAT_004bd79c;
                  _objc_release(local_2b8);
                  iVar14 = 0x3d2b303c;
                  if (((uVar15 | 0x3747f3bb) * -0x7b174293 | 0xc06b59f3) < 0xda4a525) {
                    iVar14 = -0x28db66ba;
                  }
                  *local_348 = iVar14;
                  goto LAB_0030e100;
                }
                if (local_33c != -0x28851a8d) goto LAB_0030e100;
                uVar15 = (DAT_004bd4f8 | DAT_004bd4fc | 0xd518aeeb) * -0x2d99127d + 0xd799a464;
                _objc_release(local_1a0);
                bVar7 = 0x98891f22 < uVar15;
                bVar8 = uVar15 == 0x98891f23;
                iVar17 = 0x43f7d2c7;
                iVar14 = -0x7372e6f;
              }
            }
            else {
              if (local_33c < -0x25820677) {
                if (local_33c == -0x284c046b) {
                  bVar8 = 0x660f7f8 <
                          (((DAT_004bd860 | DAT_004bd864) & 0x9ded598a) + 0x3dd94168 ^ 0x5d86b283);
                  iVar17 = 0x46d3416a;
                  iVar14 = 0x2b079025;
                  goto LAB_003170b8;
                }
                if (local_33c == -0x27c3ec06) {
                  *local_348 = 0x7e018f9b;
                }
                else if (local_33c == -0x27261e42) {
                  *local_348 = -0x78683aaa;
                }
                goto LAB_0030e100;
              }
              if (local_33c == -0x25820677) {
                puVar16 = (undefined8 *)((long)puVar16 + -0x30);
                bVar8 = 0xacf29475 < (DAT_004bd3d8 * DAT_004bd3dc + 0xaccbff9fU | 0x2258e6ed);
                iVar14 = 0x15ebe5a3;
                iVar17 = -0x27261e42;
                local_88 = puVar16;
                goto LAB_00317998;
              }
              if (local_33c == -0x251b66fa) {
                _objc_msgSend(local_328,local_120);
                _objc_retainAutoreleasedReturnValue();
                *local_348 = 0x4731433e;
                goto LAB_0030e100;
              }
              if (local_33c != -0x24d2d686) goto LAB_0030e100;
              uVar15 = (DAT_004bd788 - DAT_004bd78c ^ 0x921b5c12U | 0x4da0034c) + 0xaad55ee7;
              _objc_msgSend(local_328,local_110);
              local_2b8 = _objc_retainAutoreleasedReturnValue();
              bVar7 = 0x87c7162e < uVar15;
              bVar8 = uVar15 == 0x87c7162f;
              iVar17 = 0x5845f3cd;
              iVar14 = 0x1db07a44;
            }
          }
          else {
            if (-0x225c8ad5 < local_33c) {
              if (local_33c < -0x20a59041) {
                if (local_33c == -0x225c8ad4) {
                  _objc_release(local_220);
                  iVar14 = -0x777791d7;
                  if (local_221 == '\0') {
                    iVar14 = -0x3e5ee2c0;
                  }
                  goto LAB_00317450;
                }
                if (local_33c == -0x221f45eb) {
                  _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,1);
                  uVar13 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(local_328,local_130,uVar13);
                  _objc_release(uVar13);
                  _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
                  _objc_retainAutoreleasedReturnValue();
                  iVar14 = 0x518c1d1a;
                  goto LAB_00317018;
                }
                if (local_33c == -0x22086458) {
                  *local_348 = 0x79c02d93;
                }
              }
              else if (local_33c == -0x20a59041) {
                *local_348 = 0x58db74f0;
              }
              else if (local_33c == -0x1fd5e10c) {
                _objc_msgSend(local_328,local_120);
                local_2c8 = _objc_retainAutoreleasedReturnValue();
                *local_348 = 0x53619e41;
              }
              else if (local_33c == -0x1ea6f4d1) {
                bVar8 = local_231 == '\0';
                iVar17 = -0x1bfceaea;
                iVar14 = 0x2f203ec2;
                goto LAB_00316b88;
              }
              goto LAB_0030e100;
            }
            if (-0x2386be2c < local_33c) {
              if (local_33c == -0x2386be2b) {
                _objc_msgSend(local_350,local_e0,local_318);
                uVar13 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(local_358,local_e8,uVar13,DAT_004d1b10);
                *local_348 = -0x47e9cd14;
              }
              else {
                if (local_33c == -0x2300dfb5) {
                  uVar15 = 0;
                  if (DAT_004bd604 != 0) {
                    uVar15 = DAT_004bd600 / DAT_004bd604;
                  }
                  uVar15 = ((uVar15 ^ 0x74600808) & 0xfc650858) + 0xf4320832;
                  bVar7 = 0x638ceb44 < uVar15;
                  bVar8 = uVar15 == 0x638ceb45;
                  iVar14 = 0x6bef5f0a;
                  iVar17 = -0xd207f3f;
                  goto LAB_00317898;
                }
                if (local_33c == -0x2288ca3d) {
                  local_2e8 = *(code **)(local_168 + 0x10);
                  *local_348 = 0x6612b820;
                }
              }
              goto LAB_0030e100;
            }
            if (local_33c == -0x24b3bbcb) {
              *local_348 = -0x78ae8097;
              goto LAB_0030e100;
            }
            if (local_33c != -0x239eaa63) goto LAB_0030e100;
            uVar15 = (DAT_004bd5c0 ^ DAT_004bd5c4 | 0x12b2cb27) * -0x577c84f9 & 0x2951b0f9;
            bVar7 = 0x2e205da1 < uVar15;
            bVar8 = uVar15 == 0x2e205da2;
            iVar17 = -0x30eeacf;
            iVar14 = 0x77985ff5;
          }
LAB_0031784c:
          if (!bVar7 || bVar8) {
            iVar14 = iVar17;
          }
          goto LAB_0031799c;
        }
        if (local_33c < -0x31a113bf) {
          if (-0x34dedc83 < local_33c) {
            if (local_33c < -0x33b8b851) {
              if (local_33c == -0x34dedc82) {
                *local_348 = -0x4b292355;
              }
              else if (local_33c == -0x344040d5) {
                *local_348 = 0x5bd2b483;
              }
              goto LAB_0030e100;
            }
            if (local_33c == -0x33b8b851) {
              _objc_msgSend(local_1f0,local_f0,local_1f8);
              *local_348 = -0x6256159c;
              goto LAB_0030e100;
            }
            if (local_33c != -0x32dddc9a) {
              if (local_33c == -0x327b14ba) {
                *local_348 = -0x28851a8d;
              }
              goto LAB_0030e100;
            }
            uVar15 = 0;
            if (DAT_004bd7d4 != 0) {
              uVar15 = DAT_004bd7d0 / DAT_004bd7d4;
            }
            uVar15 = uVar15 & 0x6083203c | 0x40832018;
            bVar7 = 0x71e359cb < uVar15;
            bVar8 = uVar15 == 0x71e359cc;
            iVar17 = 0x518c1d1a;
            iVar14 = -0x221f45eb;
            goto LAB_0031784c;
          }
          if (-0x35e2a152 < local_33c) {
            if (local_33c == -0x35e2a151) {
              iVar14 = -0x4dd662dd;
              if (local_1a1 == '\0') {
                iVar14 = 0x1b6116ad;
              }
LAB_0031402c:
              *local_348 = iVar14;
              local_2f8 = 0;
            }
            else {
              if (local_33c == -0x3553f93d) {
                iVar14 = 0x48e7e032;
                cVar1 = local_1f9;
                goto LAB_00315f14;
              }
              if (local_33c == -0x3509c628) {
                bVar8 = (DAT_004bd760 - DAT_004bd764 | 0x57fdfd9fU) * 0x7ff6b1d2 == -0x72b7cdc4;
                iVar17 = 0x54a6fd9c;
                iVar14 = -0x4e558de7;
LAB_00314a58:
                if (!bVar8) {
                  iVar14 = iVar17;
                }
                goto LAB_0031799c;
              }
            }
            goto LAB_0030e100;
          }
          if (local_33c != -0x36cbb191) {
            if (local_33c == -0x36797210) {
              uVar15 = (DAT_004bd5d0 + DAT_004bd5d4 ^ 0x79002aeU) * -0x713fb0b8 ^ 0xb31b94fa;
              bVar7 = 0x28113c11 < uVar15;
              bVar8 = uVar15 == 0x28113c12;
              iVar14 = -0x5536e131;
              iVar17 = 0x28489703;
              goto LAB_00317898;
            }
            goto LAB_0030e100;
          }
          uVar15 = DAT_004bd4c0 * DAT_004bd4c4 + 0x7dc109a3U | 0xbdd3be3b;
          bVar7 = 0x68df9cda < uVar15;
          bVar8 = uVar15 == 0x68df9cdb;
          iVar14 = -0x2e0bc5a6;
          iVar17 = -0x72d4f779;
          goto LAB_00317898;
        }
        if (-0x2efec54b < local_33c) {
          if (local_33c < -0x2d1793db) {
            if (local_33c == -0x2efec54a) {
              uVar15 = DAT_004bd7e8 ^ DAT_004bd7ec;
              _objc_msgSend(local_328,local_138,local_2d8);
              _objc_release(local_2d8);
              bVar8 = (uint)(byte)((ulong)uVar15 * 0x1a708c3 >> 0x38) * -0x483af2b6 == 0x17366ff5;
              iVar17 = -0x2efec54a;
              iVar14 = -0x27c3ec06;
              goto LAB_00316b88;
            }
            if (local_33c == -0x2e0bc5a6) {
              uVar15 = (DAT_004bd4c8 & DAT_004bd4cc ^ 0xf5b188bf) + 0xc0197ce1;
              bVar7 = 0x9082d40b < uVar15;
              bVar8 = uVar15 == 0x9082d40c;
              iVar17 = -0x72d4f779;
              iVar14 = 0x7cbf651e;
              goto LAB_0031784c;
            }
            if (local_33c == -0x2d1f2562) {
              *local_348 = 0x25e0875b;
            }
          }
          else if (local_33c == -0x2d1793db) {
            _objc_release(local_350);
            *local_348 = 0x3d06d563;
          }
          else if (local_33c == -0x2c39e6e7) {
            *local_348 = -0x2d1793db;
          }
          else if (local_33c == -0x2b19de2c) {
            *local_348 = -0x3a51891e;
          }
          goto LAB_0030e100;
        }
        if (local_33c < -0x30843dcf) {
          if (local_33c == -0x31a113bf) {
            *local_348 = 0x74eba5cd;
          }
          else if (local_33c == -0x30981c6f) {
            uVar15 = (DAT_004bd7a0 ^ DAT_004bd7a4 ^ 0x2a9e0e57) * -0x4fc53d;
            bVar7 = 0x441e6c50 < uVar15;
            bVar8 = uVar15 == 0x441e6c51;
            iVar14 = -0x45cc5b1d;
            iVar17 = -0x4cd2c64f;
            goto LAB_00317898;
          }
          goto LAB_0030e100;
        }
        if (local_33c == -0x30843dcf) {
          *local_348 = 0x39daee28;
          goto LAB_0030e100;
        }
        if (local_33c == -0x2f30afd8) {
          bVar8 = 0x6ec46b72 <
                  ((DAT_004bd590 + DAT_004bd594 & 0x1207facfU) + 0xf419c5f0) / 0xa28f8f1b;
          iVar14 = 0x5d00c7ff;
          iVar17 = 0x5139a8bd;
          goto LAB_00317998;
        }
        if (local_33c != -0x2f107b9b) goto LAB_0030e100;
        uVar15 = DAT_004bd528 + DAT_004bd52c;
        _objc_msgSend(local_350,local_e0,local_1b8);
        local_1c0 = _objc_retainAutoreleasedReturnValue();
        local_1c8 = DAT_004d1b08;
        bVar8 = (uVar15 / 0xe38318d ^ 0x3983d345) * -0x26ef1aa4 == 0x21f07f4a;
        iVar17 = -0x7dfa5525;
        iVar14 = 0x3ec578ab;
      }
      else {
        if (local_33c < -0x10b95aac) {
          iVar14 = -0x1e94e8af;
          if (local_33c < -0x17440edf) {
            if (-0x1be03e77 < local_33c) {
              if (local_33c < -0x18c31f18) {
                if (local_33c == -0x1be03e76) {
                  *local_348 = -0x1a8cfa13;
                }
                else if (local_33c == -0x1a8cfa13) {
                  bVar8 = 0x63961ccb <
                          ((DAT_004bd438 + DAT_004bd43c) * -0x24a15986 & 0xe5bfe8feU | 0xe08ba078);
                  iVar14 = -0x1a8cfa13;
                  iVar17 = 0x4380d075;
                  goto LAB_00317998;
                }
              }
              else if (local_33c == -0x18c31f18) {
                *local_348 = 0x2f3b7036;
              }
              else if (local_33c == -0x187bc02a) {
                local_e8 = PTR_s_isSeparatorNode_classes__0048b900;
                local_e0 = PTR_s_objectAtIndexedSubscript__00489528;
                local_f8 = PTR_s_messageWrap_0048b8c8;
                local_f0 = PTR_s_isKindOfClass__00489c00;
                local_100 = PTR_s_senderUser__0048b8a0;
                *local_348 = 0x4d470b6c;
              }
              else if (local_33c == -0x1849d94e) {
                uVar15 = 0;
                if (DAT_004bd41c != 0) {
                  uVar15 = DAT_004bd418 / DAT_004bd41c;
                }
                bVar8 = (uVar15 * 0x24bf1d87 & 0x7b51e0d5) * 0x59f913b5 == -0x7533355b;
                iVar14 = 0x6733dbf6;
                iVar17 = 0x14c92b73;
                goto LAB_0031724c;
              }
              goto LAB_0030e100;
            }
            if (-0x1d89f6c4 < local_33c) {
              if (local_33c == -0x1d89f6c3) {
                _objc_msgSend(local_350,local_e0,local_1e0);
                local_288 = _objc_retainAutoreleasedReturnValue();
                *local_348 = -0x7a7aa0d2;
              }
              else {
                if (local_33c == -0x1ce9e91d) {
                  bVar8 = local_2a9 == '\0';
                  iVar14 = -0x3e5ee2c0;
                  iVar17 = 0x3836658d;
                  goto LAB_003176b4;
                }
                if (local_33c == -0x1bfceaea) {
                  bVar8 = (DAT_004bd610 ^ DAT_004bd614 ^ 0x1f4c21c9) * -0x574008e8 == -0x11509e88;
                  iVar17 = -0xe7cd463;
                  iVar14 = 0x7c07bb79;
                  goto LAB_00316b88;
                }
              }
              goto LAB_0030e100;
            }
            if (local_33c != -0x1e94e8af) {
              if (local_33c == -0x1de725e6) {
                _objc_msgSend(local_350,local_e0,local_190);
                local_1a0 = _objc_retainAutoreleasedReturnValue();
                local_1a1 = _objc_msgSend(local_1a0,local_f0,DAT_004d1b08);
                *local_348 = -0x327b14ba;
              }
              goto LAB_0030e100;
            }
            local_d0 = PTR_s_set_0048b8f8;
            if (((DAT_004bd468 & DAT_004bd46c) + 0x3accd5e3 | 0x1990e080) != 0x87978220) {
              iVar14 = 0x4ec4688f;
            }
          }
          else if (local_33c < -0x147d0a44) {
            if (local_33c < -0x160399b2) {
              if (local_33c == -0x17440edf) {
                bVar8 = local_269 == '\0';
                iVar14 = -0x408e03b1;
                iVar17 = 0x65184348;
                goto LAB_003176b4;
              }
              if (local_33c == -0x1635e001) {
                _objc_msgSend(local_258,local_118);
                *local_348 = 0x5c173252;
              }
              goto LAB_0030e100;
            }
            if (local_33c != -0x160399b2) {
              if (local_33c == -0x15ffb199) {
                *local_348 = 0x4561b551;
              }
              else if (local_33c == -0x14edb4e2) {
                local_90[2] = FUN_0031aadc;
                puVar5[3] = &DAT_00480dc0;
                local_160 = puVar5 + 4;
                _objc_retain(local_d8);
                *local_348 = 0x3196e113;
              }
              goto LAB_0030e100;
            }
            if ((DAT_004bd460 * DAT_004bd464 & 0xd52515eU | 0x420050) * 0x67a6f8ca < 0xb901b60) {
              iVar14 = 0xd4e2b2e;
            }
          }
          else {
            if (local_33c < -0x1132b4c9) {
              if (local_33c == -0x147d0a44) {
                *local_348 = 0x1b6116ad;
                local_2f8 = local_1b0;
              }
              else {
                if (local_33c == -0x146a8d99) {
                  uVar15 = 0;
                  if (DAT_004bd77c != 0) {
                    uVar15 = DAT_004bd778 / DAT_004bd77c;
                  }
                  local_2a9 = _objc_msgSend(local_298,local_108,local_2a8);
                  _objc_release(local_2a8);
                  _objc_release(local_298);
                  bVar8 = (0x780cddd7U - (int)((long)((ulong)uVar15 * 0xa3db2525) >> 0x3f) &
                          0x68000904) == 0x8457f1de;
                  iVar17 = 0x7d0e7afe;
                  iVar14 = -0x1ce9e91d;
                  goto LAB_00316b88;
                }
                if (local_33c == -0x13603f7e) {
                  iVar14 = 0x61c67038;
                  if ((DAT_004bd400 | DAT_004bd404) * -0x724086f0 == -0x7695e042) {
                    iVar14 = 0x5d0b01cf;
                  }
                  goto LAB_0031799c;
                }
              }
              goto LAB_0030e100;
            }
            if (local_33c != -0x1132b4c9) {
              if (local_33c == -0x11321860) {
                *local_348 = 0x3d58d7;
              }
              else if (local_33c == -0x10e5f1d4) {
                local_2c9 = _objc_msgSend(local_2c8,local_118);
                *local_348 = -0x29b4c44a;
              }
              goto LAB_0030e100;
            }
            local_338 = local_310;
            iVar14 = 0x7e36c955;
            if ((DAT_004bd810 & DAT_004bd814) == 0x38aabd91) {
              iVar14 = -0x59d741fe;
            }
          }
          goto LAB_0031799c;
        }
        if (-0xb0707bd < local_33c) {
          if (local_33c < -0x6172519) {
            if (local_33c < -0x996081a) {
              if (local_33c == -0xb0707bc) {
                _objc_msgSend(local_328,local_120);
                _objc_retainAutoreleasedReturnValue();
                *local_348 = -0x1fd5e10c;
              }
              else if (local_33c == -0xa1e15c9) {
                *local_348 = -0x99228c6;
                local_308 = local_208;
              }
            }
            else if (local_33c == -0x996081a) {
              *local_348 = -0x225c8ad4;
            }
            else {
              if (local_33c == -0x99228c6) {
                local_330 = local_308;
                local_209 = local_320 != 0;
                local_20a = local_328 != 0;
                bVar8 = !(bool)local_209 || !(bool)local_20a;
                iVar14 = -0x15ffb199;
                iVar17 = -0x36797210;
                goto LAB_003176b4;
              }
              if (local_33c == -0x7372e6f) {
                *local_348 = -0x3b3d7f11;
              }
            }
          }
          else if (local_33c < -0x30eeacf) {
            if (local_33c == -0x6172519) {
              *local_90 = PTR___NSConcreteStackBlock_00481618;
              puVar5[1] = uVar2;
              *local_348 = -0x14edb4e2;
            }
            else {
              if (local_33c == -0x6025360) {
                uVar15 = DAT_004bd6b8 | DAT_004bd6bc;
                _objc_release(local_258);
                iVar14 = 0x1b721b4c;
                if (uVar15 == 0xedb226bf) {
                  iVar14 = -0x6025360;
                }
                goto LAB_0031799c;
              }
              if (local_33c == -0x409d859) {
                bVar8 = 0x6259267e < (DAT_004bd720 * DAT_004bd724 & 0xbbaf6b41U ^ 0xa0952bd6);
                iVar14 = 0x4d9a585b;
                iVar17 = 0xe87ab9;
                goto LAB_00317998;
              }
            }
          }
          else {
            if (local_33c == -0x30eeacf) {
              iVar14 = DAT_004bd5c8 - DAT_004bd5cc;
              _objc_msgSend(local_358,local_100,local_218);
              local_220 = _objc_retainAutoreleasedReturnValue();
              _objc_release(local_218);
              _objc_msgSend(local_328,local_f8);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar4,local_100,uVar13);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar13);
              local_221 = _objc_msgSend(local_220,local_108,uVar9);
              _objc_release(uVar9);
              bVar8 = (uint)((ulong)(iVar14 + 0xdd5e5d7c) * 0x3564a179 >> 0x3c) == 0xd160e84f;
              iVar14 = 0x77985ff5;
              iVar17 = -0x996081a;
              goto LAB_0031724c;
            }
            if (local_33c == -0x2f6e4f7) {
              *local_348 = -0x79b8b9df;
            }
            else if (local_33c == -0x2531ed3) {
              bVar8 = (((DAT_004bd4d0 | DAT_004bd4d4) + 0x4e2a1621 ^ 0x68802452) & 0xea80b47a) ==
                      0xa2686f47;
              iVar17 = 0x4a52d31c;
              iVar14 = -0x6f80aa65;
              goto LAB_00314a58;
            }
          }
          goto LAB_0030e100;
        }
        if (local_33c < -0xd82317d) {
          if (-0xf032557 < local_33c) {
            if (local_33c == -0xf032556) {
              bVar8 = 0x3779f922 <
                      (DAT_004bd4e8 + DAT_004bd4ec & 0x4012768U | 0x2ad68092) * -0x3e577664;
              iVar14 = -0xf032556;
              iVar17 = 0x1f7f36c4;
              goto LAB_00317998;
            }
            if (local_33c == -0xe7cd463) {
              _objc_release(local_230);
              *local_348 = 0x7c07bb79;
            }
            else if (local_33c == -0xe1432a6) {
              *local_348 = 0x333a553d;
            }
            goto LAB_0030e100;
          }
          if (local_33c == -0x10b95aac) {
            _objc_release(local_d8);
            *local_348 = -0x2f6e4f7;
            goto LAB_0030e100;
          }
          if (local_33c != -0x1041394a) goto LAB_0030e100;
          uVar15 = DAT_004bd7f8 & DAT_004bd7fc;
          _objc_release(local_330);
          bVar8 = (uVar15 | 0x1a3a0ae7) == 0xa122fd6f;
          iVar17 = -0x1041394a;
          iVar14 = -0x20a59041;
        }
        else {
          if (local_33c < -0xcd5b5ca) {
            if (local_33c == -0xd82317d) {
              iVar14 = DAT_004bd428 - DAT_004bd42c;
              _dispatch_once(&DAT_004d1b18,local_88);
              bVar8 = ((uint)(iVar14 * -0x66cccc6a) / 0x7b932b21 | 0x8e8a90b0) == 0xb43d9f07;
              iVar14 = -0xd82317d;
              iVar17 = 0x5c2ee555;
              goto LAB_0031724c;
            }
            if (local_33c == -0xd251728) {
              local_190 = local_318 - 1;
              *local_348 = -0x2531ed3;
            }
            else if (local_33c == -0xd207f3f) {
              _objc_msgSend(local_230,local_118);
              *local_348 = 0x6bef5f0a;
            }
            goto LAB_0030e100;
          }
          if (local_33c == -0xcd5b5ca) {
            *local_348 = 0x6b69dd2e;
            goto LAB_0030e100;
          }
          if (local_33c != -0xc9b8fee) {
            if (local_33c == -0xb64df08) {
              *local_348 = 0x7300a50b;
            }
            goto LAB_0030e100;
          }
          bVar8 = (uint)((ulong)((DAT_004bd690 & DAT_004bd694) * -0x4287af92 + 0x486f110e) *
                         0x54c5518b >> 0x3d) == 0x44abd42f;
          iVar17 = -0x22086458;
          iVar14 = 0x79c02d93;
        }
      }
LAB_00316b88:
      if (bVar8) {
        iVar14 = iVar17;
      }
      goto LAB_0031799c;
    }
    if (local_33c < -0x5ec15424) {
      if (local_33c < -0x6f80aa65) {
        if (local_33c < -0x78683aaa) {
          if (local_33c < -0x7dfa5525) {
            if (local_33c < -0x7ec50c24) {
              if (local_33c == -0x7fcd021b) {
                uVar15 = -(int)((long)((ulong)(DAT_004bd770 | DAT_004bd774 | 0xc5f7ffd7) *
                                      0x94ae305b) >> 0x3f);
                bVar7 = 0xdb53c343 < uVar15;
                bVar8 = uVar15 == 0xdb53c344;
                iVar17 = -0x146a8d99;
                iVar14 = 0x7d0e7afe;
                goto LAB_0031784c;
              }
              if (local_33c == -0x7f9e25bf) {
                *local_348 = 0x77f74c2d;
                local_2f0 = 0;
              }
            }
            else {
              if (local_33c == -0x7ec50c24) {
                iVar14 = -0x6256159c;
                if ((DAT_004bd580 - DAT_004bd584) * 0x26eca0e4 == 0x425f977e) {
                  iVar14 = -0x33b8b851;
                }
                goto LAB_0031799c;
              }
              if (local_33c == -0x7e011692) {
                _objc_msgSend(local_d8,local_140,local_328);
                *local_348 = 0x1a64d977;
              }
              else if (local_33c == -0x7dfc1b1b) {
                uVar15 = 0;
                if (DAT_004bd844 != 0) {
                  uVar15 = DAT_004bd840 / DAT_004bd844;
                }
                uVar15 = (uVar15 ^ 0x379024c2) & 0x3799a7ca ^ 0xbba314b;
                bVar7 = 0x7088d9dc < uVar15;
                bVar8 = uVar15 == 0x7088d9dd;
                iVar14 = -0x24b3bbcb;
                iVar17 = -0x78ae8097;
                goto LAB_00317898;
              }
            }
            goto LAB_0030e100;
          }
          if (local_33c < -0x7a7aa0d2) {
            if (local_33c == -0x7dfa5525) {
              _objc_msgSend(local_350,local_e0,local_1b8);
              _objc_retainAutoreleasedReturnValue();
              *local_348 = -0x2f107b9b;
            }
            else if (local_33c == -0x7a84f14d) {
              *local_348 = -0xd82317d;
            }
            goto LAB_0030e100;
          }
          if (local_33c == -0x7a7aa0d2) {
            bVar8 = (DAT_004bd730 * DAT_004bd734 * -0x2f777e2 & 0xffffcb2fU | 0xbbec8b29) ==
                    0x2c58875f;
            iVar14 = -0x3b6bed82;
            iVar17 = 0x5f4f6d54;
          }
          else {
            if (local_33c != -0x79b8b9df) {
              if (local_33c == -0x78ae8097) {
                bVar8 = 0x91099041 <
                        (((DAT_004bd848 | DAT_004bd84c) & 0x3673317b) + 0xf27263c0 | 0xd04d7f1c);
                iVar14 = -0x24b3bbcb;
                iVar17 = 0x13ca8af;
                goto LAB_00317998;
              }
              goto LAB_0030e100;
            }
            uVar15 = 0;
            if (DAT_004bd884 != 0) {
              uVar15 = DAT_004bd880 / DAT_004bd884;
            }
            bVar8 = (uVar15 + 0xa0a0e994 & 0x8c55aae) * 0x4906f559 == 0x2b1f50ad;
            iVar14 = 0x513681f7;
            iVar17 = 0x6c2de766;
          }
        }
        else if (local_33c < -0x72d4f779) {
          if (local_33c < -0x777791d7) {
            if (local_33c == -0x78683aaa) {
              bVar8 = 0x8a4407f9 <
                      (DAT_004bd3e0 * DAT_004bd3e4 ^ 0x3a662401U | 0x411052f4) + 0x6ea0cd33;
              iVar17 = -0x61e09806;
              iVar14 = 0x48998a92;
              goto LAB_003170b8;
            }
            if (local_33c == -0x782ba3f3) {
              iVar14 = 0x21e59e61;
              if (local_1c9 == '\0') {
                iVar14 = -0x56af1a5e;
              }
              goto LAB_00314000;
            }
            goto LAB_0030e100;
          }
          if (local_33c != -0x777791d7) {
            if (local_33c == -0x75d82c3a) {
              local_269 = _objc_msgSend(local_268,local_118);
              _objc_release(local_268);
              _objc_release(local_258);
              *local_348 = 0x68cab8ce;
            }
            else if (local_33c == -0x73e8d3ff) {
              *local_348 = -0x32dddc9a;
            }
            goto LAB_0030e100;
          }
          bVar8 = (DAT_004bd5e0 - DAT_004bd5e4 & 0x22a5dc20U) * -0x4f88012 == -0x5e29d94f;
          iVar14 = 0x5e6736d8;
          iVar17 = 0x2bca558c;
        }
        else {
          if (local_33c < -0x718f62b6) {
            if (local_33c == -0x72d4f779) {
              *local_348 = -0x2e0bc5a6;
            }
            else {
              if (local_33c == -0x71d5c8e0) {
                iVar17 = DAT_004bd548 + DAT_004bd54c;
                _objc_msgSend(local_350,local_e0,local_1b8);
                local_1d8 = _objc_retainAutoreleasedReturnValue();
                iVar14 = -0x71d5c8e0;
                if ((iVar17 + 0xc6585343U & 0xe14334e6 | 0x610010c0) != 0x6c427076) {
                  iVar14 = 0x473a1727;
                }
                goto LAB_0031799c;
              }
              if (local_33c == -0x71ce5f89) {
                *local_348 = 0x2385066b;
              }
            }
            goto LAB_0030e100;
          }
          if (local_33c == -0x718f62b6) {
            *local_348 = -0xf032556;
            goto LAB_0030e100;
          }
          if (local_33c != -0x7046bee3) {
            if (local_33c == -0x6fa057ce) {
              local_2b9 = _objc_msgSend(local_2b8,local_118);
              *local_348 = 0x557af4de;
            }
            goto LAB_0030e100;
          }
          bVar8 = local_2c9 == '\0';
          iVar14 = -0x32dddc9a;
          iVar17 = -0x3e5ee2c0;
        }
        goto LAB_003176b4;
      }
      if (local_33c < -0x650acd64) {
        if (local_33c < -0x6bafd2e6) {
          if (local_33c < -0x6ec4cfec) {
            if (local_33c == -0x6f80aa65) {
              *local_348 = 0x4a52d31c;
            }
            else if (local_33c == -0x6f4a22bd) {
              local_c8 = PTR__OBJC_CLASS___NSMutableSet_0048cc88;
              bVar8 = ((DAT_004bd458 * DAT_004bd45c ^ 0xc81c4a1U) & 0x4ca7c4ad) * -0x1ffd7b73 ==
                      -0x35814989;
              iVar14 = 0x35ae7e7b;
              iVar17 = -0x3b5e42aa;
              goto LAB_0031724c;
            }
          }
          else if (local_33c == -0x6ec4cfec) {
            _objc_msgSend(local_328,local_f8);
            uVar13 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_358,local_100,uVar13);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar13);
            _objc_msgSend(local_330,local_f8);
            _objc_retainAutoreleasedReturnValue();
            *local_348 = 0x451d35d;
          }
          else if (local_33c == -0x6e703a4f) {
            *local_348 = 0x2277a1c9;
          }
          else if (local_33c == -0x6d6698c9) {
            (*local_2e8)(local_168);
            *local_348 = -0x615178e1;
          }
        }
        else if (local_33c < -0x674f7c8f) {
          if (local_33c == -0x6bafd2e6) {
            *local_348 = -0x7fcd021b;
          }
          else if (local_33c == -0x6ab1246f) {
            *local_348 = 0x5e3d219d;
          }
          else if (local_33c == -0x69ff57b1) {
            *local_348 = -0x2300dfb5;
          }
        }
        else {
          if (local_33c == -0x674f7c8f) {
            uVar15 = 0;
            if (DAT_004bd7b4 != 0) {
              uVar15 = DAT_004bd7b0 / DAT_004bd7b4;
            }
            uVar15 = (uVar15 * 0x67c342e0) / 0xaa21b2ff | 0x4078622;
            bVar7 = 0xe1d690db < uVar15;
            bVar8 = uVar15 == 0xe1d690dc;
            iVar14 = -0xb0707bc;
            iVar17 = -0x1fd5e10c;
            goto LAB_00317898;
          }
          if (local_33c == -0x6671e090) {
            *local_348 = -0x392bea19;
          }
          else if (local_33c == -0x659bbe88) {
            _objc_release(local_1c0);
            *local_348 = -0x3bb7b21a;
          }
        }
        goto LAB_0030e100;
      }
      if (-0x61c24010 < local_33c) {
        if (local_33c < -0x613b9f55) {
          if (local_33c == -0x61c2400f) {
            _objc_msgSend(local_328,local_138,local_2d8);
            _objc_release(local_2d8);
            *local_348 = -0x2efec54a;
          }
          else if (local_33c == -0x61a60da7) {
            *local_348 = 0x6aba84bf;
          }
          else if (local_33c == -0x615178e1) {
            uVar15 = DAT_004bd828 ^ DAT_004bd82c;
            (*local_2e8)(local_168);
            bVar8 = 0xd3b66732 < (uVar15 * 0x5ff8be7c & 0xff8c7fba | 0xe90c79aa);
            iVar14 = -0x615178e1;
            iVar17 = -0x31a113bf;
            goto LAB_00317998;
          }
        }
        else if (local_33c == -0x613b9f55) {
          *local_348 = 0x7c344a15;
        }
        else if (local_33c == -0x5f0c1ce4) {
          *local_348 = 0x6e828cc8;
        }
        else if (local_33c == -0x5f01b31c) {
          *local_348 = -0x75d82c3a;
        }
        goto LAB_0030e100;
      }
      if (local_33c < -0x629f7187) {
        if (local_33c == -0x650acd64) {
          *local_348 = 0x23294c79;
        }
        else if (local_33c == -0x64714e87) {
          _objc_msgSend(local_350,local_a0);
          *local_348 = 0x4128bf09;
        }
        goto LAB_0030e100;
      }
      if (local_33c == -0x629f7187) {
        bVar8 = 0xd2bddea6 < ((DAT_004bd6e8 ^ DAT_004bd6ec | 0xff83ffff) & 0x9878556);
        iVar17 = 0x620607ca;
        iVar14 = -0x17440edf;
        goto LAB_003170b8;
      }
      if (local_33c == -0x6256159c) {
        uVar15 = DAT_004bd588 & DAT_004bd58c;
        local_1f9 = _objc_msgSend(local_1f0,local_f0,local_1f8);
        iVar14 = 0x282509bd;
        if (uVar15 == 0xb3b326b2) {
          iVar14 = -0x6256159c;
        }
        goto LAB_0031799c;
      }
      if (local_33c != -0x61e09806) goto LAB_0030e100;
      uVar15 = DAT_004bd3e8 + DAT_004bd3ec & 0xe8d8d8f6U | 0xa8d858f6;
      puVar16 = (undefined8 *)((long)puVar16 + -0x30);
      local_90 = puVar16;
      _objc_retain(local_350);
      local_91 = (undefined1)local_35c;
      local_a0 = PTR_s_count_00489538;
      bVar7 = 0xb33db66b < uVar15;
      bVar8 = uVar15 == 0xb33db66c;
      iVar14 = -0x61e09806;
      iVar17 = -0x6e703a4f;
    }
    else if (local_33c < -0x49c6f507) {
      if (local_33c < -0x5536e131) {
        if (local_33c < -0x5a375d85) {
          if (local_33c < -0x5cd9a2dc) {
            if (local_33c == -0x5ec15424) {
              bVar8 = ((DAT_004bd6c0 + DAT_004bd6c4 ^ 0x35de2295U) * -0x96c51a3 & 0x8799e68e) ==
                      0x484ad790;
              iVar14 = -0x4c2cfe5a;
              iVar17 = 0x3846119b;
              goto LAB_0031724c;
            }
            if (local_33c == -0x5d3e4885) {
              bVar8 = (int)((long)((ulong)(DAT_004bd450 ^ DAT_004bd454) * 0x88bc2e05) >> 0x3f) *
                      -0x7f91ae16 == -0x1db21d41;
              iVar17 = -0x6f4a22bd;
              iVar14 = 0x35ae7e7b;
              goto LAB_00314a58;
            }
          }
          else {
            if (local_33c == -0x5cd9a2dc) {
              uVar15 = DAT_004bd5a8 & DAT_004bd5ac;
              _objc_msgSend(local_350,local_e0,local_1e0);
              local_208 = _objc_retainAutoreleasedReturnValue();
              bVar8 = (uVar15 * -0x41929b6a ^ 0x70ab265a) / 0x8a6ec32 == 0x7c491d0b;
              iVar17 = -0x5cd9a2dc;
              iVar14 = -0x5f0c1ce4;
              goto LAB_00316b88;
            }
            if (local_33c == -0x5c964c35) {
              *local_348 = 0x39a1336e;
            }
            else if (local_33c == -0x5b0c8748) {
              *local_348 = 0x55712023;
            }
          }
          goto LAB_0030e100;
        }
        if (local_33c < -0x58ca8259) {
          if (local_33c == -0x5a375d85) {
            _objc_release(local_258);
            *local_348 = -0x6025360;
          }
          else if (local_33c == -0x59d741fe) {
            _objc_release(local_178);
            _objc_msgSend(local_350,local_a0);
            *local_348 = 0x7e36c955;
          }
          goto LAB_0030e100;
        }
        if (local_33c == -0x58ca8259) {
          _objc_msgSend(local_350,local_e0,local_1e0);
          _objc_retainAutoreleasedReturnValue();
          *local_348 = -0x5cd9a2dc;
          goto LAB_0030e100;
        }
        if (local_33c == -0x56b375dc) {
          uVar15 = (DAT_004bd430 & DAT_004bd434 | 0xa4dfa947) + 0x8e192267 & 0xf4a889c4;
          bVar7 = 0x22746ab3 < uVar15;
          bVar8 = uVar15 == 0x22746ab4;
          iVar14 = -0x1a8cfa13;
          iVar17 = -0x1be03e76;
        }
        else {
          if (local_33c != -0x56af1a5e) goto LAB_0030e100;
          local_328 = local_300;
          uVar15 = ((DAT_004bd560 | DAT_004bd564) ^ 0xff867ad2) + 0x9676f54 ^ 0x83dcf241;
          bVar7 = 0xcba46b1 < uVar15;
          bVar8 = uVar15 == 0xcba46b2;
          iVar14 = 0x67c47960;
          iVar17 = 0x7545d98;
        }
      }
      else {
        if (local_33c < -0x4dd662dd) {
          if (-0x53b69287 < local_33c) {
            if (local_33c == -0x53b69286) {
              uVar15 = DAT_004bd658 | DAT_004bd65c;
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,1);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_320,local_130,uVar13);
              _objc_release(uVar13);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
              local_250 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_320,local_138,local_250);
              iVar14 = 0x3bb909a6;
              if (0xf30999e5 < (uVar15 * -0x5422256b | 0x138a7e65) * 0x50451b1b) {
                iVar14 = -0x53b69286;
              }
            }
            else {
              if (local_33c != -0x525dfa70) {
                if (local_33c == -0x4e558de7) {
                  _objc_msgSend(local_358,local_100,local_2a0);
                  _objc_retainAutoreleasedReturnValue();
                  _objc_release(local_2a0);
                  *local_348 = 0x54a6fd9c;
                }
                goto LAB_0030e100;
              }
              iVar17 = DAT_004bd668 + DAT_004bd66c;
              _objc_release(local_250);
              _objc_msgSend(local_d8,local_140,local_320);
              iVar14 = -0x525dfa70;
              if (((uint)((ulong)(uint)(iVar17 * -0x1c18f90e) * 0xbf26c939 >> 0x3e) | 0xa209edd0) !=
                  0x2b66dd10) {
                iVar14 = 0x51cfb12c;
              }
            }
            *local_348 = iVar14;
            goto LAB_0030e100;
          }
          if (local_33c != -0x5536e131) {
            if (local_33c == -0x544c6a10) {
              *local_348 = 0x270a67a6;
            }
            goto LAB_0030e100;
          }
          bVar8 = false;
          iVar14 = 0x28489703;
          iVar17 = 0x6130f310;
          goto LAB_0031724c;
        }
        if (-0x4c2cfe5b < local_33c) {
          if (local_33c == -0x4c2cfe5a) {
            *local_348 = 0x3846119b;
          }
          else if (local_33c == -0x4b612c22) {
            *local_348 = 0x6aba84bf;
          }
          else if (local_33c == -0x4b292355) {
            bVar8 = local_20a == '\0';
            iVar17 = -0x3e5ee2c0;
            iVar14 = -0x613b9f55;
            goto LAB_00316b88;
          }
          goto LAB_0030e100;
        }
        if (local_33c == -0x4dd662dd) {
          _objc_msgSend(local_350,local_e0,local_190);
          local_1b0 = _objc_retainAutoreleasedReturnValue();
          *local_348 = 0x26883e17;
          goto LAB_0030e100;
        }
        if (local_33c == -0x4dcffe80) {
          *local_348 = 0x28f9ec09;
          goto LAB_0030e100;
        }
        if (local_33c != -0x4cd2c64f) goto LAB_0030e100;
        uVar15 = 0;
        if (DAT_004bd7ac != 0) {
          uVar15 = DAT_004bd7a8 / DAT_004bd7ac;
        }
        uVar15 = (uint)((ulong)((uVar15 ^ 0x15bceee1) * 0x3e775d33) * 0x218128c7 >> 0x3c);
        bVar7 = 0x2fcf5980 < uVar15;
        bVar8 = uVar15 == 0x2fcf5981;
        iVar14 = -0x45cc5b1d;
        iVar17 = -0x73e8d3ff;
      }
    }
    else {
      if (local_33c < -0x3bb7b21a) {
        if (local_33c < -0x42c9544b) {
          if (-0x485d2670 < local_33c) {
            if (local_33c == -0x485d266f) {
              _objc_release(local_330);
              iVar14 = -0x1041394a;
LAB_00317018:
              *local_348 = iVar14;
            }
            else if (local_33c == -0x47e9cd14) {
              uVar15 = DAT_004bd4a8 ^ DAT_004bd4ac;
              _objc_msgSend(local_350,local_e0,local_318);
              local_178 = _objc_retainAutoreleasedReturnValue();
              local_179 = _objc_msgSend(local_358,local_e8,local_178,DAT_004d1b10);
              iVar14 = -0x2386be2b;
              if (uVar15 * -0x2583203b + 0xd692de44 < 0xc8e0f686) {
                iVar14 = 0x4b1c9804;
              }
LAB_00317450:
              *local_348 = iVar14;
            }
            else if (local_33c == -0x45cc5b1d) {
              *local_348 = -0x4cd2c64f;
            }
            goto LAB_0030e100;
          }
          if (local_33c == -0x49c6f507) {
            bVar8 = local_289 == '\0';
            iVar14 = 0x3836658d;
            iVar17 = 0x47d0b71e;
            goto LAB_003176b4;
          }
          if (local_33c != -0x496775d0) goto LAB_0030e100;
          iVar14 = DAT_004bd648 - DAT_004bd64c;
          local_241 = _objc_msgSend(local_240,local_118);
          bVar8 = 0xd3ea9132 < (iVar14 + 0x9b75ff94U ^ 0x3a9a4898);
          iVar17 = 0x1bb3fd11;
          iVar14 = -0x5c964c35;
        }
        else {
          if (-0x407a0f31 < local_33c) {
            if (local_33c == -0x407a0f30) {
              local_188 = local_318 + 1;
              bVar8 = ((DAT_004bd4b8 & DAT_004bd4bc ^ 0xe6b358b) * -0x2579ef66 & 0xe7138f64) ==
                      0xa7c0a9c3;
              iVar14 = -0x407a0f30;
              iVar17 = 0x71c88ebf;
              goto LAB_0031724c;
            }
            if (local_33c == -0x3f413612) {
              bVar8 = 0x24119abf < local_7c;
              iVar14 = -0x25820677;
              iVar17 = 0x15ebe5a3;
              goto LAB_00317998;
            }
            if (local_33c == -0x3e5ee2c0) {
              uVar15 = 0;
              if (DAT_004bd7f4 != 0) {
                uVar15 = DAT_004bd7f0 / DAT_004bd7f4;
              }
              bVar8 = uVar15 / 0x3ecad55 == 0x252f5a0b;
              iVar17 = -0x1041394a;
              iVar14 = -0x485d266f;
              goto LAB_00314a58;
            }
            goto LAB_0030e100;
          }
          if (local_33c != -0x42c9544b) {
            if (local_33c == -0x41c4a494) {
              *local_348 = 0x55fee667;
            }
            else if (local_33c == -0x408e03b1) {
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,1);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_328,local_150,uVar13);
              _objc_release(uVar13);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_328,local_138,uVar13);
              _objc_release(uVar13);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
              local_278 = _objc_retainAutoreleasedReturnValue();
              *local_348 = -0x71ce5f89;
            }
            goto LAB_0030e100;
          }
          bVar8 = 0x82fa3daf < ((DAT_004bd518 & DAT_004bd51c) * 0x2d8c7787 ^ 0x332c58b9);
          iVar17 = -0x42c9544b;
          iVar14 = 0xd8c5b07;
        }
        goto LAB_003170b8;
      }
      if (local_33c < -0x3b00f736) {
        if (local_33c < -0x3b6bed82) {
          if (local_33c == -0x3bb7b21a) {
            uVar15 = DAT_004bd538 - DAT_004bd53c;
            _objc_release(local_1c0);
            iVar14 = -0x3bb7b21a;
            if ((uVar15 & 0x9de84cfa) != 0xbd2064a4) {
              iVar14 = -0x782ba3f3;
            }
            goto LAB_0031799c;
          }
          if (local_33c == -0x3b9daa99) {
            *local_348 = 0x2edf39c4;
          }
          goto LAB_0030e100;
        }
        if (local_33c == -0x3b6bed82) {
          uVar15 = DAT_004bd738 & DAT_004bd73c;
          local_289 = _objc_msgSend(local_358,local_e8,local_288,DAT_004d1b10);
          _objc_release(local_288);
          bVar8 = (uVar15 & 0x49854afe) == 0xb0d3ab8b;
          iVar14 = 0x5f4f6d54;
          iVar17 = -0xcd5b5ca;
        }
        else {
          if (local_33c == -0x3b5e42aa) {
            *local_348 = -0x160399b2;
            goto LAB_0030e100;
          }
          if (local_33c != -0x3b3d7f11) goto LAB_0030e100;
          bVar8 = (uint)((ulong)((DAT_004bd500 & DAT_004bd504 & 0x758c620b) + 0x33ccd519) *
                         0x2c297fd7 >> 0x3d) == 0x9b476e6c;
          iVar14 = -0x30843dcf;
          iVar17 = 0x39daee28;
        }
LAB_0031724c:
        if (!bVar8) {
          iVar14 = iVar17;
        }
        goto LAB_0031799c;
      }
      if (-0x392bea1a < local_33c) {
        if (local_33c == -0x392bea19) {
          uVar15 = 0;
          if (DAT_004bd44c != 0) {
            uVar15 = DAT_004bd448 / DAT_004bd44c;
          }
          bVar8 = (uint)((ulong)(uVar15 + 0x22f6d72a | 0xddc4235b) * 0x45a9b2ff >> 0x3d) ==
                  0x2fa549d4;
          iVar14 = -0x392bea19;
          iVar17 = 0x4dc9e627;
          goto LAB_0031724c;
        }
        if (local_33c == -0x3913a544) {
          *local_348 = -0x42c9544b;
        }
        else if (local_33c == -0x37794803) {
          _objc_release(local_2c8);
          _objc_release(local_2b8);
          *local_348 = -0x3b00f736;
        }
        goto LAB_0030e100;
      }
      if (local_33c != -0x3b00f736) {
        if (local_33c == -0x3a69afa3) {
          *local_348 = -0x408e03b1;
        }
        else if (local_33c == -0x3a51891e) {
          uVar15 = DAT_004bd870 + DAT_004bd874 + 0xf28e044a;
          bVar7 = 0x31e7fca8 < uVar15;
          bVar8 = uVar15 == 0x31e7fca9;
          iVar14 = -0x10b95aac;
          iVar17 = 0x4dfa18e1;
          goto LAB_00317898;
        }
        goto LAB_0030e100;
      }
      uVar15 = (DAT_004bd7c8 * DAT_004bd7cc | 0x3c959f21U) * -0x7a63c03c;
      _objc_release(local_2c8);
      _objc_release(local_2b8);
      bVar7 = 0x75a3572c < uVar15;
      bVar8 = uVar15 == 0x75a3572d;
      iVar14 = -0x37794803;
      iVar17 = -0x7046bee3;
    }
  }
  else {
    iVar14 = 0x5e3d219d;
    if (local_33c < 0x4731433e) {
      if (local_33c < 0x270a67a6) {
        if (local_33c < 0x1b6116ad) {
          if (local_33c < 0x9251842) {
            if (local_33c < 0x3fa2efe) {
              if (local_33c < 0xe87ab9) {
                if (local_33c == -0xc19720) {
                  bVar8 = local_259 == '\0';
                  iVar17 = 0x42112bcf;
                  iVar14 = 0x2f38187f;
                  goto LAB_00316b88;
                }
                if (local_33c == 0x3d58d7) {
                  iVar14 = 0x3d58d7;
                  if ((((DAT_004bd858 & DAT_004bd85c) * 0x7dce0623) / 0x2ae20a4 ^ 0xb35659b2) <
                      0xe2380a26) {
                    iVar14 = 0x20143e81;
                  }
                  goto LAB_0031799c;
                }
                if (local_33c == 0x710e21) {
                  return;
                }
              }
              else if (local_33c == 0xe87ab9) {
                *local_348 = 0x4d9a585b;
              }
              else {
                if (local_33c != 0x13ca8af) {
                  iVar14 = 0x3488da5;
                  goto LAB_00312430;
                }
                *local_348 = 0x52afef0b;
              }
            }
            else if (local_33c < 0x47d6d0f) {
              if (local_33c == 0x3fa2efe) {
                *local_348 = 0x6b9aaff;
              }
              else if (local_33c == 0x451d35d) {
                uVar15 = 0;
                if (DAT_004bd75c != 0) {
                  uVar15 = DAT_004bd758 / DAT_004bd75c;
                }
                _objc_msgSend(local_328,local_f8);
                uVar13 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(local_358,local_100,uVar13);
                local_298 = _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar13);
                _objc_msgSend(local_330,local_f8);
                local_2a0 = _objc_retainAutoreleasedReturnValue();
                bVar7 = 0xee0e0043 < uVar15 + 0x1318d7e3;
                bVar8 = uVar15 + 0x1318d7e3 == 0xee0e0044;
                iVar14 = 0x451d35d;
                iVar17 = 0x516378d6;
                goto LAB_00317898;
              }
            }
            else if (local_33c == 0x47d6d0f) {
              *local_348 = -0x239eaa63;
            }
            else {
              if (local_33c == 0x6b9aaff) {
                uVar15 = (uint)(byte)((ulong)((DAT_004bd440 | DAT_004bd444) / 0x49cf478e |
                                             0x1c4d2544) * 0xf1c1761 >> 0x38);
                bVar7 = 0xd100cc6a < uVar15;
                bVar8 = uVar15 == 0xd100cc6b;
                iVar17 = -0x392bea19;
                iVar14 = -0x6671e090;
                goto LAB_0031784c;
              }
              if (local_33c == 0x7545d98) {
                _objc_msgSend(local_350,local_a0);
                *local_348 = 0x67c47960;
              }
            }
          }
          else if (local_33c < 0x14c92b73) {
            if (local_33c < 0xd4e2b2e) {
              if (local_33c == 0x9251842) {
                *local_160 = local_d8;
                *(undefined1 *)(local_90 + 5) = local_91;
                _objc_retainBlock();
                _objc_msgSend(PTR__OBJC_CLASS___NSThread_0048cc90,PTR_s_isMainThread_0048b930);
                *local_348 = 0x368560a0;
              }
              else if (local_33c == 0xa718f1e) {
                _objc_release(local_328);
                _objc_release(local_320);
                *local_348 = 0x595a943e;
              }
            }
            else if (local_33c == 0xd4e2b2e) {
              *local_348 = -0x1e94e8af;
            }
            else if (local_33c == 0xd8c5b07) {
              *local_348 = -0xe1432a6;
            }
            else if (local_33c == 0x12714bda) {
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
              local_b0 = _objc_retainAutoreleasedReturnValue();
              *local_88 = PTR___NSConcreteGlobalBlock_00481610;
              *local_348 = -0x13603f7e;
            }
          }
          else if (local_33c < 0x188f39a0) {
            if (local_33c == 0x14c92b73) {
              bVar8 = local_b9 == '\0';
              iVar17 = -0x7a84f14d;
              iVar14 = 0x3fa2efe;
              goto LAB_00316b88;
            }
            if (local_33c == 0x15ebe5a3) {
              puVar16 = (undefined8 *)((long)puVar16 + -0x30);
              *local_348 = -0x25820677;
            }
            else if (local_33c == 0x17de2c51) {
              *local_348 = -0x409d859;
            }
          }
          else if (local_33c == 0x188f39a0) {
            *local_348 = -0x407a0f30;
          }
          else if (local_33c == 0x192009c3) {
            *local_348 = 0x24966fd2;
          }
          else if (local_33c == 0x1a64d977) {
            uVar15 = DAT_004bd708 ^ DAT_004bd70c;
            _objc_msgSend(local_d8,local_140,local_328);
            bVar8 = 0x6181a5e7 <
                    ((uint)((ulong)uVar15 * 0x1c99bb15 >> 0x3b) ^ 0x88b11092 | 0x330e4769);
            iVar14 = -0x7e011692;
            iVar17 = 0x3198ced3;
            goto LAB_00317998;
          }
          goto LAB_0030e100;
        }
        if (0x21e59e60 < local_33c) {
          if (local_33c < 0x24966fd2) {
            if (local_33c < 0x23294c79) {
              if (local_33c == 0x21e59e61) {
                iVar14 = -0x71d5c8e0;
                if (((DAT_004bd540 + DAT_004bd544) * 0x6b3d4c63 & 0x45fb7dd9U) * 0x6a11e49e <
                    0xa229feba) {
                  iVar14 = 0x6501a896;
                }
                goto LAB_0031799c;
              }
              if (local_33c == 0x2277a1c9) {
                bVar8 = 0x3756f3e5 <
                        ((DAT_004bd3f0 ^ DAT_004bd3f4 ^ 0x9b461c10) + 0x162bd8a4 ^ 0x378468ba);
                iVar17 = 0x4128bf09;
                iVar14 = -0x64714e87;
                goto LAB_003170b8;
              }
              goto LAB_0030e100;
            }
            if (local_33c == 0x23294c79) {
              uVar15 = 0;
              if (DAT_004bd89c != 0) {
                uVar15 = DAT_004bd898 / DAT_004bd89c;
              }
              uVar15 = (uint)((ulong)(uVar15 ^ 0x56f003f2) * 0x740530d1 >> 0x3e) | 0xdf6319c0;
              bVar7 = 0x89f87330 < uVar15;
              bVar8 = uVar15 == 0x89f87331;
              iVar17 = 0x23294c79;
              iVar14 = 0x710e21;
              goto LAB_0031784c;
            }
            if (local_33c != 0x2385066b) {
              if (local_33c == 0x23ec5cc7) {
                _objc_release(local_2b8);
                *local_348 = -0x28db66ba;
              }
              goto LAB_0030e100;
            }
            uVar15 = DAT_004bd6f8 * DAT_004bd6fc;
            _objc_msgSend(local_328,local_158,local_278);
            _objc_release(local_278);
            iVar14 = -0x5b0c8748;
            if ((uint)((ulong)uVar15 * 0x32ee1b4b >> 0x3d) * -0xca3dd10 == -0x1267c285) {
              iVar14 = 0x2385066b;
            }
          }
          else {
            if (local_33c < 0x26437bad) {
              if (local_33c != 0x24966fd2) {
                if (local_33c == 0x25e0875b) {
                  iVar17 = DAT_004bd578 + DAT_004bd57c;
                  _objc_msgSend(local_350,local_e0,local_1e0);
                  local_1f0 = _objc_retainAutoreleasedReturnValue();
                  local_1f8 = DAT_004d1b08;
                  iVar14 = 0x54e95d13;
                  if (0x5e40d23a <
                      ((uint)((ulong)(uint)(iVar17 * -0x5520d404) * 0x21f95f9f >> 0x3c) | 0x19530ba4
                      )) {
                    iVar14 = 0x25e0875b;
                  }
                  goto LAB_0031799c;
                }
                if (local_33c == 0x262babf0) {
                  _objc_msgSend(local_c8,local_d0);
                  local_d8 = _objc_retainAutoreleasedReturnValue();
                  lVar12 = _objc_msgSend(local_350,local_a0);
                  bVar8 = lVar12 == 0;
                  iVar14 = -0x6172519;
                  iVar17 = -0x187bc02a;
                  goto LAB_0031724c;
                }
                goto LAB_0030e100;
              }
              bVar8 = DAT_004bd558 + DAT_004bd55c == -0x50e0924b;
              iVar14 = 0x24966fd2;
              iVar17 = 0x7ba9d47f;
              goto LAB_0031724c;
            }
            if (local_33c == 0x26437bad) {
              iVar14 = -0x2d1f2562;
              cVar1 = local_1e1;
LAB_00315f14:
              if (cVar1 == '\0') {
                iVar14 = -0x99228c6;
              }
              *local_348 = iVar14;
              local_308 = 0;
              goto LAB_0030e100;
            }
            if (local_33c == 0x26883e17) {
              bVar8 = 0x7679a06a <
                      ((DAT_004bd510 + DAT_004bd514 ^ 0x82012300U) & 0xff6d771d | 0x6d6c501c);
              iVar17 = -0x42c9544b;
              iVar14 = -0x3913a544;
              goto LAB_003170b8;
            }
            if (local_33c != 0x26f758d7) goto LAB_0030e100;
            iVar14 = -0x28db66ba;
          }
          goto LAB_0031799c;
        }
        if (local_33c < 0x1f7f36c4) {
          if (local_33c < 0x1bb3fd11) {
            if (local_33c == 0x1b6116ad) {
              local_320 = local_2f8;
              local_1b8 = local_318 + 1;
              uVar11 = _objc_msgSend(local_350,local_a0);
              iVar14 = 0x5749fbba;
              if (uVar11 <= local_1b8) {
                iVar14 = -0x56af1a5e;
              }
LAB_00314000:
              *local_348 = iVar14;
              local_300 = 0;
            }
            else if (local_33c == 0x1b721b4c) {
              *local_348 = -0x5ec15424;
            }
          }
          else if (local_33c == 0x1bb3fd11) {
            _objc_msgSend(local_240,local_118);
            *local_348 = -0x496775d0;
          }
          else if (local_33c == 0x1db07a44) {
            *local_348 = -0x6fa057ce;
          }
          else if (local_33c == 0x1e33bc44) {
            bVar8 = local_a1 == '\0';
            iVar14 = -0x2d1793db;
            iVar17 = 0x12714bda;
            goto LAB_003176b4;
          }
          goto LAB_0030e100;
        }
        if (local_33c < 0x203f611f) {
          if (local_33c == 0x1f7f36c4) {
            iVar14 = 0x1b6116ad;
            if (local_191 == '\0') {
              iVar14 = -0x1de725e6;
            }
            goto LAB_0031402c;
          }
          iVar14 = 0x20143e81;
LAB_00312430:
          if (local_33c == iVar14) {
            *local_348 = -0x284c046b;
          }
          goto LAB_0030e100;
        }
        if (local_33c == 0x203f611f) {
          _dispatch_once(&DAT_004d1b18,local_88);
          *local_348 = -0xd82317d;
          goto LAB_0030e100;
        }
        if (local_33c == 0x20c6e554) {
          iVar17 = DAT_004bd638 - DAT_004bd63c;
          _objc_msgSend(local_320,local_120);
          local_240 = _objc_retainAutoreleasedReturnValue();
          iVar14 = 0x7fbd1f24;
          if (0x63ff4c09 < (iVar17 * 0x1f70b095 + 0x82cbe576U) / 0x1646f725) {
            iVar14 = 0x20c6e554;
          }
          *local_348 = iVar14;
          goto LAB_0030e100;
        }
        if (local_33c != 0x21d00b26) goto LAB_0030e100;
        bVar8 = local_279 == '\0';
        iVar14 = 0x3836658d;
        iVar17 = -0x1d89f6c3;
LAB_003176b4:
        if (bVar8) {
          iVar14 = iVar17;
        }
        goto LAB_0031799c;
      }
      if (0x3685609f < local_33c) {
        if (0x3ec578aa < local_33c) {
          if (local_33c < 0x43f7d2c7) {
            if (local_33c < 0x4128bf09) {
              if (local_33c == 0x3ec578ab) {
                *local_348 = 0x38ab8199;
              }
              else if (local_33c == 0x3fe0bfb1) {
                _objc_msgSend(local_320,local_f8);
                _objc_retainAutoreleasedReturnValue();
                *local_348 = 0x4561b551;
              }
            }
            else {
              if (local_33c == 0x4128bf09) {
                iVar14 = DAT_004bd3f8 + DAT_004bd3fc;
                lVar12 = _objc_msgSend(local_350,local_a0);
                local_a1 = lVar12 == 0;
                bVar8 = iVar14 * 0x721bfc00 == -0xd305410;
                iVar14 = 0x4128bf09;
                iVar17 = 0x1e33bc44;
                goto LAB_0031724c;
              }
              if (local_33c == 0x42112bcf) {
                iVar14 = -0x6025360;
                if ((DAT_004bd6b0 ^ DAT_004bd6b4) == 0xd04ba4a8) {
                  iVar14 = -0x5a375d85;
                }
                goto LAB_0031799c;
              }
              if (local_33c == 0x4380d075) {
                *local_348 = -0x5d3e4885;
              }
            }
          }
          else if (local_33c < 0x460e6de9) {
            if (local_33c == 0x43f7d2c7) {
              _objc_release(local_1a0);
              *local_348 = -0x28851a8d;
            }
            else {
              if (local_33c == 0x43ffcfac) {
                local_279 = local_330 == 0;
                bVar7 = true;
                bVar8 = false;
                iVar17 = 0x481d0db8;
                iVar14 = 0x17de2c51;
                goto LAB_0031784c;
              }
              if (local_33c == 0x4561b551) {
                uVar15 = DAT_004bd5b8 - DAT_004bd5bc;
                _objc_msgSend(local_320,local_f8);
                local_218 = _objc_retainAutoreleasedReturnValue();
                bVar8 = 0xe8559719 < ((uVar15 & 0x393cf85f) + 0x584f42f8 | 0xdd6981b6);
                iVar17 = 0x4561b551;
                iVar14 = 0x47d6d0f;
                goto LAB_003170b8;
              }
            }
          }
          else if (local_33c == 0x460e6de9) {
            *local_348 = 0x333a553d;
          }
          else if (local_33c == 0x466caf37) {
            _objc_release(local_250);
            _objc_msgSend(local_d8,local_140,local_320);
            *local_348 = -0x525dfa70;
          }
          else if (local_33c == 0x46d3416a) {
            uVar15 = ((DAT_004bd868 | DAT_004bd86c) & 0x60177cbc) + 0xa1cc55b3 | 0xb1556ce;
            _objc_release(local_168);
            _objc_release(*local_160);
            bVar7 = 0xc0bafa40 < uVar15;
            bVar8 = uVar15 == 0xc0bafa41;
            iVar14 = 0x2b079025;
            iVar17 = -0x2b19de2c;
            goto LAB_00317898;
          }
          goto LAB_0030e100;
        }
        if (local_33c < 0x39daee28) {
          if (0x3846119a < local_33c) {
            if (local_33c == 0x3846119b) {
              bVar8 = (DAT_004bd6c8 * DAT_004bd6cc & 0xddf7f240U) == 0xf42e4419;
              iVar14 = -0x4c2cfe5a;
              iVar17 = -0x3a69afa3;
              goto LAB_0031724c;
            }
            if (local_33c == 0x38ab8199) {
              local_1c9 = _objc_msgSend(local_1c0,local_f0,local_1c8);
              *local_348 = 0x3c799e05;
            }
            else if (local_33c == 0x39a1336e) {
              _objc_release(local_240);
              _objc_release(local_230);
              bVar8 = local_241 == '\0';
              iVar17 = -0x4b292355;
              iVar14 = 0x270a67a6;
              goto LAB_00316b88;
            }
            goto LAB_0030e100;
          }
          if (local_33c != 0x368560a0) {
            if (local_33c == 0x3836658d) {
              bVar8 = 0x33f6fdc7 <
                      ((uint)(DAT_004bd780 * DAT_004bd784) / 0x755aeb0 | 0xf9975ac) * -0x79572d86;
              iVar14 = -0x24d2d686;
              iVar17 = 0x5845f3cd;
              goto LAB_00317998;
            }
            goto LAB_0030e100;
          }
          iVar17 = DAT_004bd498 * DAT_004bd49c;
          *local_160 = local_d8;
          *(undefined1 *)(local_90 + 5) = local_91;
          local_168 = _objc_retainBlock();
          local_169 = _objc_msgSend(PTR__OBJC_CLASS___NSThread_0048cc90,PTR_s_isMainThread_0048b930)
          ;
          iVar14 = 0x368560a0;
          if ((uint)((ulong)(iVar17 * -0x298e9798 + 0xf7957038) * 0x506f37db >> 0x3d) < 0x5528e2be)
          {
            iVar14 = 0x645822ea;
          }
        }
        else if (local_33c < 0x3c799e05) {
          if (local_33c == 0x39daee28) {
            bVar8 = 0x8b1bbb76 <
                    (((DAT_004bd508 | DAT_004bd50c) + 0xbd96b1d0 | 0xc117f505) ^ 0x1d8f5062);
            iVar14 = -0x30843dcf;
            iVar17 = -0x35e2a151;
            goto LAB_00317998;
          }
          if (local_33c != 0x3a1ba0a0) {
            if (local_33c == 0x3bb909a6) {
              *local_348 = 0x5d78901b;
            }
            goto LAB_0030e100;
          }
          if (((DAT_004bd670 & DAT_004bd674) + 0xfccf7805 ^ 0x7c5180e7) * -0x2da273ae < 0x272e4ed6)
          {
            iVar14 = -0x6ab1246f;
          }
        }
        else {
          if (local_33c == 0x3c799e05) {
            uVar15 = 0;
            if (DAT_004bd534 != 0) {
              uVar15 = DAT_004bd530 / DAT_004bd534;
            }
            iVar14 = -0x3bb7b21a;
            if (0xfcc7f6cd < uVar15 * 0x6abfcdf7 + 0x56656d9c) {
              iVar14 = -0x659bbe88;
            }
            goto LAB_0031799c;
          }
          if (local_33c != 0x3d06d563) {
            if (local_33c == 0x3d2b303c) {
              *local_348 = -0x30981c6f;
            }
            goto LAB_0030e100;
          }
          bVar8 = 0xccfa96b0 < (DAT_004bd890 * DAT_004bd894 & 0x2cc36a01U ^ 0xe91114d4) + 0xbacb3bd9
          ;
          iVar14 = 0x23294c79;
          iVar17 = -0x650acd64;
LAB_00317998:
          if (bVar8) {
            iVar14 = iVar17;
          }
        }
        goto LAB_0031799c;
      }
      if (0x2cdd03ad < local_33c) {
        if (0x3196e112 < local_33c) {
          if (local_33c < 0x3402e6ca) {
            if (local_33c == 0x3196e113) {
              iVar14 = 0x368560a0;
              if (DAT_004bd490 - DAT_004bd494 == 0x5b647ed1) {
                iVar14 = 0x9251842;
              }
              goto LAB_0031799c;
            }
            if (local_33c == 0x3198ced3) {
              *local_348 = 0x65184348;
            }
            else if (local_33c == 0x333a553d) {
              *local_348 = -0x147d0a44;
            }
          }
          else if (local_33c == 0x3402e6ca) {
            *local_348 = -0x407a0f30;
          }
          else if (local_33c == 0x353ec5c1) {
            *local_348 = 0x6e4f82b3;
          }
          else if (local_33c == 0x35ae7e7b) {
            *local_348 = -0x6f4a22bd;
          }
          goto LAB_0030e100;
        }
        if (local_33c < 0x2f203ec2) {
          if (local_33c == 0x2cdd03ae) {
            *local_348 = 0x7976a461;
          }
          else if (local_33c == 0x2edf39c4) {
            bVar8 = 0x1b593ab < (DAT_004bd5f8 & DAT_004bd5fc & 0x4a92400) + 0xaac8b7ad;
            iVar14 = -0x3b9daa99;
            iVar17 = -0x69ff57b1;
            goto LAB_00317998;
          }
          goto LAB_0030e100;
        }
        if (local_33c != 0x2f203ec2) {
          if (local_33c == 0x2f38187f) {
            bVar7 = true;
            bVar8 = false;
            iVar17 = -0x251b66fa;
            iVar14 = 0x4731433e;
            goto LAB_0031784c;
          }
          if (local_33c == 0x2f3b7036) {
            bVar8 = ((DAT_004bd7e0 - DAT_004bd7e4) + 0x3bd14011U & 0x23b10877) * 0x66b59b75 ==
                    0x31b6186e;
            iVar14 = -0x2efec54a;
            iVar17 = -0x61c2400f;
            goto LAB_003176b4;
          }
          goto LAB_0030e100;
        }
        iVar14 = 0x57cbbd0a;
        if (0x46e3ee68 <
            ((uint)((ulong)(DAT_004bd630 * DAT_004bd634 ^ 0x53260aeb) * 0x604f6d21 >> 0x3e) |
            0x5a018b66)) {
          iVar14 = 0x20c6e554;
        }
        goto LAB_0031799c;
      }
      if (0x28f9ec08 < local_33c) {
        if (local_33c < 0x29614e75) {
          if (local_33c == 0x28f9ec09) {
            uVar15 = (DAT_004bd6a0 ^ DAT_004bd6a4) * -0x190a34be + 0xd2a20dff;
            bVar7 = 0xc7b66bac < uVar15;
            bVar8 = uVar15 == 0xc7b66bad;
            iVar17 = 0x5c173252;
            iVar14 = -0x1635e001;
            goto LAB_0031784c;
          }
          if (local_33c == 0x2943b1a5) {
            bVar8 = (DAT_004bd410 + DAT_004bd414 + 0xa6ef5a16U | 0xceb9e741) == 0x55ea0fd6;
            iVar14 = -0x1849d94e;
            iVar17 = 0x6733dbf6;
            goto LAB_003176b4;
          }
        }
        else if (local_33c == 0x29614e75) {
          *local_348 = 0x7ccc2c3c;
        }
        else if (local_33c == 0x2b079025) {
          _objc_release(local_168);
          _objc_release(*local_160);
          *local_348 = 0x46d3416a;
        }
        else if (local_33c == 0x2bca558c) {
          _objc_msgSend(local_320,local_110);
          _objc_retainAutoreleasedReturnValue();
          *local_348 = 0x5e6736d8;
        }
        goto LAB_0030e100;
      }
      if (0x282509bc < local_33c) {
        if (local_33c == 0x282509bd) {
          *local_348 = -0x2f30afd8;
        }
        else if (local_33c == 0x28489703) {
          *local_348 = -0x5536e131;
        }
        else if (local_33c == 0x287dd48b) {
          *local_348 = -0x1132b4c9;
          local_310 = local_1b8;
        }
        goto LAB_0030e100;
      }
      if (local_33c != 0x270a67a6) {
        if (local_33c == 0x2799fd46) {
          *local_348 = -0x61a60da7;
        }
        goto LAB_0030e100;
      }
      uVar15 = (DAT_004bd650 * DAT_004bd654 & 0x88008834U | 0x80000810) + 0x3cd7bbe2;
      bVar7 = 0xb6d53520 < uVar15;
      bVar8 = uVar15 == 0xb6d53521;
      iVar14 = -0x53b69286;
      iVar17 = 0x5bdf4bd3;
    }
    else {
      if (0x5f4f6d53 < local_33c) {
        if (local_33c < 0x6e828cc8) {
          if (local_33c < 0x6612b820) {
            if (local_33c < 0x620607ca) {
              if (local_33c < 0x6130f310) {
                if (local_33c == 0x5f4f6d54) {
                  _objc_msgSend(local_358,local_e8,local_288,DAT_004d1b10);
                  _objc_release(local_288);
                  *local_348 = -0x3b6bed82;
                }
                else if (local_33c == 0x60e71c14) {
                  *local_348 = 0x66467af9;
                }
                goto LAB_0030e100;
              }
              if (local_33c != 0x6130f310) {
                if (local_33c == 0x61c67038) {
                  uVar15 = DAT_004bd408 - DAT_004bd40c;
                  local_88[1] = uVar3;
                  puVar6[2] = FUN_00317ab8;
                  puVar6[3] = &DAT_00480da0;
                  local_b8 = puVar6 + 4;
                  _objc_retain(local_b0);
                  *local_b8 = local_b0;
                  local_b9 = DAT_004d1b18 == -1;
                  iVar14 = 0x61c67038;
                  if (((uVar15 >> 5) / 0x76292c1 + 0x4e795d73 | 0xcfb0976) != 0x2cf93bb4) {
                    iVar14 = 0x562bb66e;
                  }
                  goto LAB_0031799c;
                }
                if (local_33c == 0x62013650) {
                  *local_348 = 0x287dd48b;
                }
                goto LAB_0030e100;
              }
              bVar8 = local_209 == '\0';
              iVar17 = -0x4b292355;
              iVar14 = -0x777791d7;
            }
            else {
              if (local_33c < 0x645822ea) {
                if (local_33c == 0x620607ca) {
                  *local_348 = -0x629f7187;
                }
                else if (local_33c == 0x63e4a4ea) {
                  *local_348 = -0xb64df08;
                }
                goto LAB_0030e100;
              }
              if (local_33c != 0x645822ea) {
                if (local_33c == 0x6501a896) {
                  _objc_msgSend(local_350,local_e0,local_1b8);
                  _objc_retainAutoreleasedReturnValue();
                  *local_348 = -0x71d5c8e0;
                }
                else if (local_33c == 0x65184348) {
                  bVar8 = 0x2da92966 <
                          ((uint)((ulong)((DAT_004bd710 | DAT_004bd714) ^ 0x85f3a3bd) * 0x4e3e8fe3
                                 >> 0x3e) | 0x2f642aa4);
                  iVar14 = 0x481d0db8;
                  iVar17 = 0x43ffcfac;
                  goto LAB_00317998;
                }
                goto LAB_0030e100;
              }
              bVar8 = local_169 == '\0';
              iVar17 = -0x7dfc1b1b;
              iVar14 = -0x2288ca3d;
            }
          }
          else {
            if (0x6aba84be < local_33c) {
              if (local_33c < 0x6c2de766) {
                if (local_33c == 0x6aba84bf) {
                  uVar15 = 0;
                  if (DAT_004bd62c != 0) {
                    uVar15 = DAT_004bd628 / DAT_004bd62c;
                  }
                  bVar8 = 0x83b5b176 < (uVar15 * 0x112e80cc + 0xf05a4802 & 0x6a3b5bc);
                  iVar17 = -0x4b612c22;
                  iVar14 = -0x544c6a10;
                  goto LAB_003170b8;
                }
                if (local_33c != 0x6b69dd2e) {
                  if (local_33c == 0x6bef5f0a) {
                    uVar15 = 0;
                    if (DAT_004bd60c != 0) {
                      uVar15 = DAT_004bd608 / DAT_004bd60c;
                    }
                    uVar15 = (uVar15 + 0xbe05d15) / 0x2f63fb9c & 6;
                    local_231 = _objc_msgSend(local_230,local_118);
                    bVar7 = 0x157732f1 < uVar15;
                    bVar8 = uVar15 == 0x157732f2;
                    iVar14 = 0x6bef5f0a;
                    iVar17 = -0x1ea6f4d1;
                    goto LAB_00317898;
                  }
                  goto LAB_0030e100;
                }
                uVar15 = DAT_004bd740 * DAT_004bd744 & 0x6ffeb57dU | 0x2d7e257d;
                bVar7 = 0x1809ed6d < uVar15;
                bVar8 = uVar15 == 0x1809ed6e;
                iVar14 = 0x66467af9;
                iVar17 = 0x60e71c14;
              }
              else {
                if (local_33c == 0x6c2de766) {
                  _objc_release(*local_b8);
                  _objc_release(local_b0);
                  *local_348 = 0x513681f7;
                  goto LAB_0030e100;
                }
                if (local_33c == 0x6ddbbf88) {
                  uVar15 = 0;
                  if (DAT_004bd5f4 != 0) {
                    uVar15 = DAT_004bd5f0 / DAT_004bd5f4;
                  }
                  bVar8 = ((byte)((ulong)(uVar15 >> 2) * 0xc764f4d >> 0x38) + 0xc4656dfb |
                          0xd6adf4ec) == 0x537011fd;
                  iVar14 = -0x3b9daa99;
                  iVar17 = 0x2edf39c4;
                  goto LAB_0031724c;
                }
                if (local_33c != 0x6e4f82b3) goto LAB_0030e100;
                uVar15 = (uint)((ulong)(DAT_004bd480 & DAT_004bd484 ^ 0xfad3756e) * 0x6f756b9b >>
                               0x3e) | 0x9d86d4be;
                bVar7 = 0x8ad1024f < uVar15;
                bVar8 = uVar15 == 0x8ad10250;
                iVar14 = 0x7ccc2c3c;
                iVar17 = 0x29614e75;
              }
              goto LAB_00317898;
            }
            if (local_33c < 0x6733dbf6) {
              if (local_33c == 0x6612b820) {
                bVar8 = ((DAT_004bd820 & DAT_004bd824 | 0x769cbc4) + 0x8b641769 | 0x7d3f73eb) ==
                        0x82831302;
                iVar17 = -0x615178e1;
                iVar14 = -0x6d6698c9;
                goto LAB_00314a58;
              }
              if (local_33c == 0x66467af9) {
                uVar15 = (DAT_004bd748 + DAT_004bd74c ^ 0xb73967feU) * -0x5d90a7c3 + 0xe191b8a2;
                bVar7 = 0x4862cb32 < uVar15;
                bVar8 = uVar15 == 0x4862cb33;
                iVar17 = 0x66467af9;
                iVar14 = -0x49c6f507;
                goto LAB_0031784c;
              }
              goto LAB_0030e100;
            }
            if (local_33c == 0x6733dbf6) {
              *local_348 = -0x1849d94e;
              goto LAB_0030e100;
            }
            if (local_33c != 0x67c47960) {
              if (local_33c == 0x68cab8ce) {
                bVar8 = 0xb4320931 <
                        (DAT_004bd6e0 * DAT_004bd6e4 * 0x275d5d06 & 0x885432c4U | 0x141280);
                iVar14 = -0x629f7187;
                iVar17 = 0x620607ca;
                goto LAB_00317998;
              }
              goto LAB_0030e100;
            }
            uVar15 = DAT_004bd568 + DAT_004bd56c;
            local_1e0 = local_318 + 2;
            uVar11 = _objc_msgSend(local_350,local_a0);
            local_1e1 = local_1e0 < uVar11;
            bVar8 = (uint)((ulong)((uVar15 ^ 0xebe3babd) + 0xbf77ac6) * 0x6a9913a9 >> 0x3e) ==
                    0x1f524fcb;
            iVar17 = 0x7545d98;
            iVar14 = 0x26437bad;
          }
        }
        else {
          if (local_33c < 0x79b508e3) {
            if (local_33c < 0x74eba5cd) {
              if (local_33c < 0x7300a50b) {
                if (local_33c == 0x6e828cc8) {
                  uVar15 = 0;
                  if (DAT_004bd5b4 != 0) {
                    uVar15 = DAT_004bd5b0 / DAT_004bd5b4;
                  }
                  uVar15 = (uVar15 * -0x78938037) / 0x36487196 + 0x17f38645;
                  bVar7 = 0x156aaa4e < uVar15;
                  bVar8 = uVar15 == 0x156aaa4f;
                  iVar14 = -0xb64df08;
                  iVar17 = 0x63e4a4ea;
                  goto LAB_00317898;
                }
                if (local_33c == 0x71c88ebf) {
                  *local_348 = -0x36cbb191;
                }
              }
              else if (local_33c == 0x7300a50b) {
                *local_348 = -0xa1e15c9;
              }
              else if (local_33c == 0x73dce171) {
                *local_348 = 0x3d58d7;
              }
              else if (local_33c == 0x74041890) {
                *local_348 = 0x6ddbbf88;
              }
            }
            else if (local_33c < 0x77985ff5) {
              if (local_33c == 0x74eba5cd) {
                bVar8 = ((uint)(DAT_004bd830 + DAT_004bd834) / 0x25390d10 ^ 0x6b9b33d) * -0x5ba8bba0
                        == 0x869d606;
                iVar14 = -0x41c4a494;
                iVar17 = 0x55fee667;
                goto LAB_0031724c;
              }
              if (local_33c == 0x75cf84a7) {
                _objc_msgSend(local_350,local_e0,local_1e0);
                _objc_retainAutoreleasedReturnValue();
                *local_348 = 0x25e0875b;
              }
              else if (local_33c == 0x76bc9c03) {
                _objc_msgSend(local_328,local_148);
                _objc_retainAutoreleasedReturnValue();
                *local_348 = 0x7c344a15;
              }
            }
            else if (local_33c == 0x77985ff5) {
              _objc_msgSend(local_358,local_100,local_218);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_release(local_218);
              _objc_msgSend(local_328,local_f8);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar4,local_100,uVar9);
              uVar10 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar9);
              _objc_msgSend(uVar13,local_108,uVar10);
              _objc_release(uVar10);
              *local_348 = -0x30eeacf;
            }
            else {
              if (local_33c == 0x77f74c2d) {
                local_318 = local_2f0;
                bVar8 = 0x2e676843 <
                        (uint)((ulong)(DAT_004bd4a0 * DAT_004bd4a4 + 0x4555ac8f) * 0x6b9725f1 >>
                              0x3e);
                iVar17 = -0x2386be2b;
                iVar14 = -0x47e9cd14;
                goto LAB_003170b8;
              }
              if (local_33c == 0x7976a461) {
                local_108 = PTR_s_isEqualToString__00489d70;
                local_110 = PTR_s_b_isLastMessage_0048b508;
                local_118 = PTR_s_boolValue_0048b240;
                local_120 = PTR_s_b_isMiddleMessage_0048b908;
                local_128 = PTR_s_numberWithBool__0048b600;
                local_130 = PTR_s_setB_isLastMessage__0048b8b8;
                local_138 = PTR_s_setB_isMiddleMessage__0048b8b0;
                local_140 = PTR_s_addObject__00489ba8;
                local_148 = PTR_s_b_isFirstMessage_0048b910;
                local_150 = PTR_s_setB_isFirstMessage__0048b8a8;
                bVar8 = (DAT_004bd478 - DAT_004bd47c & 0x54d0043U) == 0xe78c8e84;
                iVar17 = 0x2cdd03ae;
                iVar14 = 0x353ec5c1;
                goto LAB_00316b88;
              }
            }
            goto LAB_0030e100;
          }
          if (local_33c < 0x7cbf651e) {
            if (0x7ba9d47e < local_33c) {
              if (local_33c == 0x7ba9d47f) {
                *local_348 = -0x56af1a5e;
                local_300 = local_1d8;
              }
              else {
                if (local_33c == 0x7c07bb79) {
                  uVar15 = DAT_004bd618 ^ DAT_004bd61c;
                  _objc_release(local_230);
                  bVar8 = 0x90641652 <
                          ((uint)((ulong)(uVar15 ^ 0xb3d94e2) * 0x245c31cd >> 0x3c) ^ 0xb9a9d3f5);
                  iVar14 = -0xe7cd463;
                  iVar17 = 0x2799fd46;
                  goto LAB_00317998;
                }
                if (local_33c == 0x7c344a15) {
                  uVar15 = (uint)((ulong)(DAT_004bd688 | DAT_004bd68c) * 0x5e8678f7 >> 0x3b) +
                           0xb6f082f2;
                  _objc_msgSend(local_328,local_148);
                  local_258 = _objc_retainAutoreleasedReturnValue();
                  bVar7 = 0x30a0565b < uVar15;
                  bVar8 = uVar15 == 0x30a0565c;
                  iVar17 = 0x7c344a15;
                  iVar14 = 0x52fd8ab0;
                  goto LAB_0031784c;
                }
              }
              goto LAB_0030e100;
            }
            if (local_33c != 0x79b508e3) {
              if (local_33c == 0x79c02d93) {
                uVar15 = 0;
                if (DAT_004bd69c != 0) {
                  uVar15 = DAT_004bd698 / DAT_004bd69c;
                }
                bVar8 = (uVar15 + 0xe0f996ec | 0xf5e7fafb) == 0x6144577d;
                iVar14 = -0x22086458;
                iVar17 = -0x4dcffe80;
                goto LAB_0031724c;
              }
              goto LAB_0030e100;
            }
            uVar15 = ((DAT_004bd640 & DAT_004bd644 & 0xec583b18) + 0x45dde19e) / 0x3ed699b4;
            bVar7 = 0x924b2477 < uVar15;
            bVar8 = uVar15 == 0x924b2478;
            iVar17 = -0x496775d0;
            iVar14 = 0x1bb3fd11;
            goto LAB_0031784c;
          }
          if (0x7e018f9a < local_33c) {
            if (local_33c == 0x7e018f9b) {
              _objc_msgSend(local_d8,local_140,local_328);
              *local_348 = -0x3e5ee2c0;
            }
            else if (local_33c == 0x7e36c955) {
              uVar15 = 0;
              if (DAT_004bd81c != 0) {
                uVar15 = DAT_004bd818 / DAT_004bd81c;
              }
              _objc_release(local_178);
              uVar11 = _objc_msgSend(local_350,local_a0);
              local_2d9 = local_338 < uVar11;
              iVar14 = -0x2aea1325;
              if (0x9dccdc2d < uVar15 * -0x605c8134 + 0x552a349c) {
                iVar14 = 0x7e36c955;
              }
              *local_348 = iVar14;
            }
            else if (local_33c == 0x7fbd1f24) {
              *local_348 = 0x79b508e3;
            }
            goto LAB_0030e100;
          }
          if (local_33c == 0x7cbf651e) {
            *local_348 = -0x1132b4c9;
            local_310 = local_188;
            goto LAB_0030e100;
          }
          if (local_33c != 0x7ccc2c3c) {
            if (local_33c == 0x7d0e7afe) {
              _objc_msgSend(local_298,local_108,local_2a8);
              _objc_release(local_2a8);
              _objc_release(local_298);
              *local_348 = -0x146a8d99;
            }
            goto LAB_0030e100;
          }
          local_158 = PTR_s_setB_isNeedHideHead__0048b8c0;
          bVar8 = (DAT_004bd488 | DAT_004bd48c | 0xac45db48) == 0x9e2da075;
          iVar17 = 0x29614e75;
          iVar14 = -0x7f9e25bf;
        }
        goto LAB_00316b88;
      }
      if (local_33c < 0x53619e41) {
        if (0x4d9a585a < local_33c) {
          if (local_33c < 0x5139a8bd) {
            if (local_33c < 0x4dfa18e1) {
              if (local_33c == 0x4d9a585b) {
                uVar15 = 0;
                if (DAT_004bd72c != 0) {
                  uVar15 = DAT_004bd728 / DAT_004bd72c;
                }
                bVar8 = 0xc63216af < ((uVar15 ^ 0x8610c08) & 0x4f714e8d) + 0x64820a8c;
                iVar17 = 0xe87ab9;
                iVar14 = 0x21d00b26;
                goto LAB_003170b8;
              }
              if (local_33c == 0x4dc9e627) {
                *local_348 = -0x5d3e4885;
              }
            }
            else if (local_33c == 0x4dfa18e1) {
              _objc_release(local_d8);
              *local_348 = -0x10b95aac;
            }
            else if (local_33c == 0x4ec4688f) {
              *local_348 = 0x262babf0;
            }
            else if (local_33c == 0x513681f7) {
              uVar15 = (DAT_004bd888 ^ DAT_004bd88c | 0xfffffff7) & 0xffffdeff;
              _objc_release(*local_b8);
              _objc_release(local_b0);
              bVar7 = 0x2be02664 < uVar15;
              bVar8 = uVar15 == 0x2be02665;
              iVar17 = 0x513681f7;
              iVar14 = -0x2c39e6e7;
              goto LAB_0031784c;
            }
          }
          else if (local_33c < 0x51cfb12c) {
            if (local_33c == 0x5139a8bd) {
              _objc_release(local_1f0);
              *local_348 = 0x5d00c7ff;
            }
            else if (local_33c == 0x516378d6) {
              *local_348 = -0x3509c628;
            }
            else if (local_33c == 0x518c1d1a) {
              uVar15 = DAT_004bd7d8 + DAT_004bd7dc;
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,1);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_328,local_130,uVar13);
              _objc_release(uVar13);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
              local_2d8 = _objc_retainAutoreleasedReturnValue();
              bVar8 = 0x706b19c < ((uVar15 & 0x45c08c3d) * 0x18fe6432 | 0xb4fafe21);
              iVar14 = 0x518c1d1a;
              iVar17 = -0x18c31f18;
              goto LAB_00317998;
            }
          }
          else if (local_33c == 0x51cfb12c) {
            *local_348 = 0x3a1ba0a0;
          }
          else if (local_33c == 0x52afef0b) {
            _dispatch_async(PTR___dispatch_main_q_00481640,local_168);
            *local_348 = -0x11321860;
          }
          else if (local_33c == 0x52fd8ab0) {
            *local_348 = -0xc9b8fee;
          }
          goto LAB_0030e100;
        }
        if (0x48e7e031 < local_33c) {
          if (0x4b1c9803 < local_33c) {
            if (local_33c == 0x4b1c9804) {
              bVar8 = local_179 == '\0';
              iVar17 = 0x3402e6ca;
              iVar14 = -0xd251728;
              goto LAB_00316b88;
            }
            if (local_33c == 0x4c4d8efc) {
              bVar8 = DAT_004bd550 + DAT_004bd554 == 0x3d9c49dc;
              iVar14 = 0x24966fd2;
              iVar17 = 0x192009c3;
              goto LAB_003176b4;
            }
            if (local_33c == 0x4d470b6c) {
              uVar15 = (uint)((ulong)(DAT_004bd470 * DAT_004bd474 * -0x43d7ed86 + 0xdbfeef70) *
                              0x6775585 >> 0x37);
              bVar7 = 0xc7616cb8 < uVar15;
              bVar8 = uVar15 == 0xc7616cb9;
              iVar17 = 0x7976a461;
              iVar14 = 0x2cdd03ae;
              goto LAB_0031784c;
            }
            goto LAB_0030e100;
          }
          if (local_33c != 0x48e7e032) {
            if (local_33c == 0x4a52d31c) {
              uVar15 = 0;
              if (DAT_004bd4dc != 0) {
                uVar15 = DAT_004bd4d8 / DAT_004bd4dc;
              }
              local_191 = local_318 == 0;
              bVar8 = (uVar15 + 0x87507762 & 0x49fadbdb) * 0x6e0c3533 == 0x452471a7;
              iVar14 = 0x4a52d31c;
              iVar17 = -0x344040d5;
              goto LAB_0031724c;
            }
            goto LAB_0030e100;
          }
          uVar15 = (DAT_004bd5a0 - DAT_004bd5a4 ^ 0xa414e2aU | 0x30bab0d5) ^ 0xa2cf1193;
          bVar7 = 0x4ec60310 < uVar15;
          bVar8 = uVar15 == 0x4ec60311;
          iVar17 = -0x5cd9a2dc;
          iVar14 = -0x58ca8259;
          goto LAB_0031784c;
        }
        if (local_33c < 0x47d0b71e) {
          if (local_33c == 0x4731433e) {
            uVar15 = (DAT_004bd6d8 + DAT_004bd6dc) * -0x2f083deb + 0x61abff7eU & 0xe66ae7a7;
            _objc_msgSend(local_328,local_120);
            local_268 = _objc_retainAutoreleasedReturnValue();
            bVar7 = 0x6c5b9037 < uVar15;
            bVar8 = uVar15 == 0x6c5b9038;
            iVar14 = -0x251b66fa;
            iVar17 = -0x5f01b31c;
            goto LAB_00317898;
          }
          if (local_33c == 0x473a1727) {
            *local_348 = 0x5c075c2f;
          }
          goto LAB_0030e100;
        }
        if (local_33c != 0x47d0b71e) {
          if (local_33c == 0x481d0db8) {
            *local_348 = 0x43ffcfac;
          }
          else if (local_33c == 0x48998a92) {
            puVar16 = (undefined8 *)((long)puVar16 + -0x30);
            _objc_retain(local_350);
            *local_348 = -0x61e09806;
          }
          goto LAB_0030e100;
        }
        bVar8 = 0x5e55c06a < (DAT_004bd750 ^ DAT_004bd754 | 0x53e0f4eb) + 0xccb65d02;
        iVar17 = 0x451d35d;
        iVar14 = -0x6ec4cfec;
LAB_003170b8:
        if (bVar8) {
          iVar14 = iVar17;
        }
        goto LAB_0031799c;
      }
      if (0x595a943d < local_33c) {
        if (local_33c < 0x5c2ee555) {
          if (0x5bdf4bd2 < local_33c) {
            if (local_33c == 0x5bdf4bd3) {
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,1);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_320,local_130,uVar13);
              _objc_release(uVar13);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_128,0);
              uVar13 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_320,local_138,uVar13);
              *local_348 = -0x53b69286;
            }
            else if (local_33c == 0x5c075c2f) {
              *local_348 = 0x4c4d8efc;
            }
            else if (local_33c == 0x5c173252) {
              uVar15 = DAT_004bd6a8 | DAT_004bd6ac;
              local_259 = _objc_msgSend(local_258,local_118);
              bVar8 = uVar15 * 0x1adfeb0d == 0x21744038;
              iVar17 = 0x5c173252;
              iVar14 = -0xc19720;
              goto LAB_00316b88;
            }
            goto LAB_0030e100;
          }
          if (local_33c != 0x595a943e) {
            if (local_33c == 0x5bd2b483) {
              uVar15 = (DAT_004bd4e0 & DAT_004bd4e4) + 0x701fd230 & 0xd599cee0;
              bVar7 = 0x121eaa9e < uVar15;
              bVar8 = uVar15 == 0x121eaa9f;
              iVar14 = -0xf032556;
              iVar17 = -0x718f62b6;
              goto LAB_00317898;
            }
            goto LAB_0030e100;
          }
          uVar15 = DAT_004bd808 + DAT_004bd80c;
          _objc_release(local_328);
          _objc_release(local_320);
          iVar14 = 0x595a943e;
          if (0x1f0d6916 < (uVar15 & 0x5a299b54) * -0x34428dbb + 0x95438850) {
            iVar14 = 0x62013650;
          }
        }
        else {
          if (local_33c < 0x5d78901b) {
            if (local_33c == 0x5c2ee555) {
              *local_348 = -0x56b375dc;
            }
            else {
              if (local_33c == 0x5d00c7ff) {
                uVar15 = DAT_004bd598 & DAT_004bd59c;
                _objc_release(local_1f0);
                bVar8 = (uVar15 & 0x6e480617 | 0x6c080016) == 0x22c2dce7;
                iVar14 = 0x5139a8bd;
                iVar17 = -0x3553f93d;
                goto LAB_0031724c;
              }
              if (local_33c == 0x5d0b01cf) {
                local_88[1] = uVar3;
                puVar6[2] = FUN_00317ab8;
                puVar6[3] = &DAT_00480da0;
                _objc_retain(local_b0);
                puVar6[4] = local_b0;
                *local_348 = 0x61c67038;
              }
            }
            goto LAB_0030e100;
          }
          if (local_33c != 0x5d78901b) {
            if (local_33c == 0x5e3d219d) {
              if (((DAT_004bd678 & DAT_004bd67c) + 0xf93314da | 0x17044553) * 0x7faccafa !=
                  -0xf1f8980) {
                iVar14 = -0x34dedc82;
              }
              goto LAB_0031799c;
            }
            if (local_33c == 0x5e6736d8) {
              iVar14 = DAT_004bd5e8 - DAT_004bd5ec;
              _objc_msgSend(local_320,local_110);
              local_230 = _objc_retainAutoreleasedReturnValue();
              uVar15 = -(int)((long)((ulong)(iVar14 + 0xd55d2a68U | 0xe25f2f9d) * 0x8b00f3a5) >>
                             0x3f);
              bVar7 = 0x5feb5f28 < uVar15;
              bVar8 = uVar15 == 0x5feb5f29;
              iVar14 = 0x2bca558c;
              iVar17 = 0x74041890;
              goto LAB_00317898;
            }
            goto LAB_0030e100;
          }
          iVar14 = -0x525dfa70;
          if ((DAT_004bd660 | DAT_004bd664) == 0x13a5489c) {
            iVar14 = 0x466caf37;
          }
        }
        goto LAB_0031799c;
      }
      if (0x55fee666 < local_33c) {
        if (local_33c < 0x57cbbd0a) {
          if (local_33c == 0x55fee667) {
            bVar8 = 0xeba6937 < ((DAT_004bd838 ^ DAT_004bd83c) & 0x8b3291b4 ^ 0x86d752da);
            iVar14 = -0x41c4a494;
            iVar17 = 0x3488da5;
            goto LAB_00317998;
          }
          if (local_33c == 0x562bb66e) {
            *local_348 = 0x2943b1a5;
          }
          else if (local_33c == 0x5749fbba) {
            uVar15 = (uint)((ulong)(uint)((DAT_004bd520 + DAT_004bd524) * -0x6caf913a) * 0x6d3e1309
                           >> 0x3e) | 0xc98012d4;
            bVar7 = 0x85d1b278 < uVar15;
            bVar8 = uVar15 == 0x85d1b279;
            iVar14 = -0x2f107b9b;
            iVar17 = -0x7dfa5525;
            goto LAB_00317898;
          }
        }
        else if (local_33c == 0x57cbbd0a) {
          _objc_msgSend(local_320,local_120);
          _objc_retainAutoreleasedReturnValue();
          *local_348 = 0x20c6e554;
        }
        else {
          if (local_33c == 0x5845f3cd) {
            _objc_msgSend(local_328,local_110);
            _objc_retainAutoreleasedReturnValue();
            iVar14 = -0x24d2d686;
            goto LAB_00317018;
          }
          if (local_33c == 0x58db74f0) {
            *local_348 = 0x595a943e;
          }
        }
        goto LAB_0030e100;
      }
      if (local_33c < 0x54e95d13) {
        if (local_33c == 0x53619e41) {
          *local_348 = -0x10e5f1d4;
        }
        else if (local_33c == 0x54a6fd9c) {
          iVar14 = DAT_004bd768 - DAT_004bd76c;
          _objc_msgSend(local_358,local_100,local_2a0);
          local_2a8 = _objc_retainAutoreleasedReturnValue();
          _objc_release(local_2a0);
          bVar8 = (uint)(iVar14 * 0x369837d2) / 0x2bd35d9b == 0xd62e51c;
          iVar17 = 0x54a6fd9c;
          iVar14 = -0x6bafd2e6;
          goto LAB_00316b88;
        }
        goto LAB_0030e100;
      }
      if (local_33c == 0x54e95d13) {
        *local_348 = -0x7ec50c24;
        goto LAB_0030e100;
      }
      if (local_33c != 0x55712023) {
        if (local_33c == 0x557af4de) {
          bVar8 = local_2b9 == '\0';
          iVar14 = -0x674f7c8f;
          iVar17 = 0x26f758d7;
          goto LAB_003176b4;
        }
        goto LAB_0030e100;
      }
      uVar15 = (DAT_004bd700 ^ DAT_004bd704) * 0x7c83b98a + 0x65224e6;
      bVar7 = 0xd03e0f11 < uVar15;
      bVar8 = uVar15 == 0xd03e0f12;
      iVar14 = -0x7e011692;
      iVar17 = 0x1a64d977;
    }
  }
LAB_00317898:
  if (!bVar7 || bVar8) {
    iVar14 = iVar17;
  }
LAB_0031799c:
  *local_348 = iVar14;
  goto LAB_0030e100;
}



// #####################################