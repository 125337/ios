// ##### +[util_refreshChatLayoutsFromController:onlyRefer:] @ 0029b164
// #####################################

/* Function Stack Size: 0x1c bytes */

void BubbleBoxUtil::refreshChatLayoutsFromController_onlyRefer_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 auStack_2c0 [12];
  bool local_2b4;
  ID local_2b0;
  int *local_2a8;
  int local_29c;
  long local_298;
  long local_290;
  long local_288;
  long local_280;
  long local_278;
  long local_270;
  long local_268;
  long local_260;
  char local_251;
  long local_250;
  char local_241;
  long local_240;
  char local_231;
  undefined8 local_230;
  char local_221;
  long local_220;
  char local_211;
  long local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  char local_1d9;
  undefined8 local_1d8;
  char local_1ca;
  char local_1c9;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  long local_178;
  long *local_170;
  char local_161;
  long local_160;
  char local_151;
  undefined8 local_150;
  char local_141;
  undefined8 local_140;
  undefined8 *local_138;
  long local_130;
  char local_121;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  long *local_100;
  undefined8 *local_f8;
  char local_e9;
  long *local_e8;
  long local_e0;
  undefined8 *puStack_d8;
  char local_c9;
  long local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  long local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  byte local_7b;
  byte local_7a;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  puVar10 = (undefined8 *)auStack_2c0;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = DAT_004b8b60 * DAT_004b8b64 + 0x7bf191baU | 0xff96f7ed;
  local_2a8 = &local_29c;
  local_29c = 0x1a33934f;
  local_2b4 = param_4;
  local_2b0 = param_3;
LAB_0029b270:
  puVar3 = local_98;
  IVar2 = local_2b0;
  if (local_29c < 0x15337cb3) {
    if (local_29c < -0x3d00f3ef) {
      iVar6 = -0x4d158d1b;
      if (local_29c < -0x575ab4e7) {
        if (local_29c < -0x6c044316) {
          if (local_29c < -0x745802c0) {
            if (local_29c < -0x7a4332da) {
              if (local_29c != -0x7f1f0465) {
                if (local_29c == -0x7dd19bbe) {
                  bVar5 = 0xa93dd783 < DAT_004b8d20 + DAT_004b8d24 + 0xec8cae39U;
                  iVar6 = -0x41dabf04;
                  iVar9 = 0x44d3585;
                  goto LAB_002a188c;
                }
                if (local_29c == -0x7c48f33e) {
                  local_1e8 = PTR__OBJC_CLASS___UIView_0048ca10;
                  bVar5 = (DAT_004b8d78 - DAT_004b8d7c ^ 0x84a87e3U | 0x83b4701c) * 0x5c300d01 ==
                          -0x42412ee4;
                  iVar9 = -0x6d933bb4;
                  iVar6 = -0x4e4a502c;
                  goto LAB_002a1908;
                }
                goto LAB_0029b270;
              }
              uVar8 = DAT_004b8c58 - DAT_004b8c5c;
              local_141 = _objc_msgSend(local_140,local_108,local_a8);
              bVar5 = ((uVar8 | 0x3ddb5107) + 0x31183884 & 0x3a9b3979) == 0x42723a75;
              iVar6 = -0x7f1f0465;
              iVar9 = -0x180cb064;
            }
            else {
              if (local_29c < -0x7899ccbe) {
                if (local_29c == -0x7a4332da) {
                  uVar8 = 0;
                  if (DAT_004b8d6c != 0) {
                    uVar8 = DAT_004b8d68 / DAT_004b8d6c;
                  }
                  uVar8 = (uVar8 + 0xd5647299 & 0xde29ddf7) + 0x83071778;
                  bVar4 = 0x9e298fc2 < uVar8;
                  bVar5 = uVar8 == 0x9e298fc3;
                  iVar9 = 0xd04d471;
                  goto LAB_0029f1e4;
                }
                if (local_29c == -0x7a2ead34) {
                  *local_2a8 = -0x745802c0;
                  local_270 = local_160;
                }
                goto LAB_0029b270;
              }
              if (local_29c != -0x7899ccbe) {
                if (local_29c == -0x77f15a1d) {
                  local_250 = _objc_msgSend(local_b8,local_c0,local_88,local_90,0x10);
                  *local_2a8 = -0x6c044316;
                }
                goto LAB_0029b270;
              }
              bVar5 = (DAT_004b8c00 + DAT_004b8c04 + 0x995177ffU | 0xf3eceb15) == 0x57033a04;
              iVar6 = 0x6cc442a1;
              iVar9 = 0x662f22f4;
            }
LAB_002a17d0:
            if (!bVar5) {
              iVar6 = iVar9;
            }
            goto LAB_002a1a44;
          }
          if (-0x708ce3f6 < local_29c) {
            if (local_29c < -0x6c639263) {
              if (local_29c == -0x708ce3f5) {
                *local_2a8 = -0x43af1cc;
              }
              else if (local_29c == -0x6d933bb4) {
                *local_2a8 = -0x7c48f33e;
              }
            }
            else {
              if (local_29c == -0x6c639263) {
                uVar8 = (DAT_004b8dc8 & DAT_004b8dcc) * 0x4d3dcf39 ^ 0x4352beae;
                bVar4 = 0xed2f7a3f < uVar8;
                bVar5 = uVar8 == 0xed2f7a40;
                iVar6 = -0x5c89485a;
                iVar9 = 0x61b908f2;
                goto LAB_002a1a40;
              }
              if (local_29c == -0x6c0b5f5d) {
                *local_2a8 = -0x1164254f;
              }
            }
            goto LAB_0029b270;
          }
          if (local_29c < -0x70f471fe) {
            if (local_29c == -0x745802c0) {
              local_290 = local_270;
              uVar8 = 0;
              if (DAT_004b8cf4 != 0) {
                uVar8 = DAT_004b8cf0 / DAT_004b8cf4;
              }
              bVar5 = 0xbe5778a2 < (uVar8 | 0xbdffadff) / 0x7437ad8d;
              iVar9 = 0x3dd7e1ce;
              iVar6 = 0xf53deab;
              goto LAB_002a19dc;
            }
            if (local_29c == -0x72ace82b) {
              uVar8 = 0;
              if (DAT_004b8dd4 != 0) {
                uVar8 = DAT_004b8dd0 / DAT_004b8dd4;
              }
              bVar4 = 0xb3098ec8 < uVar8 + 0x969e6d47;
              bVar5 = uVar8 + 0x969e6d47 == 0xb3098ec9;
              iVar6 = -0x54999d94;
              goto LAB_002a0010;
            }
            goto LAB_0029b270;
          }
          if (local_29c == -0x70f471fe) {
            *local_2a8 = -0x70b1de6a;
            goto LAB_0029b270;
          }
          if (local_29c != -0x70b1de6a) goto LAB_0029b270;
          bVar5 = local_151 == '\0';
          iVar9 = -0x5d4b434d;
          iVar6 = -0x6632ac76;
          goto LAB_002a1908;
        }
        if (-0x5ef1faee < local_29c) {
          if (local_29c < -0x5c89485a) {
            if (local_29c < -0x5d459721) {
              if (local_29c == -0x5ef1faed) {
                iVar6 = 0x1e1e637f;
                if (local_221 == '\0') {
                  iVar6 = -0x745802c0;
                }
                *local_2a8 = iVar6;
                local_270 = local_220;
              }
              else if (local_29c == -0x5d4b434d) {
                bVar4 = true;
                bVar5 = false;
                iVar6 = 0x58b2ab;
                iVar9 = 0x71ed225d;
                goto LAB_002a1a40;
              }
            }
            else {
              if (local_29c == -0x5d459721) {
                bVar5 = ((DAT_004b8da0 & DAT_004b8da4 ^ 0x3766e42b) + 0x671e5707 | 0xa087325a) ==
                        0xc52b631e;
                iVar9 = 0x69913223;
                iVar6 = 0x14976784;
                goto LAB_002a129c;
              }
              if (local_29c == -0x5cbaa967) {
                uVar8 = 0xbd4e9de3 -
                        (int)((long)((ulong)(DAT_004b8ee8 | DAT_004b8eec) * 0x8576d6ab) >> 0x3f);
                _objc_release(local_b8);
                bVar4 = 0x3132217f < uVar8;
                bVar5 = uVar8 == 0x31322180;
                iVar9 = -0x5cbaa967;
                iVar6 = -0x9bd38e3;
                goto LAB_002a114c;
              }
            }
            goto LAB_0029b270;
          }
          if (local_29c < -0x58a2c73f) {
            if (local_29c == -0x5c89485a) {
              *local_2a8 = -0x6c639263;
              goto LAB_0029b270;
            }
            if (local_29c != -0x5adfe8e5) goto LAB_0029b270;
            uVar8 = DAT_004b8e38 - DAT_004b8e3c;
            local_230 = _NSSelectorFromString(&PTR____CFConstantStringClassReference_004b66f0);
            bVar5 = 0x653dbcd8 < (uVar8 | 0x1df040d2) + 0x4109806a;
            iVar6 = -0x5adfe8e5;
            iVar9 = -0x57246993;
LAB_002a188c:
            if (bVar5) {
              iVar6 = iVar9;
            }
          }
          else {
            if (local_29c != -0x58a2c73f) {
              if (local_29c == -0x57e08c42) {
                _objc_msgSend(local_140,local_230);
                *local_2a8 = 0x55e4eeff;
              }
              goto LAB_0029b270;
            }
            if ((DAT_004b8cb0 & DAT_004b8cb4 & 0xfb7febdb | 0xfb3fcbdb) == 0xe002ff9) {
              iVar6 = -0x22004fd2;
            }
          }
          goto LAB_002a1a44;
        }
        if (-0x6608dfca < local_29c) {
          if (local_29c < -0x62c57beb) {
            if (local_29c == -0x6608dfc9) {
              iVar6 = -0x6608dfc9;
              if ((((DAT_004b8e88 | DAT_004b8e8c) ^ 0x21050b) & 0xa2555db) + 0x1f9e752 < 0x23e08ca5)
              {
                iVar6 = 0x1a7b9f39;
              }
              goto LAB_002a1a44;
            }
            if (local_29c == -0x64632f2e) {
              bVar5 = local_c9 == '\0';
              iVar6 = -0x212fd050;
              iVar9 = 0x7a4f2cb0;
              goto LAB_002a1710;
            }
          }
          else {
            if (local_29c == -0x62c57beb) {
              bVar5 = local_1ca == '\0';
              iVar9 = 0x773a1c6e;
              iVar6 = 0x15ae2140;
              goto LAB_002a1908;
            }
            if (local_29c == -0x5f99a6dd) {
              *local_2a8 = 0x24b730eb;
            }
          }
          goto LAB_0029b270;
        }
        if (local_29c < -0x68067dc2) {
          if (local_29c != -0x6c044316) {
            if (local_29c == -0x6913c8e6) {
              uVar8 = 0;
              if (DAT_004b8edc != 0) {
                uVar8 = DAT_004b8ed8 / DAT_004b8edc;
              }
              uVar8 = (uVar8 * -0x5e9d1c8b + 0x2cd8bdcb) / 0xe5e3a4e;
              bVar4 = 0x3b3620e0 < uVar8;
              bVar5 = uVar8 == 0x3b3620e1;
              iVar6 = -0x4d4d2bee;
              iVar9 = 0x34a5aac6;
              goto LAB_002a1a40;
            }
            goto LAB_0029b270;
          }
          uVar8 = (DAT_004b8ec0 + DAT_004b8ec4 ^ 0x91febf15U) + 0xcc9000da;
          bVar4 = 0x953b9bc9 < uVar8;
          bVar5 = uVar8 == 0x953b9bca;
          iVar6 = 0x4d180ffb;
          iVar9 = 0x186e923e;
          goto LAB_002a1a40;
        }
        if (local_29c == -0x68067dc2) {
          *local_2a8 = 0x7ab013ef;
          goto LAB_0029b270;
        }
        if (local_29c != -0x6632ac76) goto LAB_0029b270;
        uVar8 = (DAT_004b8ca0 | DAT_004b8ca4) + 0x793f693b & 0xbfefda8c | 0x95ebda8c;
        bVar4 = 0xdd0606fe < uVar8;
        bVar5 = uVar8 == 0xdd0606ff;
        iVar9 = -0x30038620;
        iVar6 = 0x73b14df2;
      }
      else {
        if (-0x5027326b < local_29c) {
          if (local_29c < -0x49bf429b) {
            if (local_29c < -0x4d158d1b) {
              if (local_29c < -0x4e4a502c) {
                if (local_29c == -0x5027326a) {
                  *local_2a8 = 0x770d1d4c;
                }
                else if (local_29c == -0x4fd771ff) {
                  local_220 = _objc_msgSend(local_150,local_c0,local_98,local_a0,0x10);
                  *local_2a8 = -0x52c16b32;
                }
              }
              else if (local_29c == -0x4e4a502c) {
                *local_2a8 = -0x2e4d58d2;
              }
              else if (local_29c == -0x4d4d2bee) {
                *local_2a8 = -0x6913c8e6;
              }
            }
            else if (local_29c < -0x4c26020e) {
              if (local_29c == -0x4d158d1b) {
                if (0x4fe991fc <
                    ((DAT_004b8cb8 | DAT_004b8cbc) / 0x237f71b8 ^ 0xa6600807) * -0x3b471bf3) {
                  iVar6 = 0x31394b3c;
                }
                goto LAB_002a1a44;
              }
              if (local_29c == -0x4c7a4f5e) {
                _objc_release(local_2b0);
                *local_2a8 = 0x2e0df0f5;
              }
            }
            else if (local_29c == -0x4c26020e) {
              *local_2a8 = -0xc71c95d;
              local_260 = local_c8;
            }
            else if (local_29c == -0x4ad2d6cc) {
              uVar8 = (DAT_004b8c10 - DAT_004b8c14) + 0x9201be8eU ^ 0xb6d2289c;
              bVar4 = 0xa8c95c69 < uVar8;
              bVar5 = uVar8 == 0xa8c95c6a;
              iVar6 = 0x4b5da693;
              iVar9 = 0x1da538a5;
              goto LAB_002a1a40;
            }
            goto LAB_0029b270;
          }
          if (local_29c < -0x41dabf04) {
            if (-0x48167dda < local_29c) {
              if (local_29c == -0x48167dd9) {
                *local_2a8 = -0x5ef1faed;
              }
              else if (local_29c == -0x43c3c279) {
                DAT_004d1a2c = 1;
                puVar10 = (undefined8 *)((long)puVar10 + -0x100);
                *local_2a8 = 0x786a369;
              }
              goto LAB_0029b270;
            }
            if (local_29c != -0x49bf429b) {
              if (local_29c == -0x496b7b30) {
                *local_2a8 = 0x65b69f2;
              }
              goto LAB_0029b270;
            }
            iVar6 = -0x136f29bb;
            if (0xc41f2a01 <
                ((uint)(DAT_004b8e80 * DAT_004b8e84) / 0x30720e1) * 0x4712ed8b + 0xc3a96216) {
              iVar6 = -0x6608dfc9;
            }
          }
          else {
            if (-0x3f393c65 < local_29c) {
              if (local_29c == -0x3f393c64) {
                uVar8 = 0;
                if (DAT_004b8c74 != 0) {
                  uVar8 = DAT_004b8c70 / DAT_004b8c74;
                }
                bVar5 = (uVar8 * -0xecd0b09 + 0x5ca6fde6 & 0x58678131) == 0xe90144d9;
                iVar6 = 0x357b9ca6;
                iVar9 = 0x49e5a7b7;
                goto LAB_002a1710;
              }
              if (local_29c == -0x3e5b1303) {
                *local_2a8 = 0x5a61aa64;
              }
              goto LAB_0029b270;
            }
            if (local_29c == -0x41dabf04) {
              bVar5 = ((DAT_004b8d28 + DAT_004b8d2c ^ 0x81050162U) & 0x9185b1ff) == 0xb7c4bdc5;
              iVar6 = 0x44d3585;
              iVar9 = 0x15337cb3;
              goto LAB_002a17d0;
            }
            if (local_29c != -0x40d534f0) goto LAB_0029b270;
            uVar8 = 0;
            if (DAT_004b8cc4 != 0) {
              uVar8 = DAT_004b8cc0 / DAT_004b8cc4;
            }
            iVar6 = -0x3987ce66;
            if (0x952e161 < ((uVar8 ^ 0x2a459f21) + 0xf3bd0a15) / 0x67f5798c) {
              iVar6 = 0x34c157ab;
            }
          }
          goto LAB_002a1a44;
        }
        if (-0x52c16b33 < local_29c) {
          if (-0x51ca8c0a < local_29c) {
            if (local_29c < -0x50e1b5d8) {
              if (local_29c == -0x51ca8c09) {
                *local_2a8 = -0x52689ec0;
              }
              else if (local_29c == -0x516a358f) {
                *local_2a8 = -0x5d459721;
              }
            }
            else {
              if (local_29c == -0x50e1b5d8) {
                uVar8 = (DAT_004b8ed0 * DAT_004b8ed4 | 0xffc1ffffU) & 0x99c3d064;
                bVar4 = 0xf3a27e47 < uVar8;
                bVar5 = uVar8 == 0xf3a27e48;
                iVar6 = -0x4d4d2bee;
                iVar9 = -0x6913c8e6;
                goto LAB_002a1a40;
              }
              if (local_29c == -0x503dcc83) {
                *local_2a8 = 0x636fe702;
              }
            }
            goto LAB_0029b270;
          }
          if (-0x52689ec1 < local_29c) {
            if (local_29c == -0x52689ec0) {
              *local_2a8 = 0x2168214d;
            }
            else if (local_29c == -0x521cd4ef) {
              local_1c9 = _objc_msgSend(local_1c0,local_108,local_1c8);
              *local_2a8 = 0x2d8196cb;
            }
            goto LAB_0029b270;
          }
          if (local_29c == -0x52c16b32) {
            *local_2a8 = 0x7eb54b1f;
            goto LAB_0029b270;
          }
          if (local_29c != -0x526b86a1) goto LAB_0029b270;
          uVar8 = (uint)((ulong)(uint)(DAT_004b8e68 * DAT_004b8e6c) * 0x1fb27f3 >> 0x36) *
                  -0x78f913af | 0x6028a298;
          bVar4 = 0x8512d3e5 < uVar8;
          bVar5 = uVar8 == 0x8512d3e6;
          iVar6 = -0x575ab4e7;
          iVar9 = 0x749e68e5;
          goto LAB_002a1a40;
        }
        if (local_29c < -0x567fe926) {
          if (local_29c == -0x575ab4e7) {
            *local_2a8 = -0x526b86a1;
          }
          else if (local_29c == -0x57246993) {
            *local_2a8 = 0x10f57717;
          }
          else if (local_29c == -0x56e7ef65) {
            iVar6 = _objc_msgSend(local_1d8,local_108,local_1f0);
            bVar5 = iVar6 == 0;
            iVar9 = 0x5ee0d237;
            iVar6 = 0x19802a3c;
            goto LAB_002a1908;
          }
          goto LAB_0029b270;
        }
        if (-0x54999d95 < local_29c) {
          if (local_29c == -0x54999d94) {
            _objc_setAssociatedObject(local_1c0,local_1f8,local_208,1);
            _objc_release(local_208);
            _objc_release(local_200);
            _objc_release(local_1d8);
            *local_2a8 = 0x1b537bb4;
            goto LAB_0029b270;
          }
          if (local_29c != -0x530870d6) goto LAB_0029b270;
          uVar8 = DAT_004b8d48 + DAT_004b8d4c;
          local_1d9 = _objc_msgSend(local_1d8,local_198,local_188);
          bVar5 = (uVar8 & 0xd14802 | 0xef2087e9) * 0x36260319 == -0x4b7f6fba;
          iVar9 = -0x530870d6;
          iVar6 = 0x55f8d29f;
          goto LAB_002a1908;
        }
        if (local_29c == -0x567fe926) {
          uVar8 = ((DAT_004b8bc0 ^ DAT_004b8bc4) + 0xe11f2054 | 0x5fc2f89d) / 0xa501650;
          bVar4 = 0xc0d6ea6d < uVar8;
          bVar5 = uVar8 == 0xc0d6ea6e;
          iVar9 = 0x786a369;
          iVar6 = -0x43c3c279;
          goto LAB_002a114c;
        }
        if (local_29c != -0x55b5327e) goto LAB_0029b270;
        uVar8 = (DAT_004b8d70 & DAT_004b8d74 ^ 0x35d9c576) * 0x6834164f ^ 0xcb660c27;
        bVar4 = 0x481f56fc < uVar8;
        bVar5 = uVar8 == 0x481f56fd;
        iVar9 = -0x6d933bb4;
        iVar6 = -0x7c48f33e;
      }
LAB_002a114c:
      if (!bVar4 || bVar5) {
        iVar6 = iVar9;
      }
      goto LAB_002a1a44;
    }
    if (-0xd921d83 < local_29c) {
      if (0x65b69f1 < local_29c) {
        if (0xd5622b6 < local_29c) {
          if (local_29c < 0x10f57717) {
            if (local_29c < 0xf53deab) {
              if (local_29c == 0xd5622b7) {
                *local_2a8 = 0x5c6b6dc0;
              }
              else if (local_29c == 0xe279c56) {
                bVar5 = (DAT_004b8c90 * DAT_004b8c94 | 0xe98c58e1U) * -0x50071a71 == -0x2b195698;
                iVar6 = -0x70f471fe;
                iVar9 = 0x7f3644f8;
                goto LAB_002a1710;
              }
            }
            else {
              if (local_29c == 0xf53deab) {
                uVar8 = ((DAT_004b8cf8 & DAT_004b8cfc) * 0x517cd8de | 0x482d03a) * -0x78077520;
                local_188 = PTR_s_resetLayoutCache_0048b630;
                local_180 = PTR_s_canShowReplyMessage_0048b628;
                local_198 = PTR_s_respondsToSelector__0048ab28;
                local_190 = PTR_s_cellView_0048b638;
                local_1a8 = PTR_s_shared_00489458;
                local_1a0 = PTR_s_setNeedsLayout_0048b640;
                local_1b8 = PTR_s_numberWithUnsignedInteger__0048b650;
                local_1b0 = PTR_s_changeRevision_0048b648;
                bVar4 = 0xcd55ad16 < uVar8;
                bVar5 = uVar8 == 0xcd55ad17;
                iVar6 = 0x3dd7e1ce;
                iVar9 = 0x6b4f19b3;
                goto LAB_002a1a40;
              }
              if (local_29c == 0xfe85e94) {
                uVar8 = (uint)((ulong)((DAT_004b8ce0 - DAT_004b8ce4) + 0x70bdd96f) * 0xedb6e61 >>
                              0x3b) | 0xeb8541ba;
                bVar4 = 0x301e4986 < uVar8;
                bVar5 = uVar8 == 0x301e4987;
                iVar9 = -0x24388391;
                iVar6 = 0x6b2ef914;
                goto LAB_002a114c;
              }
            }
          }
          else if (local_29c < 0x1433181d) {
            if (local_29c == 0x10f57717) {
              bVar5 = (DAT_004b8e40 - DAT_004b8e44 ^ 0xbb6ab0caU) * 0x7b8f5e7d == 0x2d25a1fc;
              iVar6 = -0x374fee8d;
              iVar9 = 0x3bbb70b8;
              goto LAB_002a17d0;
            }
            if (local_29c == 0x126a9150) {
              *local_2a8 = 0xfe85e94;
            }
          }
          else if (local_29c == 0x1433181d) {
            _objc_enumerationMutation(local_b8);
            *local_2a8 = -0x6ac5d61;
          }
          else if (local_29c == 0x14976784) {
            *local_2a8 = 0x69913223;
          }
          goto LAB_0029b270;
        }
        if (local_29c < 0x7e149d2) {
          if (local_29c < 0x786a369) {
            if (local_29c == 0x65b69f2) {
              bVar5 = DAT_004b8df0 * DAT_004b8df4 == 0x48c75e34;
              iVar9 = -0x3a322c7c;
              iVar6 = 0x9940642;
              goto LAB_002a129c;
            }
            if (local_29c != 0x678014b) goto LAB_0029b270;
            iVar6 = 0x3e256280;
            if ((DAT_004b8d10 | DAT_004b8d14 | 0x7fdafeff) != 0xb3d93822) {
              iVar6 = -0xe895230;
            }
          }
          else {
            if (local_29c != 0x786a369) {
              if (local_29c == 0x7b250f2) {
                uVar8 = (uint)((ulong)(DAT_004b8bd8 + DAT_004b8bdc | 0xded8f161) * 0x5384d72b >>
                              0x3e) * 0x43151266;
                puVar10 = (undefined8 *)((long)puVar10 + -0x80);
                local_a0 = (undefined1 *)puVar10;
                _objc_retain(local_2b0);
                local_a8 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b6770);
                puVar3 = local_88;
                local_88[1] = 0;
                *puVar3 = 0;
                puVar3[3] = 0;
                puVar3[2] = 0;
                puVar3[5] = 0;
                puVar3[4] = 0;
                puVar3[7] = 0;
                puVar3[6] = 0;
                _objc_msgSend(IVar2,PTR_s_navigationController_0048a770);
                local_b0 = _objc_retainAutoreleasedReturnValue();
                bVar4 = 0x4f9cb1bf < uVar8;
                bVar5 = uVar8 == 0x4f9cb1c0;
                iVar6 = 0x3bd2f4b0;
                iVar9 = -0x10255060;
                goto LAB_002a1a40;
              }
              goto LAB_0029b270;
            }
            DAT_004d1a2c = 1;
            local_88 = (undefined8 *)((long)puVar10 + -0x40);
            local_90 = (undefined1 *)((long)puVar10 + -0xc0);
            puVar10 = (undefined8 *)((long)puVar10 + -0x100);
            iVar6 = 0x786a369;
            local_98 = puVar10;
            if ((DAT_004b8bc8 + DAT_004b8bcc) * 0x572a542c + 0xbfee7e76U < 0x80f4cf7d) {
              iVar6 = 0xd5622b7;
            }
          }
        }
        else {
          if (0x9940641 < local_29c) {
            if (local_29c == 0x9940642) {
              *local_2a8 = -0x3a322c7c;
            }
            else if (local_29c == 0xd04d471) {
              *local_2a8 = -0x55b5327e;
            }
            goto LAB_0029b270;
          }
          if (local_29c != 0x7e149d2) {
            if (local_29c == 0x8d5db39) {
              local_130 = *local_e8;
              bVar5 = 0xa6de6c12 <
                      (uint)((ulong)(((DAT_004b8c48 ^ DAT_004b8c4c) & 0x6b597a63) + 0xa2fcd623) *
                             0x4bdb331 >> 0x39);
              iVar9 = 0x4d75cca7;
              iVar6 = 0x64a9d628;
              goto LAB_002a19dc;
            }
            goto LAB_0029b270;
          }
          uVar8 = DAT_004b8e28 ^ DAT_004b8e2c;
          _objc_release(local_150);
          iVar6 = -0x3d00f3ef;
          if ((uVar8 * 0x38b5bbe7 & 0xe4fcbe63) + 0xb8583095 < 0x82129301) {
            iVar6 = 0x7e149d2;
          }
        }
        goto LAB_002a1a44;
      }
      if (-0x3a74b0d < local_29c) {
        if (0x34da7db < local_29c) {
          if (local_29c < 0x43898b9) {
            if (local_29c == 0x34da7dc) {
              uVar8 = ((DAT_004b8dc0 & DAT_004b8dc4) + 0xde9177ec & 0xf48312d) * -0xb527110;
              bVar4 = 0xfb30aed1 < uVar8;
              bVar5 = uVar8 == 0xfb30aed2;
              iVar6 = -0x5c89485a;
              iVar9 = -0x6c639263;
              goto LAB_002a1a40;
            }
            if (local_29c == 0x351d517) {
              uVar8 = DAT_004b8d88 | DAT_004b8d8c;
              local_1f0 = _objc_msgSend(local_1e8,local_118);
              bVar5 = 0x1a1dfeaf < (uVar8 + 0x648bd524 | 0x6d910693) * -0x4b36961d;
              iVar9 = -0x11cd24f0;
              iVar6 = 0x3fb4da8a;
              goto LAB_002a19dc;
            }
          }
          else {
            if (local_29c == 0x43898b9) {
              bVar5 = local_231 == '\0';
              iVar9 = -0x5d4b434d;
              iVar6 = 0x4185a4e4;
              goto LAB_002a1908;
            }
            if (local_29c == 0x44d3585) {
              *local_2a8 = -0x41dabf04;
            }
          }
          goto LAB_0029b270;
        }
        if (0x58b2aa < local_29c) {
          if (local_29c == 0x58b2ab) {
            uVar8 = DAT_004b8e78 & DAT_004b8e7c;
            _objc_release(local_150);
            iVar6 = 0x58b2ab;
            if ((uVar8 * -0x4de4be6a | 0x50965541) * 0x76b40d47 < 0xd9f7171c) {
              iVar6 = 0x2ab6c6ba;
            }
            *local_2a8 = iVar6;
          }
          else if (local_29c == 0x1a08afe) {
            *local_2a8 = -0x567fe926;
          }
          goto LAB_0029b270;
        }
        if (local_29c != -0x3a74b0c) {
          if (local_29c == -0x24b6605) {
            *local_2a8 = 0x54fd4173;
          }
          goto LAB_0029b270;
        }
        bVar5 = (DAT_004b8be0 + DAT_004b8be4 + 0x29f6cc0dU) / 0x255ec798 == 0xb962763c;
        iVar9 = 0x7afbba79;
        iVar6 = 0x6e8522e6;
        goto LAB_002a1908;
      }
      if (-0x9bd38e4 < local_29c) {
        if (local_29c < -0x6ac5d61) {
          if (local_29c == -0x9bd38e3) {
            *local_2a8 = -0x4c7a4f5e;
          }
          else if (local_29c == -0x74dbd0e) {
            _objc_msgSend(local_150,local_c0,local_98,local_a0,0x10);
            *local_2a8 = -0x4fd771ff;
          }
        }
        else {
          if (local_29c == -0x6ac5d61) {
            bVar5 = 0x4ef90014 <
                    ((uint)((ulong)(uint)(DAT_004b8c30 - DAT_004b8c34) * 0x93b02453 >> 0x3f) ^
                    0x38144183);
            iVar6 = 0x50858ac9;
            iVar9 = -0x2fedd90c;
            goto LAB_002a188c;
          }
          if (local_29c == -0x43af1cc) {
            uVar8 = ((DAT_004b8e18 & DAT_004b8e1c | 0xfd049d95) ^ 0x6b30d982) + 0x34cd1a79;
            local_221 = local_220 == 0;
            bVar4 = 0x4573578b < uVar8;
            bVar5 = uVar8 == 0x4573578c;
            iVar9 = -0x708ce3f5;
            iVar6 = -0x48167dd9;
            goto LAB_002a114c;
          }
        }
        goto LAB_0029b270;
      }
      if (local_29c == -0xd921d82) {
        _objc_enumerationMutation(local_150);
        *local_2a8 = 0x646b0c08;
        goto LAB_0029b270;
      }
      if (local_29c == -0xc71c95d) {
        local_280 = local_260;
        local_110 = PTR_s_valueForKey__0048b4d8;
        local_108 = PTR_s_isKindOfClass__00489c00;
        local_120 = PTR_s_respondsToSelector__0048ab28;
        local_118 = PTR_s_class_00489650;
        *local_2a8 = 0x370d061c;
        local_268 = 0;
        goto LAB_0029b270;
      }
      if (local_29c != -0xbb88beb) goto LAB_0029b270;
      uVar8 = 0;
      if (DAT_004b8bfc != 0) {
        uVar8 = DAT_004b8bf8 / DAT_004b8bfc;
      }
      uVar8 = (uVar8 / 0xa9717111 | 0xab2ca524) ^ 0x3f694c9b;
      puStack_d8 = local_88 + 2;
      local_e0 = *(long *)*puStack_d8;
      local_e8 = local_88 + 1;
      local_e9 = local_a8 == 0;
      local_f8 = local_98 + 2;
      bVar4 = 0xc5bf0011 < uVar8;
      bVar5 = uVar8 == 0xc5bf0012;
      iVar6 = -0xbb88beb;
      iVar9 = 0x5b9fe272;
      goto LAB_002a1a40;
    }
    if (local_29c < -0x298475e9) {
      if (-0x35fdae8e < local_29c) {
        if (local_29c < -0x2fedd90c) {
          if (local_29c < -0x30038620) {
            if (local_29c == -0x35fdae8d) {
              _objc_msgSend(local_1c0,local_188);
              _objc_msgSend(local_1c0,local_190);
              _objc_retainAutoreleasedReturnValue();
              *local_2a8 = 0x582c54ef;
            }
            else if (local_29c == -0x33bfb178) {
              _objc_msgSend(local_140,local_108,local_a8);
              *local_2a8 = -0x7f1f0465;
            }
          }
          else if (local_29c == -0x30038620) {
            local_98[1] = 0;
            *puVar3 = 0;
            puVar3[3] = 0;
            puVar3[2] = 0;
            puVar3[5] = 0;
            puVar3[4] = 0;
            puVar3[7] = 0;
            puVar3[6] = 0;
            _objc_retain(local_150);
            *local_2a8 = 0x4e156d3f;
          }
          else if (local_29c == -0x30009501) {
            uVar8 = (uint)((ulong)(DAT_004b8b70 & DAT_004b8b74 ^ 0xbd951785) * 0xb338d797 >> 0x3d) |
                    0x9fd924ba;
            bVar4 = 0x54799d94 < uVar8;
            bVar5 = uVar8 == 0x54799d95;
            iVar6 = -0x1a56388c;
            iVar9 = 0x46577365;
            goto LAB_002a1a40;
          }
        }
        else if (local_29c < -0x2d9dfb1c) {
          if (local_29c == -0x2fedd90c) {
            *local_2a8 = 0x50858ac9;
          }
          else if (local_29c == -0x2e4d58d2) {
            uVar8 = 0;
            if (DAT_004b8d84 != 0) {
              uVar8 = DAT_004b8d80 / DAT_004b8d84;
            }
            bVar5 = 0x6129fbc1 < uVar8 + 0x802fcd2d;
            iVar6 = -0x11cd24f0;
            iVar9 = 0x351d517;
            goto LAB_002a188c;
          }
        }
        else {
          if (local_29c == -0x2d9dfb1c) {
            uVar8 = (DAT_004b8bb8 - DAT_004b8bbc) * -0x4767bfc5 + 0x6cae0e0aU ^ 0x6b35eb1e;
            DAT_004b6662 = local_7b ^ 2;
            DAT_004b6663 = DAT_004b6643 ^ 0x2c;
            DAT_004b6664 = DAT_004b6644 ^ 0xfb;
            DAT_004b6665 = DAT_004b6645 ^ 8;
            DAT_004b6666 = DAT_004b6646 ^ 0x6f;
            DAT_004b6667 = DAT_004b6647 ^ 0xf9;
            DAT_004b6668 = DAT_004b6648 ^ 0x9c;
            DAT_004b6669 = DAT_004b6649 ^ 2;
            DAT_004b666a = DAT_004b664a ^ 0xce;
            DAT_004b666b = DAT_004b664b ^ 0xbb;
            DAT_004b666c = DAT_004b664c ^ 0x94;
            DAT_004b666d = DAT_004b664d ^ 0x24;
            DAT_004b6617 = DAT_004b6607 ^ 0x9e;
            DAT_004b6618 = DAT_004b6608 ^ 0x3b;
            DAT_004b6619 = DAT_004b6609 ^ 0xe4;
            DAT_004b661a = DAT_004b660a ^ 0xfd;
            DAT_004b661b = DAT_004b660b ^ 0x7f;
            DAT_004b661c = DAT_004b660c ^ 0xfc;
            DAT_004b661d = DAT_004b660d ^ 0x18;
            DAT_004b661e = DAT_004b660e ^ 0xce;
            DAT_004b661f = DAT_004b660f ^ 0x81;
            DAT_004b6620 = DAT_004b6610 ^ 0x42;
            DAT_004b6621 = DAT_004b6611;
            DAT_004b6622 = DAT_004b6612 ^ 0x53;
            DAT_004b6623 = DAT_004b6613 ^ 0xce;
            DAT_004b6624 = DAT_004b6614 ^ 0xa0;
            DAT_004b6625 = DAT_004b6615 ^ 0xc;
            DAT_004b6626 = DAT_004b6616 ^ 0x28;
            DAT_004b65f0 = DAT_004b65d0 ^ 0x41;
            DAT_004b65f1 = DAT_004b65d1 ^ 0x7d;
            DAT_004b65f2 = DAT_004b65d2 ^ 0xbc;
            DAT_004b65f3 = DAT_004b65d3 ^ 0x78;
            DAT_004b65f4 = DAT_004b65d4 ^ 0xe4;
            DAT_004b65f5 = DAT_004b65d5 ^ 5;
            DAT_004b65f6 = DAT_004b65d6 ^ 0x6f;
            DAT_004b65f7 = DAT_004b65d7;
            DAT_004b65f8 = DAT_004b65d8 ^ 0x13;
            DAT_004b65f9 = DAT_004b65d9 ^ 0xf6;
            DAT_004b65fa = DAT_004b65da ^ 0xe1;
            DAT_004b65fb = DAT_004b65db ^ 0x22;
            DAT_004b65fc = DAT_004b65dc ^ 0x59;
            DAT_004b65fd = DAT_004b65dd ^ 0x47;
            DAT_004b65fe = DAT_004b65de ^ 100;
            DAT_004b65ff = DAT_004b65df ^ 0x97;
            DAT_004b6600 = DAT_004b65e0 ^ 0x75;
            DAT_004b6601 = DAT_004b65e1 ^ 0xa9;
            DAT_004b6602 = DAT_004b65e2 ^ 0xe3;
            DAT_004b6603 = DAT_004b65e3 ^ 0x5e;
            DAT_004b6604 = DAT_004b65e4 ^ 0x45;
            DAT_004b6605 = DAT_004b65e5 ^ 0x10;
            DAT_004b6606 = DAT_004b65e6 ^ 0xa0;
            bVar4 = 0x3f54bc9e < uVar8;
            bVar5 = uVar8 == 0x3f54bc9f;
            iVar9 = -0x2d9dfb1c;
            iVar6 = 0x1a08afe;
            goto LAB_002a114c;
          }
          if (local_29c == -0x2b21853e) {
            iVar6 = 0x47c5c7f1;
            if (((DAT_004b8c60 - DAT_004b8c64) * 0x215bec8e & 0x7b9b5a20U) != 0x1215dac3) {
              iVar6 = 0x658bfbdb;
            }
            goto LAB_002a1a44;
          }
        }
        goto LAB_0029b270;
      }
      if (-0x3862f9c1 < local_29c) {
        if (local_29c < -0x37b10418) {
          if (local_29c == -0x3862f9c0) {
            DAT_004b6696 = local_7a;
            DAT_004b6697 = DAT_004b6677 ^ 0x6e;
            DAT_004b6698 = DAT_004b6678 ^ 0xe3;
            DAT_004b6699 = DAT_004b6679 ^ 0x7f;
            DAT_004b669a = DAT_004b667a ^ 0x71;
            DAT_004b669b = DAT_004b667b ^ 0xd4;
            DAT_004b669c = DAT_004b667c ^ 0xa1;
            DAT_004b669d = DAT_004b667d ^ 0xa8;
            DAT_004b669e = DAT_004b667e ^ 0xe7;
            DAT_004b669f = DAT_004b667f ^ 0xbf;
            DAT_004b66a0 = DAT_004b6680 ^ 0xd8;
            DAT_004b66a1 = DAT_004b6681 ^ 0x9b;
            DAT_004b66a2 = DAT_004b6682 ^ 0x61;
            DAT_004b66a3 = DAT_004b6683 ^ 0x5d;
            DAT_004b66a4 = DAT_004b6684 ^ 0x24;
            DAT_004b66d0 = DAT_004b66b0 ^ 0xb7;
            DAT_004b66d1 = DAT_004b66b1 ^ 0x20;
            DAT_004b66d2 = DAT_004b66b2 ^ 0xd;
            DAT_004b66d3 = DAT_004b66b3 ^ 0x4a;
            DAT_004b66d4 = DAT_004b66b4 ^ 199;
            DAT_004b66d5 = DAT_004b66b5 ^ 0xb;
            DAT_004b66d6 = DAT_004b66b6 ^ 0xb4;
            DAT_004b66d7 = DAT_004b66b7 ^ 0x50;
            DAT_004b66d8 = DAT_004b66b8 ^ 0xa6;
            DAT_004b66d9 = DAT_004b66b9 ^ 0x8f;
            DAT_004b66da = DAT_004b66ba ^ 0x48;
            DAT_004b66db = DAT_004b66bb ^ 0x1c;
            DAT_004b66dc = DAT_004b66bc ^ 0xe8;
            DAT_004b66dd = DAT_004b66bd ^ 0x28;
            DAT_004b66de = DAT_004b66be ^ 0x2d;
            DAT_004b66df = DAT_004b66bf ^ 0x86;
            DAT_004b66e0 = DAT_004b66c0 ^ 0x23;
            DAT_004b66e1 = DAT_004b66c1 ^ 0xf3;
            DAT_004b66e2 = DAT_004b66c2 ^ 0x76;
            DAT_004b66e3 = DAT_004b66c3 ^ 0x31;
            DAT_004b66e4 = DAT_004b66c4 ^ 0x22;
            DAT_004b66e5 = DAT_004b66c5 ^ 0x75;
            DAT_004b66e6 = DAT_004b66c6 ^ 0xe7;
            DAT_004b66e7 = DAT_004b66c7 ^ 0x98;
            DAT_004b66e8 = DAT_004b66c8 ^ 0x84;
            DAT_004b66e9 = DAT_004b66c9 ^ 0x5c;
            DAT_004b66ea = DAT_004b66ca ^ 0x81;
            DAT_004b66eb = DAT_004b66cb ^ 0x7b;
            DAT_004b66ec = DAT_004b66cc ^ 0x96;
            DAT_004b6650 = DAT_004b6630 ^ 0x98;
            DAT_004b6651 = DAT_004b6631 ^ 0x40;
            DAT_004b6652 = DAT_004b6632 ^ 0x9f;
            DAT_004b6653 = DAT_004b6633 ^ 0x27;
            DAT_004b6654 = DAT_004b6634 ^ 0xf2;
            DAT_004b6655 = DAT_004b6635 ^ 0xce;
            DAT_004b6656 = DAT_004b6636 ^ 0xd5;
            DAT_004b6657 = DAT_004b6637 ^ 0x8d;
            DAT_004b6658 = DAT_004b6638 ^ 0x45;
            DAT_004b6659 = DAT_004b6639 ^ 0x68;
            DAT_004b665a = DAT_004b663a ^ 0xf2;
            DAT_004b665b = DAT_004b663b ^ 0x8d;
            DAT_004b665c = DAT_004b663c ^ 0x85;
            DAT_004b665d = DAT_004b663d ^ 0x65;
            DAT_004b665e = DAT_004b663e ^ 0x95;
            DAT_004b665f = DAT_004b663f ^ 0x2d;
            DAT_004b6660 = DAT_004b6640 ^ 0x22;
            DAT_004b6661 = DAT_004b6641 ^ 3;
            *local_2a8 = 0x566e5a98;
          }
          else if (local_29c == -0x38430b2c) {
            _objc_msgSend(local_1d8,local_198,local_188);
            *local_2a8 = -0x530870d6;
          }
        }
        else {
          if (local_29c == -0x37b10418) {
            local_298 = local_278;
            bVar5 = *(long *)*local_f8 == local_178;
            iVar6 = 0x44e939bc;
            iVar9 = 0x52e39daf;
            goto LAB_002a17d0;
          }
          if (local_29c == -0x374fee8d) {
            _objc_msgSend(local_140,local_120,local_230);
            *local_2a8 = 0x3bbb70b8;
          }
        }
        goto LAB_0029b270;
      }
      if (local_29c < -0x3987ce66) {
        if (local_29c == -0x3d00f3ef) {
          *local_2a8 = 0x37469597;
        }
        else if (local_29c == -0x3a322c7c) {
          uVar8 = 0;
          if (DAT_004b8dfc != 0) {
            uVar8 = DAT_004b8df8 / DAT_004b8dfc;
          }
          local_211 = local_210 == local_290;
          bVar5 = ((uVar8 & 0x7634b083) + 0x291e480a | 0x9c28dacc) == 0xef3c257;
          iVar9 = -0x3a322c7c;
          iVar6 = -0x5f99a6dd;
          goto LAB_002a1908;
        }
        goto LAB_0029b270;
      }
      if (local_29c != -0x3987ce66) {
        if (local_29c == -0x39831f25) {
          uVar7 = _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_118);
          _objc_msgSend(local_150,local_108,uVar7);
          *local_2a8 = -0x17eb3bee;
        }
        goto LAB_0029b270;
      }
      local_170 = (long *)*local_f8;
      iVar6 = 0x64ba2bcf;
      if (((DAT_004b8cc8 * DAT_004b8ccc | 0x11b8553U) * 0x32f329ac | 0xf7d551dd) == 0xcf39f3d2) {
        iVar6 = -0x3987ce66;
      }
      goto LAB_002a1a44;
    }
    if (-0x136f29bc < local_29c) {
      if (-0x11642550 < local_29c) {
        if (local_29c < -0xe895230) {
          if (local_29c == -0x1164254f) {
            local_121 = *(long *)*puStack_d8 == local_e0;
            bVar5 = ((DAT_004b8c28 & DAT_004b8c2c) + 0x56fa72c7 & 0xcd93e708) == 0xd1ddfa2a;
            iVar9 = -0x6c0b5f5d;
            iVar6 = 0x439d98f0;
            goto LAB_002a1908;
          }
          if (local_29c == -0x10255060) {
            *local_2a8 = -0x3a74b0c;
          }
        }
        else {
          if (local_29c == -0xe895230) {
            iVar6 = -0xe895230;
            if (((DAT_004b8d18 + DAT_004b8d1c) * 0x121fae95 & 0xb71afefaU) / 0x7345d8a4 < 0x8e93a1e8
               ) {
              iVar6 = 0x4a19f9d4;
            }
            goto LAB_002a1a44;
          }
          if (local_29c == -0xe0e8de6) {
            *local_2a8 = 0x33f634b7;
          }
        }
        goto LAB_0029b270;
      }
      if (-0x1217877c < local_29c) {
        if (local_29c == -0x1217877b) {
          uVar8 = (uint)((ulong)((DAT_004b8ea8 | DAT_004b8eac) + 0xca6080e1 >> 2) * 0x27c056d >>
                        0x36) | 0xf1b90fee;
          local_241 = local_240 == local_280;
          bVar4 = 0x5199789a < uVar8;
          bVar5 = uVar8 == 0x5199789b;
          iVar9 = 0x5f1c4eaa;
          iVar6 = -0x68067dc2;
          goto LAB_002a114c;
        }
        if (local_29c == -0x11cd24f0) {
          _objc_msgSend(local_1e8,local_118);
          *local_2a8 = 0x351d517;
        }
        goto LAB_0029b270;
      }
      if (local_29c == -0x136f29bb) {
        *local_2a8 = -0x6608dfc9;
        goto LAB_0029b270;
      }
      if (local_29c != -0x1343ebf6) goto LAB_0029b270;
      bVar5 = local_79 == '\0';
      iVar9 = -0x567fe926;
      iVar6 = 0x5577a7a5;
LAB_002a1908:
      if (bVar5) {
        iVar6 = iVar9;
      }
      goto LAB_002a1a44;
    }
    if (local_29c < -0x212fd050) {
      if (local_29c < -0x23a6955c) {
        if (local_29c == -0x298475e9) {
          uVar8 = 0;
          if (DAT_004b8d64 != 0) {
            uVar8 = DAT_004b8d60 / DAT_004b8d64;
          }
          uVar8 = (uVar8 | 0xfff7b5f7) + 0xd430c8ce;
          bVar4 = 0x4def0a17 < uVar8;
          bVar5 = uVar8 == 0x4def0a18;
          iVar9 = 0x55d223d5;
LAB_0029f1e4:
          iVar6 = -0x7a4332da;
          if (!bVar4 || bVar5) {
            iVar6 = iVar9;
          }
          goto LAB_002a1a44;
        }
        if (local_29c == -0x24388391) {
          *local_2a8 = 0x6b2ef914;
        }
      }
      else if (local_29c == -0x22004fd2) {
        *local_2a8 = -0x4d158d1b;
      }
      else if (local_29c == -0x23a6955c) {
        if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
          ___stack_chk_fail();
        }
        return;
      }
      goto LAB_0029b270;
    }
    if (-0x180cb065 < local_29c) {
      if (local_29c == -0x180cb064) {
        *local_2a8 = -0x2b21853e;
      }
      else if (local_29c == -0x17eb3bee) {
        uVar8 = DAT_004b8c88 ^ DAT_004b8c8c;
        uVar7 = _objc_msgSend(PTR__OBJC_CLASS___NSArray_0048ca20,local_118);
        local_151 = _objc_msgSend(local_150,local_108,uVar7);
        bVar5 = 0x7c856f01 < ((uVar8 + 0x4077154f ^ 0xe01fe01f) & 0x2a00aaf0);
        iVar9 = -0x17eb3bee;
        iVar6 = 0x40ce2106;
        goto LAB_002a19dc;
      }
      goto LAB_0029b270;
    }
    if (local_29c == -0x212fd050) {
      uVar8 = DAT_004b8ee0 * DAT_004b8ee4 + 0x3f9fa72bU & 0xe7149c59 | 0x43108858;
      bVar4 = 0xd78593b1 < uVar8;
      bVar5 = uVar8 == 0xd78593b2;
      iVar9 = -0x5cbaa967;
      iVar6 = 0x1c24b689;
      goto LAB_002a114c;
    }
    if (local_29c != -0x1a56388c) goto LAB_0029b270;
    local_79 = local_78 == 0;
    bVar5 = 0xde3570fa < ((DAT_004b8b78 * DAT_004b8b7c | 0x28fc6c41U) / 0x2fbca526 ^ 0x719b193d);
    iVar9 = 0x46577365;
    iVar6 = -0x51ca8c09;
  }
  else {
    iVar6 = 0x7a3e803a;
    if (local_29c < 0x4a19f9d4) {
      if (local_29c < 0x2e0df0f5) {
        if (local_29c < 0x23676b59) {
          if (local_29c < 0x1b537bb4) {
            if (local_29c < 0x186e923e) {
              if (local_29c == 0x15337cb3) {
                bVar5 = local_2b4 == 0;
                iVar9 = 0x15ae2140;
                iVar6 = 0x6afc134a;
                goto LAB_002a1908;
              }
              if (local_29c == 0x15ae2140) {
                uVar8 = 0;
                if (DAT_004b8d34 != 0) {
                  uVar8 = DAT_004b8d30 / DAT_004b8d34;
                }
                bVar5 = 0x5080bf06 < (uVar8 + 0xa1c4adb & 0x9231e1d4 | 0x31a0c4);
                iVar9 = -0x35fdae8d;
                iVar6 = 0x582c54ef;
                goto LAB_002a19dc;
              }
              if (local_29c == 0x185bcee5) {
                *local_2a8 = -0x30009501;
              }
              goto LAB_0029b270;
            }
            if (local_29c < 0x1a33934f) {
              if (local_29c == 0x186e923e) {
                *local_2a8 = 0x4d180ffb;
              }
              else if (local_29c == 0x19802a3c) {
                uVar8 = ((DAT_004b8d90 | DAT_004b8d94) & 0xb8f1232f) + 0x25c5c08f;
                bVar4 = 0xe82f376f < uVar8;
                bVar5 = uVar8 == 0xe82f3770;
                iVar6 = 0x38c99181;
                iVar9 = 0x27fb3c4b;
                goto LAB_002a1a40;
              }
              goto LAB_0029b270;
            }
            if (local_29c != 0x1a33934f) {
              if (local_29c == 0x1a7b9f39) {
                *local_2a8 = 0x485d218f;
              }
              goto LAB_0029b270;
            }
            if (local_74 == 0xb6466e4e) {
              iVar6 = 0x2d08c92c;
            }
          }
          else if (local_29c < 0x1e1e637f) {
            if (local_29c < 0x1cd7b66d) {
              if (local_29c != 0x1b537bb4) {
                if (local_29c == 0x1c24b689) {
                  _objc_release(local_b8);
                  *local_2a8 = -0x5cbaa967;
                }
                goto LAB_0029b270;
              }
              uVar8 = ((DAT_004b8dd8 ^ DAT_004b8ddc) & 0x6094ee7) * 0x1183b97b + 0xfc2317bd;
              _objc_setAssociatedObject(local_1c0,local_1f8,local_208,1);
              _objc_release(local_208);
              _objc_release(local_200);
              _objc_release(local_1d8);
              bVar4 = 0x200e8f55 < uVar8;
              bVar5 = uVar8 == 0x200e8f56;
              iVar6 = 0x51641667;
LAB_002a0010:
              if (!bVar4 || bVar5) {
                iVar6 = 0x1b537bb4;
              }
            }
            else {
              if (local_29c != 0x1cd7b66d) {
                if (local_29c == 0x1da538a5) {
                  bVar5 = 0xbfc18bc <
                          ((DAT_004b8c18 - DAT_004b8c1c & 0x77cd95U) * 0x307d6ca0) / 0x10f30d22;
                  iVar9 = 0x4b5da693;
                  iVar6 = -0x4c26020e;
                  goto LAB_002a19dc;
                }
                goto LAB_0029b270;
              }
              uVar8 = 0;
              if (DAT_004b8cdc != 0) {
                uVar8 = DAT_004b8cd8 / DAT_004b8cdc;
              }
              local_178 = *local_170;
              iVar6 = 0x1cd7b66d;
              if ((uVar8 * -0x5b17367d ^ 0x597b48e7) + 0x3b753ec0 < 0xb34875a7) {
                iVar6 = 0x126a9150;
              }
            }
          }
          else {
            if (0x1fb24297 < local_29c) {
              if (local_29c == 0x1fb24298) {
                bVar5 = 0x435e9c7f < ((DAT_004b8ea0 ^ DAT_004b8ea4) & 0x28000010);
                iVar6 = -0x1217877b;
                iVar9 = 0x5f1c4eaa;
                goto LAB_002a188c;
              }
              if (local_29c == 0x2168214d) {
                bVar5 = 0xe2f9cccb < ((DAT_004b8b88 ^ DAT_004b8b8c) & 0x2c944120 ^ 0x4c89e4ff);
                iVar9 = 0x7529419c;
                iVar6 = -0x1343ebf6;
                goto LAB_002a19dc;
              }
              goto LAB_0029b270;
            }
            if (local_29c != 0x1e1e637f) {
              if (local_29c == 0x1efbf4be) {
                uVar8 = 0;
                if (DAT_004b8dec != 0) {
                  uVar8 = DAT_004b8de8 / DAT_004b8dec;
                }
                uVar8 = (uVar8 | 0x5e3a064d) + 0x31178d14 & 0xb286ee01;
                local_210 = local_298 + 1;
                bVar4 = 0x786c9efb < uVar8;
                bVar5 = uVar8 == 0x786c9efc;
                iVar9 = 0x1efbf4be;
                iVar6 = -0x496b7b30;
                goto LAB_002a114c;
              }
              goto LAB_0029b270;
            }
            iVar6 = 0x7e149d2;
            if ((uint)((ulong)((DAT_004b8e20 - DAT_004b8e24) * -0x22314a2 + 0x86eef69) * 0x53faef1b
                      >> 0x3e) == 0xea257509) {
              iVar6 = 0x57ae8f6a;
            }
          }
          goto LAB_002a1a44;
        }
        if (local_29c < 0x2bd83d92) {
          if (0x27fb3c4a < local_29c) {
            if (local_29c < 0x2ab6c6ba) {
              if (local_29c == 0x27fb3c4b) {
                uVar8 = (DAT_004b8d98 * DAT_004b8d9c | 0x2550f8aU) * -0x6e9c0c60;
                _objc_msgSend(local_1d8,local_1a0);
                bVar4 = 0x48e56579 < uVar8;
                bVar5 = uVar8 == 0x48e5657a;
                iVar6 = 0x38c99181;
                iVar9 = -0x516a358f;
                goto LAB_002a1a40;
              }
              if (local_29c == 0x298281ef) {
                DAT_004b6662 = local_7b ^ 2;
                DAT_004b6663 = DAT_004b6643 ^ 0x2c;
                DAT_004b6664 = DAT_004b6644 ^ 0xfb;
                DAT_004b6665 = DAT_004b6645 ^ 8;
                DAT_004b6666 = DAT_004b6646 ^ 0x6f;
                DAT_004b6667 = DAT_004b6647 ^ 0xf9;
                DAT_004b6668 = DAT_004b6648 ^ 0x9c;
                DAT_004b6669 = DAT_004b6649 ^ 2;
                DAT_004b666a = DAT_004b664a ^ 0xce;
                DAT_004b666b = DAT_004b664b ^ 0xbb;
                DAT_004b666c = DAT_004b664c ^ 0x94;
                DAT_004b666d = DAT_004b664d ^ 0x24;
                DAT_004b6617 = DAT_004b6607 ^ 0x9e;
                DAT_004b6618 = DAT_004b6608 ^ 0x3b;
                DAT_004b6619 = DAT_004b6609 ^ 0xe4;
                DAT_004b661a = DAT_004b660a ^ 0xfd;
                DAT_004b661b = DAT_004b660b ^ 0x7f;
                DAT_004b661c = DAT_004b660c ^ 0xfc;
                DAT_004b661d = DAT_004b660d ^ 0x18;
                DAT_004b661e = DAT_004b660e ^ 0xce;
                DAT_004b661f = DAT_004b660f ^ 0x81;
                DAT_004b6620 = DAT_004b6610 ^ 0x42;
                DAT_004b6621 = DAT_004b6611;
                DAT_004b6622 = DAT_004b6612 ^ 0x53;
                DAT_004b6623 = DAT_004b6613 ^ 0xce;
                DAT_004b6624 = DAT_004b6614 ^ 0xa0;
                DAT_004b6625 = DAT_004b6615 ^ 0xc;
                DAT_004b6626 = DAT_004b6616 ^ 0x28;
                DAT_004b65f0 = DAT_004b65d0 ^ 0x41;
                DAT_004b65f1 = DAT_004b65d1 ^ 0x7d;
                DAT_004b65f2 = DAT_004b65d2 ^ 0xbc;
                DAT_004b65f3 = DAT_004b65d3 ^ 0x78;
                DAT_004b65f4 = DAT_004b65d4 ^ 0xe4;
                DAT_004b65f5 = DAT_004b65d5 ^ 5;
                DAT_004b65f6 = DAT_004b65d6 ^ 0x6f;
                DAT_004b65f7 = DAT_004b65d7;
                DAT_004b65f8 = DAT_004b65d8 ^ 0x13;
                DAT_004b65f9 = DAT_004b65d9 ^ 0xf6;
                DAT_004b65fa = DAT_004b65da ^ 0xe1;
                DAT_004b65fb = DAT_004b65db ^ 0x22;
                DAT_004b65fc = DAT_004b65dc ^ 0x59;
                DAT_004b65fd = DAT_004b65dd ^ 0x47;
                DAT_004b65fe = DAT_004b65de ^ 100;
                DAT_004b65ff = DAT_004b65df ^ 0x97;
                DAT_004b6600 = DAT_004b65e0 ^ 0x75;
                DAT_004b6601 = DAT_004b65e1 ^ 0xa9;
                DAT_004b6602 = DAT_004b65e2 ^ 0xe3;
                DAT_004b6603 = DAT_004b65e3 ^ 0x5e;
                DAT_004b6604 = DAT_004b65e4 ^ 0x45;
                DAT_004b6605 = DAT_004b65e5 ^ 0x10;
                DAT_004b6606 = DAT_004b65e6 ^ 0xa0;
                *local_2a8 = -0x2d9dfb1c;
              }
            }
            else if (local_29c == 0x2ab6c6ba) {
              *local_2a8 = -0x49bf429b;
            }
            else if (local_29c == 0x2b2670fd) {
              bVar5 = 0x7103cbcc <
                      (((DAT_004b8d50 | DAT_004b8d54) ^ 0xd073b1e) * 0x449aaac9) / 0x2295ef55;
              iVar9 = -0x3e5b1303;
              iVar6 = 0x5a61aa64;
              goto LAB_002a19dc;
            }
            goto LAB_0029b270;
          }
          if (local_29c < 0x26642369) {
            if (local_29c == 0x23676b59) {
              *local_2a8 = -0xbb88beb;
            }
            else if (local_29c == 0x24b730eb) {
              iVar6 = 0x78f381b8;
              if (local_211 == '\0') {
                iVar6 = -0x37b10418;
              }
              *local_2a8 = iVar6;
              local_278 = local_210;
            }
            goto LAB_0029b270;
          }
          if (local_29c == 0x26642369) {
            bVar5 = local_141 == '\0';
            iVar9 = 0x485d218f;
            iVar6 = -0x3f393c64;
            goto LAB_002a1908;
          }
          if (local_29c != 0x279ea4e7) goto LAB_0029b270;
          uVar8 = (DAT_004b8db8 - DAT_004b8dbc) * 0x5048e7e0 & 0xbffcd685U | 0xabec5285;
          local_1f8 = _NSSelectorFromString(&PTR____CFConstantStringClassReference_004b6750);
          puVar1 = PTR__OBJC_CLASS___NSNumber_0048cc00;
          _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_1a8);
          local_200 = _objc_retainAutoreleasedReturnValue();
          uVar7 = _objc_msgSend(local_200,local_1b0);
          _objc_msgSend(puVar1,local_1b8,uVar7);
          local_208 = _objc_retainAutoreleasedReturnValue();
          bVar4 = 0xf496e247 < uVar8;
          bVar5 = uVar8 == 0xf496e248;
          iVar6 = 0x279ea4e7;
          iVar9 = 0x53623704;
        }
        else {
          if (local_29c < 0x2d08c92c) {
            if (local_29c < 0x2ce494ab) {
              if (local_29c == 0x2bd83d92) {
                local_160 = _objc_msgSend(local_150,local_c0,local_98,local_a0,0x10);
                local_161 = local_160 == 0;
                *local_2a8 = -0x58a2c73f;
              }
              else if (local_29c == 0x2bdf7e29) {
                *local_2a8 = 0x7bd53578;
              }
            }
            else if (local_29c == 0x2ce494ab) {
              DAT_004b6690 = DAT_004b6670 ^ 0x62;
              DAT_004b6691 = DAT_004b6671 ^ 0x80;
              DAT_004b6692 = DAT_004b6672 ^ 0xcd;
              DAT_004b6693 = DAT_004b6673 ^ 0xb4;
              DAT_004b6694 = DAT_004b6674 ^ 0x8b;
              DAT_004b6695 = DAT_004b6675 ^ 0xc;
              *local_2a8 = 0x2cf89c4c;
            }
            else if (local_29c == 0x2cf89c4c) {
              DAT_004b6690 = DAT_004b6670 ^ 0x62;
              DAT_004b6691 = DAT_004b6671 ^ 0x80;
              DAT_004b6692 = DAT_004b6672 ^ 0xcd;
              DAT_004b6693 = DAT_004b6673 ^ 0xb4;
              DAT_004b6694 = DAT_004b6674 ^ 0x8b;
              DAT_004b6695 = DAT_004b6675 ^ 0xc;
              local_7a = DAT_004b6676 ^ 0xcc;
              bVar5 = (uint)((ulong)((DAT_004b8b98 & DAT_004b8b9c | 0x44aee383) + 0xb8ecf6d7) *
                             0x4ed463f1 >> 0x3d) == 0x73f363bf;
              iVar6 = 0x2cf89c4c;
              iVar9 = -0x24b6605;
              goto LAB_002a17d0;
            }
            goto LAB_0029b270;
          }
          if (0x2d8196ca < local_29c) {
            if (local_29c == 0x2d8196cb) {
              bVar5 = local_1c9 == '\0';
              iVar9 = 0x773a1c6e;
              iVar6 = -0x7dd19bbe;
              goto LAB_002a1908;
            }
            if (local_29c == 0x2de60d53) {
              *local_2a8 = 0x1cd7b66d;
            }
            goto LAB_0029b270;
          }
          if (local_29c == 0x2d08c92c) {
            *local_2a8 = 0x7a3e803a;
            goto LAB_0029b270;
          }
          if (local_29c != 0x2d3823d7) goto LAB_0029b270;
          uVar8 = DAT_004b8eb8 + DAT_004b8ebc + 0x43b5a159U | 0x6a0293d9;
          bVar4 = 0xf03799e3 < uVar8;
          bVar5 = uVar8 == 0xf03799e4;
          iVar6 = 0x6320a874;
          iVar9 = 0x7c14066e;
        }
        goto LAB_002a1a40;
      }
      if (0x3c0eed10 < local_29c) {
        if (local_29c < 0x439d98f0) {
          if (local_29c < 0x40ce2106) {
            if (local_29c < 0x3e256280) {
              if (local_29c == 0x3c0eed11) {
                *local_2a8 = -0x4ad2d6cc;
              }
              else if (local_29c == 0x3dd7e1ce) {
                *local_2a8 = 0xf53deab;
              }
            }
            else if (local_29c == 0x3e256280) {
              *local_2a8 = -0xe895230;
            }
            else if (local_29c == 0x3fb4da8a) {
              *local_2a8 = -0x56e7ef65;
            }
          }
          else if (local_29c < 0x4185a4e4) {
            if (local_29c == 0x40ce2106) {
              *local_2a8 = 0xe279c56;
            }
            else if (local_29c == 0x41575b5d) {
              iVar6 = 0x2de60d53;
              if (0x3097c012 <
                  ((DAT_004b8cd0 | DAT_004b8cd4) + 0xf8a837aa & 0xfe309a3a) + 0x328943a0) {
                iVar6 = 0x1cd7b66d;
              }
              goto LAB_002a1a44;
            }
          }
          else {
            if (local_29c == 0x4185a4e4) {
              bVar5 = 0x3b6953b4 <
                      (DAT_004b8e50 - DAT_004b8e54 | 0x9cfe07b3U) * -0xc317251 + 0x9d935a4d;
              iVar9 = 0x55e4eeff;
              iVar6 = -0x57e08c42;
              goto LAB_002a19dc;
            }
            if (local_29c == 0x41860218) {
              *local_2a8 = 0x5ee0d237;
            }
          }
        }
        else if (local_29c < 0x46a2092b) {
          if (local_29c < 0x45475db4) {
            if (local_29c == 0x439d98f0) {
              bVar5 = local_121 == '\0';
              iVar6 = 0x32a649d7;
              iVar9 = 0x1433181d;
              goto LAB_002a1710;
            }
            if (local_29c == 0x44e939bc) {
              local_1c0 = *(undefined8 *)(*local_100 + local_298 * 8);
              local_1c8 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b6710);
              *local_2a8 = -0x521cd4ef;
            }
          }
          else if (local_29c == 0x45475db4) {
            *local_2a8 = 0x2f0d163b;
          }
          else if (local_29c == 0x46577365) {
            *local_2a8 = -0x1a56388c;
          }
        }
        else if (local_29c < 0x485d218f) {
          if (local_29c == 0x46a2092b) {
            *local_2a8 = 0x32a649d7;
          }
          else if (local_29c == 0x47c5c7f1) {
            *local_2a8 = 0x658bfbdb;
          }
        }
        else if (local_29c == 0x485d218f) {
          *local_2a8 = 0x770d1d4c;
        }
        else if (local_29c == 0x49e5a7b7) {
          _objc_msgSend(local_140,local_110,&PTR____CFConstantStringClassReference_004b6730);
          _objc_retainAutoreleasedReturnValue();
          *local_2a8 = 0x357b9ca6;
        }
        goto LAB_0029b270;
      }
      if (local_29c < 0x34c157ab) {
        if (local_29c < 0x31394b3c) {
          if (local_29c == 0x2e0df0f5) {
            uVar8 = (uint)((ulong)(DAT_004b8ef0 + DAT_004b8ef4 + 0xf409a680) * 0x6fe1a59 >> 0x3a);
            bVar4 = 0xbf80a325 < uVar8;
            bVar5 = uVar8 == 0xbf80a326;
            iVar6 = -0xe0e8de6;
            iVar9 = 0x33f634b7;
            goto LAB_002a1a40;
          }
          if (local_29c != 0x2f0d163b) {
            if (local_29c == 0x2ff9d30c) {
              *local_2a8 = 0x678014b;
            }
            goto LAB_0029b270;
          }
          uVar8 = 0;
          if (DAT_004b8c84 != 0) {
            uVar8 = DAT_004b8c80 / DAT_004b8c84;
          }
          uVar8 = uVar8 * 0x7f9e3e96 ^ 0x429f8795;
          bVar4 = 0x349df4f3 < uVar8;
          bVar5 = uVar8 == 0x349df4f4;
          iVar6 = -0x17eb3bee;
          iVar9 = -0x39831f25;
          goto LAB_002a1a40;
        }
        if (0x33f634b6 < local_29c) {
          if (local_29c == 0x33f634b7) {
            bVar5 = 0x6bb7134a < (DAT_004b8ef8 | DAT_004b8efc) * 0x24b804b8 + 0xb2ecc018;
            iVar6 = -0xe0e8de6;
            iVar9 = -0x23a6955c;
            goto LAB_002a188c;
          }
          if (local_29c == 0x34a5aac6) {
            iVar6 = -0x212fd050;
            if (local_251 == '\0') {
              iVar6 = -0xc71c95d;
            }
            *local_2a8 = iVar6;
            local_260 = local_250;
          }
          goto LAB_0029b270;
        }
        if (local_29c == 0x31394b3c) {
          bVar5 = local_161 == '\0';
          iVar6 = 0x1e1e637f;
          iVar9 = -0x40d534f0;
          goto LAB_002a1710;
        }
        if (local_29c != 0x32a649d7) goto LAB_0029b270;
        bVar5 = 0x8361d95c < ((DAT_004b8c40 & DAT_004b8c44) / 0x3a47311 ^ 0x1069ffde) + 0x45c08efc;
        iVar9 = 0x4d75cca7;
        iVar6 = 0x8d5db39;
      }
      else if (local_29c < 0x37469597) {
        if (local_29c < 0x361c1eba) {
          if (local_29c == 0x34c157ab) {
            *local_2a8 = -0x3987ce66;
          }
          else if (local_29c == 0x357b9ca6) {
            iVar6 = DAT_004b8c78 + DAT_004b8c7c;
            _objc_msgSend(local_140,local_110,&PTR____CFConstantStringClassReference_004b6730);
            local_150 = _objc_retainAutoreleasedReturnValue();
            bVar5 = iVar6 == 0x31f278d6;
            iVar9 = 0x357b9ca6;
            iVar6 = 0x45475db4;
            goto LAB_002a1908;
          }
          goto LAB_0029b270;
        }
        if (local_29c == 0x361c1eba) {
          *local_2a8 = -0x50e1b5d8;
          goto LAB_0029b270;
        }
        if (local_29c != 0x370d061c) goto LAB_0029b270;
        local_288 = local_268;
        bVar5 = 0x4b9ec9f5 <
                (((DAT_004b8c20 ^ DAT_004b8c24) & 0x7e65f1ad) + 0x56cb4cc3 | 0x559eecf8);
        iVar9 = -0x1164254f;
        iVar6 = -0x6c0b5f5d;
      }
      else if (local_29c < 0x3bbb70b8) {
        if (local_29c != 0x37469597) {
          if (local_29c == 0x38c99181) {
            _objc_msgSend(local_1d8,local_1a0);
            *local_2a8 = 0x27fb3c4b;
          }
          goto LAB_0029b270;
        }
        bVar5 = 0xcd961a6d < ((DAT_004b8e30 - DAT_004b8e34) + 0xeb7a357fU ^ 0xdc1d295);
        iVar9 = -0x5adfe8e5;
        iVar6 = 0x6f70ccbc;
      }
      else {
        if (local_29c != 0x3bbb70b8) {
          if (local_29c == 0x3bd2f4b0) {
            puVar10 = (undefined8 *)((long)puVar10 + -0x80);
            _objc_retain(local_2b0);
            _NSClassFromString(&PTR____CFConstantStringClassReference_004b6770);
            puVar3 = local_88;
            local_88[1] = 0;
            *puVar3 = 0;
            puVar3[3] = 0;
            puVar3[2] = 0;
            puVar3[5] = 0;
            puVar3[4] = 0;
            puVar3[7] = 0;
            puVar3[6] = 0;
            _objc_msgSend(IVar2,PTR_s_navigationController_0048a770);
            _objc_retainAutoreleasedReturnValue();
            *local_2a8 = 0x7b250f2;
          }
          goto LAB_0029b270;
        }
        uVar8 = DAT_004b8e48 * DAT_004b8e4c;
        local_231 = _objc_msgSend(local_140,local_120,local_230);
        bVar5 = 0x3088a269 < (uVar8 / 0x234cd22 + 0xcc286c5) / 0x3bc011e;
        iVar9 = -0x374fee8d;
        iVar6 = 0x43898b9;
      }
    }
    else {
      if (local_29c < 0x64ba2bcf) {
        if (0x566e5a97 < local_29c) {
          if (local_29c < 0x5ee0d237) {
            if (local_29c < 0x5b9fe272) {
              if (local_29c < 0x582c54ef) {
                if (local_29c == 0x566e5a98) {
                  DAT_004b6696 = local_7a;
                  DAT_004b6697 = DAT_004b6677 ^ 0x6e;
                  DAT_004b6698 = DAT_004b6678 ^ 0xe3;
                  DAT_004b6699 = DAT_004b6679 ^ 0x7f;
                  DAT_004b669a = DAT_004b667a ^ 0x71;
                  DAT_004b669b = DAT_004b667b ^ 0xd4;
                  DAT_004b669c = DAT_004b667c ^ 0xa1;
                  DAT_004b669d = DAT_004b667d ^ 0xa8;
                  DAT_004b669e = DAT_004b667e ^ 0xe7;
                  uVar8 = 0;
                  if (DAT_004b8bac != 0) {
                    uVar8 = DAT_004b8ba8 / DAT_004b8bac;
                  }
                  DAT_004b669f = DAT_004b667f ^ 0xbf;
                  DAT_004b66a0 = DAT_004b6680 ^ 0xd8;
                  DAT_004b66a1 = DAT_004b6681 ^ 0x9b;
                  DAT_004b66a2 = DAT_004b6682 ^ 0x61;
                  DAT_004b66a3 = DAT_004b6683 ^ 0x5d;
                  DAT_004b66a4 = DAT_004b6684 ^ 0x24;
                  DAT_004b66d0 = DAT_004b66b0 ^ 0xb7;
                  DAT_004b66d1 = DAT_004b66b1 ^ 0x20;
                  DAT_004b66d2 = DAT_004b66b2 ^ 0xd;
                  DAT_004b66d3 = DAT_004b66b3 ^ 0x4a;
                  DAT_004b66d4 = DAT_004b66b4 ^ 199;
                  DAT_004b66d5 = DAT_004b66b5 ^ 0xb;
                  DAT_004b66d6 = DAT_004b66b6 ^ 0xb4;
                  DAT_004b66d7 = DAT_004b66b7 ^ 0x50;
                  DAT_004b66d8 = DAT_004b66b8 ^ 0xa6;
                  DAT_004b66d9 = DAT_004b66b9 ^ 0x8f;
                  DAT_004b66da = DAT_004b66ba ^ 0x48;
                  DAT_004b66db = DAT_004b66bb ^ 0x1c;
                  DAT_004b66dc = DAT_004b66bc ^ 0xe8;
                  DAT_004b66dd = DAT_004b66bd ^ 0x28;
                  DAT_004b66de = DAT_004b66be ^ 0x2d;
                  DAT_004b66df = DAT_004b66bf ^ 0x86;
                  DAT_004b66e0 = DAT_004b66c0 ^ 0x23;
                  DAT_004b66e1 = DAT_004b66c1 ^ 0xf3;
                  DAT_004b66e2 = DAT_004b66c2 ^ 0x76;
                  DAT_004b66e3 = DAT_004b66c3 ^ 0x31;
                  DAT_004b66e4 = DAT_004b66c4 ^ 0x22;
                  DAT_004b66e5 = DAT_004b66c5 ^ 0x75;
                  DAT_004b66e6 = DAT_004b66c6 ^ 0xe7;
                  DAT_004b66e7 = DAT_004b66c7 ^ 0x98;
                  DAT_004b66e8 = DAT_004b66c8 ^ 0x84;
                  DAT_004b66e9 = DAT_004b66c9 ^ 0x5c;
                  DAT_004b66ea = DAT_004b66ca ^ 0x81;
                  DAT_004b66eb = DAT_004b66cb ^ 0x7b;
                  DAT_004b66ec = DAT_004b66cc ^ 0x96;
                  DAT_004b6650 = DAT_004b6630 ^ 0x98;
                  DAT_004b6651 = DAT_004b6631 ^ 0x40;
                  DAT_004b6652 = DAT_004b6632 ^ 0x9f;
                  DAT_004b6653 = DAT_004b6633 ^ 0x27;
                  DAT_004b6654 = DAT_004b6634 ^ 0xf2;
                  DAT_004b6655 = DAT_004b6635 ^ 0xce;
                  DAT_004b6656 = DAT_004b6636 ^ 0xd5;
                  DAT_004b6657 = DAT_004b6637 ^ 0x8d;
                  DAT_004b6658 = DAT_004b6638 ^ 0x45;
                  DAT_004b6659 = DAT_004b6639 ^ 0x68;
                  DAT_004b665a = DAT_004b663a ^ 0xf2;
                  DAT_004b665b = DAT_004b663b ^ 0x8d;
                  DAT_004b665c = DAT_004b663c ^ 0x85;
                  DAT_004b665d = DAT_004b663d ^ 0x65;
                  DAT_004b665e = DAT_004b663e ^ 0x95;
                  DAT_004b665f = DAT_004b663f ^ 0x2d;
                  DAT_004b6660 = DAT_004b6640 ^ 0x22;
                  DAT_004b6661 = DAT_004b6641 ^ 3;
                  iVar6 = 0x2bdf7e29;
                  if ((uVar8 ^ 0x5d30da0c) + 0xc42ed086 < 0x514341c) {
                    iVar6 = -0x3862f9c0;
                  }
                  *local_2a8 = iVar6;
                  local_7b = DAT_004b6642;
                }
                else if (local_29c == 0x57ae8f6a) {
                  _objc_release(local_150);
                  *local_2a8 = 0x7e149d2;
                }
              }
              else {
                if (local_29c == 0x582c54ef) {
                  uVar8 = (DAT_004b8d38 | DAT_004b8d3c) + 0xf8255f9d;
                  _objc_msgSend(local_1c0,local_188);
                  _objc_msgSend(local_1c0,local_190);
                  local_1d8 = _objc_retainAutoreleasedReturnValue();
                  bVar4 = 0xc8bec6d5 < uVar8;
                  bVar5 = uVar8 == 0xc8bec6d6;
                  iVar6 = -0x35fdae8d;
                  iVar9 = -0x503dcc83;
                  goto LAB_002a1a40;
                }
                if (local_29c == 0x5a61aa64) {
                  bVar5 = ((DAT_004b8d58 ^ DAT_004b8d5c) & 0x9c46ead7) == 0x1ad3b618;
                  iVar9 = -0x3e5b1303;
                  iVar6 = 0x7d717ecf;
                  goto LAB_002a1908;
                }
              }
            }
            else if (local_29c < 0x5c9924bc) {
              if (local_29c == 0x5b9fe272) {
                *local_2a8 = -0x7899ccbe;
              }
              else if (local_29c == 0x5c6b6dc0) {
                uVar8 = (DAT_004b8bd0 ^ DAT_004b8bd4) + 0x41138c47 | 0xfffeb514;
                bVar4 = 0xb42d8d94 < uVar8;
                bVar5 = uVar8 == 0xb42d8d95;
                iVar9 = 0x3bd2f4b0;
                iVar6 = 0x7b250f2;
                goto LAB_002a114c;
              }
            }
            else if (local_29c == 0x5c9924bc) {
              *local_2a8 = -0x7f1f0465;
            }
            else if (local_29c == 0x5da73330) {
              _objc_msgSend(local_1d8,local_188);
              *local_2a8 = -0x298475e9;
            }
            goto LAB_0029b270;
          }
          if (0x6324ad22 < local_29c) {
            if (0x646b0c07 < local_29c) {
              if (local_29c == 0x646b0c08) {
                uVar8 = DAT_004b8d08 + DAT_004b8d0c;
                _objc_enumerationMutation(local_150);
                bVar5 = 0x1c6765d1 < (uint)((ulong)uVar8 * 0x6353353 >> 0x3a) + 0xfb65457;
                iVar9 = -0xd921d82;
                iVar6 = 0x2ff9d30c;
                goto LAB_002a19dc;
              }
              if (local_29c == 0x64a9d628) {
                *local_2a8 = 0x4e937ed8;
              }
              goto LAB_0029b270;
            }
            if (local_29c == 0x6324ad23) {
              local_140 = *local_138;
              bVar5 = local_e9 == '\0';
              iVar6 = 0x485d218f;
              iVar9 = 0x5c9924bc;
            }
            else {
              if (local_29c != 0x636fe702) goto LAB_0029b270;
              bVar5 = ((DAT_004b8d40 ^ DAT_004b8d44) & 0xdffbf7ff | 0xd7fac7b7) == 0x8c94b487;
              iVar6 = -0x530870d6;
              iVar9 = -0x38430b2c;
            }
LAB_002a1710:
            if (bVar5) {
              iVar6 = iVar9;
            }
            goto LAB_002a1a44;
          }
          if (0x61b908f1 < local_29c) {
            if (local_29c == 0x61b908f2) {
              *local_2a8 = -0x72ace82b;
            }
            else if (local_29c == 0x6320a874) {
              *local_2a8 = 0x2d3823d7;
            }
            goto LAB_0029b270;
          }
          if (local_29c != 0x5ee0d237) {
            if (local_29c == 0x5f1c4eaa) {
              *local_2a8 = -0x1217877b;
            }
            goto LAB_0029b270;
          }
          uVar8 = DAT_004b8db0 * DAT_004b8db4 * 0x3f5671d3 & 0x9fbd844U | 0x9c29800;
          bVar4 = 0x6390c782 < uVar8;
          bVar5 = uVar8 == 0x6390c783;
          iVar9 = 0x279ea4e7;
          iVar6 = 0x6675b2af;
          goto LAB_002a114c;
        }
        if (local_29c < 0x51641667) {
          if (local_29c < 0x4d75cca7) {
            if (local_29c == 0x4a19f9d4) {
              *local_2a8 = 0x44e939bc;
            }
            else if (local_29c == 0x4b5da693) {
              *local_2a8 = 0x1da538a5;
            }
            else if (local_29c == 0x4d180ffb) {
              uVar8 = (DAT_004b8ec8 - DAT_004b8ecc & 0x30b9b6e7U) * 0x5cb1c6a1 + 0x89c597a4;
              local_251 = local_250 == 0;
              bVar4 = 0xbc2a8b26 < uVar8;
              bVar5 = uVar8 == 0xbc2a8b27;
              iVar6 = 0x186e923e;
              iVar9 = 0x361c1eba;
              goto LAB_002a1a40;
            }
          }
          else if (local_29c < 0x4e937ed8) {
            if (local_29c == 0x4d75cca7) {
              *local_2a8 = 0x8d5db39;
            }
            else if (local_29c == 0x4e156d3f) {
              *local_2a8 = 0x2bd83d92;
            }
          }
          else if (local_29c == 0x4e937ed8) {
            local_138 = (undefined8 *)(local_130 + local_288 * 8);
            *local_2a8 = 0x6324ad23;
          }
          else if (local_29c == 0x50858ac9) {
            bVar5 = (DAT_004b8c38 & DAT_004b8c3c) * -0x4cdddfe4 == 0x214c9c5f;
            iVar9 = 0x50858ac9;
            iVar6 = 0x46a2092b;
            goto LAB_002a1908;
          }
          goto LAB_0029b270;
        }
        if (0x5577a7a4 < local_29c) {
          if (local_29c < 0x55e4eeff) {
            if (local_29c == 0x5577a7a5) {
              bVar5 = ((DAT_004b8b90 + DAT_004b8b94 ^ 0xff8fffffU) & 0x902100) == 0xd8eb3003;
              iVar6 = 0x2cf89c4c;
              iVar9 = 0x2ce494ab;
              goto LAB_002a1710;
            }
            if (local_29c == 0x55d223d5) {
              *local_2a8 = -0x7a4332da;
            }
          }
          else if (local_29c == 0x55e4eeff) {
            _objc_msgSend(local_140,local_230);
            *local_2a8 = 0x695468e8;
          }
          else if (local_29c == 0x55f8d29f) {
            *local_2a8 = 0x2b2670fd;
          }
          goto LAB_0029b270;
        }
        if (0x53623703 < local_29c) {
          if (local_29c == 0x53623704) {
            *local_2a8 = 0x34da7dc;
          }
          else if (local_29c == 0x54fd4173) {
            bVar5 = 0x77908e27 < (DAT_004b8ba0 * DAT_004b8ba4 + 0x1227452U & 0xc54f7922) / 0x15b64bd
            ;
            iVar9 = -0x3862f9c0;
            iVar6 = 0x566e5a98;
            goto LAB_002a19dc;
          }
          goto LAB_0029b270;
        }
        if (local_29c == 0x51641667) {
          *local_2a8 = 0x773a1c6e;
          goto LAB_0029b270;
        }
        if (local_29c != 0x52e39daf) goto LAB_0029b270;
        uVar8 = 0;
        if (DAT_004b8d04 != 0) {
          uVar8 = DAT_004b8d00 / DAT_004b8d04;
        }
        uVar8 = (uVar8 & 0x1f8b589b ^ 0x91ce1b32) + 0xb474e8e1;
        bVar4 = 0x4675509e < uVar8;
        bVar5 = uVar8 == 0x4675509f;
        iVar6 = -0xd921d82;
        iVar9 = 0x646b0c08;
LAB_002a1a40:
        if (!bVar4 || bVar5) {
          iVar6 = iVar9;
        }
        goto LAB_002a1a44;
      }
      if (0x73b14df1 < local_29c) {
        if (local_29c < 0x7ab013ef) {
          if (0x773a1c6d < local_29c) {
            if (local_29c < 0x7a3e803a) {
              if (local_29c != 0x773a1c6e) {
                if (local_29c == 0x78f381b8) {
                  uVar8 = (int)((long)((ulong)(DAT_004b8e00 & DAT_004b8e04 ^ 0xa085a8ab) *
                                      0x91c26e05) >> 0x3f) * 0x5c5f8496;
                  bVar4 = 0x533b603f < uVar8;
                  bVar5 = uVar8 == 0x533b6040;
                  iVar9 = -0x4fd771ff;
                  iVar6 = -0x74dbd0e;
                  goto LAB_002a114c;
                }
                goto LAB_0029b270;
              }
              bVar5 = (DAT_004b8de0 + DAT_004b8de4 + 0x148faec0U & 0x44caf244) == 0xa676beb;
              iVar9 = 0x1efbf4be;
              iVar6 = 0x68ab3340;
            }
            else {
              if (local_29c == 0x7a3e803a) {
                local_78 = DAT_004d1a2c;
                if ((DAT_004b8b68 * DAT_004b8b6c + 0x22bf6b26U | 0x3bbb14fd) / 0x1c68a6ad <
                    0x1062e3c) {
                  iVar6 = 0x185bcee5;
                }
                goto LAB_002a1a44;
              }
              if (local_29c != 0x7a4f2cb0) goto LAB_0029b270;
              bVar5 = (((DAT_004b8bf0 | DAT_004b8bf4) ^ 0xa2d64d24) * 0x2729ce17 & 0xb5a0988a) ==
                      0x36472606;
              iVar9 = -0xbb88beb;
              iVar6 = 0x23676b59;
            }
LAB_002a129c:
            if (!bVar5) {
              iVar6 = iVar9;
            }
            goto LAB_002a1a44;
          }
          if (local_29c < 0x7529419c) {
            if (local_29c == 0x73b14df2) {
              local_98[1] = 0;
              *puVar3 = 0;
              puVar3[3] = 0;
              puVar3[2] = 0;
              puVar3[5] = 0;
              puVar3[4] = 0;
              puVar3[7] = 0;
              puVar3[6] = 0;
              _objc_retain(local_150);
              *local_2a8 = -0x30038620;
            }
            else if (local_29c == 0x749e68e5) {
              *local_2a8 = -0x5d4b434d;
            }
            goto LAB_0029b270;
          }
          if (local_29c == 0x7529419c) {
            *local_2a8 = 0x2168214d;
            goto LAB_0029b270;
          }
          if (local_29c != 0x770d1d4c) goto LAB_0029b270;
          uVar8 = 0;
          if (DAT_004b8e9c != 0) {
            uVar8 = DAT_004b8e98 / DAT_004b8e9c;
          }
          local_240 = local_288 + 1;
          bVar5 = ((uVar8 | 0xc2144011) ^ 0x2050842 | 0x3de8b7ac) == 0x4b15009b;
          iVar9 = -0x5027326a;
          iVar6 = 0x6d1f9c5e;
        }
        else {
          if (local_29c < 0x7c14066e) {
            if (local_29c < 0x7ba59724) {
              if (local_29c == 0x7ab013ef) {
                *local_2a8 = 0x2d3823d7;
              }
              else if (local_29c == 0x7afbba79) {
                _objc_msgSend(local_b0,PTR_s_viewControllers_0048b620);
                uVar7 = _objc_retainAutoreleasedReturnValue();
                _objc_release(local_b0);
                _objc_msgSend(uVar7,PTR_s_countByEnumeratingWithState_obje_00489c48,local_88,
                              local_90,0x10);
                *local_2a8 = 0x6e8522e6;
              }
            }
            else {
              if (local_29c == 0x7ba59724) {
                bVar5 = 0xba598a09 <
                        ((DAT_004b8e60 & DAT_004b8e64 & 0x22d29048) + 0x5cb76cab | 0x8952ff61);
                iVar9 = -0x526b86a1;
                iVar6 = -0x575ab4e7;
                goto LAB_002a19dc;
              }
              if (local_29c == 0x7bd53578) {
                bVar5 = 0x5d298026 <
                        (uint)((ulong)((DAT_004b8bb0 & DAT_004b8bb4 ^ 0x98da1530) + 0x4777235a) *
                               0x977e9553 >> 0x3f);
                iVar6 = -0x2d9dfb1c;
                iVar9 = 0x298281ef;
                goto LAB_002a188c;
              }
            }
            goto LAB_0029b270;
          }
          if (0x7eb54b1e < local_29c) {
            if (local_29c == 0x7eb54b1f) {
              bVar5 = (DAT_004b8e10 + DAT_004b8e14 & 0x38cfeab9U) == 0x7364b0e7;
              iVar6 = -0x43af1cc;
              iVar9 = -0x708ce3f5;
              goto LAB_002a1710;
            }
            if (local_29c == 0x7f3644f8) {
              *local_2a8 = -0x70f471fe;
            }
            goto LAB_0029b270;
          }
          if (local_29c == 0x7c14066e) {
            iVar6 = -0x77f15a1d;
            if (local_241 == '\0') {
              iVar6 = 0x370d061c;
            }
            *local_2a8 = iVar6;
            local_268 = local_240;
            goto LAB_0029b270;
          }
          if (local_29c != 0x7d717ecf) goto LAB_0029b270;
          bVar5 = local_1d9 == '\0';
          iVar9 = -0x55b5327e;
          iVar6 = 0x5da73330;
        }
        goto LAB_002a1908;
      }
      if (local_29c < 0x6afc134a) {
        if (0x6675b2ae < local_29c) {
          if (local_29c < 0x695468e8) {
            if (local_29c == 0x6675b2af) {
              _NSSelectorFromString(&PTR____CFConstantStringClassReference_004b6750);
              puVar1 = PTR__OBJC_CLASS___NSNumber_0048cc00;
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_1a8);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              uVar7 = _objc_msgSend(uVar7,local_1b0);
              _objc_msgSend(puVar1,local_1b8,uVar7);
              _objc_retainAutoreleasedReturnValue();
              *local_2a8 = 0x279ea4e7;
            }
            else if (local_29c == 0x68ab3340) {
              *local_2a8 = 0x1efbf4be;
            }
          }
          else if (local_29c == 0x695468e8) {
            *local_2a8 = 0x7ba59724;
          }
          else if (local_29c == 0x69913223) {
            uVar8 = ((uint)(DAT_004b8da8 + DAT_004b8dac) / 0x221eae2d) * -0x3052c293 + 0xb449c019;
            bVar4 = 0xf21363d0 < uVar8;
            bVar5 = uVar8 == 0xf21363d1;
            iVar6 = 0x69913223;
            iVar9 = 0x41860218;
            goto LAB_002a1a40;
          }
          goto LAB_0029b270;
        }
        if (local_29c == 0x64ba2bcf) {
          *local_2a8 = 0x41575b5d;
          goto LAB_0029b270;
        }
        if (local_29c != 0x658bfbdb) {
          if (local_29c == 0x662f22f4) {
            local_100 = local_98 + 1;
            *local_2a8 = 0x3c0eed11;
          }
          goto LAB_0029b270;
        }
        iVar6 = 0x658bfbdb;
        if (0x2396e831 < (DAT_004b8c68 + DAT_004b8c6c) * -0x2d1323da + 0x563b072U) {
          iVar6 = 0x26642369;
        }
        goto LAB_002a1a44;
      }
      if (local_29c < 0x6d1f9c5e) {
        if (local_29c < 0x6b4f19b3) {
          if (local_29c == 0x6afc134a) {
            local_1ca = _objc_msgSend(local_1c0,local_180);
            *local_2a8 = -0x62c57beb;
          }
          else if (local_29c == 0x6b2ef914) {
            bVar5 = (((DAT_004b8ce8 | DAT_004b8cec) ^ 0x7cbc87) + 0x8b78bd5c & 0xf027650) ==
                    0x8cbc1320;
            iVar6 = -0x24388391;
            iVar9 = -0x7a2ead34;
            goto LAB_002a17d0;
          }
        }
        else if (local_29c == 0x6b4f19b3) {
          *local_2a8 = -0x37b10418;
          local_278 = 0;
        }
        else if (local_29c == 0x6cc442a1) {
          *local_2a8 = 0x662f22f4;
        }
        goto LAB_0029b270;
      }
      if (0x6f70ccbb < local_29c) {
        if (local_29c == 0x6f70ccbc) {
          _NSSelectorFromString(&PTR____CFConstantStringClassReference_004b66f0);
          *local_2a8 = -0x5adfe8e5;
        }
        else if (local_29c == 0x71ed225d) {
          _objc_release(local_150);
          *local_2a8 = 0x58b2ab;
        }
        goto LAB_0029b270;
      }
      if (local_29c == 0x6d1f9c5e) {
        *local_2a8 = 0x1fb24298;
        goto LAB_0029b270;
      }
      if (local_29c != 0x6e8522e6) goto LAB_0029b270;
      uVar8 = DAT_004b8be8 | DAT_004b8bec;
      _objc_msgSend(local_b0,PTR_s_viewControllers_0048b620);
      local_b8 = _objc_retainAutoreleasedReturnValue();
      _objc_release(local_b0);
      local_c0 = PTR_s_countByEnumeratingWithState_obje_00489c48;
      local_c8 = _objc_msgSend(local_b8,PTR_s_countByEnumeratingWithState_obje_00489c48,local_88,
                               local_90,0x10);
      local_c9 = local_c8 == 0;
      bVar5 = 0xe05ca93f < (byte)((ulong)((uVar8 | 0x446f66e3) ^ 0x70fd0c51) * 0x48bc9f9 >> 0x38);
      iVar9 = 0x7afbba79;
      iVar6 = -0x64632f2e;
    }
  }
LAB_002a19dc:
  if (bVar5) {
    iVar6 = iVar9;
  }
LAB_002a1a44:
  *local_2a8 = iVar6;
  goto LAB_0029b270;
}



// #####################################