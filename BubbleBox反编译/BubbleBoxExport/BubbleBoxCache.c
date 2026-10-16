
// ===================== @interface BubbleBoxCache : 4 methods =====================

// ----- -[BubbleBoxCache init] @ 00175540 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxCache::init(ID param_1,SEL param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  int iVar7;
  undefined1 auVar8 [16];
  int local_a4;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  char local_81;
  ID local_80;
  ID IStack_70;
  undefined *local_68;
  
  puVar3 = PTR_BubbleBoxCache_0048cd70;
  auVar8._8_8_ = param_2;
  auVar8._0_8_ = local_80;
  local_a4 = -0x708b8b6a;
  IStack_70 = param_1;
LAB_001755d0:
  local_80 = auVar8._0_8_;
  if (local_a4 < 0x16bb3278) {
    if (local_a4 < -0x65b713ea) {
      if (local_a4 < -0x6c4715a0) {
        if (local_a4 == -0x7c78fae6) {
          uVar1 = 0;
          if (DAT_004a580c != 0) {
            uVar1 = DAT_004a5808 / DAT_004a580c;
          }
          iVar7 = -0xe11e540;
          if (uVar1 * 0x709260c0 == 0x553bafdd) {
            iVar7 = 0x3da15096;
          }
        }
        else {
          if (local_a4 != -0x708b8b6a) goto LAB_001755d0;
          local_68 = puVar3;
          auVar8 = _objc_msgSendSuper2(&IStack_70,PTR_s_init_00489660);
          iVar7 = -0x6c4715a0;
        }
      }
      else if (local_a4 == -0x6c4715a0) {
        iVar7 = 0x3781f273;
        if (((DAT_004a57f8 + DAT_004a57fc) * 0x102e9f1e + 0xed87670U) / 0x7bb5d53 < 0x18a83b9b) {
          iVar7 = 0x495e16d5;
        }
      }
      else {
        if (local_a4 != -0x6a038dea) goto LAB_001755d0;
        iVar7 = 0x16bb3278;
      }
    }
    else if (local_a4 < -0xbc2b9e7) {
      if (local_a4 == -0x65b713ea) {
        uVar1 = (DAT_004a5828 ^ DAT_004a582c) & 0x2401b0c5 | 0x24001040;
        bVar4 = 0xe9bdb4b8 < uVar1;
        bVar5 = uVar1 == 0xe9bdb4b9;
        iVar7 = 0x56c77b9b;
LAB_00175ab4:
        if (!bVar4 || bVar5) {
          iVar7 = 0x65e1a36f;
        }
      }
      else {
        if (local_a4 != -0xe11e540) goto LAB_001755d0;
        local_90 = PTR__OBJC_CLASS___NSCache_0048cae0;
        iVar7 = 0x3da15096;
        if (((DAT_004a5810 - DAT_004a5814) * 0xd5a45ba + 0xc6614132U) / 0x7bed4328 != 0xdefb43ed) {
          iVar7 = -0x90eff4;
        }
      }
    }
    else if (local_a4 == -0xbc2b9e7) {
      uVar6 = _objc_alloc_init(local_90,auVar8._8_8_);
      _objc_msgSend(local_80,PTR_s_setCache__0048b138,uVar6);
      _objc_release(uVar6);
      auVar8._8_8_ = extraout_x1_00;
      auVar8._0_8_ = local_80;
      iVar7 = 0x119a6bd2;
    }
    else if (local_a4 == -0x90eff4) {
      iVar7 = 0x5a8350cd;
    }
    else {
      if (local_a4 != 0x119a6bd2) goto LAB_001755d0;
      uVar1 = DAT_004a5820 & DAT_004a5824;
      uVar6 = _objc_alloc_init(local_90,auVar8._8_8_);
      _objc_msgSend(local_80,PTR_s_setCache__0048b138,uVar6);
      _objc_release(uVar6);
      auVar2._8_8_ = extraout_x1;
      auVar2._0_8_ = local_80;
      auVar8._8_8_ = extraout_x1;
      auVar8._0_8_ = local_80;
      uStack_98 = *(undefined8 *)(local_80 + 8);
      local_a0 = PTR_s_setTotalCostLimit__0048afd8;
      iVar7 = -0x6a038dea;
      if ((0x4589c1b1U - (int)((long)((ulong)uVar1 * 0x9893370f) >> 0x3f) | 0x79bb1ed2) ==
          0xab0496c4) {
        iVar7 = -0xbc2b9e7;
        auVar8 = auVar2;
      }
    }
  }
  else if (local_a4 < 0x56c77b9b) {
    if (local_a4 < 0x3da15096) {
      if (local_a4 == 0x16bb3278) {
        _objc_msgSend(uStack_98,local_a0,0x500000);
        auVar8._8_8_ = extraout_x1_01;
        auVar8._0_8_ = local_80;
        iVar7 = -0x65b713ea;
        goto LAB_00175ab8;
      }
      iVar7 = 0x495e16d5;
      if (local_a4 != 0x3781f273) goto LAB_001755d0;
    }
    else {
      iVar7 = -0xe11e540;
      if (local_a4 != 0x3da15096) {
        if (local_a4 != 0x495e16d5) goto LAB_001755d0;
        local_81 = local_80 == 0;
        iVar7 = 0x690d91c6;
        if (((DAT_004a5800 ^ DAT_004a5804) & 0x77e5bfff | 0x7604bb2f) == 0x40fdce6f) {
          iVar7 = 0x495e16d5;
        }
      }
    }
  }
  else {
    if (0x65e1a36e < local_a4) {
      if (local_a4 == 0x65e1a36f) {
        uVar1 = (DAT_004a5830 + DAT_004a5834 ^ 0x14449c4U | 0x643b3613) + 0x6609774c;
        bVar4 = 0xd9a795b0 < uVar1;
        bVar5 = uVar1 == 0xd9a795b1;
        iVar7 = 0x7b9de21a;
        goto LAB_00175ab4;
      }
      if (local_a4 == 0x690d91c6) {
        iVar7 = -0x65b713ea;
        if (local_81 == '\0') {
          iVar7 = -0x7c78fae6;
        }
        goto LAB_00175ab8;
      }
      if (local_a4 == 0x7b9de21a) {
        return local_80;
      }
      goto LAB_001755d0;
    }
    if (local_a4 == 0x56c77b9b) {
      iVar7 = 0x65e1a36f;
      goto LAB_00175ab8;
    }
    if (local_a4 != 0x5a8350cd) goto LAB_001755d0;
    iVar7 = -0xbc2b9e7;
    if ((DAT_004a5818 & DAT_004a581c) * -0x41c81411 + 0xbd3142f0 < 0x5b366566) {
      iVar7 = 0x119a6bd2;
    }
  }
LAB_00175ab8:
  local_a4 = iVar7;
  goto LAB_001755d0;
}



// ----- -[BubbleBoxCache cache] @ 00176320 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxCache::cache(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_14;
  ID local_10;
  
  local_14 = -0x2bba09c7;
  do {
    while( true ) {
      while( true ) {
        while (local_14 < -0x4063024) {
          if (local_14 == -0x2bba09c7) {
            local_14 = -0x4063024;
            if ((uint)((ulong)(DAT_004a5880 | DAT_004a5884) * 0x6b02b6a1 >> 0x3e) != 0xb1b8dcb1) {
              local_14 = 0x31fe33ac;
            }
          }
          else if (local_14 == -0x14101a50) {
            local_14 = 0x6fedf9ef;
          }
        }
        if (local_14 != -0x4063024) break;
        local_14 = 0x31fe33ac;
      }
      if (local_14 != 0x31fe33ac) break;
      uVar1 = 0;
      if (DAT_004a588c != 0) {
        uVar1 = DAT_004a5888 / DAT_004a588c;
      }
      local_10 = *(ID *)(param_1 + 8);
      local_14 = -0x4063024;
      if (0x7dad8204 < (uVar1 & 0xefada036 | 0xe5ada026)) {
        local_14 = -0x14101a50;
      }
    }
  } while (local_14 != 0x6fedf9ef);
  return local_10;
}



// ----- -[BubbleBoxCache setCache:] @ 0017644c -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxCache::setCache_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  int iVar2;
  uint uVar3;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int local_7c;
  ID local_78;
  ID *local_70;
  
  iVar2 = DAT_004a5890 + DAT_004a5894;
  local_7c = -0x24a13c4a;
  pIVar1 = (ID *)(param_1 + 8);
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_7c < -0x2bd55581) {
            if (local_7c < -0x3d6baec3) {
              if (local_7c == -0x71b742c9) {
                local_7c = -0x48f79583;
              }
              else if (local_7c == -0x6b6d8156) {
                local_7c = 0x7624c209;
              }
              else if (local_7c == -0x48f79583) {
                local_7c = -0x48f79583;
                if (((DAT_004a58b8 - DAT_004a58bc) + 0x2b79ba59U & 0xb995a566 | 0x1804a562) !=
                    0xdbd45842) {
                  local_7c = 0x2afdc5b0;
                }
              }
            }
            else if (local_7c == -0x3d6baec3) {
              _objc_retain(param_3,param_2);
              param_2 = extraout_x1_01;
              local_7c = -0x23561112;
            }
            else if (local_7c == -0x37ba5ba5) {
              *local_70 = param_3;
              _objc_release(local_78);
              param_2 = extraout_x1_02;
              local_7c = -0x3461cf47;
            }
            else if (local_7c == -0x3461cf47) {
              uVar3 = 0;
              if (DAT_004a58ac != 0) {
                uVar3 = DAT_004a58a8 / DAT_004a58ac;
              }
              *local_70 = param_3;
              _objc_release(local_78);
              param_2 = extraout_x1_00;
              local_7c = 0x33192eac;
              if (0xffeea19a < ((uVar3 ^ 0xf23d69bd) + 0xcfa63f11) / 0x375d073d) {
                local_7c = -0x3461cf47;
              }
            }
          }
          if (0x2afdc5af < local_7c) break;
          if (local_7c == -0x2bd55581) {
            local_7c = -0x71b742c9;
            if ((int)((long)((ulong)(DAT_004a58b0 & DAT_004a58b4) * 0xb9062537) >> 0x3f) !=
                -0x55dc3d5e) {
              local_7c = -0x48f79583;
            }
          }
          else if (local_7c == -0x24a13c4a) {
            local_7c = -0x23561112;
            if (0x23fbe976 < (iVar2 + 0xa51b61f5U & 0xb80460)) {
              local_7c = -0x3d6baec3;
            }
          }
          else if (local_7c == -0x23561112) {
            uVar3 = DAT_004a5898 ^ DAT_004a589c;
            _objc_retain(param_3,param_2);
            local_78 = *pIVar1;
            param_2 = extraout_x1;
            local_7c = -0x23561112;
            local_70 = pIVar1;
            if (uVar3 * -0x3fc7365d + 0x20030136 < 0xa12e3a6e) {
              local_7c = -0x6b6d8156;
            }
          }
        }
        if (local_7c != 0x33192eac) break;
        local_7c = -0x2bd55581;
      }
      if (local_7c != 0x7624c209) break;
      uVar3 = 0;
      if (DAT_004a58a4 != 0) {
        uVar3 = DAT_004a58a0 / DAT_004a58a4;
      }
      local_7c = -0x3461cf47;
      if (0x2acbfac2 < uVar3 * -0x3bcfcdcb + 0x2a2c55f0) {
        local_7c = -0x37ba5ba5;
      }
    }
  } while (local_7c != 0x2afdc5b0);
  return;
}



// ----- -[BubbleBoxCache .cxx_destruct] @ 001767f4 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxCache::_cxx_destruct(ID param_1,SEL param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_74;
  long local_70;
  
  iVar2 = DAT_004a58c0 - DAT_004a58c4;
  local_74 = 0x67634742;
  iVar3 = local_74;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_74 = iVar3, iVar3 = local_74, 0x1f4d6890 < local_74) {
            if (local_74 < 0x67634742) {
              iVar3 = -0x28222ee3;
              if ((local_74 != 0x1f4d6891) && (iVar3 = local_74, local_74 == 0x2882c90e)) {
                iVar3 = -0x3e619f3d;
              }
            }
            else if (local_74 == 0x6aed5328) {
              iVar3 = -0x39146d71;
            }
            else if ((local_74 == 0x67634742) &&
                    (iVar3 = -0x28222ee3, iVar2 * -0x40527554 + 0x674cbbc4U < 0x37f938a9)) {
              iVar3 = 0x1f4d6891;
            }
          }
          if (local_74 < -0x28222ee3) break;
          if (local_74 == -0x28222ee3) {
            iVar3 = 0x6aed5328;
            local_70 = param_1 + 8;
            if ((DAT_004a58c8 ^ DAT_004a58cc) * 0x6f3455a == 0x6808ca04) {
              iVar3 = -0x28222ee3;
            }
          }
          else if ((local_74 == -0xab9c77a) &&
                  (iVar1 = DAT_004a58d8 + DAT_004a58dc, _objc_storeStrong(local_70,0),
                  iVar3 = 0x2882c90e, iVar1 == 0xfe14a54)) {
            iVar3 = -0xab9c77a;
          }
        }
        if (local_74 != -0x6621de5c) break;
        _objc_storeStrong(local_70,0);
        iVar3 = -0xab9c77a;
      }
      if (local_74 != -0x39146d71) break;
      iVar3 = -0x6621de5c;
      if (DAT_004a58d0 - DAT_004a58d4 != 0x710a64b4) {
        iVar3 = -0xab9c77a;
      }
    }
  } while (local_74 != -0x3e619f3d);
  return;
}


