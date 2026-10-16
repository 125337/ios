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