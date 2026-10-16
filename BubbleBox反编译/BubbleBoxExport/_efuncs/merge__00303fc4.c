// ##### +[merge:] @ 00303fc4
// #####################################

/* Function Stack Size: 0x18 bytes */

bool BubbleMessageMerge::merge_(ID param_1,SEL param_2,ID param_3)

{
  undefined **ppuVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  bool bVar7;
  ID IVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int local_10c;
  undefined8 local_108;
  char local_f9;
  undefined *local_f8;
  undefined *local_f0;
  char local_e1;
  undefined *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  char local_c1;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined8 local_80;
  byte local_72;
  char local_71;
  int local_70;
  
  uVar2 = DAT_004bcdc0 ^ DAT_004bcdc4;
  local_10c = -0x3ce9d2db;
LAB_00304084:
  puVar3 = PTR_s_numberWithBool__0048b600;
  if (local_10c < -0xfc02d32) {
    if (local_10c < -0x4c63c0d7) {
      if (local_10c < -0x711885e0) {
        if (local_10c < -0x7688b769) {
          if (local_10c < -0x7cca6a56) {
            if (local_10c == -0x7f8acdce) {
              _objc_msgSend(param_1,local_e0,local_d8,local_c0);
              iVar6 = 0x2be32fe2;
            }
            else if (local_10c == -0x7ecd25be) {
              iVar6 = 0x670f62ae;
            }
            else {
              if (local_10c != -0x7ce2b57b) goto LAB_00304084;
              _objc_release(local_d8);
              iVar6 = -0x41286db4;
            }
          }
          else if (local_10c == -0x7cca6a56) {
            _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,PTR_s_numberWithBool__0048b600,1);
            uVar9 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_3,PTR_s_setB_isFirstMessage__0048b8a8,uVar9);
            _objc_release(uVar9);
            _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,puVar3,0);
            _objc_retainAutoreleasedReturnValue();
            iVar6 = -0x3e60ad8a;
          }
          else {
            if (local_10c != -0x789a3734) {
              if (local_10c == -0x7848a126) {
                bVar5 = 0xc9b2d670 < (DAT_004bcdd0 + DAT_004bcdd4 + 0x76a85204U & 0x9d88c39a);
                iVar6 = -0x755e558;
                iVar10 = 0x6f80f6fc;
                goto LAB_00306040;
              }
              goto LAB_00304084;
            }
            DAT_004bc360 = DAT_004bc340 ^ 0x7b;
            DAT_004bc361 = DAT_004bc341 ^ 0x89;
            DAT_004bc362 = DAT_004bc342 ^ 0x4d;
            DAT_004bc363 = DAT_004bc343 ^ 0x8b;
            DAT_004bc364 = DAT_004bc344 ^ 0xcf;
            DAT_004bc365 = DAT_004bc345 ^ 0x2a;
            DAT_004bc366 = DAT_004bc346 ^ 0xaa;
            DAT_004bc367 = DAT_004bc347 ^ 0x54;
            DAT_004bc368 = DAT_004bc348 ^ 0x79;
            DAT_004bc369 = DAT_004bc349 ^ 0x2e;
            iVar6 = 0x7ff3213d;
          }
        }
        else if (local_10c < -0x735d69a0) {
          if (local_10c == -0x7688b769) {
            bVar5 = (DAT_004bcee0 - DAT_004bcee4 & 0xeef5efa5U | 0xecd46484) * 0x4142e245 ==
                    0x3d80ca63;
            iVar10 = -0x41286db4;
            iVar6 = -0x7ce2b57b;
LAB_00305df8:
            if (!bVar5) {
              iVar6 = iVar10;
            }
          }
          else {
            if (local_10c != -0x75c5e46c) {
              if (local_10c == -0x73cf19bd) {
                uVar11 = 0;
                if (DAT_004bcefc != 0) {
                  uVar11 = DAT_004bcef8 / DAT_004bcefc;
                }
                _objc_release(local_c0);
                bVar5 = (uVar11 + 0x4772d39c & 0x4b56df6) == 0x769d05c2;
                iVar10 = -0x706727cf;
                iVar6 = -0x12a25996;
                goto LAB_003061c0;
              }
              goto LAB_00304084;
            }
            bVar5 = local_c1 == '\0';
            iVar6 = 0x7b506e5c;
            iVar10 = -0x627c8b7c;
LAB_003058a0:
            if (bVar5) {
              iVar6 = iVar10;
            }
          }
        }
        else if (local_10c == -0x735d69a0) {
          _objc_msgSend(param_3,PTR_s_isSender_0048b4e0);
          iVar6 = 0x7a13b038;
        }
        else {
          if (local_10c != -0x73391c65) {
            if (local_10c == -0x71c98a11) {
              uVar11 = (DAT_004bce38 ^ DAT_004bce3c ^ 0x1471f6b7) + 0x9eacf5b4 & 0x10879547;
              bVar4 = 0x50b80730 < uVar11;
              bVar5 = uVar11 == 0x50b80731;
              iVar6 = -0x6c75c80e;
              iVar10 = -0x75c5e46c;
              goto LAB_003061a0;
            }
            goto LAB_00304084;
          }
          iVar6 = 0x73ad4148;
          if (0xd074f239 < (DAT_004bcde8 + DAT_004bcdec + 0x711e3a2cU & 0xa7c9571d) + 0x1a7131ec) {
            iVar6 = -0x73391c65;
          }
        }
      }
      else if (local_10c < -0x633132f5) {
        if (local_10c < -0x6fd98c21) {
          if (local_10c == -0x711885e0) {
            uVar11 = (DAT_004bce78 ^ DAT_004bce7c) + 0x3fd21cf9;
            local_f0 = PTR__OBJC_CLASS___NSNumber_0048cc00;
            bVar4 = 0xc6c208eb < uVar11;
            bVar5 = uVar11 == 0xc6c208ec;
            iVar6 = -0x3c38dc55;
            iVar10 = -0x344e2dee;
          }
          else {
            if (local_10c != -0x708e5cee) {
              if (local_10c == -0x706727cf) {
                _objc_release(local_c0);
                iVar6 = -0x73cf19bd;
                goto LAB_003061c4;
              }
              goto LAB_00304084;
            }
            uVar11 = (DAT_004bceb8 - DAT_004bcebc & 0x980ebf32U) + 0x7abaa205 ^ 0x31d33abf;
            local_f9 = _objc_msgSend(param_1,local_f8,local_d8,local_c0);
            bVar4 = 0xdb7390ad < uVar11;
            bVar5 = uVar11 == 0xdb7390ae;
            iVar6 = -0x29b7f90d;
            iVar10 = 0x547c885c;
          }
LAB_003061a0:
          if (!bVar4 || bVar5) {
            iVar6 = iVar10;
          }
        }
        else {
          if (local_10c == -0x6fd98c21) {
            uVar11 = 0;
            if (DAT_004bce64 != 0) {
              uVar11 = DAT_004bce60 / DAT_004bce64;
            }
            uVar11 = ((uVar11 | 0x12008302) ^ 0x20202020) & 0x72088322;
            bVar4 = 0x49dcbfaf < uVar11;
            bVar5 = uVar11 == 0x49dcbfb0;
            iVar10 = 0x2be32fe2;
            iVar6 = -0x7f8acdce;
            goto LAB_00305a08;
          }
          iVar6 = -0x2b86f8b0;
          if (local_10c != -0x6d93e727) {
            iVar6 = -0x71c98a11;
            iVar10 = -0x6c75c80e;
LAB_00304f38:
            if (local_10c != iVar10) goto LAB_00304084;
          }
        }
      }
      else if (local_10c < -0x5ddaaf8b) {
        iVar6 = -0x73391c65;
        if (local_10c != -0x633132f5) {
          if (local_10c != -0x627c8b7c) {
            if (local_10c == -0x60cf7f72) {
              uVar11 = DAT_004bce88 ^ DAT_004bce8c;
              _objc_msgSend(local_f0,local_90,1);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_3,local_b8,uVar9);
              _objc_release(uVar9);
              bVar5 = 0x83c7d2e1 < ((uVar11 & 0xbb0555) + 0xfe7a0628 | 0xff05a748);
              iVar6 = -0x60cf7f72;
              iVar10 = 0x501b0086;
              goto LAB_00306040;
            }
            goto LAB_00304084;
          }
          uVar11 = 0;
          if (DAT_004bce44 != 0) {
            uVar11 = DAT_004bce40 / DAT_004bce44;
          }
          uVar11 = (uint)((ulong)uVar11 * 0x36dfbbb7 >> 0x3d) | 0x6e06706e;
          bVar4 = 0x739968a5 < uVar11;
          bVar5 = uVar11 == 0x739968a6;
          iVar6 = -0x735d69a0;
LAB_00306140:
          if (!bVar4 || bVar5) {
            iVar6 = 0x7a13b038;
          }
        }
      }
      else if (local_10c < -0x5a92adf8) {
        iVar6 = -0x5a92adf8;
        if (local_10c == -0x5ddaaf8b) goto LAB_003061c4;
        if (local_10c != -0x5bc46fba) goto LAB_00304084;
        uVar11 = (DAT_004bce90 * DAT_004bce94 ^ 0x6ec96c50U) * 0x2f8322b6 ^ 0x1e2dafd8;
        bVar4 = 0x91a38080 < uVar11;
        bVar5 = uVar11 == 0x91a38081;
        iVar6 = 0x72ae2e83;
LAB_003054ac:
        if (!bVar4 || bVar5) {
          iVar6 = 0x1ed4b128;
        }
      }
      else {
        if (local_10c != -0x5a92adf8) {
          if (local_10c == -0x5490b283) {
            uVar11 = 0;
            if (DAT_004bcdfc != 0) {
              uVar11 = DAT_004bcdf8 / DAT_004bcdfc;
            }
            uVar11 = (uVar11 / 0x6860181 | 0xd9caecb) * -0x1189e3c8;
            DAT_004bc36a = DAT_004bc34a ^ 0x24;
            DAT_004bc36b = DAT_004bc34b ^ 0x6f;
            DAT_004bc36c = DAT_004bc34c ^ 0x32;
            DAT_004bc36d = DAT_004bc34d ^ 0x65;
            local_72 = DAT_004bc34e ^ 0x84;
            bVar4 = 0xe381dde6 < uVar11;
            bVar5 = uVar11 == 0xe381dde7;
            iVar6 = -0x5490b283;
            iVar10 = -0xeffd23e;
            goto LAB_003061a0;
          }
          goto LAB_00304084;
        }
        iVar6 = 0x68576931;
        if (0xc3d2b870 < ((DAT_004bcf08 + DAT_004bcf0c) * -0x7636515b & 0xa1deaee4U) + 0xe71efec1) {
          iVar6 = -0x5a92adf8;
        }
      }
    }
    else if (local_10c < -0x3597dbcb) {
      if (local_10c < -0x3ce9d2db) {
        if (local_10c < -0x41286db4) {
          if (local_10c == -0x4c63c0d7) {
            bVar5 = ((DAT_004bcea0 - DAT_004bcea4) + 0xe5f1f38fU & 0xf91a3383 | 0xe1183301) ==
                    0xde4a7016;
            iVar6 = -0x733f0a2;
            iVar10 = 0xf09345e;
            goto LAB_003058a0;
          }
          if (local_10c != -0x496f7134) {
            if (local_10c == -0x479fe059) {
              iVar6 = _objc_msgSend(param_3,local_88,local_80);
              bVar5 = iVar6 == 0;
              iVar10 = -0x101d2d49;
              iVar6 = 0x433625a2;
              goto LAB_003061c0;
            }
            goto LAB_00304084;
          }
          iVar6 = -0x73391c65;
          if (0x72764284 < ((DAT_004bcde0 ^ DAT_004bcde4) & 0x3120b26f | 0x3120026e)) {
            iVar6 = -0x633132f5;
          }
        }
        else {
          if (local_10c != -0x41286db4) {
            iVar6 = 0x7b506e5c;
            if (local_10c == -0x3ee50c69) goto LAB_003061c4;
            if (local_10c == -0x3e60ad8a) {
              uVar11 = DAT_004bce18 | DAT_004bce1c;
              local_90 = PTR_s_numberWithBool__0048b600;
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,PTR_s_numberWithBool__0048b600,1);
              uVar9 = _objc_retainAutoreleasedReturnValue();
              local_98 = PTR_s_setB_isFirstMessage__0048b8a8;
              _objc_msgSend(param_3,PTR_s_setB_isFirstMessage__0048b8a8,uVar9);
              _objc_release(uVar9);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,puVar3,0);
              local_a0 = _objc_retainAutoreleasedReturnValue();
              bVar5 = (uVar11 & 0xfefbbfff | 0xfcdbbfff) == 0xeabf0911;
              iVar10 = -0x3e60ad8a;
              iVar6 = -0xe907a0c;
              goto LAB_003061c0;
            }
            goto LAB_00304084;
          }
          _objc_release(local_d8);
          iVar6 = -0x3597dbcb;
        }
      }
      else if (local_10c < -0x3b2b0ea4) {
        if (local_10c == -0x3ce9d2db) {
          bVar5 = 0x455a11d9 < (uVar2 + 0x1870defc ^ 0x84373ca2);
          iVar10 = -0x1ad401ea;
          iVar6 = -0x44cfda7;
          goto LAB_00305f54;
        }
        iVar6 = -0x711885e0;
        if (local_10c != -0x3c38dc55) {
          if (local_10c != -0x3b9c01ca) goto LAB_00304084;
          iVar6 = -0x6fd98c21;
        }
      }
      else if (local_10c == -0x3b2b0ea4) {
        iVar6 = -0x496f7134;
      }
      else {
        if (local_10c != -0x3a6097b9) {
          if (local_10c == -0x3a519a76) {
            uVar11 = (uint)((ulong)((DAT_004bce50 * DAT_004bce54 | 0xe3f98b7fU) ^ 0x7b05f3b4) *
                            0x354dae9f >> 0x3d);
            bVar4 = 0xa14f1a10 < uVar11;
            bVar5 = uVar11 == 0xa14f1a11;
            iVar10 = -0x6502f43;
            iVar6 = 0x9fa3129;
            goto LAB_00305a08;
          }
          goto LAB_00304084;
        }
        _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,0);
        local_108 = _objc_retainAutoreleasedReturnValue();
        iVar6 = 0x1125a8e;
      }
    }
    else if (local_10c < -0x1eeac76d) {
      if (local_10c < -0x2b86f8b0) {
        if (local_10c == -0x3597dbcb) {
          iVar6 = -0x3ee50c69;
        }
        else {
          if (local_10c == -0x354e8af4) {
            iVar6 = -0x479fe059;
            goto LAB_003061c4;
          }
          if (local_10c != -0x344e2dee) goto LAB_00304084;
          iVar6 = 0x7a611833;
        }
      }
      else {
        if (local_10c == -0x2b86f8b0) {
          uVar11 = 0;
          if (DAT_004bcecc != 0) {
            uVar11 = DAT_004bcec8 / DAT_004bcecc;
          }
          bVar5 = 0x8f80997b < (uVar11 + 0xe11f4fcd | 0x56c25641);
          iVar6 = -0x6d93e727;
          iVar10 = 0x45d6af4e;
          goto LAB_00306040;
        }
        if (local_10c == -0x29b7f90d) {
          _objc_msgSend(param_1,local_f8,local_d8,local_c0);
          iVar6 = -0x708e5cee;
        }
        else {
          if (local_10c != -0x1f844fa3) goto LAB_00304084;
          _objc_msgSend(param_3,PTR_s_setB_isMiddleMessage__0048b8b0,local_a0);
          _objc_release(local_a0);
          _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,1);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_3,PTR_s_setB_isLastMessage__0048b8b8,uVar9);
          _objc_release(uVar9);
          _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,0);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_3,PTR_s_setB_isNeedHideHead__0048b8c0,uVar9);
          _objc_release(uVar9);
          _objc_msgSend(param_3,PTR_s_messageWrap_0048b8c8);
          IVar8 = _objc_retainAutoreleasedReturnValue();
          isSeparatorMessage_(param_1,(SEL)PTR_s_isSeparatorMessage__0048b890,IVar8);
          iVar6 = 0x6b7aff9b;
        }
      }
    }
    else {
      if (local_10c < -0x14a40d67) {
        if (local_10c == -0x1eeac76d) {
          uVar11 = (uint)((ulong)((DAT_004bce20 | DAT_004bce24) * 0x42c813e4 + 0xf9c8164 >> 1) *
                          0x47ac2dc5 >> 0x3d);
          bVar4 = 0x2b468068 < uVar11;
          bVar5 = uVar11 == 0x2b468069;
          iVar6 = -0x1f844fa3;
          iVar10 = 0x6b7aff9b;
          goto LAB_003061a0;
        }
        if (local_10c != -0x1ad401ea) {
          iVar6 = 0x6332cbe1;
          iVar10 = -0x19743c7c;
          goto LAB_00304f38;
        }
        local_70 = DAT_004d1b2c;
        iVar6 = 0x3161600c;
        goto LAB_003061c4;
      }
      if (local_10c < -0x109a5bfd) {
        if (local_10c == -0x12a25996) {
          iVar6 = 0x13af7914;
          goto LAB_003061c4;
        }
        if (local_10c == -0x14a40d67) {
          return 1;
        }
        goto LAB_00304084;
      }
      if (local_10c == -0x109a5bfd) {
        iVar6 = 0x3b1a8628;
        goto LAB_003061c4;
      }
      if (local_10c != -0x101d2d49) goto LAB_00304084;
      uVar11 = (DAT_004bcf10 ^ DAT_004bcf14) * -0x20e46bee + 0xe4387e44;
      bVar4 = 0xfae383a7 < uVar11;
      bVar5 = uVar11 == 0xfae383a8;
      iVar10 = 0x441b4d29;
      iVar6 = -0x2a682a9;
LAB_00305a08:
      if (!bVar4 || bVar5) {
        iVar6 = iVar10;
      }
    }
  }
  else if (local_10c < 0x2e955a9c) {
    if (local_10c < 0x9fa3129) {
      if (local_10c < -0x6502f43) {
        if (local_10c < -0xe907a0c) {
          if (local_10c == -0xfc02d32) {
            uVar11 = ((DAT_004bce00 ^ DAT_004bce04) + 0x92117022) / 0x6ac75802 + 0x9c04c202;
            bVar4 = 0xc2e34569 < uVar11;
            bVar5 = uVar11 == 0xc2e3456a;
            iVar10 = 0x6332cbe1;
            iVar6 = -0x19743c7c;
            goto LAB_00305a08;
          }
          if (local_10c != -0xeffd23e) {
            if (local_10c == -0xeeeac3f) {
              uVar11 = 0;
              if (DAT_004bce34 != 0) {
                uVar11 = DAT_004bce30 / DAT_004bce34;
              }
              bVar5 = uVar11 * 0x2e330147 == 0x5cd06b52;
              iVar10 = -0x6c75c80e;
              iVar6 = -0x71c98a11;
              goto LAB_003061c0;
            }
            goto LAB_00304084;
          }
          iVar6 = 0x6006ac76;
        }
        else {
          if (local_10c != -0xe907a0c) {
            if (local_10c == -0x755e558) {
              local_71 = local_70 == 0;
              bVar5 = 0x1de84cdc <
                      (uint)((ulong)((DAT_004bcdd8 | DAT_004bcddc) & 0xa2ca4282 | 0x4d21a809) *
                             0x9f9a6b9 >> 0x39);
              iVar10 = 0x6f80f6fc;
              iVar6 = -0x3b2b0ea4;
              goto LAB_00305f54;
            }
            if (local_10c == -0x733f0a2) {
              uVar11 = DAT_004bcea8 - DAT_004bceac & 0xa120a10U | 0xa020810;
              local_f8 = PTR_s_isNextSameUser_wrap__0048b8e0;
              bVar4 = 0x343e91cf < uVar11;
              bVar5 = uVar11 == 0x343e91d0;
              iVar6 = -0x733f0a2;
              iVar10 = -0x109a5bfd;
              goto LAB_003061a0;
            }
            goto LAB_00304084;
          }
          iVar6 = -0x1eeac76d;
        }
      }
      else if (local_10c < -0x2a682a9) {
        if (local_10c == -0x6502f43) {
          uVar11 = DAT_004bce58 + DAT_004bce5c;
          _objc_msgSend(local_c0,local_d0);
          local_d8 = _objc_retainAutoreleasedReturnValue();
          local_e0 = PTR_s_isPrevSameUser_wrap__0048b8d8;
          iVar6 = -0x3b9c01ca;
          if (((uVar11 | 0x96d0cabe) * -0x390d4693 ^ 0x1d17f41d) < 0xb33440ed) {
            iVar6 = 0x9fa3129;
          }
        }
        else if (local_10c == -0x618d9fe) {
          _objc_msgSend(local_f0,local_90,1);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_3,local_b8,uVar9);
          _objc_release(uVar9);
          iVar6 = -0x60cf7f72;
        }
        else {
          if (local_10c != -0x44cfda7) goto LAB_00304084;
          iVar6 = -0x1ad401ea;
        }
      }
      else if (local_10c == -0x2a682a9) {
        _objc_release(param_3);
        iVar6 = 0x441b4d29;
      }
      else {
        if (local_10c == 0x1125a8e) {
          bVar5 = 0x23a55176 <
                  ((DAT_004bced0 ^ DAT_004bced4 ^ 0xf594199e) + 0x1c11dbab & 0xcf6d5556);
          iVar10 = 0x626f597f;
          iVar6 = 0x11603873;
          goto LAB_00305f54;
        }
        if (local_10c != 0x1c57dca) goto LAB_00304084;
        iVar6 = -0x3a519a76;
      }
    }
    else if (local_10c < 0x18bd10ed) {
      if (local_10c < 0xfb70181) {
        if (local_10c == 0x9fa3129) {
          _objc_msgSend(local_c0,local_d0);
          _objc_retainAutoreleasedReturnValue();
          iVar6 = -0x6502f43;
        }
        else if (local_10c == 0xb06b260) {
          _objc_msgSend(param_3,local_b0,local_108);
          _objc_release(local_108);
          _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,1);
          uVar9 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_3,local_a8,uVar9);
          _objc_release(uVar9);
          iVar6 = -0x7688b769;
        }
        else {
          iVar6 = -0x733f0a2;
          if (local_10c != 0xf09345e) goto LAB_00304084;
        }
      }
      else {
        if (local_10c == 0xfb70181) {
          bVar5 = ((byte)((ulong)((uint)(DAT_004bce70 + DAT_004bce74) >> 2) * 0x4f4ece3 >> 0x38) ^
                  0xf748bad) * -0x493e3c62 == 0x4b4ed0a2;
          iVar10 = -0x3c38dc55;
          iVar6 = -0x711885e0;
          goto LAB_003061c0;
        }
        iVar6 = 0x626f597f;
        if (local_10c != 0x11603873) {
          if (local_10c != 0x13af7914) goto LAB_00304084;
          iVar6 = -0x5a92adf8;
        }
      }
    }
    else if (local_10c < 0x28b4f5c2) {
      if (local_10c == 0x18bd10ed) {
        uVar11 = (DAT_004bcf28 & DAT_004bcf2c & 0x8000207 | 0x53b53dd0) ^ 0x232ea6f5;
        bVar4 = 0xd5551e53 < uVar11;
        bVar5 = uVar11 == 0xd5551e54;
        iVar6 = 0x7c0e4554;
        iVar10 = -0x14a40d67;
        goto LAB_003061a0;
      }
      if (local_10c == 0x1ed4b128) {
        uVar11 = (DAT_004bce98 + DAT_004bce9c) * -0x65c323c8 + 0x86410a0a;
        _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,0);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_3,local_98,uVar9);
        _objc_release(uVar9);
        bVar4 = 0x87e28fe0 < uVar11;
        bVar5 = uVar11 == 0x87e28fe1;
        iVar6 = 0x28b4f5c2;
        goto LAB_003054ac;
      }
      if (local_10c != 0x24dec4aa) goto LAB_00304084;
      iVar6 = 0xb06b260;
    }
    else {
      iVar6 = -0x4c63c0d7;
      if (local_10c != 0x28b4f5c2) {
        if (local_10c == 0x28d775ce) {
          bVar5 = local_e1 == '\0';
          iVar10 = -0x4c63c0d7;
          iVar6 = 0xfb70181;
          goto LAB_003061c0;
        }
        if (local_10c != 0x2be32fe2) goto LAB_00304084;
        local_e1 = _objc_msgSend(param_1,local_e0,local_d8,local_c0);
        iVar6 = 0x28d775ce;
      }
    }
  }
  else if (local_10c < 0x6332cbe1) {
    if (local_10c < 0x45d6af4e) {
      if (local_10c < 0x3b1a8628) {
        if (local_10c == 0x2e955a9c) {
          DAT_004d1b2c = 1;
          _objc_retain(param_3);
          local_80 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc380);
          iVar6 = -0xfc02d32;
        }
        else if (local_10c == 0x3161600c) {
          iVar6 = -0x7848a126;
        }
        else {
          if (local_10c != 0x39fb8730) goto LAB_00304084;
          DAT_004bc36a = DAT_004bc34a ^ 0x24;
          DAT_004bc36b = DAT_004bc34b ^ 0x6f;
          DAT_004bc36c = DAT_004bc34c ^ 0x32;
          DAT_004bc36d = DAT_004bc34d ^ 0x65;
          iVar6 = -0x5490b283;
        }
      }
      else {
        if (local_10c == 0x3b1a8628) {
          bVar5 = 0x7f7eb78c < (DAT_004bceb0 & DAT_004bceb4 & 0x8c);
          iVar10 = -0x29b7f90d;
          iVar6 = -0x708e5cee;
        }
        else {
          if (local_10c != 0x433625a2) {
            if (local_10c == 0x441b4d29) {
              uVar11 = 0;
              if (DAT_004bcf1c != 0) {
                uVar11 = DAT_004bcf18 / DAT_004bcf1c;
              }
              _objc_release(param_3);
              bVar5 = 0xcd26685a < ((uVar11 ^ 0x7f807f80) & 0xf5f9ebf3 | 0xb5f96370);
              iVar6 = 0x441b4d29;
              iVar10 = -0x7ecd25be;
              goto LAB_00306040;
            }
            goto LAB_00304084;
          }
          bVar5 = 0x290de4ed < ((DAT_004bce10 + DAT_004bce14) * -0x645805f6 ^ 0x955a3e0fU);
          iVar10 = -0x3e60ad8a;
          iVar6 = -0x7cca6a56;
        }
LAB_00305f54:
        if (bVar5) {
          iVar6 = iVar10;
        }
      }
    }
    else if (local_10c < 0x6006ac76) {
      if (local_10c == 0x45d6af4e) {
        bVar5 = local_f9 == '\0';
        iVar10 = -0x7688b769;
        iVar6 = -0x3a6097b9;
        goto LAB_003061c0;
      }
      if (local_10c == 0x501b0086) {
        iVar6 = -0x5bc46fba;
      }
      else {
        if (local_10c != 0x547c885c) goto LAB_00304084;
        iVar6 = 0x7cb1864e;
      }
    }
    else if (local_10c == 0x6006ac76) {
      DAT_004bc36e = local_72;
      DAT_004bc36f = DAT_004bc34f ^ 0xc1;
      DAT_004bc370 = DAT_004bc350 ^ 0x40;
      DAT_004bc371 = DAT_004bc351 ^ 0x50;
      DAT_004bc372 = DAT_004bc352 ^ 0xc0;
      DAT_004bc373 = DAT_004bc353 ^ 0xec;
      DAT_004bc374 = DAT_004bc354 ^ 0x9d;
      DAT_004bc375 = DAT_004bc355 ^ 0x3e;
      DAT_004bc376 = DAT_004bc356 ^ 0x70;
      iVar6 = 0x2e955a9c;
    }
    else {
      if (local_10c != 0x611f57bd) {
        if (local_10c == 0x626f597f) {
          bVar5 = 0xfa1a1107 <
                  ((DAT_004bced8 | DAT_004bcedc) * -0x2979b684 | 0xa098c12e) + 0xc1505347;
          iVar10 = 0x626f597f;
          iVar6 = 0x24dec4aa;
          goto LAB_00305f54;
        }
        goto LAB_00304084;
      }
      iVar6 = -0xeeeac3f;
    }
  }
  else if (local_10c < 0x73ad4148) {
    if (local_10c < 0x6b7aff9b) {
      if (local_10c == 0x6332cbe1) {
        local_88 = PTR_s_isKindOfClass__00489c00;
        bVar5 = (uint)((ulong)(DAT_004bce08 - DAT_004bce0c & 0xe399a891) * 0x30c67781 >> 0x3d) ==
                0x9dbc1c49;
        iVar10 = 0x6332cbe1;
        iVar6 = -0x354e8af4;
        goto LAB_003061c0;
      }
      if (local_10c != 0x670f62ae) {
        iVar6 = -0x101d2d49;
        iVar10 = 0x68576931;
        goto LAB_00304f38;
      }
      uVar11 = 0;
      if (DAT_004bcf24 != 0) {
        uVar11 = DAT_004bcf20 / DAT_004bcf24;
      }
      iVar6 = 0x7c0e4554;
      if ((uVar11 ^ 0xd404ff8) * -0x4d5520b8 != -0x53780ca0) {
        iVar6 = 0x18bd10ed;
      }
    }
    else if (local_10c == 0x6b7aff9b) {
      uVar11 = DAT_004bce28 | DAT_004bce2c;
      local_a8 = PTR_s_setB_isMiddleMessage__0048b8b0;
      _objc_msgSend(param_3,PTR_s_setB_isMiddleMessage__0048b8b0,local_a0);
      _objc_release(local_a0);
      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,1);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      local_b0 = PTR_s_setB_isLastMessage__0048b8b8;
      _objc_msgSend(param_3,PTR_s_setB_isLastMessage__0048b8b8,uVar9);
      _objc_release(uVar9);
      _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,0);
      uVar9 = _objc_retainAutoreleasedReturnValue();
      local_b8 = PTR_s_setB_isNeedHideHead__0048b8c0;
      _objc_msgSend(param_3,PTR_s_setB_isNeedHideHead__0048b8c0,uVar9);
      _objc_release(uVar9);
      _objc_msgSend(param_3,PTR_s_messageWrap_0048b8c8);
      local_c0 = _objc_retainAutoreleasedReturnValue();
      bVar7 = isSeparatorMessage_(param_1,(SEL)PTR_s_isSeparatorMessage__0048b890,local_c0);
      local_c1 = (char)bVar7;
      bVar5 = 0x28d3c8e7 < (uVar11 * -0x514fa5b8 ^ 0x292b6843);
      iVar6 = -0x1f844fa3;
      iVar10 = 0x611f57bd;
LAB_00306040:
      if (bVar5) {
        iVar6 = iVar10;
      }
    }
    else {
      iVar6 = -0x755e558;
      if (local_10c != 0x6f80f6fc) {
        if (local_10c != 0x72ae2e83) goto LAB_00304084;
        _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_90,0);
        uVar9 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(param_3,local_98,uVar9);
        _objc_release(uVar9);
        iVar6 = 0x1ed4b128;
      }
    }
  }
  else {
    if (local_10c < 0x7b506e5c) {
      if (local_10c != 0x73ad4148) {
        if (local_10c == 0x7a13b038) {
          uVar11 = ((DAT_004bce48 * DAT_004bce4c | 0x791f5235U) ^ 0xea1d4f2) * -0x7101671e;
          iVar6 = _objc_msgSend(param_3,PTR_s_isSender_0048b4e0);
          ppuVar1 = &PTR_s_m_nsToUsr_0048b8d0;
          if (iVar6 == 0) {
            ppuVar1 = &PTR_s_m_nsFromUsr_0048b860;
          }
          local_d0 = *ppuVar1;
          bVar4 = 0x425e9577 < uVar11;
          bVar5 = uVar11 == 0x425e9578;
          iVar6 = 0x1c57dca;
          goto LAB_00306140;
        }
        if (local_10c == 0x7a611833) {
          bVar5 = (DAT_004bce80 - DAT_004bce84 ^ 0x28020086U | 0xd779ae71) == 0x5a22edc4;
          iVar6 = -0x60cf7f72;
          iVar10 = -0x618d9fe;
          goto LAB_003058a0;
        }
        goto LAB_00304084;
      }
      bVar5 = local_71 == '\0';
      iVar10 = 0x2e955a9c;
      iVar6 = -0x789a3734;
    }
    else {
      if (0x7cb1864d < local_10c) {
        if (local_10c == 0x7cb1864e) {
          bVar5 = false;
          iVar10 = -0x2b86f8b0;
          iVar6 = -0x6d93e727;
          goto LAB_00305df8;
        }
        if (local_10c == 0x7ff3213d) {
          uVar11 = 0;
          if (DAT_004bcdf4 != 0) {
            uVar11 = DAT_004bcdf0 / DAT_004bcdf4;
          }
          uVar11 = (uVar11 + 0x4093cf86) / 0x39dffa7e | 0xe19002f4;
          bVar4 = 0xb51d3505 < uVar11;
          bVar5 = uVar11 == 0xb51d3506;
          iVar6 = -0x5490b283;
          iVar10 = 0x39fb8730;
          goto LAB_003061a0;
        }
        goto LAB_00304084;
      }
      if (local_10c != 0x7b506e5c) {
        if (local_10c == 0x7c0e4554) {
          iVar6 = 0x18bd10ed;
          goto LAB_003061c4;
        }
        goto LAB_00304084;
      }
      uVar11 = 0;
      if (DAT_004bcef4 != 0) {
        uVar11 = DAT_004bcef0 / DAT_004bcef4;
      }
      bVar5 = ((uVar11 ^ 0x142ea2) & 0x8bf4ffaa) / 0x5923bf2a == 0xa5cfd9ed;
      iVar10 = -0x706727cf;
      iVar6 = -0x73cf19bd;
    }
LAB_003061c0:
    if (bVar5) {
      iVar6 = iVar10;
    }
  }
LAB_003061c4:
  local_10c = iVar6;
  goto LAB_00304084;
}



// #####################################