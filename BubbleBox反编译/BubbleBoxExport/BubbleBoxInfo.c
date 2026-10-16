
// ===================== @interface BubbleBoxInfo : 76 methods =====================

// ----- -[BubbleBoxInfo initWithConfig:] @ 00207ad0 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxInfo::initWithConfig_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int local_8c;
  undefined *local_88;
  char local_79;
  ID local_78;
  ID local_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  puStack_68 = PTR_BubbleBoxInfo_0048cd88;
  local_8c = 0x4368d6a6;
  local_70 = param_1;
LAB_00207b70:
  if (local_8c < -0x2cfa6e1) {
    if (local_8c < -0x445bd21d) {
      if (local_8c < -0x49cad6ef) {
        if (local_8c == -0x7bd77a02) {
          iVar3 = -0x6485c33;
        }
        else {
          if (local_8c != -0x5839c458) goto LAB_00207b70;
          iVar3 = 0x68afed2c;
        }
      }
      else {
        iVar3 = -0x3fd9dba3;
        if (local_8c != -0x49cad6ef) {
          if (local_8c == -0x47779577) {
            bVar2 = local_79 == '\0';
            iVar3 = 0x20b9bf74;
            iVar4 = -0x4408c20e;
            goto LAB_00207fec;
          }
          goto LAB_00207b70;
        }
      }
    }
    else if (local_8c < -0x3fd9dba3) {
      if (local_8c == -0x445bd21d) {
        iVar3 = 0x68afed2c;
        if (0xf1b273d1 < (DAT_004af010 ^ DAT_004af014) * 0xa9de259 + 0xd8b6952b) {
          iVar3 = -0x5839c458;
        }
      }
      else {
        if (local_8c != -0x4408c20e) goto LAB_00207b70;
        uVar1 = 0;
        if (DAT_004aeff4 != 0) {
          uVar1 = DAT_004aeff0 / DAT_004aeff4;
        }
        iVar3 = 0x1126f8fc;
        if (0x9ee2e7f8 < (uVar1 & 0x883c0231) + 0xd9d23f40) {
          iVar3 = 0x576cab61;
        }
      }
    }
    else if (local_8c == -0x3fd9dba3) {
      iVar3 = 0x2e15afce;
      if (0xd9a44ce1 < ((DAT_004af008 | DAT_004af00c | 0x9daab52f) / 0x7d6d2750 | 0x41d6053c)) {
        iVar3 = -0x3fd9dba3;
      }
    }
    else if (local_8c == -0x3bb80d35) {
      uVar1 = 0;
      if (DAT_004aefec != 0) {
        uVar1 = DAT_004aefe8 / DAT_004aefec;
      }
      iVar3 = -0x47779577;
      if ((uVar1 | 0x1fa30048) * -0x5340eb21 + 0x93530715 < 0x68461708) {
        iVar3 = 0x4964d4cc;
      }
    }
    else {
      if (local_8c != -0x6485c33) goto LAB_00207b70;
      _objc_msgSend(local_78,local_88,param_3);
      iVar3 = 0x697639;
    }
  }
  else if (local_8c < 0x4368d6a6) {
    if (local_8c < 0x1126f8fc) {
      if (local_8c != -0x2cfa6e1) {
        if (local_8c == 0x697639) {
          iVar3 = -0x3fd9dba3;
          if ((((DAT_004af000 ^ DAT_004af004) & 0x7daeb367) + 0xb097864f & 0x618d3268) == 0x8512fed9
             ) {
            iVar3 = -0x49cad6ef;
          }
          goto LAB_00207ff0;
        }
        goto LAB_00207b70;
      }
      bVar2 = ((DAT_004aefe0 - DAT_004aefe4) + 0x627a52a1U | 0xa8b5595) * 0x46d9f472 == 0x7aa9450e;
      iVar3 = -0x3bb80d35;
      iVar4 = 0x4964d4cc;
LAB_00207fec:
      if (bVar2) {
        iVar3 = iVar4;
      }
    }
    else {
      iVar3 = 0x576cab61;
      if (local_8c != 0x1126f8fc) {
        iVar3 = 0x20b9bf74;
        if (local_8c != 0x20b9bf74) {
          iVar4 = 0x2e15afce;
          goto LAB_00207d14;
        }
        _objc_release(param_3);
        iVar3 = -0x445bd21d;
      }
    }
  }
  else {
    if (0x576cab60 < local_8c) {
      if (local_8c == 0x576cab61) {
        local_88 = PTR_s_loadConfig__0048b1b0;
        iVar3 = 0x576cab61;
        if ((DAT_004aeff8 * DAT_004aeffc + 0xd7347578U & 0xa6fce240) * -0x73679451 < 0x56b4f384) {
          iVar3 = -0x7bd77a02;
        }
        goto LAB_00207ff0;
      }
      if (local_8c == 0x68afed2c) {
        iVar3 = -0x5839c458;
        if ((DAT_004af018 & DAT_004af01c ^ 0x86582bc6) * -0x33d398b1 != -0x2286d4ec) {
          iVar3 = 0x75f0fcf0;
        }
        goto LAB_00207ff0;
      }
      if (local_8c == 0x75f0fcf0) {
        return local_78;
      }
      goto LAB_00207b70;
    }
    if (local_8c == 0x4368d6a6) {
      local_78 = _objc_msgSendSuper2(&local_70,PTR_s_init_00489660);
      local_79 = local_78 == 0;
      iVar3 = -0x2cfa6e1;
      goto LAB_00207ff0;
    }
    iVar3 = -0x3bb80d35;
    iVar4 = 0x4964d4cc;
LAB_00207d14:
    if (local_8c != iVar4) goto LAB_00207b70;
  }
LAB_00207ff0:
  local_8c = iVar3;
  goto LAB_00207b70;
}



// ----- -[BubbleBoxInfo loadConfig:] @ 00208030 -----

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::loadConfig_(ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  ID IVar2;
  ID IVar3;
  undefined8 *puVar4;
  ID *pIVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  uint uVar11;
  int iVar12;
  undefined8 *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ID local_380;
  ID local_378;
  int *local_370;
  int local_364;
  undefined *local_360;
  long local_358;
  long local_350;
  undefined *local_348;
  long local_340;
  long local_338;
  undefined8 local_330;
  double local_328;
  undefined *local_320;
  undefined8 local_318;
  undefined *local_310;
  long local_308;
  undefined *local_300;
  undefined8 local_2f8;
  char local_2e9;
  undefined *local_2e8;
  char local_2d9;
  long local_2d8;
  undefined *local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined *local_2b0;
  undefined *local_2a8;
  undefined1 local_299;
  undefined8 local_298;
  char local_289;
  undefined8 local_288;
  undefined *local_280;
  undefined *local_278;
  char local_269;
  undefined8 local_268;
  char local_259;
  undefined8 local_258;
  undefined1 local_249;
  undefined8 local_248;
  undefined *local_240;
  undefined *local_238;
  undefined *local_230;
  undefined1 local_221;
  undefined8 local_220;
  char local_211;
  undefined8 local_210;
  undefined *local_208;
  char local_1f9;
  undefined8 local_1f8;
  char local_1e9;
  undefined8 local_1e8;
  char local_1d9;
  long local_1d8;
  char local_1c9;
  long local_1c8;
  char local_1ba;
  char local_1b9;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char local_199;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined *local_180;
  undefined *local_178;
  long *local_170;
  long local_168;
  long *local_160;
  undefined8 *local_158;
  undefined *local_150;
  char local_141;
  long local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined *local_118;
  char local_109;
  long local_108;
  undefined **local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined **local_e8;
  undefined *local_e0;
  char local_d1;
  long local_d0;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  byte local_9b;
  byte local_9a;
  char local_99;
  int local_98;
  uint local_94;
  long local_90;
  
  pIVar5 = &local_380;
  local_90 = *(long *)PTR____stack_chk_guard_00481638;
  local_94 = DAT_004af020 + DAT_004af024 + 0xf0985eb5U ^ 0x82b79848;
  local_370 = &local_364;
  local_364 = -0x1af0a66e;
  local_380 = param_3;
  local_378 = param_1;
LAB_0020813c:
  IVar3 = local_378;
  IVar2 = local_380;
  if (local_364 < -0x122b11e) {
    if (-0x3ad343b4 < local_364) {
      if (local_364 < -0x1d32f687) {
        if (local_364 < -0x30f19f3b) {
          if (-0x3542dce2 < local_364) {
            if (local_364 < -0x340fae59) {
              if (local_364 < -0x34afeb2c) {
                if (local_364 == -0x3542dce1) {
                  uVar11 = ((DAT_004af180 | DAT_004af184) & 0xe72cfb6f) + 0xa83f9798 ^ 0xb35fe293;
                  bVar6 = 0xf2cc9e62 < uVar11;
                  bVar7 = uVar11 == 0xf2cc9e63;
                  iVar14 = 0x4c8ebe57;
                  iVar12 = 0x42135646;
                  goto LAB_00212990;
                }
                if (local_364 == -0x34dfbe45) {
                  fVar15 = (float)_objc_msgSend(local_330,local_320);
                  _objc_release(local_330);
                  _objc_msgSend(local_2f8,local_310,2);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  fVar16 = (float)_objc_msgSend(uVar9,local_320);
                  _objc_release(uVar9);
                  _objc_msgSend(local_2f8,local_310,3);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  fVar17 = (float)_objc_msgSend(uVar9,local_320);
                  _objc_release(uVar9);
                  IVar2 = local_378;
                  _objc_msgSend(local_378,PTR_s_setHasEdgeInsets__0048b270,1);
                  _objc_msgSend(local_328,(double)fVar15,(double)fVar16,(double)fVar17,IVar2,
                                PTR_s_setEdgeInsets__0048b278);
                  *local_370 = 0x5df54e9f;
                }
              }
              else {
                if (local_364 == -0x34afeb2c) {
                  bVar7 = (DAT_004af048 & DAT_004af04c) * -0x19224db4 == 0x2a527954;
                  iVar14 = -0x34afeb2c;
                  iVar12 = 0x24a2d0f2;
                  goto LAB_00212bb0;
                }
                if (local_364 == -0x346195ef) {
                  bVar7 = 0xcf75a4ee <
                          (DAT_004af0a0 - DAT_004af0a4 ^ 0x5e3eac04U) / 0x42412149 + 0xce344ca2;
                  iVar12 = -0x9a4da37;
                  iVar14 = 0x13ed0eb0;
                  goto LAB_00212b4c;
                }
                if (local_364 == -0x341f7b12) {
                  bVar7 = 0x95c31945 <
                          (uint)((ulong)((DAT_004af170 - DAT_004af174) + 0xf843f647) * 0x2709adb1 >>
                                0x3d) + 0xd3d415fb;
                  iVar14 = -0x165fccc7;
                  iVar12 = -0x2a3e92c7;
                  goto LAB_00212adc;
                }
              }
              goto LAB_0020813c;
            }
            if (local_364 < -0x32220df2) {
              if (local_364 == -0x340fae59) {
                *local_370 = 0x7edd0c3e;
              }
              else {
                if (local_364 == -0x332cf41d) {
                  uVar11 = ((DAT_004af0b0 | DAT_004af0b4) & 0xbef16272 | 0xab10260) * 0x4f14a3e1;
                  bVar6 = 0x7e2e8a02 < uVar11;
                  bVar7 = uVar11 == 0x7e2e8a03;
                  iVar12 = -0x2a50e849;
                  iVar14 = 0x7ea0e4b2;
                  goto LAB_00212670;
                }
                if (local_364 == -0x329b843d) {
                  *local_370 = 0x4f1aeee3;
                }
              }
              goto LAB_0020813c;
            }
            if (local_364 == -0x32220df2) {
              _objc_msgSend(local_378,local_2b8,0);
              *local_370 = 0x21a1f70c;
              goto LAB_0020813c;
            }
            if (local_364 == -0x31f2cc25) goto LAB_0020d8ec;
            if (local_364 != -0x3141f267) goto LAB_0020813c;
            uVar11 = ((DAT_004af248 | DAT_004af24c) ^ 0x8801c4 | 0xdf33aa2b) ^ 0x951b5330;
            _objc_release(local_130);
            IVar2 = local_380;
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aebe0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            IVar3 = local_378;
            _objc_msgSend(local_378,PTR_s_setHongbaoTextColor__0048b1f0,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeba0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setHongbaoTextColorDark__0048b1f8,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb80);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setMsgTextColor__0048b200,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aec40);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setMsgTextColorDark__0048b208,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aece0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendMsgTextColor__0048b210,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb60);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendMsgTextColorDark__0048b218,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar3,PTR_s_msgTextColor_0048b220);
            local_1e8 = _objc_retainAutoreleasedReturnValue();
            local_1e9 = _objc_msgSend(IVar3,local_360,local_1e8);
            bVar6 = 0xf7fc4cdd < uVar11;
            bVar7 = uVar11 == 0xf7fc4cde;
            iVar14 = 0x3585244b;
            iVar12 = -0x362f8cf9;
LAB_00212990:
            if (!bVar6 || bVar7) {
              iVar14 = iVar12;
            }
            goto LAB_00212bb4;
          }
          if (-0x3707af91 < local_364) {
            if (local_364 < -0x35de8cea) {
              if (local_364 == -0x3707af90) {
                uVar11 = DAT_004af068 + DAT_004af06c + 0x59b69db4U | 0xb89a716a;
                DAT_004ae6d3 = local_9b;
                DAT_004ae6d4 = DAT_004ae6b4 ^ 0x99;
                DAT_004ae6d5 = DAT_004ae6b5 ^ 0xea;
                DAT_004ae6d6 = DAT_004ae6b6 ^ 0x84;
                DAT_004ae6d7 = DAT_004ae6b7 ^ 0xe0;
                DAT_004ae6d8 = DAT_004ae6b8 ^ 0x44;
                DAT_004ae6d9 = DAT_004ae6b9 ^ 0xd4;
                DAT_004ae6da = DAT_004ae6ba ^ 0x4a;
                DAT_004ae6db = DAT_004ae6bb ^ 0xf9;
                DAT_004ae6dc = DAT_004ae6bc ^ 0xd3;
                DAT_004ae6dd = DAT_004ae6bd ^ 0xf7;
                DAT_004ae6de = DAT_004ae6be ^ 8;
                DAT_004ae6df = DAT_004ae6bf ^ 0xb0;
                DAT_004ae6e0 = DAT_004ae6c0 ^ 0x47;
                DAT_004ae6e1 = DAT_004ae6c1 ^ 0x49;
                DAT_004ae6e2 = DAT_004ae6c2 ^ 0x92;
                DAT_004ae6e3 = DAT_004ae6c3 ^ 0xbc;
                DAT_004ae6e4 = DAT_004ae6c4 ^ 0x19;
                bVar6 = 0x6a6b7c55 < uVar11;
                bVar7 = uVar11 == 0x6a6b7c56;
                iVar12 = -0x3707af90;
                iVar14 = 0x60bd569e;
                goto LAB_00212670;
              }
              if (local_364 == -0x363db5e1) {
                uVar11 = DAT_004af088 - DAT_004af08c;
                pIVar5 = pIVar5 + -0x10;
                local_c0 = pIVar5;
                uVar9 = _objc_retain(local_380);
                local_c8 = PTR_s_objectForKey__0048a370;
                _objc_msgSend(uVar9,PTR_s_objectForKey__0048a370,
                              &PTR____CFConstantStringClassReference_004aee20);
                local_d0 = _objc_retainAutoreleasedReturnValue();
                local_d1 = local_d0 == 0;
                iVar14 = -0x7992a8f;
                if (((uVar11 | 0x7fc32ab) * -0x4c52eae4) / 0x86ae080 == 0x5d893b20) {
                  iVar14 = -0x363db5e1;
                }
                goto LAB_00212bb4;
              }
              if (local_364 == -0x362f8cf9) {
                bVar7 = local_1e9 == '\0';
                iVar12 = -0x1b70fc66;
                iVar14 = 0x4e12e172;
                goto LAB_00212a0c;
              }
            }
            else {
              if (local_364 == -0x35de8cea) {
                iVar12 = DAT_004af2a8 + DAT_004af2ac;
                _objc_msgSend(local_378,PTR_s_sendMsgTextColorDark_0048b238);
                local_220 = _objc_retainAutoreleasedReturnValue();
                local_221 = _objc_msgSend(IVar3,local_360,local_220);
                local_230 = PTR_s_setEnabledMsgColor__0048a000;
                iVar14 = 0x2fd7d1fc;
                if ((iVar12 + 0x902926efU | 0xe6ffd3e7) < 0xab9293c5) {
                  iVar14 = -0x7e3c9b20;
                }
                goto LAB_00212cf0;
              }
              if (local_364 == -0x358957e4) {
                _objc_msgSend(local_378,local_240,0);
                iVar14 = 0x644ea9c7;
                goto LAB_002124b0;
              }
              if (local_364 == -0x3560e9e3) {
                *local_370 = 0x5796c878;
              }
            }
            goto LAB_0020813c;
          }
          if (-0x38612b68 < local_364) {
            if (local_364 == -0x38612b67) {
              *local_370 = -0x190dc2f0;
            }
            else {
              if (local_364 == -0x37c3c678) {
                uVar11 = 0;
                if (DAT_004af33c != 0) {
                  uVar11 = DAT_004af338 / DAT_004af33c;
                }
                bVar7 = 0xee1eefe7 < (uVar11 & 0xdaf0cac3 ^ 0x69c53485) + 0x8dfb49f2;
                iVar14 = -0x76c84fc6;
                iVar12 = -0x63f83d28;
                goto LAB_00212adc;
              }
              if (local_364 == -0x37a8915d) {
                _objc_msgSend(local_378,local_278,0);
                *local_370 = -0x7afe126d;
              }
            }
            goto LAB_0020813c;
          }
          if (local_364 == -0x3ad343b3) {
            _objc_release(local_318);
            _objc_msgSend(local_2f8,local_310,1);
            _objc_retainAutoreleasedReturnValue();
            *local_370 = 0xfd251e9;
            goto LAB_0020813c;
          }
          if (local_364 != -0x393e6d48) goto LAB_0020813c;
          bVar7 = 0x7450da09 <
                  ((uint)((ulong)(uint)(DAT_004af118 - DAT_004af11c) * 0x4b1be8e9 >> 0x3e) |
                  0x1300100a);
          iVar12 = -0x393e6d48;
          iVar14 = 0x3630cd99;
        }
        else {
          if (local_364 < -0x28f0a40e) {
            if (local_364 < -0x2c135553) {
              if (local_364 < -0x2ebd8a81) {
                if (local_364 == -0x30f19f3b) {
                  *local_370 = -0x3f51e0ef;
                }
                else if (local_364 == -0x3057360f) {
                  *local_370 = -0x2a634077;
                }
                goto LAB_0020813c;
              }
              if (local_364 == -0x2ebd8a81) {
                *local_370 = -0x6593cda;
                goto LAB_0020813c;
              }
              if (local_364 != -0x2c40c2c9) {
                if (local_364 == -0x2c1a14fe) {
                  *local_370 = -0x7c87c658;
                }
                goto LAB_0020813c;
              }
              uVar11 = DAT_004af258 * DAT_004af25c & 0x48005000U | 0x80e2ae36;
              _objc_msgSend(local_378,PTR_s_msgTextColorDark_0048b228);
              local_1f8 = _objc_retainAutoreleasedReturnValue();
              bVar6 = 0x1fc1c6a6 < uVar11;
              bVar7 = uVar11 == 0x1fc1c6a7;
              iVar12 = -0x2c40c2c9;
              iVar14 = -0x62ce21c6;
            }
            else {
              if (local_364 < -0x2a50e849) {
                if (local_364 == -0x2c135553) {
                  bVar7 = local_109 == '\0';
                  iVar14 = -0x1020a31c;
                  iVar12 = 0xf7caa8b;
                  goto LAB_002126a4;
                }
                if (local_364 == -0x2bf9fdfd) {
                  _objc_msgSend(local_2f8,local_300);
                  *local_370 = 0x66be2b7b;
                }
                else if (local_364 == -0x2a634077) {
                  iVar14 = -0x363db5e1;
                  if ((DAT_004af080 + DAT_004af084 ^ 0x9b3ee712U) * 0x3596d721 + 0x807e06e8 <
                      0x45fc0c6) {
                    iVar14 = -0x7b631107;
                  }
                  goto LAB_00212bb4;
                }
                goto LAB_0020813c;
              }
              if (local_364 == -0x2a50e849) {
                uVar11 = (DAT_004af0b8 & DAT_004af0bc) + 0xa307065a & 0xa1c550e3;
                bVar6 = 0xad71fe4d < uVar11;
                bVar7 = uVar11 == 0xad71fe4e;
                iVar14 = 0x7ea0e4b2;
                iVar12 = 0x10cec197;
                goto LAB_00212990;
              }
              if (local_364 != -0x2a3e92c7) {
                if (local_364 == -0x2a1dfe5e) goto LAB_0020cd38;
                goto LAB_0020813c;
              }
              local_160 = (long *)*local_158;
              uVar11 = (uint)((ulong)((DAT_004af178 | DAT_004af17c | 0x1793fa4b) * 0x484aa6b4) *
                              0x16a7a45b >> 0x3c);
              bVar6 = 0x73d8f7da < uVar11;
              bVar7 = uVar11 == 0x73d8f7db;
              iVar14 = -0x165fccc7;
              iVar12 = 0x35ada2d6;
            }
            goto LAB_00212990;
          }
          if (local_364 < -0x254303ed) {
            if (local_364 < -0x27d69113) {
              if (local_364 == -0x28f0a40e) {
                *local_370 = -0x1007a48a;
              }
              else if (local_364 == -0x2842cd68) {
                *local_370 = 0x2ab43041;
              }
              goto LAB_0020813c;
            }
            if (local_364 == -0x27d69113) {
              *local_370 = -0x503fd191;
              goto LAB_0020813c;
            }
            if (local_364 == -0x27774f6a) {
              _objc_msgSend(local_378,PTR_s_sendTimeColorDark_00489f20);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar3,local_360,uVar9);
              *local_370 = -0x3efd6da;
              goto LAB_0020813c;
            }
            if (local_364 != -0x26a012dc) goto LAB_0020813c;
            bVar7 = local_2d9 == '\0';
            iVar14 = 0x63923b54;
            iVar12 = -0x4dcb8a34;
            goto LAB_002126a4;
          }
          if (-0x206e5913 < local_364) {
            if (local_364 == -0x206e5912) {
              *local_370 = 0x719aa09f;
            }
            else {
              if (local_364 == -0x203dc5ed) {
                uVar11 = (DAT_004af0e0 ^ DAT_004af0e4) + 0x3c50d7ee ^ 0x21000005 | 0x1adff3e0;
                bVar6 = 0xda304148 < uVar11;
                bVar7 = uVar11 == 0xda304149;
                iVar12 = -0x74789f43;
                iVar14 = 0x32f76c74;
                goto LAB_00212670;
              }
              if (local_364 == -0x1f6b2f02) {
                *local_370 = -0xa9253a4;
              }
            }
            goto LAB_0020813c;
          }
          if (local_364 == -0x254303ed) {
            *local_370 = 0x227c9a27;
            goto LAB_0020813c;
          }
          if (local_364 == -0x22f3b80d) {
            *local_128 = &PTR____CFConstantStringClassReference_004aec20;
            puVar4 = local_a8;
            puVar13 = local_b0;
            local_a8[3] = &PTR____CFConstantStringClassReference_004aec00;
            _objc_msgSend(PTR__OBJC_CLASS___NSDictionary_0048cad8,
                          PTR_s_dictionaryWithObjects_forKeys_co_0048a338,puVar4,puVar13,4);
            _objc_retainAutoreleasedReturnValue();
            puVar13 = local_b8;
            local_b8[1] = 0;
            *puVar13 = 0;
            puVar13[3] = 0;
            puVar13[2] = 0;
            puVar13[5] = 0;
            puVar13[4] = 0;
            puVar13[7] = 0;
            puVar13[6] = 0;
            uVar9 = _objc_retain();
            _objc_msgSend(uVar9,PTR_s_countByEnumeratingWithState_obje_00489c48,local_b8,local_c0,
                          0x10);
            *local_370 = -0x54e0ca4b;
            goto LAB_0020813c;
          }
          if (local_364 != -0x2299b0b0) goto LAB_0020813c;
          bVar7 = 0x8f5d8e78 <
                  (DAT_004af3f0 + DAT_004af3f4 & 0x1b3b63daU) * -0x4daa0fde + 0xa41c4a3a;
          iVar12 = -0x6f20d558;
          iVar14 = 0x26457e47;
        }
LAB_00212b4c:
        if (bVar7) {
          iVar14 = iVar12;
        }
        goto LAB_00212bb4;
      }
      if (local_364 < -0x10497b5a) {
        if (local_364 < -0x1815a265) {
          if (local_364 < -0x1b42154c) {
            if (local_364 < -0x1b70fc66) {
              if (local_364 == -0x1d32f687) {
                _objc_msgSend(local_378,local_230,local_221);
                _objc_release(local_220);
                *local_370 = -0x5766bbdb;
              }
              else if (local_364 == -0x1bff121e) {
                bVar7 = (DAT_004af438 & DAT_004af43c & 0xf4adba2e) == 0x815f28e0;
                iVar14 = -0x1bff121e;
                iVar12 = 0x57cb0edd;
                goto LAB_00212bb0;
              }
              goto LAB_0020813c;
            }
            if (local_364 != -0x1b70fc66) {
              if (local_364 == -0x1b672ff9) {
                *local_370 = -0x2a1dfe5e;
              }
              else if (local_364 == -0x1b5e1199) {
                bVar7 = local_199 == '\0';
                iVar14 = -0x46bf3120;
                iVar12 = -0x4a3f168f;
                goto LAB_002126a4;
              }
              goto LAB_0020813c;
            }
            bVar7 = 0xd2b9cd15 <
                    ((DAT_004af2f0 ^ DAT_004af2f4) + 0xf68604a2 | 0xeda929fb) / 0x5d1aa559;
            iVar12 = 0x106e8902;
            iVar14 = 0x44f9a40;
          }
          else {
            if (-0x19b7fe4f < local_364) {
              if (local_364 == -0x19b7fe4e) {
                *local_370 = 0x3986c3dd;
              }
              else if (local_364 == -0x190dc2f0) {
                *local_370 = 0x63923b54;
              }
              else if (local_364 == -0x18de139a) {
                *local_370 = -0x73bb59a0;
              }
              goto LAB_0020813c;
            }
            if (local_364 == -0x1b42154c) {
              *local_370 = -0x623bad87;
              goto LAB_0020813c;
            }
            if (local_364 != -0x1af0a66e) {
              if (local_364 == -0x19dde9d0) {
                uVar11 = (DAT_004af1d0 ^ DAT_004af1d4) * -0x14ab07fa & 0xe7e83f96 | 0xe3c83a10;
                bVar6 = 0xbbe449bc < uVar11;
                bVar7 = uVar11 == 0xbbe449bd;
                iVar14 = -0x7dd82b4;
                iVar12 = -0x1815a265;
                goto LAB_00212990;
              }
              goto LAB_0020813c;
            }
            bVar7 = 0x92be161d < local_94;
            iVar12 = 0x7f1dbfe1;
            iVar14 = 0x4f18c5b;
          }
        }
        else {
          if (local_364 < -0x15ad0aa4) {
            if (local_364 < -0x16aa4ac1) {
              if (local_364 == -0x1815a265) {
                uVar9 = _objc_msgSend(local_1b8,local_180);
                _objc_msgSend(local_1b0,local_188,uVar9);
                *local_370 = -0x7dd82b4;
              }
              else if (local_364 == -0x172cdc9c) {
                bVar7 = 0xed84698c <
                        ((DAT_004af330 ^ DAT_004af334) + 0xf5c0d2b0 | 0xa0076028) + 0x383f15ae;
                iVar14 = -0x37c3c678;
                iVar12 = -0x76c84fc6;
                goto LAB_00212adc;
              }
            }
            else {
              if (local_364 == -0x16aa4ac1) {
                _objc_msgSend(local_378,local_2b0,0);
                iVar14 = -0x437d727d;
                goto LAB_002124b0;
              }
              if (local_364 == -0x1683276a) {
                iVar12 = DAT_004af298 - DAT_004af29c;
                _objc_msgSend(local_378,PTR_s_sendMsgTextColor_0048b230);
                local_210 = _objc_retainAutoreleasedReturnValue();
                iVar14 = -0x1683276a;
                if ((uint)((ulong)(iVar12 * -0x27aacf94 + 0x7ef50f63) * 0x21c406a1 >> 0x3d) <
                    0x23f3beb3) {
                  iVar14 = 0x7340e812;
                }
LAB_00212cf0:
                *local_370 = iVar14;
              }
              else if (local_364 == -0x165fccc7) {
                *local_370 = -0x2a3e92c7;
              }
            }
            goto LAB_0020813c;
          }
          if (-0x143483fe < local_364) {
            if (local_364 == -0x143483fd) goto LAB_0020d834;
            if (local_364 == -0x141a40b5) {
              bVar7 = (DAT_004af2b0 & DAT_004af2b4) == 0x8e81eddd;
              iVar14 = -0x1d32f687;
              iVar12 = 0xe7ab59c;
              goto LAB_002126a4;
            }
            if (local_364 == -0x12b0229d) {
              *local_370 = -0x6c955790;
            }
            goto LAB_0020813c;
          }
          if (local_364 == -0x15ad0aa4) goto LAB_0020c950;
          if (local_364 != -0x14bfc1cc) {
            if (local_364 == -0x143f5c8a) {
              _objc_msgSend(local_378,PTR_s_timeColorDark_00489f00);
              local_268 = _objc_retainAutoreleasedReturnValue();
              *local_370 = 0x46e877bf;
            }
            goto LAB_0020813c;
          }
          local_1a8 = *(undefined8 *)(*local_170 + local_358 * 8);
          bVar7 = 0x8054758e <
                  (uint)((ulong)((DAT_004af1b8 - DAT_004af1bc & 0x1f0900a1U) + 0xf1d6bba8) *
                         0x148f6297 >> 0x3b);
          iVar12 = -0x7bdaf214;
          iVar14 = -0x21f408a;
        }
        goto LAB_00212b4c;
      }
      if (-0x7992a90 < local_364) {
        if (local_364 < -0x588a313) {
          if (local_364 < -0x765a597) {
            if (local_364 == -0x7992a8f) {
              bVar7 = local_d1 == '\0';
              iVar14 = 0x4b98aa0e;
              iVar12 = 0x5c920930;
              goto LAB_002126a4;
            }
            if (local_364 == -0x785fee6) {
              *local_370 = 0x6aeedf6c;
            }
            goto LAB_0020813c;
          }
          if (local_364 != -0x765a597) {
            if (local_364 == -0x6cba294) {
              bVar7 = (DAT_004af318 * DAT_004af31c * -0x5b4f4cbb & 0xfefeffbdU | 0x6cfafd90) ==
                      0xd2f949b0;
              iVar12 = -0x6cba294;
              iVar14 = -0x143483fd;
              goto LAB_00212a0c;
            }
            if (local_364 == -0x6593cda) {
              bVar7 = 0x39ec3a34 <
                      ((byte)((ulong)(uint)(DAT_004af360 + DAT_004af364) * 0x7034c07 >> 0x38) +
                      0xeaefc95b) / 0x3d4a667b;
              iVar14 = -0x3d38311b;
              iVar12 = -0x6bd53cac;
              goto LAB_00212adc;
            }
            goto LAB_0020813c;
          }
          bVar7 = 0xbb426cd6 <
                  ((DAT_004af270 + DAT_004af274 | 0x7c805de3U) + 0x31a1b952) / 0x3e298e96;
          iVar12 = 0x4c5cd077;
          iVar14 = 0x1d080dc;
        }
        else {
          if (local_364 < -0x3607a05) {
            if (local_364 == -0x588a313) {
              *local_370 = 0x75c14a01;
            }
            else if (local_364 == -0x494cc03) {
              *local_370 = 0x3be29727;
            }
            else if (local_364 == -0x3efd6da) {
              uVar11 = (DAT_004af3e8 * DAT_004af3ec ^ 0x10002000U) & 0x10023040;
              _objc_msgSend(local_378,PTR_s_sendTimeColorDark_00489f20);
              local_298 = _objc_retainAutoreleasedReturnValue();
              local_299 = _objc_msgSend(IVar3,local_360,local_298);
              local_2a8 = PTR_s_setEnabledTimeColor__00489f38;
              bVar6 = 0xacd64957 < uVar11;
              bVar7 = uVar11 == 0xacd64958;
              iVar14 = -0x3efd6da;
              iVar12 = 0x6441aed1;
              goto LAB_00212990;
            }
            goto LAB_0020813c;
          }
          if (local_364 != -0x3607a05) {
            if (local_364 == -0x21f408a) {
              *local_370 = 0x331ba04;
            }
            else if (local_364 == -0x1f7a0f3) {
              *local_370 = 0xf1c22a8;
            }
            goto LAB_0020813c;
          }
          bVar7 = 0x9cb93ed0 < (DAT_004af2e8 & DAT_004af2ec) * 0x5d67773c + 0x601d631f;
          iVar12 = 0x67e18169;
          iVar14 = 0x3d550abf;
        }
        goto LAB_00212b4c;
      }
      if (local_364 < -0xc1117d4) {
        if (local_364 < -0x1007a48a) {
          if (local_364 == -0x10497b5a) {
            bVar7 = (DAT_004af4b0 ^ DAT_004af4b4) * -0x3419262b == -0x254becd4;
            iVar12 = 0x66be2b7b;
            iVar14 = -0x2bf9fdfd;
            goto LAB_0020fda0;
          }
          if (local_364 == -0x1020a31c) {
            puVar13 = local_b0 + 1;
            *local_b0 = &PTR____CFConstantStringClassReference_004aed40;
            *local_a8 = &PTR____CFConstantStringClassReference_004aec80;
            local_120 = puVar13;
            *local_370 = -0x5999abb3;
          }
        }
        else {
          if (local_364 == -0x1007a48a) {
            uVar11 = DAT_004af130 * DAT_004af134 & 0xc400a000;
            bVar6 = 0xbb7a09d4 < uVar11;
            bVar7 = uVar11 == 0xbb7a09d5;
            iVar12 = -0x54e0ca4b;
            iVar14 = -0x22f3b80d;
            goto LAB_00212670;
          }
          if (local_364 == -0xdea64fa) {
            DAT_004ae72a = local_9a ^ 0x65;
            DAT_004ae72b = DAT_004ae71f ^ 0xf0;
            DAT_004ae72c = DAT_004ae720 ^ 0x3c;
            DAT_004ae72d = DAT_004ae721 ^ 0xd4;
            DAT_004ae72e = DAT_004ae722 ^ 0x23;
            DAT_004ae72f = DAT_004ae723 ^ 0x2a;
            DAT_004ae730 = DAT_004ae724 ^ 0x52;
            DAT_004ae9f7 = DAT_004ae9f2 ^ 0x99;
            DAT_004ae9f8 = DAT_004ae9f3 ^ 0x59;
            DAT_004ae9f9 = DAT_004ae9f4 ^ 0x34;
            DAT_004ae9fa = DAT_004ae9f5 ^ 0x2c;
            DAT_004ae9fb = DAT_004ae9f6 ^ 0x6f;
            DAT_004ae6f0 = DAT_004ae6e5 ^ 0x1a;
            DAT_004ae6f1 = DAT_004ae6e6 ^ 0xbf;
            DAT_004ae6f2 = DAT_004ae6e7 ^ 0x34;
            DAT_004ae6f3 = DAT_004ae6e8 ^ 0xb1;
            DAT_004ae6f4 = DAT_004ae6e9 ^ 0x52;
            DAT_004ae6f5 = DAT_004ae6ea ^ 0xf2;
            DAT_004ae6f6 = DAT_004ae6eb ^ 0x9e;
            DAT_004ae6f7 = DAT_004ae6ec ^ 0x8c;
            DAT_004ae6f8 = DAT_004ae6ed ^ 0x3b;
            DAT_004ae6f9 = DAT_004ae6ee ^ 0x95;
            DAT_004ae6fa = DAT_004ae6ef ^ 0xdd;
            DAT_004aea94 = DAT_004aea8e ^ 0xaf30;
            DAT_004aea96 = DAT_004aea90 ^ 0xf08;
            DAT_004aea98 = DAT_004aea92 ^ 0xc25f;
            DAT_004ae8e0 = DAT_004ae8c0 ^ 0xa9;
            DAT_004ae8e1 = DAT_004ae8c1 ^ 0x85;
            DAT_004ae8e2 = DAT_004ae8c2 ^ 0x34;
            DAT_004ae8e3 = DAT_004ae8c3 ^ 4;
            DAT_004ae8e4 = DAT_004ae8c4 ^ 0x3f;
            DAT_004ae8e5 = DAT_004ae8c5 ^ 0x79;
            DAT_004ae8e6 = DAT_004ae8c6 ^ 0x8f;
            DAT_004ae8e7 = DAT_004ae8c7 ^ 0x8b;
            DAT_004ae8e8 = DAT_004ae8c8 ^ 0x22;
            DAT_004ae8e9 = DAT_004ae8c9 ^ 0x58;
            DAT_004ae8ea = DAT_004ae8ca ^ 0xc5;
            DAT_004ae8eb = DAT_004ae8cb ^ 0xdb;
            DAT_004ae8ec = DAT_004ae8cc ^ 0x83;
            DAT_004ae8ed = DAT_004ae8cd ^ 0xe4;
            DAT_004ae8ee = DAT_004ae8ce ^ 0x6c;
            DAT_004ae8ef = DAT_004ae8cf ^ 0x83;
            DAT_004ae8f0 = DAT_004ae8d0 ^ 0x96;
            DAT_004ae8f1 = DAT_004ae8d1 ^ 0x23;
            DAT_004ae8f2 = DAT_004ae8d2 ^ 0x8d;
            DAT_004ae6d0 = DAT_004ae6b0 ^ 0xa5;
            DAT_004ae6d1 = DAT_004ae6b1 ^ 0x8a;
            DAT_004ae6d2 = DAT_004ae6b2 ^ 0xb3;
            iVar14 = -0x1b42154c;
            if (0xd178be1e < DAT_004af058 + DAT_004af05c + 0x783deddeU) {
              iVar14 = -0xadd93b3;
            }
            *local_370 = iVar14;
            DAT_004ae652 = DAT_004ae650 ^ 0x79;
            DAT_004ae653 = DAT_004ae651 ^ 0x20;
            local_9b = DAT_004ae6b3 ^ 0x5c;
          }
          else if (local_364 == -0xc8ac6af) {
            _objc_msgSend(local_378,PTR_s_setIsHeadToBottom__0048b248,local_249);
            _objc_release(local_248);
            IVar2 = local_380;
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeb20);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setTimeColor__00489f08,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aed20);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setTimeColorDark__00489f10,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb00);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendTimeColor__00489f28,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aed60);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendTimeColorDark__00489f30,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar3,PTR_s_timeColor_00489ef8);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,local_360,uVar9);
            *local_370 = -0x48b17599;
          }
        }
        goto LAB_0020813c;
      }
      if (-0xa27e331 < local_364) {
        if (local_364 == -0xa27e330) {
          *local_370 = -0x203dc5ed;
        }
        else if (local_364 == -0x9a4da37) {
          _objc_msgSend(local_378,local_e0,local_d0);
          *local_370 = 0x13ed0eb0;
        }
        else if (local_364 == -0x7dd82b4) {
          uVar11 = DAT_004af1d8 * DAT_004af1dc;
          uVar9 = _objc_msgSend(local_1b8,local_180);
          local_1b9 = _objc_msgSend(local_1b0,local_188,uVar9);
          bVar7 = (uVar11 & 0x3e727f28) * -0x1164cdac == 0x543cb98b;
          iVar12 = -0x7dd82b4;
          iVar14 = 0x19e05e06;
          goto LAB_00212a0c;
        }
        goto LAB_0020813c;
      }
      if (local_364 == -0xc1117d4) {
        _objc_msgSend(local_2d8,local_2e8,&PTR____CFConstantStringClassReference_004aeaa0);
        *local_370 = 0x33bf6748;
        goto LAB_0020813c;
      }
      if (local_364 == -0xadd93b3) {
        DAT_004ae72a = local_9a ^ 0x65;
        DAT_004ae72b = DAT_004ae71f ^ 0xf0;
        DAT_004ae72c = DAT_004ae720 ^ 0x3c;
        DAT_004ae72d = DAT_004ae721 ^ 0xd4;
        DAT_004ae72e = DAT_004ae722 ^ 0x23;
        DAT_004ae72f = DAT_004ae723 ^ 0x2a;
        DAT_004ae730 = DAT_004ae724 ^ 0x52;
        DAT_004ae9f7 = DAT_004ae9f2 ^ 0x99;
        DAT_004ae9f8 = DAT_004ae9f3 ^ 0x59;
        DAT_004ae9f9 = DAT_004ae9f4 ^ 0x34;
        DAT_004ae9fa = DAT_004ae9f5 ^ 0x2c;
        DAT_004ae9fb = DAT_004ae9f6 ^ 0x6f;
        DAT_004ae6f0 = DAT_004ae6e5 ^ 0x1a;
        DAT_004ae6f1 = DAT_004ae6e6 ^ 0xbf;
        DAT_004ae6f2 = DAT_004ae6e7 ^ 0x34;
        DAT_004ae6f3 = DAT_004ae6e8 ^ 0xb1;
        DAT_004ae6f4 = DAT_004ae6e9 ^ 0x52;
        DAT_004ae6f5 = DAT_004ae6ea ^ 0xf2;
        DAT_004ae6f6 = DAT_004ae6eb ^ 0x9e;
        DAT_004ae6f7 = DAT_004ae6ec ^ 0x8c;
        DAT_004ae6f8 = DAT_004ae6ed ^ 0x3b;
        DAT_004ae6f9 = DAT_004ae6ee ^ 0x95;
        DAT_004ae6fa = DAT_004ae6ef ^ 0xdd;
        DAT_004aea94 = DAT_004aea8e ^ 0xaf30;
        DAT_004aea96 = DAT_004aea90 ^ 0xf08;
        DAT_004aea98 = DAT_004aea92 ^ 0xc25f;
        DAT_004ae652 = DAT_004ae650 ^ 0x79;
        DAT_004ae653 = DAT_004ae651 ^ 0x20;
        DAT_004ae8e0 = DAT_004ae8c0 ^ 0xa9;
        DAT_004ae8e1 = DAT_004ae8c1 ^ 0x85;
        DAT_004ae8e2 = DAT_004ae8c2 ^ 0x34;
        DAT_004ae8e3 = DAT_004ae8c3 ^ 4;
        DAT_004ae8e4 = DAT_004ae8c4 ^ 0x3f;
        DAT_004ae8e5 = DAT_004ae8c5 ^ 0x79;
        DAT_004ae8e6 = DAT_004ae8c6 ^ 0x8f;
        DAT_004ae8e7 = DAT_004ae8c7 ^ 0x8b;
        DAT_004ae8e8 = DAT_004ae8c8 ^ 0x22;
        DAT_004ae8e9 = DAT_004ae8c9 ^ 0x58;
        DAT_004ae8ea = DAT_004ae8ca ^ 0xc5;
        DAT_004ae8eb = DAT_004ae8cb ^ 0xdb;
        DAT_004ae8ec = DAT_004ae8cc ^ 0x83;
        DAT_004ae8ed = DAT_004ae8cd ^ 0xe4;
        DAT_004ae8ee = DAT_004ae8ce ^ 0x6c;
        DAT_004ae8ef = DAT_004ae8cf ^ 0x83;
        DAT_004ae8f0 = DAT_004ae8d0 ^ 0x96;
        DAT_004ae8f1 = DAT_004ae8d1 ^ 0x23;
        DAT_004ae8f2 = DAT_004ae8d2 ^ 0x8d;
        DAT_004ae6d0 = DAT_004ae6b0 ^ 0xa5;
        DAT_004ae6d1 = DAT_004ae6b1 ^ 0x8a;
        DAT_004ae6d2 = DAT_004ae6b2 ^ 0xb3;
        *local_370 = -0xdea64fa;
        goto LAB_0020813c;
      }
      if (local_364 != -0xa9253a4) goto LAB_0020813c;
      uVar11 = ((DAT_004af228 - DAT_004af22c) + 0xc73bceadU ^ 0x23709c1e) + 0x45a23929;
      bVar6 = 0x354f8c38 < uVar11;
      bVar7 = uVar11 == 0x354f8c39;
      iVar12 = -0xa9253a4;
      iVar14 = -0x533631f0;
LAB_00212670:
      if (!bVar6 || bVar7) {
        iVar14 = iVar12;
      }
      goto LAB_00212bb4;
    }
    if (-0x5766bbdc < local_364) {
      if (-0x48b1759a < local_364) {
        if (local_364 < -0x433b2459) {
          if (-0x46bf3121 < local_364) {
            if (local_364 < -0x446008e9) {
              if (local_364 != -0x46bf3120) {
                if (local_364 == -0x452f7f69) {
                  fVar15 = (float)_objc_msgSend(local_330,local_320);
                  _objc_release(local_330);
                  _objc_msgSend(local_2f8,local_310,2);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  fVar16 = (float)_objc_msgSend(uVar9,local_320);
                  _objc_release(uVar9);
                  _objc_msgSend(local_2f8,local_310,3);
                  uVar9 = _objc_retainAutoreleasedReturnValue();
                  fVar17 = (float)_objc_msgSend(uVar9,local_320);
                  _objc_release(uVar9);
                  IVar2 = local_378;
                  _objc_msgSend(local_378,PTR_s_setHasEdgeInsets__0048b270,1);
                  _objc_msgSend(local_328,(double)fVar15,(double)fVar16,(double)fVar17,IVar2,
                                PTR_s_setEdgeInsets__0048b278);
                  *local_370 = -0x34dfbe45;
                }
                else if (local_364 == -0x44892bc8) {
LAB_00210e90:
                  *local_370 = -0x47bfab4d;
                }
                goto LAB_0020813c;
              }
              uVar11 = 0;
              if (DAT_004af1b4 != 0) {
                uVar11 = DAT_004af1b0 / DAT_004af1b4;
              }
              bVar7 = 0x3e69bf78 <
                      ((uint)((ulong)uVar11 * 0xa89cc419 >> 0x3f) | 0x10e1349a) * 0x10a8c508;
              iVar12 = -0x14bfc1cc;
              iVar14 = -0x7bdaf214;
            }
            else {
              if (local_364 != -0x446008e9) {
                if (local_364 == -0x437d727d) {
                  uVar11 = DAT_004af408 & DAT_004af40c;
                  _objc_msgSend(local_378,local_2b0,0);
                  bVar7 = 0xa7a08435 < (uVar11 * -0x524d9538 & 0x862333d0) + 0x5928fb3b;
                  iVar12 = -0x16aa4ac1;
                  iVar14 = -0x65671f3d;
                  goto LAB_00212b4c;
                }
                if (local_364 == -0x43735972) {
                  bVar7 = 0x89493a0e <
                          (((DAT_004af430 & DAT_004af434) + 0xf5261219) / 0x549bdde2 | 0x329f5d44);
                  iVar14 = -0x1bff121e;
                  iVar12 = -0x54d51a51;
                  goto LAB_00212adc;
                }
                goto LAB_0020813c;
              }
              bVar7 = 0x540acc53 <
                      ((DAT_004af4f0 - DAT_004af4f4) * 0x1f6561c7 & 0x30b36e69U) * 0x68f370c6;
              iVar12 = 0x230b033a;
              iVar14 = -0x5c91fb76;
            }
            goto LAB_00212b4c;
          }
          if (local_364 < -0x47bfab4d) {
            if (local_364 == -0x48b17599) {
              uVar11 = DAT_004af358 - DAT_004af35c;
              _objc_msgSend(local_378,PTR_s_setIsHeadToBottom__0048b248,local_249);
              _objc_release(local_248);
              IVar2 = local_380;
              _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeb20);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar3,PTR_s_setTimeColor__00489f08,uVar9);
              _objc_release(uVar9);
              _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aed20);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar3,PTR_s_setTimeColorDark__00489f10,uVar9);
              _objc_release(uVar9);
              _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb00);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar3,PTR_s_setSendTimeColor__00489f28,uVar9);
              _objc_release(uVar9);
              _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aed60);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(IVar3,PTR_s_setSendTimeColorDark__00489f30,uVar9);
              _objc_release(uVar9);
              _objc_msgSend(IVar3,PTR_s_timeColor_00489ef8);
              local_258 = _objc_retainAutoreleasedReturnValue();
              local_259 = _objc_msgSend(IVar3,local_360,local_258);
              iVar14 = -0x48b17599;
              if ((uVar11 & 0x2cd5ef14 ^ 0x83275d9a) + 0x65968ef0 < 0x6dae6cf4) {
                iVar14 = -0x2ebd8a81;
              }
              goto LAB_00212bb4;
            }
            if (local_364 == -0x47ff6416) {
              local_310 = PTR_s_objectAtIndexedSubscript__00489528;
              _objc_msgSend(local_2f8,PTR_s_objectAtIndexedSubscript__00489528,0);
              local_318 = _objc_retainAutoreleasedReturnValue();
              local_320 = PTR_s_floatValue_0048a598;
              fVar15 = (float)_objc_msgSend();
              local_328 = (double)fVar15;
              *local_370 = -0x401699a8;
            }
            goto LAB_0020813c;
          }
          if (local_364 != -0x47bfab4d) {
            if (local_364 == -0x4766fdf3) {
              *local_370 = -0x19dde9d0;
            }
            else if (local_364 == -0x46db3982) {
              *local_370 = 0x6e2a7365;
            }
            goto LAB_0020813c;
          }
          uVar11 = DAT_004af3c8 | DAT_004af3cc;
          _objc_msgSend(local_378,local_280);
          local_288 = _objc_retainAutoreleasedReturnValue();
          local_289 = _objc_msgSend(IVar3,local_360,local_288);
          bVar7 = (uVar11 / 0x6c6086cc | 0x6fe46724) == 0x9d93315;
          iVar14 = 0x359282c5;
          iVar12 = 0x467b57b1;
        }
        else {
          if (local_364 < -0x3f51e0ef) {
            if (local_364 < -0x421c1773) {
              if (local_364 == -0x433b2459) {
                *local_370 = 0x3a85b643;
              }
              else if (local_364 == -0x430ae738) {
                *local_370 = -0x73cf8453;
              }
            }
            else if (local_364 == -0x421c1773) {
              *local_370 = -0x61c94ffe;
            }
            else {
              if (local_364 == -0x401699a8) {
                bVar7 = ((uint)(DAT_004af4c0 + DAT_004af4c4) / 0x8c71733e | 0x540ca38c) / 0x20372dc4
                        == 0xec42a378;
                iVar14 = 0xfd251e9;
                iVar12 = -0x3ad343b3;
                goto LAB_002126a4;
              }
              if (local_364 == -0x3fa00081) {
                bVar7 = local_2e9 == '\0';
                iVar12 = 0x63923b54;
                iVar14 = 0x5b87e246;
                goto LAB_00212a0c;
              }
            }
            goto LAB_0020813c;
          }
          if (local_364 < -0x3d38311b) {
            if (local_364 == -0x3f51e0ef) {
              uVar11 = DAT_004af4e8 ^ DAT_004af4ec;
              _objc_release(local_108);
              _objc_release(local_100);
              _objc_release(local_e8);
              bVar7 = 0xc1da000a < (uVar11 * -0x4f85783c + 0xba0ed828 | 0xe1645cb4);
              iVar14 = -0x3daff9bd;
              iVar12 = 0x5674d0a3;
              goto LAB_00212adc;
            }
            if (local_364 == -0x3f23ae04) {
LAB_0020cd38:
              *local_370 = -0x5df23ef9;
            }
            else if (local_364 == -0x3daff9bd) {
              _objc_release(local_108);
              _objc_release(local_100);
              _objc_release(local_e8);
              *local_370 = -0x3f51e0ef;
            }
            goto LAB_0020813c;
          }
          if (local_364 != -0x3d38311b) {
            if (local_364 == -0x3b316758) {
              *local_370 = -0x1683276a;
            }
            else if (local_364 == -0x3adf5542) {
              *local_370 = 0x55c5c926;
            }
            goto LAB_0020813c;
          }
          uVar11 = 0;
          if (DAT_004af36c != 0) {
            uVar11 = DAT_004af368 / DAT_004af36c;
          }
          bVar7 = (uVar11 + 0xc941cb97 | 0x86414b5a) == 0x2e291111;
          iVar14 = -0x6bd53cac;
          iVar12 = 0x601c37c1;
        }
LAB_00212bb0:
        if (!bVar7) {
          iVar14 = iVar12;
        }
        goto LAB_00212bb4;
      }
      if (local_364 < -0x504426d6) {
        if (-0x54b6cbb5 < local_364) {
          if (local_364 < -0x51c0c2b5) {
            if (local_364 == -0x54b6cbb4) {
              uVar11 = 0;
              if (DAT_004af484 != 0) {
                uVar11 = DAT_004af480 / DAT_004af484;
              }
              uVar11 = (uVar11 ^ 0x9730f19) * -0x79a0269c & 0xb27e5a50;
              bVar6 = 0xd9978dfa < uVar11;
              bVar7 = uVar11 == 0xd9978dfb;
              iVar14 = -0xc1117d4;
              iVar12 = 0x33bf6748;
              goto LAB_00212990;
            }
            if (local_364 == -0x535fdc63) {
              _objc_release(local_1b0);
              *local_370 = 0x4288655;
            }
            else if (local_364 == -0x533631f0) {
              iVar14 = 0x114f6c68;
              if (local_1c9 == '\0') {
                iVar14 = -0x63832eb6;
              }
              *local_370 = iVar14;
              local_340 = local_1c8;
            }
          }
          else if (local_364 == -0x51c0c2b5) {
            *local_370 = 0x220fbe21;
          }
          else if (local_364 == -0x51422ba4) {
            *local_370 = 0x3ceb5963;
          }
          else if (local_364 == -0x5134b11e) {
            _objc_release(local_288);
            *local_370 = 0x36805bd5;
          }
          goto LAB_0020813c;
        }
        if (-0x55e5a4e6 < local_364) {
          if (local_364 == -0x55e5a4e5) {
            _objc_release(local_2f8);
            iVar14 = 0x40b3c8fb;
            goto LAB_002124b0;
          }
          if (local_364 != -0x54e0ca4b) {
            if (local_364 == -0x54d51a51) {
              *local_370 = -0x1bff121e;
            }
            goto LAB_0020813c;
          }
          *local_128 = &PTR____CFConstantStringClassReference_004aec20;
          puVar4 = local_a8;
          puVar13 = local_b0;
          local_a8[3] = &PTR____CFConstantStringClassReference_004aec00;
          _objc_msgSend(PTR__OBJC_CLASS___NSDictionary_0048cad8,
                        PTR_s_dictionaryWithObjects_forKeys_co_0048a338,puVar4,puVar13,4);
          local_130 = _objc_retainAutoreleasedReturnValue();
          puVar13 = local_b8;
          local_b8[1] = 0;
          *puVar13 = 0;
          puVar13[3] = 0;
          puVar13[2] = 0;
          puVar13[5] = 0;
          puVar13[4] = 0;
          puVar13[7] = 0;
          puVar13[6] = 0;
          _objc_retain();
          local_138 = PTR_s_countByEnumeratingWithState_obje_00489c48;
          local_140 = _objc_msgSend(local_130,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                    local_b8,local_c0,0x10);
          local_141 = local_140 == 0;
          iVar14 = -0x7273d302;
          goto LAB_002124b0;
        }
        if (local_364 == -0x5766bbdb) {
          *local_370 = -0x3adf5542;
          goto LAB_0020813c;
        }
        if (local_364 != -0x574cc99b) goto LAB_0020813c;
        iVar14 = 0x4288655;
        if (0x844c72dc <
            (uint)((ulong)(((DAT_004af200 ^ DAT_004af204) & 0x608d6f58) + 0x2fca7f85 >> 1) *
                   0x2ae63cb1 >> 0x3c)) {
          iVar14 = -0x535fdc63;
        }
      }
      else {
        if (-0x4ea30dbd < local_364) {
          if (local_364 < -0x4c3a15a3) {
            if (local_364 == -0x4ea30dbc) {
              bVar7 = local_1ba == '\0';
              iVar12 = -0x574cc99b;
              iVar14 = -0x6ea20c00;
              goto LAB_00212a0c;
            }
            if (local_364 == -0x4df30921) {
              *local_370 = 0x65d3e6b7;
            }
            else if (local_364 == -0x4dcb8a34) {
              *local_370 = -0x6ca1a767;
            }
          }
          else if (local_364 == -0x4c3a15a3) {
            *local_370 = -0x31f2cc25;
          }
          else if (local_364 == -0x4bf16eee) {
            local_2b8 = PTR_s_setEnabledTimeColor__00489f38;
            *local_370 = 0x3c2e4a0f;
          }
          else if (local_364 == -0x4a3f168f) {
            _objc_enumerationMutation(local_130);
            *local_370 = 0x69428122;
          }
          goto LAB_0020813c;
        }
        if (-0x4f5e7d3d < local_364) {
          if (local_364 == -0x4f5e7d3c) {
            local_2b0 = PTR_s_setEnabledTimeColor__00489f38;
            *local_370 = 0x36a03b70;
          }
          else if (local_364 == -0x4f5750e4) {
            *local_370 = 0x7954d298;
          }
          else if (local_364 == -0x4ed46b46) {
            *local_370 = 0x33da896c;
          }
          goto LAB_0020813c;
        }
        if (local_364 != -0x504426d6) {
          if (local_364 == -0x503fd191) {
            uVar11 = DAT_004af2c8 - DAT_004af2cc;
            _objc_msgSend(local_378,local_238,0);
            bVar7 = 0xa40709ac < (uVar11 | 0x7dfdde67) + 0xb0131776;
            iVar14 = 0x3d9a87aa;
            iVar12 = -0x4c3a15a3;
            goto LAB_00212adc;
          }
          goto LAB_0020813c;
        }
        iVar14 = 0x5796c878;
        if (((DAT_004af390 ^ DAT_004af394) * -0x4cce9ffa + 0xec51f758) / 0xc0c116d == 0x2d727eb9) {
          iVar14 = -0x3560e9e3;
        }
      }
      goto LAB_00212bb4;
    }
    if (-0x6d214b95 < local_364) {
      if (local_364 < -0x623bad87) {
        if (local_364 < -0x64d9d9d2) {
          if (local_364 < -0x6bd53cac) {
            if (local_364 == -0x6d214b94) {
              _objc_msgSend(local_378,local_208,0);
              *local_370 = 0x757921b2;
            }
            else {
              if (local_364 == -0x6ca1a767) {
                local_2e8 = PTR_s_containsString__0048b098;
                bVar7 = 0xca9b54f8 <
                        (((DAT_004af478 | DAT_004af47c) ^ 0x4081162 | 0xeb738c1c) ^ 0xbef36699);
                iVar12 = 0x4b0eef94;
                iVar14 = 0x52c66737;
                goto LAB_00212b4c;
              }
              if (local_364 == -0x6c955790) {
                uVar11 = (DAT_004af418 & DAT_004af41c ^ 0xce125332) + 0x426a99e7;
                bVar6 = 0xf442ebc2 < uVar11;
                bVar7 = uVar11 == 0xf442ebc3;
                iVar14 = -0x6c955790;
                iVar12 = 0x2893a273;
                goto LAB_00212990;
              }
            }
          }
          else if (local_364 == -0x6bd53cac) {
            *local_370 = -0x3d38311b;
          }
          else if (local_364 == -0x65671f3d) {
            *local_370 = 0x47e160a3;
          }
          else if (local_364 == -0x695908de) {
            if (*(long *)PTR____stack_chk_guard_00481638 != local_90) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return;
          }
          goto LAB_0020813c;
        }
        if (local_364 < -0x63832eb6) {
          if (local_364 == -0x64d9d9d2) {
            *local_370 = -0x37a8915d;
          }
          else if (local_364 == -0x63f83d28) {
LAB_0020d834:
            *local_370 = 0x207f9b67;
          }
          goto LAB_0020813c;
        }
        if (local_364 != -0x63832eb6) {
          if (local_364 == -0x633a347e) {
            *local_370 = 0x216314e4;
          }
          else if (local_364 == -0x62ce21c6) {
            *local_370 = -0x122b11e;
          }
          goto LAB_0020813c;
        }
        local_358 = local_340;
        uVar11 = (DAT_004af190 + DAT_004af194) * 0xfd4b3c9 ^ 0xbbea147b;
        bVar6 = 0xcf053a38 < uVar11;
        bVar7 = uVar11 == 0xcf053a39;
        iVar14 = -0x430ae738;
        iVar12 = -0x73cf8453;
        goto LAB_00212990;
      }
      if (local_364 < -0x5c79bc24) {
        if (local_364 < -0x5e8dec05) {
          if (local_364 == -0x623bad87) {
            uVar11 = (uint)((ulong)(DAT_004af060 & DAT_004af064 ^ 0xd2033d1b) * 0x3e077f75 >> 0x3c);
            bVar6 = 0x6f04d0fc < uVar11;
            bVar7 = uVar11 == 0x6f04d0fd;
            iVar12 = -0x3707af90;
            iVar14 = 0x28bba0bb;
            goto LAB_00212670;
          }
          if (local_364 == -0x61c94ffe) {
            uVar11 = (DAT_004af110 ^ DAT_004af114) + 0x7cb019b5 | 0xd467cd3a;
            bVar6 = 0x4224a899 < uVar11;
            bVar7 = uVar11 == 0x4224a89a;
            iVar14 = -0x393e6d48;
            iVar12 = 0x79b84d23;
            goto LAB_00212990;
          }
          goto LAB_0020813c;
        }
        if (local_364 == -0x5e8dec05) {
          _objc_release(local_298);
          iVar14 = 0x226064d5;
        }
        else {
          if (local_364 != -0x5df23ef9) {
            if (local_364 == -0x5c91fb76) {
              _objc_release(local_d0);
              _objc_release(local_380);
              *local_370 = 0x230b033a;
            }
            goto LAB_0020813c;
          }
          _objc_release(local_268);
          iVar14 = -0x43735972;
        }
      }
      else {
        if (-0x5a4417af < local_364) {
          if (local_364 == -0x5a4417ae) goto LAB_0020e3b4;
          if (local_364 == -0x5999abb3) {
            *local_370 = 0xb199c18;
          }
          else if (local_364 == -0x594c7c97) {
            _objc_msgSend(local_130,local_178,local_1a8);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_380,local_178,uVar9);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar9);
            *local_370 = -0x741fcbfc;
          }
          goto LAB_0020813c;
        }
        if (local_364 == -0x5c79bc24) {
          local_1ba = _objc_msgSend(local_378,local_190,local_1b0);
          iVar14 = 0x44ef23af;
          goto LAB_002124b0;
        }
        if (local_364 != -0x5bc2095c) {
          if (local_364 == -0x5b06d4c5) {
            uVar11 = (uint)((ulong)(DAT_004af388 ^ DAT_004af38c) * 0x36a4e781 >> 0x3d) * 0xd1cd324 ^
                     0xf364c15f;
            bVar6 = 0x30ab92da < uVar11;
            bVar7 = uVar11 == 0x30ab92db;
            iVar12 = -0x5b06d4c5;
            iVar14 = 0x2b2eac2d;
            goto LAB_00212670;
          }
          goto LAB_0020813c;
        }
        local_211 = _objc_msgSend(local_378,local_360,local_210);
        iVar14 = 0x359363ed;
      }
LAB_002124b0:
      *local_370 = iVar14;
      goto LAB_0020813c;
    }
    if (local_364 < -0x772dd697) {
      if (local_364 < -0x7b631107) {
        if (local_364 < -0x7d4648a4) {
          if (local_364 == -0x7f281a0c) {
            uVar11 = 0;
            if (DAT_004af23c != 0) {
              uVar11 = DAT_004af238 / DAT_004af23c;
            }
            local_1d9 = local_1d8 == 0;
            iVar14 = -0x340fae59;
            if (0x99614fbc < (uVar11 + 0x7f43b633 ^ 0x7b6a5f2f) + 0x8a800d56) {
              iVar14 = -0x7f281a0c;
            }
            goto LAB_00212bb4;
          }
          if (local_364 == -0x7e3c9b20) {
            _objc_msgSend(local_378,PTR_s_sendMsgTextColorDark_0048b238);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,local_360,uVar9);
            *local_370 = -0x35de8cea;
          }
        }
        else if (local_364 == -0x7d4648a4) {
          *local_370 = -0x71c6282a;
        }
        else {
          if (local_364 == -0x7c87c658) {
            bVar7 = ((DAT_004af310 + DAT_004af314) * 0xefc9234 - 0xdcbd40U & 0xc70bb224) ==
                    0x298b30b2;
            iVar14 = 0x6b95402f;
            iVar12 = -0x6cba294;
            goto LAB_00212bb0;
          }
          if (local_364 == -0x7bdaf214) {
            *local_370 = -0x14bfc1cc;
          }
        }
        goto LAB_0020813c;
      }
      if (local_364 < -0x79573cad) {
        if (local_364 == -0x7b631107) {
          pIVar5 = pIVar5 + -0x10;
          uVar9 = _objc_retain(local_380);
          _objc_msgSend(uVar9,PTR_s_objectForKey__0048a370,
                        &PTR____CFConstantStringClassReference_004aee20);
          _objc_retainAutoreleasedReturnValue();
          *local_370 = -0x363db5e1;
          goto LAB_0020813c;
        }
        if (local_364 == -0x7afe126d) {
          iVar14 = 0x62ae6bff;
          if ((uint)((ulong)(DAT_004af3a0 * DAT_004af3a4 + 0xdf0e991eU ^ 0x2aab4c70) * 0x65f0057 >>
                    0x39) != 0x1c212e96) {
            iVar14 = 0x40a9ac87;
          }
          goto LAB_00212bb4;
        }
        if (local_364 != -0x7a23dc17) goto LAB_0020813c;
        bVar7 = 0x25659e06 <
                (((DAT_004af3e0 | DAT_004af3e4) & 0x1a30a93) * -0x33381490) / 0x3a03cc9c;
        iVar14 = -0x3efd6da;
        iVar12 = -0x27774f6a;
      }
      else {
        if (local_364 == -0x79573cad) {
          local_208 = PTR_s_setEnabledMsgColor__0048a000;
          *local_370 = 0x2861a797;
          goto LAB_0020813c;
        }
        if (local_364 == -0x7833bccb) {
          _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aebc0);
          ppuVar10 = (undefined **)_objc_retainAutoreleasedReturnValue();
          ppuVar1 = &PTR____CFConstantStringClassReference_004aede0;
          if (ppuVar10 != (undefined **)0x0) {
            ppuVar1 = ppuVar10;
          }
          _objc_msgSend(local_378,PTR_s_setAuth__0048b1c0,ppuVar1);
          _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aee00);
          _objc_retainAutoreleasedReturnValue();
          *local_370 = 0x2fa3a975;
          goto LAB_0020813c;
        }
        if (local_364 != -0x779e438f) goto LAB_0020813c;
        bVar7 = 0xe51701b6 < (DAT_004af4d0 & DAT_004af4d4 | 0x75078667) * -0x172c8643 + 0xe40a5234;
        iVar14 = 0x40b3c8fb;
        iVar12 = -0x55e5a4e5;
      }
LAB_00212adc:
      if (bVar7) {
        iVar14 = iVar12;
      }
      goto LAB_00212bb4;
    }
    if (local_364 < -0x73bb59a0) {
      if (local_364 < -0x74789f43) {
        if (local_364 == -0x772dd697) {
          *local_370 = -0x44892bc8;
        }
        else if (local_364 == -0x76c84fc6) {
          *local_370 = -0x37c3c678;
        }
        goto LAB_0020813c;
      }
      if (local_364 != -0x74789f43) {
        if (local_364 == -0x741fcbfc) {
          _objc_msgSend(local_130,local_178,local_1a8);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_380,local_178,uVar9);
          local_1b0 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          local_1b8 = PTR__OBJC_CLASS___NSString_0048c9b0;
          bVar6 = true;
          bVar7 = false;
          iVar12 = -0x594c7c97;
          iVar14 = -0x4766fdf3;
          goto LAB_00212670;
        }
        if (local_364 == -0x73cf8453) {
          local_199 = *(long *)*local_158 == local_168;
          bVar7 = 0x5488aaf0 <
                  ((DAT_004af198 | DAT_004af19c | 0x9542ea18) + 0xc0976598 & 0xcb585d32);
          iVar14 = -0x430ae738;
          iVar12 = -0x1b5e1199;
          goto LAB_00212adc;
        }
        goto LAB_0020813c;
      }
      uVar11 = 0;
      if (DAT_004af0ec != 0) {
        uVar11 = DAT_004af0e8 / DAT_004af0ec;
      }
      local_109 = local_108 == 0;
      bVar7 = 0x513457ac < ((uVar11 ^ 0x1a3a9db) + 0xf9a13fec | 0xfba9f423);
      iVar14 = -0x74789f43;
      iVar12 = -0x2c135553;
      goto LAB_00212adc;
    }
    if (-0x6fd05b7a < local_364) {
      if (local_364 == -0x6fd05b79) {
        uVar11 = DAT_004af378 | DAT_004af37c;
        local_269 = _objc_msgSend(local_378,local_360,local_268);
        iVar14 = -0x6fd05b79;
        if (0xa1b94bde < (uVar11 + 0x56176777 & 0x57518867) * 0x4519d372) {
          iVar14 = -0x1f7a0f3;
        }
        goto LAB_00212cf0;
      }
      if (local_364 == -0x6f20d558) {
        _objc_msgSend(local_378,local_2a8,local_299);
        iVar14 = 0x26457e47;
        goto LAB_002124b0;
      }
      if (local_364 == -0x6ea20c00) {
        _objc_msgSend(local_378,local_198,local_1b0,local_1a8);
        *local_370 = 0x2bfcc9a8;
      }
      goto LAB_0020813c;
    }
    if (local_364 == -0x73bb59a0) {
      *local_370 = 0x227c9a27;
      goto LAB_0020813c;
    }
    if (local_364 == -0x7273d302) {
      bVar7 = local_141 == '\0';
      iVar12 = 0x23ef213a;
      iVar14 = 0xd9e057;
      goto LAB_00212a0c;
    }
    if (local_364 != -0x71c6282a) goto LAB_0020813c;
    bVar7 = (uint)((ulong)(DAT_004af268 + DAT_004af26c + 0xfd2bce62U | 0xafabe4e0) * 0x33f680f9 >>
                  0x3d) == 0x85f2887b;
    iVar12 = -0x7d4648a4;
    iVar14 = 0x3c78247f;
  }
  else if (local_364 < 0x3cdc5f3b) {
    if (local_364 < 0x23ef213a) {
      if (local_364 < 0x106e8902) {
        if (0x4288654 < local_364) {
          if (local_364 < 0xd57437c) {
            if (local_364 < 0x4f18c5b) {
              if (local_364 == 0x4288655) {
                uVar11 = DAT_004af208 & DAT_004af20c;
                _objc_release(local_1b0);
                local_1c8 = local_358 + 1;
                iVar14 = 0x32f9e969;
                if (0x467ad859 < ((uVar11 ^ 0x3984a7e9) * 0x45c45d1c & 0xb6634194)) {
                  iVar14 = 0x4288655;
                }
                goto LAB_00212bb4;
              }
              if (local_364 != 0x44f9a40) goto LAB_0020813c;
              uVar11 = 0;
              if (DAT_004af2fc != 0) {
                uVar11 = DAT_004af2f8 / DAT_004af2fc;
              }
              local_240 = PTR_s_setEnabledMsgColor__0048a000;
              bVar7 = 0x93090a3 < ((uVar11 | 0x14a35099) / 0x795c4e99 | 0xd1749690);
              iVar14 = 0x106e8902;
              iVar12 = -0x633a347e;
            }
            else if (local_364 == 0x4f18c5b) {
              local_98 = DAT_004d1854;
              bVar7 = 0x1186ee1c <
                      ((DAT_004af028 + DAT_004af02c & 0x301bf82aU) * 0x55aeb204 ^ 0x1190dec2);
              iVar14 = 0x7f1dbfe1;
              iVar12 = -0x46db3982;
            }
            else {
              if (local_364 != 0xb199c18) {
                if (local_364 == 0xb589c17) {
                  uVar11 = DAT_004af448 & DAT_004af44c;
                  _objc_release(local_258);
                  IVar2 = local_380;
                  _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeae0);
                  lVar8 = _objc_retainAutoreleasedReturnValue();
                  _objc_msgSend(local_378,PTR_s_setHideSourceTitle__0048b250,lVar8 != 0);
                  _objc_release(lVar8);
                  _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeac0);
                  local_2c0 = _objc_retainAutoreleasedReturnValue();
                  local_2c8 = _objc_msgSend(local_2c0,PTR_s_integerValue_00489ce0);
                  local_2d0 = PTR_s_setSpace__0048b258;
                  bVar7 = 0xdc4528f5 < uVar11 / 0x1b021f1d + 0x436cbc31;
                  iVar12 = 0x3cdc5f3b;
                  iVar14 = -0x4df30921;
                  goto LAB_00212b4c;
                }
                goto LAB_0020813c;
              }
              uVar11 = 0;
              if (DAT_004af12c != 0) {
                uVar11 = DAT_004af128 / DAT_004af12c;
              }
              *local_120 = &PTR____CFConstantStringClassReference_004aed00;
              puVar4 = local_a8;
              local_a8[1] = &PTR____CFConstantStringClassReference_004aecc0;
              puVar13 = local_b0;
              local_b0[2] = &PTR____CFConstantStringClassReference_004aed80;
              puVar4[2] = &PTR____CFConstantStringClassReference_004aec60;
              local_128 = puVar13 + 3;
              bVar7 = 0xbc8c3e < ((uint)((ulong)uVar11 * 0xbcab891d >> 0x3f) | 0xcc2f94c8);
              iVar14 = 0x792e7504;
              iVar12 = -0x28f0a40e;
            }
          }
          else {
            if (local_364 < 0xf7caa8b) {
              if (local_364 == 0xd57437c) {
                _objc_msgSend(local_378,local_2d0,local_2c8);
                _objc_release(local_2c0);
                _objc_msgSend(IVar3,PTR_s_setIsLocalBubble__0048b260,1);
                _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aedc0);
                _objc_retainAutoreleasedReturnValue();
                iVar14 = 0x4d6f02b0;
              }
              else {
                if (local_364 != 0xe7ab59c) {
                  if (local_364 == 0xf1c22a8) {
                    bVar7 = 0xfc537d98 <
                            ((DAT_004af380 * DAT_004af384 + 0xb8cec4d8U) / 0xf9fcc3 & 0x156);
                    iVar14 = -0x5b06d4c5;
                    iVar12 = 0x5c88e66d;
                    goto LAB_00212adc;
                  }
                  goto LAB_0020813c;
                }
                _objc_msgSend(local_378,local_230,local_221);
                _objc_release(local_220);
                iVar14 = -0x1d32f687;
              }
              goto LAB_002124b0;
            }
            if (local_364 != 0xf7caa8b) {
              if (local_364 == 0xf7e8b30) {
                _objc_msgSend(local_378,PTR_s_msgTextColorDark_0048b228);
                _objc_retainAutoreleasedReturnValue();
                *local_370 = -0x2c40c2c9;
              }
              else if (local_364 == 0xfd251e9) {
                uVar11 = DAT_004af4c8 * DAT_004af4cc;
                _objc_release(local_318);
                _objc_msgSend(local_2f8,local_310,1);
                local_330 = _objc_retainAutoreleasedReturnValue();
                bVar7 = 0xe2ea2cf1 < uVar11 / 0x3f6543b8 + 0x141dfbc6;
                iVar12 = 0xfd251e9;
                iVar14 = 0x79a6a03e;
                goto LAB_00212b4c;
              }
              goto LAB_0020813c;
            }
            bVar7 = 0xaf747dc7 <
                    (DAT_004af0f0 + DAT_004af0f4 & 0x6ac6ef6U) * 0x1ca9c360 + 0xcdbc245d;
            iVar14 = -0x51c0c2b5;
            iVar12 = 0x220fbe21;
          }
          goto LAB_00212adc;
        }
        if (local_364 < 0x261999c) {
          if (local_364 < 0xd9e057) {
            if (local_364 == -0x122b11e) {
              *local_370 = -0x71c6282a;
            }
            else if (local_364 == 0xd31817) {
              *local_370 = 0x17c29a2b;
            }
          }
          else {
            if (local_364 == 0xd9e057) {
              iVar14 = 0x719aa09f;
              if ((DAT_004af140 ^ DAT_004af144) == 0xf4741da4) {
                iVar14 = -0x206e5912;
              }
              goto LAB_00212bb4;
            }
            if (local_364 == 0xef0914) {
              bVar7 = local_308 == 4;
              iVar12 = -0x779e438f;
              iVar14 = -0x47ff6416;
              goto LAB_0020fda0;
            }
            if (local_364 == 0x1d080dc) {
              uVar11 = DAT_004af278 | DAT_004af27c;
              local_1f9 = _objc_msgSend(local_378,local_360,local_1f8);
              bVar7 = 0x86f72107 < (uVar11 & 0x4083841) + 0x9f8fd92e;
              iVar14 = 0x4c5cd077;
              iVar12 = 0x11014599;
              goto LAB_00212adc;
            }
          }
          goto LAB_0020813c;
        }
        if (local_364 < 0x2ef7a8a) {
          if (local_364 == 0x261999c) {
            *local_370 = 0x2d5d1271;
            local_348 = local_150;
          }
          else if (local_364 == 0x2a5075c) {
            *local_370 = -0x332cf41d;
          }
          goto LAB_0020813c;
        }
        if (local_364 == 0x2ef7a8a) {
          local_350 = local_338;
          local_178 = PTR_s_objectForKeyedSubscript__00489d00;
          local_188 = PTR_s_isKindOfClass__00489c00;
          local_180 = PTR_s_class_00489650;
          local_198 = PTR_s_setValue_forKey__0048b1e8;
          local_190 = PTR_s_isValidString__0048b1e0;
          *local_370 = -0x63832eb6;
          local_340 = 0;
          goto LAB_0020813c;
        }
        if (local_364 != 0x331ba04) {
          if (local_364 == 0x3629554) {
            *local_370 = 0x74b55237;
          }
          goto LAB_0020813c;
        }
        bVar7 = 0x55df5ae6 <
                ((DAT_004af1c0 - DAT_004af1c4) * 0x74ee9f9e ^ 0x2f9b9eaeU) * -0x134b45d6;
        iVar12 = -0x594c7c97;
        iVar14 = -0x741fcbfc;
        goto LAB_00212b4c;
      }
      if (0x1c46bfaa < local_364) {
        if (local_364 < 0x216314e4) {
          if (local_364 < 0x1c69da18) {
            if (local_364 == 0x1c46bfab) {
              _objc_msgSend(local_378,local_360,local_268);
              *local_370 = -0x6fd05b79;
            }
            else if (local_364 == 0x1c5837cc) {
              uVar11 = (DAT_004af4a8 - DAT_004af4ac & 0x30aaff2cU) * 0x536351ca + 0xac7b3b6b;
              _objc_msgSend(local_2d8,PTR_s_componentsSeparatedByString__0048b268,
                            &PTR____CFConstantStringClassReference_004aeaa0);
              local_2f8 = _objc_retainAutoreleasedReturnValue();
              local_300 = PTR_s_count_00489538;
              bVar6 = 0x48b6af14 < uVar11;
              bVar7 = uVar11 == 0x48b6af15;
              iVar12 = 0x69e25311;
              iVar14 = 0x2ed64d99;
              goto LAB_00212670;
            }
            goto LAB_0020813c;
          }
          if (local_364 == 0x1c69da18) {
            *local_370 = 0x6b2f726e;
            goto LAB_0020813c;
          }
          if (local_364 == 0x2065d81d) {
            _objc_release(local_1e8);
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeb40);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar9,PTR_s_boolValue_0048b240);
            *local_370 = 0x108f4ff5;
            goto LAB_0020813c;
          }
          if (local_364 != 0x207f9b67) goto LAB_0020813c;
          bVar7 = 0x3c0365a0 <
                  ((uint)((ulong)(uint)(DAT_004af340 * DAT_004af344) * 0xbb59a9d >> 0x39) ^
                   0xa406280e | 0x13a9d7a0);
          iVar12 = 0x108f4ff5;
          iVar14 = 0x2065d81d;
        }
        else if (local_364 < 0x226064d5) {
          if (local_364 != 0x216314e4) {
            if (local_364 == 0x21a1f70c) {
              uVar11 = 0;
              if (DAT_004af42c != 0) {
                uVar11 = DAT_004af428 / DAT_004af42c;
              }
              _objc_msgSend(local_378,local_2b8,0);
              iVar14 = -0x785fee6;
              if (0xce53984b < (uVar11 * -0x6e2d411b + 0x7daee287) / 0x32491cf4) {
                iVar14 = 0x21a1f70c;
              }
              goto LAB_00212bb4;
            }
            if (local_364 == 0x220fbe21) {
              local_118 = PTR_s_setBubbleId__0048b1d8;
              bVar7 = 0x9d0dba60 <
                      (DAT_004af0f8 * DAT_004af0fc ^ 0xc2809012U | 0x1d6d6bad) * -0x47c88965;
              iVar12 = -0x51c0c2b5;
              iVar14 = 0x6de8551c;
              goto LAB_00212b4c;
            }
            goto LAB_0020813c;
          }
          bVar7 = 0x2a33a632 < (DAT_004af300 + DAT_004af304 + 0xac0deab0U ^ 0x1a503fe);
          iVar12 = 0x644ea9c7;
          iVar14 = -0x358957e4;
        }
        else {
          if (local_364 == 0x226064d5) {
            *local_370 = 0x36805bd5;
            goto LAB_0020813c;
          }
          if (local_364 == 0x227c9a27) {
            local_2d9 = local_2d8 == 0;
            iVar14 = -0x26a012dc;
            if (((DAT_004af468 ^ DAT_004af46c) * 0x48bc239f & 0x954c0204) < 0x5eb93b35) {
              iVar14 = 0x227c9a27;
            }
            goto LAB_00212bb4;
          }
          if (local_364 != 0x230b033a) goto LAB_0020813c;
          iVar14 = DAT_004af4f8 - DAT_004af4fc;
          _objc_release(local_d0);
          _objc_release(local_380);
          bVar7 = 0xf802375d < (iVar14 * 0x571eef8c + 0xa76dfa77U ^ 0xe1d8d47f);
          iVar12 = 0x230b033a;
          iVar14 = -0x695908de;
        }
        goto LAB_00212b4c;
      }
      if (local_364 < 0x114f6c68) {
        if (local_364 < 0x10cec197) {
          if (local_364 == 0x106e8902) {
            *local_370 = 0x44f9a40;
          }
          else if (local_364 == 0x108f4ff5) {
            _objc_release(local_1e8);
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeb40);
            local_248 = _objc_retainAutoreleasedReturnValue();
            local_249 = _objc_msgSend(local_248,PTR_s_boolValue_0048b240);
            *local_370 = -0x4ed46b46;
          }
        }
        else if (local_364 == 0x10cec197) {
          *local_370 = 0x4b98aa0e;
        }
        else {
          if (local_364 == 0x11014599) {
            bVar7 = local_1f9 == '\0';
            iVar12 = -0x79573cad;
            iVar14 = -0x3b316758;
            goto LAB_00212a0c;
          }
          if (local_364 == 0x11223966) {
            *local_370 = -0x34dfbe45;
          }
        }
        goto LAB_0020813c;
      }
      if (local_364 < 0x17c29a2b) {
        if (local_364 != 0x114f6c68) {
          if (local_364 == 0x11b3a8be) {
            _objc_msgSend(local_f0,local_f8);
            ppuVar10 = (undefined **)_objc_retainAutoreleasedReturnValue();
            _objc_release(local_f0);
            ppuVar1 = &PTR____CFConstantStringClassReference_004aeca0;
            if (ppuVar10 != (undefined **)0x0) {
              ppuVar1 = ppuVar10;
            }
            _objc_msgSend(local_378,PTR_s_setVersion__0048b1d0,ppuVar1);
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeda0);
            _objc_retainAutoreleasedReturnValue();
            iVar14 = 0x51753abe;
            goto LAB_002124b0;
          }
          if (local_364 == 0x13ed0eb0) {
            uVar11 = DAT_004af0a8 | DAT_004af0ac;
            _objc_msgSend(local_378,local_e0,local_d0);
            bVar7 = (uVar11 / 0xaeae54fc | 0x56273c0) == 0x86fe14b3;
            iVar12 = -0x9a4da37;
            iVar14 = 0x2a5075c;
            goto LAB_00212a0c;
          }
          goto LAB_0020813c;
        }
        local_1d8 = _objc_msgSend(local_130,local_138,local_b8,local_c0,0x10);
        iVar14 = 0x245cd4be;
        goto LAB_002124b0;
      }
      if (local_364 == 0x17c29a2b) {
        uVar11 = ((DAT_004af098 | DAT_004af09c) * 0x128d7f13 ^ 0xc9e9a0f) + 0x64004506;
        local_e0 = PTR_s_setName__0048b1b8;
        bVar6 = 0xad0504c4 < uVar11;
        bVar7 = uVar11 == 0xad0504c5;
        iVar14 = 0xd31817;
        iVar12 = 0x342a8127;
        goto LAB_00212990;
      }
      if (local_364 != 0x19e05e06) {
        if (local_364 == 0x1c44fc32) {
          _objc_msgSend(local_378,PTR_s_sendMsgTextColor_0048b230);
          _objc_retainAutoreleasedReturnValue();
          *local_370 = -0x1683276a;
        }
        goto LAB_0020813c;
      }
      bVar7 = local_1b9 == '\0';
      iVar12 = -0x574cc99b;
      iVar14 = -0x5c79bc24;
    }
    else {
      if (local_364 < 0x33779731) {
        if (local_364 < 0x2c292a71) {
          if (local_364 < 0x2893a273) {
            if (local_364 < 0x24a2d0f2) {
              if (local_364 == 0x23ef213a) {
                uVar11 = 0;
                if (DAT_004af164 != 0) {
                  uVar11 = DAT_004af160 / DAT_004af164;
                }
                uVar11 = (uint)((ulong)(uVar11 + 0x8de40497) * 0x381171ed >> 0x3d) ^ 0x3ad7c2fd;
                bVar6 = 0x70507bd2 < uVar11;
                bVar7 = uVar11 == 0x70507bd3;
                iVar14 = 0x7feda11b;
                iVar12 = 0x32963220;
                goto LAB_00212990;
              }
              if (local_364 == 0x245cd4be) {
                *local_370 = -0x7f281a0c;
              }
            }
            else {
              if (local_364 == 0x24a2d0f2) {
                bVar7 = local_99 == '\0';
                iVar12 = 0x60752b58;
                iVar14 = 0x553be465;
                goto LAB_00212a0c;
              }
              if (local_364 == 0x26457e47) {
                uVar11 = 0;
                if (DAT_004af3fc != 0) {
                  uVar11 = DAT_004af3f8 / DAT_004af3fc;
                }
                uVar11 = uVar11 * -0x7f4f270c & 0x6cefee6a | 0x64ebe46a;
                _objc_msgSend(local_378,local_2a8,local_299);
                bVar6 = 0x3278773b < uVar11;
                bVar7 = uVar11 == 0x3278773c;
                iVar12 = -0x6f20d558;
                iVar14 = 0x52b3fb82;
                goto LAB_00212670;
              }
              if (local_364 == 0x2861a797) {
                bVar7 = 0x4e4e37f0 < (DAT_004af280 - DAT_004af284) * -0x6d507dec + 0x4a9c9030U;
                iVar14 = -0x6d214b94;
                iVar12 = 0x757921b2;
                goto LAB_00212adc;
              }
            }
            goto LAB_0020813c;
          }
          if (local_364 < 0x2b2eac2d) {
            if (local_364 == 0x2893a273) {
              *local_370 = 0x226064d5;
            }
            else if (local_364 == 0x28bba0bb) {
              DAT_004ae6d3 = local_9b;
              DAT_004ae6d4 = DAT_004ae6b4 ^ 0x99;
              DAT_004ae6d5 = DAT_004ae6b5 ^ 0xea;
              DAT_004ae6d6 = DAT_004ae6b6 ^ 0x84;
              DAT_004ae6d7 = DAT_004ae6b7 ^ 0xe0;
              DAT_004ae6d8 = DAT_004ae6b8 ^ 0x44;
              DAT_004ae6d9 = DAT_004ae6b9 ^ 0xd4;
              DAT_004ae6da = DAT_004ae6ba ^ 0x4a;
              DAT_004ae6db = DAT_004ae6bb ^ 0xf9;
              DAT_004ae6dc = DAT_004ae6bc ^ 0xd3;
              DAT_004ae6dd = DAT_004ae6bd ^ 0xf7;
              DAT_004ae6de = DAT_004ae6be ^ 8;
              DAT_004ae6df = DAT_004ae6bf ^ 0xb0;
              DAT_004ae6e0 = DAT_004ae6c0 ^ 0x47;
              DAT_004ae6e1 = DAT_004ae6c1 ^ 0x49;
              DAT_004ae6e2 = DAT_004ae6c2 ^ 0x92;
              DAT_004ae6e3 = DAT_004ae6c3 ^ 0xbc;
              DAT_004ae6e4 = DAT_004ae6c4 ^ 0x19;
              *local_370 = -0x3707af90;
            }
            else if (local_364 == 0x2ab43041) {
              bVar7 = (DAT_004af2e0 - DAT_004af2e4 & 0x9ff8dbe7U | 0x93d8dbc7) == 0xdaf46a8d;
              iVar12 = -0x3607a05;
              iVar14 = 0x67e18169;
LAB_0020fda0:
              if (!bVar7) {
                iVar14 = iVar12;
              }
              goto LAB_00212bb4;
            }
            goto LAB_0020813c;
          }
          if (local_364 == 0x2b2eac2d) {
            bVar7 = local_269 == '\0';
            iVar14 = -0x15ad0aa4;
            iVar12 = -0x504426d6;
            goto LAB_002126a4;
          }
          if (local_364 == 0x2b639826) {
            *local_370 = -0x34afeb2c;
            goto LAB_0020813c;
          }
          if (local_364 != 0x2bfcc9a8) goto LAB_0020813c;
          bVar7 = 0x500f67fe < ((DAT_004af1f0 | DAT_004af1f4) & 0xc764080 ^ 0xb2505734);
          iVar12 = 0x74b55237;
          iVar14 = 0x3629554;
        }
        else {
          if (0x2fa3a974 < local_364) {
            if (local_364 < 0x32cea066) {
              if (local_364 == 0x2fa3a975) {
                uVar11 = DAT_004af0c8 ^ DAT_004af0cc;
                _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aebc0);
                local_e8 = (undefined **)_objc_retainAutoreleasedReturnValue();
                ppuVar1 = &PTR____CFConstantStringClassReference_004aede0;
                if (local_e8 != (undefined **)0x0) {
                  ppuVar1 = local_e8;
                }
                _objc_msgSend(local_378,PTR_s_setAuth__0048b1c0,ppuVar1);
                _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aee00);
                local_f0 = _objc_retainAutoreleasedReturnValue();
                local_f8 = PTR_s_stringValue_0048b1c8;
                uVar11 = (uint)((ulong)(uVar11 + 0xd5a7a34a) * 0x691b3a57 >> 0x3e);
                bVar6 = 0xb38ff43 < uVar11;
                bVar7 = uVar11 == 0xb38ff44;
                iVar14 = 0x2fa3a975;
                iVar12 = -0x51422ba4;
                goto LAB_00212990;
              }
              if (local_364 == 0x2fd7d1fc) {
                *local_370 = -0x141a40b5;
              }
              else if (local_364 == 0x32963220) {
                uVar11 = 0;
                if (DAT_004af16c != 0) {
                  uVar11 = DAT_004af168 / DAT_004af16c;
                }
                local_158 = local_b8 + 2;
                bVar7 = 0xf465bce8 <
                        (uint)((ulong)(uVar11 + 0xa54ef51f) * 0x3e0717a9 >> 0x3c) + 0x4d08ab82;
                iVar12 = 0x7feda11b;
                iVar14 = 0x3a711240;
                goto LAB_00212b4c;
              }
            }
            else if (local_364 == 0x32cea066) {
              *local_370 = -0x3fa00081;
            }
            else if (local_364 == 0x32f76c74) {
              *local_370 = -0x74789f43;
            }
            else if (local_364 == 0x32f9e969) {
              *local_370 = 0x6e3d8876;
            }
            goto LAB_0020813c;
          }
          if (local_364 < 0x2d9e27c8) {
            if (local_364 == 0x2c292a71) {
              bVar7 = false;
              iVar14 = 0x503eefe1;
              iVar12 = 0x53fd17c7;
              goto LAB_00212adc;
            }
            if (local_364 == 0x2d5d1271) {
              local_360 = local_348;
              uVar11 = (DAT_004af240 ^ DAT_004af244 ^ 0x92857bc7) + 0xfe13bbd2;
              bVar6 = 0xf5aed6de < uVar11;
              bVar7 = uVar11 == 0xf5aed6df;
              iVar12 = -0x3141f267;
              iVar14 = 0x3585244b;
              goto LAB_00212670;
            }
            goto LAB_0020813c;
          }
          if (local_364 != 0x2d9e27c8) {
            if (local_364 == 0x2ed64d99) {
              *local_370 = -0x10497b5a;
            }
            else if (local_364 == 0x2f3047ab) {
              *local_370 = -0x172cdc9c;
            }
            goto LAB_0020813c;
          }
          bVar7 = 0xb1f5f4e0 <
                  ((DAT_004af440 ^ DAT_004af444) + 0xbae63e2a | 0x42ac7132) * -0x1ea3bee6;
          iVar12 = 0x3cdc5f3b;
          iVar14 = 0xb589c17;
        }
        goto LAB_00212b4c;
      }
      if (0x3763ee18 < local_364) {
        if (local_364 < 0x3a85b643) {
          if (local_364 < 0x3986c3dd) {
            if (local_364 == 0x3763ee19) {
              *local_370 = 0x5ae6f284;
            }
            else if (local_364 == 0x39309447) {
              bVar7 = local_289 == '\0';
              iVar14 = -0x7a23dc17;
              iVar12 = -0x4f5e7d3c;
              goto LAB_002126a4;
            }
            goto LAB_0020813c;
          }
          if (local_364 != 0x3986c3dd) {
            if (local_364 == 0x39c924f2) {
              bVar7 = 0x83cd24e3 <
                      ((uint)((ulong)(DAT_004af2d0 ^ DAT_004af2d4) * 0x15df70e1 >> 0x3b) ^
                      0x651a1857) * -0xbb3d715;
              iVar12 = 0x6542dbfd;
              iVar14 = 0x5266c2a9;
              goto LAB_00212b4c;
            }
            if (local_364 == 0x3a711240) {
              *local_370 = -0x341f7b12;
            }
            goto LAB_0020813c;
          }
          uVar11 = 0;
          if (DAT_004af044 != 0) {
            uVar11 = DAT_004af040 / DAT_004af044;
          }
          uVar11 = (uVar11 + 0xb8ef55a2 ^ 0x24375529) + 0x75766e02;
          bVar6 = 0x9f3a84fc < uVar11;
          bVar7 = uVar11 == 0x9f3a84fd;
          iVar12 = -0x34afeb2c;
          iVar14 = 0x2b639826;
        }
        else {
          if (local_364 < 0x3c309f71) {
            if (local_364 == 0x3a85b643) {
              bVar7 = ((DAT_004af490 - DAT_004af494 ^ 0xa088d411U) & 0xb2a8fe79) == 0xbc938323;
              iVar12 = 0x5e119f3d;
              iVar14 = 0x32cea066;
              goto LAB_00212a0c;
            }
            if (local_364 == 0x3be29727) {
              local_99 = local_98 == 0;
              bVar7 = ((DAT_004af038 - DAT_004af03c) + 0x66f704e6U & 0x821d80f7 | 0x1c80c0) ==
                      0x143233a2;
              iVar14 = -0x494cc03;
              iVar12 = -0x19b7fe4e;
              goto LAB_00212bb0;
            }
            if (local_364 == 0x3c2e4a0f) {
              iVar14 = 0x21a1f70c;
              if (((DAT_004af420 | DAT_004af424 | 0xf9b1f262) * -0x2b23a643 | 0x12c957d6) <
                  0x229b1786) {
                iVar14 = -0x32220df2;
              }
              goto LAB_00212bb4;
            }
            goto LAB_0020813c;
          }
          if (local_364 == 0x3c309f71) {
            *local_370 = -0x5a4417ae;
            goto LAB_0020813c;
          }
          if (local_364 == 0x3c78247f) {
            *local_370 = -0x765a597;
            goto LAB_0020813c;
          }
          if (local_364 != 0x3cb63e30) goto LAB_0020813c;
          uVar11 = (DAT_004af218 | DAT_004af21c) ^ 0x14c17f3d;
          local_1c9 = local_1c8 == local_350;
          bVar6 = 0x8318368 < uVar11;
          bVar7 = uVar11 == 0x8318369;
          iVar12 = 0x6b5b9dde;
          iVar14 = -0x329b843d;
        }
        goto LAB_00212670;
      }
      if (local_364 < 0x359282c5) {
        if (local_364 < 0x33da896c) {
          if (local_364 == 0x33779731) {
            *local_370 = -0x35de8cea;
          }
          else if (local_364 == 0x33bf6748) {
            local_2e9 = _objc_msgSend(local_2d8,local_2e8,
                                      &PTR____CFConstantStringClassReference_004aeaa0);
            *local_370 = -0x433b2459;
          }
          goto LAB_0020813c;
        }
        if (local_364 != 0x33da896c) {
          if (local_364 == 0x342a8127) {
            *local_370 = -0x346195ef;
          }
          else if (local_364 == 0x3585244b) {
            _objc_release(local_130);
            IVar2 = local_380;
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aebe0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            IVar3 = local_378;
            _objc_msgSend(local_378,PTR_s_setHongbaoTextColor__0048b1f0,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeba0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setHongbaoTextColorDark__0048b1f8,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb80);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setMsgTextColor__0048b200,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aec40);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setMsgTextColorDark__0048b208,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aece0);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendMsgTextColor__0048b210,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeb60);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,PTR_s_setSendMsgTextColorDark__0048b218,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(IVar3,PTR_s_msgTextColor_0048b220);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(IVar3,local_360,uVar9);
            *local_370 = -0x3141f267;
          }
          goto LAB_0020813c;
        }
        iVar14 = -0xc8ac6af;
        if (((DAT_004af350 - DAT_004af354) + 0x31a35aa4U & 0x774f7c55) < 0xbcfa6c13) {
          iVar14 = -0x48b17599;
        }
        goto LAB_00212bb4;
      }
      if (0x3630cd98 < local_364) {
        if (local_364 == 0x3630cd99) {
          *local_370 = -0x1020a31c;
        }
        else if (local_364 == 0x36805bd5) {
          _objc_release(local_288);
          *local_370 = -0x1b672ff9;
        }
        else if (local_364 == 0x36a03b70) {
          bVar7 = ((DAT_004af400 | DAT_004af404) * 0xc2d6f76 + 0xd25c9a58 | 0x4b4361f4) ==
                  0xd37ab1a1;
          iVar12 = -0x16aa4ac1;
          iVar14 = -0x437d727d;
          goto LAB_00212a0c;
        }
        goto LAB_0020813c;
      }
      if (local_364 == 0x359282c5) {
        _objc_msgSend(local_378,local_280);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(IVar3,local_360,uVar9);
        goto LAB_00210e90;
      }
      if (local_364 != 0x359363ed) {
        if (local_364 == 0x35ada2d6) {
          *local_370 = -0x3542dce1;
        }
        goto LAB_0020813c;
      }
      bVar7 = local_211 == '\0';
      iVar12 = 0x3dcb39f2;
      iVar14 = 0x33779731;
    }
  }
  else {
    iVar14 = 0x5ae6f284;
    if (local_364 < 0x601c37c1) {
      if (local_364 < 0x51753abe) {
        if (0x46e877be < local_364) {
          if (local_364 < 0x4c8ebe57) {
            if (0x4b0eef93 < local_364) {
              if (local_364 == 0x4b0eef94) {
                *local_370 = -0x6ca1a767;
              }
              else {
                if (local_364 == 0x4b98aa0e) {
                  uVar11 = 0;
                  if (DAT_004af0c4 != 0) {
                    uVar11 = DAT_004af0c0 / DAT_004af0c4;
                  }
                  bVar7 = 0xa00aa4b9 < (uVar11 * -0xe98f559 & 0xf4219bf3) + 0x5fe38fc8;
                  iVar14 = 0x2fa3a975;
                  iVar12 = -0x7833bccb;
                  goto LAB_00212adc;
                }
                if (local_364 == 0x4c5cd077) {
                  _objc_msgSend(local_378,local_360,local_1f8);
                  *local_370 = 0x1d080dc;
                }
              }
              goto LAB_0020813c;
            }
            if (local_364 != 0x46e877bf) {
              if (local_364 == 0x47e160a3) {
                bVar7 = 0x39c7cce3 <
                        ((DAT_004af410 | DAT_004af414) * 0x61523b8c ^ 0xb739e201) + 0x2a888834;
                iVar12 = -0x6c955790;
                iVar14 = -0x12b0229d;
                goto LAB_00212b4c;
              }
              goto LAB_0020813c;
            }
            uVar11 = 0;
            if (DAT_004af374 != 0) {
              uVar11 = DAT_004af370 / DAT_004af374;
            }
            bVar7 = 0xe5e76872 <
                    ((uint)((ulong)uVar11 * 0x41f16287 >> 0x3e) | 0xe0feedf4) / 0x6365c039;
            iVar14 = -0x6fd05b79;
            iVar12 = 0x1c46bfab;
          }
          else {
            if (0x4eedb738 < local_364) {
              if (local_364 == 0x4eedb739) {
                uVar11 = (DAT_004af050 - DAT_004af054) * 0x682f38ee ^ 0x746f3241;
                bVar6 = 0xec2403c4 < uVar11;
                bVar7 = uVar11 == 0xec2403c5;
                iVar14 = -0xadd93b3;
                iVar12 = -0xdea64fa;
                goto LAB_00212990;
              }
              if (local_364 == 0x4f1aeee3) {
                bVar7 = ((DAT_004af220 - DAT_004af224) * -0x5b218aa3 + 0xc03016c4U & 0x619933d0) ==
                        0xba010219;
                iVar14 = -0xa9253a4;
                iVar12 = -0x1f6b2f02;
                goto LAB_002126a4;
              }
              if (local_364 == 0x503eefe1) {
                _objc_release(local_1f8);
                *local_370 = 0x2f3047ab;
              }
              goto LAB_0020813c;
            }
            if (local_364 == 0x4c8ebe57) {
              *local_370 = 0x42135646;
              goto LAB_0020813c;
            }
            if (local_364 != 0x4d6f02b0) {
              if (local_364 == 0x4e12e172) {
                uVar11 = ((DAT_004af250 ^ DAT_004af254) + 0x43b0af04 | 0x3d122d38) / 0x26ddd2e5;
                bVar6 = uVar11 < 0x943d60a6;
                bVar7 = uVar11 == 0x943d60a5;
                iVar12 = 0xf7e8b30;
                iVar14 = -0x2c40c2c9;
                goto LAB_00212670;
              }
              goto LAB_0020813c;
            }
            uVar11 = DAT_004af458 | DAT_004af45c;
            _objc_msgSend(local_378,local_2d0,local_2c8);
            _objc_release(local_2c0);
            _objc_msgSend(IVar3,PTR_s_setIsLocalBubble__0048b260,1);
            _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aedc0);
            local_2d8 = _objc_retainAutoreleasedReturnValue();
            bVar7 = 0x68e3762 < ((uVar11 | 0xbff0a6ed) ^ 0xd38eb835) + 0x9ccad3fc;
            iVar14 = 0xd57437c;
            iVar12 = -0x18de139a;
          }
          goto LAB_00212adc;
        }
        if (local_364 < 0x3f94d29b) {
          if (local_364 < 0x3d550abf) {
            if (local_364 == 0x3cdc5f3b) {
              _objc_release(local_258);
              IVar2 = local_380;
              _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeae0);
              lVar8 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_378,PTR_s_setHideSourceTitle__0048b250,lVar8 != 0);
              _objc_release(lVar8);
              _objc_msgSend(IVar2,local_c8,&PTR____CFConstantStringClassReference_004aeac0);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar9,PTR_s_integerValue_00489ce0);
              *local_370 = 0xb589c17;
            }
            else if (local_364 == 0x3ceb5963) {
              *local_370 = 0x51753abe;
            }
          }
          else if (local_364 == 0x3d550abf) {
LAB_0020e3b4:
            *local_370 = 0x2c292a71;
          }
          else if (local_364 == 0x3d9a87aa) {
            _objc_msgSend(local_378,local_238,0);
            *local_370 = -0x503fd191;
          }
          else if (local_364 == 0x3dcb39f2) {
            local_238 = PTR_s_setEnabledMsgColor__0048a000;
            *local_370 = -0x27d69113;
          }
          goto LAB_0020813c;
        }
        if (0x42135645 < local_364) {
          if (local_364 == 0x42135646) {
            local_168 = *local_160;
            local_170 = local_b8 + 1;
            bVar7 = 0x85aa5bb0 <
                    ((DAT_004af188 & DAT_004af18c) + 0x2bc7497c ^ 0x8ab2e452) / 0x1b0d8217;
            iVar12 = 0x4c8ebe57;
            iVar14 = 0x6cdaa20a;
            goto LAB_00212b4c;
          }
          if (local_364 == 0x44ef23af) {
            uVar11 = DAT_004af1e0 + DAT_004af1e4 + 0x447606U & 0x8144504;
            bVar6 = 0x8b615482 < uVar11;
            bVar7 = uVar11 == 0x8b615483;
            iVar12 = 0x688a40d0;
            iVar14 = 0x656e5d4d;
            goto LAB_00212670;
          }
          if (local_364 == 0x467b57b1) {
            *local_370 = 0x7cb21099;
          }
          goto LAB_0020813c;
        }
        if (local_364 == 0x3f94d29b) {
          uVar11 = (DAT_004af108 - DAT_004af10c) + 0x6438b6bbU ^ 0x578e258a;
          _objc_msgSend(local_378,local_118,local_108);
          bVar6 = 0x7d66e971 < uVar11;
          bVar7 = uVar11 == 0x7d66e972;
          iVar14 = 0x7aa3a429;
          iVar12 = -0x421c1773;
          goto LAB_00212990;
        }
        if (local_364 == 0x40a9ac87) {
          iVar14 = -0x3f23ae04;
          if (0xa0f343f2 < ((DAT_004af3a8 * DAT_004af3ac + 0xa9c5fc87U ^ 0xb2294e42) & 0xb23bdfe2))
          {
            iVar14 = 0x40a9ac87;
          }
          goto LAB_00212bb4;
        }
        if (local_364 != 0x40b3c8fb) goto LAB_0020813c;
        uVar11 = DAT_004af4d8 ^ DAT_004af4dc;
        _objc_release(local_2f8);
        bVar7 = 0xd83aef96 < (uVar11 | 0xb67869) / 0x132f4991 + 0xd751aa5b;
        iVar12 = 0x40b3c8fb;
        iVar14 = -0x38612b67;
        goto LAB_00212b4c;
      }
      if (local_364 < 0x5796c878) {
        if (local_364 < 0x53fd17c7) {
          if (local_364 < 0x5266c2a9) {
            if (local_364 == 0x51753abe) {
              iVar14 = DAT_004af0d8 + DAT_004af0dc;
              _objc_msgSend(local_f0,local_f8);
              local_100 = (undefined **)_objc_retainAutoreleasedReturnValue();
              _objc_release(local_f0);
              ppuVar1 = &PTR____CFConstantStringClassReference_004aeca0;
              if (local_100 != (undefined **)0x0) {
                ppuVar1 = local_100;
              }
              _objc_msgSend(local_378,PTR_s_setVersion__0048b1d0,ppuVar1);
              _objc_msgSend(local_380,local_c8,&PTR____CFConstantStringClassReference_004aeda0);
              local_108 = _objc_retainAutoreleasedReturnValue();
              bVar7 = 0xf7c7e8d < iVar14 + 0x5a4999d2U;
              iVar14 = 0x11b3a8be;
              iVar12 = -0xa27e330;
              goto LAB_00212adc;
            }
            if (local_364 == 0x5220474f) {
LAB_0020d8ec:
              *local_370 = 0x39c924f2;
            }
          }
          else {
            if (local_364 == 0x5266c2a9) {
              iVar14 = DAT_004af2d8 + DAT_004af2dc;
              _objc_release(local_210);
              bVar7 = (iVar14 * 0x1fb7cef0 + 0x42c52b53U) / 0x3671f96c == 0x303ce76c;
              iVar14 = 0x6542dbfd;
              iVar12 = -0x2842cd68;
              goto LAB_00212bb0;
            }
            if (local_364 == 0x52b3fb82) {
              *local_370 = -0x5e8dec05;
            }
            else if (local_364 == 0x52c66737) {
              *local_370 = -0x54b6cbb4;
            }
          }
          goto LAB_0020813c;
        }
        if (local_364 < 0x55c5c926) {
          if (local_364 == 0x53fd17c7) {
            _objc_release(local_1f8);
            *local_370 = 0x503eefe1;
          }
          else {
            if (local_364 == 0x5426550b) {
              uVar11 = (DAT_004af100 & DAT_004af104) / 0x6ef8fefb | 0xd8161964;
              bVar6 = 0x214ca756 < uVar11;
              bVar7 = uVar11 == 0x214ca757;
              iVar12 = 0x7aa3a429;
              iVar14 = 0x3f94d29b;
              goto LAB_00212670;
            }
            if (local_364 == 0x553be465) {
              DAT_004aea84 = DAT_004aea7a ^ 0xa73f;
              DAT_004aea86 = DAT_004aea7c ^ 0xe874;
              DAT_004aea88 = DAT_004aea7e ^ 0x60f8;
              DAT_004aea8a = DAT_004aea80 ^ 0x7f32;
              DAT_004aea8c = DAT_004aea82 ^ 0xc8d4;
              DAT_004aea6b = DAT_004aea5c ^ 0x2f;
              DAT_004aea6c = DAT_004aea5d ^ 0x26;
              DAT_004aea6d = DAT_004aea5e ^ 0xfc;
              DAT_004aea6e = DAT_004aea5f ^ 0x82;
              DAT_004aea6f = DAT_004aea60 ^ 99;
              DAT_004aea70 = DAT_004aea61 ^ 0xa7;
              DAT_004aea71 = DAT_004aea62 ^ 0xc6;
              DAT_004aea72 = DAT_004aea63 ^ 0x38;
              DAT_004aea73 = DAT_004aea64 ^ 0xfb;
              DAT_004aea74 = DAT_004aea65 ^ 0xbc;
              DAT_004aea75 = DAT_004aea66 ^ 0xaa;
              DAT_004aea76 = DAT_004aea67 ^ 0x13;
              DAT_004aea77 = DAT_004aea68 ^ 0xd9;
              DAT_004aea78 = DAT_004aea69 ^ 0xe7;
              DAT_004aea79 = DAT_004aea6a ^ 0xe0;
              DAT_004aea41 = DAT_004aea36 ^ 0x75;
              DAT_004aea42 = DAT_004aea37 ^ 0xcf;
              DAT_004aea43 = DAT_004aea38 ^ 0xe;
              DAT_004aea44 = DAT_004aea39 ^ 0xc3;
              DAT_004aea45 = DAT_004aea3a ^ 0xb3;
              DAT_004aea46 = DAT_004aea3b ^ 0xbb;
              DAT_004aea47 = DAT_004aea3c ^ 0x59;
              DAT_004aea48 = DAT_004aea3d ^ 0x39;
              DAT_004aea49 = DAT_004aea3e ^ 0xb;
              DAT_004aea4a = DAT_004aea3f ^ 5;
              DAT_004aea4b = DAT_004aea40 ^ 0x4b;
              DAT_004aea01 = DAT_004ae9fc ^ 0x65;
              DAT_004aea02 = DAT_004ae9fd ^ 0xf4;
              DAT_004aea03 = DAT_004ae9fe ^ 0xd7;
              DAT_004aea04 = DAT_004ae9ff ^ 0x21;
              DAT_004aea05 = DAT_004aea00 ^ 0xb6;
              DAT_004aea15 = DAT_004aea06 ^ 0x89;
              DAT_004aea16 = DAT_004aea07 ^ 0xf6;
              DAT_004aea17 = DAT_004aea08 ^ 0x5a;
              DAT_004aea18 = DAT_004aea09 ^ 0x83;
              DAT_004aea19 = DAT_004aea0a ^ 0xaa;
              DAT_004aea1a = DAT_004aea0b ^ 0x11;
              DAT_004aea1b = DAT_004aea0c ^ 0xa4;
              DAT_004aea1c = DAT_004aea0d ^ 0xa3;
              DAT_004aea1d = DAT_004aea0e ^ 2;
              DAT_004aea1e = DAT_004aea0f ^ 0x5f;
              DAT_004aea1f = DAT_004aea10 ^ 0xe9;
              DAT_004aea20 = DAT_004aea11 ^ 0x1d;
              DAT_004aea21 = DAT_004aea12 ^ 0xc9;
              DAT_004aea22 = DAT_004aea13 ^ 0x5d;
              DAT_004aea23 = DAT_004aea14 ^ 0x7b;
              DAT_004ae9e2 = DAT_004ae9d2 ^ 0xca;
              DAT_004ae9e3 = DAT_004ae9d3 ^ 0x8e;
              DAT_004ae9e4 = DAT_004ae9d4 ^ 0xb0;
              DAT_004ae9e5 = DAT_004ae9d5 ^ 0x8b;
              DAT_004ae9e6 = DAT_004ae9d6 ^ 0x85;
              DAT_004ae9e7 = DAT_004ae9d7 ^ 0xfa;
              DAT_004ae9e8 = DAT_004ae9d8 ^ 0x87;
              DAT_004ae9e9 = DAT_004ae9d9 ^ 0x5f;
              DAT_004ae9ea = DAT_004ae9da ^ 0x27;
              DAT_004ae9eb = DAT_004ae9db ^ 0xa7;
              DAT_004ae9ec = DAT_004ae9dc ^ 0x97;
              DAT_004ae9ed = DAT_004ae9dd ^ 0xe;
              DAT_004ae9ee = DAT_004ae9de ^ 0xdd;
              DAT_004ae9ef = DAT_004ae9df ^ 0x7c;
              DAT_004ae9f0 = DAT_004ae9e0 ^ 5;
              DAT_004ae9f1 = DAT_004ae9e1 ^ 0x36;
              DAT_004ae9c3 = DAT_004ae9b4 ^ 0x31;
              DAT_004ae9c4 = DAT_004ae9b5 ^ 0xa6;
              DAT_004ae9c5 = DAT_004ae9b6 ^ 0x9a;
              DAT_004ae9c6 = DAT_004ae9b7 ^ 0x66;
              DAT_004ae9c7 = DAT_004ae9b8 ^ 0x17;
              DAT_004ae9c8 = DAT_004ae9b9 ^ 0xf4;
              DAT_004ae9c9 = DAT_004ae9ba ^ 0xd0;
              DAT_004ae9ca = DAT_004ae9bb ^ 0xa0;
              DAT_004ae9cb = DAT_004ae9bc ^ 0x5e;
              DAT_004ae9cc = DAT_004ae9bd ^ 0x25;
              DAT_004ae9cd = DAT_004ae9be ^ 0x6b;
              DAT_004ae9ce = DAT_004ae9bf ^ 0xdd;
              DAT_004ae9cf = DAT_004ae9c0 ^ 0x97;
              DAT_004ae9d0 = DAT_004ae9c1 ^ 0xbe;
              DAT_004ae9d1 = DAT_004ae9c2 ^ 0x22;
              DAT_004ae780 = DAT_004ae760 ^ 4;
              DAT_004ae781 = DAT_004ae761 ^ 0xb2;
              DAT_004ae782 = DAT_004ae762 ^ 0xed;
              DAT_004ae783 = DAT_004ae763 ^ 0xca;
              DAT_004ae784 = DAT_004ae764 ^ 0xd1;
              DAT_004ae785 = DAT_004ae765 ^ 0x72;
              DAT_004ae786 = DAT_004ae766 ^ 0x73;
              DAT_004ae787 = DAT_004ae767 ^ 0x2a;
              DAT_004ae788 = DAT_004ae768 ^ 0xfd;
              DAT_004ae789 = DAT_004ae769 ^ 0xe0;
              DAT_004ae78a = DAT_004ae76a ^ 0x7e;
              DAT_004ae78b = DAT_004ae76b ^ 0x90;
              DAT_004ae78c = DAT_004ae76c ^ 0xfe;
              DAT_004ae78d = DAT_004ae76d ^ 0xe5;
              DAT_004ae78e = DAT_004ae76e ^ 0x19;
              DAT_004ae78f = DAT_004ae76f ^ 0x9f;
              DAT_004ae790 = DAT_004ae770 ^ 0x11;
              DAT_004ae791 = DAT_004ae771 ^ 0x2a;
              DAT_004ae792 = DAT_004ae772 ^ 0xd9;
              DAT_004ae793 = DAT_004ae773 ^ 0x8f;
              DAT_004ae9a0 = DAT_004ae980 ^ 0xd8;
              DAT_004ae9a1 = DAT_004ae981 ^ 0xdb;
              DAT_004ae9a2 = DAT_004ae982 ^ 0x30;
              DAT_004ae9a3 = DAT_004ae983 ^ 0x3d;
              DAT_004ae9a4 = DAT_004ae984 ^ 0xb;
              DAT_004ae9a5 = DAT_004ae985 ^ 0xe7;
              DAT_004ae9a6 = DAT_004ae986 ^ 0x6a;
              DAT_004ae9a7 = DAT_004ae987 ^ 0x73;
              DAT_004ae9a8 = DAT_004ae988 ^ 0x28;
              DAT_004ae9a9 = DAT_004ae989 ^ 0x58;
              DAT_004ae9aa = DAT_004ae98a ^ 0x16;
              DAT_004ae9ab = DAT_004ae98b ^ 0x4a;
              DAT_004ae9ac = DAT_004ae98c ^ 0xca;
              DAT_004ae9ad = DAT_004ae98d ^ 0xbd;
              DAT_004ae9ae = DAT_004ae98e ^ 199;
              DAT_004ae9af = DAT_004ae98f ^ 0xa5;
              DAT_004ae9b0 = DAT_004ae990 ^ 0xaf;
              DAT_004ae9b1 = DAT_004ae991 ^ 0x71;
              DAT_004ae9b2 = DAT_004ae992 ^ 0x75;
              DAT_004ae9b3 = DAT_004ae993 ^ 0x5b;
              DAT_004ae840 = DAT_004ae820 ^ 0x2d;
              DAT_004ae841 = DAT_004ae821 ^ 0x56;
              DAT_004ae842 = DAT_004ae822 ^ 0x16;
              DAT_004ae843 = DAT_004ae823 ^ 0xc2;
              DAT_004ae844 = DAT_004ae824 ^ 0x99;
              DAT_004ae845 = DAT_004ae825 ^ 0xb8;
              DAT_004ae846 = DAT_004ae826 ^ 0xd2;
              DAT_004ae847 = DAT_004ae827 ^ 0x2f;
              DAT_004ae848 = DAT_004ae828 ^ 0xba;
              DAT_004ae849 = DAT_004ae829 ^ 0xa8;
              DAT_004ae84a = DAT_004ae82a ^ 0x1f;
              DAT_004ae84b = DAT_004ae82b ^ 0x4d;
              DAT_004ae84c = DAT_004ae82c ^ 0x23;
              DAT_004ae84d = DAT_004ae82d ^ 0xda;
              DAT_004ae84e = DAT_004ae82e ^ 0xf9;
              DAT_004ae84f = DAT_004ae82f ^ 0x45;
              DAT_004ae850 = DAT_004ae830 ^ 0xa5;
              DAT_004ae851 = DAT_004ae831 ^ 0x4b;
              DAT_004ae852 = DAT_004ae832 ^ 0xa2;
              DAT_004ae853 = DAT_004ae833 ^ 0xd;
              DAT_004ae854 = DAT_004ae834 ^ 0x34;
              DAT_004ae855 = DAT_004ae835 ^ 0x4d;
              DAT_004ae856 = DAT_004ae836 ^ 0xf5;
              DAT_004ae857 = DAT_004ae837 ^ 0x71;
              DAT_004ae960 = DAT_004ae940 ^ 0xb8;
              DAT_004ae961 = DAT_004ae941 ^ 0xc2;
              DAT_004ae962 = DAT_004ae942 ^ 0xd3;
              DAT_004ae963 = DAT_004ae943 ^ 0xae;
              DAT_004ae964 = DAT_004ae944 ^ 0x42;
              DAT_004ae965 = DAT_004ae945 ^ 0x4c;
              DAT_004ae966 = DAT_004ae946 ^ 0x69;
              DAT_004ae967 = DAT_004ae947 ^ 0x74;
              DAT_004ae968 = DAT_004ae948 ^ 0x6c;
              DAT_004ae969 = DAT_004ae949 ^ 0xbb;
              DAT_004ae96a = DAT_004ae94a ^ 0xc4;
              DAT_004ae96b = DAT_004ae94b ^ 0x41;
              DAT_004ae96c = DAT_004ae94c ^ 0xac;
              DAT_004ae96d = DAT_004ae94d ^ 0xe7;
              DAT_004ae96e = DAT_004ae94e ^ 0x66;
              DAT_004ae96f = DAT_004ae94f ^ 0xfb;
              DAT_004ae970 = DAT_004ae950 ^ 0xc4;
              DAT_004ae971 = DAT_004ae951 ^ 0x28;
              DAT_004ae972 = DAT_004ae952 ^ 0xd8;
              DAT_004ae920 = DAT_004ae900 ^ 0xbc;
              DAT_004ae921 = DAT_004ae901 ^ 0xf3;
              DAT_004ae922 = DAT_004ae902 ^ 10;
              DAT_004ae923 = DAT_004ae903 ^ 0x38;
              DAT_004ae924 = DAT_004ae904 ^ 2;
              DAT_004ae925 = DAT_004ae905 ^ 8;
              DAT_004ae926 = DAT_004ae906 ^ 0x4d;
              DAT_004ae927 = DAT_004ae907 ^ 0x9d;
              DAT_004ae928 = DAT_004ae908 ^ 0x40;
              DAT_004ae929 = DAT_004ae909 ^ 0x67;
              DAT_004ae92a = DAT_004ae90a ^ 0xe1;
              DAT_004ae92b = DAT_004ae90b ^ 200;
              DAT_004ae92c = DAT_004ae90c ^ 0x9c;
              DAT_004ae92d = DAT_004ae90d ^ 0x92;
              DAT_004ae92e = DAT_004ae90e ^ 0xca;
              DAT_004ae92f = DAT_004ae90f ^ 0xda;
              DAT_004ae930 = DAT_004ae910 ^ 4;
              DAT_004ae931 = DAT_004ae911 ^ 0x9c;
              DAT_004ae932 = DAT_004ae912 ^ 0x88;
              DAT_004ae933 = DAT_004ae913 ^ 0xa8;
              DAT_004ae934 = DAT_004ae914 ^ 0x7b;
              DAT_004ae935 = DAT_004ae915 ^ 0x37;
              DAT_004ae936 = DAT_004ae916 ^ 0x1e;
              DAT_004ae937 = DAT_004ae917 ^ 0xdc;
              DAT_004ae938 = DAT_004ae918 ^ 0x76;
              DAT_004aea54 = DAT_004aea4c ^ 0x53;
              DAT_004aea55 = DAT_004aea4d ^ 0x6d;
              DAT_004aea56 = DAT_004aea4e ^ 0x69;
              DAT_004aea57 = DAT_004aea4f ^ 0x21;
              DAT_004aea58 = DAT_004aea50 ^ 0x44;
              DAT_004aea59 = DAT_004aea51 ^ 0x65;
              DAT_004aea5a = DAT_004aea52 ^ 0x33;
              DAT_004aea5b = DAT_004aea53 ^ 0x68;
              DAT_004ae8a0 = DAT_004ae880 ^ 0xa4;
              DAT_004ae8a1 = DAT_004ae881 ^ 0x62;
              DAT_004ae8a2 = DAT_004ae882 ^ 0xb2;
              DAT_004ae8a3 = DAT_004ae883 ^ 0x36;
              DAT_004ae8a4 = DAT_004ae884 ^ 0xa9;
              DAT_004ae8a5 = DAT_004ae885 ^ 0x95;
              DAT_004ae8a6 = DAT_004ae886 ^ 0x16;
              DAT_004ae8a7 = DAT_004ae887 ^ 0x99;
              DAT_004ae8a8 = DAT_004ae888 ^ 0x9d;
              DAT_004ae8a9 = DAT_004ae889 ^ 0xb8;
              DAT_004ae8aa = ~DAT_004ae88a;
              DAT_004ae8ab = DAT_004ae88b ^ 0x31;
              DAT_004ae8ac = DAT_004ae88c ^ 0xaf;
              DAT_004ae8ad = DAT_004ae88d ^ 0x9d;
              DAT_004ae8ae = DAT_004ae88e ^ 0x75;
              DAT_004ae8af = DAT_004ae88f ^ 0xc1;
              DAT_004ae8b0 = DAT_004ae890 ^ 0xf4;
              DAT_004ae8b1 = DAT_004ae891 ^ 0x9c;
              DAT_004ae8b2 = DAT_004ae892 ^ 0xb1;
              DAT_004ae8b3 = DAT_004ae893 ^ 0x2c;
              DAT_004ae7c0 = DAT_004ae7a0 ^ 0x5b;
              DAT_004ae7c1 = DAT_004ae7a1 ^ 0xd7;
              DAT_004ae7c2 = DAT_004ae7a2 ^ 0x8c;
              DAT_004ae7c3 = DAT_004ae7a3 ^ 4;
              DAT_004ae7c4 = DAT_004ae7a4 ^ 0xbb;
              DAT_004ae7c5 = DAT_004ae7a5 ^ 6;
              DAT_004ae7c6 = DAT_004ae7a6 ^ 0x89;
              DAT_004ae7c7 = DAT_004ae7a7 ^ 0x18;
              DAT_004ae7c8 = DAT_004ae7a8 ^ 0xa9;
              DAT_004ae7c9 = DAT_004ae7a9 ^ 0xdd;
              DAT_004ae7ca = DAT_004ae7aa ^ 0x94;
              DAT_004ae7cb = DAT_004ae7ab ^ 0x44;
              DAT_004ae7cc = DAT_004ae7ac ^ 0x49;
              DAT_004ae7cd = DAT_004ae7ad ^ 0x5d;
              DAT_004ae7ce = DAT_004ae7ae ^ 0x3c;
              DAT_004ae7cf = DAT_004ae7af ^ 0xc1;
              DAT_004ae7d0 = DAT_004ae7b0 ^ 0x3c;
              DAT_004ae7d1 = DAT_004ae7b1 ^ 0x45;
              DAT_004ae7d2 = DAT_004ae7b2 ^ 0xe6;
              DAT_004ae7d3 = DAT_004ae7b3 ^ 0xd0;
              DAT_004ae7d4 = DAT_004ae7b4 ^ 0x8f;
              DAT_004ae7d5 = DAT_004ae7b5 ^ 0xf9;
              DAT_004ae7d6 = DAT_004ae7b6 ^ 0xe;
              DAT_004ae7d7 = DAT_004ae7b7 ^ 0xe7;
              DAT_004ae7d8 = DAT_004ae7b8 ^ 0xd4;
              DAT_004ae867 = DAT_004ae858 ^ 3;
              DAT_004ae868 = DAT_004ae859 ^ 0xa9;
              DAT_004ae869 = DAT_004ae85a ^ 0x93;
              DAT_004ae86a = DAT_004ae85b ^ 0x8d;
              DAT_004ae86b = DAT_004ae85c ^ 8;
              DAT_004ae86c = DAT_004ae85d ^ 0x90;
              DAT_004ae86d = DAT_004ae85e ^ 0x95;
              DAT_004ae86e = DAT_004ae85f ^ 0x4b;
              DAT_004ae86f = DAT_004ae860 ^ 0xc9;
              DAT_004ae870 = DAT_004ae861 ^ 99;
              DAT_004ae871 = DAT_004ae862 ^ 6;
              DAT_004ae872 = DAT_004ae863 ^ 0xcd;
              DAT_004ae873 = DAT_004ae864 ^ 0xee;
              DAT_004ae874 = DAT_004ae865 ^ 0x6e;
              DAT_004ae875 = DAT_004ae866 ^ 0x2a;
              DAT_004ae690 = DAT_004ae670 ^ 0xd4;
              DAT_004ae691 = DAT_004ae671 ^ 0x20;
              DAT_004ae692 = DAT_004ae672 ^ 0x3b;
              DAT_004ae693 = DAT_004ae673 ^ 199;
              DAT_004ae694 = DAT_004ae674 ^ 0xd3;
              DAT_004ae695 = DAT_004ae675 ^ 0x26;
              DAT_004ae696 = DAT_004ae676 ^ 0x59;
              DAT_004ae697 = DAT_004ae677 ^ 0x52;
              DAT_004ae698 = ~DAT_004ae678;
              DAT_004ae699 = DAT_004ae679 ^ 0x42;
              DAT_004ae69a = DAT_004ae67a ^ 0xde;
              DAT_004ae69b = DAT_004ae67b ^ 0xa8;
              DAT_004ae69c = DAT_004ae67c ^ 0xba;
              DAT_004ae69d = DAT_004ae67d ^ 0x57;
              DAT_004ae69e = DAT_004ae67e ^ 0x1e;
              DAT_004ae69f = DAT_004ae67f ^ 0xaa;
              DAT_004ae6a0 = DAT_004ae680 ^ 0xb3;
              DAT_004ae6a1 = DAT_004ae681 ^ 0x6d;
              DAT_004ae661 = DAT_004ae654 ^ 0xa8;
              DAT_004ae662 = DAT_004ae655 ^ 0xd8;
              DAT_004ae663 = DAT_004ae656 ^ 200;
              DAT_004ae664 = DAT_004ae657 ^ 0x4a;
              DAT_004ae665 = DAT_004ae658 ^ 0xdc;
              DAT_004ae666 = DAT_004ae659 ^ 0xe9;
              DAT_004ae667 = DAT_004ae65a ^ 0x3e;
              DAT_004ae668 = DAT_004ae65b ^ 0xd7;
              DAT_004ae669 = DAT_004ae65c ^ 0x22;
              DAT_004ae66a = DAT_004ae65d ^ 0x5e;
              DAT_004ae66b = DAT_004ae65e ^ 0xa0;
              DAT_004ae66c = DAT_004ae65f ^ 0x91;
              DAT_004ae66d = DAT_004ae660 ^ 0x14;
              DAT_004ae800 = DAT_004ae7e0 ^ 9;
              DAT_004ae801 = DAT_004ae7e1 ^ 0xf3;
              DAT_004ae802 = DAT_004ae7e2 ^ 0x3e;
              DAT_004ae803 = DAT_004ae7e3 ^ 0x91;
              DAT_004ae804 = DAT_004ae7e4 ^ 0x1a;
              DAT_004ae805 = DAT_004ae7e5 ^ 0x6d;
              DAT_004ae806 = DAT_004ae7e6 ^ 0x1e;
              DAT_004ae807 = DAT_004ae7e7 ^ 0x2a;
              DAT_004ae808 = DAT_004ae7e8 ^ 0x6e;
              DAT_004ae809 = DAT_004ae7e9 ^ 0x7c;
              DAT_004ae80a = DAT_004ae7ea ^ 0x35;
              DAT_004ae80b = DAT_004ae7eb ^ 0x3b;
              DAT_004ae80c = DAT_004ae7ec ^ 0x9f;
              DAT_004ae80d = DAT_004ae7ed ^ 0xde;
              DAT_004ae80e = DAT_004ae7ee ^ 0xad;
              DAT_004ae80f = DAT_004ae7ef ^ 0x8c;
              DAT_004ae810 = DAT_004ae7f0 ^ 0xe8;
              DAT_004ae811 = DAT_004ae7f1 ^ 0x15;
              DAT_004ae812 = DAT_004ae7f2 ^ 0x8b;
              DAT_004ae813 = DAT_004ae7f3 ^ 0x31;
              DAT_004aea2d = DAT_004aea24 ^ 0x42;
              DAT_004aea2e = DAT_004aea25 ^ 0x35;
              DAT_004aea2f = DAT_004aea26 ^ 0x44;
              DAT_004aea30 = ~DAT_004aea27;
              DAT_004aea31 = DAT_004aea28 ^ 0xa1;
              DAT_004aea32 = DAT_004aea29 ^ 0x97;
              DAT_004aea33 = DAT_004aea2a ^ 0xba;
              DAT_004aea34 = DAT_004aea2b ^ 0x36;
              DAT_004aea35 = DAT_004aea2c ^ 0xcb;
              DAT_004ae741 = DAT_004ae731 ^ 0xbe;
              DAT_004ae742 = DAT_004ae732 ^ 0x4b;
              DAT_004ae743 = DAT_004ae733 ^ 0x36;
              DAT_004ae744 = DAT_004ae734 ^ 0x50;
              DAT_004ae745 = DAT_004ae735 ^ 0xa8;
              DAT_004ae746 = DAT_004ae736 ^ 0x91;
              DAT_004ae747 = DAT_004ae737 ^ 0x31;
              DAT_004ae748 = DAT_004ae738 ^ 0x35;
              DAT_004ae749 = DAT_004ae739 ^ 0xc9;
              DAT_004ae74a = DAT_004ae73a ^ 0x4e;
              DAT_004ae74b = DAT_004ae73b ^ 0xd;
              DAT_004ae74c = DAT_004ae73c ^ 0xfd;
              DAT_004ae74d = DAT_004ae73d ^ 0xed;
              DAT_004ae74e = DAT_004ae73e ^ 0x95;
              DAT_004ae74f = DAT_004ae73f ^ 0x95;
              DAT_004ae750 = DAT_004ae740 ^ 0x4c;
              DAT_004ae70a = DAT_004ae6fb ^ 0xe4;
              DAT_004ae70b = DAT_004ae6fc ^ 0xd4;
              DAT_004ae70c = DAT_004ae6fd ^ 0x9b;
              DAT_004ae70d = DAT_004ae6fe ^ 0x6a;
              DAT_004ae70e = DAT_004ae6ff ^ 0x60;
              DAT_004ae70f = DAT_004ae700 ^ 0x44;
              DAT_004ae710 = DAT_004ae701 ^ 0x79;
              DAT_004ae711 = DAT_004ae702 ^ 0x4c;
              DAT_004ae712 = DAT_004ae703 ^ 0x8c;
              DAT_004ae713 = DAT_004ae704 ^ 0x8f;
              DAT_004ae714 = DAT_004ae705 ^ 0x8c;
              DAT_004ae715 = DAT_004ae706 ^ 0x9a;
              DAT_004ae716 = DAT_004ae707 ^ 0xc;
              DAT_004ae717 = DAT_004ae708 ^ 0xfa;
              DAT_004ae718 = DAT_004ae709 ^ 0x2c;
              DAT_004ae725 = DAT_004ae719 ^ 0x59;
              DAT_004ae726 = DAT_004ae71a ^ 7;
              DAT_004ae727 = DAT_004ae71b ^ 0x2c;
              DAT_004ae728 = DAT_004ae71c ^ 0x7e;
              DAT_004ae729 = DAT_004ae71d ^ 0x2c;
              local_9a = DAT_004ae71e;
              *local_370 = 0x4eedb739;
            }
          }
          goto LAB_0020813c;
        }
        if (local_364 != 0x55c5c926) {
          if (local_364 == 0x5653e68b) {
            *local_370 = -0x7f281a0c;
          }
          else if (local_364 == 0x5674d0a3) {
            *local_370 = -0x446008e9;
          }
          goto LAB_0020813c;
        }
        bVar7 = ((DAT_004af2b8 - DAT_004af2bc) + 0x11e64089U ^ 0x13003020 | 0xe4ee459b) ==
                0x50dc8deb;
        iVar14 = 0x55c5c926;
        iVar12 = 0x5220474f;
        goto LAB_00212bb0;
      }
      if (0x5c542f46 < local_364) {
        if (local_364 < 0x5df54e9f) {
          if (local_364 == 0x5c542f47) {
            *local_370 = 0x55c5c926;
          }
          else if (local_364 == 0x5c88e66d) {
            *local_370 = -0x5b06d4c5;
          }
          else if (local_364 == 0x5c920930) {
            uVar11 = (DAT_004af090 ^ DAT_004af094) * 0x7b44d0ea + 0x8de56964;
            bVar6 = 0x8c561c9e < uVar11;
            bVar7 = uVar11 == 0x8c561c9f;
            iVar14 = 0x17c29a2b;
            iVar12 = 0xd31817;
            goto LAB_00212990;
          }
        }
        else if (local_364 == 0x5df54e9f) {
          *local_370 = -0x779e438f;
        }
        else if (local_364 == 0x5e119f3d) {
          *local_370 = 0x32cea066;
        }
        else if (local_364 == 0x5ec375fe) {
LAB_0020c950:
          *local_370 = 0x7e368d09;
        }
        goto LAB_0020813c;
      }
      if (local_364 < 0x5a82f9ed) {
        if (local_364 != 0x5796c878) {
          iVar14 = 0x57cb0edd;
LAB_0020da74:
          if (local_364 == iVar14) {
            *local_370 = 0x2d9e27c8;
          }
          goto LAB_0020813c;
        }
        local_278 = PTR_s_setEnabledTimeColor__00489f38;
        iVar14 = -0x64d9d9d2;
        if (((DAT_004af398 & DAT_004af39c) + 0x9a2e1142 ^ 0xeb24dfbc) + 0x3b0c070e < 0x4133bfda) {
          iVar14 = 0x5796c878;
        }
      }
      else {
        if (local_364 == 0x5a82f9ed) {
          *local_370 = -0x46bf3120;
          goto LAB_0020813c;
        }
        if (local_364 != 0x5ae6f284) {
          if (local_364 == 0x5b87e246) {
            bVar7 = (DAT_004af4a0 | DAT_004af4a4) == 0x11ddcf9d;
            iVar14 = 0x69e25311;
            iVar12 = 0x1c5837cc;
            goto LAB_00212bb0;
          }
          goto LAB_0020813c;
        }
        if ((uint)((ulong)(DAT_004af1a8 * DAT_004af1ac + 0x9b5bb581) * 0x4876d58b >> 0x3e) *
            -0x7de999ae < 0xa767d5b9) {
          iVar14 = 0x5a82f9ed;
        }
      }
      goto LAB_00212bb4;
    }
    if (local_364 < 0x6e2a7365) {
      if (local_364 < 0x67e18169) {
        if (local_364 < 0x6441aed1) {
          if (local_364 < 0x60bd569e) {
            if (local_364 == 0x601c37c1) {
              bVar7 = local_259 == '\0';
              iVar14 = -0x143f5c8a;
              iVar12 = -0x4bf16eee;
              goto LAB_002126a4;
            }
            if (local_364 == 0x60752b58) {
              DAT_004d1854 = 1;
              pIVar5 = pIVar5 + -4;
              local_a8 = pIVar5;
              *local_370 = 0x7258a608;
            }
          }
          else if (local_364 == 0x60bd569e) {
            *local_370 = 0x60752b58;
          }
          else if (local_364 == 0x62ae6bff) {
            *local_370 = 0x40a9ac87;
          }
          else if (local_364 == 0x63923b54) {
            _objc_release(local_2d8);
            _objc_release(local_130);
            *local_370 = -0x30f19f3b;
          }
          goto LAB_0020813c;
        }
        if (local_364 < 0x656e5d4d) {
          if (local_364 == 0x6441aed1) {
            *local_370 = -0x2299b0b0;
          }
          else if (local_364 == 0x644ea9c7) {
            _objc_msgSend(local_378,local_240,0);
            *local_370 = -0x2c1a14fe;
          }
          else if (local_364 == 0x6542dbfd) {
            _objc_release(local_210);
            *local_370 = 0x5266c2a9;
          }
          goto LAB_0020813c;
        }
        if (local_364 == 0x656e5d4d) {
          *local_370 = 0x688a40d0;
          goto LAB_0020813c;
        }
        if (local_364 != 0x65d3e6b7) {
          if (local_364 == 0x66be2b7b) {
            iVar14 = DAT_004af4b8 + DAT_004af4bc;
            local_308 = _objc_msgSend(local_2f8,local_300);
            bVar7 = (iVar14 + 0xb96a5323U) / 0x46f4704d == 0x1ce8e802;
            iVar14 = 0x66be2b7b;
            iVar12 = 0x762994a1;
            goto LAB_00212bb0;
          }
          goto LAB_0020813c;
        }
        bVar7 = ((DAT_004af450 & DAT_004af454) * -0x15825924) / 0x283522ca == 0xf193f21f;
        iVar14 = 0x4d6f02b0;
        iVar12 = 0xd57437c;
LAB_002126a4:
        if (bVar7) {
          iVar14 = iVar12;
        }
        goto LAB_00212bb4;
      }
      if (local_364 < 0x6b2f726e) {
        if (local_364 < 0x69428122) {
          if (local_364 == 0x67e18169) {
            *local_370 = -0x3607a05;
          }
          else if (local_364 == 0x688a40d0) {
            uVar11 = (uint)((ulong)(uint)(DAT_004af1e8 + DAT_004af1ec) * 0x1227a77b >> 0x3c) +
                     0x3274c303;
            bVar6 = 0x4a9e0bdb < uVar11;
            bVar7 = uVar11 == 0x4a9e0bdc;
            iVar14 = 0x688a40d0;
            iVar12 = -0x4ea30dbc;
            goto LAB_00212990;
          }
        }
        else {
          if (local_364 == 0x69428122) {
            if (0x8d200228 < ((DAT_004af1a0 | DAT_004af1a4) * 0x312456c8 + 0x4227d310 & 0x93557b60))
            {
              iVar14 = 0x3763ee19;
            }
            goto LAB_00212bb4;
          }
          if (local_364 != 0x69e25311) {
            iVar14 = 0x6aeedf6c;
            goto LAB_0020da74;
          }
          _objc_msgSend(local_2d8,PTR_s_componentsSeparatedByString__0048b268,
                        &PTR____CFConstantStringClassReference_004aeaa0);
          _objc_retainAutoreleasedReturnValue();
          *local_370 = 0x1c5837cc;
        }
        goto LAB_0020813c;
      }
      if (0x6cdaa209 < local_364) {
        if (local_364 == 0x6cdaa20a) {
          *local_370 = 0x2ef7a8a;
          local_338 = local_140;
        }
        else if (local_364 == 0x6cee23aa) {
          local_b0 = pIVar5 + -4;
          pIVar5 = pIVar5 + -0xc;
          local_b8 = pIVar5;
          *local_370 = -0x3057360f;
        }
        else if (local_364 == 0x6de8551c) {
          *local_370 = 0x5426550b;
        }
        goto LAB_0020813c;
      }
      if (local_364 != 0x6b2f726e) {
        if (local_364 == 0x6b5b9dde) {
          *local_370 = 0x3cb63e30;
        }
        else if (local_364 == 0x6b95402f) {
          *local_370 = -0x6cba294;
        }
        goto LAB_0020813c;
      }
      uVar11 = ((DAT_004af158 ^ DAT_004af15c) + 0xa2ffef28 ^ 0x7a1fed62) + 0xa411c63;
      bVar6 = 0x667343da < uVar11;
      bVar7 = uVar11 == 0x667343db;
      iVar14 = 0x1c69da18;
      iVar12 = 0x261999c;
      goto LAB_00212990;
    }
    if (0x7954d297 < local_364) {
      iVar14 = 0x7954d298;
      if (local_364 < 0x7cb21099) {
        if (0x79b84d22 < local_364) {
          if (local_364 == 0x79b84d23) {
            *local_370 = -0x393e6d48;
          }
          else if (local_364 == 0x7a7225b5) {
            pIVar5 = pIVar5 + -0xc;
            *local_370 = 0x6cee23aa;
          }
          else if (local_364 == 0x7aa3a429) {
            _objc_msgSend(local_378,local_118,local_108);
            *local_370 = 0x3f94d29b;
          }
          goto LAB_0020813c;
        }
        if (local_364 != 0x7954d298) {
          if (local_364 == 0x79a6a03e) {
            *local_370 = 0x11223966;
          }
          goto LAB_0020813c;
        }
        if (0x264ba5c0 < (((DAT_004af3d8 | DAT_004af3dc) ^ 0x32780763) * -0x5737400a & 0x60762b54))
        {
          iVar14 = 0x39309447;
        }
      }
      else {
        if (0x7edd0c3d < local_364) {
          if (local_364 == 0x7edd0c3e) {
            iVar14 = 0x2d5d1271;
            if (local_1d9 == '\0') {
              iVar14 = 0x2ef7a8a;
            }
            *local_370 = iVar14;
            local_348 = local_190;
            local_338 = local_1d8;
          }
          else if (local_364 == 0x7f1dbfe1) {
            *local_370 = 0x4f18c5b;
          }
          else if (local_364 == 0x7feda11b) {
            *local_370 = 0x32963220;
          }
          goto LAB_0020813c;
        }
        if (local_364 == 0x7cb21099) {
          if (((DAT_004af3d0 + DAT_004af3d4 ^ 0x5d039082U) & 0x7d0793a2) * -0x610da721 == 0x35b5b913
             ) {
            iVar14 = -0x4f5750e4;
          }
        }
        else {
          if (local_364 != 0x7e368d09) {
            if (local_364 == 0x7ea0e4b2) {
              *local_370 = -0x2a50e849;
            }
            goto LAB_0020813c;
          }
          local_280 = PTR_s_sendTimeColor_00489f18;
          iVar14 = -0x772dd697;
          if (((DAT_004af3b8 - DAT_004af3bc) + 0xebfb9fd8U & 0x47893f8e) + 0x47c94455 < 0x3b89ddd8)
          {
            iVar14 = 0x7e368d09;
          }
        }
      }
      goto LAB_00212bb4;
    }
    if (local_364 < 0x7340e812) {
      if (0x6fdc10eb < local_364) {
        if (local_364 == 0x6fdc10ec) {
          *local_370 = -0x574cc99b;
        }
        else {
          if (local_364 == 0x719aa09f) {
            local_150 = PTR_s_isValidString__0048b1e0;
            iVar14 = -0x588a313;
            if ((DAT_004af148 + DAT_004af14c + 0xc010fcf9U & 0x5998919f) * -0x4bc06de9 ==
                -0x5aff88ac) {
              iVar14 = 0x719aa09f;
            }
            goto LAB_00212bb4;
          }
          if (local_364 == 0x7258a608) {
            bVar7 = ((DAT_004af070 ^ DAT_004af074) & 0x1185f734) * 0x8aaa372 == 0x3047247d;
            iVar14 = 0x7a7225b5;
            iVar12 = 0x6cee23aa;
            goto LAB_00212bb0;
          }
        }
        goto LAB_0020813c;
      }
      if (local_364 != 0x6e2a7365) {
        if (local_364 == 0x6e3d8876) {
          bVar7 = 0x3708d486 <
                  ((uint)((ulong)(uint)(DAT_004af210 + DAT_004af214) * 0x4e355291 >> 0x3e) +
                   0x64d059f1 ^ 0x6539489d);
          iVar12 = 0x6b5b9dde;
          iVar14 = 0x3cb63e30;
          goto LAB_00212b4c;
        }
        goto LAB_0020813c;
      }
      bVar7 = DAT_004af030 * DAT_004af034 == 0x46300a;
      iVar12 = -0x494cc03;
      iVar14 = 0x3be29727;
    }
    else {
      if (0x75c14a00 < local_364) {
        if (local_364 == 0x75c14a01) {
          uVar11 = ((DAT_004af150 & DAT_004af154) + 0xc8ff3d3b | 0x7ae63d4b) + 0xc3f11233;
          bVar6 = 0xdf3aa09f < uVar11;
          bVar7 = uVar11 == 0xdf3aa0a0;
          iVar12 = 0x6b2f726e;
          iVar14 = 0x1c69da18;
          goto LAB_00212670;
        }
        if (local_364 == 0x762994a1) {
          *local_370 = 0xef0914;
        }
        else if (local_364 == 0x792e7504) {
          *local_120 = &PTR____CFConstantStringClassReference_004aed00;
          puVar13 = local_a8;
          local_a8[1] = &PTR____CFConstantStringClassReference_004aecc0;
          local_b0[2] = &PTR____CFConstantStringClassReference_004aed80;
          puVar13[2] = &PTR____CFConstantStringClassReference_004aec60;
          *local_370 = 0xb199c18;
        }
        goto LAB_0020813c;
      }
      if (local_364 == 0x7340e812) {
        *local_370 = -0x5bc2095c;
        goto LAB_0020813c;
      }
      if (local_364 == 0x74b55237) {
        *local_370 = 0x6fdc10ec;
        goto LAB_0020813c;
      }
      if (local_364 != 0x757921b2) goto LAB_0020813c;
      uVar11 = DAT_004af288 - DAT_004af28c;
      _objc_msgSend(local_378,local_208,0);
      bVar7 = ((uVar11 & 0x4878891) + 0xabb2e5e2) / 0x17c9b0b3 == 0x45efc9bd;
      iVar12 = -0x6d214b94;
      iVar14 = 0x3c309f71;
    }
  }
LAB_00212a0c:
  if (bVar7) {
    iVar14 = iVar12;
  }
LAB_00212bb4:
  *local_370 = iVar14;
  goto LAB_0020813c;
}



// ----- -[BubbleBoxInfo initWithData:] @ 00212d50 -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxInfo::initWithData_(ID param_1,SEL param_2,ID param_3)

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
  undefined *puVar30;
  undefined *puVar31;
  undefined8 *puVar32;
  ID *pIVar33;
  bool bVar34;
  bool bVar35;
  long lVar36;
  undefined8 uVar37;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  SEL extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  SEL extraout_x1_06;
  SEL extraout_x1_07;
  SEL extraout_x1_08;
  SEL extraout_x1_09;
  SEL extraout_x1_10;
  SEL extraout_x1_11;
  SEL extraout_x1_12;
  undefined8 extraout_x1_13;
  SEL extraout_x1_14;
  SEL extraout_x1_15;
  SEL extraout_x1_16;
  undefined8 extraout_x1_17;
  SEL extraout_x1_18;
  SEL extraout_x1_19;
  uint uVar38;
  int iVar39;
  int iVar40;
  undefined1 *puVar41;
  undefined8 uVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auStack_1c0 [8];
  ID local_1b8;
  int *local_1b0;
  int local_1a4;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  char local_179;
  long local_178;
  undefined8 local_170;
  undefined8 local_168;
  char local_159;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  long *local_140;
  long local_138;
  long *local_130;
  undefined8 *local_128;
  long local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *puStack_108;
  char local_f9;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char local_a1;
  ID local_a0;
  undefined1 *local_98;
  undefined8 *local_90;
  ID *local_88;
  byte local_7b;
  byte local_7a;
  char local_79;
  int local_78;
  uint local_74;
  long local_70;
  
  puVar41 = auStack_1c0;
  local_70 = *(long *)PTR____stack_chk_guard_00481638;
  local_74 = DAT_004af500 * DAT_004af504 + 0x68069827U ^ 0x290509e8 | 0x8032a410;
  local_1b0 = &local_1a4;
  local_1a4 = -0x14b03484;
  local_1b8 = param_1;
LAB_00212e20:
  pIVar33 = local_88;
  puVar32 = local_90;
  puVar30 = PTR_s_objectForKeyedSubscript__00489d00;
  auVar23._8_8_ = param_2;
  auVar23._0_8_ = local_170;
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = local_170;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = local_170;
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = local_170;
  auVar18._8_8_ = param_2;
  auVar18._0_8_ = local_170;
  auVar17._8_8_ = param_2;
  auVar17._0_8_ = local_170;
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_170;
  auVar15._8_8_ = param_2;
  auVar15._0_8_ = local_170;
  auVar14._8_8_ = param_2;
  auVar14._0_8_ = local_170;
  auVar13._8_8_ = param_2;
  auVar13._0_8_ = local_170;
  auVar12._8_8_ = param_2;
  auVar12._0_8_ = local_170;
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_170;
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_170;
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_170;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_170;
  auVar46._8_8_ = param_2;
  auVar46._0_8_ = local_170;
  auVar44._8_8_ = param_2;
  auVar44._0_8_ = local_f8;
  auVar7._8_8_ = param_2;
  auVar7._0_8_ = local_f8;
  auVar43._8_8_ = param_2;
  auVar43._0_8_ = local_120;
  auVar6._8_8_ = param_2;
  auVar6._0_8_ = local_120;
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = local_120;
  auVar45._8_8_ = param_2;
  auVar45._0_8_ = local_d8;
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = local_d8;
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = local_d8;
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = local_d8;
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = local_d8;
  if (local_1a4 < -0x70e957b) {
    if (local_1a4 < -0x48a33619) {
      iVar39 = -0x5cd378b8;
      if (local_1a4 < -0x5d79d9e8) {
        if (local_1a4 < -0x68025dec) {
          if (local_1a4 < -0x7a7ce25f) {
            if (local_1a4 == -0x7e8a1a7e) {
              *local_1b0 = -0x2dc3b6dc;
            }
            else if (local_1a4 == -0x7e87a1e2) {
              *local_1b0 = 0x3d863604;
            }
            else if (local_1a4 == -0x7dfad5b4) {
              *local_1b0 = 0x2cd7e6ed;
            }
          }
          else if (local_1a4 < -0x6fc55915) {
            if (local_1a4 == -0x7a7ce25f) {
              bVar35 = local_79 == '\0';
              iVar40 = -0x631d4ceb;
              iVar39 = 0x24de7c0a;
              auVar44 = auVar7;
              goto LAB_002160e4;
            }
            if (local_1a4 == -0x7027a3d5) {
              local_198 = local_188;
              uVar38 = 0;
              if (DAT_004af604 != 0) {
                uVar38 = DAT_004af600 / DAT_004af604;
              }
              auVar46 = auVar9;
              if (uVar38 == 0xb6a5e1d7) {
                iVar39 = -0x5124f122;
                auVar46 = auVar10;
              }
              goto LAB_002160e8;
            }
          }
          else if (local_1a4 == -0x6fc55915) {
            _objc_retain(param_3);
            *local_88 = local_1b8;
            *local_1b0 = -0x195ba959;
            param_2 = extraout_x1_15;
          }
          else if (local_1a4 == -0x6c085bbf) {
            bVar35 = 0x45e34ca4 <
                     ((DAT_004af650 & DAT_004af654) * -0x18ab0a42 & 0x8bfab6d2) + 0xf2483cad;
            iVar40 = -0x23817ee0;
            iVar39 = 0x6c19e7f1;
            goto LAB_00216094;
          }
        }
        else if (local_1a4 < -0x64dbb52a) {
          if (local_1a4 < -0x66e5af91) {
            if (local_1a4 == -0x68025dec) {
              _objc_msgSend(puStack_108,local_110);
              uVar37 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_a0,PTR_s_setBubbles__0048a810,uVar37);
              _objc_release(uVar37);
              *local_1b0 = -0x2e4b3328;
              param_2 = extraout_x1_14;
            }
            else if (local_1a4 == -0x67939f8e) {
              bVar35 = ((DAT_004af620 - DAT_004af624) * 0x31d60aaf & 0xc4ef2046U) == 0xd5fc03b1;
              iVar39 = 0x456383ef;
              iVar40 = 0x254f60dd;
              auVar43 = auVar5;
              goto LAB_00215fe4;
            }
          }
          else {
            if (local_1a4 == -0x66e5af91) {
              bVar35 = local_a1 == '\0';
              iVar39 = -0x5a9a6a30;
              iVar40 = -0x48a33619;
LAB_00215c7c:
              auVar46 = auVar15;
              if (bVar35) {
                iVar39 = iVar40;
                auVar46 = auVar16;
              }
              goto LAB_002160e8;
            }
            if (local_1a4 == -0x65fe9b58) {
              local_f9 = local_f8 == 0;
              *local_1b0 = 0x15f3e3c1;
            }
          }
        }
        else if (local_1a4 < -0x62486aaf) {
          if (local_1a4 == -0x64dbb52a) {
            bVar35 = (DAT_004af5f0 | DAT_004af5f4 | 0xfb6fedff) == 0xebb17e6d;
            iVar39 = 0x5bf5a5cc;
            iVar40 = -0x4b2373b6;
            goto LAB_00215c7c;
          }
          if (local_1a4 == -0x631d4ceb) {
            iVar39 = 0x49c38893;
            auVar46 = auVar11;
            if (((DAT_004af540 | DAT_004af544) + 0xa6745c65 ^ 0xc61aaf8e) < 0xda795968) {
              iVar39 = 0x4f2aee42;
              auVar46 = auVar12;
            }
            goto LAB_002160e8;
          }
        }
        else {
          if (local_1a4 == -0x5e5326b9) {
            uVar38 = (DAT_004af580 & DAT_004af584) * -0x71060e07 + 0xb8e61168;
            bVar34 = 0xd7c9fdaa < uVar38;
            bVar35 = uVar38 == 0xd7c9fdab;
            iVar39 = -0x5597f0b8;
            iVar40 = 0x66be0db4;
            goto LAB_00215874;
          }
          if (local_1a4 == -0x62486aaf) {
            if (*(long *)PTR____stack_chk_guard_00481638 != local_70) {
                    /* WARNING: Subroutine does not return */
              ___stack_chk_fail();
            }
            return local_a0;
          }
        }
        goto LAB_00212e20;
      }
      if (local_1a4 < -0x53b6b805) {
        if (-0x5a9a6a31 < local_1a4) {
          if (local_1a4 < -0x56322077) {
            if (local_1a4 == -0x5a9a6a30) {
              bVar35 = DAT_004af680 + DAT_004af684 == 0x172a9b93;
              iVar39 = -0x83598d0;
              iVar40 = 0x3cfc3307;
              goto LAB_00215c7c;
            }
            if (local_1a4 == -0x5684a17b) {
              uVar42 = *(undefined8 *)(*local_140 + local_1a0 * 8);
              uVar37 = _objc_alloc(PTR_BubbleBoxInfo_0048cb40);
              _objc_msgSend(uVar37,local_148,uVar42);
              _objc_msgSend(local_a0,local_150);
              _objc_retainAutoreleasedReturnValue();
              *local_1b0 = 0x21e24ffa;
              param_2 = extraout_x1_01;
            }
          }
          else if (local_1a4 == -0x56322077) {
LAB_00215154:
            *local_1b0 = -0x190a8c84;
          }
          else if (local_1a4 == -0x5597f0b8) {
            _objc_msgSend(local_a0,local_e0,local_d8);
            _objc_release(local_d8);
            _objc_release(local_d0);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aeea0);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,PTR_s_safeString__0048b2a0,uVar37);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,PTR_s_setVersion__0048b1d0,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef60);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar37,local_b8);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,local_c0,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef00);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar37,local_b8);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,local_c8,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef20);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            lVar36 = _objc_msgSend(uVar37,PTR_s_integerValue_00489ce0);
            _objc_release(uVar37);
            _objc_msgSend(local_a0,PTR_s_setIsParent__0048b2a8,lVar36 == 0);
            puVar30 = PTR__OBJC_CLASS___NSArray_0048ca20;
            _objc_msgSend(param_3,PTR_s_objectForKey__0048a370,
                          &PTR____CFConstantStringClassReference_004aefa0);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(puVar30,PTR_s_arrayWithArray__0048b2b0,uVar37);
            _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar37);
            *local_1b0 = 0x66be0db4;
            param_2 = extraout_x1_08;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == -0x5d79d9e8) {
          uVar38 = 0;
          if (DAT_004af5b4 != 0) {
            uVar38 = DAT_004af5b0 / DAT_004af5b4;
          }
          uVar38 = -(int)((long)((ulong)((uVar38 | 0x6588296b) * 0x32064d5e) * 0xb204b625) >> 0x3f);
          bVar34 = 0x8d8f88cb < uVar38;
          bVar35 = uVar38 == 0x8d8f88cc;
          iVar39 = -0x5b2c8b9b;
LAB_00215fac:
          auVar46 = auVar19;
          if (!bVar34 || bVar35) {
            iVar39 = -0x28a355a;
            auVar46 = auVar20;
          }
          goto LAB_002160e8;
        }
        if (local_1a4 != -0x5cd378b8) {
          if (local_1a4 == -0x5b2c8b9b) {
            *local_1b0 = -0x28a355a;
          }
          goto LAB_00212e20;
        }
        local_150 = PTR_s_bubbles_0048a120;
        local_148 = PTR_s_initWithData__0048a9d8;
        local_158 = PTR_s_addObject__00489ba8;
        auVar46 = auVar17;
        if ((DAT_004af608 | DAT_004af60c) + 0x25d9b171 < 0xb142138a) {
          iVar39 = 0x37c95dcf;
          auVar46 = auVar18;
        }
      }
      else {
        if (local_1a4 < -0x4e8c0cee) {
          if (local_1a4 == -0x53b6b805) {
            *local_1b0 = -0x4028ad95;
          }
          else if (local_1a4 == -0x51836160) {
            *local_1b0 = 0x538405e;
          }
          else if (local_1a4 == -0x5124f122) {
            *local_1b0 = -0x5cd378b8;
          }
          goto LAB_00212e20;
        }
        if (-0x4cde882c < local_1a4) {
          if (local_1a4 == -0x4cde882b) {
            local_179 = local_178 == 0;
            *local_1b0 = 0x5b38ca45;
          }
          else if (local_1a4 == -0x4b2373b6) {
            *local_1b0 = 0x5bf5a5cc;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == -0x4e8c0cee) {
          _objc_msgSend(param_3,PTR_s_objectForKeyedSubscript__00489d00,
                        &PTR____CFConstantStringClassReference_004aefc0);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          puVar31 = PTR_s_stringValue_0048b1c8;
          _objc_msgSend(uVar37,PTR_s_stringValue_0048b1c8);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setName__0048b1b8,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aeee0);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setBubbleId__0048b1d8,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aef80);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setAuth__0048b1c0,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aef60);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setCover__0048b280,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aef00);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setIcon__0048b288,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aef40);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          uVar42 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setDownload__0048b290,uVar42);
          _objc_release(uVar42);
          _objc_release(uVar37);
          _objc_msgSend(param_3,puVar30,&PTR____CFConstantStringClassReference_004aeec0);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar37,puVar31);
          _objc_retainAutoreleasedReturnValue();
          *local_1b0 = 0x7bf7d82c;
          param_2 = extraout_x1_16;
          goto LAB_00212e20;
        }
        if (local_1a4 != -0x4ddceaec) goto LAB_00212e20;
        iVar39 = -0x6fc55915;
        auVar46 = auVar13;
        if ((uint)-(int)((long)((ulong)((DAT_004af550 ^ DAT_004af554) * 0xb422929) * 0xcf9984f1) >>
                        0x3f) < 0x4e66702e) {
          iVar39 = -0x195ba959;
          auVar46 = auVar14;
        }
      }
      goto LAB_002160e8;
    }
    if (local_1a4 < -0x20a66014) {
      if (local_1a4 < -0x2dc3b6dc) {
        if (local_1a4 < -0x4028ad95) {
          if (local_1a4 == -0x48a33619) {
            bVar35 = 0xba401e9b <
                     ((DAT_004af570 + DAT_004af574 | 0x245410aU) + 0xf5c30a36 & 0x9819c34);
            iVar39 = 0x7bf7d82c;
            iVar40 = -0x4e8c0cee;
            auVar45 = auVar2;
            goto LAB_00215f18;
          }
          if (local_1a4 == -0x426f05be) {
            iVar39 = 0x21e24ffa;
            auVar46 = auVar22;
            if (0x596925b8 < ((DAT_004af630 | DAT_004af634) + 0x52f150cd & 0x321449d0)) {
              iVar39 = -0x5684a17b;
              auVar46 = auVar23;
            }
            goto LAB_002160e8;
          }
          if (local_1a4 == -0x41ac1d24) {
            local_90[1] = 0;
            *puVar32 = 0;
            puVar32[3] = 0;
            puVar32[2] = 0;
            puVar32[5] = 0;
            puVar32[4] = 0;
            puVar32[7] = 0;
            puVar32[6] = 0;
            _objc_retain(local_e8);
            local_118 = PTR_s_countByEnumeratingWithState_obje_00489c48;
            auVar43 = _objc_msgSend(local_e8,PTR_s_countByEnumeratingWithState_obje_00489c48,
                                    local_90,local_98,0x10);
            bVar35 = auVar43._0_8_ == 0;
            iVar39 = 0x5cd6c939;
            iVar40 = 0x4956bb78;
            goto LAB_00215fe4;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 < -0x32b1e3da) {
          if (local_1a4 != -0x4028ad95) {
            if (local_1a4 == -0x3bcef3ac) {
              _objc_msgSend(local_170,local_158,local_168);
              *local_1b0 = 0x5b7a7508;
              param_2 = extraout_x1_02;
            }
            goto LAB_00212e20;
          }
          uVar38 = 0;
          if (DAT_004af644 != 0) {
            uVar38 = DAT_004af640 / DAT_004af644;
          }
          uVar38 = (uVar38 + 0xfb0eef3 & 0x5d81272d) * -0x651894b1;
          bVar34 = 0x64be7797 < uVar38;
          bVar35 = uVar38 == 0x64be7798;
          iVar40 = -0x3bcef3ac;
          iVar39 = 0x5b7a7508;
        }
        else {
          if (local_1a4 == -0x32b1e3da) {
            *local_1b0 = 0x7bfe77ec;
            goto LAB_00212e20;
          }
          if (local_1a4 != -0x2e4b3328) goto LAB_00212e20;
          uVar38 = (DAT_004af5c8 * DAT_004af5cc & 0x6d97a37eU) + 0xd7952e0;
          _objc_msgSend(puStack_108,local_110);
          uVar37 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_a0,PTR_s_setBubbles__0048a810,uVar37);
          _objc_release(uVar37);
          bVar34 = 0x1c594a50 < uVar38;
          bVar35 = uVar38 == 0x1c594a51;
          iVar40 = -0x2e4b3328;
          iVar39 = 0x5c72f732;
          param_2 = extraout_x1_09;
        }
      }
      else {
        if (-0x25671081 < local_1a4) {
          if (local_1a4 < -0x23817ee0) {
            if (local_1a4 == -0x25671080) {
              local_128 = local_90 + 2;
              local_130 = (long *)*local_128;
              *local_1b0 = 0x225b79bf;
            }
            else if (local_1a4 == -0x25209b31) {
              *local_1b0 = -0x64dbb52a;
            }
          }
          else if (local_1a4 == -0x23817ee0) {
            auVar45 = _objc_msgSend(local_e8,local_118,local_90,local_98,0x10);
            param_2 = auVar45._8_8_;
            local_178 = auVar45._0_8_;
            *local_1b0 = -0x18e213a5;
          }
          else if (local_1a4 == -0x220650a1) {
            uVar38 = DAT_004af598 ^ DAT_004af59c;
            auVar44 = _objc_msgSend(local_e8,local_f0);
            bVar35 = ((uVar38 ^ 0x85bd873c) / 0x1a5bc7bd & 4) == 0x35cefed6;
            iVar40 = -0x220650a1;
            iVar39 = 0x45e127b6;
            goto LAB_002160e4;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == -0x2dc3b6dc) {
          *local_1b0 = -0x426f05be;
          goto LAB_00212e20;
        }
        if (local_1a4 != -0x2c24dd87) {
          if (local_1a4 == -0x2acf08f1) {
            _objc_release(local_e8);
            *local_1b0 = -0x1555bd21;
            param_2 = extraout_x1_06;
          }
          goto LAB_00212e20;
        }
        local_1a0 = local_190;
        uVar38 = (DAT_004af610 & DAT_004af614 ^ 0x88a8012 | 0xd47000ed) / 0x14f1207c;
        bVar34 = 0x13fba5df < uVar38;
        bVar35 = uVar38 == 0x13fba5e0;
        iVar40 = -0x18a894c8;
        iVar39 = 0x72d13a48;
      }
LAB_00215dd4:
      auVar25._8_8_ = param_2;
      auVar25._0_8_ = local_170;
      auVar46._8_8_ = param_2;
      auVar46._0_8_ = local_170;
      if (!bVar34 || bVar35) {
        iVar39 = iVar40;
        auVar46 = auVar25;
      }
      goto LAB_002160e8;
    }
    if (local_1a4 < -0x17e265b5) {
      if (local_1a4 < -0x195ba959) {
        if (local_1a4 == -0x20a66014) {
          *local_1b0 = 0x1ecc796e;
        }
        else if (local_1a4 == -0x1ef1d0d7) {
          *local_1b0 = 0x350c13da;
        }
        else if (local_1a4 == -0x1e195a8c) {
          local_88[1] = (ID)PTR_BubbleBoxInfo_0048cd88;
          _objc_msgSendSuper2(pIVar33,PTR_s_init_00489660);
          *local_1b0 = 0x6b920d47;
          param_2 = extraout_x1_07;
        }
        goto LAB_00212e20;
      }
      if (local_1a4 < -0x18e213a5) {
        if (local_1a4 == -0x195ba959) {
          uVar38 = 0;
          if (DAT_004af55c != 0) {
            uVar38 = DAT_004af558 / DAT_004af55c;
          }
          _objc_retain(param_3);
          *local_88 = local_1b8;
          auVar27._8_8_ = extraout_x1_17;
          auVar27._0_8_ = local_170;
          auVar46._8_8_ = extraout_x1_17;
          auVar46._0_8_ = local_170;
          iVar39 = -0x1ef1d0d7;
          if (((uVar38 & 0xdb2d2b78) / 0x2c32076c & 1) == 0x73441228) {
            iVar39 = -0x195ba959;
            auVar46 = auVar27;
          }
          goto LAB_002160e8;
        }
        if (local_1a4 == -0x190a8c84) {
          bVar35 = 0x8e2a1bf0 <
                   ((DAT_004af668 - DAT_004af66c) + 0xd0f6a72U | 0xf4c675c1) + 0x4eb0199b;
          iVar40 = 0x69789fd6;
          iVar39 = 0x19018f55;
          goto LAB_00216094;
        }
        goto LAB_00212e20;
      }
      if (local_1a4 == -0x18e213a5) {
        *local_1b0 = 0xb3adc79;
        goto LAB_00212e20;
      }
      if (local_1a4 != -0x18a894c8) goto LAB_00212e20;
      local_159 = *(long *)*local_128 == local_138;
      uVar38 = -(int)((long)((ulong)(DAT_004af618 * DAT_004af61c + 0x44ec2072U & 0xdea871c1) *
                            0xb2142fe5) >> 0x3f);
      bVar34 = 0x2409864b < uVar38;
      bVar35 = uVar38 == 0x2409864c;
      iVar39 = -0x18a894c8;
      iVar40 = 0x6e677357;
      goto LAB_00215874;
    }
    if (local_1a4 < -0x1162a223) {
      if (local_1a4 < -0x14b03484) {
        if (local_1a4 == -0x17e265b5) {
          *local_1b0 = -0x62486aaf;
        }
        else if (local_1a4 == -0x1555bd21) {
          uVar38 = (uint)((ulong)(DAT_004af678 - DAT_004af67c & 0x6c70f897) * 0x2dc38a3 >> 0x36) |
                   0x8a72d660;
          _objc_release(local_e8);
          bVar34 = 0xe64599a8 < uVar38;
          bVar35 = uVar38 == 0xe64599a9;
          iVar39 = -0x1555bd21;
          iVar40 = 0x5de8d4c4;
          param_2 = extraout_x1;
          goto LAB_00215874;
        }
        goto LAB_00212e20;
      }
      if (local_1a4 != -0x14b03484) {
        if (local_1a4 == -0x14343a03) {
          *local_1b0 = 0x1f82bdea;
        }
        goto LAB_00212e20;
      }
      bVar35 = 0xf2398a05 < local_74;
      iVar39 = 0x52388b8e;
      iVar40 = 0x32134fa8;
      auVar45 = auVar1;
    }
    else {
      if (local_1a4 < -0x853c671) {
        if (local_1a4 == -0x1162a223) {
          *local_1b0 = 0x2547fd4f;
        }
        else if (local_1a4 == -0x10ac298e) {
          DAT_004aee5a = local_7a ^ 0x21;
          DAT_004aee5b = DAT_004aee53 ^ 0x78;
          DAT_004aee5c = DAT_004aee54 ^ 0x2e;
          DAT_004aee5d = DAT_004aee55 ^ 0x22;
          DAT_004aee5e = DAT_004aee56 ^ 0xad;
          DAT_004aee5f = DAT_004aee57 ^ 0x5c;
          DAT_004aee69 = DAT_004aee60 ^ 0x80;
          DAT_004aee6a = DAT_004aee61 ^ 0x48;
          DAT_004aee6b = DAT_004aee62 ^ 0xc5;
          DAT_004aee6c = DAT_004aee63 ^ 0x9b;
          DAT_004aee6d = DAT_004aee64 ^ 0x8d;
          DAT_004aee6e = DAT_004aee65 ^ 0xdc;
          DAT_004aee6f = DAT_004aee66 ^ 0xc;
          DAT_004aee70 = DAT_004aee67 ^ 0x82;
          DAT_004aee71 = DAT_004aee68 ^ 0x9c;
          DAT_004aea54 = DAT_004aea4c ^ 0x53;
          DAT_004aea55 = DAT_004aea4d ^ 0x6d;
          DAT_004aea56 = DAT_004aea4e ^ 0x69;
          DAT_004aea57 = DAT_004aea4f ^ 0x21;
          DAT_004aea58 = DAT_004aea50 ^ 0x44;
          *local_1b0 = 0x3d863604;
        }
        goto LAB_00212e20;
      }
      if (local_1a4 == -0x853c671) {
        *local_1b0 = -0x25671080;
        goto LAB_00212e20;
      }
      if (local_1a4 != -0x83598d0) goto LAB_00212e20;
      uVar38 = DAT_004af688 + DAT_004af68c;
      _objc_release(param_3);
      auVar45._8_8_ = extraout_x1_13;
      auVar45._0_8_ = local_d8;
      bVar35 = 0xab847460 < ((uVar38 & 0x3249a98b) * 0x5bcc3be4 | 0x2c067b5b);
      iVar39 = -0x83598d0;
      iVar40 = -0x17e265b5;
    }
LAB_00215f18:
    auVar26._8_8_ = auVar45._8_8_;
    auVar26._0_8_ = local_170;
    auVar46._8_8_ = auVar45._8_8_;
    auVar46._0_8_ = local_170;
    local_d8 = auVar45._0_8_;
    if (bVar35) {
      iVar39 = iVar40;
      auVar46 = auVar26;
    }
  }
  else {
    if (local_1a4 < 0x37c95dcf) {
      if (0x225b79be < local_1a4) {
        if (local_1a4 < 0x2cd7e6ed) {
          if (local_1a4 < 0x2547fd4f) {
            if (local_1a4 == 0x225b79bf) {
              *local_1b0 = 0x778e6b99;
              goto LAB_00212e20;
            }
            if (local_1a4 != 0x24de7c0a) {
              if (local_1a4 == 0x251b019c) {
                *local_1b0 = -0x7027a3d5;
                local_188 = local_120;
              }
              goto LAB_00212e20;
            }
            uVar38 = 0;
            if (DAT_004af524 != 0) {
              uVar38 = DAT_004af520 / DAT_004af524;
            }
            bVar35 = uVar38 == 0xacf68a87;
            iVar39 = 0x36812899;
            iVar40 = 0x1ba4275d;
          }
          else {
            if (0x2bc5d0ba < local_1a4) {
              if (local_1a4 == 0x2bc5d0bb) {
                *local_1b0 = 0x225b254a;
              }
              else if (local_1a4 == 0x2cb27494) {
                uVar38 = 0;
                if (DAT_004af514 != 0) {
                  uVar38 = DAT_004af510 / DAT_004af514;
                }
                bVar35 = 0x28b13817 < (uVar38 & 0x80030203) + 0xb44929a2;
                iVar39 = -0x1162a223;
                iVar40 = 0x2547fd4f;
                goto LAB_00215f18;
              }
              goto LAB_00212e20;
            }
            if (local_1a4 == 0x2547fd4f) {
              uVar38 = (DAT_004af518 + DAT_004af51c ^ 0x1a21001U) & 0x3be2ff35 ^ 0xf2b6b87;
              local_79 = local_78 == 0;
              bVar34 = 0xc74284b6 < uVar38;
              bVar35 = uVar38 == 0xc74284b7;
              iVar39 = -0x1162a223;
              iVar40 = 0x3dc08394;
              goto LAB_00215874;
            }
            if (local_1a4 != 0x254f60dd) goto LAB_00212e20;
            iVar40 = DAT_004af628 * DAT_004af62c;
            _objc_enumerationMutation(local_e8,param_2);
            auVar43._8_8_ = extraout_x1_04;
            auVar43._0_8_ = local_120;
            bVar35 = iVar40 == -0x2279794b;
            iVar39 = 0x456383ef;
            iVar40 = -0x7e8a1a7e;
          }
LAB_00215fe4:
          auVar24._8_8_ = auVar43._8_8_;
          auVar24._0_8_ = local_170;
          auVar46._8_8_ = auVar43._8_8_;
          auVar46._0_8_ = local_170;
          local_120 = auVar43._0_8_;
          if (!bVar35) {
            iVar39 = iVar40;
            auVar46 = auVar24;
          }
          goto LAB_002160e8;
        }
        if (local_1a4 < 0x32134fa8) {
          if (local_1a4 == 0x2cd7e6ed) {
            *local_1b0 = 0x4d4d2270;
          }
          else if (local_1a4 == 0x2eb8ea6b) {
            *local_1b0 = -0x5a9a6a30;
          }
          else if (local_1a4 == 0x30605205) {
            uVar38 = (DAT_004af5e8 * DAT_004af5ec | 0x26cc251eU) * -0x4006334e + 0xebb92a37;
            local_138 = *local_130;
            bVar34 = 0x2eb12665 < uVar38;
            bVar35 = uVar38 == 0x2eb12666;
            iVar39 = 0x30605205;
            iVar40 = -0x25209b31;
            goto LAB_00215874;
          }
          goto LAB_00212e20;
        }
        if (0x35a34204 < local_1a4) {
          if (local_1a4 == 0x35a34205) {
            *local_1b0 = -0x5e5326b9;
          }
          else if (local_1a4 == 0x36812899) {
            DAT_004aee77 = DAT_004aee72 ^ 0x68;
            DAT_004aee78 = DAT_004aee73 ^ 0x37;
            DAT_004aee79 = DAT_004aee74 ^ 0xb9;
            DAT_004aee7a = DAT_004aee75 ^ 0xd6;
            DAT_004aee7b = DAT_004aee76 ^ 0xe6;
            DAT_004aee94 = DAT_004aee8e ^ 0x44;
            DAT_004aee95 = DAT_004aee8f ^ 0xb8;
            DAT_004aee96 = DAT_004aee90 ^ 0x9b;
            DAT_004aee97 = DAT_004aee91 ^ 0xa3;
            DAT_004aee98 = DAT_004aee92 ^ 0xc6;
            DAT_004aee99 = DAT_004aee93 ^ 0xed;
            DAT_004aea2d = DAT_004aea24 ^ 0x42;
            DAT_004aea2e = DAT_004aea25 ^ 0x35;
            DAT_004aea2f = DAT_004aea26 ^ 0x44;
            DAT_004aea30 = ~DAT_004aea27;
            DAT_004aea31 = DAT_004aea28 ^ 0xa1;
            DAT_004aea32 = DAT_004aea29 ^ 0x97;
            DAT_004aea33 = DAT_004aea2a ^ 0xba;
            DAT_004aea34 = DAT_004aea2b ^ 0x36;
            DAT_004aea35 = DAT_004aea2c ^ 0xcb;
            DAT_004ae9f7 = DAT_004ae9f2 ^ 0x99;
            DAT_004ae9f8 = DAT_004ae9f3 ^ 0x59;
            DAT_004ae9f9 = DAT_004ae9f4 ^ 0x34;
            DAT_004ae9fa = DAT_004ae9f5 ^ 0x2c;
            DAT_004ae9fb = DAT_004ae9f6 ^ 0x6f;
            DAT_004aee58 = DAT_004aee50 ^ 0x21;
            DAT_004aee59 = DAT_004aee51 ^ 0x93;
            *local_1b0 = 0x1ba4275d;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x32134fa8) {
          *local_1b0 = 0x52388b8e;
          goto LAB_00212e20;
        }
        if (local_1a4 != 0x350c13da) goto LAB_00212e20;
        uVar38 = (DAT_004af560 - DAT_004af564) + 0xf2b2067eU ^ 0x3ccf7743;
        bVar34 = 0xb16e91c5 < uVar38;
        bVar35 = uVar38 == 0xb16e91c6;
        iVar39 = -0x1e195a8c;
        iVar40 = 0x6b920d47;
LAB_00215874:
        auVar29._8_8_ = param_2;
        auVar29._0_8_ = local_170;
        auVar46._8_8_ = param_2;
        auVar46._0_8_ = local_170;
        if (!bVar34 || bVar35) {
          iVar39 = iVar40;
          auVar46 = auVar29;
        }
        goto LAB_002160e8;
      }
      if (0x19018f54 < local_1a4) {
        if (local_1a4 < 0x1ecc796e) {
          if (local_1a4 == 0x19018f55) {
            iVar40 = 0x5cd6c939;
            if (local_179 == '\0') {
              iVar40 = -0x7027a3d5;
            }
            *local_1b0 = iVar40;
            local_188 = local_178;
          }
          else if (local_1a4 == 0x1a999d51) {
            *local_1b0 = 0x2cb27494;
          }
          else if (local_1a4 == 0x1ba4275d) {
            DAT_004aee77 = DAT_004aee72 ^ 0x68;
            DAT_004aee78 = DAT_004aee73 ^ 0x37;
            DAT_004aee79 = DAT_004aee74 ^ 0xb9;
            DAT_004aee7a = DAT_004aee75 ^ 0xd6;
            DAT_004aee7b = DAT_004aee76 ^ 0xe6;
            DAT_004aee94 = DAT_004aee8e ^ 0x44;
            DAT_004aee95 = DAT_004aee8f ^ 0xb8;
            DAT_004aee96 = DAT_004aee90 ^ 0x9b;
            DAT_004aee97 = DAT_004aee91 ^ 0xa3;
            DAT_004aee98 = DAT_004aee92 ^ 0xc6;
            DAT_004aee99 = DAT_004aee93 ^ 0xed;
            DAT_004aea2d = DAT_004aea24 ^ 0x42;
            DAT_004aea2e = DAT_004aea25 ^ 0x35;
            DAT_004aea2f = DAT_004aea26 ^ 0x44;
            DAT_004aea30 = ~DAT_004aea27;
            DAT_004aea31 = DAT_004aea28 ^ 0xa1;
            DAT_004aea32 = DAT_004aea29 ^ 0x97;
            DAT_004aea33 = DAT_004aea2a ^ 0xba;
            DAT_004aea34 = DAT_004aea2b ^ 0x36;
            DAT_004aea35 = DAT_004aea2c ^ 0xcb;
            DAT_004ae9f7 = DAT_004ae9f2 ^ 0x99;
            DAT_004ae9f8 = DAT_004ae9f3 ^ 0x59;
            DAT_004ae9f9 = DAT_004ae9f4 ^ 0x34;
            DAT_004ae9fa = DAT_004ae9f5 ^ 0x2c;
            DAT_004ae9fb = DAT_004ae9f6 ^ 0x6f;
            DAT_004aee58 = DAT_004aee50 ^ 0x21;
            DAT_004aee59 = DAT_004aee51 ^ 0x93;
            iVar40 = 0x36812899;
            if (((DAT_004af528 & DAT_004af52c) * 0x2390b449 & 0x28d6057d | 0x8c6017d) < 0xf8949ef6)
            {
              iVar40 = 0x18a3a428;
            }
            *local_1b0 = iVar40;
            local_7a = DAT_004aee52;
          }
        }
        else if (local_1a4 < 0x21e24ffa) {
          if (local_1a4 == 0x1ecc796e) {
            DAT_004aea59 = local_7b ^ 0x65;
            DAT_004aea5a = DAT_004aea52 ^ 0x33;
            DAT_004aea5b = DAT_004aea53 ^ 0x68;
            DAT_004aea01 = DAT_004ae9fc ^ 0x65;
            DAT_004aea02 = DAT_004ae9fd ^ 0xf4;
            DAT_004aea03 = DAT_004ae9fe ^ 0xd7;
            DAT_004aea04 = DAT_004ae9ff ^ 0x21;
            DAT_004aea05 = DAT_004aea00 ^ 0xb6;
            DAT_004aee85 = DAT_004aee7c ^ 0x2a;
            DAT_004aee86 = DAT_004aee7d ^ 0x91;
            DAT_004aee87 = DAT_004aee7e ^ 0x71;
            DAT_004aee88 = DAT_004aee7f ^ 0x2e;
            DAT_004aee89 = DAT_004aee80 ^ 0xd1;
            DAT_004aee8a = DAT_004aee81 ^ 0x97;
            DAT_004aee8b = DAT_004aee82 ^ 0x94;
            DAT_004aee8c = DAT_004aee83 ^ 0x47;
            DAT_004aee8d = DAT_004aee84 ^ 0x86;
            DAT_004aee48 = DAT_004aee40 ^ 0x62;
            DAT_004aee49 = DAT_004aee41 ^ 0x3f;
            DAT_004aee4a = DAT_004aee42 ^ 0x29;
            DAT_004aee4b = DAT_004aee43 ^ 0xbd;
            DAT_004aee4c = DAT_004aee44 ^ 0x22;
            DAT_004aee4d = DAT_004aee45 ^ 0xf;
            DAT_004aee4e = DAT_004aee46 ^ 0xca;
            DAT_004aee4f = DAT_004aee47 ^ 0x6a;
            *local_1b0 = -0x631d4ceb;
          }
          else if (local_1a4 == 0x1f82bdea) {
            bVar35 = 0xb97ebc59 <
                     ((DAT_004af5c0 * DAT_004af5c4 & 0x7363d14eU) + 0x5b1a9903 | 0xaef3d74c);
            iVar39 = -0x2e4b3328;
            iVar40 = -0x68025dec;
            auVar45 = auVar4;
            goto LAB_00215f18;
          }
        }
        else {
          if (local_1a4 == 0x21e24ffa) {
            uVar38 = DAT_004af638 & DAT_004af63c;
            uVar42 = *(undefined8 *)(*local_140 + local_1a0 * 8);
            uVar37 = _objc_alloc(PTR_BubbleBoxInfo_0048cb40);
            local_168 = _objc_msgSend(uVar37,local_148,uVar42);
            _objc_msgSend(local_a0,local_150);
            auVar46 = _objc_retainAutoreleasedReturnValue();
            iVar39 = -0x53b6b805;
            if (0xbed2aa5e < uVar38 * 0x9763866 + 0x44d5e0fe) {
              iVar39 = 0x21e24ffa;
            }
            goto LAB_002160e8;
          }
          if (local_1a4 == 0x225b254a) {
            _objc_release(local_170);
            _objc_release(local_168);
            local_190 = local_1a0 + 1;
            iVar40 = -0x6c085bbf;
            if (local_190 != local_198) {
              iVar40 = -0x2c24dd87;
            }
            *local_1b0 = iVar40;
            param_2 = extraout_x1_12;
          }
        }
        goto LAB_00212e20;
      }
      if (local_1a4 < 0xb3adc79) {
        if (local_1a4 == -0x70e957b) {
          *local_1b0 = -0x4ddceaec;
        }
        else {
          if (local_1a4 == -0x28a355a) {
            uVar38 = ((uint)((ulong)(DAT_004af5b8 ^ DAT_004af5bc) * 0xd38024f >> 0x3b) ^ 0x4aaf47b3)
                     + 0x7080fc32;
            local_110 = PTR_s_array_00489b98;
            puStack_108 = PTR__OBJC_CLASS___NSMutableArray_0048ca60;
            bVar34 = 0x3154d14a < uVar38;
            bVar35 = uVar38 == 0x3154d14b;
            iVar39 = -0x14343a03;
            goto LAB_00215fac;
          }
          if (local_1a4 == 0x538405e) {
            local_f0 = PTR_s_count_00489538;
            auVar45 = _objc_msgSend(local_e8);
            auVar43._8_8_ = auVar45._8_8_;
            auVar43._0_8_ = local_120;
            bVar35 = auVar45._0_8_ == 0;
            iVar39 = 0x7bfe77ec;
            iVar40 = 0x6ac3a58d;
            goto LAB_00215fe4;
          }
        }
        goto LAB_00212e20;
      }
      if (0x163f8689 < local_1a4) {
        if (local_1a4 == 0x163f868a) {
          *local_1b0 = 0x30605205;
        }
        else if (local_1a4 == 0x18a3a428) {
          *local_1b0 = -0x7e87a1e2;
        }
        goto LAB_00212e20;
      }
      if (local_1a4 != 0xb3adc79) {
        if (local_1a4 == 0x15f3e3c1) {
          uVar38 = (uint)((ulong)((DAT_004af5a0 ^ DAT_004af5a4) * -0x7faa484d ^ 0x404f3de1) *
                          0x23efc9df >> 0x3d);
          bVar34 = 0xd042e085 < uVar38;
          bVar35 = uVar38 == 0xd042e086;
          iVar40 = 0x2cd7e6ed;
          iVar39 = -0x7dfad5b4;
          goto LAB_00215dd4;
        }
        goto LAB_00212e20;
      }
      bVar35 = 0x768db9de < ((uint)(DAT_004af660 * DAT_004af664) / 0x747618 & 0x2e3) * -0x18303f9e;
      iVar40 = -0x4cde882b;
      iVar39 = 0x7d41a263;
    }
    else if (local_1a4 < 0x5bf5a5cc) {
      if (local_1a4 < 0x4956bb78) {
        if (0x3dc08393 < local_1a4) {
          if (local_1a4 < 0x45e127b6) {
            if (local_1a4 == 0x3dc08394) {
              *local_1b0 = -0x7a7ce25f;
            }
            else if (local_1a4 == 0x456383ef) {
              _objc_enumerationMutation(local_e8,param_2);
              *local_1b0 = 0x254f60dd;
              param_2 = extraout_x1_03;
            }
          }
          else if (local_1a4 == 0x45e127b6) {
            *local_1b0 = -0x65fe9b58;
          }
          else if (local_1a4 == 0x4822775c) {
            _objc_msgSend(local_e8,local_f0);
            *local_1b0 = -0x220650a1;
            param_2 = extraout_x1_10;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x37c95dcf) {
          *local_1b0 = -0x2c24dd87;
          local_190 = 0;
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x3cfc3307) {
          _objc_release(param_3);
          *local_1b0 = -0x83598d0;
          param_2 = extraout_x1_19;
          goto LAB_00212e20;
        }
        if (local_1a4 != 0x3d863604) goto LAB_00212e20;
        DAT_004aee5a = local_7a ^ 0x21;
        DAT_004aee5b = DAT_004aee53 ^ 0x78;
        DAT_004aee5c = DAT_004aee54 ^ 0x2e;
        DAT_004aee5d = DAT_004aee55 ^ 0x22;
        DAT_004aee5e = DAT_004aee56 ^ 0xad;
        DAT_004aee5f = DAT_004aee57 ^ 0x5c;
        DAT_004aee69 = DAT_004aee60 ^ 0x80;
        DAT_004aee6a = DAT_004aee61 ^ 0x48;
        DAT_004aee6b = DAT_004aee62 ^ 0xc5;
        uVar38 = 0;
        if (DAT_004af53c != 0) {
          uVar38 = DAT_004af538 / DAT_004af53c;
        }
        DAT_004aee6c = DAT_004aee63 ^ 0x9b;
        DAT_004aee6d = DAT_004aee64 ^ 0x8d;
        DAT_004aee6e = DAT_004aee65 ^ 0xdc;
        DAT_004aee6f = DAT_004aee66 ^ 0xc;
        DAT_004aee70 = DAT_004aee67 ^ 0x82;
        DAT_004aee71 = DAT_004aee68 ^ 0x9c;
        DAT_004aea54 = DAT_004aea4c ^ 0x53;
        DAT_004aea55 = DAT_004aea4d ^ 0x6d;
        DAT_004aea56 = DAT_004aea4e ^ 0x69;
        DAT_004aea57 = DAT_004aea4f ^ 0x21;
        DAT_004aea58 = DAT_004aea50 ^ 0x44;
        local_7b = DAT_004aea51;
        bVar35 = 0x5667c291 < ((uVar38 + 0xd34a0534) / 0xad83f5cb | 0x4f3c445c);
        iVar40 = -0x10ac298e;
        iVar39 = -0x20a66014;
      }
      else if (local_1a4 < 0x4f2aee42) {
        if (local_1a4 != 0x4956bb78) {
          if (local_1a4 == 0x49c38893) {
            DAT_004d1858 = 1;
            puVar41 = puVar41 + -0xd0;
            *local_1b0 = 0x4f2aee42;
          }
          else if (local_1a4 == 0x4d4d2270) {
            bVar35 = local_f9 == '\0';
            iVar39 = 0x7bfe77ec;
            iVar40 = -0x5d79d9e8;
            goto LAB_00215c7c;
          }
          goto LAB_00212e20;
        }
        uVar38 = 0;
        if (DAT_004af5d4 != 0) {
          uVar38 = DAT_004af5d0 / DAT_004af5d4;
        }
        bVar35 = 0x88b95ecd < (uVar38 * 0x22808b0c & 0x6ab0c084) + 0x2eca4d66;
        iVar40 = -0x853c671;
        iVar39 = -0x25671080;
      }
      else {
        if (local_1a4 < 0x5b38ca45) {
          if (local_1a4 == 0x4f2aee42) {
            DAT_004d1858 = 1;
            local_88 = (ID *)(puVar41 + -0x10);
            local_90 = (undefined8 *)(puVar41 + -0x50);
            puVar41 = puVar41 + -0xd0;
            iVar39 = 0x4f2aee42;
            local_98 = puVar41;
            if (((DAT_004af548 & DAT_004af54c | 0x4f21aeb6) + 0x2de0e54f ^ 0x79f6f26) < 0xf920a214)
            {
              iVar39 = -0x70e957b;
              auVar46 = auVar8;
            }
            goto LAB_002160e8;
          }
          if (local_1a4 == 0x52388b8e) {
            local_78 = DAT_004d1858;
            bVar35 = (DAT_004af508 | DAT_004af50c | 0x8311d3bc) == 0x7d6afd62;
            iVar39 = 0x32134fa8;
            iVar40 = 0x1a999d51;
            auVar43 = auVar6;
            goto LAB_00215fe4;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x5b38ca45) {
          *local_1b0 = -0x56322077;
          goto LAB_00212e20;
        }
        if (local_1a4 != 0x5b7a7508) goto LAB_00212e20;
        iVar40 = DAT_004af648 * DAT_004af64c;
        _objc_msgSend(local_170,local_158,local_168);
        bVar35 = 0xadc2a7ff <
                 (uint)((ulong)(iVar40 + 0xa9ec6aadU & 0xaca845d4) * 0x7d1c97b1 >> 0x3e);
        iVar40 = -0x3bcef3ac;
        iVar39 = 0x2bc5d0bb;
        param_2 = extraout_x1_11;
      }
    }
    else {
      if (0x6b920d46 < local_1a4) {
        if (local_1a4 < 0x778e6b99) {
          if (local_1a4 < 0x6e677357) {
            if (local_1a4 == 0x6b920d47) {
              iVar40 = DAT_004af568 + DAT_004af56c;
              local_88[1] = (ID)PTR_BubbleBoxInfo_0048cd88;
              auVar45 = _objc_msgSendSuper2(pIVar33,PTR_s_init_00489660);
              auVar43._8_8_ = auVar45._8_8_;
              auVar43._0_8_ = local_120;
              local_a0 = auVar45._0_8_;
              local_a1 = local_a0 == 0;
              bVar35 = iVar40 == 0x4c875fd7;
              iVar39 = -0x1e195a8c;
              iVar40 = -0x66e5af91;
              goto LAB_00215fe4;
            }
            if (local_1a4 == 0x6c19e7f1) {
              _objc_msgSend(local_e8,local_118,local_90,local_98,0x10);
              *local_1b0 = -0x23817ee0;
              param_2 = extraout_x1_00;
            }
          }
          else {
            if (local_1a4 == 0x6e677357) {
              bVar35 = local_159 == '\0';
              iVar39 = -0x426f05be;
              iVar40 = -0x67939f8e;
              goto LAB_00215c7c;
            }
            if (local_1a4 == 0x72d13a48) {
              *local_1b0 = -0x18a894c8;
            }
          }
          goto LAB_00212e20;
        }
        if (0x7bfe77eb < local_1a4) {
          if (local_1a4 == 0x7bfe77ec) {
            _objc_release(local_e8);
            *local_1b0 = 0x2eb8ea6b;
            param_2 = extraout_x1_18;
          }
          else if (local_1a4 == 0x7d41a263) {
            *local_1b0 = -0x4cde882b;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x778e6b99) {
          bVar35 = 0xd4508659 < (DAT_004af5e0 - DAT_004af5e4 & 0x63edc71U) + 0x53eec1fb;
          iVar39 = 0x30605205;
          iVar40 = 0x163f868a;
          auVar45 = auVar3;
          goto LAB_00215f18;
        }
        if (local_1a4 != 0x7bf7d82c) goto LAB_00212e20;
        uVar38 = DAT_004af578 + DAT_004af57c;
        local_b0 = PTR_s_objectForKeyedSubscript__00489d00;
        _objc_msgSend(param_3,PTR_s_objectForKeyedSubscript__00489d00,
                      &PTR____CFConstantStringClassReference_004aefc0);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        local_b8 = PTR_s_stringValue_0048b1c8;
        _objc_msgSend();
        uVar42 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_a0,PTR_s_setName__0048b1b8,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aeee0);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar37,local_b8);
        uVar42 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_a0,PTR_s_setBubbleId__0048b1d8,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef80);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar37,local_b8);
        uVar42 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_a0,PTR_s_setAuth__0048b1c0,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef60);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar37,local_b8);
        uVar42 = _objc_retainAutoreleasedReturnValue();
        local_c0 = PTR_s_setCover__0048b280;
        _objc_msgSend(local_a0,PTR_s_setCover__0048b280,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef00);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar37,local_b8);
        uVar42 = _objc_retainAutoreleasedReturnValue();
        local_c8 = PTR_s_setIcon__0048b288;
        _objc_msgSend(local_a0,PTR_s_setIcon__0048b288,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef40);
        uVar37 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(uVar37,local_b8);
        uVar42 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_a0,PTR_s_setDownload__0048b290,uVar42);
        _objc_release(uVar42);
        _objc_release(uVar37);
        _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aeec0);
        local_d0 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_d0,local_b8);
        auVar45 = _objc_retainAutoreleasedReturnValue();
        local_e0 = PTR_s_setReceipt__0048b298;
        bVar35 = 0x411d9eba < ((uVar38 & 0xfe059efc) + 0xa0a1df6d & 0xea228c75);
        iVar39 = 0x7bf7d82c;
        iVar40 = 0x35a34205;
        goto LAB_00215f18;
      }
      if (local_1a4 < 0x5de8d4c4) {
        if (local_1a4 == 0x5bf5a5cc) {
          local_140 = local_90 + 1;
          bVar35 = (DAT_004af5f8 - DAT_004af5fc & 0x3de19631U) == 0xca287f4c;
          iVar40 = 0x5bf5a5cc;
          iVar39 = 0x251b019c;
          goto LAB_002160e4;
        }
        if (local_1a4 == 0x5c72f732) {
          *local_1b0 = -0x41ac1d24;
          goto LAB_00212e20;
        }
        if (local_1a4 != 0x5cd6c939) goto LAB_00212e20;
        bVar35 = 0xb5fa1b2d < ((DAT_004af670 & DAT_004af674) / 0x4a68b01e | 0xfdf7dcf9);
        iVar40 = -0x1555bd21;
        iVar39 = -0x2acf08f1;
      }
      else {
        if (local_1a4 < 0x69789fd6) {
          if (local_1a4 == 0x5de8d4c4) {
            *local_1b0 = -0x32b1e3da;
          }
          else if (local_1a4 == 0x66be0db4) {
            uVar38 = DAT_004af588 ^ DAT_004af58c;
            _objc_msgSend(local_a0,local_e0,local_d8);
            _objc_release(local_d8);
            _objc_release(local_d0);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aeea0);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,PTR_s_safeString__0048b2a0,uVar37);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,PTR_s_setVersion__0048b1d0,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef60);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar37,local_b8);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,local_c0,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef00);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar37,local_b8);
            uVar42 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(local_a0,local_c8,uVar42);
            _objc_release(uVar42);
            _objc_release(uVar37);
            _objc_msgSend(param_3,local_b0,&PTR____CFConstantStringClassReference_004aef20);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            lVar36 = _objc_msgSend(uVar37,PTR_s_integerValue_00489ce0);
            _objc_release(uVar37);
            _objc_msgSend(local_a0,PTR_s_setIsParent__0048b2a8,lVar36 == 0);
            puVar30 = PTR__OBJC_CLASS___NSArray_0048ca20;
            _objc_msgSend(param_3,PTR_s_objectForKey__0048a370,
                          &PTR____CFConstantStringClassReference_004aefa0);
            uVar37 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(puVar30,PTR_s_arrayWithArray__0048b2b0,uVar37);
            local_e8 = _objc_retainAutoreleasedReturnValue();
            _objc_release(uVar37);
            auVar44._8_8_ = extraout_x1_05;
            auVar44._0_8_ = local_f8;
            bVar35 = (uVar38 + 0xf4d60b3e | 0x76f07e84) == 0x64c8efc1;
            iVar40 = -0x5597f0b8;
            iVar39 = -0x51836160;
LAB_002160e4:
            auVar21._8_8_ = auVar44._8_8_;
            auVar21._0_8_ = local_170;
            auVar46._8_8_ = auVar44._8_8_;
            auVar46._0_8_ = local_170;
            local_f8 = auVar44._0_8_;
            if (bVar35) {
              iVar39 = iVar40;
              auVar46 = auVar21;
            }
            goto LAB_002160e8;
          }
          goto LAB_00212e20;
        }
        if (local_1a4 == 0x69789fd6) goto LAB_00215154;
        if (local_1a4 != 0x6ac3a58d) goto LAB_00212e20;
        uVar38 = 0;
        if (DAT_004af594 != 0) {
          uVar38 = DAT_004af590 / DAT_004af594;
        }
        bVar35 = 0x8cf7660c <
                 (uint)((ulong)((uVar38 | 0xea14bbd4) >> 2) * 0x2b77cce5 >> 0x3a) * 0x5fa2b45e;
        iVar40 = -0x220650a1;
        iVar39 = 0x4822775c;
      }
    }
LAB_00216094:
    auVar28._8_8_ = param_2;
    auVar28._0_8_ = local_170;
    auVar46._8_8_ = param_2;
    auVar46._0_8_ = local_170;
    if (bVar35) {
      iVar39 = iVar40;
      auVar46 = auVar28;
    }
  }
LAB_002160e8:
  param_2 = auVar46._8_8_;
  local_170 = auVar46._0_8_;
  *local_1b0 = iVar39;
  goto LAB_00212e20;
}



// ----- -[BubbleBoxInfo isValidString:] @ 002161b0 -----

/* Function Stack Size: 0x18 bytes */

bool BubbleBoxInfo::isValidString_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  int local_80;
  byte local_7b;
  byte local_7a;
  byte local_79;
  long local_78;
  char local_69;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_0048c9b0;
  local_80 = 0x1a20de48;
LAB_0021624c:
  do {
    while( true ) {
      if (local_80 < 0x34fb1c) break;
      if (local_80 < 0x3ff1726c) {
        if (local_80 < 0x1f5cd7c2) {
          if (local_80 == 0x34fb1c) {
            uVar1 = DAT_004af6d8 & DAT_004af6dc;
            _objc_release(param_3);
            bVar4 = 0x9779621b < (uVar1 + 0x5f637166 ^ 0x32bffc89) + 0x27d07e8b;
            local_80 = -0x29dbeed9;
LAB_002166dc:
            if (bVar4) {
              local_80 = 0x34fb1c;
            }
          }
          else if (local_80 == 0x1a20de48) {
            local_80 = 0x1f5cd7c2;
            if (0xd2034f4f <
                (((DAT_004af690 | DAT_004af694) ^ 0x11048148) & 0xb126b148) + 0x7b0b682e) {
              local_80 = 0x5e6e6af4;
            }
          }
        }
        else if (local_80 == 0x1f5cd7c2) {
          uVar1 = DAT_004af698 | DAT_004af69c;
          uVar5 = _objc_msgSend(puVar2,PTR_s_class_00489650);
          local_69 = _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar5);
          local_80 = 0x5e6e6af4;
          if ((uint)((int)((long)((ulong)uVar1 * 0x8c81e25d) >> 0x3f) * 0x39146152) / 0x4bfb835a <
              0x883d5026) {
            local_80 = 0x27be191d;
          }
        }
        else if (local_80 == 0x25367988) {
          bVar4 = 0x968b16a4 <
                  ((DAT_004af6b0 + DAT_004af6b4 & 0x2b716dc7U) + 0x7563e34b & 0x51322254);
          iVar6 = -0x7247b482;
LAB_00216644:
          local_80 = -0x651999ed;
          if (bVar4) {
            local_80 = iVar6;
          }
        }
        else if (local_80 == 0x27be191d) {
          local_80 = -0x110cc17a;
        }
      }
      else if (local_80 < 0x628cf8d8) {
        if (local_80 == 0x3ff1726c) {
          uVar1 = (DAT_004af6c0 - DAT_004af6c4) * -0x9897358 + 0x3f823349;
          bVar3 = 0xe212be4b < uVar1;
          bVar4 = uVar1 == 0xe212be4c;
          local_80 = -0x74a543e6;
LAB_00216864:
          if (!bVar3 || bVar4) {
            local_80 = -0x4807cfb8;
          }
        }
        else if (local_80 == 0x5e6e6af4) {
          uVar5 = _objc_msgSend(puVar2,PTR_s_class_00489650);
          _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar5);
          local_80 = 0x1f5cd7c2;
        }
      }
      else if (local_80 == 0x628cf8d8) {
        local_80 = 0x25367988;
      }
      else if (local_80 == 0x6a26f20b) {
        iVar6 = DAT_004af6a8 * DAT_004af6ac;
        local_78 = _objc_msgSend(param_3,PTR_s_length_00489d78);
        bVar4 = ((iVar6 * 0x2e60b186 ^ 0x10500410U) & 0x5eda4472) == 0x418c5d0d;
        local_80 = 0x628cf8d8;
LAB_00216810:
        if (bVar4) {
          local_80 = -0x8d16522;
        }
      }
      else if (local_80 == 0x6beecc98) {
        _objc_release(param_3);
        local_80 = 0x34fb1c;
      }
    }
    if (-0x4807cfb9 < local_80) {
      if (local_80 < -0x122f7cd0) {
        if (local_80 == -0x4807cfb8) {
          uVar1 = ((DAT_004af6c8 | DAT_004af6cc) * -0x33ef5064 & 0x3d875800) + 0x5c46d92a;
          bVar3 = 0x24802e84 < uVar1;
          bVar4 = uVar1 == 0x24802e85;
          local_80 = -0x41db9b69;
          goto LAB_00216864;
        }
        if (local_80 == -0x41db9b69) {
          local_80 = -0x5d3cabbe;
          local_7a = local_79;
        }
        else if (local_80 == -0x29dbeed9) {
          return (bool)local_7b;
        }
      }
      else if (local_80 == -0x122f7cd0) {
        local_80 = 0x3ff1726c;
      }
      else if (local_80 == -0x110cc17a) {
        local_80 = -0x6bce884e;
        if (local_69 == '\0') {
          local_80 = -0x5d3cabbe;
        }
        local_7a = 0;
      }
      else if (local_80 == -0x8d16522) {
        _objc_msgSend(param_3,PTR_s_length_00489d78);
        local_80 = 0x6a26f20b;
      }
      goto LAB_0021624c;
    }
    if (local_80 < -0x6bce884e) {
      if (local_80 == -0x74a543e6) {
        local_80 = -0x4807cfb8;
      }
      else if (local_80 == -0x7247b482) {
        local_80 = -0x651999ed;
      }
    }
    else {
      if (local_80 == -0x6bce884e) {
        uVar1 = 0;
        if (DAT_004af6a4 != 0) {
          uVar1 = DAT_004af6a0 / DAT_004af6a4;
        }
        bVar4 = uVar1 == 0x829eac60;
        local_80 = 0x6a26f20b;
        goto LAB_00216810;
      }
      if (local_80 == -0x651999ed) {
        uVar1 = 0;
        if (DAT_004af6bc != 0) {
          uVar1 = DAT_004af6b8 / DAT_004af6bc;
        }
        local_79 = local_78 != 0;
        bVar4 = 0x67c3b4b5 < ((uVar1 ^ 0x80240440 | 0x4ac35b9f) ^ 0x6bf510e3);
        iVar6 = -0x122f7cd0;
        goto LAB_00216644;
      }
      if (local_80 == -0x5d3cabbe) {
        local_7b = local_7a;
        uVar1 = 0;
        if (DAT_004af6d4 != 0) {
          uVar1 = DAT_004af6d0 / DAT_004af6d4;
        }
        bVar4 = 0x5e320886 < (uVar1 + 0xfebcaf0b & 0x91d232c0);
        local_80 = 0x6beecc98;
        goto LAB_002166dc;
      }
    }
  } while( true );
}



// ----- -[BubbleBoxInfo safeString:] @ 002168bc -----

/* Function Stack Size: 0x18 bytes */

ID BubbleBoxInfo::safeString_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  ID IVar7;
  int iVar8;
  int local_ac;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  undefined *local_98;
  char local_89;
  undefined8 local_88;
  char local_79;
  undefined *local_78;
  
  _objc_retain(param_3);
  puVar3 = PTR__OBJC_CLASS___NSString_0048c9b0;
  puVar2 = PTR_s_class_00489650;
  local_ac = 0x44312586;
LAB_0021695c:
  while (0x29abfdd0 < local_ac) {
    if (local_ac < 0x65d17a82) {
      if (local_ac < 0x5678e838) {
        if (local_ac < 0x44312586) {
          if (local_ac == 0x29abfdd1) {
            bVar4 = 0x6c3ac842 < (DAT_004af720 | DAT_004af724) * 0x248ab6d1 + 0x96afbd3d;
            local_ac = -0x5f726e4e;
            iVar8 = -0x4e302f23;
LAB_002171b8:
            if (bVar4) {
              local_ac = iVar8;
            }
          }
          else if (local_ac == 0x3297ba33) {
            local_ac = 0x7c3d1ca2;
          }
        }
        else {
          if (local_ac == 0x44312586) {
            bVar4 = 0x46bdfe96 <
                    ((DAT_004af6e0 | DAT_004af6e4) * -0x5ee7b037 & 0x4aae2583) * 0x2c21a2f3;
            local_ac = -0x1b5c7206;
            iVar8 = 0x59aa5cc2;
            goto LAB_002171b8;
          }
          if (local_ac == 0x494d1710) {
            _objc_release(param_3);
            IVar7 = _objc_autoreleaseReturnValue(local_a8);
            return IVar7;
          }
        }
      }
      else if (local_ac < 0x59aa5cc2) {
        if (local_ac == 0x5678e838) {
          local_ac = -0x13e4e7c2;
        }
        else if (local_ac == 0x5681846e) {
          uVar1 = DAT_004af718 & DAT_004af71c;
          local_89 = _objc_msgSend(param_3,local_78,local_88);
          local_ac = 0x5681846e;
          if ((uVar1 + 0x207695c8 & 0xcd909f3b | 0x1808338) != 0x38ea1bdd) {
            local_ac = -0x44a735f4;
          }
        }
      }
      else {
        if (local_ac == 0x59aa5cc2) {
          uVar1 = (DAT_004af6e8 + DAT_004af6ec + 0x35679671U | 0x3445abf5) + 0x330291d4;
          uVar6 = _objc_msgSend(puVar3,puVar2);
          local_78 = PTR_s_isKindOfClass__00489c00;
          local_79 = _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar6);
          bVar5 = 0x9e209c82 < uVar1;
          bVar4 = uVar1 == 0x9e209c83;
          local_ac = -0x1b5c7206;
          iVar8 = 0x5678e838;
          goto LAB_00216fc8;
        }
        if (local_ac == 0x5d478aa3) {
          _objc_retain(param_3);
          goto LAB_00216cc8;
        }
      }
    }
    else if (local_ac < 0x73971fb9) {
      if (local_ac < 0x67a449f8) {
        if (local_ac == 0x65d17a82) {
          local_ac = 0x494d1710;
          local_a8 = (cfstringStruct *)param_3;
        }
        else if (local_ac == 0x65dd9b3b) {
LAB_00216cc8:
          local_ac = 0x224f3369;
        }
      }
      else if (local_ac == 0x67a449f8) {
        _objc_msgSend(param_3,local_98);
        local_a0 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();
        local_ac = 0x7d3582db;
      }
      else if (local_ac == 0x6b7b546d) {
        local_ac = 0x67a449f8;
      }
    }
    else if (local_ac < 0x7d3582db) {
      if (local_ac == 0x73971fb9) {
        local_ac = -0x42c648b4;
      }
      else if (local_ac == 0x7c3d1ca2) {
        bVar4 = (uint)((ulong)((DAT_004af708 - DAT_004af70c) + 0xc772c9d) * 0x2b2913e3 >> 0x3d) ==
                0xa2a5736f;
        iVar8 = 0x3297ba33;
        local_ac = 0x65d17a82;
        goto LAB_00217100;
      }
    }
    else if (local_ac == 0x7d3582db) {
      local_ac = 0x494d1710;
      local_a8 = local_a0;
    }
    else if (local_ac == 0x7e8435d6) {
      local_ac = -0x13abb5a0;
    }
  }
  if (-0x42c648b5 < local_ac) {
    if (local_ac < -0x13abb5a0) {
      if (local_ac < -0x1b5c7206) {
        if (local_ac == -0x42c648b4) {
          uVar1 = 0;
          if (DAT_004af73c != 0) {
            uVar1 = DAT_004af738 / DAT_004af73c;
          }
          local_98 = PTR_s_stringValue_0048b1c8;
          local_ac = 0x6b7b546d;
          if ((uVar1 | 0xa7b19016) + 0x4f15eaab < 0xc277087e) {
            local_ac = -0x42c648b4;
          }
        }
        else if (local_ac == -0x2ada08b8) {
          local_ac = -0x53e1ae9f;
          if (local_89 == '\0') {
            local_ac = 0x494d1710;
          }
          local_a8 = &cf___;
        }
      }
      else if (local_ac == -0x1b5c7206) {
        uVar6 = _objc_msgSend(puVar3,puVar2);
        _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar6);
        local_ac = 0x59aa5cc2;
      }
      else if (local_ac == -0x13e4e7c2) {
        local_ac = -0xeea65db;
        if (0x484d4cbd <
            ((uint)((ulong)(DAT_004af6f0 | DAT_004af6f4) * 0x44b27dc7 >> 0x3e) | 0x56d3eed6)) {
          local_ac = -0x59d6fd33;
        }
      }
    }
    else if (local_ac < -0x2c71d38) {
      if (local_ac == -0x13abb5a0) {
        uVar1 = 0;
        if (DAT_004af704 != 0) {
          uVar1 = DAT_004af700 / DAT_004af704;
        }
        local_ac = 0x3297ba33;
        if ((uint)((ulong)uVar1 * 0x13fb1fc3 >> 0x3b) != 0x49ec0299) {
          local_ac = 0x7c3d1ca2;
        }
      }
      else if (local_ac == -0xeea65db) {
        local_ac = -0x59d6fd33;
      }
    }
    else if (local_ac == -0x2c71d38) {
      bVar4 = local_79 == '\0';
      iVar8 = -0x7251cbaf;
      local_ac = 0x65dd9b3b;
LAB_00217100:
      if (bVar4) {
        local_ac = iVar8;
      }
    }
    else if (local_ac == 0x224f3369) {
      uVar1 = DAT_004af6f8 + DAT_004af6fc + 0x56cf00c;
      _objc_retain(param_3);
      bVar5 = 0xa437496a < uVar1;
      bVar4 = uVar1 == 0xa437496b;
      local_ac = 0x224f3369;
      iVar8 = 0x7e8435d6;
LAB_00216fc8:
      if (!bVar5 || bVar4) {
        local_ac = iVar8;
      }
    }
    goto LAB_0021695c;
  }
  if (-0x59d6fd34 < local_ac) {
    if (local_ac < -0x4e302f23) {
      if (local_ac == -0x59d6fd33) {
        local_ac = -0x2c71d38;
      }
      else if ((local_ac == -0x53e1ae9f) &&
              (local_ac = 0x73971fb9,
              ((DAT_004af730 & DAT_004af734) + 0x789b48c3 & 0x3e8998f6) != 0x4956d9c)) {
        local_ac = -0x42c648b4;
      }
    }
    else if (local_ac == -0x4e302f23) {
      local_ac = -0x5f726e4e;
    }
    else if (local_ac == -0x44a735f4) {
      local_ac = 0x29abfdd1;
    }
    goto LAB_0021695c;
  }
  if (local_ac < -0x6d83dd58) {
    if (local_ac != -0x795a5e13) {
      if (local_ac == -0x7251cbaf) {
        local_88 = _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,puVar2);
        local_ac = -0x795a5e13;
      }
      goto LAB_0021695c;
    }
  }
  else {
    if (local_ac != -0x6d83dd58) {
      if (local_ac == -0x5f726e4e) {
        bVar4 = 0xba45b0f7 < ((uint)(DAT_004af728 - DAT_004af72c) / 0xa72573d8 | 0xcfef315a);
        local_ac = -0x5f726e4e;
        iVar8 = -0x2ada08b8;
        goto LAB_002171b8;
      }
      goto LAB_0021695c;
    }
    _objc_msgSend(param_3,local_78,local_88);
  }
  local_ac = 0x5681846e;
  goto LAB_0021695c;
}



// ----- -[BubbleBoxInfo name] @ 00217208 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::name(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = 0;
  if (DAT_004af744 != 0) {
    uVar1 = DAT_004af740 / DAT_004af744;
  }
  local_7c = -0x1d0dcfcd;
  iVar3 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c = iVar3, iVar3 = local_7c, local_7c < -0x167ac5c5) {
            if (local_7c < -0x4f39215f) {
              if (local_7c == -0x76171cb9) {
                iVar3 = 0x102076d5;
              }
              else if (local_7c == -0x63a351c3) {
                iVar3 = 0x34562387;
                if ((DAT_004af750 * DAT_004af754 + 0x6411c8d2U & 0x11932cd5) == 0x6371fa9) {
                  iVar3 = 0x2cf15473;
                }
              }
              else if (local_7c == -0x5fcc5fa0) {
                iVar3 = 0x988a1f3;
                local_70 = (ID *)(param_1 + 0x18);
              }
            }
            else {
              iVar3 = -0x5fcc5fa0;
              if (local_7c != -0x4f39215f) {
                if (local_7c == -0x23a53219) {
                  iVar3 = 0x57f5323d;
                }
                else {
                  iVar3 = local_7c;
                  if ((local_7c == -0x1d0dcfcd) &&
                     (iVar3 = -0x4f39215f,
                     0x490d03b3 < (uVar1 * 0x4ffe32ab + 0xcc7e7016 | 0x6c4450e9))) {
                    iVar3 = -0x5fcc5fa0;
                  }
                }
              }
            }
          }
          if (local_7c < 0x2cf15473) break;
          iVar3 = 0x34562387;
          if (local_7c != 0x2cf15473) {
            if (local_7c == 0x34562387) {
              local_78 = *local_70;
              iVar3 = 0x2cf15473;
              if (((DAT_004af758 ^ DAT_004af75c) + 0x8d3e76bc ^ 0x59d6ae0) + 0x2579f700 < 0x87427ff9
                 ) {
                iVar3 = -0x23a53219;
              }
            }
            else {
              iVar3 = local_7c;
              if (local_7c == 0x57f5323d) {
                uVar2 = 0;
                if (DAT_004af764 != 0) {
                  uVar2 = DAT_004af760 / DAT_004af764;
                }
                iVar3 = -0x167ac5c5;
                if ((uVar2 + 0x3decbf66 | 0x213403e5) < 0xa716d453) {
                  iVar3 = -0x76171cb9;
                }
              }
            }
          }
        }
        if (local_7c != -0x167ac5c5) break;
        iVar3 = -0x76171cb9;
      }
      if (local_7c != 0x988a1f3) break;
      iVar3 = -0x63a351c3;
    }
  } while (local_7c != 0x102076d5);
  return local_78;
}



// ----- -[BubbleBoxInfo setName:] @ 002174c8 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setName_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar4;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004af770 + DAT_004af774;
  local_7c = 0x4e90026;
  iVar4 = local_7c;
LAB_0021758c:
  do {
    while (local_7c = iVar4, iVar4 = local_7c, local_7c < -0x22f0e8d) {
      if (local_7c < -0x2fd34d8d) {
        if (local_7c == -0x6dc55cc6) {
          iVar4 = -0x6dc55cc6;
          local_70 = (ID *)(param_1 + 0x18);
          if (0x66922ed6 <
              ((uint)((ulong)(uint)((DAT_004af778 + DAT_004af77c) * -0x47766d89) * 0x1353a1d5 >>
                     0x3b) | 0x89e2fc09)) {
            iVar4 = 0x53afb9e1;
          }
        }
        else if (local_7c == -0x4ffe6f5e) {
          _objc_release(local_78);
          param_2 = extraout_x1_02;
          iVar4 = -0x2fd34d8d;
        }
        else if (local_7c == -0x4a19918c) {
          bVar3 = (((DAT_004af780 * DAT_004af784 | 0x7fc00000U) ^ 0x8000) & 0x82408750) ==
                  0x1a71735d;
          iVar4 = 0x64b3e0c2;
LAB_0021782c:
          if (bVar3) {
            iVar4 = -0xf061ac4;
          }
        }
      }
      else if (local_7c == -0x2fd34d8d) {
        iVar2 = DAT_004af798 + DAT_004af79c;
        _objc_release(local_78);
        param_2 = extraout_x1_00;
        iVar4 = -0x22f0e8d;
        if ((iVar2 * 0xdbf73e5 + 0x4755b833U | 0xe9357624) == 0xcc3d8abf) {
          iVar4 = -0x2fd34d8d;
        }
      }
      else {
        iVar4 = -0x6dc55cc6;
        if ((local_7c != -0x2640d2ba) && (iVar4 = local_7c, local_7c == -0xf061ac4)) {
          _objc_retain(param_3,param_2);
          *local_70 = param_3;
          param_2 = extraout_x1;
          iVar4 = 0x64b3e0c2;
        }
      }
    }
    if (0x53afb9e0 < local_7c) {
      if (local_7c == 0x53afb9e1) {
        iVar4 = -0x4a19918c;
      }
      else {
        if (local_7c == 0x64b3e0c2) {
          iVar4 = DAT_004af788 + DAT_004af78c;
          _objc_retain(param_3,param_2);
          local_78 = *local_70;
          *local_70 = param_3;
          bVar3 = (uint)((ulong)(iVar4 + 0x4dcbb762) * 0x59e1e4bf >> 0x3e) * 0x3a9d179c ==
                  0x524eba1e;
          iVar4 = 0x7b0912e9;
          param_2 = extraout_x1_01;
          goto LAB_0021782c;
        }
        if (local_7c == 0x7b0912e9) {
          iVar4 = 0x42baa6d2;
        }
      }
      goto LAB_0021758c;
    }
    if (local_7c == 0x4e90026) {
      iVar4 = -0x2640d2ba;
      if ((uint)((ulong)((uVar1 | 0x8622071e) + 0x6d97e1e9 >> 1) * 0x107e739 >> 0x36) < 0x866d178) {
        iVar4 = -0x6dc55cc6;
      }
    }
    else if (local_7c == 0x42baa6d2) {
      iVar4 = -0x4ffe6f5e;
      if (((DAT_004af790 | DAT_004af794) & 0xff5b6e4 | 0xff536a4) != 0x9bc08f47) {
        iVar4 = -0x2fd34d8d;
      }
    }
    else if (local_7c == -0x22f0e8d) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo auth] @ 00217880 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::auth(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x274dd70d;
  iVar1 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar1, iVar1 = local_7c, 0x274dd70c < local_7c) {
            if (local_7c < 0x59cc22fd) {
              if (local_7c == 0x274dd70d) {
                iVar1 = 0x59cc22fd;
                if ((uint)((ulong)(DAT_004af7a0 - DAT_004af7a4 ^ 0x92c4ed43) * 0x4d05dc9d >> 0x3e)
                    == 0x24bf5c15) {
                  iVar1 = -0x3f7767d8;
                }
              }
              else if ((local_7c == 0x298fda0c) &&
                      (iVar1 = -0x2b47c682,
                      ((DAT_004af7b0 + DAT_004af7b4) * 0x5051ed27 & 0x9c3cb1eU | 0xc28314) <
                      0x537da197)) {
                iVar1 = 0x109b7060;
              }
            }
            else if (local_7c == 0x59cc22fd) {
              iVar1 = 0x1ba17dcc;
              local_70 = (ID *)(param_1 + 0x20);
              if (0x6a31c935 <
                  (uint)((ulong)((DAT_004af7a8 + DAT_004af7ac | 0x3e3d0dc5U) + 0x22b2637d) *
                         0x9dcf56a5 >> 0x3f)) {
                iVar1 = 0x59cc22fd;
              }
            }
            else if (local_7c == 0x5e8864a6) {
              local_78 = *local_70;
              iVar1 = 0x298fda0c;
            }
          }
          if (local_7c < 0x109b7060) break;
          if (local_7c == 0x109b7060) {
            iVar1 = -0x64dad2a9;
            if (((DAT_004af7b8 & DAT_004af7bc) * -0x4ae4e966 + 0xd0951e73 & 0x258bc19c) ==
                0xd77f1cbb) {
              iVar1 = -0x2b47c682;
            }
          }
          else if (local_7c == 0x1ba17dcc) {
            iVar1 = 0x5e8864a6;
          }
        }
        iVar1 = 0x59cc22fd;
      } while (local_7c == -0x3f7767d8);
      if (local_7c != -0x2b47c682) break;
      iVar1 = 0x109b7060;
    }
    iVar1 = local_7c;
  } while (local_7c != -0x64dad2a9);
  return local_78;
}



// ----- -[BubbleBoxInfo setAuth:] @ 00217b08 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setAuth_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int local_74;
  ID *local_70;
  
  uVar1 = 0;
  if (DAT_004af7c4 != 0) {
    uVar1 = DAT_004af7c0 / DAT_004af7c4;
  }
  local_74 = 0x672d269e;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (-0x21767b14 < local_74) {
            if (local_74 < 0x6ac20076) {
              if (local_74 == -0x21767b13) {
                uVar2 = 0;
                if (DAT_004af7cc != 0) {
                  uVar2 = DAT_004af7c8 / DAT_004af7cc;
                }
                _objc_retain(param_3);
                param_2 = extraout_x1_01;
                local_74 = -0x21767b13;
                local_70 = (ID *)(param_1 + 0x20);
                if (0x22c69f2d < (uVar2 * -0x51074cc5 ^ 0xc54474) + 0xb24ecd46) {
                  local_74 = -0x6c576cfe;
                }
              }
              else if ((local_74 == 0x672d269e) &&
                      (local_74 = -0x2bb254ff, (uVar1 & 0xdf8629a1 | 0xde022820) != 0xc60d213a)) {
                local_74 = -0x21767b13;
              }
            }
            else if (local_74 == 0x6ac20076) {
              local_74 = -0x4b1af515;
            }
            else if (local_74 == 0x6cb22453) {
              IVar3 = *local_70;
              *local_70 = param_3;
              _objc_release(IVar3,param_2);
              param_2 = extraout_x1_00;
              local_74 = -0x611a34eb;
            }
          }
          if (-0x4b1af516 < local_74) break;
          if (local_74 == -0x6c576cfe) {
            local_74 = 0x6cb22453;
          }
          else if ((local_74 == -0x611a34eb) &&
                  (local_74 = 0x6ac20076,
                  0x78be4eb <
                  (((uint)(DAT_004af7d0 * DAT_004af7d4) / 0x4b1ff444 | 0x78d7fbd4) ^ 0x8383e71b))) {
            local_74 = -0x4b1af515;
          }
        }
        if (local_74 != -0x4b1af515) break;
        local_74 = -0x4b028b0f;
        if (0x3241f3f5 < (DAT_004af7d8 * DAT_004af7dc + 0x2d1409ffU & 0x2578e6b6)) {
          local_74 = 0x6ac20076;
        }
      }
      if (local_74 != -0x2bb254ff) break;
      _objc_retain(param_3);
      param_2 = extraout_x1;
      local_74 = -0x21767b13;
    }
  } while (local_74 != -0x4b028b0f);
  return;
}



// ----- -[BubbleBoxInfo path] @ 00217dbc -----

/* WARNING: Removing unreachable block (ram,0x00217f58) */
/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::path(ID param_1,SEL param_2)

{
  int iVar1;
  int local_6c;
  ID local_68;
  ID *local_60;
  
  local_6c = -0x91f1702;
  iVar1 = local_6c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_6c = iVar1, iVar1 = local_6c, local_6c < -0x91f1702) {
            if (local_6c < -0x3ea21b01) {
              if (local_6c == -0x7ab0e357) {
                iVar1 = 0x63ae3948;
              }
              else if ((local_6c == -0x6f928892) &&
                      (iVar1 = -0x6f928892, local_60 = (ID *)(param_1 + 0x28),
                      ((DAT_004af7e8 ^ DAT_004af7ec) & 0x2210432e) * 0x4fd7eb75 + 0xf861ad99 <
                      0x911ad232)) {
                iVar1 = -0x327ca8ad;
              }
            }
            else if (local_6c == -0x3ea21b01) {
              iVar1 = 0x63ae3948;
              if (((DAT_004af7f0 ^ DAT_004af7f4) & 0xa7404033 | 0xa6000031) < 0x2729d484) {
                iVar1 = -0x7ab0e357;
              }
            }
            else if (local_6c == -0x327ca8ad) {
              iVar1 = -0x3ea21b01;
            }
          }
          if (0x23e28daa < local_6c) break;
          if (local_6c == -0x91f1702) {
            iVar1 = -0x6f928892;
          }
          else if (local_6c == 0x1958ca6) {
            iVar1 = 0x3b9718a0;
          }
        }
        iVar1 = -0x6f928892;
      } while (local_6c == 0x23e28dab);
      if (local_6c != 0x63ae3948) break;
      local_68 = *local_60;
      iVar1 = 0x1958ca6;
    }
    iVar1 = local_6c;
  } while (local_6c != 0x3b9718a0);
  return local_68;
}



// ----- -[BubbleBoxInfo setPath:] @ 00217fbc -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setPath_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_6c;
  
  pIVar1 = (ID *)(param_1 + 0x28);
  local_6c = 0x44e8893b;
  do {
    while( true ) {
      while( true ) {
        while (0x60505aa < local_6c) {
          if (local_6c < 0x44e8893b) {
            if (local_6c == 0x60505ab) {
              _objc_retain(param_3,param_2);
              IVar3 = *pIVar1;
              *pIVar1 = param_3;
              _objc_release(IVar3);
              param_2 = extraout_x1_00;
              local_6c = 0x29fe33e;
            }
            else if (local_6c == 0x30b9de70) {
              uVar2 = 0;
              if (DAT_004af814 != 0) {
                uVar2 = DAT_004af810 / DAT_004af814;
              }
              local_6c = -0x347768a4;
              if (((uint)((ulong)uVar2 * 0x2c7b2c83 >> 0x3d) | 0xc1c7eea) * -0x5c74333b < 0x7666b2f)
              {
                local_6c = 0x45d2b9c0;
              }
            }
          }
          else if (local_6c == 0x45d2b9c0) {
            local_6c = -0x347768a4;
          }
          else if ((local_6c == 0x44e8893b) &&
                  (local_6c = 0x29fe33e,
                  (DAT_004af800 * DAT_004af804 ^ 0x4401f06U | 0x1905c0c9) * -0x560d863c ==
                  -0x637595f1)) {
            local_6c = 0x60505ab;
          }
        }
        if (local_6c < -0x806c34a) break;
        if (local_6c == -0x806c34a) {
          local_6c = 0x30b9de70;
        }
        else if (local_6c == 0x29fe33e) {
          uVar2 = 0;
          if (DAT_004af80c != 0) {
            uVar2 = DAT_004af808 / DAT_004af80c;
          }
          _objc_retain(param_3,param_2);
          IVar3 = *pIVar1;
          *pIVar1 = param_3;
          _objc_release(IVar3);
          param_2 = extraout_x1;
          local_6c = 0x60505ab;
          if (((uVar2 | 0xe4a066bb) + 0xcd5cda53 | 0x5495d10) != 0x327a74b2) {
            local_6c = -0x806c34a;
          }
        }
      }
      if (local_6c != -0x347768a4) break;
      local_6c = -0x30126e30;
    }
  } while (local_6c != -0x30126e30);
  return;
}



// ----- -[BubbleBoxInfo version] @ 00218220 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::version(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = 0;
  if (DAT_004af824 != 0) {
    uVar1 = DAT_004af820 / DAT_004af824;
  }
  local_7c = 0x415bdb78;
  iVar3 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar3, iVar3 = local_7c, local_7c < -0xbd92d56) {
            if (local_7c < -0x333804b4) {
              if (local_7c == -0x7f178ec7) {
                iVar3 = -0xbd92d56;
                if (((DAT_004af840 & DAT_004af844 ^ 0x1000112) & 0x9880316) != 0xec075cc0) {
                  iVar3 = 0x7e14d4b2;
                }
              }
              else if (local_7c == -0x79454dfb) {
                iVar3 = -0x276943e5;
              }
              else if (local_7c == -0x34fddb09) {
                uVar2 = 0;
                if (DAT_004af82c != 0) {
                  uVar2 = DAT_004af828 / DAT_004af82c;
                }
                iVar3 = -0x34fddb09;
                local_70 = (ID *)(param_1 + 0x30);
                if (((uVar2 | 0x2247e7ca) + 0xf609bdf6 & 0x329190d0) < 0x8af9c385) {
                  iVar3 = -0x79454dfb;
                }
              }
            }
            else if (local_7c == -0x333804b4) {
              local_78 = *local_70;
              iVar3 = 0x4ff9e51a;
              if ((uint)-(int)((long)((ulong)((DAT_004af838 | DAT_004af83c) + 0x7a853315) *
                                     0x832c56b1) >> 0x3f) < 0xc402314b) {
                iVar3 = -0x1ad6cfd9;
              }
            }
            else if (local_7c == -0x276943e5) {
              uVar2 = 0;
              if (DAT_004af834 != 0) {
                uVar2 = DAT_004af830 / DAT_004af834;
              }
              iVar3 = -0x333804b4;
              if ((uVar2 / 0x7760a642) * -0x1ba99c2c + 0x6443bfb8 < 0x24abebea) {
                iVar3 = 0x4ff9e51a;
              }
            }
            else if (local_7c == -0x1ad6cfd9) {
              iVar3 = -0x7f178ec7;
            }
          }
          if (0x4ff9e519 < local_7c) break;
          if (local_7c == -0xbd92d56) {
            iVar3 = 0x7e14d4b2;
          }
          else {
            iVar3 = -0x34fddb09;
            if (((local_7c != 0x3f620caf) && (iVar3 = local_7c, local_7c == 0x415bdb78)) &&
               (iVar3 = -0x34fddb09, 0xd2926a62 < (uVar1 & 0x96d08f6d ^ 0xd9febd9a) + 0xdddd9d0a)) {
              iVar3 = 0x3f620caf;
            }
          }
        }
        iVar3 = -0x333804b4;
      } while (local_7c == 0x4ff9e51a);
      if (local_7c != 0x7e14d4b2) break;
      iVar3 = 0x70fb2b10;
      if (((DAT_004af848 | DAT_004af84c) + 0xdd3e9b28 & 0x9b41164) == 0x9414ac2) {
        iVar3 = -0xbd92d56;
      }
    }
    iVar3 = local_7c;
  } while (local_7c != 0x70fb2b10);
  return local_78;
}



// ----- -[BubbleBoxInfo setVersion:] @ 00218560 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setVersion_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  ID IVar3;
  SEL extraout_x1;
  int local_74;
  ID *local_70;
  
  uVar1 = DAT_004af850 + DAT_004af854;
  local_74 = -0x386bce5;
  iVar2 = local_74;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_74 = iVar2, iVar2 = local_74, local_74 < -0x386bce5) {
            if (local_74 < -0x4738cb10) {
              if (local_74 == -0x750cbd4f) {
                iVar2 = 0x40b90fd0;
                local_70 = (ID *)(param_1 + 0x30);
                if ((int)((long)((ulong)(DAT_004af858 | DAT_004af85c | 0xda9f32cf) * 0x92d74dcd) >>
                         0x3f) * -0x2d5b3e48 != -0x3b55c677) {
                  iVar2 = -0x3633f456;
                }
              }
              else if (local_74 == -0x6692198b) {
                iVar2 = 0x3b062c9c;
              }
            }
            else if (local_74 == -0x4738cb10) {
              iVar2 = -0x6692198b;
            }
            else if (local_74 == -0x3633f456) {
              iVar2 = 0x710cfe86;
            }
          }
          if (0x3b062c9b < local_74) break;
          if (local_74 == -0x386bce5) {
            iVar2 = -0x750cbd4f;
            if ((uint)((ulong)uVar1 * 0x118bc84d >> 0x3c) == 0xc1a362d5) {
              iVar2 = 0x40b90fd0;
            }
          }
          else if ((local_74 == 0x180348cd) &&
                  (iVar2 = -0x6692198b,
                  (DAT_004af860 - DAT_004af864 & 0x1bc37ce1U ^ 0xf9e1a802) < 0x9fee7f0e)) {
            iVar2 = -0x4738cb10;
          }
        }
        iVar2 = -0x750cbd4f;
      } while (local_74 == 0x40b90fd0);
      if (local_74 != 0x710cfe86) break;
      _objc_retain(param_3,param_2);
      IVar3 = *local_70;
      *local_70 = param_3;
      _objc_release(IVar3);
      param_2 = extraout_x1;
      iVar2 = 0x180348cd;
    }
    iVar2 = local_74;
  } while (local_74 != 0x3b062c9c);
  return;
}



// ----- -[BubbleBoxInfo bubbleId] @ 002187c4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::bubbleId(ID param_1,SEL param_2)

{
  int iVar1;
  int local_24;
  ID local_20;
  
  local_24 = 0x1da954be;
  iVar1 = local_24;
  do {
    while( true ) {
      while( true ) {
        while (local_24 = iVar1, local_24 < -0x1aa294ae) {
          iVar1 = -0x1aa294ae;
          if (((local_24 != -0x58effd80) && (iVar1 = local_24, local_24 == -0x4fd7dc1e)) &&
             (iVar1 = -0x58effd80,
             ((DAT_004af870 - DAT_004af874 | 0xc7575e1U) ^ 0x7ad95649) / 0x6d791d7 != 0xefdc70af)) {
            iVar1 = -0x1aa294ae;
          }
        }
        if (local_24 != -0x1aa294ae) break;
        iVar1 = -0x58effd80;
        if ((uint)-(int)((long)((ulong)((DAT_004af878 - DAT_004af87c) + 0xb6b3e392U ^ 0xbfdd5d57) *
                               0xae017b83) >> 0x3f) < 0x74a26604) {
          iVar1 = -0x17642a76;
        }
      }
      if (local_24 != 0x1da954be) break;
      local_20 = *(ID *)(param_1 + 0x38);
      iVar1 = -0x4fd7dc1e;
    }
    iVar1 = local_24;
  } while (local_24 != -0x17642a76);
  return local_20;
}



// ----- -[BubbleBoxInfo setBubbleId:] @ 0021891c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setBubbleId_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar4;
  int local_74;
  ID *local_70;
  
  uVar1 = DAT_004af880 & DAT_004af884;
  local_74 = 0x3ffe4386;
LAB_002189cc:
  if (local_74 < -0x765106) {
    if (local_74 < -0x3bbde197) {
      if (local_74 == -0x58004358) {
        IVar3 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar3,param_2);
        param_2 = extraout_x1;
        iVar4 = 0x375366f5;
      }
      else if (local_74 == -0x4ad91ed9) {
        iVar4 = -0x765106;
      }
      else {
        iVar4 = -0x12117139;
        if (local_74 != -0x3c496a7d) goto LAB_002189cc;
      }
    }
    else if (local_74 == -0x3bbde197) {
      _objc_retain(param_3);
      param_2 = extraout_x1_00;
      iVar4 = -0x2ac02f64;
    }
    else if (local_74 == -0x2ac02f64) {
      uVar2 = DAT_004af898 * DAT_004af89c;
      _objc_retain(param_3);
      param_2 = extraout_x1_02;
      iVar4 = -0x3bbde197;
      if (((uint)((ulong)uVar2 * 0x5d4680a3 >> 0x3e) | 0x584eb76a) * 0x2cf53a05 < 0x920d9d64) {
        iVar4 = 0x76a7fa4;
      }
    }
    else {
      if (local_74 != -0x12117139) goto LAB_002189cc;
      iVar4 = -0x4ad91ed9;
      local_70 = (ID *)(param_1 + 0x38);
      if (0x3246c71c <
          (uint)((ulong)((DAT_004af888 | DAT_004af88c) + 0x37e3cdc8 ^ 0x5ec30) * 0x785da43d >> 0x3d)
         ) {
        iVar4 = -0x3c496a7d;
      }
    }
  }
  else {
    if (0x375366f4 < local_74) {
      if (local_74 == 0x375366f5) {
        uVar2 = DAT_004af8a8 | DAT_004af8ac;
        IVar3 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar3,param_2);
        param_2 = extraout_x1_01;
        iVar4 = 0x375366f5;
        if ((uVar2 & 0x8e6a6bb7) * -0x36e514b1 != -0x4ff9e1b0) {
          iVar4 = 0x5a5343a0;
        }
        goto LAB_00218c94;
      }
      if (local_74 == 0x3ffe4386) {
        iVar4 = -0x3c496a7d;
        if ((uVar1 & 0xff7aefbf | 0x6d7a2f3f) < 0x981dd542) {
          iVar4 = -0x12117139;
        }
        goto LAB_00218c94;
      }
      if (local_74 == 0x5a5343a0) {
        return;
      }
      goto LAB_002189cc;
    }
    if (local_74 == -0x765106) {
      uVar2 = 0;
      if (DAT_004af894 != 0) {
        uVar2 = DAT_004af890 / DAT_004af894;
      }
      iVar4 = -0x2ac02f64;
      if (0xb9c5a383 < (uVar2 * 0x44fbde9e & 0xaf37ad46 ^ 0x850f7f9d)) {
        iVar4 = -0x3bbde197;
      }
    }
    else {
      iVar4 = 0x191c1024;
      if (local_74 == 0x76a7fa4) goto LAB_00218c94;
      if (local_74 != 0x191c1024) goto LAB_002189cc;
      iVar4 = 0x375366f5;
      if ((DAT_004af8a0 & DAT_004af8a4 ^ 0x4c02082 | 0xc1195b11) + 0xe7a63a10 < 0x30d7dfad) {
        iVar4 = -0x58004358;
      }
    }
  }
LAB_00218c94:
  local_74 = iVar4;
  goto LAB_002189cc;
}



// ----- -[BubbleBoxInfo icon] @ 00218cd0 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::icon(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x3aabacd2;
  iVar1 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar1, iVar1 = local_7c, 0x2dd90270 < local_7c) {
            if (local_7c < 0x56a2c00d) {
              if (local_7c == 0x2dd90271) {
                iVar1 = -0xb129d12;
                if (((DAT_004af8c8 ^ DAT_004af8cc) + 0x44241ad3 ^ 0xc00450dc) < 0xe53d621) {
                  iVar1 = -0x462c9b0a;
                }
              }
              else if ((local_7c == 0x3aabacd2) &&
                      (iVar1 = 0x1714eadd,
                      (DAT_004af8b0 + DAT_004af8b4 + 0x61f8e840U >> 4) / 0xe2dd9c7 + 0x8b814487 <
                      0xfbd1bec4)) {
                iVar1 = 0x56a2c00d;
              }
            }
            else if (local_7c == 0x56a2c00d) {
              iVar1 = 0x2350e968;
              local_70 = (ID *)(param_1 + 0x40);
              if (((DAT_004af8b8 - DAT_004af8bc) + 0x823971e1U & 0x5bad2310 | 0x52ad0100) ==
                  0x9622dd7d) {
                iVar1 = 0x56a2c00d;
              }
            }
            else if (local_7c == 0x5aa6ac82) {
              local_78 = *local_70;
              iVar1 = -0xcf56b84;
            }
          }
          if (-0xb129d13 < local_7c) break;
          if (local_7c == -0x462c9b0a) {
            iVar1 = 0x2dd90271;
          }
          else if ((local_7c == -0xcf56b84) &&
                  (iVar1 = 0x2dd90271, (DAT_004af8c0 + DAT_004af8c4) * 0x63ac53a == -0x70bfb543)) {
            iVar1 = -0x462c9b0a;
          }
        }
        iVar1 = 0x56a2c00d;
      } while (local_7c == 0x1714eadd);
      if (local_7c != 0x2350e968) break;
      iVar1 = 0x5aa6ac82;
    }
    iVar1 = local_7c;
  } while (local_7c != -0xb129d12);
  return local_78;
}



// ----- -[BubbleBoxInfo setIcon:] @ 00218f44 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setIcon_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004af8d0 & DAT_004af8d4;
  local_7c = 0x7049cd93;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < -0x3cb65c8e) {
            if (local_7c < -0x47ac234d) {
              if (local_7c == -0x6d367c90) {
                local_7c = -0x65fcd6d2;
                if (((DAT_004af8e0 - DAT_004af8e4) + 0x5dce57c6U | 0x3fbc8a58) == 0x7282ae31) {
                  local_7c = 0x1fb8840a;
                }
              }
              else if (local_7c == -0x65fcd6d2) {
                uVar2 = DAT_004af8e8 ^ DAT_004af8ec;
                *local_70 = param_3;
                _objc_release(local_78);
                param_2 = extraout_x1;
                local_7c = -0x65fcd6d2;
                if ((uVar2 | 0x89f945d) * 0x6a162a2c != 0x816f53) {
                  local_7c = 0x23715ded;
                }
              }
            }
            else if (local_7c == -0x47ac234d) {
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_01;
              local_7c = -0x3df63eef;
            }
            else if (local_7c == -0x3df63eef) {
              uVar2 = DAT_004af8d8 * DAT_004af8dc;
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_00;
              local_7c = -0x22eb51b1;
              local_70 = (ID *)(param_1 + 0x40);
              if (0x37f719df <
                  (uint)((int)((long)((ulong)uVar2 * 0x88f3ca3b) >> 0x3f) * 0x679b8d41) / 0x99cf9fa4
                 ) {
                local_7c = -0x3df63eef;
              }
            }
          }
          if (0x1fb88409 < local_7c) break;
          if (local_7c == -0x3cb65c8e) {
            local_78 = *local_70;
            local_7c = -0x6d367c90;
          }
          else if (local_7c == -0x22eb51b1) {
            local_7c = -0x3cb65c8e;
          }
        }
        if (local_7c != 0x1fb8840a) break;
        *local_70 = param_3;
        _objc_release(local_78);
        param_2 = extraout_x1_02;
        local_7c = -0x65fcd6d2;
      }
      if (local_7c != 0x7049cd93) break;
      local_7c = -0x3df63eef;
      if ((uVar1 & 0x10ac76ac) * -0x70a124b9 + 0x6cf2ec7f < 0x681fcb76) {
        local_7c = -0x47ac234d;
      }
    }
  } while (local_7c != 0x23715ded);
  return;
}



// ----- -[BubbleBoxInfo cover] @ 00219210 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::cover(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x262f7f56;
  iVar2 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c = iVar2, iVar2 = local_7c, local_7c < 0x16c928f7) {
            if (local_7c < -0x41a1197b) {
              iVar2 = 0x3e898baf;
              if (((local_7c != -0x783e358c) && (iVar2 = 0x5a94357c, local_7c != -0x4b07053c)) &&
                 (iVar2 = local_7c, local_7c == -0x423e61ae)) {
                iVar2 = -0x41a1197b;
              }
            }
            else if (local_7c == -0x41a1197b) {
              iVar2 = 0x54136b24;
              if (0x8b91d22b <
                  ((uint)((ulong)(uint)(DAT_004af918 + DAT_004af91c) * 0x13cb0a73 >> 0x39) +
                   0x63e83047 & 0x2340300a)) {
                iVar2 = -0x423e61ae;
              }
            }
            else if (local_7c == -0x262f7f56) {
              iVar2 = 0x5a94357c;
            }
            else if (local_7c == -0x1c1867c7) {
              iVar2 = 0x423107c0;
            }
          }
          if (0x423107bf < local_7c) break;
          if (local_7c == 0x16c928f7) {
            iVar2 = -0x423e61ae;
            if (((DAT_004af910 ^ DAT_004af914) + 0xdd285235 & 0x15deb866) < 0x45f7b2eb) {
              iVar2 = -0x41a1197b;
            }
          }
          else if (local_7c == 0x17d4ad6a) {
            iVar2 = 0x16c928f7;
          }
          else if ((local_7c == 0x3e898baf) &&
                  (local_78 = *local_70, iVar2 = 0x17d4ad6a,
                  0xaeed8524 <
                  ((DAT_004af908 & DAT_004af90c) + 0x9799f63d ^ 0x26a6d4b2) + 0x61a2781c)) {
            iVar2 = -0x783e358c;
          }
        }
        if (local_7c != 0x423107c0) break;
        iVar2 = 0x3e898baf;
        if (((DAT_004af900 | DAT_004af904) + 0x6d4099bb ^ 0xae2f9e77) + 0x887bc099 < 0x1b2fba10) {
          iVar2 = -0x783e358c;
        }
      }
      if (local_7c != 0x5a94357c) break;
      uVar1 = 0;
      if (DAT_004af8fc != 0) {
        uVar1 = DAT_004af8f8 / DAT_004af8fc;
      }
      iVar2 = -0x4b07053c;
      local_70 = (ID *)(param_1 + 0x48);
      if (((uVar1 ^ 0x6a30b5b) + 0x3e47092b & 0xb4c9d934) < 0x81ed3c01) {
        iVar2 = -0x1c1867c7;
      }
    }
  } while (local_7c != 0x54136b24);
  return local_78;
}



// ----- -[BubbleBoxInfo setCover:] @ 00219530 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setCover_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004af920 & DAT_004af924;
  local_7c = 0x5635cd9c;
  do {
    while( true ) {
      while( true ) {
        while (local_7c < 0x5635cd9c) {
          if (local_7c == -0x2d962b88) {
            local_78 = *local_70;
            local_7c = 0x605f06eb;
          }
          else if (local_7c == -0x2cbb4f18) {
            uVar2 = DAT_004af928 - DAT_004af92c;
            _objc_retain(param_3);
            param_2 = extraout_x1_00;
            local_7c = 0x7616ea77;
            local_70 = (ID *)(param_1 + 0x48);
            if ((uint)((ulong)uVar2 * 0x11247477 >> 0x3c) * 0x924fc53 == 0x882dc9f) {
              local_7c = -0x2cbb4f18;
            }
          }
          else if (local_7c == -0x1ce36f3) {
            _objc_retain(param_3);
            param_2 = extraout_x1;
            local_7c = -0x2cbb4f18;
          }
        }
        if (local_7c != 0x5635cd9c) break;
        local_7c = -0x1ce36f3;
        if ((uVar1 * 0x82da3a0 ^ 0x20b2b628) + 0x56f12209 < 0xc6251fcf) {
          local_7c = -0x2cbb4f18;
        }
      }
      if (local_7c != 0x7616ea77) break;
      local_7c = -0x2d962b88;
    }
  } while (local_7c != 0x605f06eb);
  *local_70 = param_3;
  _objc_release(local_78,param_2);
  return;
}



// ----- -[BubbleBoxInfo download] @ 002196e4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::download(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x73a516ca;
LAB_002197f4:
  if (local_7c < -0x3194333) {
    if (local_7c < -0x35d289da) {
      iVar1 = -0x3508c84c;
      if (local_7c != -0x7d43cdcc) {
        if (local_7c == -0x73a516ca) {
          iVar1 = -0x7d43cdcc;
          if ((DAT_004af930 - DAT_004af934 & 0x24004010U) < 0x75c92ef9) {
            iVar1 = -0x3508c84c;
          }
        }
        else {
          iVar1 = 0x113b7dd3;
          if (local_7c != -0x5b32fb55) goto LAB_002197f4;
        }
      }
    }
    else if (local_7c == -0x35d289da) {
      iVar1 = -0x3194333;
      if (((uint)((ulong)(DAT_004af958 + DAT_004af95c + 0x4aaa1b3) * 0x393f44f7 >> 0x3d) |
          0x556ff226) == 0x9434c779) {
        iVar1 = -0x35d289da;
      }
    }
    else if (local_7c == -0x3508c84c) {
      iVar1 = 0x58969dc2;
      local_70 = (ID *)(param_1 + 0x50);
      if (0x3675b64b < ((DAT_004af938 | DAT_004af93c) / 0x96c5235c | 0x30f7a42) * -0x455d45b4) {
        iVar1 = -0x3508c84c;
      }
    }
    else {
      if (local_7c != -0x2b09c35a) goto LAB_002197f4;
      iVar1 = 0x33acd186;
    }
  }
  else {
    if (local_7c < 0x33acd186) {
      if (local_7c == 0x113b7dd3) {
        local_78 = *local_70;
        iVar1 = -0x2b09c35a;
        if (0xcf7021e0 < (((DAT_004af948 | DAT_004af94c) ^ 0x4231000) & 0xd3b5910)) {
          iVar1 = -0x5b32fb55;
        }
        goto LAB_002199fc;
      }
      if (local_7c == 0x2a52994e) {
        iVar1 = -0x35d289da;
        goto LAB_002199fc;
      }
      if (local_7c == -0x3194333) {
        return local_78;
      }
      goto LAB_002197f4;
    }
    if (local_7c == 0x33acd186) {
      iVar1 = -0x35d289da;
      if (((DAT_004af950 & DAT_004af954) / 0x6d44816d) * -0x4a04f2 == -0x2769506d) {
        iVar1 = 0x2a52994e;
      }
    }
    else {
      if (local_7c == 0x58969dc2) {
        iVar1 = 0x755e5fd3;
        goto LAB_002199fc;
      }
      if (local_7c != 0x755e5fd3) goto LAB_002197f4;
      iVar1 = -0x5b32fb55;
      if (((uint)((ulong)(DAT_004af940 ^ DAT_004af944 ^ 0x31ab70b9) * 0x709bced3 >> 0x3e) |
          0x2e5511f2) < 0xce9af3f9) {
        iVar1 = 0x113b7dd3;
      }
    }
  }
LAB_002199fc:
  local_7c = iVar1;
  goto LAB_002197f4;
}



// ----- -[BubbleBoxInfo setDownload:] @ 00219a34 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setDownload_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar2 = DAT_004af960 & DAT_004af964;
  local_7c = -0x656294ac;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < 0x4d8f5b1b) {
            if (local_7c < -0x18a2fee2) {
              if (local_7c == -0x656294ac) {
                local_7c = -0x501ced86;
                if (0xf43125f0 < (uVar2 * 0x486a018 + 0x59ba42a4 | 0xafcc0890)) {
                  local_7c = 0x3e28fe4b;
                }
              }
              else if (local_7c == -0x5a0d97f0) {
                _objc_release(local_78,param_2);
                param_2 = extraout_x1_02;
                local_7c = 0x6161f35a;
              }
              else if (local_7c == -0x501ced86) {
                uVar3 = DAT_004af968 & DAT_004af96c;
                _objc_retain(param_3);
                param_2 = extraout_x1;
                local_7c = -0x501ced86;
                local_70 = (ID *)(param_1 + 0x50);
                if (uVar3 * 0x411a648e != 0x244aa764) {
                  local_7c = 0x54fc9387;
                }
              }
            }
            else if (local_7c == -0x18a2fee2) {
              *local_70 = param_3;
              local_7c = 0x51c9de98;
            }
            else if (local_7c == 0x35f2cb62) {
              local_7c = 0x51c9de98;
              if ((((DAT_004af970 | DAT_004af974) & 0x5e5a7c6) + 0x883495cf | 0xf1093ab4) <
                  0x78ae8335) {
                local_7c = -0x18a2fee2;
              }
            }
            else if (local_7c == 0x3e28fe4b) {
              _objc_retain(param_3);
              param_2 = extraout_x1_00;
              local_7c = -0x501ced86;
            }
          }
          if (local_7c < 0x6161f35a) break;
          if (local_7c == 0x6161f35a) {
            _objc_release(local_78,param_2);
            param_2 = extraout_x1_01;
            local_7c = 0x4d8f5b1b;
          }
          else if (local_7c == 0x7927641e) {
            local_7c = 0x7f42362f;
          }
          else if (local_7c == 0x7f42362f) {
            uVar3 = 0;
            if (DAT_004af984 != 0) {
              uVar3 = DAT_004af980 / DAT_004af984;
            }
            local_7c = -0x5a0d97f0;
            if ((uVar3 & 0x19a29d20) + 0xfce0b714 < 0xffb78064) {
              local_7c = 0x6161f35a;
            }
          }
        }
        if (local_7c != 0x51c9de98) break;
        iVar1 = DAT_004af978 + DAT_004af97c;
        local_78 = *local_70;
        *local_70 = param_3;
        local_7c = 0x51c9de98;
        if (iVar1 * -0x3f0f5e74 + 0xeaaa8687U < 0x72beaebf) {
          local_7c = 0x7927641e;
        }
      }
      if (local_7c != 0x54fc9387) break;
      local_7c = 0x35f2cb62;
    }
  } while (local_7c != 0x4d8f5b1b);
  return;
}



// ----- -[BubbleBoxInfo receipt] @ 00219d7c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::receipt(ID param_1,SEL param_2)

{
  int iVar1;
  int local_4c;
  ID local_48;
  ID *local_40;
  
  local_4c = -0x9cab918;
  iVar1 = local_4c;
  do {
    while( true ) {
      while (local_4c = iVar1, iVar1 = local_4c, local_4c < 0x552609ac) {
        if (local_4c < -0x5f4e4b2) {
          if (local_4c == -0x58a88202) {
            iVar1 = 0x6f79452f;
          }
          else if ((local_4c == -0x9cab918) &&
                  (iVar1 = 0x359500,
                  ((DAT_004af990 & DAT_004af994) * -0x490c8814 + 0x402c6650 & 0x2b9f39c) ==
                  0xbab7503a)) {
            iVar1 = 0x552609ac;
          }
        }
        else if (local_4c == -0x5f4e4b2) {
          iVar1 = 0x77ff3f00;
        }
        else if ((local_4c == 0x359500) &&
                (iVar1 = -0x58a88202, local_40 = (ID *)(param_1 + 0x58),
                DAT_004af998 * DAT_004af99c * -0x79faeb54 == -0x6f7817ae)) {
          iVar1 = 0x552609ac;
        }
      }
      if (0x6b65a1ea < local_4c) break;
      iVar1 = 0x359500;
      if ((local_4c != 0x552609ac) && (iVar1 = local_4c, local_4c == 0x5b631628)) {
LAB_00219edc:
        iVar1 = 0x6b65a1eb;
      }
    }
    if (local_4c == 0x6b65a1eb) {
      local_48 = *local_40;
      iVar1 = -0x5f4e4b2;
      if ((DAT_004af9a8 + DAT_004af9ac) * 0x86ee8f7 == 0x79d21e90) {
        iVar1 = 0x6b65a1eb;
      }
    }
    else {
      if (local_4c == 0x6f79452f) goto LAB_00219edc;
      if (local_4c == 0x77ff3f00) {
        return local_48;
      }
    }
  } while( true );
}



// ----- -[BubbleBoxInfo setReceipt:] @ 00219f78 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setReceipt_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  ID local_70;
  
  pIVar1 = (ID *)(param_1 + 0x58);
  _objc_retain(param_3);
  local_74 = 0x5174b273;
LAB_0021a008:
  if (local_74 < 0x5174b273) {
    if (local_74 < -0x7437a28) {
      if (local_74 == -0x6c04f030) {
        iVar3 = -0x7437a28;
        if (0xa00d3833 < (DAT_004af9c0 & DAT_004af9c4) * 0x552f37e2 + 0xcb900800) {
          iVar3 = -0x25b31511;
        }
      }
      else {
        if (local_74 != -0x25b31511) goto LAB_0021a008;
        *pIVar1 = param_3;
        _objc_release(local_70);
        iVar3 = -0x7437a28;
      }
    }
    else if (local_74 == -0x7437a28) {
      uVar2 = DAT_004af9c8 - DAT_004af9cc;
      *pIVar1 = param_3;
      _objc_release(local_70);
      iVar3 = -0x25b31511;
      if ((uint)((ulong)((uVar2 & 0x5f9d4675) + 0x81438b7d) * 0x6c9a2881 >> 0x3e) < 0xc1f56566) {
        iVar3 = 0x5ee36ef0;
      }
    }
    else {
      iVar3 = 0x58840348;
      if (local_74 != 0x39903087) goto LAB_0021a008;
    }
  }
  else {
    if (0x5ee36eef < local_74) {
      if (local_74 == 0x7c335a3d) {
        iVar3 = -0x6c04f030;
        goto LAB_0021a1dc;
      }
      if (local_74 == 0x5ee36ef0) {
        return;
      }
      goto LAB_0021a008;
    }
    if (local_74 == 0x5174b273) {
      iVar3 = 0x58840348;
      if (0xe174242a <
          (uint)((ulong)((DAT_004af9b0 + DAT_004af9b4 ^ 0x3db4fc71U) * -0x4e5009ec) * 0x70413a71 >>
                0x3e)) {
        iVar3 = 0x39903087;
      }
      goto LAB_0021a1dc;
    }
    if (local_74 != 0x58840348) goto LAB_0021a008;
    local_70 = *pIVar1;
    iVar3 = 0x39903087;
    if ((DAT_004af9b8 * DAT_004af9bc + 0xd8683ec0U | 0x21878146) * -0x1a898f55 < 0xd8761632) {
      iVar3 = 0x7c335a3d;
    }
  }
LAB_0021a1dc:
  local_74 = iVar3;
  goto LAB_0021a008;
}



// ----- -[BubbleBoxInfo isSelected] @ 0021a218 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::isSelected(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = -0x6d5daaa0;
LAB_0021a330:
  if (local_78 < -0xa6e67ee) {
    if (local_78 < -0x43b79f71) {
      if (local_78 == -0x6d5daaa0) {
        iVar2 = -0x52e6896a;
        if (DAT_004af9d0 * DAT_004af9d4 * -0x3ace37a4 != -0x1a6f6dec) {
          iVar2 = -0x421724ae;
        }
      }
      else if (local_78 == -0x5acd66c3) {
        iVar2 = -0x5acd66c3;
        if ((uint)((ulong)(DAT_004af9f8 - DAT_004af9fc ^ 0x72c802c0U | 0xd33dd27) * 0x50cb9afb >>
                  0x3e) != 0x617711e1) {
          iVar2 = 0x21f8ad16;
        }
      }
      else {
        iVar2 = -0x421724ae;
        if (local_78 != -0x52e6896a) goto LAB_0021a330;
      }
    }
    else if (local_78 == -0x43b79f71) {
      iVar2 = 0x6a11f54;
    }
    else if (local_78 == -0x421724ae) {
      uVar1 = 0;
      if (DAT_004af9dc != 0) {
        uVar1 = DAT_004af9d8 / DAT_004af9dc;
      }
      iVar2 = 0xbafd6d;
      local_70 = (byte *)(param_1 + 8);
      if (uVar1 * -0x40d05280 == 0x1bf65285) {
        iVar2 = -0x421724ae;
      }
    }
    else {
      iVar2 = 0x6a11f54;
      if (local_78 != -0x2b8c61d7) goto LAB_0021a330;
    }
  }
  else {
    if (0x21f8ad15 < local_78) {
      if ((local_78 == 0x2ca1ff1e) || (local_78 == 0x496fe97a)) {
        iVar2 = -0x5acd66c3;
        goto LAB_0021a49c;
      }
      if (local_78 == 0x21f8ad16) {
        return (bool)local_71;
      }
      goto LAB_0021a330;
    }
    if (local_78 == -0xa6e67ee) {
      iVar2 = 0x2ca1ff1e;
    }
    else {
      if (local_78 == 0xbafd6d) {
        iVar2 = -0x43b79f71;
        goto LAB_0021a49c;
      }
      if (local_78 != 0x6a11f54) goto LAB_0021a330;
      local_71 = *local_70;
      iVar2 = -0xa6e67ee;
      if (0xca67f9f7 <
          (uint)((ulong)(DAT_004af9e8 + DAT_004af9ec + 0xa7a9db18U | 0xff4600df) * 0x805c066f >>
                0x3f)) {
        iVar2 = 0x6a11f54;
      }
    }
  }
LAB_0021a49c:
  local_78 = iVar2;
  goto LAB_0021a330;
}



// ----- -[BubbleBoxInfo setIsSelected:] @ 0021a4d4 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setIsSelected_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  int local_74;
  undefined1 *local_70;
  undefined1 local_65;
  
  uVar1 = DAT_004afa00 * DAT_004afa04;
  local_74 = -0x4d145256;
  iVar2 = local_74;
LAB_0021a5f8:
  do {
    while (local_74 = iVar2, iVar2 = local_74, -0x7af5417 < local_74) {
      if (local_74 < 0x5438d7af) {
        if (local_74 == -0x7af5416) {
LAB_0021a6d0:
          iVar2 = 0x768ea652;
        }
        else if (local_74 == 0x3f9dcd8) {
          *local_70 = local_65;
          iVar2 = -0x12ddd7c1;
        }
      }
      else if (local_74 == 0x5438d7af) {
        iVar2 = 0x3f9dcd8;
      }
      else if ((local_74 == 0x768ea652) &&
              (iVar2 = -0x2a1986c2,
              0x9a44fd49 < (((DAT_004afa18 | DAT_004afa1c) + 0xe03c1d1b | 0xf98da5cd) ^ 0xfb295c3a))
              ) {
        iVar2 = -0x7af5416;
      }
    }
    if (local_74 < -0x2a1986c2) {
      if (local_74 == -0x4d145256) {
        iVar2 = -0x8020083;
        if (((uVar1 ^ 0xb8482c55) + 0x1bfd39f7) / 0x2557cc64 != 0xa93751cb) {
          iVar2 = -0x449b8049;
        }
      }
      else if ((local_74 == -0x449b8049) &&
              (local_65 = (undefined1)param_3, iVar2 = -0x449b8049,
              local_70 = (undefined1 *)(param_1 + 8),
              0x22c19ed8 < ((DAT_004afa08 + DAT_004afa0c & 0x68925464U) + 0xf81412e7 & 0x7016200f)))
      {
        iVar2 = 0x5438d7af;
      }
      goto LAB_0021a5f8;
    }
    if (local_74 == -0x12ddd7c1) goto LAB_0021a6d0;
    iVar2 = -0x449b8049;
    if ((local_74 != -0x8020083) && (iVar2 = local_74, local_74 == -0x2a1986c2)) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo isMergeBubble] @ 0021a720 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::isMergeBubble(ID param_1,SEL param_2)

{
  int iVar1;
  int local_20;
  byte local_19;
  
  local_20 = -0x7d540226;
  iVar1 = local_20;
  do {
    while( true ) {
      do {
        while (local_20 = iVar1, local_20 < -0x6ebcd81c) {
          if (local_20 == -0x7d540226) {
            local_19 = *(byte *)(param_1 + 9);
            iVar1 = 0x7bac951c;
          }
          else {
            iVar1 = local_20;
            if ((local_20 == -0x779b5caa) &&
               (iVar1 = 0x9cde528,
               (int)((long)((ulong)(DAT_004afa28 * DAT_004afa2c + 0x68ae0ef3U | 0xdbf1cb06) *
                           0x951023f9) >> 0x3f) == -0x4af2dc22)) {
              iVar1 = -0x779b5caa;
            }
          }
        }
        iVar1 = -0x779b5caa;
      } while (local_20 == -0x6ebcd81c);
      if (local_20 != 0x7bac951c) break;
      iVar1 = -0x6ebcd81c;
      if (((uint)((ulong)((DAT_004afa20 | DAT_004afa24) >> 1) * 0x2062ff47 >> 0x3b) & 1) *
          0x5714851c != 0x40271c00) {
        iVar1 = -0x779b5caa;
      }
    }
    iVar1 = local_20;
  } while (local_20 != 0x9cde528);
  return (bool)local_19;
}



// ----- -[BubbleBoxInfo setIsMergeBubble:] @ 0021a86c -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setIsMergeBubble_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_5c;
  undefined1 local_55;
  
  uVar1 = DAT_004afa30 + DAT_004afa34;
  local_5c = 0x438d40df;
  iVar3 = local_5c;
LAB_0021a97c:
  do {
    while (local_5c = iVar3, iVar3 = local_5c, 0x31a2772e < local_5c) {
      if (local_5c < 0x4f6df7af) {
        if (local_5c == 0x31a2772f) {
          local_55 = (undefined1)param_3;
          iVar3 = 0x31a2772f;
          if (0x38aede3 < (DAT_004afa38 ^ DAT_004afa3c ^ 0x20801090 | 0xd776ae46) * -0x3dc07067) {
            iVar3 = -0x4ae50cab;
          }
        }
        else if ((local_5c == 0x438d40df) &&
                (iVar3 = -0x11b136af, ((uVar1 | 0x61cc3feb) + 0x898b5212 & 0x766101ac) != 0xba8cd5dd
                )) {
          iVar3 = 0x31a2772f;
        }
      }
      else if (local_5c == 0x4f6df7af) {
LAB_0021aa14:
        iVar3 = -0x730c69ac;
      }
      else if (local_5c == 0x6fe61dfc) {
        iVar3 = -0x9efc528;
      }
    }
    if (local_5c < -0x11b136af) {
      if (local_5c == -0x730c69ac) {
        uVar2 = DAT_004afa48 + DAT_004afa4c;
        *(undefined1 *)(param_1 + 9) = local_55;
        iVar3 = 0x6fe61dfc;
        if ((uVar2 | 0x553b88a) * -0x6599f1e0 == -0x2e357046) {
          iVar3 = -0x5f4728c;
        }
      }
      else if (local_5c == -0x4ae50cab) {
        iVar3 = 0x4f6df7af;
      }
      goto LAB_0021a97c;
    }
    iVar3 = 0x31a2772f;
    if (local_5c != -0x11b136af) {
      if (local_5c == -0x5f4728c) {
        *(undefined1 *)(param_1 + 9) = local_55;
        goto LAB_0021aa14;
      }
      iVar3 = local_5c;
      if (local_5c == -0x9efc528) {
        return;
      }
    }
  } while( true );
}



// ----- -[BubbleBoxInfo isHeadToBottom] @ 0021aa9c -----

/* WARNING: Removing unreachable block (ram,0x0021ac5c) */
/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::isHeadToBottom(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = 0xaa6af6e;
  iVar2 = local_78;
  do {
    while( true ) {
      while( true ) {
        while (local_78 = iVar2, iVar2 = local_78, 0xaa6af6d < local_78) {
          if (local_78 < 0x214a36fe) {
            if (local_78 == 0xaa6af6e) {
              iVar2 = -0x3edc91a8;
            }
            else if (local_78 == 0x11e48a21) {
              iVar2 = 0x214a36fe;
            }
          }
          else if (local_78 == 0x214a36fe) {
            iVar2 = 0x66415320;
            if ((uint)((ulong)(DAT_004afa60 * DAT_004afa64 + 0x878e9ca0U | 0x516aaba7) * 0x3082f6a9
                      >> 0x3d) == 0x45c0c7dd) {
              iVar2 = -0xd2f0e10;
            }
          }
          else if ((local_78 == 0x66415320) &&
                  (local_71 = *local_70, iVar2 = 0x66415320,
                  0xabfd337f <
                  ((DAT_004afa68 * DAT_004afa6c & 0x26a2af75U | 0x26208960) ^ 0xcce93a7f))) {
            iVar2 = -0x2b859c6f;
          }
        }
        if (local_78 < -0x1609ad88) break;
        iVar2 = -0x3edc91a8;
        if ((local_78 != -0x1609ad88) && (iVar2 = local_78, local_78 == -0xd2f0e10)) {
          iVar2 = 0x66415320;
        }
      }
      if (local_78 != -0x3edc91a8) break;
      uVar1 = 0;
      if (DAT_004afa5c != 0) {
        uVar1 = DAT_004afa58 / DAT_004afa5c;
      }
      iVar2 = -0x3edc91a8;
      local_70 = (byte *)(param_1 + 10);
      if ((uVar1 + 0x77b5de3b & 0xffe05073) + 0xd60ad1aa < 0x4f5a9511) {
        iVar2 = 0x11e48a21;
      }
    }
    iVar2 = -0x2e761036;
  } while ((local_78 == -0x2b859c6f) || (iVar2 = local_78, local_78 != -0x2e761036));
  return (bool)local_71;
}



// ----- -[BubbleBoxInfo setIsHeadToBottom:] @ 0021acf4 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setIsHeadToBottom_(ID param_1,SEL param_2,bool param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  undefined1 *local_70;
  undefined1 local_65;
  
  iVar1 = DAT_004afa70 - DAT_004afa74;
  local_74 = -0x33ffc761;
LAB_0021ae14:
  if (local_74 < 0x108a0ce4) {
    if (-0x1b8f9ebe < local_74) {
      if (local_74 == -0x1b8f9ebd) {
        local_65 = (undefined1)param_3;
        iVar3 = 0x7d647942;
        if ((DAT_004afa78 * DAT_004afa7c ^ 0x1489032U) * 0x235aa4a6 == -0x697d042b) {
          iVar3 = 0x139722ed;
        }
        goto LAB_0021b024;
      }
      if (local_74 == -0x144a6ca3) {
        iVar3 = -0x1c8fb3d6;
        if (0x2a696e1d < (DAT_004afa80 - DAT_004afa84 ^ 0x3bf9b0daU) / 0x6a4b726c) {
          iVar3 = 0x1b918f50;
        }
        goto LAB_0021b024;
      }
      if (local_74 == -0x763785) {
        return;
      }
      goto LAB_0021ae14;
    }
    if (local_74 == -0x6fd4f1c0) {
      iVar3 = 0x222647e4;
    }
    else {
      if (local_74 == -0x33ffc761) {
        iVar3 = -0x1b8f9ebd;
        if ((iVar1 + 0x85cff6e9U & 0x58797504) == 0x1633fbf7) {
          iVar3 = 0x139722ed;
        }
        goto LAB_0021b024;
      }
      if (local_74 != -0x1c8fb3d6) goto LAB_0021ae14;
      iVar3 = 0x1b918f50;
      local_70 = (undefined1 *)(param_1 + 10);
      if (0xae7a2a70 < (DAT_004afa88 + DAT_004afa8c | 0x5b5d1285U) + 0x208e08b3) {
        iVar3 = -0x6fd4f1c0;
      }
    }
  }
  else if (local_74 < 0x222647e4) {
    if (local_74 == 0x108a0ce4) {
      *local_70 = local_65;
      iVar3 = 0x5d8dc589;
    }
    else {
      iVar3 = -0x1b8f9ebd;
      if ((local_74 != 0x139722ed) && (iVar3 = -0x1c8fb3d6, local_74 != 0x1b918f50))
      goto LAB_0021ae14;
    }
  }
  else if (local_74 == 0x222647e4) {
    uVar2 = 0;
    if (DAT_004afa94 != 0) {
      uVar2 = DAT_004afa90 / DAT_004afa94;
    }
    iVar3 = 0x108a0ce4;
    if ((uint)((ulong)((uVar2 / 0x3aacccd1) * 0x16fa158d) * 0x9846f47 >> 0x39) != 0x26a24bc7) {
      iVar3 = 0x5d8dc589;
    }
  }
  else if (local_74 == 0x5d8dc589) {
    uVar2 = DAT_004afa98 - DAT_004afa9c;
    *local_70 = local_65;
    iVar3 = 0x5d8dc589;
    if ((uVar2 & 0x10b15c8a ^ 0x2c931bc0) * -0x7e51e0b4 != -0x43b6b476) {
      iVar3 = -0x763785;
    }
  }
  else {
    if (local_74 != 0x7d647942) goto LAB_0021ae14;
    iVar3 = -0x144a6ca3;
  }
LAB_0021b024:
  local_74 = iVar3;
  goto LAB_0021ae14;
}



// ----- -[BubbleBoxInfo enabledMsgColor] @ 0021b058 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::enabledMsgColor(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = 0x769e575a;
LAB_0021b188:
  if (local_78 < 0x26f9ac97) {
    if (-0x4356c69a < local_78) {
      if (local_78 == 0x395e31d) {
        iVar1 = -0x4bc6d55d;
        goto LAB_0021b38c;
      }
      if (local_78 == 0x9e957d4) {
        iVar1 = -0x4356c699;
        if (0x1b5a3fe4 <
            (uint)((ulong)((DAT_004afac8 & DAT_004afacc) * -0x12f8e05b + 0xa666e522) * 0x10987299 >>
                  0x3b)) {
          iVar1 = 0x26f9ac97;
        }
        goto LAB_0021b38c;
      }
      if (local_78 == -0x4356c699) {
        return (bool)local_71;
      }
      goto LAB_0021b188;
    }
    if (local_78 == -0x6792c0ba) {
      iVar1 = 0x395e31d;
      local_70 = (byte *)(param_1 + 0xb);
      if ((int)((long)((ulong)((DAT_004afaa8 & DAT_004afaac) + 0x1144d388) * 0x96a65ab3) >> 0x3f) ==
          0x38bbe684) {
        iVar1 = -0x6792c0ba;
      }
    }
    else {
      iVar1 = 0x5ad47829;
      if (local_78 == -0x4e1313c7) goto LAB_0021b38c;
      if (local_78 != -0x4bc6d55d) goto LAB_0021b188;
      iVar1 = -0x4e1313c7;
      if (((uint)(DAT_004afab0 * DAT_004afab4 * 0x1ebb8d00) / 0xc986f85) * 0x3966d346 < 0xe87296be)
      {
        iVar1 = 0x5ad47829;
      }
    }
  }
  else if (local_78 < 0x53f4b9c0) {
    if (local_78 == 0x26f9ac97) {
      iVar1 = 0x9e957d4;
    }
    else if (local_78 == 0x4d4d9341) {
      iVar1 = 0x9e957d4;
      if (((DAT_004afac0 & DAT_004afac4) + 0xe1504c5f & 0x63e559f3) * -0x122f4345 == 0x2b779ef5) {
        iVar1 = 0x26f9ac97;
      }
    }
    else {
      iVar1 = -0x6792c0ba;
      if (local_78 != 0x51e9ec93) goto LAB_0021b188;
    }
  }
  else if (local_78 == 0x53f4b9c0) {
    iVar1 = 0x4d4d9341;
  }
  else if (local_78 == 0x5ad47829) {
    local_71 = *local_70;
    iVar1 = -0x4e1313c7;
    if ((((DAT_004afab8 & DAT_004afabc) + 0x47665125 ^ 0x18433804) & 0x38c3382e) != 0xefc63795) {
      iVar1 = 0x53f4b9c0;
    }
  }
  else {
    if (local_78 != 0x769e575a) goto LAB_0021b188;
    iVar1 = -0x6792c0ba;
    if (((DAT_004afaa0 ^ DAT_004afaa4 | 0x69b871b7) ^ 0x279af6d8) + 0xec38ef0b < 0x2585d92b) {
      iVar1 = 0x51e9ec93;
    }
  }
LAB_0021b38c:
  local_78 = iVar1;
  goto LAB_0021b188;
}



// ----- -[BubbleBoxInfo setEnabledMsgColor:] @ 0021b3c4 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setEnabledMsgColor_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  int local_68;
  
  local_68 = -0x29f39b9e;
  do {
    while( true ) {
      while( true ) {
        while (local_68 < 0x439ca181) {
          if (local_68 < -0x29f39b9e) {
            if (local_68 == -0x4263b389) {
              local_68 = -0x90872ad;
            }
            else if ((local_68 == -0x3db9cd97) &&
                    (local_68 = -0x4263b389,
                    (DAT_004afae0 + DAT_004afae4 & 0x18564c6eU) + 0x60f8829e < 0xc102eb73)) {
              local_68 = -0x90872ad;
            }
          }
          else if (local_68 == -0x29f39b9e) {
            uVar1 = 0;
            if (DAT_004afad4 != 0) {
              uVar1 = DAT_004afad0 / DAT_004afad4;
            }
            local_68 = 0x5310bc59;
            if (0xd137dac3 < (uVar1 + 0xe14df2bb | 0x5eb7c742) * 0x542c32e1) {
              local_68 = 0x6068330d;
            }
          }
          else if ((local_68 == -0x90872ad) &&
                  (local_68 = 0x69cc0b5e,
                  0x37c9ce21 < (DAT_004afae8 * DAT_004afaec ^ 0x3fcaead9U) / 0x9adafc7d)) {
            local_68 = -0x4263b389;
          }
        }
        if (0x6068330c < local_68) break;
        if (local_68 == 0x439ca181) {
          local_68 = -0x3db9cd97;
        }
        else if ((local_68 == 0x5310bc59) &&
                (uVar1 = DAT_004afad8 ^ DAT_004afadc, *(char *)(param_1 + 0xb) = (char)param_3,
                local_68 = 0x6068330d, 0x19b6615d < (uVar1 | 0xe44f850c) * -0x2fca73fd + 0xe407fde))
        {
          local_68 = 0x439ca181;
        }
      }
      if (local_68 != 0x6068330d) break;
      *(char *)(param_1 + 0xb) = (char)param_3;
      local_68 = 0x5310bc59;
    }
  } while (local_68 != 0x69cc0b5e);
  return;
}



// ----- -[BubbleBoxInfo msgTextColor] @ 0021b618 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::msgTextColor(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_3c;
  ID local_38;
  ID *local_30;
  
  local_3c = 0x4da13af4;
  iVar2 = local_3c;
  do {
    while( true ) {
      while( true ) {
        while (local_3c = iVar2, iVar2 = local_3c, 0x11d039a6 < local_3c) {
          if (local_3c < 0x4da13af4) {
            if (local_3c == 0x11d039a7) {
              local_38 = *local_30;
              iVar2 = -0x748d5a6c;
            }
            else if (local_3c == 0x4b7c44ef) {
              iVar2 = -0x325e2030;
              local_30 = (ID *)(param_1 + 0x60);
            }
          }
          else if (local_3c == 0x73794dab) {
            iVar2 = 0x11d039a7;
          }
          else if ((local_3c == 0x4da13af4) &&
                  (iVar2 = -0x1a3fc148,
                  ((DAT_004afaf0 + DAT_004afaf4) * -0x50b3909d & 0x81980U) != 0x573afe25)) {
            iVar2 = 0x4b7c44ef;
          }
        }
        if (-0x2431321c < local_3c) break;
        if (local_3c == -0x748d5a6c) {
          iVar2 = -0x2431321b;
        }
        else if (local_3c == -0x325e2030) {
          iVar2 = -0x1bb41a54;
        }
      }
      if (local_3c != -0x1bb41a54) break;
      uVar1 = 0;
      if (DAT_004afb04 != 0) {
        uVar1 = DAT_004afb00 / DAT_004afb04;
      }
      iVar2 = 0x73794dab;
      if ((uint)-(int)((long)((ulong)(uVar1 * 0x78427064 + 0x29510a2) * 0x97d19a8d) >> 0x3f) <
          0x7e25b8f8) {
        iVar2 = 0x11d039a7;
      }
    }
    iVar2 = 0x4b7c44ef;
  } while ((local_3c == -0x1a3fc148) || (iVar2 = local_3c, local_3c != -0x2431321b));
  return local_38;
}



// ----- -[BubbleBoxInfo setMsgTextColor:] @ 0021b800 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setMsgTextColor_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x729eb9b2;
  do {
    while( true ) {
      while( true ) {
        while (local_7c < -0x1e6d5c6c) {
          if (local_7c == -0x7ac0b4b5) {
            iVar1 = DAT_004afb08 + DAT_004afb0c;
            _objc_retain(param_3);
            param_2 = extraout_x1;
            local_7c = -0x539bbd;
            local_70 = (ID *)(param_1 + 0x60);
            if (0xeeed076c < iVar1 * 0x5471d5f1 + 0x429f31ffU) {
              local_7c = -0x7ac0b4b5;
            }
          }
          else if (local_7c == -0x4ca6e072) {
            _objc_retain(param_3);
            param_2 = extraout_x1_00;
            local_7c = -0x7ac0b4b5;
          }
          else if (local_7c == -0x2bfa4a8a) {
            local_78 = *local_70;
            *local_70 = param_3;
            local_7c = -0x1e6d5c6c;
          }
        }
        if (local_7c != -0x539bbd) break;
        local_7c = -0x2bfa4a8a;
      }
      if (local_7c != 0x729eb9b2) break;
      local_7c = -0x7ac0b4b5;
    }
  } while (local_7c != -0x1e6d5c6c);
  _objc_release(local_78,param_2);
  return;
}



// ----- -[BubbleBoxInfo msgTextColorDark] @ 0021b97c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::msgTextColorDark(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_64;
  ID local_60;
  
  local_64 = -0x5f12e5b2;
  iVar2 = local_64;
  do {
    while( true ) {
      while( true ) {
        while (local_64 = iVar2, iVar2 = local_64, local_64 < 0x217eb635) {
          if (local_64 < -0x11ba60b6) {
            iVar2 = 0x72a1ae52;
            if ((local_64 != -0x71af925b) && (iVar2 = local_64, local_64 == -0x5f12e5b2)) {
              uVar1 = 0;
              if (DAT_004afb14 != 0) {
                uVar1 = DAT_004afb10 / DAT_004afb14;
              }
              iVar2 = -0x71af925b;
              if (0x88b0b8d < (uVar1 ^ 0xc914cfea) + 0x502d7dcc) {
                iVar2 = 0x72a1ae52;
              }
            }
          }
          else if (local_64 == -0x11ba60b6) {
            iVar2 = 0x4c38865c;
          }
          else if ((local_64 == 0x11abf651) &&
                  (iVar2 = 0x4e00259b, (DAT_004afb28 - DAT_004afb2c) * -0x10cdb38e == 0x575cbcec)) {
            iVar2 = 0x217eb635;
          }
        }
        if (0x4e00259a < local_64) break;
        if (local_64 == 0x217eb635) {
          iVar2 = 0x11abf651;
        }
        else if ((local_64 == 0x4c38865c) &&
                (iVar2 = 0x217eb635,
                (uint)((ulong)((byte)((ulong)(DAT_004afb20 & DAT_004afb24) * 0x189bdeb >> 0x38) |
                              0x7c1d51ea) * 0x298b23e7 >> 0x3c) < 0xbebfc298)) {
          iVar2 = 0x11abf651;
        }
      }
      if (local_64 != 0x72a1ae52) break;
      local_60 = *(ID *)(param_1 + 0x68);
      iVar2 = -0x11ba60b6;
    }
  } while (local_64 != 0x4e00259b);
  return local_60;
}



// ----- -[BubbleBoxInfo setMsgTextColorDark:] @ 0021bb84 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setMsgTextColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_74;
  ID *local_70;
  
  uVar2 = DAT_004afb30 - DAT_004afb34;
  local_74 = -0x290d74f9;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x16656593 < local_74) {
            if (local_74 < 0x54d94f06) {
              if (local_74 == 0x16656594) {
                uVar1 = DAT_004afb48 | DAT_004afb4c;
                IVar3 = *local_70;
                *local_70 = param_3;
                _objc_release(IVar3);
                param_2 = extraout_x1_01;
                local_74 = 0x54d94f06;
                if (((uVar1 ^ 0x7a25f2f2) + 0x6768360 & 0xd7390b7d) < 0x3bc48899) {
                  local_74 = 0x16656594;
                }
              }
              else if (local_74 == 0x3e02d6f5) {
                _objc_retain(param_3,param_2);
                param_2 = extraout_x1;
                local_74 = 0x7209a45b;
              }
            }
            else if (local_74 == 0x54d94f06) {
              local_74 = -0x4deb751c;
            }
            else if (local_74 == 0x7209a45b) {
              uVar1 = 0;
              if (DAT_004afb3c != 0) {
                uVar1 = DAT_004afb38 / DAT_004afb3c;
              }
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_00;
              local_74 = 0x7209a45b;
              local_70 = (ID *)(param_1 + 0x68);
              if (((uint)((ulong)uVar1 * 0x4c022a1b >> 0x3e) | 0x410e0108) < 0x9b172943) {
                local_74 = -0x50e1bcb;
              }
            }
          }
          if (local_74 < -0x290d74f9) break;
          if (local_74 == -0x290d74f9) {
            local_74 = 0x3e02d6f5;
            if ((uVar2 & 0x16e801ed | 0x6a8010d) < 0x7b060a90) {
              local_74 = 0x7209a45b;
            }
          }
          else if (local_74 == -0x50e1bcb) {
            local_74 = -0x3c0f6bf6;
          }
        }
        if (local_74 != -0x52adb90d) break;
        IVar3 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar3);
        param_2 = extraout_x1_02;
        local_74 = 0x16656594;
      }
      if (local_74 != -0x3c0f6bf6) break;
      local_74 = -0x52adb90d;
      if (0x97011fec < ((DAT_004afb40 - DAT_004afb44 | 0xa250ec24U) + 0x7ac7015d ^ 0x8c0d5ca1)) {
        local_74 = 0x16656594;
      }
    }
  } while (local_74 != -0x4deb751c);
  return;
}



// ----- -[BubbleBoxInfo sendMsgTextColor] @ 0021be44 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendMsgTextColor(ID param_1,SEL param_2)

{
  int local_14;
  ID local_10;
  
  local_14 = -0x7de595ba;
LAB_0021beb4:
  do {
    while (local_14 < -0x2c4d4145) {
      if (local_14 == -0x7de595ba) {
LAB_0021bef8:
        local_14 = 0x5b9d2ed;
      }
      else if (local_14 == -0x517f31aa) {
        local_14 = -0x2c4d4145;
      }
    }
    if (local_14 == 0x5b9d2ed) {
      local_10 = *(ID *)(param_1 + 0x70);
      local_14 = 0x28706941;
      if (((uint)((ulong)(uint)(DAT_004afb58 + DAT_004afb5c) * 0x405c216f >> 0x3d) + 0x92be8d32) /
          0x61965a55 < 0xddbaf3f8) {
        local_14 = -0x517f31aa;
      }
      goto LAB_0021beb4;
    }
    if (local_14 == 0x28706941) goto LAB_0021bef8;
    if (local_14 == -0x2c4d4145) {
      return local_10;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo setSendMsgTextColor:] @ 0021bf58 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendMsgTextColor_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  iVar1 = DAT_004afb60 + DAT_004afb64;
  local_7c = -0x384121a6;
LAB_0021c004:
  if (local_7c < 0x4d41bd) {
    if (local_7c < -0x184cd6a7) {
      if (local_7c == -0x384121a6) {
        iVar2 = 0xa949d40;
        if ((iVar1 * -0x59d54fe3 + 0x2b057443U & 0xff1a8fad) < 0x6c0c3545) {
          iVar2 = -0x138cbaaa;
        }
      }
      else {
        if (local_7c != -0x302306fd) goto LAB_0021c004;
        _objc_release(local_78,param_2);
        param_2 = extraout_x1;
        iVar2 = 0x576add6;
      }
    }
    else if (local_7c == -0x184cd6a7) {
      iVar2 = 0x4d41bd;
    }
    else {
      iVar2 = 0xa949d40;
      if (local_7c != -0x138cbaaa) goto LAB_0021c004;
    }
  }
  else {
    if (local_7c < 0x2b72e66c) {
      if (local_7c == 0x4d41bd) {
        _objc_retain(param_3);
        local_78 = *local_70;
        *local_70 = param_3;
        param_2 = extraout_x1_01;
        iVar2 = 0x2b72e66c;
        goto LAB_0021c168;
      }
      if (local_7c == 0xa949d40) {
        iVar2 = -0x184cd6a7;
        local_70 = (ID *)(param_1 + 0x70);
        goto LAB_0021c168;
      }
      if (local_7c == 0x576add6) {
        return;
      }
      goto LAB_0021c004;
    }
    if (local_7c == 0x2b72e66c) {
      iVar2 = 0x6bdae90c;
      if (((uint)((ulong)(uint)(DAT_004afb70 - DAT_004afb74) * 0xd7af8bf >> 0x3b) + 0xad891d3f &
          0x25890406) < 0x3b1c084a) {
        iVar2 = -0x302306fd;
      }
      goto LAB_0021c168;
    }
    if (local_7c != 0x6bdae90c) goto LAB_0021c004;
    _objc_release(local_78,param_2);
    param_2 = extraout_x1_00;
    iVar2 = -0x302306fd;
  }
LAB_0021c168:
  local_7c = iVar2;
  goto LAB_0021c004;
}



// ----- -[BubbleBoxInfo sendMsgTextColorDark] @ 0021c1a4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendMsgTextColorDark(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x5323f496;
  iVar1 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar1, iVar1 = local_7c, local_7c < 0x1e27fd18) {
            if (local_7c < -0x209457be) {
              iVar1 = -0x5fcb7778;
              if (local_7c != -0x6fb27fea) {
                if (local_7c == -0x5fcb7778) {
                  local_78 = *local_70;
                  iVar1 = 0x434e3aba;
                  if (((DAT_004afb98 | DAT_004afb9c) & 0x260d30ab) == 0x50cebef8) {
                    iVar1 = -0x6fb27fea;
                  }
                }
                else {
                  iVar1 = local_7c;
                  if ((local_7c == -0x5323f496) &&
                     (iVar1 = 0x147dccd6,
                     (DAT_004afb80 ^ DAT_004afb84 ^ 0x3e210900 | 0x80da5426) + 0x3e2ab525 <
                     0xb7d3473)) {
                    iVar1 = 0x3c14e955;
                  }
                }
              }
            }
            else if (local_7c == -0x209457be) {
              iVar1 = 0x760967d2;
            }
            else if (local_7c == -0x1ea2c190) {
              iVar1 = 0x68c4f47d;
            }
            else if ((local_7c == 0x147dccd6) &&
                    (iVar1 = -0x1ea2c190, local_70 = (ID *)(param_1 + 0x78),
                    ((DAT_004afb88 - DAT_004afb8c) + 0x5afcbe22U | 0xabb3cc5c) * -0x59dc1afb ==
                    0x426136fe)) {
              iVar1 = 0x3c14e955;
            }
          }
          if (local_7c < 0x68c4f47d) break;
          if (local_7c == 0x68c4f47d) {
            iVar1 = -0x5fcb7778;
            if ((DAT_004afb90 + DAT_004afb94 & 0x5520e1acU) * -0x61710d16 == 0x430b134a) {
              iVar1 = -0x6fb27fea;
            }
          }
          else if (local_7c == 0x6fa5d4c0) {
            iVar1 = -0x209457be;
            if (0x867bc644 <
                (((DAT_004afba0 & DAT_004afba4) / 0x3b7cd514) * 0x569d6a18 | 0xf3b11ffa)) {
              iVar1 = 0x760967d2;
            }
          }
          else if (local_7c == 0x760967d2) {
            iVar1 = 0x1e27fd18;
          }
        }
        iVar1 = 0x147dccd6;
      } while (local_7c == 0x3c14e955);
      if (local_7c != 0x434e3aba) break;
      iVar1 = 0x6fa5d4c0;
    }
    iVar1 = local_7c;
  } while (local_7c != 0x1e27fd18);
  return local_78;
}



// ----- -[BubbleBoxInfo setSendMsgTextColorDark:] @ 0021c4a4 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendMsgTextColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ID IVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_74;
  ID *local_70;
  
  uVar1 = DAT_004afbb0 ^ DAT_004afbb4;
  local_74 = -0x3ac13a9c;
  iVar3 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, local_74 < 0xbee62bf) {
            if (local_74 < -0x37415fc9) {
              if (local_74 == -0x4c70eae4) {
                iVar3 = -0x1983df8a;
              }
              else if ((local_74 == -0x3ac13a9c) &&
                      (iVar3 = 0x77a7ed4e,
                      0x9aa5601f <
                      (uint)((ulong)(uVar1 * 0x4ac0afe9 + 0x6a00175b) * 0x21b7bb0d >> 0x3d))) {
                iVar3 = -0x37415fc9;
              }
            }
            else {
              iVar3 = 0x77a7ed4e;
              if ((local_74 != -0x37415fc9) && (iVar3 = local_74, local_74 == -0x1983df8a)) {
                uVar2 = 0;
                if (DAT_004afbc4 != 0) {
                  uVar2 = DAT_004afbc0 / DAT_004afbc4;
                }
                iVar3 = 0x47132786;
                if ((uVar2 | 0xc6fad95f) + 0x6fe46a7 < 0xb3d0ae88) {
                  iVar3 = 0x51a84d60;
                }
              }
            }
          }
          if (local_74 < 0x75d92d32) break;
          if (local_74 == 0x75d92d32) {
            iVar3 = 0xbee62bf;
          }
          else if ((local_74 == 0x77a7ed4e) &&
                  (iVar3 = -0x37415fc9, local_70 = (ID *)(param_1 + 0x78),
                  0x1fa9d678 < (DAT_004afbb8 & DAT_004afbbc | 0x3202e1eb) * 0x3f71734c + 0x71995ba8)
                  ) {
            iVar3 = -0x4c70eae4;
          }
        }
        if (local_74 != 0x47132786) break;
        _objc_retain(param_3,param_2);
        IVar4 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar4);
        param_2 = extraout_x1_00;
        iVar3 = 0x75d92d32;
      }
      if (local_74 != 0x51a84d60) break;
      _objc_retain(param_3,param_2);
      IVar4 = *local_70;
      *local_70 = param_3;
      _objc_release(IVar4);
      param_2 = extraout_x1;
      iVar3 = 0x47132786;
    }
  } while (local_74 != 0xbee62bf);
  return;
}



// ----- -[BubbleBoxInfo referColor] @ 0021c71c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::referColor(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x64ab3689;
  iVar2 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c = iVar2, iVar2 = local_7c, 0x3357c445 < local_7c) {
            if (local_7c < 0x64ab3689) {
              if (local_7c == 0x3357c446) {
                local_78 = *local_70;
                iVar2 = 0x69c1d087;
              }
              else if ((local_7c == 0x55da202a) &&
                      (iVar2 = 0x322ee5b4, local_70 = (ID *)(param_1 + 0x80),
                      ((DAT_004afbd8 | DAT_004afbdc) ^ 0x81890008 | 0x64469de7) == 0xe3667cba)) {
                iVar2 = -0x5c98b14e;
              }
            }
            else if (local_7c == 0x69c1d087) {
              iVar2 = -0x2adf161a;
              if (((DAT_004afbe0 + DAT_004afbe4 ^ 0x4d7bacf1U) / 0x30ad9c0 & 0x53) != 0x97321a46) {
                iVar2 = -0x2c8d4cd7;
              }
            }
            else if ((local_7c == 0x64ab3689) &&
                    (iVar2 = -0x5c98b14e, (DAT_004afbd0 & DAT_004afbd4) != 0xc87b7f05)) {
              iVar2 = 0x55da202a;
            }
          }
          if (-0x2adf161b < local_7c) break;
          iVar2 = 0x55da202a;
          if ((local_7c != -0x5c98b14e) && (iVar2 = local_7c, local_7c == -0x2c8d4cd7)) {
            uVar1 = 0;
            if (DAT_004afbec != 0) {
              uVar1 = DAT_004afbe8 / DAT_004afbec;
            }
            iVar2 = 0x225f4382;
            if (uVar1 == 0x594c2836) {
              iVar2 = -0x2c8d4cd7;
            }
          }
        }
        if (local_7c != -0x2adf161a) break;
        iVar2 = -0x2c8d4cd7;
      }
      if (local_7c != 0x322ee5b4) break;
      iVar2 = 0x3357c446;
    }
  } while (local_7c != 0x225f4382);
  return local_78;
}



// ----- -[BubbleBoxInfo setReferColor:] @ 0021c97c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setReferColor_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004afbf0 & DAT_004afbf4;
  local_7c = -0x737205cc;
  iVar3 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while (local_7c = iVar3, local_7c < 0xa4ca7b0) {
          iVar3 = 0x309b181e;
          if (local_7c < -0x42703e03) {
            if (local_7c == -0x737205cc) {
              if ((uint)((ulong)uVar1 * 0x4f6e4ddd >> 0x3d) != 0x1ea82d73) {
                iVar3 = -0x42703e03;
              }
            }
            else {
              iVar3 = local_7c;
              if ((local_7c == -0x6b7a758e) &&
                 (iVar3 = 0x1e29f294,
                 0x3802ea35 <
                 (uint)((ulong)(uint)((DAT_004afc00 - DAT_004afc04) * 0x4aef69e1) * 0x8ed5d1d5 >>
                       0x3f))) {
                iVar3 = 0x2fd6b3b;
              }
            }
          }
          else if (local_7c == -0x42703e03) {
            uVar2 = 0;
            if (DAT_004afbfc != 0) {
              uVar2 = DAT_004afbf8 / DAT_004afbfc;
            }
            local_70 = (ID *)(param_1 + 0x80);
            if ((uint)-(int)((long)((ulong)((uVar2 | 0xfe0f34db) ^ 0x2a8d5e3a) * 0x9e47cd6b) >> 0x3f
                            ) < 0xc798fd25) {
              iVar3 = 0x756f1c37;
            }
          }
          else {
            iVar3 = local_7c;
            if (local_7c == 0x2fd6b3b) {
              *local_70 = param_3;
              _objc_release(local_78,param_2);
              param_2 = extraout_x1;
              iVar3 = 0x1e29f294;
            }
          }
        }
        if (local_7c < 0x39ffdcca) break;
        if (local_7c == 0x39ffdcca) {
          _objc_retain(param_3);
          local_78 = *local_70;
          param_2 = extraout_x1_00;
          iVar3 = -0x6b7a758e;
        }
        else {
          iVar3 = local_7c;
          if (local_7c == 0x756f1c37) {
            iVar3 = 0x39ffdcca;
          }
        }
      }
      if (local_7c != 0x1e29f294) break;
      uVar2 = DAT_004afc08 & DAT_004afc0c;
      *local_70 = param_3;
      _objc_release(local_78,param_2);
      param_2 = extraout_x1_01;
      iVar3 = 0xa4ca7b0;
      if ((uVar2 + 0x2103fa86 & 0xfffbfd8d | 0xfcda9d09) == 0x5d354535) {
        iVar3 = 0x1e29f294;
      }
    }
    iVar3 = -0x42703e03;
  } while ((local_7c == 0x309b181e) || (iVar3 = local_7c, local_7c != 0xa4ca7b0));
  return;
}



// ----- -[BubbleBoxInfo referColorDark] @ 0021cc54 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::referColorDark(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x6727c27;
  iVar1 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while (local_7c = iVar1, iVar1 = local_7c, local_7c < 0xa05ca09) {
          if (local_7c < -0x43c0033e) {
            iVar1 = -0x43c0033e;
            if (local_7c != -0x75daf3ef) {
              if (local_7c == -0x6b534475) {
                iVar1 = 0x254fc16f;
                local_70 = (ID *)(param_1 + 0x88);
                if (((DAT_004afc18 | DAT_004afc1c) & 0x48c069c9) == 0x7ca4a4fb) {
                  iVar1 = -0x6b534475;
                }
              }
              else {
                iVar1 = local_7c;
                if (local_7c == -0x4f01cc36) {
                  iVar1 = 0x2072a92c;
                }
              }
            }
          }
          else if (local_7c == -0x43c0033e) {
            local_78 = *local_70;
            iVar1 = 0xa05ca09;
            if (0xca44079c < (DAT_004afc28 * DAT_004afc2c | 0x148ed6d7U) + 0xfabb0d42) {
              iVar1 = -0x75daf3ef;
            }
          }
          else if (local_7c == -0x69359ae) {
            iVar1 = 0x2072a92c;
            if ((DAT_004afc30 | DAT_004afc34 | 0xfb6ecfbc) * -0x5e98bff1 == -0x64b866b9) {
              iVar1 = -0x4f01cc36;
            }
          }
          else if (local_7c == 0x6727c27) {
            iVar1 = -0x6b534475;
          }
        }
        if (0x281eaecc < local_7c) break;
        if (local_7c == 0xa05ca09) {
          iVar1 = -0x69359ae;
        }
        else if (local_7c == 0x2072a92c) {
          iVar1 = -0x4f01cc36;
          if ((((DAT_004afc38 | DAT_004afc3c) & 0x28b2256a) * -0x590ecc31 | 0xaa6038bc) < 0xfcdfbd9b
             ) {
            iVar1 = 0x4c3d1974;
          }
        }
        else if (local_7c == 0x254fc16f) {
          iVar1 = 0x281eaecd;
        }
      }
      if (local_7c != 0x281eaecd) break;
      iVar1 = -0x43c0033e;
      if ((DAT_004afc20 & DAT_004afc24 & 0x28814447 | 0x473e2b28) * 0x70af9b26 < 0x3c3caf6a) {
        iVar1 = -0x75daf3ef;
      }
    }
    iVar1 = -0x6b534475;
  } while ((local_7c == 0x2abbd1f6) || (iVar1 = local_7c, local_7c != 0x4c3d1974));
  return local_78;
}



// ----- -[BubbleBoxInfo setReferColorDark:] @ 0021cf98 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setReferColorDark_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  SEL extraout_x1;
  int local_6c;
  
  local_6c = 0x57904956;
  iVar1 = local_6c;
  do {
    while( true ) {
      while (local_6c = iVar1, 0x57904955 < local_6c) {
        if (local_6c == 0x5dbe4884) {
          iVar1 = -0x54c9644c;
          if ((DAT_004afc40 + DAT_004afc44 & 0xaf7232c5U) == 0x64975160) {
            iVar1 = -0x26af6db;
          }
        }
        else {
          iVar1 = local_6c;
          if (local_6c == 0x57904956) {
            _objc_retain(param_3,param_2);
            IVar2 = *(ID *)(param_1 + 0x88);
            *(ID *)(param_1 + 0x88) = param_3;
            _objc_release(IVar2);
            param_2 = extraout_x1;
            iVar1 = 0x5dbe4884;
          }
        }
      }
      if (local_6c != -0x54c9644c) break;
      iVar1 = -0x26af6db;
      if (((DAT_004afc48 + DAT_004afc4c & 0xa41327cU) * 0x31e661b8 ^ 0xa241665) < 0xf8f31e43) {
        iVar1 = -0x48850cee;
      }
    }
    iVar1 = -0x54c9644c;
  } while ((local_6c == -0x26af6db) || (iVar1 = local_6c, local_6c != -0x48850cee));
  return;
}



// ----- -[BubbleBoxInfo sendReferColor] @ 0021d10c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendReferColor(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x5bb0b5ff;
  iVar2 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar2, 0x52fa1d48 < local_7c) {
            if (local_7c < 0x6807a28a) {
              iVar2 = -0x74bcb32f;
              if (local_7c == 0x52fa1d49) {
                local_70 = (ID *)(param_1 + 0x90);
                if (((DAT_004afc58 + DAT_004afc5c | 0x76dccd2U) + 0xe65a68c & 0x500b118) <
                    0xec5f6443) {
                  iVar2 = 0x4a2c51f4;
                }
              }
              else if (local_7c == 0x5bb0b5ff) {
                if (((uint)((ulong)(uint)(DAT_004afc50 - DAT_004afc54) * 0x99fcb683 >> 0x3f) |
                    0x61e969fe) != 0xcf1836c1) {
                  iVar2 = 0x52fa1d49;
                }
              }
              else {
                iVar2 = local_7c;
                if ((local_7c == 0x650ca955) &&
                   (iVar2 = 0x45d087a0,
                   0x10fe67f9 <
                   ((DAT_004afc60 & DAT_004afc64) * -0x2495daf9 + 0x13770282 | 0x6143f3e9))) {
                  iVar2 = 0x6807a28a;
                }
              }
            }
            else if (local_7c == 0x6807a28a) {
              local_78 = *local_70;
              iVar2 = 0x6807a28a;
              if ((((DAT_004afc68 ^ DAT_004afc6c) & 0xcb61b710) / 0x39ef2331 ^ 0x2e8463a3) <
                  0xeffa3dac) {
                iVar2 = -0x87b86e2;
              }
            }
            else if (local_7c == 0x682f522b) {
              iVar2 = 0x51791631;
              if ((DAT_004afc78 + DAT_004afc7c | 0x5a40e13U) * -0x4fcc53bc == -0x47796e32) {
                iVar2 = 0xdfa7ae4;
              }
            }
            else {
              iVar2 = local_7c;
              if (local_7c == 0x7af81fcd) {
                uVar1 = 0;
                if (DAT_004afc74 != 0) {
                  uVar1 = DAT_004afc70 / DAT_004afc74;
                }
                iVar2 = 0xdfa7ae4;
                if ((uVar1 + 0xd5f27c46 & 0xf96a56ee) != 0xa1c28c2d) {
                  iVar2 = 0x682f522b;
                }
              }
            }
          }
          if (0x45d0879f < local_7c) break;
          iVar2 = 0x52fa1d49;
          if (local_7c != -0x74bcb32f) {
            if (local_7c == -0x87b86e2) {
              iVar2 = 0x7af81fcd;
            }
            else {
              iVar2 = local_7c;
              if (local_7c == 0xdfa7ae4) {
                iVar2 = 0x682f522b;
              }
            }
          }
        }
        iVar2 = 0x6807a28a;
      } while (local_7c == 0x45d087a0);
      if (local_7c != 0x4a2c51f4) break;
      iVar2 = 0x650ca955;
    }
    iVar2 = local_7c;
  } while (local_7c != 0x51791631);
  return local_78;
}



// ----- -[BubbleBoxInfo setSendReferColor:] @ 0021d454 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendReferColor_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  int iVar2;
  undefined4 local_6c;
  
  _objc_retain(param_3);
  local_6c = -0xb66126d;
LAB_0021d4dc:
  while (iVar2 = -0x707fa3fd, local_6c < 0x1d4885bd) {
    if (local_6c == -0x707fa3fd) {
      if ((uint)((ulong)((DAT_004afc88 | DAT_004afc8c) ^ 0xfd25b43a) * 0x79d357d >> 0x39) !=
          0x855922bf) {
        iVar2 = -0x78fb9f3b;
      }
      goto LAB_0021d598;
    }
    if (local_6c == -0xb66126d) {
      IVar1 = *(ID *)(param_1 + 0x90);
      *(ID *)(param_1 + 0x90) = param_3;
      _objc_release(IVar1);
      iVar2 = 0x1d4885bd;
      goto LAB_0021d598;
    }
    if (local_6c == -0x78fb9f3b) {
      return;
    }
  }
  if (local_6c == 0x1d4885bd) {
    if (0xa330d424 < (DAT_004afc80 & DAT_004afc84 ^ 0x2002160 | 0x6dd99296)) {
      iVar2 = 0x7635b820;
    }
  }
  else {
    iVar2 = -0x707fa3fd;
    if (local_6c != 0x7635b820) goto LAB_0021d4dc;
  }
LAB_0021d598:
  local_6c = iVar2;
  goto LAB_0021d4dc;
}



// ----- -[BubbleBoxInfo sendReferColorDark] @ 0021d5cc -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendReferColorDark(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_1c;
  ID local_18;
  ID *local_10;
  
  local_1c = 0x70833abc;
  do {
    while( true ) {
      while( true ) {
        while (local_1c < 0x88d42d6) {
          if (local_1c == -0x6d02cfb9) {
            uVar1 = 0;
            if (DAT_004afc9c != 0) {
              uVar1 = DAT_004afc98 / DAT_004afc9c;
            }
            local_1c = -0x515327cd;
            local_10 = (ID *)(param_1 + 0x98);
            if ((((uVar1 | 0x100000) ^ 0xffe00003) & 0x84740004) < 0xa3cfefcd) {
              local_1c = 0x88d42d6;
            }
          }
          else if (local_1c == -0x515327cd) {
            local_1c = -0x6d02cfb9;
          }
          else if (local_1c == -0x275ff5f2) {
            local_18 = *local_10;
            local_1c = 0x6257f2f4;
          }
        }
        if (local_1c != 0x88d42d6) break;
        local_1c = -0x275ff5f2;
      }
      if (local_1c != 0x70833abc) break;
      local_1c = -0x6d02cfb9;
      if (((uint)((ulong)(uint)(DAT_004afc90 * DAT_004afc94) * 0x35f1eee1 >> 0x3d) | 0xff78609a) <
          0xa9280855) {
        local_1c = -0x515327cd;
      }
    }
  } while (local_1c != 0x6257f2f4);
  return local_18;
}



// ----- -[BubbleBoxInfo setSendReferColorDark:] @ 0021d724 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendReferColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_74;
  ID *local_70;
  
  uVar1 = DAT_004afca0 * DAT_004afca4;
  local_74 = 0xfe61d8a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 < -0x453b50be) {
            if (local_74 < -0x58002c70) {
              if (local_74 == -0x72c0430b) {
                uVar2 = DAT_004afcb8 - DAT_004afcbc;
                IVar3 = *local_70;
                *local_70 = param_3;
                _objc_release(IVar3);
                param_2 = extraout_x1_01;
                local_74 = -0x1d446e82;
                if (0x171e283c < ((uVar2 ^ 0xa2042282) & 0xe7052e83) * 0xa1df46b) {
                  local_74 = -0x58002c70;
                }
              }
              else if ((local_74 == -0x5d9762cc) &&
                      (local_74 = -0x72c0430b,
                      0x3dc6ad7a <
                      ((DAT_004afcb0 & DAT_004afcb4) + 0x12e6961 | 0x75ce26d3) * 0x7cd458d5)) {
                local_74 = -0x1d446e82;
              }
            }
            else if (local_74 == -0x58002c70) {
              local_74 = -0x453b50be;
            }
            else if (local_74 == -0x4558b4b2) {
              uVar2 = 0;
              if (DAT_004afcac != 0) {
                uVar2 = DAT_004afca8 / DAT_004afcac;
              }
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_00;
              local_74 = -0x4558b4b2;
              local_70 = (ID *)(param_1 + 0x98);
              if ((uVar2 ^ 0x415c0400 | 0x83f1b9) / 0x7f7af57d < 0xb86ba392) {
                local_74 = 0x21324f12;
              }
            }
          }
          if (local_74 < 0x21324f12) break;
          if (local_74 == 0x21324f12) {
            local_74 = -0x5d9762cc;
          }
          else if (local_74 == 0x322eca9d) {
            _objc_retain(param_3,param_2);
            param_2 = extraout_x1;
            local_74 = -0x4558b4b2;
          }
        }
        if (local_74 != -0x1d446e82) break;
        IVar3 = *local_70;
        *local_70 = param_3;
        _objc_release(IVar3);
        param_2 = extraout_x1_02;
        local_74 = -0x72c0430b;
      }
      if (local_74 != 0xfe61d8a) break;
      local_74 = 0x322eca9d;
      if (((uVar1 & 0xc755cc1) * -0xa00f637 & 0x15cb253a) < 0x7e611f3d) {
        local_74 = -0x4558b4b2;
      }
    }
  } while (local_74 != -0x453b50be);
  return;
}



// ----- -[BubbleBoxInfo enabledTimeColor] @ 0021da04 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::enabledTimeColor(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = 0x41ff43fc;
  iVar1 = local_78;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_78 = iVar1, iVar1 = local_78, local_78 < 0x97ed6fd) {
            if (local_78 < -0x60d5e626) {
              iVar1 = -0x72ff797b;
              if (local_78 != -0x778bf947) {
                if (local_78 == -0x76bb70e5) {
                  iVar1 = 0x1832f1f5;
                }
                else {
                  iVar1 = local_78;
                  if (local_78 == -0x72ff797b) {
                    iVar1 = -0x76bb70e5;
                    local_70 = (byte *)(param_1 + 0xc);
                  }
                }
              }
            }
            else if (local_78 == -0x60d5e626) {
              iVar1 = 0x4b7f3eb;
            }
            else if (local_78 == -0x48661d4d) {
              local_71 = *local_70;
              iVar1 = -0x60d5e626;
              if ((DAT_004afcc8 - DAT_004afccc | 0xbd7f7fefU) == 0x8c4b1e49) {
                iVar1 = 0x483cebc3;
              }
            }
            else if ((local_78 == 0x4b7f3eb) &&
                    (iVar1 = 0x483a1850, (DAT_004afcd0 & DAT_004afcd4) == 0x4d28ff37)) {
              iVar1 = 0x97ed6fd;
            }
          }
          if (local_78 < 0x41ff43fc) break;
          iVar1 = -0x48661d4d;
          if (local_78 != 0x483cebc3) {
            if (local_78 == 0x483a1850) {
              iVar1 = 0x97ed6fd;
              if (((uint)(DAT_004afcd8 - DAT_004afcdc) / 0x7abb2b61) * 0x4bdc1330 < 0xfa93435d) {
                iVar1 = 0x17f14ba0;
              }
            }
            else {
              iVar1 = local_78;
              if ((local_78 == 0x41ff43fc) &&
                 (iVar1 = -0x72ff797b,
                 (DAT_004afcc0 - DAT_004afcc4 ^ 0xf181239dU) + 0x46996381 < 0xb5af5076)) {
                iVar1 = -0x778bf947;
              }
            }
          }
        }
        if (local_78 != 0x97ed6fd) break;
        iVar1 = 0x483a1850;
      }
      if (local_78 != 0x1832f1f5) break;
      iVar1 = -0x48661d4d;
    }
  } while (local_78 != 0x17f14ba0);
  return (bool)local_71;
}



// ----- -[BubbleBoxInfo setEnabledTimeColor:] @ 0021dca0 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setEnabledTimeColor_(ID param_1,SEL param_2,bool param_3)

{
  undefined4 local_14;
  
  local_14 = 0x57e56279;
  do {
    while (local_14 == 0x57e56279) {
      *(char *)(param_1 + 0xc) = (char)param_3;
      local_14 = 0x23edcd6d;
    }
  } while (local_14 != 0x23edcd6d);
  return;
}



// ----- -[BubbleBoxInfo timeColor] @ 0021dd04 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::timeColor(ID param_1,SEL param_2)

{
  int local_1c;
  ID local_18;
  ID *local_10;
  
  local_1c = -0x33926d93;
  do {
    while( true ) {
      while( true ) {
        while (local_1c < 0x158f3a10) {
          if (local_1c == -0x5fe6fff5) {
            local_1c = 0x158f3a10;
          }
          else if (local_1c == -0x33926d93) {
            local_1c = -0x5fe6fff5;
            if ((uint)((ulong)((DAT_004afce0 | DAT_004afce4) + 0x5088a5dd) * 0x24b6ceb3 >> 0x3d) <
                0x3d88e584) {
              local_1c = 0x158f3a10;
            }
          }
          else if (local_1c == 0x7796089) {
            local_18 = *local_10;
            local_1c = 0x5daa933c;
          }
        }
        if (local_1c != 0x158f3a10) break;
        local_1c = 0x3eb9f404;
        local_10 = (ID *)(param_1 + 0xa0);
        if (0x8ca0b55b < ((DAT_004afce8 & DAT_004afcec) * -0x3860dc64 + 0xc2963bb8 | 0x4f87810b)) {
          local_1c = 0x158f3a10;
        }
      }
      if (local_1c != 0x3eb9f404) break;
      local_1c = 0x7796089;
    }
  } while (local_1c != 0x5daa933c);
  return local_18;
}



// ----- -[BubbleBoxInfo setTimeColor:] @ 0021de68 -----

/* WARNING: Removing unreachable block (ram,0x0021e098) */
/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setTimeColor_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ID IVar2;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  int local_74;
  ID *local_70;
  
  local_74 = -0x6b552b31;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 < -0x522b58cc) {
            if (local_74 < -0x5b0112e9) {
              if (local_74 == -0x6b552b31) {
                local_74 = -0x6667f38b;
              }
              else if ((local_74 == -0x6667f38b) &&
                      (uVar1 = DAT_004afcf8 + DAT_004afcfc, _objc_retain(param_3,param_2),
                      param_2 = extraout_x1_00, local_74 = -0x6667f38b,
                      local_70 = (ID *)(param_1 + 0xa0),
                      0x2f96b8c5 < (uVar1 & 0x220681) + 0x84c631e4)) {
                local_74 = -0x5b0112e9;
              }
            }
            else if (local_74 == -0x5b0112e9) {
              local_74 = 0x3ba5ef01;
            }
            else if ((local_74 == -0x593b6ed7) &&
                    (local_74 = -0x593b6ed7,
                    ((DAT_004afd08 & DAT_004afd0c) * -0x3b2e10b5 | 0xd66f91cf) / 0x714afeb <
                    0x10333b1)) {
              local_74 = -0x42682a13;
            }
          }
          if (local_74 < 0x51f1ec68) break;
          if (local_74 == 0x51f1ec68) {
            local_74 = -0x593b6ed7;
            if (0xbb77ce7c <
                (((DAT_004afd00 ^ DAT_004afd04) / 0x21f82dbd | 0xfffffff9) & 0x80e5fc5a)) {
              local_74 = -0x522b58cc;
            }
          }
          else if (local_74 == 0x7191c561) {
            _objc_retain(param_3,param_2);
            param_2 = extraout_x1_01;
            local_74 = -0x6667f38b;
          }
        }
        if (local_74 != -0x522b58cc) break;
        local_74 = -0x593b6ed7;
      }
      if (local_74 != 0x3ba5ef01) break;
      IVar2 = *local_70;
      *local_70 = param_3;
      _objc_release(IVar2);
      param_2 = extraout_x1;
      local_74 = 0x51f1ec68;
    }
  } while (local_74 != -0x42682a13);
  return;
}



// ----- -[BubbleBoxInfo timeColorDark] @ 0021e0f0 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::timeColorDark(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x4f222028;
LAB_0021e20c:
  if (local_7c < -0x15ab004a) {
    if (-0x39761a30 < local_7c) {
      if (local_7c == -0x39761a2f) {
        iVar2 = -0x15ab004a;
        goto LAB_0021e3e4;
      }
      if (local_7c == -0x2b5386be) {
        iVar2 = 0x507bf2c6;
        if (0xbd9d217e < (((DAT_004afd20 * DAT_004afd24 | 0x8000000U) ^ 0xe0a42) & 0x384e0ace)) {
          iVar2 = -0x560caad;
        }
        goto LAB_0021e3e4;
      }
      if (local_7c == -0x33c4d072) {
        return local_78;
      }
      goto LAB_0021e20c;
    }
    if (local_7c == -0x7f5a2d1d) {
      iVar2 = -0x2b5386be;
    }
    else {
      if (local_7c == -0x6ecffd06) {
        uVar1 = 0;
        if (DAT_004afd1c != 0) {
          uVar1 = DAT_004afd18 / DAT_004afd1c;
        }
        iVar2 = -0x7f5a2d1d;
        local_70 = (ID *)(param_1 + 0xa8);
        if (0x21c02d39 < (uint)((ulong)(uVar1 + 0x81abb53c) * 0x600daefb >> 0x3e) * -0x15bdfa7b) {
          iVar2 = -0x1093d48e;
        }
        goto LAB_0021e3e4;
      }
      if (local_7c != -0x4fac853e) goto LAB_0021e20c;
      iVar2 = 0x6e695623;
    }
  }
  else if (local_7c < 0x4f222028) {
    if (local_7c == -0x15ab004a) {
      iVar2 = -0x15ab004a;
      if (((DAT_004afd38 & DAT_004afd3c) + 0x9f75c651 & 0x5c6d68c) != 0xc7d581ec) {
        iVar2 = -0x33c4d072;
      }
    }
    else {
      iVar2 = -0x6ecffd06;
      if ((local_7c != -0x1093d48e) && (iVar2 = 0x507bf2c6, local_7c != -0x560caad))
      goto LAB_0021e20c;
    }
  }
  else if (local_7c == 0x6e695623) {
    iVar2 = -0x39761a2f;
    if ((DAT_004afd30 * DAT_004afd34 + 0x443cf3c3U ^ 0xedc8706a) < 0xb307954b) {
      iVar2 = -0x15ab004a;
    }
  }
  else if (local_7c == 0x507bf2c6) {
    local_78 = *local_70;
    iVar2 = -0x4fac853e;
    if (0x887fe9e8 < (DAT_004afd28 + DAT_004afd2c & 0x34282044U ^ 0x127cca21)) {
      iVar2 = 0x507bf2c6;
    }
  }
  else {
    if (local_7c != 0x4f222028) goto LAB_0021e20c;
    iVar2 = -0x6ecffd06;
    if ((DAT_004afd10 - DAT_004afd14 & 0x8dc88981U) == 0x154a852c) {
      iVar2 = -0x1093d48e;
    }
  }
LAB_0021e3e4:
  local_7c = iVar2;
  goto LAB_0021e20c;
}



// ----- -[BubbleBoxInfo setTimeColorDark:] @ 0021e41c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setTimeColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar5;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  iVar2 = DAT_004afd40 * DAT_004afd44;
  local_7c = -0x1bf2a80a;
  iVar5 = local_7c;
LAB_0021e4dc:
  do {
    while( true ) {
      while (local_7c = iVar5, iVar5 = local_7c, local_7c < 0x34fff83e) {
        if (local_7c < -0x1bf2a80a) {
          if (local_7c == -0x51f5357c) {
            iVar5 = 0x34fff83e;
            local_70 = (ID *)(param_1 + 0xa8);
            if ((DAT_004afd48 ^ DAT_004afd4c ^ 0x711696d6) * -0x524b5c02 != 0x5fb9bdda) {
              iVar5 = 0x37965ee9;
            }
          }
          else if (local_7c == -0x4e589f08) {
            _objc_retain(param_3);
            param_2 = extraout_x1_01;
            iVar5 = 0x6d33c049;
          }
          else if ((local_7c == -0x338be73f) &&
                  (iVar5 = -0x7982295,
                  (DAT_004afd60 + DAT_004afd64 ^ 0xbfc83e49U) * -0x6df7f127 < 0xfb5fa66)) {
            iVar5 = 0x57a7e2fc;
          }
        }
        else if (local_7c == -0x1bf2a80a) {
          iVar5 = -0x51f5357c;
          if (0x5a173470 <
              (uint)((int)((long)((ulong)(uint)(iVar2 * -0x6b05a44e) * 0xa4a1cd71) >> 0x3f) *
                    0x404003c7)) {
            iVar5 = 0x34fff83e;
          }
        }
        else if (local_7c == -0x7982295) {
          *local_70 = param_3;
          _objc_release(local_78,param_2);
          param_2 = extraout_x1_02;
          iVar5 = 0x54add88e;
        }
        else if (local_7c == 0x4976b5b) {
          iVar5 = -0x338be73f;
        }
      }
      if (0x54add88d < local_7c) break;
      iVar5 = -0x51f5357c;
      if (local_7c != 0x34fff83e) {
        if (local_7c == 0x359d89d9) {
          uVar1 = (DAT_004afd50 ^ DAT_004afd54) & 0xac19f62f | 0xac08762c;
          bVar3 = 0x84fd6432 < uVar1;
          bVar4 = uVar1 == 0x84fd6433;
          iVar5 = 0x6d33c049;
LAB_0021e704:
          if (!bVar3 || bVar4) {
            iVar5 = -0x4e589f08;
          }
        }
        else {
          iVar5 = local_7c;
          if (local_7c == 0x37965ee9) {
            iVar5 = 0x359d89d9;
          }
        }
      }
    }
    if (local_7c == 0x57a7e2fc) {
      *local_70 = param_3;
      _objc_release(local_78,param_2);
      param_2 = extraout_x1_00;
      iVar5 = -0x7982295;
      goto LAB_0021e4dc;
    }
    if (local_7c == 0x6d33c049) {
      uVar1 = ((DAT_004afd58 ^ DAT_004afd5c) * -0x7c4b2ce4 | 0x685f51bb) + 0x6f2be422;
      _objc_retain(param_3);
      local_78 = *local_70;
      bVar3 = 0xbe01bf57 < uVar1;
      bVar4 = uVar1 == 0xbe01bf58;
      iVar5 = 0x4976b5b;
      param_2 = extraout_x1;
      goto LAB_0021e704;
    }
    if (local_7c == 0x54add88e) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo sendTimeColor] @ 0021e770 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendTimeColor(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x3347eb8;
LAB_0021e894:
  if (local_7c < 0x270f1d36) {
    if (-0x87d232e < local_7c) {
      if (local_7c == -0x3347eb8) {
        iVar2 = -0x4ddf05aa;
        if ((DAT_004afd70 + DAT_004afd74 ^ 0x5027718U) * 0x4c5db398 + 0x79930f9 < 0xa3d20726) {
          iVar2 = 0x463be769;
        }
        goto LAB_0021e9b8;
      }
      if (local_7c == 0x213926f) {
        iVar2 = 0x4a2e5389;
        if ((DAT_004afd88 + DAT_004afd8c & 0xc015361bU) * 0x57070343 < 0x85039542) {
          iVar2 = -0x87d232d;
        }
        goto LAB_0021e9b8;
      }
      if (local_7c == -0x87d232d) {
        return local_78;
      }
      goto LAB_0021e894;
    }
    if (local_7c == -0x7e31ea69) {
      iVar2 = 0x270f1d36;
      goto LAB_0021e9b8;
    }
    iVar2 = 0x463be769;
    if (local_7c != -0x4ddf05aa) goto LAB_0021e894;
  }
  else if (local_7c < 0x463be769) {
    if (local_7c == 0x270f1d36) {
      local_78 = *local_70;
      iVar2 = 0x36b9f226;
    }
    else {
      if (local_7c != 0x36b9f226) goto LAB_0021e894;
      uVar1 = 0;
      if (DAT_004afd84 != 0) {
        uVar1 = DAT_004afd80 / DAT_004afd84;
      }
      iVar2 = 0x213926f;
      if (((uint)((ulong)uVar1 * 0x2fa805af >> 0x3c) | 0x9546d761) == 0xefb7f3c6) {
        iVar2 = 0x4a2e5389;
      }
    }
  }
  else if (local_7c == 0x463be769) {
    iVar2 = -0x7e31ea69;
    local_70 = (ID *)(param_1 + 0xb0);
    if (0x762f3726 < (DAT_004afd78 + DAT_004afd7c ^ 0x200050U | 0x779dfbaf) / 0x325fe6b7) {
      iVar2 = 0x463be769;
    }
  }
  else {
    if (local_7c != 0x4a2e5389) goto LAB_0021e894;
    iVar2 = 0x213926f;
  }
LAB_0021e9b8:
  local_7c = iVar2;
  goto LAB_0021e894;
}



// ----- -[BubbleBoxInfo setSendTimeColor:] @ 0021e9f0 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendTimeColor_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  ID IVar5;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_74;
  ID *local_70;
  
  uVar1 = DAT_004afd90 + DAT_004afd94;
  local_74 = -0xdf4b9cb;
  iVar4 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar4, iVar4 = local_74, local_74 < 0x1745cc58) {
            if (local_74 < -0x4f6d3b19) {
              if (local_74 == -0x6f2ae6ef) {
                iVar4 = 0x35dc7b26;
                if ((DAT_004afda0 | DAT_004afda4) == 0x4146e621) {
                  iVar4 = 0x1fe5a2c8;
                }
              }
              else if (local_74 == -0x5604f7e4) {
                iVar4 = -0x4f6d3b19;
              }
              else if (local_74 == -0x55774e27) {
                uVar2 = DAT_004afdb8 * DAT_004afdbc;
                IVar5 = *local_70;
                *local_70 = param_3;
                _objc_release(IVar5);
                param_2 = extraout_x1;
                iVar4 = 0x26dadfa8;
                if (0x23a2faa9 < (uVar2 ^ 0xd52cd661) * -0x355e9b33 + 0x251299f8) {
                  iVar4 = 0x5fb6f20f;
                }
              }
            }
            else if (local_74 == -0x4f6d3b19) {
              iVar4 = 0x26dadfa8;
              if (((DAT_004afdb0 - DAT_004afdb4) * 0x78b4fcdd + 0xd89edd65U) / 0x6242eb53 !=
                  0x2430ba25) {
                iVar4 = -0x55774e27;
              }
            }
            else if (local_74 == -0xdf4b9cb) {
              iVar4 = 0x4e190515;
              if ((uVar1 & 0x42f73aa1) + 0x6fc20c54 < 0x37f34f62) {
                iVar4 = 0x1745cc58;
              }
            }
            else if (local_74 == -0x1dcb59f) {
              iVar4 = -0x6f2ae6ef;
            }
          }
          if (0x35dc7b25 < local_74) break;
          iVar4 = 0x4e190515;
          if (local_74 != 0x1745cc58) {
            if (local_74 == 0x1fe5a2c8) {
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_02;
              iVar4 = 0x35dc7b26;
            }
            else {
              iVar4 = local_74;
              if (local_74 == 0x26dadfa8) {
                IVar5 = *local_70;
                *local_70 = param_3;
                _objc_release(IVar5);
                param_2 = extraout_x1_00;
                iVar4 = -0x55774e27;
              }
            }
          }
        }
        if (local_74 != 0x35dc7b26) break;
        iVar3 = DAT_004afda8 * DAT_004afdac;
        _objc_retain(param_3,param_2);
        param_2 = extraout_x1_01;
        iVar4 = 0x1fe5a2c8;
        if (iVar3 != 0x56b46e38) {
          iVar4 = -0x5604f7e4;
        }
      }
      if (local_74 != 0x4e190515) break;
      iVar4 = 0x1745cc58;
      local_70 = (ID *)(param_1 + 0xb0);
      if (0x77b3b0f0 < ((DAT_004afd98 ^ DAT_004afd9c) + 0x2b66732 & 0xa924d971 ^ 0xe74a20fe)) {
        iVar4 = -0x1dcb59f;
      }
    }
  } while (local_74 != 0x5fb6f20f);
  return;
}



// ----- -[BubbleBoxInfo sendTimeColorDark] @ 0021ed6c -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::sendTimeColorDark(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x52fcebe4;
  iVar2 = local_7c;
  do {
    while( true ) {
      while( true ) {
        while (local_7c = iVar2, iVar2 = local_7c, -0x249755e7 < local_7c) {
          if (local_7c < 0x28e7bc2) {
            if (local_7c == -0x249755e6) {
              iVar2 = -0x1d4a6c45;
              if (0xb1e7eaf9 <
                  (uint)((ulong)(DAT_004afdd0 + DAT_004afdd4 | 0xf90326ba) * 0x1c40da65 >> 0x3b) *
                  0x137477db) {
                iVar2 = -0x3bbdd877;
              }
            }
            else if (local_7c == -0x1d4a6c45) {
              local_78 = *local_70;
              iVar2 = 0x6a187171;
            }
            else if (local_7c == -0xcf9711d) {
              iVar2 = -0x2ef5b64a;
            }
          }
          else if (local_7c == 0x28e7bc2) {
            iVar2 = -0xcf9711d;
            if (0x48f11146 <
                0x7d54e5f5U -
                (int)((long)((ulong)(DAT_004afde0 - DAT_004afde4 ^ 0x94b79332) * 0x8a2c344f) >> 0x3f
                     )) {
              iVar2 = -0x2ef5b64a;
            }
          }
          else if (local_7c == 0x1a9f81e5) {
            iVar2 = -0x4601a1cd;
            local_70 = (ID *)(param_1 + 0xb8);
          }
          else if (local_7c == 0x6a187171) {
            iVar2 = 0x28e7bc2;
          }
        }
        if (local_7c < -0x4601a1cd) break;
        if (local_7c == -0x4601a1cd) {
          iVar2 = -0x249755e6;
        }
        else {
          iVar2 = -0x1d4a6c45;
          if ((local_7c != -0x3bbdd877) && (iVar2 = local_7c, local_7c == -0x2ef5b64a)) {
            uVar1 = 0;
            if (DAT_004afdec != 0) {
              uVar1 = DAT_004afde8 / DAT_004afdec;
            }
            iVar2 = -0x2ef5b64a;
            if ((uVar1 | 0xb7e91b0f) != 0x8be26f7e) {
              iVar2 = -0x5e850606;
            }
          }
        }
      }
      if (local_7c != -0x52fcebe4) break;
      iVar2 = 0x1a9f81e5;
      if ((uint)((ulong)((DAT_004afdc0 & DAT_004afdc4) * -0x26a2b986) * 0x11d53775 >> 0x3c) ==
          0xf599fee1) {
        iVar2 = -0x4ee6c2ad;
      }
    }
    iVar2 = 0x1a9f81e5;
  } while ((local_7c == -0x4ee6c2ad) || (iVar2 = local_7c, local_7c != -0x5e850606));
  return local_78;
}



// ----- -[BubbleBoxInfo setSendTimeColorDark:] @ 0021f03c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSendTimeColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  ID IVar2;
  SEL extraout_x1;
  int local_74;
  ID *local_70;
  
  uVar1 = 0;
  if (DAT_004afdf4 != 0) {
    uVar1 = DAT_004afdf0 / DAT_004afdf4;
  }
  local_74 = -0x1923d192;
  do {
    while( true ) {
      while( true ) {
        while (local_74 < 0x561c968a) {
          if (local_74 == -0x3ff9e8aa) {
            local_74 = 0x3a4030d1;
            local_70 = (ID *)(param_1 + 0xb8);
            if (((uint)((ulong)((uint)(DAT_004afdf8 * DAT_004afdfc) >> 1) * 0x900ebef >> 0x3a) |
                0x134032c8) == 0x2776d0a2) {
              local_74 = -0x3ff9e8aa;
            }
          }
          else if (local_74 == -0x1923d192) {
            local_74 = -0x3ff9e8aa;
            if (0x4059ab9e < ((uVar1 + 0x3d4b4e95 ^ 0x682810) & 0xee7ab0)) {
              local_74 = 0x561c968a;
            }
          }
          else if (local_74 == 0x3a4030d1) {
            local_74 = 0x6de218e1;
          }
        }
        if (local_74 != 0x561c968a) break;
        local_74 = -0x3ff9e8aa;
      }
      if (local_74 != 0x6de218e1) break;
      _objc_retain(param_3);
      param_2 = extraout_x1;
      local_74 = 0x6bb8c2ed;
    }
  } while (local_74 != 0x6bb8c2ed);
  IVar2 = *local_70;
  *local_70 = param_3;
  _objc_release(IVar2,param_2);
  return;
}



// ----- -[BubbleBoxInfo hongbaoTextColor] @ 0021f1e4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::hongbaoTextColor(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = -0x1845faa8;
LAB_0021f2dc:
  if (local_7c < -0x7fabc1c) {
    if (local_7c < -0x1845faa8) {
      if (local_7c == -0x365c46b7) {
        iVar1 = 0x3b4c99f0;
      }
      else {
        iVar1 = -0x7fabc1c;
        if (local_7c != -0x248bab28) goto LAB_0021f2dc;
      }
    }
    else if (local_7c == -0x1845faa8) {
      iVar1 = -0x7fabc1c;
    }
    else {
      if (local_7c != -0x17bf3105) goto LAB_0021f2dc;
      iVar1 = -0x17bf3105;
      if ((((DAT_004afe18 | DAT_004afe1c) & 0x332200f8) * 0x2b4bd5dd & 0xd0876218) != 0xd91b6d5a) {
        iVar1 = 0x7025654b;
      }
    }
  }
  else {
    if (0x615de471 < local_7c) {
      if (local_7c == 0x615de472) {
        iVar1 = -0x17bf3105;
        goto LAB_0021f400;
      }
      if (local_7c == 0x7fd6902c) {
        iVar1 = 0x615de472;
        if (0x369b4572 < (DAT_004afe10 & DAT_004afe14) * -0x7841fa18 + 0x4b768aab) {
          iVar1 = -0x17bf3105;
        }
        goto LAB_0021f400;
      }
      if (local_7c == 0x7025654b) {
        return local_78;
      }
      goto LAB_0021f2dc;
    }
    if (local_7c != -0x7fabc1c) {
      if (local_7c == 0x3b4c99f0) {
        local_78 = *local_70;
        iVar1 = 0x7fd6902c;
        goto LAB_0021f400;
      }
      goto LAB_0021f2dc;
    }
    iVar1 = -0x7fabc1c;
    local_70 = (ID *)(param_1 + 0xc0);
    if (((DAT_004afe08 - DAT_004afe0c) + 0x42a35d7U & 0xd1e27cf3) + 0x9f35f179 < 0xccce9015) {
      iVar1 = -0x365c46b7;
    }
  }
LAB_0021f400:
  local_7c = iVar1;
  goto LAB_0021f2dc;
}



// ----- -[BubbleBoxInfo setHongbaoTextColor:] @ 0021f438 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setHongbaoTextColor_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  ID IVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  int local_6c;
  
  pIVar1 = (ID *)(param_1 + 0xc0);
  local_6c = -0x70986f1c;
LAB_0021f4b8:
  do {
    while (local_6c < -0x3034870d) {
      if (local_6c < -0x55b06b0f) {
        if (local_6c == -0x70986f1c) {
LAB_0021f5cc:
          local_6c = -0x55b06b0f;
        }
        else if (local_6c == -0x5788bbe2) {
          uVar2 = 0;
          if (DAT_004afe34 != 0) {
            uVar2 = DAT_004afe30 / DAT_004afe34;
          }
          local_6c = 0x4e0a1093;
          if (0x2307ea4f < (uVar2 * -0x15f6c266 & 0xee33ff55 | 0xce22d755)) {
            local_6c = -0x530c2b8c;
          }
        }
      }
      else if (local_6c == -0x55b06b0f) {
        uVar2 = DAT_004afe28 | DAT_004afe2c;
        _objc_retain(param_3,param_2);
        IVar3 = *pIVar1;
        *pIVar1 = param_3;
        _objc_release(IVar3);
        param_2 = extraout_x1_00;
        local_6c = 0x78bf9d5;
        if (0x3481b47 < (uint)((ulong)(uVar2 * -0x6195659d) * 0x986f9f29 >> 0x3f)) {
          local_6c = -0xe09ab8d;
        }
      }
      else if ((local_6c == -0x530c2b8c) &&
              (local_6c = 0x4e0a1093,
              (DAT_004afe38 * DAT_004afe3c + 0x1de9aaebU) / 0x2980e4b0 != 0xbc575912)) {
        local_6c = -0x3034870d;
      }
    }
    if (0x78bf9d4 < local_6c) {
      if (local_6c == 0x78bf9d5) {
        local_6c = -0x5788bbe2;
      }
      else if (local_6c == 0x4e0a1093) {
        local_6c = -0x530c2b8c;
      }
      goto LAB_0021f4b8;
    }
    if (local_6c == -0xe09ab8d) {
      _objc_retain(param_3,param_2);
      IVar3 = *pIVar1;
      *pIVar1 = param_3;
      _objc_release(IVar3);
      param_2 = extraout_x1;
      goto LAB_0021f5cc;
    }
    if (local_6c == -0x3034870d) {
      return;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo hongbaoTextColorDark] @ 0021f680 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::hongbaoTextColorDark(ID param_1,SEL param_2)

{
  int iVar1;
  int local_74;
  ID local_70;
  
  local_74 = 0x76243f49;
  iVar1 = local_74;
  do {
    while( true ) {
      while( true ) {
        while (local_74 = iVar1, iVar1 = local_74, 0x4bfb593a < local_74) {
          if (local_74 < 0x738ac778) {
            if (local_74 == 0x4bfb593b) {
              iVar1 = -0x509bd24c;
              if (0x6d37dc0d < DAT_004afe58 + DAT_004afe5c + 0xba4a43ceU) {
                iVar1 = 0x4bfb593b;
              }
            }
            else if ((local_74 == 0x673e4e0b) &&
                    (iVar1 = -0x565e5e6a, (DAT_004afe50 & DAT_004afe54) * 0x3688635e != -0x1e7c82bd)
                    ) {
              iVar1 = 0x4bfb593b;
            }
          }
          else {
            iVar1 = -0x28883b91;
            if (((local_74 != 0x738ac778) && (iVar1 = local_74, local_74 == 0x76243f49)) &&
               (iVar1 = -0x28883b91,
               ((DAT_004afe40 & DAT_004afe44 | 0x50059aec) * -0x2cf0e673 ^ 0xfd3fb860) < 0xb3a80a92)
               ) {
              iVar1 = 0x738ac778;
            }
          }
        }
        if (local_74 < -0x2eb00177) break;
        if (local_74 == -0x2eb00177) {
          iVar1 = 0x673e4e0b;
        }
        else if ((local_74 == -0x28883b91) &&
                (local_70 = *(ID *)(param_1 + 200), iVar1 = -0x28883b91,
                ((DAT_004afe48 - DAT_004afe4c) + 0xb415c997U & 0xf4d62c26) / 0x241b0fd2 < 0xb0788c88
                )) {
          iVar1 = -0x2eb00177;
        }
      }
      if (local_74 != -0x565e5e6a) break;
      iVar1 = 0x4bfb593b;
    }
  } while (local_74 != -0x509bd24c);
  return local_70;
}



// ----- -[BubbleBoxInfo setHongbaoTextColorDark:] @ 0021f8c0 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setHongbaoTextColorDark_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  uVar1 = DAT_004afe60 + DAT_004afe64;
  local_7c = 0x4293c7dd;
  iVar3 = local_7c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_7c = iVar3, iVar3 = local_7c, local_7c < -0xe32867e) {
            if (local_7c < -0x2b37842d) {
              if (local_7c == -0x7e12e91d) {
                _objc_retain(param_3);
                *local_70 = param_3;
                param_2 = extraout_x1_01;
                iVar3 = -0x43673b5f;
              }
              else if (local_7c == -0x53d2deab) {
                iVar3 = -0x25380615;
                if (0x29889670 <
                    (uint)((ulong)(DAT_004afe80 + DAT_004afe84 + 0xe20e7a2f) * 0x3988729d >> 0x3d))
                {
                  iVar3 = -0x1af8c941;
                }
              }
              else if (local_7c == -0x43673b5f) {
                uVar2 = DAT_004afe78 & DAT_004afe7c;
                _objc_retain(param_3);
                local_78 = *local_70;
                *local_70 = param_3;
                param_2 = extraout_x1;
                iVar3 = -0x43673b5f;
                if ((uVar2 & 0x8cc80082 ^ 0x88cc12c0) < 0x8db153dc) {
                  iVar3 = -0x2b37842d;
                }
              }
            }
            else if (local_7c == -0x2b37842d) {
              iVar3 = -0x53d2deab;
            }
            else if (local_7c == -0x25380615) {
              _objc_release(local_78,param_2);
              param_2 = extraout_x1_02;
              iVar3 = 0x320440ec;
            }
            else if (local_7c == -0x1af8c941) {
              _objc_release(local_78,param_2);
              param_2 = extraout_x1_00;
              iVar3 = -0x25380615;
            }
          }
          if (local_7c < 0x4293c7dd) break;
          if (local_7c == 0x7edb02fa) {
            iVar3 = 0x12635654;
          }
          else if (local_7c == 0x4941f867) {
            iVar3 = 0x7edb02fa;
            local_70 = (ID *)(param_1 + 200);
          }
          else if ((local_7c == 0x4293c7dd) &&
                  (iVar3 = 0x4941f867, (uVar1 & 0x7afdff5f | 0x6addf65f) == 0x57be305)) {
            iVar3 = -0xe32867e;
          }
        }
        iVar3 = 0x4941f867;
      } while (local_7c == -0xe32867e);
      if (local_7c != 0x12635654) break;
      iVar3 = -0x7e12e91d;
      if (((uint)((ulong)(DAT_004afe70 + DAT_004afe74 + 0xc593f15c) * 0x4e9d19ad >> 0x3e) |
          0x9b6bf314) != 0xde68fe6c) {
        iVar3 = -0x43673b5f;
      }
    }
    iVar3 = local_7c;
  } while (local_7c != 0x320440ec);
  return;
}



// ----- -[BubbleBoxInfo hideSourceTitle] @ 0021fbe0 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::hideSourceTitle(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = -0x789e5082;
LAB_0021fcf4:
  iVar1 = -0x5d38f57f;
  if (local_78 < -0x5d38f57f) {
    if (local_78 < -0x69a707a0) {
      if (local_78 == -0x789e5082) {
        if ((DAT_004afe90 & DAT_004afe94) * -0x67f46479 == -0x53691fad) {
          iVar1 = -0x5f88c0d0;
        }
      }
      else {
        if (local_78 != -0x756ecedf) goto LAB_0021fcf4;
        iVar1 = 0x2c4d884f;
      }
    }
    else if (local_78 == -0x69a707a0) {
      local_71 = *local_70;
      iVar1 = 0x4c29c259;
      if (0x5127264 < ((DAT_004afea8 ^ DAT_004afeac) * 0x577e815d ^ 0x3009f8cc) * -0x79900634) {
        iVar1 = 0x67fe4bb8;
      }
    }
    else {
      iVar1 = -0x5d38f57f;
      if (local_78 != -0x5f88c0d0) goto LAB_0021fcf4;
    }
  }
  else {
    if (0x4c29c258 < local_78) {
      if (local_78 == 0x4c29c259) {
        iVar1 = -0x69a707a0;
        goto LAB_0021fe18;
      }
      iVar1 = 0x5e355ef4;
      if (local_78 == 0x67fe4bb8) goto LAB_0021fe18;
      if (local_78 == 0x5e355ef4) {
        return (bool)local_71;
      }
      goto LAB_0021fcf4;
    }
    if (local_78 == -0x5d38f57f) {
      local_70 = (byte *)(param_1 + 0xd);
      if (0xe3752d7 < (DAT_004afe98 & DAT_004afe9c & 0x9124044) + 0x60d7c152) {
        iVar1 = -0x756ecedf;
      }
      goto LAB_0021fe18;
    }
    if (local_78 != 0x2c4d884f) goto LAB_0021fcf4;
    iVar1 = 0x4c29c259;
    if ((uint)((ulong)((DAT_004afea0 ^ DAT_004afea4) * -0x259e82e3) * 0x5e73f11f >> 0x3e) !=
        0x2e8a636a) {
      iVar1 = -0x69a707a0;
    }
  }
LAB_0021fe18:
  local_78 = iVar1;
  goto LAB_0021fcf4;
}



// ----- -[BubbleBoxInfo setHideSourceTitle:] @ 0021fe48 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setHideSourceTitle_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_6c;
  undefined1 local_65;
  
  uVar1 = DAT_004afeb0 - DAT_004afeb4;
  local_6c = -0x721f2b50;
  iVar3 = local_6c;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_6c = iVar3, iVar3 = local_6c, local_6c < 0x13689861) {
            if (local_6c < -0x160617aa) {
              if (local_6c == -0x721f2b50) {
                iVar3 = 0x63a9e45c;
                if (0x1ea5de54 < ((uVar1 | 0xffd74fa7) ^ 0x5b6bb718)) {
                  iVar3 = -0x160617aa;
                }
              }
              else if (local_6c == -0x167e1f83) {
                *(undefined1 *)(param_1 + 0xd) = local_65;
                iVar3 = 0x54abae50;
              }
            }
            else if (local_6c == -0x160617aa) {
              local_65 = (undefined1)param_3;
              iVar3 = 0x13689861;
              if ((DAT_004afeb8 + DAT_004afebc + 0x40dc925cU & 0x6ffbfdc7 | 0x6738f006) < 0x5073dd9e
                 ) {
                iVar3 = 0x63a9e45c;
              }
            }
            else if (local_6c == 0x584f5ab) {
              iVar3 = 0x6c244b88;
            }
          }
          if (0x63a9e45b < local_6c) break;
          if (local_6c == 0x13689861) {
            iVar3 = -0x167e1f83;
          }
          else if ((local_6c == 0x54abae50) &&
                  (iVar3 = 0x6c244b88,
                  0xf8ff8d7a < (DAT_004afec0 & DAT_004afec4 & 0x81981914 | 0x5e0282c2) * 0x712949df)
                  ) {
            iVar3 = 0x584f5ab;
          }
        }
        iVar3 = -0x160617aa;
      } while (local_6c == 0x63a9e45c);
      if (local_6c != 0x6c244b88) break;
      uVar2 = 0;
      if (DAT_004afecc != 0) {
        uVar2 = DAT_004afec8 / DAT_004afecc;
      }
      iVar3 = 0x763f7035;
      if (0x2f9d6352 < ((uint)((ulong)(uVar2 ^ 0xaa50e603) * 0x3b830ea9 >> 0x3d) ^ 0x7454535)) {
        iVar3 = 0x584f5ab;
      }
    }
    iVar3 = local_6c;
  } while (local_6c != 0x763f7035);
  return;
}



// ----- -[BubbleBoxInfo hasEdgeInsets] @ 002200c4 -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::hasEdgeInsets(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_78;
  byte local_71;
  byte *local_70;
  
  local_78 = -0x1223e6e5;
  iVar2 = local_78;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_78 = iVar2, iVar2 = local_78, local_78 < -0x24bc4230) {
            if (local_78 < -0x56513663) {
              iVar2 = -0x5efdf840;
              if (((local_78 != -0x77274aad) && (iVar2 = local_78, local_78 == -0x5efdf840)) &&
                 (iVar2 = -0xa2124e2, local_70 = (byte *)(param_1 + 0xe),
                 ((DAT_004afed8 + DAT_004afedc + 0x989ff8cbU | 0x1f2c9b59) ^ 0xedb05af9) <
                 0x66c29646)) {
                iVar2 = -0x77274aad;
              }
            }
            else if (local_78 == -0x56513663) {
              local_71 = *local_70;
              iVar2 = -0x3ace064a;
            }
            else if ((local_78 == -0x3ace064a) &&
                    (iVar2 = 0x2384181b,
                    (uint)((ulong)(uint)(DAT_004afee0 * DAT_004afee4) * 0x36ab3077 >> 0x3c) ==
                    0x82f195ba)) {
              iVar2 = 0x277b9b3f;
            }
          }
          if (local_78 < 0x2384181b) break;
          if (local_78 == 0x2384181b) {
            uVar1 = 0;
            if (DAT_004afeec != 0) {
              uVar1 = DAT_004afee8 / DAT_004afeec;
            }
            iVar2 = 0x277b9b3f;
            if ((uVar1 + 0x54206ad2 & 0xef34b08d) < 0xc7faa0bb) {
              iVar2 = -0x24bc4230;
            }
          }
          else if (local_78 == 0x277b9b3f) {
            iVar2 = 0x2384181b;
          }
        }
        if (local_78 != -0x1223e6e5) break;
        iVar2 = -0x5efdf840;
        if ((DAT_004afed0 ^ DAT_004afed4) * -0x666c11e0 == 0x6f46771b) {
          iVar2 = -0x77274aad;
        }
      }
      if (local_78 != -0xa2124e2) break;
      iVar2 = -0x56513663;
    }
  } while (local_78 != -0x24bc4230);
  return (bool)local_71;
}



// ----- -[BubbleBoxInfo setHasEdgeInsets:] @ 00220328 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setHasEdgeInsets_(ID param_1,SEL param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  int local_74;
  undefined1 *local_70;
  undefined1 local_65;
  
  iVar1 = DAT_004afef0 - DAT_004afef4;
  local_74 = 0x55fb20fb;
  iVar2 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar2, iVar2 = local_74, -0xcc84e5 < local_74) {
            if (local_74 < 0x55fb20fb) {
              if (local_74 == -0xcc84e4) {
                iVar2 = -0x47503eed;
              }
              else if (local_74 == 0x4003ace4) {
                iVar2 = 0x7070472a;
              }
            }
            else if (local_74 == 0x7070472a) {
              *local_70 = local_65;
              iVar2 = -0x571dfb7a;
            }
            else if ((local_74 == 0x55fb20fb) &&
                    (iVar2 = -0x415f9647, 0x174d02d1 < (iVar1 + 0x99851dc9U & 0x83de7abb))) {
              iVar2 = -0x251d1c91;
            }
          }
          if (local_74 < -0x415f9647) break;
          iVar2 = -0x251d1c91;
          if (((local_74 != -0x415f9647) && (iVar2 = local_74, local_74 == -0x251d1c91)) &&
             (local_65 = (undefined1)param_3, iVar2 = -0x415f9647,
             local_70 = (undefined1 *)(param_1 + 0xe),
             ((DAT_004afef8 | DAT_004afefc) / 0x6e3b67ca + 0x73b9a6db | 0x474dd2fc) < 0xfcaa7949)) {
            iVar2 = 0x4003ace4;
          }
        }
        if (local_74 != -0x571dfb7a) break;
        iVar2 = -0xcc84e4;
        if ((DAT_004aff00 | DAT_004aff04) * -0xd7ae1d8 < 0xd5f97325) {
          iVar2 = -0x47503eed;
        }
      }
      if (local_74 != -0x47503eed) break;
      iVar2 = -0x47503eed;
      if (((DAT_004aff08 ^ DAT_004aff0c) + 0xec46da0b | 0x93d767ad) != 0x31041a35) {
        iVar2 = -0x7cd594aa;
      }
    }
  } while (local_74 != -0x7cd594aa);
  return;
}



// ----- -[BubbleBoxInfo edgeInsets] @ 0022058c -----

/* Function Stack Size: 0x10 bytes */

UIEdgeInsets BubbleBoxInfo::edgeInsets(ID param_1,SEL param_2)

{
  UIEdgeInsets UVar1;
  int iVar2;
  int local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double dStack_90;
  double *local_88;
  undefined8 local_80;
  
  local_ac = -0x4517e3aa;
  iVar2 = local_ac;
  do {
    while( true ) {
      while( true ) {
        while (local_ac = iVar2, iVar2 = local_ac, local_ac < -0x22af7b) {
          if (local_ac < -0x74563bc2) {
            if (local_ac == -0x7c3a07a0) {
              iVar2 = 0x78131a92;
              if (0xed8ca21a < ((DAT_004aff20 & DAT_004aff24) * -0xfaca9fe) / 0x6650494a) {
                iVar2 = -0x22af7b;
              }
            }
            else if (local_ac == -0x79c89341) {
              iVar2 = -0x7c3a07a0;
            }
          }
          else if (local_ac == -0x74563bc2) {
            local_80 = *(undefined8 *)(param_1 + 0xf0);
            local_88 = (double *)(param_1 + 0xf8);
            iVar2 = -0x74563bc2;
            if ((DAT_004aff18 | DAT_004aff1c) != 0x25d6d6ea) {
              iVar2 = -0x79c89341;
            }
          }
          else if ((local_ac == -0x4517e3aa) &&
                  (iVar2 = -0x74563bc2,
                  (DAT_004aff10 & DAT_004aff14 | 0x29b8b4cb) + 0xe9721047 < 0xdcaf4334)) {
            iVar2 = 0x50906641;
          }
        }
        if (local_ac < 0x50906641) break;
        iVar2 = -0x74563bc2;
        if ((local_ac != 0x50906641) && (iVar2 = local_ac, local_ac == 0x78131a92)) {
          dStack_90 = *local_88;
          local_98 = local_80;
          iVar2 = 0x317d5766;
          local_a8 = *(undefined8 *)(param_1 + 0xe0);
          uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
          if ((DAT_004aff28 ^ DAT_004aff2c) * -0x6d964480 == -0xaa4fa27) {
            iVar2 = 0x78131a92;
          }
        }
      }
      if (local_ac != -0x22af7b) break;
      iVar2 = 0x78131a92;
    }
  } while (local_ac != 0x317d5766);
  UVar1.field1_0x8 = (double)uStack_a0;
  UVar1.field0_0x0 = (double)local_a8;
  UVar1.field2_0x10 = (double)local_98;
  UVar1.field3_0x18 = dStack_90;
  return UVar1;
}



// ----- -[BubbleBoxInfo setEdgeInsets:] @ 002207d8 -----

/* WARNING: Removing unreachable block (ram,0x002209c0) */
/* Function Stack Size: 0x30 bytes */

void BubbleBoxInfo::setEdgeInsets_(ID param_1,SEL param_2,UIEdgeInsets param_3)

{
  uint uVar1;
  int iVar2;
  int local_8c;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  
  local_8c = 0x51cf0d7b;
  iVar2 = local_8c;
  do {
    while( true ) {
      while (local_8c = iVar2, iVar2 = local_8c, local_8c < 0xb854c22) {
        if (local_8c < -0x3478e9d2) {
          if (local_8c == -0x54ed8781) {
            *(double *)(param_1 + 0xf0) = dStack_80;
            *(double *)(param_1 + 0xf8) = local_88;
            iVar2 = 0x1d07f404;
          }
          else if (local_8c == -0x500b5a3c) {
            iVar2 = -0x1e52a4fc;
          }
          else if (local_8c == -0x46b36a53) {
            return;
          }
        }
        else {
          iVar2 = 0xb854c22;
          if (local_8c != -0x3478e9d2) {
            if (local_8c == -0x1e52a4fc) {
              iVar2 = -0x54ed8781;
              if ((uint)((ulong)(DAT_004aff50 + DAT_004aff54 + 0xe6f1105) * 0x6593f093 >> 0x3e) <
                  0xe130c2f0) {
                iVar2 = 0x1d07f404;
              }
            }
            else {
              iVar2 = local_8c;
              if (local_8c == -0x82c47ba) {
                iVar2 = 0x1622d328;
              }
            }
          }
        }
      }
      if (0x51cf0d7a < local_8c) break;
      if (local_8c == 0xb854c22) {
        iVar2 = -0x82c47ba;
        local_88 = param_3.field3_0x18;
        dStack_80 = param_3.field2_0x10;
        local_78 = param_3.field1_0x8;
        dStack_70 = param_3.field0_0x0;
        if (((DAT_004aff38 & DAT_004aff3c) * 0x1aacfbc4 | 0x37671e2f) * -0x14d9ed9c < 0x4d508712) {
          iVar2 = -0x3478e9d2;
        }
      }
      else if (local_8c == 0x1622d328) {
LAB_00220a40:
        iVar2 = 0x5922af87;
      }
      else if (local_8c == 0x1d07f404) {
        uVar1 = DAT_004aff58 * DAT_004aff5c;
        *(double *)(param_1 + 0xf0) = dStack_80;
        *(double *)(param_1 + 0xf8) = local_88;
        iVar2 = -0x46b36a53;
        if (0xa26c69b1 < (uint)((ulong)((uVar1 & 0x27c9e7ce) * -0x287be534) * 0x4d32bb73 >> 0x3d)) {
          iVar2 = -0x54ed8781;
        }
      }
    }
    if (local_8c == 0x60652f54) {
      *(double *)(param_1 + 0xe0) = dStack_70;
      *(double *)(param_1 + 0xe8) = local_78;
      goto LAB_00220a40;
    }
    if (local_8c == 0x5922af87) {
      uVar1 = DAT_004aff48 & DAT_004aff4c;
      *(double *)(param_1 + 0xe0) = dStack_70;
      *(double *)(param_1 + 0xe8) = local_78;
      iVar2 = -0x500b5a3c;
      if ((uVar1 | 0xedff75ff) + 0x67cc7086 < 0x189988c3) {
        iVar2 = 0x5922af87;
      }
    }
    else if (local_8c == 0x51cf0d7b) {
      iVar2 = 0xb854c22;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo isLocalBubble] @ 00220afc -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::isLocalBubble(ID param_1,SEL param_2)

{
  int iVar1;
  int local_78;
  byte local_72;
  byte local_71;
  byte *local_70;
  
  local_78 = -0x6cb39492;
  iVar1 = local_78;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_78 = iVar1, iVar1 = local_78, -0xe466238 < local_78) {
            if (local_78 < 0x7b1f69c) {
              if (local_78 == -0xe466237) {
                iVar1 = -0x3d6c5e6c;
              }
              else if (local_78 == -0xbe74555) {
                local_71 = *local_70;
                iVar1 = 0x36537696;
                if (0xb130ef66 < (DAT_004aff78 + DAT_004aff7c | 0xf8fbe46fU) + 0x460e8cb3) {
                  iVar1 = -0xbe74555;
                }
              }
              else if ((local_78 == -0x1cf0d74) &&
                      (iVar1 = -0x1cf0d74, local_70 = (byte *)(param_1 + 0xf),
                      ((DAT_004aff68 | DAT_004aff6c) + 0x8ee8c7d3 | 0x7d7db5f2) != 0x9da5472b)) {
                iVar1 = -0xe466237;
              }
            }
            else if (local_78 == 0x7b1f69c) {
              iVar1 = 0x22d5f8db;
              if ((DAT_004aff80 + DAT_004aff84 & 0x7f851cU ^ 0x2089c3b) * 0x7a5f74e0 == 0x1535ada0)
              {
                iVar1 = -0x10296b06;
              }
            }
            else if (local_78 == 0x22d5f8db) {
              local_72 = local_71 & 1;
              iVar1 = -0x4c4434f7;
              if ((((DAT_004aff88 ^ DAT_004aff8c) + 0x7842a481) / 0x2d876d24 | 0x23ab82c0) ==
                  0x485a60c2) {
                iVar1 = -0x10296b06;
              }
            }
            else if (local_78 == 0x36537696) {
              iVar1 = 0x7b1f69c;
            }
          }
          if (local_78 < -0x3af791c9) break;
          iVar1 = -0x1cf0d74;
          if (((local_78 != -0x3af791c9) && (iVar1 = -0xbe74555, local_78 != -0x23875d48)) &&
             (iVar1 = local_78, local_78 == -0x10296b06)) {
            iVar1 = 0x22d5f8db;
          }
        }
        if (local_78 != -0x6cb39492) break;
        iVar1 = -0x1cf0d74;
        if ((DAT_004aff60 - DAT_004aff64) * 0x55c5bc2 == -0x51195928) {
          iVar1 = -0x3af791c9;
        }
      }
      if (local_78 != -0x3d6c5e6c) break;
      iVar1 = -0x23875d48;
      if (((DAT_004aff70 + DAT_004aff74 ^ 0xea790794U) / 0x6ce39aef | 0x256220b0) != 0x96b864ec) {
        iVar1 = -0xbe74555;
      }
    }
  } while (local_78 != -0x4c4434f7);
  return (bool)local_72;
}



// ----- -[BubbleBoxInfo setIsLocalBubble:] @ 00220e48 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setIsLocalBubble_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  int iVar2;
  int local_74;
  undefined1 *local_70;
  undefined1 local_65;
  
  uVar1 = DAT_004aff90 & DAT_004aff94;
  local_74 = -0x23f3bd44;
  iVar2 = local_74;
  do {
    while( true ) {
      while( true ) {
        while (local_74 = iVar2, iVar2 = local_74, local_74 < -0x23f3bd44) {
          if (local_74 < -0x5cd0ea0e) {
            if (local_74 == -0x758638d1) {
              iVar2 = -0x2d78683b;
            }
            else if ((local_74 == -0x69ddec3f) &&
                    (local_65 = (undefined1)param_3, iVar2 = -0x758638d1,
                    local_70 = (undefined1 *)(param_1 + 0xf),
                    0x1727f465 <
                    ((DAT_004aff98 + DAT_004aff9c) * -0x629b9e45 + 0xcefd6b2eU & 0x224668fd))) {
              iVar2 = 0x3b376405;
            }
          }
          else if (local_74 == -0x5cd0ea0e) {
            iVar2 = 0x1f585826;
            if ((DAT_004affa8 + DAT_004affac + 0x4796e4a5U & 0xf5dfff5e | 0xf0d8334a) == 0x128db75f)
            {
              iVar2 = -0x5cd0ea0e;
            }
          }
          else if (local_74 == -0x2d78683b) {
            *local_70 = local_65;
            iVar2 = -0x21e4868f;
          }
        }
        if (local_74 < 0x1f585826) break;
        iVar2 = -0x69ddec3f;
        if (local_74 != 0x3b376405) {
          if (local_74 == 0x792e8c4c) goto LAB_00220ff0;
          iVar2 = local_74;
          if (local_74 == 0x1f585826) {
            return;
          }
        }
      }
      if (local_74 != -0x23f3bd44) break;
      iVar2 = 0x3b376405;
      if (((uVar1 | 0x1e966a66) / 0x4cad6c0 & 0x2c) != 0x8519a3c6) {
        iVar2 = -0x69ddec3f;
      }
    }
    if (local_74 == -0x21e4868f) {
LAB_00220ff0:
      iVar2 = -0x5cd0ea0e;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo space] @ 0022108c -----

/* Function Stack Size: 0x10 bytes */

long_long BubbleBoxInfo::space(ID param_1,SEL param_2)

{
  int iVar1;
  undefined4 local_14;
  undefined8 local_10;
  
  local_14 = -0x6d53e40;
LAB_00221104:
  while (0x49394e46 < local_14) {
    if (local_14 == 0x49394e47) {
      iVar1 = 0x6a3c6a43;
      if (DAT_004affb8 + DAT_004affbc == 0x34bd1de7) {
        iVar1 = 0x12728f4b;
      }
      goto LAB_00221188;
    }
    if (local_14 == 0x673b7612) {
      iVar1 = 0x12728f4b;
      if (0x8541db4b < (DAT_004affb0 * DAT_004affb4 ^ 0x1001c008U | 0xed6e3ff6)) {
        iVar1 = 0x49394e47;
      }
      goto LAB_00221188;
    }
    if (local_14 == 0x6a3c6a43) {
      return local_10;
    }
  }
  if (local_14 == -0x6d53e40) {
    local_10 = *(long_long *)(param_1 + 0xd0);
    iVar1 = 0x673b7612;
  }
  else {
    iVar1 = 0x49394e47;
    if (local_14 != 0x12728f4b) goto LAB_00221104;
  }
LAB_00221188:
  local_14 = iVar1;
  goto LAB_00221104;
}



// ----- -[BubbleBoxInfo setSpace:] @ 002211a8 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setSpace_(ID param_1,SEL param_2,long_long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  long_long *local_70;
  
  uVar2 = 0;
  if (DAT_004affc4 != 0) {
    uVar2 = DAT_004affc0 / DAT_004affc4;
  }
  local_74 = -0x34f6a8eb;
  iVar3 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, local_74 < 0x777bbb6) {
            if (local_74 < -0x152385c5) {
              if (local_74 == -0x34f6a8eb) {
                iVar3 = 0x5412f729;
                if (0x88934e57 < (uVar2 | 0x18aab586) * -0x691d1dd8) {
                  iVar3 = -0x152385c5;
                }
              }
              else if ((local_74 == -0x33ae3119) &&
                      (iVar1 = DAT_004affd8 + DAT_004affdc, *local_70 = param_3, iVar3 = 0x12dac218,
                      (iVar1 * 0x25fdddd2 + 0xa5bc47a2U & 0x8a72bc06) != 0x8bba16ae)) {
                iVar3 = -0xa84f024;
              }
            }
            else {
              iVar3 = 0x5412f729;
              if ((local_74 != -0x152385c5) && (iVar3 = local_74, local_74 == -0xa84f024)) {
                iVar3 = 0x63e51fc4;
              }
            }
          }
          if (0x5412f728 < local_74) break;
          if (local_74 == 0x777bbb6) {
            iVar3 = 0x737dbad8;
          }
          else if (local_74 == 0x12dac218) {
            *local_70 = param_3;
            iVar3 = -0x33ae3119;
          }
        }
        if (local_74 != 0x5412f729) break;
        iVar3 = 0x777bbb6;
        local_70 = (long_long *)(param_1 + 0xd0);
        if ((DAT_004affc8 & DAT_004affcc) + 0xa3876bc0 < 0x1b48ee53) {
          iVar3 = -0x152385c5;
        }
      }
      if (local_74 != 0x737dbad8) break;
      iVar3 = -0x33ae3119;
      if (((DAT_004affd0 ^ DAT_004affd4) & 0x8208e84f) * 0x3faaa831 + 0x3db5779a < 0x69dd84ae) {
        iVar3 = 0x12dac218;
      }
    }
  } while (local_74 != 0x63e51fc4);
  return;
}



// ----- -[BubbleBoxInfo isParent] @ 0022140c -----

/* Function Stack Size: 0x10 bytes */

bool BubbleBoxInfo::isParent(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_78;
  byte local_72;
  byte local_71;
  byte *local_70;
  
  local_78 = 0x3eb4f4c0;
LAB_00221538:
  iVar2 = 0x431906ee;
  if (local_78 < 0x32c62d99) {
    if (local_78 < 0x1eb2c645) {
      iVar2 = 0x1eb2c645;
      if (local_78 != -0x7975ac2c) {
        if (local_78 == -0x77ddc72) {
          local_71 = *local_70;
          iVar2 = 0x28e60fbc;
        }
        else {
          iVar2 = -0x77ddc72;
          if (local_78 != 0x1f15f20) goto LAB_00221538;
        }
      }
    }
    else if (local_78 == 0x1eb2c645) {
      iVar2 = 0x77579f82;
      local_70 = (byte *)(param_1 + 0x10);
      if (0xb33e31eb <
          (uint)((ulong)(DAT_004affe8 + DAT_004affec | 0xeff2fef9) * 0x278d6285 >> 0x3c)) {
        iVar2 = -0x7975ac2c;
      }
    }
    else if (local_78 == 0x27e7235b) {
      local_72 = local_71 & 1;
      if ((DAT_004b0008 - DAT_004b000c | 0x37eaff75U) * 0x10b13ce4 + 0xc46139d1 < 0xd3675c41) {
        iVar2 = 0x32c62d99;
      }
    }
    else {
      if (local_78 != 0x28e60fbc) goto LAB_00221538;
      iVar2 = 0x58380fbb;
    }
  }
  else {
    if (local_78 < 0x52a0d128) {
      if (local_78 == 0x3eb4f4c0) {
        iVar2 = -0x7975ac2c;
        if ((((DAT_004affe0 * DAT_004affe4 | 0x80044U) ^ 0x40030880) & 0x441b08c4) < 0x33a49f0b) {
          iVar2 = 0x1eb2c645;
        }
        goto LAB_002216f0;
      }
      if (local_78 == 0x431906ee) {
        iVar2 = 0x27e7235b;
        goto LAB_002216f0;
      }
      if (local_78 == 0x32c62d99) {
        return (bool)local_72;
      }
      goto LAB_00221538;
    }
    if (local_78 == 0x52a0d128) {
      uVar1 = 0;
      if (DAT_004afff4 != 0) {
        uVar1 = DAT_004afff0 / DAT_004afff4;
      }
      iVar2 = -0x77ddc72;
      if ((uint)((ulong)(uVar1 + 0xb2b4f478) * 0x3f37a623 >> 0x3c) * 0x4b79718d == 0x48d7cc18) {
        iVar2 = 0x1f15f20;
      }
    }
    else {
      if (local_78 == 0x58380fbb) {
        if ((DAT_004b0000 & DAT_004b0004 ^ 0xef04c16) * 0x52a8f86e < 0x9726c3f1) {
          iVar2 = 0x27e7235b;
        }
        goto LAB_002216f0;
      }
      if (local_78 != 0x77579f82) goto LAB_00221538;
      iVar2 = 0x52a0d128;
    }
  }
LAB_002216f0:
  local_78 = iVar2;
  goto LAB_00221538;
}



// ----- -[BubbleBoxInfo setIsParent:] @ 00221728 -----

/* Function Stack Size: 0x14 bytes */

void BubbleBoxInfo::setIsParent_(ID param_1,SEL param_2,bool param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_74;
  undefined1 *local_70;
  undefined1 local_65;
  
  uVar1 = DAT_004b0010 ^ DAT_004b0014;
  local_74 = 0x2d176c5;
  iVar3 = local_74;
  do {
    while( true ) {
      do {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, 0x17c7df47 < local_74) {
            if (local_74 < 0x62a095de) {
              if (local_74 == 0x17c7df48) {
                local_65 = (undefined1)param_3;
                iVar3 = -0x790d95f3;
                if (0x23a1cdd <
                    ((DAT_004b0018 | DAT_004b001c | 0x16736bf1) ^ 0xc10f1088) + 0x6545ee8a) {
                  iVar3 = -0x3ee3cc58;
                }
              }
              else if (local_74 == 0x1e5d75d9) {
                *local_70 = local_65;
                iVar3 = -0x55cb88e3;
              }
            }
            else if (local_74 == 0x62a095de) {
              iVar3 = -0x55cb88e3;
              if (((DAT_004b0020 | DAT_004b0024) + 0x965288d & 0xf13ece36 | 0xe102ca26) < 0x8a136eed
                 ) {
                iVar3 = 0x1e5d75d9;
              }
            }
            else if (local_74 == 0x7dbc280e) {
              iVar3 = 0x62a095de;
              local_70 = (undefined1 *)(param_1 + 0x10);
            }
          }
          if (local_74 < -0x3ee3cc58) break;
          if (local_74 == -0x3ee3cc58) {
            iVar3 = 0x7dbc280e;
          }
          else if ((local_74 == 0x2d176c5) &&
                  (iVar3 = 0x17c7df48, uVar1 * -0x27a51bb0 + 0x14fc0ad0 < 0x25d085f6)) {
            iVar3 = -0x790d95f3;
          }
        }
        iVar3 = 0x17c7df48;
      } while (local_74 == -0x790d95f3);
      if (local_74 != -0x55cb88e3) break;
      uVar2 = DAT_004b0028 | DAT_004b002c;
      *local_70 = local_65;
      iVar3 = 0x1e5d75d9;
      if (0x825ac074 < ((uVar2 ^ 0x54e00e09) & 0x54f08e49 ^ 0xe0366e9b)) {
        iVar3 = -0x58de78b2;
      }
    }
    iVar3 = local_74;
  } while (local_74 != -0x58de78b2);
  return;
}



// ----- -[BubbleBoxInfo bubbles] @ 002219b8 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxInfo::bubbles(ID param_1,SEL param_2)

{
  int iVar1;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  local_7c = 0x1b6125de;
  iVar1 = local_7c;
  do {
    while( true ) {
      while (local_7c = iVar1, iVar1 = local_7c, local_7c < 0x473f5d85) {
        if (local_7c < 0x1b6125de) {
          iVar1 = 0x7625aef4;
          if (local_7c != -0x6f7976f5) {
            if (local_7c == -0x68694bef) {
              iVar1 = 0x7c16fca7;
              local_70 = (ID *)(param_1 + 0xd8);
            }
            else {
              iVar1 = local_7c;
              if ((local_7c == -0x5eb3ca6b) &&
                 (iVar1 = -0x6f7976f5,
                 (((DAT_004b0040 - DAT_004b0044) * 0xeb6a79 ^ 0x6373094U) & 0x377778b6) !=
                 0xca5216da)) {
                iVar1 = 0x7625aef4;
              }
            }
          }
        }
        else if (local_7c == 0x1b6125de) {
          iVar1 = 0x5a45daea;
          if (0xdac21ea1 < ((DAT_004b0030 | DAT_004b0034) ^ 0xb10a0fbe) + 0xee9a7522) {
            iVar1 = -0x68694bef;
          }
        }
        else if (local_7c == 0x22f329bd) {
          iVar1 = 0x6431b8f8;
        }
        else if (local_7c == 0x3f427df3) {
          iVar1 = 0x6fd797af;
        }
      }
      if (local_7c < 0x6fd797af) break;
      if (local_7c == 0x6fd797af) {
LAB_00221bb0:
        iVar1 = 0x22f329bd;
      }
      else if (local_7c == 0x7625aef4) {
        local_78 = *local_70;
        iVar1 = 0x7625aef4;
        if ((DAT_004b0048 * DAT_004b004c * -0x377292b6 + 0xa2e29a6bU | 0x483eedf9) < 0xacfa1799) {
          iVar1 = 0x3f427df3;
        }
      }
      else if (local_7c == 0x7c16fca7) {
        iVar1 = -0x5eb3ca6b;
      }
    }
    if (local_7c == 0x473f5d85) goto LAB_00221bb0;
    iVar1 = -0x68694bef;
    if ((local_7c != 0x5a45daea) && (iVar1 = local_7c, local_7c == 0x6431b8f8)) {
      return local_78;
    }
  } while( true );
}



// ----- -[BubbleBoxInfo setBubbles:] @ 00221c40 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxInfo::setBubbles_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  uint uVar2;
  int local_44;
  ID local_40;
  
  pIVar1 = (ID *)(param_1 + 0xd8);
  _objc_retain(param_3);
  local_44 = -0x84c500c;
  do {
    while( true ) {
      while( true ) {
        while (local_44 < -0x9fb19f4) {
          if (local_44 == -0x6bebb1ea) {
            local_44 = 0x66e3f8ca;
          }
          else if (local_44 == -0x50c3f8f6) {
            *pIVar1 = param_3;
            local_44 = -0x9fb19f4;
          }
        }
        if (local_44 != -0x9fb19f4) break;
        uVar2 = DAT_004b0058 | DAT_004b005c;
        local_40 = *pIVar1;
        *pIVar1 = param_3;
        local_44 = -0x6bebb1ea;
        if ((uint)((ulong)(uVar2 * -0x338f5f2c | 0x3619b5ba) * 0x3be728c7 >> 0x3d) == 0x569ecb1d) {
          local_44 = -0x50c3f8f6;
        }
      }
      if (local_44 != -0x84c500c) break;
      uVar2 = 0;
      if (DAT_004b0054 != 0) {
        uVar2 = DAT_004b0050 / DAT_004b0054;
      }
      local_44 = -0x50c3f8f6;
      if (0x54d2f4fa < ((uVar2 & 0x1d017235) + 0xd4a99f62 & 0x81a93de4)) {
        local_44 = -0x9fb19f4;
      }
    }
  } while (local_44 != 0x66e3f8ca);
  _objc_release(local_40);
  return;
}



// ----- -[BubbleBoxInfo .cxx_destruct] @ 00221dc4 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxInfo::_cxx_destruct(ID param_1,SEL param_2)

{
  uint uVar1;
  uint uVar2;
  int local_68;
  
  uVar2 = DAT_004b0060 & DAT_004b0064;
  local_68 = 0x2cb26894;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_68 < 0xa82da69) {
            if (local_68 < -0x110d2a6e) {
              if (local_68 == -0x64f085b1) {
                _objc_storeStrong(param_1 + 0x38,0);
                _objc_storeStrong(param_1 + 0x30,0);
                _objc_storeStrong(param_1 + 0x28,0);
                _objc_storeStrong(param_1 + 0x20,0);
                _objc_storeStrong(param_1 + 0x18,0);
                local_68 = 0x4854319f;
              }
              else if (local_68 == -0x64237dbc) {
                uVar1 = DAT_004b0068 + DAT_004b006c;
                _objc_storeStrong(param_1 + 0xd8,0);
                _objc_storeStrong(param_1 + 200,0);
                _objc_storeStrong(param_1 + 0xc0,0);
                _objc_storeStrong(param_1 + 0xb8,0);
                _objc_storeStrong(param_1 + 0xb0,0);
                _objc_storeStrong(param_1 + 0xa8,0);
                _objc_storeStrong(param_1 + 0xa0,0);
                _objc_storeStrong(param_1 + 0x98,0);
                _objc_storeStrong(param_1 + 0x90,0);
                _objc_storeStrong(param_1 + 0x88,0);
                _objc_storeStrong(param_1 + 0x80,0);
                _objc_storeStrong(param_1 + 0x78,0);
                _objc_storeStrong(param_1 + 0x70,0);
                _objc_storeStrong(param_1 + 0x68,0);
                _objc_storeStrong(param_1 + 0x60,0);
                _objc_storeStrong(param_1 + 0x58,0);
                _objc_storeStrong(param_1 + 0x50,0);
                local_68 = -0x8fbf207;
                if ((uVar1 / 0x5008c0a6 | 0xa3b22416) == 0x7dcf660e) {
                  local_68 = -0x64237dbc;
                }
              }
              else if ((local_68 == -0x2a197b09) &&
                      (local_68 = 0x4854319f,
                      (DAT_004b0080 & DAT_004b0084 ^ 0xfe909691) < 0x936911ee)) {
                local_68 = -0x64f085b1;
              }
            }
            else if (local_68 == -0x110d2a6e) {
              _objc_storeStrong(param_1 + 0x48,0);
              _objc_storeStrong(param_1 + 0x40,0);
              local_68 = -0xb43357b;
            }
            else if (local_68 == -0xb43357b) {
              uVar1 = DAT_004b0078 ^ DAT_004b007c;
              _objc_storeStrong(param_1 + 0x48,0);
              _objc_storeStrong(param_1 + 0x40,0);
              local_68 = 0xa82da69;
              if (0x5c203e94 <
                  (uint)((ulong)((uVar1 & 0x392a429a) + 0xd990217c) * 0xa8308e01 >> 0x3f)) {
                local_68 = -0x110d2a6e;
              }
            }
            else if (local_68 == -0x8fbf207) {
              local_68 = 0x6187f344;
            }
          }
          if (0x4854319e < local_68) break;
          if (local_68 == 0xa82da69) {
            local_68 = -0x2a197b09;
          }
          else if (local_68 == 0x1444b1c5) {
            _objc_storeStrong(param_1 + 0xd8,0);
            _objc_storeStrong(param_1 + 200,0);
            _objc_storeStrong(param_1 + 0xc0,0);
            _objc_storeStrong(param_1 + 0xb8,0);
            _objc_storeStrong(param_1 + 0xb0,0);
            _objc_storeStrong(param_1 + 0xa8,0);
            _objc_storeStrong(param_1 + 0xa0,0);
            _objc_storeStrong(param_1 + 0x98,0);
            _objc_storeStrong(param_1 + 0x90,0);
            _objc_storeStrong(param_1 + 0x88,0);
            _objc_storeStrong(param_1 + 0x80,0);
            _objc_storeStrong(param_1 + 0x78,0);
            _objc_storeStrong(param_1 + 0x70,0);
            _objc_storeStrong(param_1 + 0x68,0);
            _objc_storeStrong(param_1 + 0x60,0);
            _objc_storeStrong(param_1 + 0x58,0);
            _objc_storeStrong(param_1 + 0x50,0);
            local_68 = -0x64237dbc;
          }
          else if ((local_68 == 0x2cb26894) &&
                  (local_68 = 0x1444b1c5,
                  ((uVar2 + 0x619a0fb | 0x52f5a87e) ^ 0xdacdbf6e) < 0x91ce3909)) {
            local_68 = -0x64237dbc;
          }
        }
        if (local_68 != 0x4854319f) break;
        uVar1 = DAT_004b0088 | DAT_004b008c;
        _objc_storeStrong(param_1 + 0x38,0);
        _objc_storeStrong(param_1 + 0x30,0);
        _objc_storeStrong(param_1 + 0x28,0);
        _objc_storeStrong(param_1 + 0x20,0);
        _objc_storeStrong(param_1 + 0x18,0);
        local_68 = 0x5d5f6ea2;
        if (((uint)((ulong)uVar1 * 0x2ca0cceb >> 0x3d) ^ 0x6c5b80f7) < 0x352aca89) {
          local_68 = 0x4854319f;
        }
      }
      if (local_68 != 0x6187f344) break;
      local_68 = -0x110d2a6e;
      if (0x4e20098c < (DAT_004b0070 - DAT_004b0074 & 0xe4080242U) + 0xfcf19a7a) {
        local_68 = -0xb43357b;
      }
    }
  } while (local_68 != 0x5d5f6ea2);
  return;
}


