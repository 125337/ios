

// #####################################
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
// ##### +[isSame:node:] @ 00306204
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isSame_node_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  int iVar9;
  int local_a4;
  byte local_9d;
  byte local_9c;
  byte local_9b;
  byte local_9a;
  byte local_99;
  undefined8 local_98;
  undefined *local_90;
  char local_81;
  ID local_80;
  undefined *local_78;
  char local_6c;
  byte local_6b;
  byte local_6a;
  char local_69;
  int local_68;
  
  iVar1 = DAT_004bcf30 * DAT_004bcf34;
  local_a4 = 0x19cc971e;
LAB_003062cc:
  if (local_a4 < 0x18f4c8b) {
    if (local_a4 < -0x413d5835) {
      if (-0x54e86c52 < local_a4) {
        if (local_a4 < -0x50bc390a) {
          if (local_a4 == -0x54e86c51) {
            local_a4 = 0x120f960e;
          }
          else if (local_a4 == -0x54e63e0c) {
            local_a4 = -0x7cd09637;
          }
          else if (local_a4 == -0x517c7821) {
            uVar2 = DAT_004bcfa8 + DAT_004bcfac;
            _objc_release(local_80);
            bVar3 = 0xdb6067d9 < (uVar2 & 0x48a8917c ^ 0xf5597ecd);
            iVar9 = -0x517c7821;
            local_a4 = -0x50bc390a;
            goto LAB_003075e4;
          }
        }
        else if (local_a4 < -0x45a26b8b) {
          if (local_a4 == -0x50bc390a) {
            local_a4 = 0x7a660d2a;
          }
          else if (local_a4 == -0x48469630) {
            local_a4 = -0x37c14e3;
          }
        }
        else if (local_a4 == -0x45a26b8b) {
          local_a4 = 0x79fb812a;
        }
        else if (local_a4 == -0x41ce0f98) {
          bVar3 = (uint)((ulong)(DAT_004bcfb8 - DAT_004bcfbc & 0x1438c341U ^ 0x7ab83ab3) *
                         0x21dade9f >> 0x3c) == 0x70f2c030;
          iVar9 = -0x65cf027e;
          local_a4 = -0x6fda760a;
          goto LAB_00307304;
        }
        goto LAB_003062cc;
      }
      if (-0x6fda760b < local_a4) {
        if (local_a4 < -0x62f6a948) {
          if (local_a4 == -0x6fda760a) {
            local_a4 = 0x28553bc2;
            if (local_81 == '\0') {
              local_a4 = 0x43cacc72;
            }
            local_9a = 0;
          }
          else if (local_a4 == -0x65cf027e) {
            local_a4 = -0x41ce0f98;
          }
        }
        else {
          if (local_a4 == -0x62f6a948) {
            uVar2 = (DAT_004bcf40 & DAT_004bcf44) * 0x1773177a + 0xf0495758;
            bVar4 = 0x9469f93 < uVar2;
            bVar3 = uVar2 == 0x9469f94;
            local_a4 = -0x413d5835;
            iVar9 = 0x11206331;
            goto LAB_003072e4;
          }
          if (local_a4 == -0x61283d78) {
            local_a4 = 0x18f4c8b;
            local_9b = local_9c;
          }
        }
        goto LAB_003062cc;
      }
      if (local_a4 != -0x7cd09637) {
        if (local_a4 == -0x7960784b) {
          local_a4 = -0x39a115e5;
        }
        else if (local_a4 == -0x738bc749) {
          local_a4 = 0x411738e1;
        }
        goto LAB_003062cc;
      }
      bVar3 = 0x1373e320 < ((DAT_004bcf58 | DAT_004bcf5c) & 0x582dfeb8) + 0x616542d5;
      local_a4 = -0x54e63e0c;
      iVar9 = 0x2e94ae8d;
    }
    else {
      if (local_a4 < -0x1966408f) {
        if (local_a4 < -0x396dfd9b) {
          if (local_a4 == -0x413d5835) {
            local_69 = local_68 == 0;
            bVar3 = 0xbc258b81 <
                    ((DAT_004bcf48 * DAT_004bcf4c ^ 0x62158646U) / 0x21755065 | 0x21fe6cc2);
            iVar9 = 0x11206331;
            local_a4 = 0x4771547f;
            goto LAB_003075e4;
          }
          if (local_a4 == -0x3c6d3d4b) {
            local_a4 = 0x42f7b5b7;
            if ((DAT_004bcf70 - DAT_004bcf74) * -0x4750350 != 0x2c7275fb) {
              local_a4 = -0x1bfaf892;
            }
          }
          else if (local_a4 == -0x39a115e5) {
            uVar2 = 0;
            if (DAT_004bcf8c != 0) {
              uVar2 = DAT_004bcf88 / DAT_004bcf8c;
            }
            uVar2 = (uVar2 & 0x3a8f89c9) * 0x27e32c5a;
            bVar4 = 0xa117e6ac < uVar2;
            bVar3 = uVar2 == 0xa117e6ad;
            local_a4 = -0x39a115e5;
            iVar9 = 0x1d66e328;
            goto LAB_003072e4;
          }
        }
        else if (local_a4 < -0x278916ab) {
          if (local_a4 == -0x396dfd9b) {
            local_a4 = 0x28553bc2;
            local_9a = local_99;
          }
          else if (local_a4 == -0x290c8bf5) {
            bVar3 = 0x9b46b7b7 <
                    (((DAT_004bcf90 + DAT_004bcf94) * 0x61546ef8 ^ 0x4c711460U) & 0x6c771f60);
            local_a4 = 0x1101b949;
            iVar9 = -0x278916ab;
            goto LAB_003076d8;
          }
        }
        else if (local_a4 == -0x278916ab) {
          uVar6 = _objc_retain(param_4);
          _objc_msgSend(uVar6,PTR_s_messageWrap_0048b8c8);
          IVar8 = _objc_retainAutoreleasedReturnValue();
          isSeparatorMessage_(param_1,(SEL)PTR_s_isSeparatorMessage__0048b890,IVar8);
          local_a4 = 0x1101b949;
        }
        else if (local_a4 == -0x1bfaf892) {
          DAT_004bc3c1 = local_6b;
          DAT_004bc3c2 = DAT_004bc3a2 ^ 8;
          DAT_004bc3c3 = DAT_004bc3a3 ^ 0xde;
          DAT_004bc3c4 = DAT_004bc3a4 ^ 0xe4;
          DAT_004bc3c5 = DAT_004bc3a5 ^ 0xae;
          DAT_004bc3c6 = DAT_004bc3a6 ^ 0xd1;
          DAT_004bc3c7 = DAT_004bc3a7 ^ 0xdd;
          DAT_004bc3c8 = DAT_004bc3a8 ^ 0xcf;
          DAT_004bc3c9 = DAT_004bc3a9 ^ 0x99;
          uVar2 = 0;
          if (DAT_004bcf7c != 0) {
            uVar2 = DAT_004bcf78 / DAT_004bcf7c;
          }
          DAT_004bc3ca = DAT_004bc3aa ^ 2;
          DAT_004bc3cb = DAT_004bc3ab ^ 0xe2;
          DAT_004bc3cc = DAT_004bc3ac ^ 200;
          DAT_004bc3cd = DAT_004bc3ad ^ 0xbd;
          DAT_004bc3ce = DAT_004bc3ae ^ 5;
          DAT_004bc3cf = DAT_004bc3af ^ 0xb4;
          DAT_004bc3d0 = DAT_004bc3b0 ^ 0xd1;
          DAT_004bc3d1 = DAT_004bc3b1 ^ 0x18;
          local_a4 = -0x162a2043;
          if ((uVar2 * 0x716f030 + 0x46d9b910 | 0x9d6b0189) < 0x34337aa) {
            local_a4 = 0x42f7b5b7;
          }
        }
        goto LAB_003062cc;
      }
      if (-0xa69b2d9 < local_a4) {
        if (local_a4 < -0x1982ab) {
          if (local_a4 == -0xa69b2d8) {
            local_a4 = -0x738bc749;
            if (((DAT_004bcf60 ^ DAT_004bcf64) / 0x5393efeb + 0xf67088e2 & 0x50408067) != 0x310f0ad1
               ) {
              local_a4 = 0x411738e1;
            }
          }
          else if (local_a4 == -0x37c14e3) {
            local_a4 = -0x517c7821;
            if (((DAT_004bcfa0 - DAT_004bcfa4) * 0x570e3be9 | 0xbf4dcf65U) == 0xdb64919e) {
              local_a4 = 0x354c5369;
            }
          }
        }
        else if (local_a4 == -0x1982ab) {
          DAT_004d1b30 = 1;
          _objc_retain(param_3);
          local_a4 = 0x424f4b6c;
        }
        else if (local_a4 == 0x10707b0) {
          return (bool)local_9d;
        }
        goto LAB_003062cc;
      }
      if (local_a4 == -0x1966408f) {
        uVar2 = DAT_004bcff8 | DAT_004bcffc;
        _objc_release(param_4);
        _objc_release(param_3);
        bVar3 = 0x16bab4b < ((uVar2 / 0x556747) * 0x1c7d3c6e | 0x742df98e);
        local_a4 = 0x4d7da3a7;
        iVar9 = 0x10707b0;
        goto LAB_003076d8;
      }
      if (local_a4 != -0x184410f0) {
        if (local_a4 == -0x162a2043) {
          local_a4 = -0x1982ab;
        }
        goto LAB_003062cc;
      }
      bVar3 = 0xa9b99784 <
              (uint)((ulong)(DAT_004bcf80 + DAT_004bcf84 & 0x90048252) * 0x11de7097 >> 0x3b);
      local_a4 = -0x39a115e5;
      iVar9 = -0x7960784b;
    }
  }
  else {
    if (local_a4 < 0x42f7b5b7) {
      if (local_a4 < 0x28553bc2) {
        if (0x11206330 < local_a4) {
          if (local_a4 < 0x19cc971e) {
            if (local_a4 == 0x11206331) {
              local_a4 = -0x413d5835;
            }
            else if (local_a4 == 0x120f960e) {
              _objc_msgSend(param_4,local_78);
              uVar6 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_1,local_90,uVar6);
              uVar7 = _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar6);
              local_99 = _objc_msgSend(local_98,PTR_s_isEqualToString__00489d70,uVar7);
              _objc_release(uVar7);
              local_a4 = 0x6038ff24;
            }
          }
          else if (local_a4 == 0x19cc971e) {
            local_a4 = 0x79fb812a;
            if ((int)((long)((ulong)(iVar1 * 0x7eed61f6 + 0x78712ae1) * 0xcaae8967) >> 0x3f) ==
                0x51ef384c) {
              local_a4 = -0x45a26b8b;
            }
          }
          else if (local_a4 == 0x1d66e328) {
            local_a4 = 0x18f4c8b;
            if (local_6c == '\0') {
              local_a4 = -0x290c8bf5;
            }
            local_9b = 0;
          }
          goto LAB_003062cc;
        }
        if (local_a4 == 0x18f4c8b) {
          local_9d = local_9b;
          local_a4 = 0x4d7da3a7;
          if ((DAT_004bcff0 & DAT_004bcff4 & 0x8000d514 ^ 0xc106cc10 | 0x3e6022eb) < 0x99b79611) {
            local_a4 = -0x1966408f;
          }
          goto LAB_003062cc;
        }
        if (local_a4 == 0x84469c4) {
          uVar2 = DAT_004bcfd8 + DAT_004bcfdc;
          _objc_release(local_98);
          local_a4 = -0x396dfd9b;
          if ((uVar2 & 0x39abc42) * 0x8e42790 == -0x533fe61f) {
            local_a4 = 0x84469c4;
          }
          goto LAB_003062cc;
        }
        if (local_a4 != 0x1101b949) goto LAB_003062cc;
        uVar2 = 0;
        if (DAT_004bcf9c != 0) {
          uVar2 = DAT_004bcf98 / DAT_004bcf9c;
        }
        _objc_retain(param_4);
        local_78 = PTR_s_messageWrap_0048b8c8;
        _objc_msgSend();
        local_80 = _objc_retainAutoreleasedReturnValue();
        bVar5 = isSeparatorMessage_(param_1,(SEL)PTR_s_isSeparatorMessage__0048b890,local_80);
        local_81 = (char)bVar5;
        bVar3 = 0x996c2152 < (uVar2 + 0x6ba60206 ^ 0x6cc379da);
        iVar9 = 0x1101b949;
        local_a4 = -0x48469630;
      }
      else {
        if (0x37c8c725 < local_a4) {
          if (local_a4 < 0x411738e1) {
            if (local_a4 == 0x37c8c726) {
              _objc_msgSend(param_3,local_78);
              IVar8 = _objc_retainAutoreleasedReturnValue();
              senderUser_(param_1,(SEL)PTR_s_senderUser__0048b8a0,IVar8);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(IVar8);
              local_a4 = 0x741c3709;
            }
            else if (local_a4 == 0x3f2cae95) {
              DAT_004bc3c0 = local_6a;
              local_6b = DAT_004bc3a1 ^ 0x4d;
              local_a4 = -0x3c6d3d4b;
            }
          }
          else {
            if (local_a4 == 0x411738e1) {
              uVar2 = DAT_004bcf68 + DAT_004bcf6c + 0xc94ac5a0U ^ 0xbe035c36;
              local_6a = DAT_004bc3a0 ^ 0x45;
              bVar4 = 0xc2131fbc < uVar2;
              bVar3 = uVar2 == 0xc2131fbd;
              local_a4 = -0x738bc749;
              iVar9 = 0x653664a5;
              goto LAB_003072e4;
            }
            if (local_a4 == 0x424f4b6c) {
              _objc_retain(param_4);
              uVar6 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc3e0);
              local_6c = _objc_msgSend(param_4,PTR_s_isKindOfClass__00489c00,uVar6);
              local_a4 = -0x184410f0;
            }
          }
          goto LAB_003062cc;
        }
        if (local_a4 != 0x28553bc2) {
          if (local_a4 != 0x2e94ae8d) {
            if (local_a4 == 0x354c5369) {
              _objc_release(local_80);
              local_a4 = -0x517c7821;
            }
            goto LAB_003062cc;
          }
          bVar3 = local_69 == '\0';
          iVar9 = -0x1982ab;
          local_a4 = -0xa69b2d8;
          goto LAB_00307304;
        }
        local_9c = local_9a;
        bVar3 = 0xd61b3980 < (DAT_004bcfe0 * DAT_004bcfe4 + 0x6a808826U ^ 0xb27c3534);
        iVar9 = 0x78271512;
        local_a4 = 0x64744cd6;
      }
LAB_003075e4:
      if (bVar3) {
        local_a4 = iVar9;
      }
      goto LAB_003062cc;
    }
    if (local_a4 < 0x653664a5) {
      if (local_a4 < 0x49626a06) {
        if (local_a4 == 0x42f7b5b7) {
          DAT_004bc3c1 = local_6b;
          DAT_004bc3c2 = DAT_004bc3a2 ^ 8;
          DAT_004bc3c3 = DAT_004bc3a3 ^ 0xde;
          DAT_004bc3c4 = DAT_004bc3a4 ^ 0xe4;
          DAT_004bc3c5 = DAT_004bc3a5 ^ 0xae;
          DAT_004bc3c6 = DAT_004bc3a6 ^ 0xd1;
          DAT_004bc3c7 = DAT_004bc3a7 ^ 0xdd;
          DAT_004bc3c8 = DAT_004bc3a8 ^ 0xcf;
          DAT_004bc3c9 = DAT_004bc3a9 ^ 0x99;
          DAT_004bc3ca = DAT_004bc3aa ^ 2;
          DAT_004bc3cb = DAT_004bc3ab ^ 0xe2;
          DAT_004bc3cc = DAT_004bc3ac ^ 200;
          DAT_004bc3cd = DAT_004bc3ad ^ 0xbd;
          DAT_004bc3ce = DAT_004bc3ae ^ 5;
          DAT_004bc3cf = DAT_004bc3af ^ 0xb4;
          DAT_004bc3d0 = DAT_004bc3b0 ^ 0xd1;
          DAT_004bc3d1 = DAT_004bc3b1 ^ 0x18;
          local_a4 = -0x1bfaf892;
        }
        else if (local_a4 == 0x43cacc72) {
          uVar2 = (DAT_004bcfc0 * DAT_004bcfc4 | 0x2d49d631U) * -0x6f62940c | 0x304bfbeb;
          bVar4 = 0x272a759a < uVar2;
          bVar3 = uVar2 == 0x272a759b;
          local_a4 = 0x741c3709;
          iVar9 = 0x37c8c726;
LAB_003072e4:
          if (!bVar4 || bVar3) {
            local_a4 = iVar9;
          }
        }
        else if (local_a4 == 0x4771547f) {
          local_a4 = 0x790b4f28;
        }
      }
      else if (local_a4 < 0x6038ff24) {
        if (local_a4 == 0x49626a06) {
          local_a4 = -0x62f6a948;
        }
        else if (local_a4 == 0x4d7da3a7) {
          _objc_release(param_4);
          _objc_release(param_3);
          local_a4 = -0x1966408f;
        }
      }
      else if (local_a4 == 0x6038ff24) {
        local_a4 = 0x84469c4;
        if ((DAT_004bcfd0 & DAT_004bcfd4 & 0x7c3adc44 ^ 0x77c705a2) * -0x2b328d32 < 0x663a2ef1) {
          local_a4 = 0x6c767c99;
        }
      }
      else if (local_a4 == 0x64744cd6) {
        _objc_release(param_4);
        local_a4 = 0x78271512;
      }
      goto LAB_003062cc;
    }
    if (0x78271511 < local_a4) {
      if (0x79fb8129 < local_a4) {
        if (local_a4 == 0x79fb812a) {
          local_68 = DAT_004d1b30;
          local_a4 = 0x79fb812a;
          if ((DAT_004bcf38 + DAT_004bcf3c + 0x4b099190U ^ 0xe0cb622e) + 0xbb945023 < 0xdaa80394) {
            local_a4 = 0x49626a06;
          }
        }
        else if (local_a4 == 0x7a660d2a) {
          bVar3 = 0xfd2a1cd4 < (DAT_004bcfb0 & DAT_004bcfb4 & 0xf38788eb) + 0x6f69066f;
          local_a4 = -0x41ce0f98;
          iVar9 = -0x65cf027e;
          goto LAB_003076d8;
        }
        goto LAB_003062cc;
      }
      if (local_a4 == 0x78271512) {
        uVar2 = DAT_004bcfe8 & DAT_004bcfec;
        _objc_release(param_4);
        bVar3 = ((uVar2 & 0x627bc1b9) * -0x55f63c45 & 0x7c5df49d) == 0x1d950433;
        iVar9 = 0x64744cd6;
        local_a4 = -0x61283d78;
        goto LAB_00307304;
      }
      if (local_a4 != 0x790b4f28) goto LAB_003062cc;
      bVar3 = ((DAT_004bcf50 & DAT_004bcf54) + 0x29ce3059) / 0x5041117e == 0x588707ea;
      iVar9 = -0x54e63e0c;
      local_a4 = -0x7cd09637;
LAB_00307304:
      if (bVar3) {
        local_a4 = iVar9;
      }
      goto LAB_003062cc;
    }
    if (local_a4 == 0x653664a5) {
      local_a4 = 0x3f2cae95;
      goto LAB_003062cc;
    }
    if (local_a4 == 0x6c767c99) {
      _objc_release(local_98);
      local_a4 = 0x84469c4;
      goto LAB_003062cc;
    }
    if (local_a4 != 0x741c3709) goto LAB_003062cc;
    uVar2 = DAT_004bcfc8 | DAT_004bcfcc;
    _objc_msgSend(param_3,local_78);
    IVar8 = _objc_retainAutoreleasedReturnValue();
    local_90 = PTR_s_senderUser__0048b8a0;
    senderUser_(param_1,(SEL)PTR_s_senderUser__0048b8a0,IVar8);
    local_98 = _objc_retainAutoreleasedReturnValue();
    _objc_release(IVar8);
    bVar3 = 0x807b517d < (uVar2 / 0x13a125f3 | 0xe9efff7b);
    local_a4 = 0x37c8c726;
    iVar9 = -0x54e86c51;
  }
LAB_003076d8:
  if (bVar3) {
    local_a4 = iVar9;
  }
  goto LAB_003062cc;
}



// #####################################
// ##### +[isPrevSameUser:wrap:] @ 00301f6c
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isPrevSameUser_wrap_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined *puVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  uint uVar13;
  int iVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  int local_c0;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  char local_99;
  undefined *local_98;
  char local_89;
  undefined *local_88;
  char local_79;
  ID local_78;
  undefined *local_70;
  undefined4 local_68;
  
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = local_b0;
  uVar1 = DAT_004bcc30 ^ DAT_004bcc34;
  local_c0 = 0xc8279a;
LAB_0030201c:
  puVar9 = PTR_s_senderUser__0048b8a0;
  uVar12 = auVar16._8_8_;
  local_b0 = auVar16._0_8_;
  auVar15._8_8_ = uVar12;
  auVar15._0_8_ = local_78;
  auVar4._8_8_ = uVar12;
  auVar4._0_8_ = local_78;
  auVar3._8_8_ = uVar12;
  auVar3._0_8_ = local_78;
  auVar2._8_8_ = uVar12;
  auVar2._0_8_ = local_78;
  if (-0x5475ccb < local_c0) {
    if (local_c0 < 0x367f5ed5) {
      if (local_c0 < 0x53796fd) {
        if (local_c0 < -0x11d8973) {
          if (local_c0 == -0x5475cca) goto LAB_00302304;
          if (local_c0 != -0x4938282) {
            if (local_c0 == -0x11d99a8) {
              _objc_msgSend(param_1,local_70,param_3,local_68,0xffffffffffffffff);
              _objc_retainAutoreleasedReturnValue();
              auVar16._8_8_ = extraout_x1_00;
              auVar16._0_8_ = local_b0;
              local_c0 = -0x255a6a73;
            }
            goto LAB_0030201c;
          }
          bVar11 = ((uint)((ulong)(DAT_004bcce0 ^ DAT_004bcce4) * 0x315d5ddf >> 0x3c) | 0xdfebb97c)
                   == 0xe5c4a802;
          local_c0 = -0x2bb44948;
          iVar14 = 0x53796fd;
        }
        else {
          if (local_c0 == -0x11d8973) {
            bVar11 = (((DAT_004bccb0 + DAT_004bccb4) * -0x6f99f448 ^ 0xe8001e80U) & 0xf9e11fb0) ==
                     0x92923867;
            iVar14 = -0x3a16539d;
            local_c0 = 0x58170ec1;
LAB_00302a40:
            if (bVar11) {
              local_c0 = iVar14;
            }
            goto LAB_0030201c;
          }
          if (local_c0 != 0xc8279a) {
            if (local_c0 == 0x3c898a4) {
              local_c0 = -0x11d8973;
            }
            goto LAB_0030201c;
          }
          bVar11 = ((uint)((ulong)uVar1 * 0x1bc41159 >> 0x3c) * -0x72ee368f & 0xa67deff5) ==
                   0x18d257bb;
          local_c0 = -0x293f7d4b;
          iVar14 = -0x3629f2a4;
        }
      }
      else {
        if (local_c0 < 0xd0a308c) {
          if (local_c0 == 0x53796fd) {
            _objc_msgSend(local_b0,local_b8,local_a8);
            _objc_release(local_b0);
            _objc_release(local_a8);
            auVar16._8_8_ = extraout_x1_09;
            auVar16._0_8_ = local_b0;
            local_c0 = -0x2bb44948;
          }
          else if (local_c0 == 0xaebe1f1) {
            uVar13 = 0;
            if (DAT_004bcccc != 0) {
              uVar13 = DAT_004bccc8 / DAT_004bcccc;
            }
            senderUser_(param_1,(SEL)PTR_s_senderUser__0048b8a0,param_4);
            local_a8 = _objc_retainAutoreleasedReturnValue();
            senderUser_(param_1,(SEL)puVar9,local_78);
            auVar16 = _objc_retainAutoreleasedReturnValue();
            local_c0 = 0xd0a308c;
            if ((uint)((ulong)(uVar13 >> 4) * 0x9e7f4a3 >> 0x37) * 0x65248808 != 0x156e4aab) {
              local_c0 = -0x3062286c;
            }
          }
          else if (local_c0 == 0xbb95e6e) {
LAB_0030298c:
            auVar16._8_8_ = uVar12;
            auVar16._0_8_ = local_b0;
            local_c0 = 0x485c30d3;
          }
          goto LAB_0030201c;
        }
        if (0x1721d470 < local_c0) {
          if (local_c0 == 0x1721d471) {
            local_c0 = -0x55243f1d;
          }
          else if (local_c0 == 0x33aa10b0) {
            local_c0 = -0x3b9bd300;
          }
          goto LAB_0030201c;
        }
        if (local_c0 == 0xd0a308c) {
          senderUser_(param_1,(SEL)PTR_s_senderUser__0048b8a0,param_4);
          _objc_retainAutoreleasedReturnValue();
          senderUser_(param_1,(SEL)puVar9,local_78);
          _objc_retainAutoreleasedReturnValue();
          uVar12 = extraout_x1_04;
LAB_00302890:
          auVar16._8_8_ = uVar12;
          auVar16._0_8_ = local_b0;
          local_c0 = 0xaebe1f1;
          goto LAB_0030201c;
        }
        if (local_c0 != 0x16815152) goto LAB_0030201c;
        bVar11 = (DAT_004bcc90 - DAT_004bcc94 | 0x3fe1aff2U) * -0x613801f4 == -0xa69467f;
        local_c0 = 0x367f5ed5;
        iVar14 = 0x5759d5cb;
      }
    }
    else {
      if (local_c0 < 0x5759d5cb) {
        if (local_c0 < 0x485c30d3) {
          if (local_c0 == 0x367f5ed5) {
            uVar13 = 0;
            if (DAT_004bcc9c != 0) {
              uVar13 = DAT_004bcc98 / DAT_004bcc9c;
            }
            local_98 = PTR_s_isNeedInsertTimeNode_current__0048b898;
            bVar11 = uVar13 * 0x12dd6c1b == -0x19f0055c;
            iVar14 = 0x367f5ed5;
            local_c0 = 0x76d76e9a;
            goto LAB_00302a40;
          }
          if (local_c0 == 0x3ee2eb5d) {
            local_c0 = -0x39159965;
            local_ba = local_b9;
          }
          else if (local_c0 == 0x42e42bc4) {
LAB_00302304:
            local_c0 = -0x747114af;
          }
        }
        else {
          if (local_c0 == 0x485c30d3) {
            uVar13 = 0;
            if (DAT_004bccac != 0) {
              uVar13 = DAT_004bcca8 / DAT_004bccac;
            }
            local_99 = _objc_msgSend(param_1,local_98,local_78,param_4);
            bVar11 = 0xd8f3d887 < (uVar13 & 0xb0e15105) + 0x84a8eb88;
            iVar14 = 0x485c30d3;
            local_c0 = 0x3c898a4;
            uVar12 = extraout_x1_07;
            goto LAB_00302f60;
          }
          if (local_c0 == 0x53bc485a) {
            local_c0 = -0x7c52c02b;
          }
          else if (local_c0 == 0x56cc1a1d) {
            local_c0 = 0x59f74a8d;
          }
        }
        goto LAB_0030201c;
      }
      if (local_c0 < 0x59f74a8d) {
        if (local_c0 == 0x5759d5cb) {
          local_c0 = 0x367f5ed5;
        }
        else {
          if (local_c0 == 0x58170ec1) {
            uVar13 = 0;
            if (DAT_004bccbc != 0) {
              uVar13 = DAT_004bccb8 / DAT_004bccbc;
            }
            bVar10 = 0xc777ffc3 < uVar13 + 0x788bc7ac;
            bVar11 = uVar13 + 0x788bc7ac == 0xc777ffc4;
            local_c0 = -0x3a16539d;
            iVar14 = -0x6b7a857a;
            auVar15 = auVar2;
            goto LAB_00302ec4;
          }
          if (local_c0 == 0x581948d8) {
            local_c0 = -0xcb8d276;
          }
        }
        goto LAB_0030201c;
      }
      if (0x6f1e7c5a < local_c0) {
        if (local_c0 == 0x6f1e7c5b) {
          _objc_release(local_78,uVar12);
          _objc_release(param_4);
          auVar16._8_8_ = extraout_x1_05;
          auVar16._0_8_ = local_b0;
          local_c0 = -0x6e9de728;
        }
        else if (local_c0 == 0x76d76e9a) {
          local_c0 = 0xbb95e6e;
        }
        goto LAB_0030201c;
      }
      if (local_c0 != 0x59f74a8d) {
        if (local_c0 == 0x5c97ed25) {
          _objc_release(param_3,uVar12);
          auVar16._8_8_ = extraout_x1;
          auVar16._0_8_ = local_b0;
          local_c0 = -0x1cea457e;
        }
        goto LAB_0030201c;
      }
      uVar13 = 0;
      if (DAT_004bcc74 != 0) {
        uVar13 = DAT_004bcc70 / DAT_004bcc74;
      }
      bVar11 = (uint)((ulong)uVar13 * 0x6be13d >> 0x35) * 0x18a57519 == 0x7cac6300;
      local_c0 = -0x56bc0c3f;
      iVar14 = -0x1de048a7;
    }
LAB_00302d14:
    if (bVar11) {
      local_c0 = iVar14;
    }
    goto LAB_0030201c;
  }
  if (-0x30d31f4b < local_c0) {
    if (-0x1de048a8 < local_c0) {
      if (local_c0 < -0xf610cac) {
        if (local_c0 == -0x1de048a7) {
          _objc_msgSend(param_1,local_88,local_78);
          auVar16._8_8_ = extraout_x1_11;
          auVar16._0_8_ = local_b0;
          local_c0 = -0x56bc0c3f;
        }
        else if (local_c0 == -0x1cea457e) {
          iVar14 = DAT_004bcc58 * DAT_004bcc5c;
          _objc_release(param_3,uVar12);
          local_79 = local_78 == 0;
          bVar11 = 0x29fc2a41 < ((iVar14 + 0xb967e85U | 0xc0d034da) ^ 0xccef9d62);
          iVar14 = 0x5c97ed25;
          local_c0 = -0x8437c88;
          uVar12 = extraout_x1_12;
LAB_00302f60:
          auVar7._8_8_ = uVar12;
          auVar7._0_8_ = local_b0;
          auVar16._8_8_ = uVar12;
          auVar16._0_8_ = local_b0;
          if (bVar11) {
            local_c0 = iVar14;
            auVar16 = auVar7;
          }
        }
        else if (local_c0 == -0x1a5d026e) {
          local_c0 = -0xf610cac;
        }
      }
      else if (local_c0 < -0xbeeee71) {
        if (local_c0 == -0xf610cac) {
          bVar11 = 0xb4d36448 < ((DAT_004bcc40 & DAT_004bcc44) + 0x97046f74 ^ 0xb5a8ebe4);
          local_c0 = -0x255a6a73;
          iVar14 = -0x11d99a8;
          goto LAB_00302b54;
        }
        if (local_c0 == -0xcb8d276) {
          bVar11 = (DAT_004bcc50 & DAT_004bcc54 ^ 0x7ffc000 | 0xf3ffbfdf) == 0x5454b69b;
          local_c0 = -0x1cea457e;
          iVar14 = 0x5c97ed25;
          goto LAB_00302d14;
        }
      }
      else {
        if (local_c0 == -0xbeeee71) {
          _objc_msgSend(param_1,local_98,local_78,param_4);
          uVar12 = extraout_x1_06;
          goto LAB_0030298c;
        }
        if (local_c0 == -0x8437c88) {
          bVar11 = local_79 == '\0';
          iVar14 = 0x42e42bc4;
LAB_00302ee4:
          local_c0 = -0x39159965;
          if (bVar11) {
            local_c0 = iVar14;
          }
          local_ba = 0;
        }
      }
      goto LAB_0030201c;
    }
    if (local_c0 < -0x293f7d4b) {
      if (local_c0 == -0x30d31f4a) {
        bVar11 = local_89 == '\0';
        iVar14 = 0x16815152;
        goto LAB_00302ee4;
      }
      if (local_c0 == -0x3062286c) {
        local_c0 = -0x28423a87;
        goto LAB_0030201c;
      }
      if (local_c0 != -0x2bb44948) goto LAB_0030201c;
      uVar13 = (DAT_004bcce8 * DAT_004bccec ^ 0x2fa5e920U) + 0x2f573da7 | 0xd5179d90;
      local_b9 = _objc_msgSend(local_b0,local_b8,local_a8);
      _objc_release(local_b0);
      _objc_release(local_a8);
      bVar10 = 0x7c6a90dd < uVar13;
      bVar11 = uVar13 == 0x7c6a90de;
      iVar14 = -0x2bb44948;
      local_c0 = 0x3ee2eb5d;
      uVar12 = extraout_x1_01;
    }
    else {
      if (local_c0 == -0x293f7d4b) {
        iVar14 = DAT_004bcc38 * DAT_004bcc3c;
        _objc_retain(param_4);
        puVar9 = PTR_s_m_uiMesLocalID_0048b880;
        _objc_retain(param_3);
        local_68 = _objc_msgSend(param_4,puVar9);
        local_70 = PTR_s_findValidMsg_startId_direction__0048b888;
        bVar11 = 0x4c4f1875 < (iVar14 * -0xfac9fd7 & 0xe8c06b3fU) + 0x90840f1a;
        local_c0 = -0x3629f2a4;
        iVar14 = -0x1a5d026e;
        uVar12 = extraout_x1_08;
LAB_00302b54:
        auVar5._8_8_ = uVar12;
        auVar5._0_8_ = local_b0;
        auVar16._8_8_ = uVar12;
        auVar16._0_8_ = local_b0;
        if (bVar11) {
          local_c0 = iVar14;
          auVar16 = auVar5;
        }
        goto LAB_0030201c;
      }
      if (local_c0 != -0x28423a87) {
        if (local_c0 == -0x255a6a73) {
          uVar13 = (uint)((ulong)(DAT_004bcc48 & DAT_004bcc4c) * 0x22a920bf >> 0x3b) * -0x50b964 &
                   0x1978a4fc;
          _objc_msgSend(param_1,local_70,param_3,local_68,0xffffffffffffffff);
          auVar15 = _objc_retainAutoreleasedReturnValue();
          bVar10 = 0x14b7e132 < uVar13;
          bVar11 = uVar13 == 0x14b7e133;
          local_c0 = -0x255a6a73;
          iVar14 = 0x581948d8;
          goto LAB_00302ec4;
        }
        goto LAB_0030201c;
      }
      uVar13 = ((DAT_004bccd0 + DAT_004bccd4 ^ 0x682c01d2U) & 0x68fe8ff3) + 0x385f9aee;
      bVar10 = 0xeedc5335 < uVar13;
      bVar11 = uVar13 == 0xeedc5336;
      iVar14 = -0x55243f1d;
      local_c0 = 0x1721d471;
    }
    auVar6._8_8_ = uVar12;
    auVar6._0_8_ = local_b0;
    auVar16._8_8_ = uVar12;
    auVar16._0_8_ = local_b0;
    if (!bVar10 || bVar11) {
      local_c0 = iVar14;
      auVar16 = auVar6;
    }
    goto LAB_0030201c;
  }
  if (local_c0 < -0x55243f1d) {
    if (-0x6e9de729 < local_c0) {
      if (local_c0 == -0x6e9de728) {
        uVar13 = (DAT_004bccf8 * DAT_004bccfc & 0xac816ceU) * 0x2557fec8 + 0xcde16abf;
        _objc_release(local_78,uVar12);
        _objc_release(param_4);
        auVar15._8_8_ = extraout_x1_10;
        bVar10 = 0xe52795b0 < uVar13;
        bVar11 = uVar13 == 0xe52795b1;
        local_c0 = -0x6e9de728;
        iVar14 = -0x4bcef299;
        goto LAB_00302ec4;
      }
      if (local_c0 == -0x6b7a857a) {
        bVar11 = local_99 == '\0';
        iVar14 = -0x78530582;
        goto LAB_00302ee4;
      }
      if (local_c0 == -0x56bc0c3f) {
        local_89 = _objc_msgSend(param_1,local_88,local_78);
        auVar16._8_8_ = extraout_x1_03;
        auVar16._0_8_ = local_b0;
        local_c0 = 0x53bc485a;
      }
      goto LAB_0030201c;
    }
    if (local_c0 == -0x7c52c02b) {
      bVar11 = 0x5964c343 < ((DAT_004bcc80 - DAT_004bcc84) + 0xd3e59958U ^ 0xc804e657);
      iVar14 = -0x3b9bd300;
      local_c0 = 0x33aa10b0;
      goto LAB_00302f60;
    }
    if (local_c0 == -0x78530582) goto LAB_00302890;
    if (local_c0 != -0x747114af) goto LAB_0030201c;
    local_88 = PTR_s_isSeparatorMessage__0048b890;
    uVar13 = ((DAT_004bcc68 | DAT_004bcc6c) * 0x4e1d7e64 | 0x2a620a54) / 0x65c8a96d;
    bVar10 = 0x703096d7 < uVar13;
    bVar11 = uVar13 == 0x703096d8;
    local_c0 = -0x747114af;
    iVar14 = 0x56cc1a1d;
  }
  else {
    if (-0x3a16539e < local_c0) {
      if (local_c0 == -0x3a16539d) {
        local_c0 = 0x58170ec1;
      }
      else if (local_c0 == -0x39159965) {
        local_bb = local_ba;
        local_c0 = 0x6f1e7c5b;
        if ((DAT_004bccf0 + DAT_004bccf4 | 0x7fefbfffU) != 0x7c4f319a) {
          local_c0 = -0x6e9de728;
        }
      }
      else if (local_c0 == -0x3629f2a4) {
        _objc_retain(param_4);
        puVar9 = PTR_s_m_uiMesLocalID_0048b880;
        _objc_retain(param_3);
        _objc_msgSend(param_4,puVar9);
        auVar16._8_8_ = extraout_x1_02;
        auVar16._0_8_ = local_b0;
        local_c0 = -0x293f7d4b;
      }
      goto LAB_0030201c;
    }
    if (local_c0 < -0x45a6f2bf) {
      if (local_c0 == -0x55243f1d) {
        uVar13 = ((DAT_004bccd8 + DAT_004bccdc) * 0x80c173c ^ 0x2086a111U) & 0x35b6a99d;
        local_b8 = PTR_s_isEqualToString__00489d70;
        bVar10 = 0xe72dc901 < uVar13;
        bVar11 = uVar13 == 0xe72dc902;
        local_c0 = 0x1721d471;
        iVar14 = -0x45a6f2bf;
        auVar15 = auVar4;
        goto LAB_00302ec4;
      }
      if (local_c0 == -0x4bcef299) {
        return (bool)local_bb;
      }
      goto LAB_0030201c;
    }
    if (local_c0 == -0x45a6f2bf) {
      local_c0 = -0x4938282;
      goto LAB_0030201c;
    }
    if (local_c0 != -0x3b9bd300) goto LAB_0030201c;
    uVar13 = (DAT_004bcc88 & DAT_004bcc8c ^ 0x1000100) & 0x89180100;
    bVar10 = 0xc26440e5 < uVar13;
    bVar11 = uVar13 == 0xc26440e6;
    local_c0 = -0x3b9bd300;
    iVar14 = -0x30d31f4a;
    auVar15 = auVar3;
  }
LAB_00302ec4:
  auVar8._8_8_ = auVar15._8_8_;
  auVar8._0_8_ = local_b0;
  auVar16._8_8_ = auVar15._8_8_;
  auVar16._0_8_ = local_b0;
  local_78 = auVar15._0_8_;
  if (!bVar10 || bVar11) {
    local_c0 = iVar14;
    auVar16 = auVar8;
  }
  goto LAB_0030201c;
}



// #####################################
// ##### +[isNextSameUser:wrap:] @ 00302fa4
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isNextSameUser_wrap_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  unsigned_int uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  int local_b0;
  byte local_ab;
  byte local_aa;
  byte local_a9;
  undefined8 local_a8;
  undefined *local_a0;
  char local_91;
  undefined *local_90;
  char local_81;
  undefined *local_80;
  char local_71;
  long local_70;
  
  _objc_retain(param_4);
  puVar1 = PTR_s_m_uiMesLocalID_0048b880;
  _objc_retain(param_3);
  uVar4 = _objc_msgSend(param_4,puVar1);
  local_b0 = 0xf75e57f;
LAB_00303060:
  if (local_b0 < 0x172a0772) {
    if (local_b0 < -0x2bacc84b) {
      if (local_b0 < -0x4b5f13f7) {
        if (local_b0 < -0x6468b7ba) {
          if (local_b0 == -0x7bc69971) {
            local_b0 = 0x77c4e70;
          }
          else if (local_b0 == -0x6bb125a6) {
            _objc_msgSend(param_1,local_a0,local_70);
            uVar5 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(uVar5,PTR_s_isEqualToString__00489d70,local_a8);
            _objc_release(uVar5);
            _objc_release(local_a8);
            local_b0 = 0x21334577;
          }
          else if (local_b0 == -0x6730ef50) {
            local_b0 = 0x7acc268d;
          }
        }
        else {
          if (local_b0 == -0x6468b7ba) {
            bVar3 = 0xe15a6d2 < (DAT_004bcd50 - DAT_004bcd54) * -0x206152c8 + 0x418f6710U;
            local_b0 = 0x29a5024b;
            iVar6 = 0xec7565b;
            goto LAB_00303e48;
          }
          if (local_b0 == -0x57c6b067) {
            local_b0 = -0x15fe5b67;
            if ((DAT_004bcd40 - DAT_004bcd44 | 0x72e7b89U) == 0x2bc5ff6) {
              local_b0 = -0x19d0bc2f;
            }
          }
          else if ((local_b0 == -0x561ad85e) &&
                  (local_b0 = 0x5cd3c681,
                  0x8672b9f7 <
                  ((DAT_004bcd80 - DAT_004bcd84 ^ 0x7690fadcU) * 0x31ac164f | 0x1fc4015))) {
            local_b0 = 0x4b6156a7;
          }
        }
      }
      else if (local_b0 < -0x306c8188) {
        if (local_b0 == -0x4b5f13f7) {
          uVar7 = DAT_004bcd38 & DAT_004bcd3c;
          local_81 = _objc_msgSend(param_1,local_80,local_70);
          local_b0 = -0x3c359cb8;
          if ((uVar7 + 0xc56299ab | 0x7b5fde94) == 0xb59a835a) {
            local_b0 = -0x3720a0f6;
          }
        }
        else if (local_b0 == -0x3c359cb8) {
          local_b0 = -0x57c6b067;
        }
        else if (local_b0 == -0x3720a0f6) {
          _objc_msgSend(param_1,local_80,local_70);
          local_b0 = -0x4b5f13f7;
        }
      }
      else if (local_b0 == -0x306c8188) {
        local_b0 = 0x31fdf691;
      }
      else if (local_b0 == -0x2fb409bb) {
        uVar7 = DAT_004bcd98 | DAT_004bcd9c;
        _objc_msgSend(param_1,local_a0,param_4);
        local_a8 = _objc_retainAutoreleasedReturnValue();
        bVar3 = (uint)((ulong)(uVar7 + 0x63448133) * 0xd02a7237 >> 0x3e) == 0x3f09240f;
        local_b0 = -0x2e000c18;
        iVar6 = 0x1a9c4bb2;
LAB_00303c7c:
        if (!bVar3) {
          local_b0 = iVar6;
        }
      }
      else if (local_b0 == -0x2e000c18) {
        _objc_msgSend(param_1,local_a0,param_4);
        _objc_retainAutoreleasedReturnValue();
        local_b0 = -0x2fb409bb;
      }
      goto LAB_00303060;
    }
    if (local_b0 < 0x90b71dd) {
      if (local_b0 < -0x15fe5b67) {
        if (local_b0 != -0x2bacc84b) {
          if (local_b0 == -0x2882592d) {
            local_b0 = 0x4b30b662;
          }
          else if (local_b0 == -0x19d0bc2f) {
            local_b0 = -0x15fe5b67;
          }
          goto LAB_00303060;
        }
        uVar7 = (DAT_004bcd08 | DAT_004bcd0c | 0xb603e627) + 0x980c474c;
        findValidMsg_startId_direction_
                  (param_1,(SEL)PTR_s_findValidMsg_startId_direction__0048b888,param_3,uVar4,1);
        local_70 = _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        bVar2 = 0xa34cd22c < uVar7;
        bVar3 = uVar7 == 0xa34cd22d;
        local_b0 = -0x2bacc84b;
        iVar6 = 0x17fef5ba;
      }
      else {
        if (local_b0 == -0x15fe5b67) {
          bVar3 = 0x543574eb < (DAT_004bcd48 - DAT_004bcd4c) + 0x17d99aebU;
          iVar6 = -0x19d0bc2f;
          local_b0 = 0x62858a0d;
          goto LAB_00303e8c;
        }
        if (local_b0 != -0x2474994) {
          if (local_b0 == 0x77c4e70) {
            uVar7 = 0;
            if (DAT_004bcd34 != 0) {
              uVar7 = DAT_004bcd30 / DAT_004bcd34;
            }
            bVar3 = 0x4c3600fe < ((uVar7 & 0xc1331059) + 0xdc533527 ^ 0x5ad56b4b);
            local_b0 = -0x3720a0f6;
            iVar6 = -0x4b5f13f7;
            goto LAB_00303e48;
          }
          goto LAB_00303060;
        }
        bVar2 = true;
        bVar3 = false;
        local_b0 = 0x7acc268d;
        iVar6 = -0x6730ef50;
      }
    }
    else {
      if (0xec7565a < local_b0) {
        if (local_b0 == 0xec7565b) {
          local_b0 = 0x29a5024b;
        }
        else if (local_b0 == 0xf75e57f) {
          local_b0 = -0x2bacc84b;
          if (DAT_004bcd00 - DAT_004bcd04 == -0x2f431ae1) {
            local_b0 = 0x2e99fa3f;
          }
        }
        else if (local_b0 == 0x137e53b6) {
          local_b0 = 0xe8885b6;
        }
        goto LAB_00303060;
      }
      if (local_b0 == 0x90b71dd) {
        local_b0 = 0x65fbbb0d;
        goto LAB_00303060;
      }
      if (local_b0 == 0xa85b981) {
        uVar7 = 0;
        if (DAT_004bcdbc != 0) {
          uVar7 = DAT_004bcdb8 / DAT_004bcdbc;
        }
        _objc_release(local_70);
        _objc_release(param_4);
        uVar7 = -(int)((long)((ulong)(uVar7 * 0x49ff2d4e + 0xa1f831a4) * 0xbc880a81) >> 0x3f);
        bVar2 = 0x674075fc < uVar7;
        bVar3 = uVar7 == 0x674075fd;
        local_b0 = 0x46da042f;
        iVar6 = 0x6f0f94f0;
      }
      else {
        if (local_b0 != 0xe8885b6) goto LAB_00303060;
        uVar7 = DAT_004bcd60 + DAT_004bcd64 | 0xfffff7ff;
        bVar2 = 0xcd43b8eb < uVar7;
        bVar3 = uVar7 == 0xcd43b8ec;
        local_b0 = 0x77f6cb3a;
        iVar6 = 0x58bd76e5;
      }
    }
    if (!bVar2 || bVar3) {
      local_b0 = iVar6;
    }
    goto LAB_00303060;
  }
  if (local_b0 < 0x4b6156a7) {
    if (local_b0 < 0x2e99fa3f) {
      if (local_b0 < 0x1ca2a2bb) {
        if (local_b0 == 0x172a0772) {
          bVar3 = local_71 == '\0';
          iVar6 = -0x2474994;
          goto LAB_00303f7c;
        }
        if (local_b0 == 0x17fef5ba) {
          local_b0 = 0x40e9ff6e;
        }
        else if (local_b0 == 0x1a9c4bb2) {
          local_b0 = 0x1ca2a2bb;
        }
        goto LAB_00303060;
      }
      if (local_b0 == 0x1ca2a2bb) {
        local_b0 = -0x6bb125a6;
        if (((DAT_004bcda0 ^ DAT_004bcda4 | 0x698ce2fa) + 0x729c947d & 0x52596d68) < 0x807e4288) {
          local_b0 = 0x21334577;
        }
        goto LAB_00303060;
      }
      if (local_b0 == 0x21334577) {
        uVar7 = 0;
        if (DAT_004bcdac != 0) {
          uVar7 = DAT_004bcda8 / DAT_004bcdac;
        }
        _objc_msgSend(param_1,local_a0,local_70);
        uVar5 = _objc_retainAutoreleasedReturnValue();
        local_a9 = _objc_msgSend(uVar5,PTR_s_isEqualToString__00489d70,local_a8);
        _objc_release(uVar5);
        _objc_release(local_a8);
        local_b0 = 0x21334577;
        if (uVar7 * 0x49521884 + 0xb779074c < 0x7aa19737) {
          local_b0 = 0x6c3b4034;
        }
        goto LAB_00303060;
      }
      if (local_b0 != 0x29a5024b) goto LAB_00303060;
      local_90 = PTR_s_isNeedInsertTimeNode_current__0048b898;
      bVar3 = 0x86e11d91 < ((DAT_004bcd58 ^ DAT_004bcd5c) * -0x65b2a99e ^ 0x636d32bf);
      iVar6 = 0xec7565b;
      local_b0 = 0x137e53b6;
    }
    else {
      if (0x41dc117e < local_b0) {
        if (local_b0 == 0x41dc117f) {
          local_ab = local_aa;
          bVar3 = (uint)((ulong)((DAT_004bcdb0 & DAT_004bcdb4 | 0x8ca96c28) ^ 0x6343d0c0) *
                         0x10dabea5 >> 0x3c) == 0x466de34c;
          local_b0 = 0x46da042f;
          iVar6 = 0xa85b981;
          goto LAB_00303c7c;
        }
        if (local_b0 == 0x46da042f) {
          _objc_release(local_70);
          _objc_release(param_4);
          local_b0 = 0xa85b981;
        }
        else if (local_b0 == 0x4b30b662) {
          local_71 = local_70 == 0;
          local_b0 = 0x172a0772;
        }
        goto LAB_00303060;
      }
      if (local_b0 == 0x2e99fa3f) {
        findValidMsg_startId_direction_
                  (param_1,(SEL)PTR_s_findValidMsg_startId_direction__0048b888,param_3,uVar4,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(param_3);
        local_b0 = -0x2bacc84b;
        goto LAB_00303060;
      }
      if (local_b0 == 0x31fdf691) {
        uVar7 = ((DAT_004bcd78 & DAT_004bcd7c) * -0x5853077a & 0x2742770) * -0x38ed8ee4;
        bVar2 = 0x30091f2d < uVar7;
        bVar3 = uVar7 == 0x30091f2e;
        local_b0 = 0x5cbf7858;
        goto LAB_0030384c;
      }
      if (local_b0 != 0x40e9ff6e) goto LAB_00303060;
      uVar7 = 0;
      if (DAT_004bcd14 != 0) {
        uVar7 = DAT_004bcd10 / DAT_004bcd14;
      }
      bVar3 = 0x623dda5f < ((uVar7 ^ 0x5f68a18) + 0x25000ead | 0xc8f3dfb2);
      iVar6 = 0x4b30b662;
      local_b0 = -0x2882592d;
    }
LAB_00303e8c:
    if (bVar3) {
      local_b0 = iVar6;
    }
    goto LAB_00303060;
  }
  if (0x65fbbb0c < local_b0) {
    if (local_b0 < 0x77f6cb3a) {
      if (local_b0 == 0x65fbbb0d) {
        uVar7 = 0;
        if (DAT_004bcd94 != 0) {
          uVar7 = DAT_004bcd90 / DAT_004bcd94;
        }
        bVar3 = 0x1f3affe6 < (uVar7 + 0x8b192807 ^ 0x6652854d);
        local_b0 = -0x2e000c18;
        iVar6 = -0x2fb409bb;
        goto LAB_00303e48;
      }
      if (local_b0 == 0x6c3b4034) {
        local_b0 = 0x41dc117f;
        local_aa = local_a9;
      }
      else if (local_b0 == 0x6f0f94f0) {
        return (bool)local_ab;
      }
    }
    else if (local_b0 == 0x77f6cb3a) {
      uVar7 = DAT_004bcd68 + DAT_004bcd6c;
      local_91 = _objc_msgSend(param_1,local_90,param_4,local_70);
      bVar3 = 0x4e978a2e < ((uVar7 | 0x1bc33914) + 0x90de7bf6 | 0xb053ea30);
      local_b0 = 0x77f6cb3a;
      iVar6 = 0x5b29c9ab;
LAB_00303e48:
      if (bVar3) {
        local_b0 = iVar6;
      }
    }
    else if (local_b0 == 0x786f1f6c) {
      uVar7 = (uint)((ulong)(uint)(DAT_004bcd70 * DAT_004bcd74) * 0x914d080b >> 0x3f) | 0x4c3fc420;
      bVar2 = 0xa21060fb < uVar7;
      bVar3 = uVar7 == 0xa21060fc;
      local_b0 = -0x306c8188;
LAB_0030384c:
      if (!bVar2 || bVar3) {
        local_b0 = 0x31fdf691;
      }
    }
    else if (local_b0 == 0x7acc268d) {
      local_80 = PTR_s_isSeparatorMessage__0048b890;
      local_b0 = -0x7bc69971;
    }
    goto LAB_00303060;
  }
  if (local_b0 < 0x5cbf7858) {
    if (local_b0 == 0x4b6156a7) {
      local_b0 = 0x5cd3c681;
    }
    else if (local_b0 == 0x58bd76e5) {
      _objc_msgSend(param_1,local_90,param_4,local_70);
      local_b0 = 0x77f6cb3a;
    }
    else if (local_b0 == 0x5b29c9ab) {
      local_b0 = 0x786f1f6c;
    }
    goto LAB_00303060;
  }
  if (local_b0 == 0x5cbf7858) {
    bVar3 = local_91 == '\0';
    iVar6 = -0x561ad85e;
  }
  else {
    if (local_b0 == 0x5cd3c681) {
      local_a0 = PTR_s_senderUser__0048b8a0;
      local_b0 = 0x5cd3c681;
      if ((uint)((ulong)(((DAT_004bcd88 | DAT_004bcd8c) ^ 0x82218644) + 0x200b2982) * 0x296e9ae9 >>
                0x3c) != 0x6dd486b4) {
        local_b0 = 0x90b71dd;
      }
      goto LAB_00303060;
    }
    if (local_b0 != 0x62858a0d) goto LAB_00303060;
    bVar3 = local_81 == '\0';
    iVar6 = -0x6468b7ba;
  }
LAB_00303f7c:
  local_b0 = 0x41dc117f;
  if (bVar3) {
    local_b0 = iVar6;
  }
  local_aa = 0;
  goto LAB_00303060;
}



// #####################################
// ##### +[addNewMessage:nodes:] @ 0031c158
// #####################################

/* Function Stack Size: 0x20 bytes */

void BubbleMessageMerge::addNewMessage_nodes_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  uint uVar2;
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
  bool bVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  undefined8 uVar20;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  int local_1a4;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  long lStack_158;
  undefined8 local_150;
  undefined *local_148;
  undefined1 local_139;
  undefined *local_138;
  char local_129;
  undefined8 local_128;
  long local_120;
  undefined *local_118;
  char local_10a;
  char local_109;
  long local_108;
  char local_f9;
  long local_f8;
  long local_f0;
  char local_e1;
  long local_e0;
  char local_d1;
  undefined8 local_d0;
  char local_c1;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  char local_91;
  long local_90;
  long lStack_88;
  undefined8 local_80;
  byte local_73;
  byte local_72;
  char local_71;
  int local_70;
  
  auVar22._8_8_ = param_2;
  auVar22._0_8_ = lStack_88;
  uVar1 = ((DAT_004bdb40 * DAT_004bdb44 ^ 0xb500582U) & 0xb58978a) + 0xa2fc86ce;
  local_1a4 = -0x47271d38;
LAB_0031c240:
  uVar20 = auVar22._8_8_;
  lStack_88 = auVar22._0_8_;
  auVar21._8_8_ = uVar20;
  auVar21._0_8_ = local_150;
  auVar7._8_8_ = uVar20;
  auVar7._0_8_ = local_150;
  auVar6._8_8_ = uVar20;
  auVar6._0_8_ = local_150;
  auVar5._8_8_ = uVar20;
  auVar5._0_8_ = local_150;
  auVar4._8_8_ = uVar20;
  auVar4._0_8_ = local_150;
  auVar3._8_8_ = uVar20;
  auVar3._0_8_ = local_150;
  if (local_1a4 < -0xc4698bd) {
    if (local_1a4 < -0x42c594af) {
      if (local_1a4 < -0x5d56fdfd) {
        if (local_1a4 < -0x6fefb861) {
          if (-0x78afb551 < local_1a4) {
            if (local_1a4 < -0x78506db0) {
              if (local_1a4 == -0x78afb550) {
                local_1a4 = 0x3c4189ef;
              }
              else if (local_1a4 == -0x786b0d76) {
                local_1a4 = -0x6650423a;
                if (local_f9 == '\0') {
                  local_1a4 = 0x45d4debd;
                }
                local_168 = local_f8;
                local_170 = local_c0;
                local_178 = local_c0;
              }
            }
            else if (local_1a4 == -0x78506db0) {
              _objc_retain(param_3,uVar20);
              _objc_retain(param_4);
              auVar22._8_8_ = extraout_x1_17;
              auVar22._0_8_ = lStack_88;
              local_1a4 = 0x5c223a6a;
            }
            else if (local_1a4 == -0x758739f7) {
              local_1a4 = -0x2d7eaf3d;
            }
            goto LAB_0031c240;
          }
          if (-0x78f0dd39 < local_1a4) {
            if (local_1a4 == -0x78f0dd38) {
              DAT_004bc372 = local_72 ^ 0xc0;
              DAT_004bc373 = DAT_004bc353 ^ 0xec;
              DAT_004bc374 = DAT_004bc354 ^ 0x9d;
              local_73 = DAT_004bc355 ^ 0x3e;
              local_1a4 = -0x4f2b097d;
            }
            else if (local_1a4 == -0x78e74e0e) {
              local_1a4 = -0x112d60e4;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 == -0x7dea3e2c) {
            bVar17 = 0x928106bd <
                     (uint)((ulong)(uint)(DAT_004bdce0 - DAT_004bdce4) * 0xb3f86f2b >> 0x3e) +
                     0xdbdb12d1;
            iVar18 = -0x334566e4;
            local_1a4 = 0x774ea764;
            goto LAB_0031e7d0;
          }
          if (local_1a4 != -0x7db476bf) goto LAB_0031c240;
          bVar17 = (DAT_004bdd10 ^ DAT_004bdd14 ^ 0x181a64ee) * -0x6d5139d4 == -0x653afa73;
          local_1a4 = -0x142a36b9;
          iVar18 = 0x167ead53;
        }
        else {
          if (-0x6650423b < local_1a4) {
            if (local_1a4 < -0x61dcb62c) {
              if (local_1a4 == -0x6650423a) {
                local_190 = local_168;
                _objc_msgSend(param_4,local_a0);
                local_f0 = _objc_retainAutoreleasedReturnValue();
                iVar18 = _objc_msgSend(local_f0,local_a8,local_80);
                bVar17 = iVar18 == 0;
                iVar18 = -0x6fe5551;
                local_1a4 = 0x608e142;
                uVar20 = extraout_x1_24;
                goto LAB_0031f15c;
              }
              if (local_1a4 != -0x63bcd0cb) goto LAB_0031c240;
              bVar17 = local_71 == '\0';
              iVar18 = 0x3c4189ef;
              local_1a4 = 0x6bead7d5;
            }
            else {
              if (local_1a4 == -0x61dcb62c) {
                local_1a4 = 0x45d4debd;
                local_178 = local_f0;
                local_170 = local_120;
                goto LAB_0031c240;
              }
              if (local_1a4 != -0x616c231a) {
                if (local_1a4 == -0x60193b73) {
                  uVar2 = 0;
                  if (DAT_004bdbcc != 0) {
                    uVar2 = DAT_004bdbc8 / DAT_004bdbcc;
                  }
                  _objc_msgSend(param_4,local_a0,local_188);
                  local_c0 = _objc_retainAutoreleasedReturnValue();
                  local_c1 = _objc_msgSend(local_c0,local_a8,local_80);
                  bVar17 = ((uVar2 & 0x63e3978) + 0xccf8a791 | 0xf50a6473) == 0x7ddfc308;
                  local_1a4 = -0x6e1e6a27;
                  iVar18 = 0x20197705;
                  uVar20 = extraout_x1_00;
                  goto LAB_0031df84;
                }
                goto LAB_0031c240;
              }
              bVar17 = (DAT_004bdca0 * DAT_004bdca4 | 0xa87ef6e0U) == 0xb8759d0b;
              iVar18 = -0x3d3ac839;
              local_1a4 = 0x442dfddb;
            }
            goto LAB_0031f15c;
          }
          if (local_1a4 < -0x6ae624b2) {
            if (local_1a4 == -0x6fefb861) {
              _objc_msgSend(local_f0,PTR_s_setB_isCompleted__0048b940,local_150);
              _objc_release(local_150);
              _objc_msgSend(local_f0,PTR_s_updateLayoutsWithTryScroll_Reloa_0048b928,0,0);
              uVar20 = extraout_x1_23;
LAB_0031ea48:
              auVar22._8_8_ = uVar20;
              auVar22._0_8_ = lStack_88;
              local_1a4 = 0x6ddcec91;
            }
            else if (local_1a4 == -0x6e1e6a27) {
              _objc_msgSend(param_4,local_a0,local_188);
              uVar20 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar20,local_a8,local_80);
              auVar22._8_8_ = extraout_x1_04;
              auVar22._0_8_ = lStack_88;
              local_1a4 = -0x60193b73;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 == -0x6ae624b2) {
            local_1a4 = -0x22ae7c6c;
            goto LAB_0031c240;
          }
          if (local_1a4 != -0x6957af62) goto LAB_0031c240;
          bVar17 = local_10a == '\0';
          local_1a4 = -0x3e83ecf1;
          iVar18 = 0x71daceaf;
        }
LAB_0031edf8:
        if (bVar17) {
          local_1a4 = iVar18;
        }
        goto LAB_0031c240;
      }
      if (-0x50dd235b < local_1a4) {
        if (local_1a4 < -0x4cff5281) {
          if (local_1a4 < -0x4f2b097d) {
            if (local_1a4 == -0x50dd235a) {
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
              DAT_004bc36a = DAT_004bc34a ^ 0x24;
              DAT_004bc36b = DAT_004bc34b ^ 0x6f;
              DAT_004bc36c = DAT_004bc34c ^ 0x32;
              DAT_004bc36d = DAT_004bc34d ^ 0x65;
              DAT_004bc36e = DAT_004bc34e ^ 0x84;
              DAT_004bc36f = DAT_004bc34f ^ 0xc1;
              DAT_004bc370 = DAT_004bc350 ^ 0x40;
              DAT_004bc371 = DAT_004bc351 ^ 0x50;
              local_72 = DAT_004bc352;
              bVar17 = 0xc4c72397 <
                       ((DAT_004bdb68 ^ DAT_004bdb6c) / 0x135c3425 | 0x569965aa) * -0x2462d6ad;
              local_1a4 = 0xa25e808;
              iVar18 = -0x5d3c34d8;
              auVar21 = auVar6;
              goto LAB_0031f098;
            }
            if (local_1a4 == -0x4fe2631a) {
              uVar2 = ((DAT_004bdb50 | DAT_004bdb54) + 0x8755b23) / 0x14dbaced;
              bVar16 = uVar2 < 0x33f49f22;
              bVar17 = uVar2 == 0x33f49f21;
              local_1a4 = -0x356bf37e;
              iVar18 = 0x43e00b46;
              goto LAB_0031f100;
            }
          }
          else if (local_1a4 == -0x4f2b097d) {
            local_1a4 = -0x535ffd78;
            if (0x7291c0cd < (DAT_004bdb70 - DAT_004bdb74 & 0x331bd824U | 0x9d824)) {
              local_1a4 = -0x85e4b5f;
            }
          }
          else if (local_1a4 == -0x4eca02ff) {
            _objc_release(local_d0);
            auVar22._8_8_ = extraout_x1_10;
            auVar22._0_8_ = lStack_88;
            local_1a4 = 0x1493d6a0;
          }
        }
        else if (local_1a4 < -0x47a36866) {
          if (local_1a4 == -0x4cff5281) {
            _objc_release(param_3);
            auVar22._8_8_ = extraout_x1_25;
            auVar22._0_8_ = lStack_88;
            local_1a4 = -0x7db476bf;
          }
          else if (local_1a4 == -0x48bfbe94) {
            local_1a4 = 0x1d7758a8;
          }
        }
        else if (local_1a4 == -0x47a36866) {
          _objc_release(local_c0);
          auVar22._8_8_ = extraout_x1_22;
          auVar22._0_8_ = lStack_88;
          local_108 = local_188 + -1;
          local_1a4 = 0x5010db38;
        }
        else {
          if (local_1a4 == -0x47271d38) {
            bVar16 = 0x47949ffb < uVar1;
            bVar17 = uVar1 == 0x47949ffc;
            local_1a4 = 0x14b0e465;
            iVar18 = 0x798ba086;
            goto LAB_0031f100;
          }
          if (local_1a4 == -0x457fb594) {
            local_188 = lStack_158;
            local_180 = local_160;
            bVar17 = (uint)((ulong)(DAT_004bdbc0 & DAT_004bdbc4 ^ 0xb4b324fa) * 0x49090b5f >> 0x3e)
                     == 0xb666aaad;
            iVar18 = -0x60193b73;
            local_1a4 = -0x6e1e6a27;
LAB_0031e868:
            if (!bVar17) {
              local_1a4 = iVar18;
            }
          }
        }
        goto LAB_0031c240;
      }
      if (-0x59b2cb98 < local_1a4) {
        if (local_1a4 < -0x535ffd78) {
          if (local_1a4 == -0x59b2cb97) {
            bVar17 = (DAT_004bdcf0 + DAT_004bdcf4 + 0x28d446c5U) / 0x5122e47e == 0x1d1be6d;
            iVar18 = -0x22ae7c6c;
            local_1a4 = -0x6ae624b2;
            goto LAB_0031e868;
          }
          if (local_1a4 == -0x58143a41) {
            uVar2 = 0;
            if (DAT_004bdbd4 != 0) {
              uVar2 = DAT_004bdbd0 / DAT_004bdbd4;
            }
            local_1a4 = 0x526a5219;
            if ((byte)((ulong)(uVar2 | 0x5a572e6) * 0x2fb05ab >> 0x38) != 0x5733592d) {
              local_1a4 = -0xc4698bd;
            }
          }
        }
        else if (local_1a4 == -0x535ffd78) {
          uVar2 = 0;
          if (DAT_004bdb7c != 0) {
            uVar2 = DAT_004bdb78 / DAT_004bdb7c;
          }
          DAT_004bc375 = local_73;
          DAT_004bc376 = DAT_004bc356 ^ 0x70;
          local_1a4 = -0x78afb550;
          if (0x86f265a7 < (uVar2 + 0x942ab50f) / 0x62551469) {
            local_1a4 = -0x535ffd78;
          }
        }
        else if (local_1a4 == -0x530d19f8) {
          local_1a4 = -0x6650423a;
          if (local_e1 == '\0') {
            local_1a4 = 0x45d4debd;
          }
          local_170 = local_c0;
          local_168 = local_e0;
          local_178 = local_c0;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 < -0x5a59368d) {
        if (local_1a4 == -0x5d56fdfd) {
          uVar2 = DAT_004bdd08 & DAT_004bdd0c;
          _objc_release(local_1a0);
          _objc_release(local_198);
          auVar9._8_8_ = extraout_x1_16;
          auVar9._0_8_ = lStack_88;
          auVar22._8_8_ = extraout_x1_16;
          auVar22._0_8_ = lStack_88;
          local_1a4 = -0x5d56fdfd;
          if (uVar2 != 0x9d72ca67) {
            local_1a4 = -0x25fe60b8;
            auVar22 = auVar9;
          }
        }
        else if (local_1a4 == -0x5d3c34d8) {
          local_1a4 = -0x78f0dd38;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 == -0x5a59368d) {
        local_1a4 = 0x15597882;
        if (DAT_004bdc40 * DAT_004bdc44 * 0x30f6de29 != 0x4e56f27b) {
          local_1a4 = -0x3602d5d4;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 != -0x59bb756e) goto LAB_0031c240;
      uVar2 = 0;
      if (DAT_004bdc5c != 0) {
        uVar2 = DAT_004bdc58 / DAT_004bdc5c;
      }
      _objc_release(local_c0);
      _objc_release(local_c0);
      auVar21._8_8_ = extraout_x1_06;
      bVar17 = 0x84f7b334 < (uVar2 * -0x65fb0c89 ^ 0x6080100d | 0x9338a762);
      local_1a4 = -0x59bb756e;
      iVar18 = 0x7b695036;
      goto LAB_0031f098;
    }
    if (-0x255e5a8b < local_1a4) {
      if (local_1a4 < -0x169e5e67) {
        if (local_1a4 < -0x21ed6ea8) {
          if (local_1a4 < -0x23e59357) {
            if (local_1a4 == -0x255e5a8a) {
              local_1a4 = 0x4e79f74f;
            }
            else if (local_1a4 == -0x25383288) {
              bVar17 = (DAT_004bdc30 ^ DAT_004bdc34) * 0x42d4beaf == 0x460aef9b;
              iVar18 = 0x62b8cfe3;
              local_1a4 = 0x21a831ef;
              goto LAB_0031f15c;
            }
          }
          else if (local_1a4 == -0x23e59357) {
            local_1a4 = 0x78fb8c2d;
          }
          else if (local_1a4 == -0x22ae7c6c) {
            uVar2 = 0;
            if (DAT_004bdcfc != 0) {
              uVar2 = DAT_004bdcf8 / DAT_004bdcfc;
            }
            bVar17 = 0xee8f3f87 < (uVar2 + 0x584e5aec | 0x9d95a698) * -0x7ffcd5ff;
            iVar18 = -0x6ae624b2;
            local_1a4 = -0x61dcb62c;
            goto LAB_0031e7d0;
          }
        }
        else if (local_1a4 < -0x1cf43a28) {
          if (local_1a4 == -0x21ed6ea8) {
            local_1a4 = -0x169e5e67;
          }
          else if (local_1a4 == -0x1fd5068b) {
            uVar2 = (uint)((ulong)(DAT_004bdc78 ^ DAT_004bdc7c | 0x9c87fab4) * 0x60c9a48f >> 0x3e) +
                    0x84ff5b2d;
            bVar16 = 0xa0a81c02 < uVar2;
            bVar17 = uVar2 == 0xa0a81c03;
            local_1a4 = -0x1fd5068b;
            iVar18 = -0x6957af62;
            goto LAB_0031f100;
          }
        }
        else {
          if (local_1a4 == -0x1cf43a28) {
            bVar17 = (uint)((ulong)((DAT_004bdbb0 ^ DAT_004bdbb4) * -0x2556eb3b + 0xfb4d6d31) *
                            0x2d9d7d2b >> 0x3c) == 0x1b23babc;
            iVar18 = 0x65999b03;
            local_1a4 = 0x18ecf9bf;
            goto LAB_0031e868;
          }
          if (local_1a4 == -0x19257436) {
            local_1a4 = -0x758739f7;
          }
          else if (local_1a4 == -0x192d57d0) {
            return;
          }
        }
      }
      else if (local_1a4 < -0x11ccfd95) {
        if (local_1a4 < -0x149b1d13) {
          if (local_1a4 == -0x169e5e67) goto LAB_0031ea48;
          if ((local_1a4 == -0x16385b99) &&
             (local_1a4 = 0x6a59d45a,
             (uint)((ulong)((DAT_004bdcc0 - DAT_004bdcc4 | 0x1daed5dcU) >> 2) * 0x24fe5f15 >> 0x3b)
             < 0xae0dca0f)) {
            local_1a4 = -0x5d509ea;
          }
        }
        else {
          if (local_1a4 == -0x149b1d13) {
            local_a0 = PTR_s_objectAtIndexedSubscript__00489528;
            bVar17 = 0xb6c4dcc5 < ((DAT_004bdb98 | DAT_004bdb9c) + 0x8a4372eb ^ 0x1de93143);
            iVar18 = 0x2c96ebf5;
            goto LAB_0031e054;
          }
          if (local_1a4 == -0x142a36b9) {
            bVar17 = 0x6b05ec9d <
                     (DAT_004bdd18 + DAT_004bdd1c + 0x526890d5U & 0xdb2b015c | 0xd82b0040);
            local_1a4 = 0x167ead53;
            iVar18 = -0x192d57d0;
            goto LAB_0031f098;
          }
        }
      }
      else if (local_1a4 < -0xfaaa13f) {
        if (local_1a4 == -0x11ccfd95) {
          _objc_retain(local_c0,uVar20);
          auVar22._8_8_ = extraout_x1_13;
          auVar22._0_8_ = lStack_88;
          local_1a4 = -0x58143a41;
        }
        else if (local_1a4 == -0x112d60e4) {
          local_1a4 = -0x47a36866;
        }
      }
      else if (local_1a4 == -0xfaaa13f) {
        local_1a4 = -0x3ac3849f;
      }
      else if (local_1a4 == -0xf419dcb) {
        local_1a4 = 0x429d587f;
      }
      goto LAB_0031c240;
    }
    if (local_1a4 < -0x341271d4) {
      if (local_1a4 < -0x387b24f6) {
        if (local_1a4 < -0x3d3ac839) {
          if (local_1a4 == -0x42c594af) {
            local_1a4 = -0x1cf43a28;
          }
          else if (local_1a4 == -0x3e83ecf1) {
            _objc_release(param_4);
            auVar22._8_8_ = extraout_x1_01;
            auVar22._0_8_ = lStack_88;
            local_1a4 = -0x4cff5281;
          }
        }
        else if (local_1a4 == -0x3d3ac839) {
          _objc_msgSend(local_120,PTR_s_isEqualToString__00489d70,local_128);
          auVar22._8_8_ = extraout_x1_14;
          auVar22._0_8_ = lStack_88;
          local_1a4 = 0x442dfddb;
        }
        else if (local_1a4 == -0x3ac3849f) {
          local_f9 = 0 < local_190;
          local_1a4 = -0x25383288;
        }
      }
      else if (local_1a4 < -0x3602d5d4) {
        if (local_1a4 == -0x387b24f6) {
          local_1a4 = -0x149b1d13;
        }
        else if (local_1a4 == -0x3841fb9e) {
          bVar17 = 0xe02427bb <
                   ((DAT_004bdb90 ^ DAT_004bdb94) * -0x5d0bd43a | 0xc20445d2) + 0x857f3daa;
          iVar18 = -0x387b24f6;
LAB_0031e054:
          local_1a4 = -0x149b1d13;
          if (bVar17) {
            local_1a4 = iVar18;
          }
        }
      }
      else if (local_1a4 == -0x3602d5d4) {
        iVar18 = DAT_004bdc48 - DAT_004bdc4c;
        _objc_release(local_c0);
        auVar8._8_8_ = extraout_x1_15;
        auVar8._0_8_ = lStack_88;
        auVar22._8_8_ = extraout_x1_15;
        auVar22._0_8_ = lStack_88;
        local_1a4 = -0x3602d5d4;
        if (0xc5590d4c < ((iVar18 + 0x7211be67U) / 0x1e7028e7 ^ 0xf8db77a8)) {
          local_1a4 = -0x78e74e0e;
          auVar22 = auVar8;
        }
      }
      else if (local_1a4 == -0x356bf37e) {
        local_1a4 = -0x63bcd0cb;
      }
      goto LAB_0031c240;
    }
    if (local_1a4 < -0x2dd2cee5) {
      if (-0x32c6fca1 < local_1a4) {
        if (local_1a4 == -0x32c6fca0) {
          iVar18 = DAT_004bdcb8 * DAT_004bdcbc;
          local_138 = PTR__OBJC_CLASS___NSNumber_0048cc00;
          local_139 = _objc_msgSend(PTR_BubbleMessageMerge_0048cc98,PTR_s_merge__0048b938,local_f0);
          local_148 = PTR_s_numberWithBool__0048b600;
          bVar17 = (iVar18 + 0xe3f48150U & 0x3b63d32) * 0x7ed649e6 == -0x9c2c5a6;
          iVar18 = 0x2f23e83b;
          local_1a4 = 0x7f4334dd;
          uVar20 = extraout_x1_21;
          goto LAB_0031f15c;
        }
        if (local_1a4 == -0x32610e88) {
          uVar2 = DAT_004bdc98 & DAT_004bdc9c;
          _objc_msgSend(param_1,local_118,param_3);
          local_120 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(local_f0,PTR_s_messageWrap_0048b8c8);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(param_1,local_118,uVar20);
          local_128 = _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar20);
          bVar17 = (uVar2 * 0x58d7415f & 0x57a80196) == 0x7123047b;
          local_1a4 = 0x290cd50d;
          iVar18 = 0x5ad81c1e;
          uVar20 = extraout_x1_09;
          goto LAB_0031df84;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 != -0x341271d4) {
        if (local_1a4 == -0x334566e4) {
          uVar2 = (DAT_004bdce8 + DAT_004bdcec & 0x556f28U) + 0x2c5ff209 | 0x4567f5c1;
          _objc_release(local_128);
          bVar16 = 0xc13218a0 < uVar2;
          bVar17 = uVar2 == 0xc13218a1;
          local_1a4 = 0x774ea764;
          iVar18 = 0x6601d469;
          uVar20 = extraout_x1_03;
          goto LAB_0031f100;
        }
        goto LAB_0031c240;
      }
      bVar17 = local_129 == '\0';
      iVar18 = -0x7dea3e2c;
      local_1a4 = 0x3fe0deca;
    }
    else {
      if (local_1a4 < -0x2b3d5650) {
        if (local_1a4 == -0x2dd2cee5) {
          local_1a4 = 0x353cded;
        }
        else if (local_1a4 == -0x2d7eaf3d) {
          uVar2 = (DAT_004bdb48 - DAT_004bdb4c & 0xa1f51be4U) * -0x16536547;
          local_71 = local_70 == 0;
          bVar16 = 0xd50c0b3e < uVar2;
          bVar17 = uVar2 == 0xd50c0b3f;
          local_1a4 = -0x8e3e80a;
          iVar18 = 0x5dcc5672;
LAB_0031f100:
          auVar10._8_8_ = uVar20;
          auVar10._0_8_ = lStack_88;
          auVar22._8_8_ = uVar20;
          auVar22._0_8_ = lStack_88;
          if (!bVar16 || bVar17) {
            local_1a4 = iVar18;
            auVar22 = auVar10;
          }
        }
        goto LAB_0031c240;
      }
      if (local_1a4 != -0x2b3d5650) {
        if (local_1a4 == -0x27617645) {
          bVar17 = 0xcf553f5f <
                   ((DAT_004bdc00 | DAT_004bdc04) * -0x65f0f9cb + 0x3ef7e1b4) / 0xe52b94;
          local_1a4 = -0x2b3d5650;
          iVar18 = 0x1bc66526;
          auVar21 = auVar7;
          goto LAB_0031f098;
        }
        if (local_1a4 == -0x25fe60b8) {
          local_1a4 = -0x3e83ecf1;
        }
        goto LAB_0031c240;
      }
      local_e1 = -1 < local_e0;
      bVar17 = (DAT_004bdc08 + DAT_004bdc0c & 0x450e1120U) == 0x1f126ba1;
      iVar18 = -0x2b3d5650;
      local_1a4 = -0x255e5a8a;
    }
  }
  else {
    if (local_1a4 < 0x433dfc14) {
      if (0x167ead52 < local_1a4) {
        if (local_1a4 < 0x2ba04a42) {
          if (0x1d7758a7 < local_1a4) {
            if (local_1a4 < 0x21a831ef) {
              if (local_1a4 == 0x1d7758a8) {
                local_1a4 = 0x1d7758a8;
                if ((DAT_004bdc18 ^ DAT_004bdc1c) != 0x16a9ef56) {
                  local_1a4 = -0x530d19f8;
                }
              }
              else if (local_1a4 == 0x20197705) {
                bVar17 = local_c1 == '\0';
                iVar18 = -0x47a36866;
                local_1a4 = -0x11ccfd95;
                goto LAB_0031f15c;
              }
            }
            else if (local_1a4 == 0x21a831ef) {
              local_1a4 = -0x786b0d76;
            }
            else if (local_1a4 == 0x290cd50d) {
              _objc_msgSend(param_1,local_118,param_3);
              _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(local_f0,PTR_s_messageWrap_0048b8c8);
              uVar20 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(param_1,local_118,uVar20);
              _objc_retainAutoreleasedReturnValue();
              _objc_release(uVar20);
              auVar22._8_8_ = extraout_x1_07;
              auVar22._0_8_ = lStack_88;
              local_1a4 = -0x32610e88;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 < 0x1bc66526) {
            if (local_1a4 == 0x167ead53) {
              local_1a4 = -0x142a36b9;
            }
            else if (local_1a4 == 0x18ecf9bf) {
              local_1a4 = 0x65999b03;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 == 0x1bc66526) {
            local_1a4 = -0x2b3d5650;
            goto LAB_0031c240;
          }
          if (local_1a4 != 0x1c5275b7) goto LAB_0031c240;
          uVar2 = (DAT_004bdc90 & DAT_004bdc94) / 0x321bed75 & 0xfffffffb | 0x50002449;
          bVar16 = 0x6eccf7dd < uVar2;
          bVar17 = uVar2 == 0x6eccf7de;
          iVar18 = -0x32610e88;
          local_1a4 = 0x290cd50d;
        }
        else {
          if (local_1a4 < 0x302ee4cb) {
            if (local_1a4 < 0x2f23e83b) {
              if (local_1a4 == 0x2ba04a42) {
                local_1a4 = -0x457fb594;
                local_160 = lStack_88;
                lStack_158 = local_90;
              }
              else if (local_1a4 == 0x2c96ebf5) {
                local_1a4 = 0x135e56d2;
              }
            }
            else if (local_1a4 == 0x2f23e83b) {
              _objc_msgSend(PTR_BubbleMessageMerge_0048cc98,PTR_s_merge__0048b938,local_f0);
              auVar22._8_8_ = extraout_x1_28;
              auVar22._0_8_ = lStack_88;
              local_1a4 = -0x32c6fca0;
            }
            else if (local_1a4 == 0x2f26cf41) {
              local_e0 = local_180 + -2;
              bVar17 = true;
              local_1a4 = 0x70a059e0;
              iVar18 = 0x433dfc14;
              auVar21 = auVar5;
              goto LAB_0031f098;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 < 0x3c4189ef) {
            if (local_1a4 == 0x302ee4cb) {
              local_80 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc760);
              auVar22 = _objc_msgSend(param_4,PTR_s_count_00489538);
              local_90 = auVar22._0_8_ + -1;
              local_91 = -1 < local_90;
              local_1a4 = 0x5ba73a47;
            }
            else if (local_1a4 == 0x3a675abd) {
              bVar17 = (DAT_004bdbf0 | DAT_004bdbf4 | 0x9663b70c) == 0xc0400480;
              local_1a4 = 0x70a059e0;
              iVar18 = 0x2f26cf41;
LAB_0031df84:
              auVar12._8_8_ = uVar20;
              auVar12._0_8_ = lStack_88;
              auVar22._8_8_ = uVar20;
              auVar22._0_8_ = lStack_88;
              if (!bVar17) {
                local_1a4 = iVar18;
                auVar22 = auVar12;
              }
            }
            goto LAB_0031c240;
          }
          if (local_1a4 == 0x3c4189ef) {
            DAT_004d1b44 = 1;
            local_1a4 = -0x78506db0;
            goto LAB_0031c240;
          }
          if (local_1a4 != 0x3fe0deca) {
            if (local_1a4 == 0x429d587f) {
              bVar17 = 0xaa7426b3 < (DAT_004bdbe0 + DAT_004bdbe4 & 0x905d4070U ^ 0x10ca4040);
              iVar18 = -0x4eca02ff;
              local_1a4 = 0x1493d6a0;
              goto LAB_0031e7d0;
            }
            goto LAB_0031c240;
          }
          uVar2 = DAT_004bdcb0 * DAT_004bdcb4 + 0x374a9a00U & 0x44620a0;
          bVar16 = 0x315b8f26 < uVar2;
          bVar17 = uVar2 == 0x315b8f27;
          iVar18 = -0x32c6fca0;
          local_1a4 = 0x2f23e83b;
        }
LAB_0031f1a8:
        auVar14._8_8_ = uVar20;
        auVar14._0_8_ = lStack_88;
        auVar22._8_8_ = uVar20;
        auVar22._0_8_ = lStack_88;
        if (!bVar16 || bVar17) {
          local_1a4 = iVar18;
          auVar22 = auVar14;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 < 0x608e142) {
        if (local_1a4 < -0x5d509ea) {
          if (local_1a4 < -0x85e4b5f) {
            if (local_1a4 == -0xc4698bd) {
              uVar2 = DAT_004bdbd8 | DAT_004bdbdc;
              _objc_msgSend(local_c0,local_b0);
              local_d0 = _objc_retainAutoreleasedReturnValue();
              iVar18 = _objc_msgSend(local_d0,local_b8);
              iVar19 = _objc_msgSend(param_3,local_b8);
              auVar11._8_8_ = extraout_x1_18;
              auVar11._0_8_ = lStack_88;
              auVar22._8_8_ = extraout_x1_18;
              auVar22._0_8_ = lStack_88;
              local_d1 = iVar18 == iVar19;
              local_1a4 = -0xc4698bd;
              if (0x483d80cd < (uVar2 & 0xb4804020) + 0xf3b90fc4) {
                local_1a4 = -0xf419dcb;
                auVar22 = auVar11;
              }
            }
            else if (local_1a4 == -0x8e3e80a) {
              local_1a4 = -0x2d7eaf3d;
            }
          }
          else if (local_1a4 == -0x85e4b5f) {
            DAT_004bc375 = local_73;
            DAT_004bc376 = DAT_004bc356 ^ 0x70;
            local_1a4 = -0x535ffd78;
          }
          else if (local_1a4 == -0x6fe5551) {
            bVar17 = 0xaf2c1ea2 < (uint)(DAT_004bdc20 + DAT_004bdc24) / 0x42a9a3f4 + 0xd4618a4a;
            iVar18 = 0x5481a8bf;
            local_1a4 = 0x79034115;
            goto LAB_0031e7d0;
          }
          goto LAB_0031c240;
        }
        if (0x353cdec < local_1a4) {
          if (local_1a4 == 0x353cded) {
            bVar17 = (DAT_004bdc70 ^ DAT_004bdc74) * 0x521f861e == -0xfd808a8;
            iVar18 = -0x1fd5068b;
            local_1a4 = 0x6488c930;
            goto LAB_0031e868;
          }
          if (local_1a4 == 0x4244760) {
            local_1a4 = -0x3e83ecf1;
            if (local_109 == '\0') {
              local_1a4 = -0x457fb594;
            }
            lStack_158 = local_108;
            local_160 = local_188;
          }
          goto LAB_0031c240;
        }
        if (local_1a4 != -0x5d509ea) {
          if (local_1a4 == 0x2075ac8) {
            local_1a4 = 0x1c5275b7;
          }
          goto LAB_0031c240;
        }
        uVar2 = DAT_004bdcc8 ^ DAT_004bdccc;
        _objc_msgSend(local_138,local_148,local_139);
        auVar21 = _objc_retainAutoreleasedReturnValue();
        bVar17 = 0x9f2973de < (uVar2 ^ 0x45aed57) * 0x168e4a70;
        local_1a4 = 0x6a59d45a;
        iVar18 = -0x21ed6ea8;
      }
      else if (local_1a4 < 0x135e56d2) {
        if (local_1a4 < 0xc8ab894) {
          if (local_1a4 == 0x608e142) {
            uVar2 = 0;
            if (DAT_004bdc54 != 0) {
              uVar2 = DAT_004bdc50 / DAT_004bdc54;
            }
            bVar17 = uVar2 == 0x2dde3628;
            local_1a4 = -0x59bb756e;
            iVar18 = 0x5358e8f3;
            goto LAB_0031edf8;
          }
          if (local_1a4 == 0xa25e808) {
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
            DAT_004bc36a = DAT_004bc34a ^ 0x24;
            DAT_004bc36b = DAT_004bc34b ^ 0x6f;
            DAT_004bc36c = DAT_004bc34c ^ 0x32;
            DAT_004bc36d = DAT_004bc34d ^ 0x65;
            DAT_004bc36e = DAT_004bc34e ^ 0x84;
            DAT_004bc36f = DAT_004bc34f ^ 0xc1;
            DAT_004bc370 = DAT_004bc350 ^ 0x40;
            DAT_004bc371 = DAT_004bc351 ^ 0x50;
            local_1a4 = -0x50dd235a;
          }
          goto LAB_0031c240;
        }
        if (local_1a4 == 0xc8ab894) {
          local_1a4 = -0x7dea3e2c;
          goto LAB_0031c240;
        }
        if (local_1a4 != 0x10926d01) goto LAB_0031c240;
        local_10a = local_f0 == 0;
        bVar17 = 0x9d21cac8 < ((DAT_004bdc68 | DAT_004bdc6c) * 0x3d9e5ffc | 0x5fac6506);
        local_1a4 = 0x4a37a71d;
        iVar18 = -0x2dd2cee5;
        auVar21 = auVar4;
      }
      else {
        if (0x1493d69f < local_1a4) {
          if (local_1a4 == 0x1493d6a0) {
            uVar2 = DAT_004bdbe8 ^ DAT_004bdbec;
            _objc_release(local_d0);
            uVar2 = (uVar2 * -0x455b8adf | 0x1c6a9b48) / 0x765d2a83;
            bVar16 = uVar2 < 0x41704b14;
            bVar17 = uVar2 == 0x41704b13;
            iVar18 = -0x4eca02ff;
            local_1a4 = 0x4be61fb8;
            uVar20 = extraout_x1_26;
            goto LAB_0031f1a8;
          }
          if (local_1a4 == 0x14b0e465) {
            local_70 = DAT_004d1b44;
            local_1a4 = -0x19257436;
          }
          else if (local_1a4 == 0x15597882) {
            _objc_release(local_c0);
            auVar22._8_8_ = extraout_x1;
            auVar22._0_8_ = lStack_88;
            local_1a4 = -0x3602d5d4;
          }
          goto LAB_0031c240;
        }
        if (local_1a4 != 0x135e56d2) {
          if (local_1a4 == 0x143a587d) {
            _objc_release(local_1a0);
            _objc_release(local_198);
            uVar20 = extraout_x1_12;
            goto LAB_0031de9c;
          }
          goto LAB_0031c240;
        }
        bVar17 = 0x33d9522c <
                 (((DAT_004bdba0 + DAT_004bdba4 | 0x4010082U) ^ 0x50000804) & 0x752508e6);
        local_1a4 = 0x78fb8c2d;
        iVar18 = -0x23e59357;
        auVar21 = auVar3;
      }
LAB_0031f098:
      auVar13._8_8_ = auVar21._8_8_;
      auVar13._0_8_ = lStack_88;
      auVar22._8_8_ = auVar21._8_8_;
      auVar22._0_8_ = lStack_88;
      local_150 = auVar21._0_8_;
      if (bVar17) {
        local_1a4 = iVar18;
        auVar22 = auVar13;
      }
      goto LAB_0031c240;
    }
    if (0x5e25d7fd < local_1a4) {
      if (local_1a4 < 0x70a059e0) {
        if (local_1a4 < 0x6601d469) {
          if (local_1a4 < 0x6488c930) {
            if (local_1a4 == 0x5e25d7fe) {
              uVar2 = (DAT_004bdc60 - DAT_004bdc64 & 0xa36839c4U) / 0x14fc2b29 | 0xfe376bd8;
              bVar16 = 0xec18ff0f < uVar2;
              bVar17 = uVar2 == 0xec18ff10;
              iVar18 = 0x4a37a71d;
              local_1a4 = 0x10926d01;
              goto LAB_0031f1a8;
            }
            if (local_1a4 == 0x62b8cfe3) {
              local_1a4 = 0x21a831ef;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 == 0x6488c930) {
            local_1a4 = -0x1fd5068b;
            goto LAB_0031c240;
          }
          if (local_1a4 != 0x65999b03) goto LAB_0031c240;
          bVar17 = 0x95c6e120 <
                   (uint)((ulong)((DAT_004bdbb8 | DAT_004bdbbc) ^ 0x80b0062 | 0xe1b4f79c) *
                          0x353d875d >> 0x3d);
          iVar18 = 0x65999b03;
          local_1a4 = 0x2ba04a42;
        }
        else {
          if (local_1a4 < 0x6bead7d5) {
            if (local_1a4 == 0x6601d469) {
              local_1a4 = -0x59b2cb97;
            }
            else if (local_1a4 == 0x6a59d45a) {
              _objc_msgSend(local_138,local_148,local_139);
              _objc_retainAutoreleasedReturnValue();
              auVar22._8_8_ = extraout_x1_02;
              auVar22._0_8_ = lStack_88;
              local_1a4 = -0x5d509ea;
            }
            goto LAB_0031c240;
          }
          if (local_1a4 != 0x6bead7d5) {
            if (local_1a4 == 0x6ddcec91) {
              uVar2 = DAT_004bdcd8 - DAT_004bdcdc;
              _objc_msgSend(local_f0,PTR_s_setB_isCompleted__0048b940,local_150);
              _objc_release(local_150);
              _objc_msgSend(local_f0,PTR_s_updateLayoutsWithTryScroll_Reloa_0048b928,0,0);
              bVar17 = (uVar2 ^ 0x402ec20 | 0x2b1013db) == 0xf505debf;
              local_1a4 = -0x6fefb861;
              iVar18 = 0xc8ab894;
              uVar20 = extraout_x1_08;
              goto LAB_0031df84;
            }
            goto LAB_0031c240;
          }
          uVar2 = 0;
          if (DAT_004bdb64 != 0) {
            uVar2 = DAT_004bdb60 / DAT_004bdb64;
          }
          bVar17 = 0xb933930d < ((uVar2 + 0x613fa114) / 0x280613ec | 0xc9fbcf65);
          iVar18 = -0x50dd235a;
          local_1a4 = 0xa25e808;
        }
      }
      else {
        if (0x79034114 < local_1a4) {
          if (local_1a4 < 0x7abbe106) {
            if (local_1a4 == 0x79034115) {
              _objc_release(local_f0);
              auVar22._8_8_ = extraout_x1_30;
              auVar22._0_8_ = lStack_88;
              local_1a4 = 0x5481a8bf;
            }
            else if (local_1a4 == 0x798ba086) {
              local_1a4 = 0x14b0e465;
            }
          }
          else if (local_1a4 == 0x7abbe106) {
            local_1a4 = 0x5add01b5;
          }
          else if (local_1a4 == 0x7b695036) {
            local_1a4 = 0x5e25d7fe;
          }
          else if (local_1a4 == 0x7f4334dd) {
            local_1a4 = -0x16385b99;
          }
          goto LAB_0031c240;
        }
        if (local_1a4 < 0x774ea764) {
          if (local_1a4 == 0x70a059e0) {
            local_1a4 = 0x2f26cf41;
          }
          else if (local_1a4 == 0x71daceaf) {
            bVar17 = ((uint)(DAT_004bdc80 - DAT_004bdc84) / 0x35aab9e2 & 4) == 0xf8963e75;
            iVar18 = 0x7abbe106;
            local_1a4 = 0x5add01b5;
            goto LAB_0031f15c;
          }
          goto LAB_0031c240;
        }
        if (local_1a4 == 0x774ea764) {
          _objc_release(local_128);
          auVar22._8_8_ = extraout_x1_29;
          auVar22._0_8_ = lStack_88;
          local_1a4 = -0x334566e4;
          goto LAB_0031c240;
        }
        if (local_1a4 != 0x78fb8c2d) goto LAB_0031c240;
        local_a8 = PTR_s_isKindOfClass__00489c00;
        local_b0 = PTR_s_messageWrap_0048b8c8;
        local_b8 = PTR_s_m_uiMesLocalID_0048b880;
        bVar17 = 0xe85cb85a <
                 (((DAT_004bdba8 ^ DAT_004bdbac) * 0x808e52b ^ 0xb030141c) & 0xb4345d1f);
        iVar18 = 0x78fb8c2d;
        local_1a4 = -0x42c594af;
      }
LAB_0031e7d0:
      if (bVar17) {
        local_1a4 = iVar18;
      }
      goto LAB_0031c240;
    }
    if (local_1a4 < 0x5010db38) {
      if (local_1a4 < 0x4a37a71d) {
        if (local_1a4 < 0x442dfddb) {
          if (local_1a4 == 0x433dfc14) {
            local_1a4 = -0x27617645;
          }
          else if (local_1a4 == 0x43e00b46) {
            local_1a4 = -0x356bf37e;
          }
        }
        else {
          if (local_1a4 == 0x442dfddb) {
            uVar2 = DAT_004bdca8 + DAT_004bdcac;
            local_129 = _objc_msgSend(local_120,PTR_s_isEqualToString__00489d70,local_128);
            auVar21._8_8_ = extraout_x1_19;
            bVar17 = 0x48058b9a < (uVar2 & 0xf9fe979e | 0xd9ae979e);
            local_1a4 = -0x3d3ac839;
            iVar18 = -0x341271d4;
            goto LAB_0031f098;
          }
          if (local_1a4 == 0x45d4debd) {
            local_1a0 = local_170;
            local_198 = local_178;
LAB_0031de9c:
            auVar22._8_8_ = uVar20;
            auVar22._0_8_ = lStack_88;
            local_1a4 = -0x5d56fdfd;
          }
        }
        goto LAB_0031c240;
      }
      if (0x4d50e405 < local_1a4) {
        if (local_1a4 == 0x4d50e406) {
          _NSClassFromString(&PTR____CFConstantStringClassReference_004bc760);
          _objc_msgSend(param_4,PTR_s_count_00489538);
          auVar22._8_8_ = extraout_x1_20;
          auVar22._0_8_ = lStack_88;
          local_1a4 = 0x302ee4cb;
        }
        else if (local_1a4 == 0x4e79f74f) {
          local_1a4 = 0x1d7758a8;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 == 0x4a37a71d) {
        local_1a4 = 0x10926d01;
        goto LAB_0031c240;
      }
      if (local_1a4 != 0x4be61fb8) goto LAB_0031c240;
      bVar17 = local_d1 == '\0';
      iVar18 = -0x5a59368d;
      local_1a4 = 0x3a675abd;
    }
    else if (local_1a4 < 0x5ad81c1e) {
      if (local_1a4 < 0x5358e8f3) {
        if (local_1a4 == 0x5010db38) {
          local_109 = local_188 == 0;
          local_1a4 = 0x4244760;
        }
        else if (local_1a4 == 0x526a5219) {
          _objc_msgSend(local_c0,local_b0);
          uVar20 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar20,local_b8);
          _objc_msgSend(param_3,local_b8);
          auVar22._8_8_ = extraout_x1_05;
          auVar22._0_8_ = lStack_88;
          local_1a4 = -0xc4698bd;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 == 0x5358e8f3) {
        _objc_release(local_c0);
        _objc_release(local_c0);
        auVar22._8_8_ = extraout_x1_27;
        auVar22._0_8_ = lStack_88;
        local_1a4 = -0x59bb756e;
        goto LAB_0031c240;
      }
      if (local_1a4 != 0x5481a8bf) goto LAB_0031c240;
      uVar2 = DAT_004bdc28 + DAT_004bdc2c;
      _objc_release(local_f0);
      local_f8 = local_190 + -1;
      bVar17 = (uVar2 & 0x1fd963ed | 0x1bd962e1) == 0xb4f49720;
      iVar18 = 0x5481a8bf;
      local_1a4 = -0xfaaa13f;
      uVar20 = extraout_x1_11;
    }
    else {
      if (local_1a4 < 0x5ba73a47) {
        if (local_1a4 == 0x5ad81c1e) {
          local_1a4 = -0x616c231a;
        }
        else if (local_1a4 == 0x5add01b5) {
          uVar2 = (DAT_004bdc88 & DAT_004bdc8c | 0x2828e942) * -0x41b52edc + 0xd2bcef48;
          local_118 = PTR_s_senderUser__0048b8a0;
          bVar16 = 0x10ee676b < uVar2;
          bVar17 = uVar2 == 0x10ee676c;
          iVar18 = 0x7abbe106;
          local_1a4 = 0x2075ac8;
          goto LAB_0031f1a8;
        }
        goto LAB_0031c240;
      }
      if (local_1a4 == 0x5ba73a47) {
        bVar17 = local_91 == '\0';
        iVar18 = -0x3e83ecf1;
        local_1a4 = -0x3841fb9e;
      }
      else {
        if (local_1a4 != 0x5c223a6a) {
          if (local_1a4 == 0x5dcc5672) {
            local_1a4 = -0x4fe2631a;
          }
          goto LAB_0031c240;
        }
        bVar17 = DAT_004bdb80 - DAT_004bdb84 == -0x791ed4db;
        iVar18 = 0x4d50e406;
        local_1a4 = 0x302ee4cb;
      }
    }
  }
LAB_0031f15c:
  auVar15._8_8_ = uVar20;
  auVar15._0_8_ = lStack_88;
  auVar22._8_8_ = uVar20;
  auVar22._0_8_ = lStack_88;
  if (bVar17) {
    local_1a4 = iVar18;
    auVar22 = auVar15;
  }
  goto LAB_0031c240;
}



// #####################################
// ##### +[scheduleUpdateNodes:scroll:] @ 0030c71c
// #####################################

/* Function Stack Size: 0x1c bytes */

void BubbleMessageMerge::scheduleUpdateNodes_scroll_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  uint uVar1;
  undefined *puVar2;
  int local_6c;
  
  puVar2 = PTR_s_updateAllNodes_scroll__0048b8f0;
  local_6c = -0x2a7d7d06;
  do {
    while( true ) {
      while( true ) {
        while (local_6c < -0x2a7d7d06) {
          if (local_6c < -0x4763960e) {
            if (local_6c == -0x6d31b9d8) {
              local_6c = -0x1d228fd4;
              if ((DAT_004bd2c8 ^ DAT_004bd2cc) * -0x2d1fb8c9 + 0x8f6598f2 < 0x6f8be316) {
                local_6c = -0x6d31b9d8;
              }
            }
            else if (local_6c == -0x4b3ffa0a) {
              local_6c = -0x4763960e;
            }
          }
          else if ((local_6c == -0x4763960e) || (local_6c == -0x3e58bbfc)) {
            local_6c = -0x6d31b9d8;
          }
        }
        if (local_6c < -0xb86491a) break;
        if (local_6c == -0xb86491a) {
          uVar1 = DAT_004bd2b8 - DAT_004bd2bc;
          updateAllNodes_scroll_(param_1,(SEL)puVar2,param_3,param_4);
          local_6c = -0x3a02a28;
          if (((uVar1 ^ 0x80050830) & 0xc017dbba) != 0x910c8134) {
            local_6c = -0x4b3ffa0a;
          }
        }
        else if (local_6c == -0x3a02a28) {
          updateAllNodes_scroll_(param_1,(SEL)puVar2,param_3,param_4);
          local_6c = -0xb86491a;
        }
      }
      if (local_6c != -0x2a7d7d06) break;
      uVar1 = 0;
      if (DAT_004bd2b4 != 0) {
        uVar1 = DAT_004bd2b0 / DAT_004bd2b4;
      }
      local_6c = -0xb86491a;
      if ((uVar1 * -0x51d77660 + 0xc6afbada | 0x67bf90ea) == 0xbd59d45d) {
        local_6c = -0x3a02a28;
      }
    }
  } while (local_6c != -0x1d228fd4);
  return;
}



// #####################################
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
// ##### +[senderUser:] @ 002ff2a0
// #####################################

/* Function Stack Size: 0x18 bytes */

ID BubbleMessageMerge::senderUser_(ID param_1,SEL param_2,ID param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined8 uVar7;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  int iVar8;
  int local_84;
  ID local_80;
  undefined *local_78;
  byte local_6b;
  byte local_6a;
  char local_69;
  int local_68;
  
  uVar1 = 0;
  if (DAT_004bca44 != 0) {
    uVar1 = DAT_004bca40 / DAT_004bca44;
  }
  local_84 = -0x187f6398;
LAB_002ff35c:
  puVar3 = PTR_s_m_nsFromUsr_0048b860;
  iVar6 = -0x7c2e2a2c;
  if (local_84 < 0xd199c4) {
    if (local_84 < -0x3092fe5f) {
      if (-0x54924658 < local_84) {
        if (local_84 < -0x43ddd508) {
          if (local_84 == -0x54924657) {
            uVar2 = 0;
            if (DAT_004bca54 != 0) {
              uVar2 = DAT_004bca50 / DAT_004bca54;
            }
            uVar2 = (uVar2 ^ 0x88b54449) * -0x21337d31;
            bVar4 = 0x69bd3421 < uVar2;
            bVar5 = uVar2 == 0x69bd3422;
            iVar8 = -0x5d8c29ea;
            iVar6 = 0x742f7bdf;
LAB_002ffb0c:
            if (!bVar4 || bVar5) {
              iVar6 = iVar8;
            }
            goto LAB_002ffc9c;
          }
          if (local_84 == -0x544ce8fb) {
            bVar5 = local_69 == '\0';
            iVar8 = 0x137d5d86;
            iVar6 = 0x24a2d44d;
            goto LAB_002ff9b0;
          }
        }
        else {
          if (local_84 == -0x3dee06a2) {
            iVar6 = -0x35725bf;
            if (0xeffb3633 < ((DAT_004bca60 ^ DAT_004bca64) * -0x33fcb947 + 0x9768d535 & 0x64678ac5)
               ) {
              iVar6 = 0x7c34dbe9;
            }
            goto LAB_002ffc9c;
          }
          if (local_84 == -0x43ddd508) {
            return local_80;
          }
        }
        goto LAB_002ff35c;
      }
      if (local_84 < -0x5d8c29ea) {
        if (local_84 != -0x7c2e2a2c) {
          if (local_84 == -0x6bb3da0e) {
            uVar2 = 0;
            if (DAT_004bca9c != 0) {
              uVar2 = DAT_004bca98 / DAT_004bca9c;
            }
            uVar2 = (uVar2 | 0x144ed425) * -0x35ab7474 ^ 0x76147213;
            uVar7 = _objc_retain(param_3,param_2);
            _objc_msgSend(uVar7,puVar3);
            uVar7 = _objc_retainAutoreleasedReturnValue();
            iVar6 = _objc_msgSend(uVar7,PTR_s_hasSuffix__0048aba8,
                                  &PTR____CFConstantStringClassReference_004bc2e0);
            _objc_release(uVar7);
            local_78 = PTR_s_m_nsRealChatUsr_0048b868;
            if (iVar6 == 0) {
              local_78 = puVar3;
            }
            bVar4 = 0x119ddb05 < uVar2;
            bVar5 = uVar2 == 0x119ddb06;
            iVar8 = -0x6bb3da0e;
            iVar6 = 0x66be10fd;
            param_2 = extraout_x1;
            goto LAB_002ffb0c;
          }
          goto LAB_002ff35c;
        }
        DAT_004d1b20 = 1;
        if (0x6c3d2b75 < (DAT_004bca88 * DAT_004bca8c + 0xa68ce508U ^ 0x5313a4c3) + 0x64b73e34) {
          iVar6 = 0x58536f87;
        }
      }
      else {
        if (local_84 != -0x5d8c29ea) {
          if (local_84 == -0x5a5cf5b6) {
            local_69 = local_68 == 0;
            iVar6 = -0x54924657;
            goto LAB_002ffc9c;
          }
          goto LAB_002ff35c;
        }
        bVar5 = ((DAT_004bca58 & DAT_004bca5c) / 0x150c9834 | 0xf85629eb) == 0x81bbccc9;
        iVar8 = 0x742f7bdf;
        iVar6 = -0x544ce8fb;
LAB_002ff9b0:
        if (bVar5) {
          iVar6 = iVar8;
        }
      }
    }
    else if (local_84 < -0x16fbe3cb) {
      if (local_84 == -0x3092fe5f) {
        DAT_004bc2d3 = local_6b ^ 0x84;
        iVar6 = -0x3092fe5f;
        if (((DAT_004bca78 + DAT_004bca7c) * -0x6d88102b | 0xcd0bc7efU) + 0x1a08119a < 0xe8d5ea09) {
          iVar6 = 0x80a465d;
        }
      }
      else if (local_84 == -0x1a4f1004) {
        iVar6 = 0x65684b86;
      }
      else {
        if (local_84 != -0x187f6398) goto LAB_002ff35c;
        iVar6 = 0x65684b86;
        if (0x24ac3808 < ((uVar1 & 0xcb229eb) + 0x16037104 & 0xe81e386)) {
          iVar6 = -0x1a4f1004;
        }
      }
    }
    else if (local_84 < -0x35725bf) {
      if (local_84 != -0x16fbe3cb) {
        if (local_84 == -0x63c74ec) {
          DAT_004bc2d3 = local_6b ^ 0x84;
          goto LAB_002ff6b8;
        }
        goto LAB_002ff35c;
      }
      DAT_004d1b20 = 1;
      iVar6 = -0x7c2e2a2c;
    }
    else {
      if (local_84 != -0x35725bf) {
        if (local_84 == 0x2bc3ba) {
          iVar6 = 0x94d409d;
          goto LAB_002ffc9c;
        }
        goto LAB_002ff35c;
      }
      DAT_004bc2d1 = local_6a ^ 0x23;
      DAT_004bc2d2 = DAT_004bc2c8 ^ 0xd;
      local_6b = DAT_004bc2c9;
      iVar6 = 0x2bc3ba;
      if (DAT_004bca68 * DAT_004bca6c == 0x79b1db14) {
        iVar6 = -0x35725bf;
      }
    }
  }
  else if (local_84 < 0x3762c04b) {
    if (local_84 < 0x137d5d86) {
      if (local_84 == 0xd199c4) {
        iVar6 = 0x7f723739;
        if ((DAT_004bcaa0 - DAT_004bcaa4) * 0x74d80b20 == 0x522c6a07) {
          iVar6 = 0x6f52f429;
        }
      }
      else {
        iVar6 = 0x137d5d86;
        if (local_84 != 0x80a465d) {
          if (local_84 != 0x94d409d) goto LAB_002ff35c;
LAB_002ff6b8:
          iVar6 = -0x3092fe5f;
        }
      }
    }
    else if (local_84 < 0x24aeee18) {
      if (local_84 == 0x137d5d86) {
        if ((DAT_004bca80 ^ DAT_004bca84) == 0xa21c5d01) {
          iVar6 = -0x16fbe3cb;
        }
      }
      else {
        if (local_84 != 0x24a2d44d) goto LAB_002ff35c;
        DAT_004bc2ca = DAT_004bc2c0 ^ 0xcd;
        DAT_004bc2cb = DAT_004bc2c1 ^ 0x9d;
        DAT_004bc2cc = DAT_004bc2c2 ^ 0x93;
        DAT_004bc2cd = DAT_004bc2c3 ^ 0x37;
        DAT_004bc2ce = DAT_004bc2c4 ^ 0x2d;
        DAT_004bc2cf = DAT_004bc2c5 ^ 10;
        DAT_004bc2d0 = DAT_004bc2c6 ^ 0xd7;
        local_6a = DAT_004bc2c7;
        iVar6 = -0x3dee06a2;
      }
    }
    else if (local_84 == 0x24aeee18) {
      uVar7 = _objc_retain(param_3,param_2);
      _objc_msgSend(uVar7,puVar3);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_msgSend(uVar7,PTR_s_hasSuffix__0048aba8,&PTR____CFConstantStringClassReference_004bc2e0)
      ;
      _objc_release(uVar7);
      param_2 = extraout_x1_01;
      iVar6 = -0x6bb3da0e;
    }
    else {
      if (local_84 != 0x307b64eb) goto LAB_002ff35c;
      iVar6 = -0x5a5cf5b6;
    }
  }
  else if (local_84 < 0x6f52f429) {
    if (local_84 < 0x65684b86) {
      if (local_84 == 0x3762c04b) {
        uVar2 = 0;
        if (DAT_004bca94 != 0) {
          uVar2 = DAT_004bca90 / DAT_004bca94;
        }
        uVar2 = (uVar2 | 0x6345547) + 0x1fce68f & 0x58e4f444;
        bVar4 = 0xd705f632 < uVar2;
        bVar5 = uVar2 == 0xd705f633;
        iVar8 = -0x6bb3da0e;
        iVar6 = 0x24aeee18;
        goto LAB_002ffb0c;
      }
      if (local_84 != 0x58536f87) goto LAB_002ff35c;
      iVar6 = 0x3762c04b;
    }
    else if (local_84 == 0x65684b86) {
      local_68 = DAT_004d1b20;
      iVar6 = -0x1a4f1004;
      if (((DAT_004bca48 | DAT_004bca4c) + 0x89c1108 & 0x8e7fedfe | 0xc5de8fe) < 0xced52ad1) {
        iVar6 = 0x307b64eb;
      }
    }
    else {
      if (local_84 != 0x66be10fd) goto LAB_002ff35c;
      iVar6 = 0xd199c4;
    }
  }
  else if (local_84 < 0x7c34dbe9) {
    if (local_84 == 0x6f52f429) {
      _objc_msgSend(param_3,local_78);
      uVar7 = _objc_retainAutoreleasedReturnValue();
      _objc_release(param_3);
      _objc_autoreleaseReturnValue(uVar7);
      param_2 = extraout_x1_02;
      iVar6 = 0x7f723739;
    }
    else {
      iVar6 = -0x5d8c29ea;
      if (local_84 != 0x742f7bdf) goto LAB_002ff35c;
    }
  }
  else if (local_84 == 0x7c34dbe9) {
    DAT_004bc2d1 = local_6a ^ 0x23;
    DAT_004bc2d2 = DAT_004bc2c8 ^ 0xd;
    iVar6 = -0x35725bf;
  }
  else {
    if (local_84 != 0x7f723739) goto LAB_002ff35c;
    uVar2 = DAT_004bcaa8 | DAT_004bcaac;
    _objc_msgSend(param_3,local_78);
    local_80 = _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_autoreleaseReturnValue(local_80);
    param_2 = extraout_x1_00;
    iVar6 = 0x7f723739;
    if ((uVar2 & 0xc9a3ecaf | 0x49a0e404) != 0xe7776771) {
      iVar6 = -0x43ddd508;
    }
  }
LAB_002ffc9c:
  local_84 = iVar6;
  goto LAB_002ff35c;
}



// #####################################
// ##### +[bubbleMerge:] @ 00307730
// #####################################

/* WARNING: Removing unreachable block (ram,0x00308ab4) */
/* Function Stack Size: 0x18 bytes */

bool BubbleMessageMerge::bubbleMerge_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  ID IVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  int local_23c;
  ulong local_238;
  undefined **local_230;
  undefined8 local_228;
  undefined **local_220;
  undefined8 local_218;
  undefined **local_210;
  ulong local_208;
  undefined8 local_200;
  undefined *local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  char local_1d1;
  undefined *local_1d0;
  undefined8 local_1c8;
  char local_1b9;
  ulong local_1b8;
  long local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined *local_180;
  char local_171;
  ID local_170;
  char local_161;
  ulong local_160;
  char local_151;
  undefined8 local_150;
  char local_141;
  long local_140;
  undefined8 local_138;
  undefined *local_130;
  char local_125;
  int local_124;
  undefined *local_120;
  undefined8 local_118;
  char local_109;
  undefined *local_108;
  undefined8 local_100;
  undefined *local_f8;
  char local_e9;
  long local_e8;
  undefined *local_e0;
  char local_d1;
  long local_d0;
  char local_c1;
  undefined *local_c0;
  undefined8 local_b8;
  char local_a9;
  long local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  char local_89;
  undefined *local_88;
  undefined8 local_80;
  byte local_72;
  char local_71;
  int local_70;
  
  local_23c = 0x57a790ce;
LAB_00307800:
  if (local_23c < -0xed0918) {
    if (local_23c < -0x3fff53ca) {
      if (-0x5d4dedab < local_23c) {
        if (-0x531fbf3e < local_23c) {
          if (-0x4a0df946 < local_23c) {
            if (local_23c < -0x45c57221) {
              if (local_23c == -0x4a0df945) {
                local_23c = -0x117da658;
              }
              else if (local_23c == -0x487d3b06) {
                _objc_msgSend(param_1,local_1d0,param_3,local_1c8);
                local_23c = 0x384926f5;
              }
              else if (local_23c == -0x47da1340) {
                uVar9 = (DAT_004bd0e8 & DAT_004bd0ec) * 0x30b8b750 + 0xe9412f0a;
                local_108 = PTR_s_isSeparatorMessage__0048b890;
                bVar2 = 0xcde64408 < uVar9;
                bVar1 = uVar9 == 0xcde64409;
                iVar4 = -0x47da1340;
                local_23c = -0x38d9d59;
                goto LAB_0030c180;
              }
            }
            else {
              if (local_23c == -0x45c57221) {
                bVar1 = 0x8ac17d3a <
                        ((DAT_004bd160 & DAT_004bd164 ^ 0x17f975ab) + 0x6769a6a9 | 0xefccf7b9);
                iVar4 = 0x2ae992af;
                local_23c = -0xfef0936;
                goto LAB_0030b818;
              }
              if (local_23c == -0x425e7020) {
                _objc_msgSend(local_d0,local_e0);
                local_23c = 0x23227de8;
              }
              else if ((local_23c == -0x400f1e04) &&
                      (local_23c = -0x2c01ac35,
                      0x61fa517d < (DAT_004bd090 + DAT_004bd094 + 0x520356cbU) / 0x2ecac454)) {
                local_23c = 0x31255d11;
              }
            }
            goto LAB_00307800;
          }
          if (-0x4fd02326 < local_23c) {
            if (local_23c == -0x4fd02325) {
              local_23c = -0x7ad6aada;
              if ((DAT_004bd030 - DAT_004bd034) + 0x5b920ad7U < 0xb5be6f98) {
                local_23c = -0x1f3b80c8;
              }
            }
            else if (local_23c == -0x4b9f1179) {
              _objc_msgSend(local_118,local_120);
              _objc_release(local_118);
              _objc_msgSend(local_d0,local_e0);
              local_23c = -0xed0918;
            }
            else if (local_23c == -0x4a83d00f) {
              local_23c = -0x29bc666a;
            }
            goto LAB_00307800;
          }
          if (local_23c == -0x531fbf3d) {
            local_23c = 0x50e71b87;
            goto LAB_00307800;
          }
          if (local_23c != -0x52a190c7) {
            if (local_23c == -0x50755256) {
              local_23c = 0x6102bf5e;
            }
            goto LAB_00307800;
          }
          bVar1 = ((DAT_004bd070 ^ DAT_004bd074) + 0xdaa04b18 ^ 0x6713599f) / 0x4d598f92 ==
                  0x9484e6e1;
          local_23c = -0x5b80e899;
          iVar4 = -0x7318d08a;
          goto LAB_0030bf58;
        }
        if (-0x59d22c0f < local_23c) {
          if (local_23c < -0x58485d69) {
            if (local_23c == -0x59d22c0e) {
              local_23c = 0x7557bdb5;
            }
            else if (local_23c == -0x58c64829) {
              DAT_004bc362 = DAT_004bc342 ^ 0x4d;
              DAT_004bc363 = DAT_004bc343 ^ 0x8b;
              DAT_004bc364 = DAT_004bc344 ^ 0xcf;
              DAT_004bc365 = DAT_004bc345 ^ 0x2a;
              DAT_004bc366 = DAT_004bc346 ^ 0xaa;
              DAT_004bc367 = DAT_004bc347 ^ 0x54;
              DAT_004bc368 = DAT_004bc348 ^ 0x79;
              DAT_004bc369 = DAT_004bc349 ^ 0x2e;
              DAT_004bc36a = DAT_004bc34a ^ 0x24;
              DAT_004bc36b = DAT_004bc34b ^ 0x6f;
              DAT_004bc36c = DAT_004bc34c ^ 0x32;
              DAT_004bc36d = DAT_004bc34d ^ 0x65;
              DAT_004bc36e = DAT_004bc34e ^ 0x84;
              DAT_004bc36f = DAT_004bc34f ^ 0xc1;
              DAT_004bc370 = DAT_004bc350 ^ 0x40;
              DAT_004bc371 = DAT_004bc351 ^ 0x50;
              DAT_004bc372 = DAT_004bc352 ^ 0xc0;
              DAT_004bc373 = DAT_004bc353 ^ 0xec;
              DAT_004bc374 = DAT_004bc354 ^ 0x9d;
              DAT_004bc375 = DAT_004bc355 ^ 0x3e;
              DAT_004bc376 = DAT_004bc356 ^ 0x70;
              DAT_004bc460 = DAT_004bc440 ^ 0xc2;
              DAT_004bc461 = DAT_004bc441 ^ 0x25;
              DAT_004bc462 = DAT_004bc442 ^ 0x20;
              DAT_004bc463 = DAT_004bc443 ^ 0x21;
              DAT_004bc464 = DAT_004bc444 ^ 0x5b;
              local_72 = DAT_004bc445 ^ 0x5e;
              local_23c = -0x2f2cc1b2;
            }
            else if (local_23c == -0x5887c2d6) {
              _objc_release(local_150);
              local_23c = -0xfdf1cba;
            }
          }
          else if (local_23c == -0x58485d69) {
            local_23c = -0x5887c2d6;
          }
          else {
            if (local_23c == -0x55a21011) {
              bVar1 = local_141 == '\0';
              local_23c = 0x6230ef5b;
              iVar4 = 0x12817aba;
              goto LAB_0030bf58;
            }
            if (local_23c == -0x552dec1a) {
              local_23c = 0x546310dc;
            }
          }
          goto LAB_00307800;
        }
        if (local_23c < -0x5b7f9b68) {
          if (local_23c < -0x5c63e8e9) {
            if (local_23c == -0x5d4dedaa) {
              bVar1 = 0xbd6ad368 <
                      ((DAT_004bd208 | DAT_004bd20c) & 0x4be0c9a4 | 0xec919fe2) * 0x417a1db6;
              iVar4 = 0x3c860743;
              local_23c = -0x2ab04692;
              goto LAB_0030b818;
            }
            if (local_23c == -0x5cdc3eef) {
              return 1;
            }
          }
          else if (local_23c == -0x5c63e8e9) {
LAB_00309ddc:
            local_23c = 0x1066647d;
          }
          else if (local_23c == -0x5b80e899) {
            uVar9 = 0;
            if (DAT_004bd07c != 0) {
              uVar9 = DAT_004bd078 / DAT_004bd07c;
            }
            local_b8 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc4a0);
            local_c0 = PTR_s_isMemberOfClass__0048b510;
            uVar9 = ((uVar9 ^ 0x4382b6a5) + 0xf9d37068) / 0x62b3ab0d;
            bVar2 = 0xb826760b < uVar9;
            bVar1 = uVar9 == 0xb826760c;
            local_23c = -0x5b80e899;
            iVar4 = 0x401d0fdf;
            goto LAB_0030c2c4;
          }
          goto LAB_00307800;
        }
        if (local_23c != -0x5b7f9b68) {
          if (local_23c == -0x5b6ab6d9) {
            _objc_release(local_138);
            local_23c = -0x69fb6390;
          }
          else if (local_23c == -0x5b430674) {
            local_23c = -0x6107b16b;
          }
          goto LAB_00307800;
        }
        uVar9 = (uint)((ulong)(DAT_004bd010 + DAT_004bd014 | 0xe3bb66dc) * 0x1ebeedef >> 0x3c) |
                0x6cd05d8c;
        bVar2 = 0x4822c82e < uVar9;
        bVar1 = uVar9 == 0x4822c82f;
        local_23c = 0x50e71b87;
        iVar4 = -0x531fbf3d;
        goto LAB_0030c2c4;
      }
      if (local_23c < -0x6e7641a7) {
        if (local_23c < -0x79a824f8) {
          if (local_23c < -0x7a61902c) {
            if (local_23c == -0x7d417eb8) {
              local_23c = -0xb13fd41;
            }
            else if (local_23c == -0x7ad6aada) {
              uVar9 = 0;
              if (DAT_004bd03c != 0) {
                uVar9 = DAT_004bd038 / DAT_004bd03c;
              }
              DAT_004bc360 = DAT_004bc340 ^ 0x7b;
              DAT_004bc361 = DAT_004bc341 ^ 0x89;
              local_23c = 0x40de269f;
              if (0xf1e8082e < ((uVar9 * 0x23f0ef4d) / 0x55d76c14) * 0x3c81a019) {
                local_23c = -0x7ad6aada;
              }
            }
            else if (local_23c == -0x7aa86901) {
              local_23c = -0x1f139b42;
            }
          }
          else if (local_23c == -0x7a61902c) {
            local_23c = -0x30d78d05;
          }
          else {
            if (local_23c == -0x7a46aba0) {
              bVar1 = local_125 == '\0';
              local_23c = 0x20edd9b2;
              iVar4 = 0x72953e5d;
              goto LAB_0030bf58;
            }
            if (local_23c == -0x79c6e5f4) {
              uVar9 = (DAT_004bd1e0 + DAT_004bd1e4 + 0x9aa0f872U & 0xdc817cd5) + 0xec91ad66;
              bVar2 = 0x3f2c439 < uVar9;
              bVar1 = uVar9 == 0x3f2c43a;
              local_23c = 0x38bdcc3d;
              iVar4 = -0x1bf34fe7;
              goto LAB_0030c2c4;
            }
          }
        }
        else if (local_23c < -0x7318d08a) {
          if (local_23c == -0x79a824f8) {
            uVar9 = DAT_004bd238 | DAT_004bd23c;
            local_1b0 = _objc_msgSend(local_d0,local_e0);
            local_23c = -0x5f79f9d;
            if ((uVar9 + 0x42f178c1 & 0xcd82ba02) < 0xba092d8d) {
              local_23c = -0x66688f21;
            }
          }
          else if (local_23c == -0x772998d0) {
            _objc_msgSend(param_3,PTR_s_setB_isLastMessage__0048b8b8,local_228);
            _objc_release(local_228);
            _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_1e8,local_1d1);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_3,*local_230,uVar8);
            _objc_release(uVar8);
            _objc_release(local_1c8);
            local_23c = 0x20edd9b2;
          }
          else if (local_23c == -0x73861d46) {
            local_23c = -0x2e2d2c5f;
          }
        }
        else if (local_23c == -0x7318d08a) {
          _NSClassFromString(&PTR____CFConstantStringClassReference_004bc4a0);
          local_23c = -0x5b80e899;
        }
        else {
          if (local_23c == -0x70227971) {
            bVar1 = local_238 == 0x7fffffffffffffff;
            iVar4 = 0x20edd9b2;
            local_23c = 0x74a795d;
            goto LAB_0030baf0;
          }
          if (local_23c == -0x6f764554) {
            bVar1 = (DAT_004bd250 - DAT_004bd254 & 0xcc9bd16U) == 0x30f8e553;
            iVar4 = 0x384926f5;
            local_23c = -0x487d3b06;
            goto LAB_0030bf18;
          }
        }
        goto LAB_00307800;
      }
      if (-0x66473666 < local_23c) {
        if (local_23c < -0x64b81b34) {
          if (local_23c == -0x66473665) {
            local_c1 = _objc_msgSend(local_a8,local_c0,local_b8);
            local_23c = 0x2abc03a9;
          }
          else if (local_23c == -0x65da21fc) {
            local_23c = 0x70aa0331;
          }
          else if (local_23c == -0x65b407e9) {
            local_23c = 0x491d4b7a;
          }
        }
        else if (local_23c < -0x6248f12b) {
          if (local_23c == -0x64b81b34) goto LAB_00309ddc;
          if (local_23c == -0x63febe86) {
            uVar9 = (DAT_004bd088 + DAT_004bd08c) * 0xe281c6d + 0x49f645c2;
            _objc_msgSend(local_a8,PTR_s_valueForKey__0048b4d8,
                          &PTR____CFConstantStringClassReference_004bc480);
            local_d0 = _objc_retainAutoreleasedReturnValue();
            bVar2 = 0x8b109f69 < uVar9;
            bVar1 = uVar9 == 0x8b109f6a;
            iVar4 = -0xf1152c3;
            local_23c = 0x343d566f;
            goto LAB_0030c180;
          }
        }
        else if (local_23c == -0x6248f12b) {
          uVar9 = DAT_004bd228 ^ DAT_004bd22c;
          _objc_msgSend(local_1a0,local_188,0);
          local_1a8 = _objc_retainAutoreleasedReturnValue();
          local_23c = 0x628e0482;
          if ((uVar9 | 0xdd872cbc) == 0xce48a3a3) {
            local_23c = -0x6248f12b;
          }
        }
        else if (local_23c == -0x6107b16b) {
          local_a9 = local_a8 == 0;
          bVar1 = 0x63dc0bfa < (DAT_004bd068 | DAT_004bd06c | 0x6dd0bb5a) * 0x3d066f55 + 0x70029871;
          iVar4 = -0x6107b16b;
          local_23c = -0x10048b8f;
          goto LAB_0030b818;
        }
        goto LAB_00307800;
      }
      if (-0x69b5f134 < local_23c) {
        if (local_23c == -0x69b5f133) {
          _objc_release(local_140);
          local_23c = 0x6cbd4f53;
        }
        else if (local_23c == -0x68b3ff10) {
          local_23c = 0x165500c2;
        }
        else if (local_23c == -0x66688f21) {
          local_23c = 0x5c295df3;
        }
        goto LAB_00307800;
      }
      if (local_23c == -0x6e7641a7) {
        uVar9 = (DAT_004bd138 + DAT_004bd13c) * -0x270fd9dc + 0xbea54c62U & 0xf2f692fa;
        local_130 = PTR_s_objectAtIndexedSubscript__00489528;
        bVar2 = 0x4add589a < uVar9;
        bVar1 = uVar9 == 0x4add589b;
        local_23c = -0x6e7641a7;
        iVar4 = 0x25126381;
        goto LAB_0030c2c4;
      }
      if (local_23c == -0x6e1483ca) {
        bVar1 = 0xeba3c3df < ((DAT_004bd0f0 * DAT_004bd0f4 ^ 0x1504e4e0U) + 0x539cdf3f) / 0x3b35a4e6
        ;
        local_23c = 0x2704a97c;
        iVar4 = 0x53703a13;
        goto LAB_0030c260;
      }
      if (local_23c != -0x69fb6390) goto LAB_00307800;
      bVar1 = 0xd4ae81cc < ((DAT_004bd1c0 ^ DAT_004bd1c4) * 0x7a0e2307 & 0x30ba6b8a) * 0x7553066c;
      iVar4 = -0x37b28d0;
      local_23c = 0x35daabb;
    }
    else {
      if (-0x1f3b80c9 < local_23c) {
        if (local_23c < -0xf1152c3) {
          if (local_23c < -0x1b118e27) {
            if (local_23c < -0x1d57d996) {
              if (local_23c == -0x1f3b80c8) {
                DAT_004bc360 = DAT_004bc340 ^ 0x7b;
                DAT_004bc361 = DAT_004bc341 ^ 0x89;
                local_23c = -0x7ad6aada;
              }
              else if (local_23c == -0x1f139b42) {
                local_e0 = PTR_s_count_00489538;
                local_23c = -0x1f139b42;
                if (0x4a882dc <
                    (DAT_004bd0a8 * DAT_004bd0ac ^ 0xffffe7ffU | 0x3a37d6df) * 0x44f28484) {
                  local_23c = 0x836e25a;
                }
              }
              else if (local_23c == -0x1e983e26) {
                local_23c = -0x20168a27;
              }
              goto LAB_00307800;
            }
            if (local_23c != -0x1d57d996) {
              if (local_23c == -0x1c1da43a) {
                bVar1 = local_d1 == '\0';
                local_23c = 0x20edd9b2;
                iVar4 = 0x446af5d2;
                goto LAB_0030bf58;
              }
              if (local_23c == -0x1bf34fe7) {
                _objc_msgSend(local_d0,PTR_s_objectAtIndexedSubscript__00489528,local_238 - 1);
                IVar5 = _objc_retainAutoreleasedReturnValue();
                isSame_node_(param_1,(SEL)PTR_s_isSame_node__0048b8e8,param_3,IVar5);
                local_23c = 0x38bdcc3d;
              }
              goto LAB_00307800;
            }
            uVar9 = DAT_004bd108 & DAT_004bd10c;
            _objc_msgSend(param_3,local_f8);
            local_118 = _objc_retainAutoreleasedReturnValue();
            local_120 = PTR_s_m_uiMesLocalID_0048b880;
            bVar1 = (uVar9 & 0x410a080 | 0xb6e135b) * 0x43123344 == 0xfc73677;
            iVar4 = -0x1d57d996;
            local_23c = 0x520168ce;
          }
          else {
            if (local_23c < -0x10048b8f) {
              if (local_23c == -0x1b118e27) {
                uVar9 = 0;
                if (DAT_004bd144 != 0) {
                  uVar9 = DAT_004bd140 / DAT_004bd144;
                }
                uVar9 = uVar9 * -0x58d40c2a & 0xf97623a6 | 0xc0220224;
                bVar2 = 0xa43c3b1f < uVar9;
                bVar1 = uVar9 == 0xa43c3b20;
                local_23c = 0x6102bf5e;
                iVar4 = -0x50755256;
                goto LAB_0030c2c4;
              }
              if (local_23c == -0x196ef093) {
                bVar1 = 0xf502a3be < (DAT_004bd270 | DAT_004bd274 | 0x4a966676) + 0xe99c5c6d;
                local_23c = -0x215e1b76;
                iVar4 = 0x6e2ab723;
                goto LAB_0030c260;
              }
              if (local_23c == -0x117da658) {
                bVar1 = 0x6868800c <
                        ((DAT_004bd1d0 - DAT_004bd1d4 ^ 0x7cbb1d6eU) * 0x2c64d4bd | 0x434ba4fc);
                iVar4 = 0x57f85b98;
                local_23c = 0x397efa35;
                goto LAB_0030b818;
              }
              goto LAB_00307800;
            }
            if (local_23c == -0x10048b8f) {
              bVar1 = local_a9 == '\0';
              local_23c = 0x5bf20dbc;
              iVar4 = -0x52a190c7;
              goto LAB_0030bf58;
            }
            if (local_23c == -0xfef0936) {
              local_23c = 0x2ae992af;
              goto LAB_00307800;
            }
            if (local_23c != -0xfdf1cba) goto LAB_00307800;
            bVar1 = local_151 == '\0';
            iVar4 = 0x6230ef5b;
            local_23c = -0x5b6ab6d9;
          }
        }
        else if (local_23c < -0x5f79f9d) {
          if (local_23c < -0xb96b919) {
            if (local_23c == -0xf1152c3) {
              _objc_msgSend(local_a8,PTR_s_valueForKey__0048b4d8,
                            &PTR____CFConstantStringClassReference_004bc480);
              _objc_retainAutoreleasedReturnValue();
              local_23c = -0x63febe86;
            }
            else if (local_23c == -0xea4da96) {
              local_23c = 0x22e8969c;
            }
            else if (local_23c == -0xde9d216) {
              _objc_msgSend(puStack_98,local_a0);
              local_a8 = _objc_retainAutoreleasedReturnValue();
              local_23c = 0x13b2aa56;
            }
            goto LAB_00307800;
          }
          if (local_23c == -0xb96b919) {
            local_23c = 0x11661046;
            local_208 = 0;
            goto LAB_00307800;
          }
          if (local_23c != -0xb13fd41) {
            if (local_23c == -0x94006f8) {
              bVar1 = 0x35cf2ed7 < (DAT_004bd020 & DAT_004bd024 & 0x5e755299 ^ 0x46a563b3);
              local_23c = -0x22925172;
              iVar4 = -0x7d417eb8;
              goto LAB_0030c260;
            }
            goto LAB_00307800;
          }
          bVar1 = local_71 == '\0';
          iVar4 = 0x7557bdb5;
          local_23c = -0x4fd02325;
        }
        else {
          if (local_23c < -0x466ee41) {
            if (local_23c == -0x5f79f9d) {
              _objc_msgSend(local_d0,local_e0);
              local_23c = -0x79a824f8;
            }
            else if (local_23c == -0x5bf0df3) {
              local_23c = 0x60ed1d13;
            }
            else if (local_23c == -0x5b9fd4f) {
              _objc_msgSend(param_3,PTR_s_messageWrap_0048b8c8);
              _objc_retainAutoreleasedReturnValue();
              local_23c = 0x7105d648;
            }
            goto LAB_00307800;
          }
          if (local_23c < -0x38d9d59) {
            if (local_23c == -0x466ee41) {
              local_23c = 0x5f5a3b37;
            }
            else if (local_23c == -0x402a2c2) goto LAB_00309df0;
            goto LAB_00307800;
          }
          if (local_23c == -0x38d9d59) {
            local_23c = -0x6e1483ca;
            goto LAB_00307800;
          }
          if (local_23c != -0x37b28d0) goto LAB_00307800;
          uVar9 = DAT_004bd1c8 & DAT_004bd1cc;
          _objc_release(local_138);
          bVar1 = ((uVar9 | 0xb32cb918) ^ 0x746a87e8) / 0xc47d64 == 0x57d0287a;
          iVar4 = 0x35daabb;
          local_23c = -0x4a0df945;
        }
LAB_0030baf0:
        if (bVar1) {
          local_23c = iVar4;
        }
        goto LAB_00307800;
      }
      if (local_23c < -0x2e2d2c5f) {
        if (local_23c < -0x384aa6fe) {
          if (-0x3e73add0 < local_23c) {
            if (local_23c == -0x3e73adcf) {
              _objc_msgSend(local_1a0,local_188,0);
              _objc_retainAutoreleasedReturnValue();
              local_23c = -0x6248f12b;
            }
            else if (local_23c == -0x3cf5f07a) {
              _objc_msgSend(param_3,local_1f8,local_1f0);
              _objc_release(local_1f0);
              _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_1e8,1);
              local_200 = _objc_retainAutoreleasedReturnValue();
            }
            else if (local_23c == -0x3a970f06) {
              uVar9 = (uint)((ulong)(DAT_004bd1a0 * DAT_004bd1a4 + 0x6341e13f) * 0x248494b9 >> 0x3b)
                      ^ 0xcd47cf67;
              bVar2 = 0x12bb47a8 < uVar9;
              bVar1 = uVar9 == 0x12bb47a9;
              iVar4 = -0x425e7020;
              local_23c = 0x23227de8;
              goto LAB_0030c180;
            }
            goto LAB_00307800;
          }
          if (local_23c == -0x3fff53ca) {
            bVar1 = 0xcf083f68 <
                    (DAT_004bd0c0 * DAT_004bd0c4 + 0x4358b477U ^ 0x441df946) * 0x3421e256;
            local_23c = 0x4b1ec8fb;
            iVar4 = 0x414f489a;
            goto LAB_0030c260;
          }
          if (local_23c == -0x3eda70f5) {
            _objc_msgSend(param_3,*local_210,local_218);
            _objc_release(local_218);
            _objc_msgSend(PTR__OBJC_CLASS___NSNumber_0048cc00,local_188,0);
            uVar8 = _objc_retainAutoreleasedReturnValue();
            _objc_msgSend(param_3,*local_220,uVar8);
            _objc_release(uVar8);
            _objc_release(local_170);
            local_23c = 0x16c5d552;
            goto LAB_00307800;
          }
          if (local_23c != -0x3e8f30f9) goto LAB_00307800;
          uVar9 = 0;
          if (DAT_004bd154 != 0) {
            uVar9 = DAT_004bd150 / DAT_004bd154;
          }
          bVar1 = 0xda420cbb < ((uint)((ulong)uVar9 * 0x27a08c57 >> 0x3c) + 0xbb92a846 & 0x3180284d)
          ;
          iVar4 = 0x697f4064;
          local_23c = 0x2ac4eb99;
        }
        else {
          if (-0x31801351 < local_23c) {
            if (local_23c == -0x31801350) {
              _objc_release(local_138);
              local_160 = local_238 + 1;
              local_23c = -0x3a970f06;
            }
            else if (local_23c == -0x30d78d05) {
              local_70 = DAT_004d1b34;
              local_23c = -0x30d78d05;
              if ((DAT_004bd008 * DAT_004bd00c + 0x197b0132U & 0x7d5adbbf | 0x6d4ad3bd) < 0xb8ccc5b4
                 ) {
                local_23c = 0x161a4ae1;
              }
            }
            else if ((local_23c == -0x2f2cc1b2) &&
                    (local_23c = -0x268da5d4,
                    ((DAT_004bd040 | DAT_004bd044) + 0x140b709d & 0xb1eb3ef0) != 0x44248f03)) {
              local_23c = 0x59769ec5;
            }
            goto LAB_00307800;
          }
          if (local_23c != -0x384aa6fe) {
            if (local_23c == -0x36878354) {
              bVar1 = ((DAT_004bd200 + DAT_004bd204) * 0x3b1295aa & 0xe552fb2U) == 0xc4edffeb;
              iVar4 = -0x5d4dedaa;
              local_23c = 0x3c860743;
              goto LAB_0030bf18;
            }
            if (local_23c == -0x34768b14) {
              _objc_msgSend(param_3,local_198,local_190);
              _objc_release(local_190);
              local_23c = -0x2665c621;
            }
            goto LAB_00307800;
          }
          bVar1 = 0xd8a1bbcd <
                  ((uint)(DAT_004bd100 - DAT_004bd104) / 0x22675107 + 0x9a8c023c | 0xfc640a11);
          iVar4 = -0x1d57d996;
          local_23c = 0x3db67379;
        }
      }
      else {
        if (local_23c < -0x268da5d4) {
          if (local_23c < -0x2ab04692) {
            if (local_23c == -0x2e2d2c5f) {
              bVar1 = ((uint)((ulong)(uint)(DAT_004bd128 * DAT_004bd12c) * 0x595480a3 >> 0x3d) & 1)
                      == 0x2442b7f9;
              local_23c = -0x2e2d2c5f;
              iVar4 = -0x7a46aba0;
              goto LAB_0030b838;
            }
            if (local_23c == -0x2c01ac35) {
              local_d1 = local_d0 == 0;
              local_23c = -0x1c1da43a;
              if (0x336b5c96 <
                  ((DAT_004bd098 + DAT_004bd09c) * 0x430a8834 + 0x53f99d9cU & 0xa8a696b8)) {
                local_23c = -0x2c01ac35;
              }
            }
            else if (local_23c == -0x2b5ba64a) {
              bVar1 = ((DAT_004bd080 ^ DAT_004bd084) + 0x6e27fc1f & 0xc7207447) == 0x1bbcb239;
              iVar4 = -0xf1152c3;
              local_23c = -0x63febe86;
              goto LAB_0030baf0;
            }
          }
          else if (local_23c == -0x2ab04692) {
            local_23c = -0x3eda70f5;
            if (local_171 == '\0') {
              local_23c = 0x6eadd87b;
            }
            local_218 = local_190;
            local_210 = &PTR_s_setB_isNeedHideHead__0048b8c0;
            local_220 = &PTR_s_setB_isFirstMessage__0048b8a8;
          }
          else if (local_23c == -0x29bc666a) {
            local_1e8 = PTR_s_numberWithBool__0048b600;
            _objc_msgSend(local_1e0,PTR_s_numberWithBool__0048b600,0);
            local_228 = _objc_retainAutoreleasedReturnValue();
            local_23c = -0x772998d0;
            if (local_1d1 == '\0') {
              local_23c = 0xed4b0ca;
            }
            local_230 = &PTR_s_setB_isMiddleMessage__0048b8b0;
            local_1f0 = local_228;
          }
          else if (local_23c == -0x27cab6b1) {
            local_23c = -0x6e7641a7;
          }
          goto LAB_00307800;
        }
        if (local_23c < -0x215e1b76) {
          if (local_23c == -0x268da5d4) {
            DAT_004bc465 = local_72;
            DAT_004bc466 = DAT_004bc446 ^ 0xc;
            DAT_004bc467 = DAT_004bc447 ^ 0x7c;
            DAT_004bc468 = DAT_004bc448 ^ 0x70;
            DAT_004bc469 = DAT_004bc449 ^ 0xf8;
            DAT_004bc46a = DAT_004bc44a ^ 0x31;
            DAT_004bc46b = DAT_004bc44b ^ 0xc9;
            DAT_004bc46c = DAT_004bc44c ^ 0x4d;
            DAT_004bc46d = DAT_004bc44d ^ 0x28;
            DAT_004bc46e = DAT_004bc44e ^ 0x37;
            DAT_004bc46f = DAT_004bc44f ^ 0x5e;
            DAT_004bc470 = DAT_004bc450 ^ 0xc4;
            DAT_004bc471 = DAT_004bc451 ^ 0x5c;
            DAT_004bc472 = DAT_004bc452 ^ 0x80;
            DAT_004bc473 = DAT_004bc453 ^ 0x98;
            DAT_004bc474 = DAT_004bc454 ^ 0xa9;
            DAT_004bc475 = DAT_004bc455 ^ 0x56;
            DAT_004bc476 = DAT_004bc456 ^ 0x4e;
            DAT_004bc477 = DAT_004bc457 ^ 0xda;
            DAT_004bc478 = DAT_004bc458 ^ 0x54;
            DAT_004bc479 = DAT_004bc459 ^ 0x29;
            DAT_004bc47a = DAT_004bc45a ^ 0xc3;
            DAT_004bc47b = DAT_004bc45b ^ 0xc6;
            DAT_004bc47c = DAT_004bc45c ^ 0x3c;
            DAT_004bc420 = DAT_004bc400 ^ 0x46;
            DAT_004bc421 = DAT_004bc401 ^ 0x10;
            DAT_004bc422 = DAT_004bc402 ^ 10;
            DAT_004bc423 = DAT_004bc403 ^ 0x16;
            DAT_004bc424 = DAT_004bc404 ^ 0x53;
            DAT_004bc425 = DAT_004bc405 ^ 0x81;
            DAT_004bc426 = DAT_004bc406 ^ 0x30;
            DAT_004bc427 = DAT_004bc407 ^ 0x7f;
            DAT_004bc428 = DAT_004bc408 ^ 0x34;
            DAT_004bc429 = DAT_004bc409 ^ 0x35;
            DAT_004bc42a = DAT_004bc40a ^ 0xa8;
            DAT_004bc42b = DAT_004bc40b ^ 0xd9;
            DAT_004bc42c = DAT_004bc40c ^ 0x71;
            DAT_004bc42d = DAT_004bc40d ^ 0x49;
            DAT_004bc42e = DAT_004bc40e ^ 0xd0;
            DAT_004bc42f = DAT_004bc40f ^ 0xc4;
            DAT_004bc430 = DAT_004bc410 ^ 0xe3;
            DAT_004bc431 = DAT_004bc411 ^ 0x56;
            DAT_004bc432 = DAT_004bc412 ^ 0xf4;
            DAT_004bc433 = DAT_004bc413 ^ 10;
            DAT_004bc434 = DAT_004bc414 ^ 0xaf;
            local_23c = 0x59769ec5;
          }
          else {
            if (local_23c == -0x2665c621) {
              uVar9 = DAT_004bd218 & DAT_004bd21c;
              _objc_msgSend(param_3,local_198,local_190);
              _objc_release(local_190);
              local_1a0 = PTR__OBJC_CLASS___NSNumber_0048cc00;
              bVar1 = 0xca2e756a < (uVar9 | 0xbff935fa) + 0xe2701dfc;
              local_23c = -0x34768b14;
              iVar4 = 0x2acb2a53;
              goto LAB_0030c260;
            }
            if (local_23c == -0x22925172) {
              local_23c = -0x7d417eb8;
            }
          }
          goto LAB_00307800;
        }
        if (local_23c == -0x215e1b76) {
          uVar9 = 0;
          if (DAT_004bd27c != 0) {
            uVar9 = DAT_004bd278 / DAT_004bd27c;
          }
          bVar1 = 0x61c1b40e < ((uVar9 + 0x21bc5d8d ^ 0xa705020) & 0xbaf27a28);
          iVar4 = -0x215e1b76;
          local_23c = 0x64f82f83;
        }
        else {
          if (local_23c == -0x20d19edd) {
            local_23c = -0x36878354;
            goto LAB_00307800;
          }
          if (local_23c != -0x20168a27) goto LAB_00307800;
          bVar1 = 0xeaf1d99c <
                  ((DAT_004bd058 | DAT_004bd05c) * -0x41795cfa + 0x889727f6 ^ 0x51bfd10e);
          iVar4 = -0x1e983e26;
          local_23c = 0x3436ebc4;
        }
      }
    }
LAB_0030b818:
    if (bVar1) {
      local_23c = iVar4;
    }
    goto LAB_00307800;
  }
  if (local_23c < 0x40de269f) {
    if (local_23c < 0x234edf8b) {
      if (0x139c19a5 < local_23c) {
        if (local_23c < 0x16c5d552) {
          if (0x15c2d1cc < local_23c) {
            if (local_23c == 0x15c2d1cd) {
              local_23c = 0x6d71f68a;
            }
            else if (local_23c == 0x161a4ae1) {
              local_23c = -0x5b7f9b68;
            }
            else if (local_23c == 0x165500c2) {
              bVar1 = (DAT_004bd120 + DAT_004bd124 | 0x9d2cd286U) / 0x21bac2db == 0x436aecc4;
              local_23c = -0x2e2d2c5f;
              iVar4 = -0x73861d46;
              goto LAB_0030bf58;
            }
            goto LAB_00307800;
          }
          if (local_23c != 0x139c19a6) {
            if (local_23c == 0x13b2aa56) {
              bVar1 = ((DAT_004bd060 - DAT_004bd064) * -0x4d0d9ba9 | 0x7e6031e1U) * 0x7e922e72 ==
                      0x1cd2942a;
              iVar4 = -0x6107b16b;
              local_23c = -0x5b430674;
            }
            else {
              if (local_23c != 0x145745fc) goto LAB_00307800;
              bVar1 = DAT_004bd190 - DAT_004bd194 == 0x9979824;
              iVar4 = -0x5bf0df3;
              local_23c = 0x788b93a8;
            }
LAB_0030bf18:
            if (!bVar1) {
              local_23c = iVar4;
            }
            goto LAB_00307800;
          }
          local_23c = -0x70227971;
          goto LAB_00307800;
        }
        if (0x20edd9b1 < local_23c) {
          if (local_23c == 0x20edd9b2) {
            _objc_release(local_d0);
            local_23c = -0x196ef093;
          }
          else if (local_23c == 0x22e8969c) {
            local_23c = 0x2e22b13;
          }
          else if (local_23c == 0x23227de8) {
            uVar9 = (DAT_004bd1a8 ^ DAT_004bd1ac | 0xfea24ff4) * 0x693d2b75 | 0x5a69c715;
            uVar6 = _objc_msgSend(local_d0,local_e0);
            local_161 = local_160 < uVar6;
            bVar2 = 0x49f667a5 < uVar9;
            bVar1 = uVar9 == 0x49f667a6;
            iVar4 = -0x425e7020;
            local_23c = 0x15c2d1cd;
            goto LAB_0030c180;
          }
          goto LAB_00307800;
        }
        if (local_23c == 0x16c5d552) {
          bVar1 = 0xf1d0e523 < DAT_004bd230 + DAT_004bd234 + 0x4b0fb05fU;
          iVar4 = -0x5f79f9d;
          local_23c = -0x79a824f8;
          goto LAB_0030b818;
        }
        if (local_23c != 0x183fae74) {
          if (local_23c == 0x1c8cb76e) {
            uVar9 = 0;
            if (DAT_004bd28c != 0) {
              uVar9 = DAT_004bd288 / DAT_004bd28c;
            }
            _objc_release(local_a8);
            bVar1 = (uVar9 / 0x3af812cd & 3) * 0x130b00ed == 0x579fc89;
            local_23c = 0x73788068;
            iVar4 = 0x2c1697ca;
            goto LAB_0030b838;
          }
          goto LAB_00307800;
        }
        bVar1 = local_109 == '\0';
        local_23c = 0x20edd9b2;
        iVar4 = -0x384aa6fe;
LAB_0030bf58:
        if (bVar1) {
          local_23c = iVar4;
        }
        goto LAB_00307800;
      }
      if (local_23c < 0xc202f07) {
        if (local_23c < 0x74a795d) {
          if (local_23c == -0xed0918) {
            uVar9 = (DAT_004bd118 - DAT_004bd11c) + 0x40cfe29U ^ 0xab97a57b;
            local_124 = _objc_msgSend(local_118,local_120);
            _objc_release(local_118);
            lVar7 = _objc_msgSend(local_d0,local_e0);
            local_125 = lVar7 == 0;
            bVar2 = 0x2cf14ace < uVar9;
            bVar1 = uVar9 == 0x2cf14acf;
            local_23c = -0x4b9f1179;
            iVar4 = -0x68b3ff10;
            goto LAB_0030c2c4;
          }
          if (local_23c == 0x2e22b13) {
            local_23c = -0x772998d0;
            local_228 = local_200;
            local_230 = &PTR_s_setB_isNeedHideHead__0048b8c0;
          }
          else if (local_23c == 0x35daabb) {
            _objc_release(local_138);
            local_23c = -0x37b28d0;
          }
        }
        else {
          if (local_23c == 0x74a795d) {
            bVar1 = local_238 == 0;
            local_23c = 0x16c5d552;
            iVar4 = -0x79c6e5f4;
            goto LAB_0030b838;
          }
          if (local_23c == 0x836e25a) {
            local_23c = 0x5e8e222c;
          }
          else if (local_23c == 0x888018e) {
            local_23c = 0x11661046;
            if (local_161 == '\0') {
              local_23c = 0x20edd9b2;
            }
            local_208 = local_160;
          }
        }
        goto LAB_00307800;
      }
      if (0x11661045 < local_23c) {
        if (local_23c == 0x11661046) {
          local_238 = local_208;
          _objc_msgSend(local_d0,local_130);
          local_138 = _objc_retainAutoreleasedReturnValue();
          uVar8 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc4c0);
          iVar4 = _objc_msgSend(local_138,local_88,uVar8);
          local_23c = -0x3e8f30f9;
          if (iVar4 == 0) {
            local_23c = -0x31801350;
          }
        }
        else if (local_23c == 0x11e007e5) {
          uVar9 = DAT_004bd188 & DAT_004bd18c;
          _objc_msgSend(local_138,local_f8);
          local_150 = _objc_retainAutoreleasedReturnValue();
          iVar4 = _objc_msgSend(local_150,local_120);
          local_151 = local_124 == iVar4;
          local_23c = -0x58485d69;
          if ((uVar9 + 0x854c4192 | 0xedee7bff) < 0xf2f97a5) {
            local_23c = 0x11e007e5;
          }
        }
        else if ((local_23c == 0x12817aba) &&
                (local_23c = 0x11e007e5,
                ((DAT_004bd180 * DAT_004bd184 ^ 0xa096e260U) * -0x5990fe43 & 0xf89d495d) ==
                0xf7ce72db)) {
          local_23c = 0x5006fef1;
        }
        goto LAB_00307800;
      }
      if (local_23c == 0xc202f07) {
        local_a0 = PTR_s_getTopViewController_0048b370;
        puStack_98 = PTR_BubbleBoxUtil_0048ca88;
        local_23c = -0xde9d216;
        goto LAB_00307800;
      }
      if (local_23c == 0xed4b0ca) {
        local_1f8 = PTR_s_setB_isMiddleMessage__0048b8b0;
        local_23c = -0x3cf5f07a;
        goto LAB_00307800;
      }
      if (local_23c != 0x1066647d) goto LAB_00307800;
      uVar9 = (DAT_004bd248 * DAT_004bd24c & 0x4665ce30U | 0x46618a30) * 0x6ff611a2;
      local_1b9 = local_238 < local_1b8;
      bVar2 = 0x14a14acf < uVar9;
      bVar1 = uVar9 == 0x14a14ad0;
      iVar4 = 0x1066647d;
      local_23c = 0x7c9833dd;
      goto LAB_0030c180;
    }
    if (local_23c < 0x31255d11) {
      if (local_23c < 0x2abc03a9) {
        if (local_23c < 0x2704a97c) {
          if (local_23c == 0x234edf8b) {
            _objc_release(param_3);
            local_23c = 0x27163793;
          }
          else if (local_23c == 0x25126381) {
            local_23c = -0x1b118e27;
          }
          else if (local_23c == 0x2530b6d7) {
            local_23c = 0x7688ec35;
          }
        }
        else if (local_23c == 0x2704a97c) {
          uVar9 = DAT_004bd0f8 * DAT_004bd0fc;
          local_109 = _objc_msgSend(param_1,local_108,local_100);
          _objc_release(local_100);
          local_23c = 0x183fae74;
          if (0x8a8c80c9 < (uint)((ulong)((uVar9 ^ 0x74493d17) * -0x79145281) * 0x78abb0ef >> 0x3d))
          {
            local_23c = 0x2704a97c;
          }
        }
        else if (local_23c == 0x27163793) {
          uVar9 = DAT_004bd298 & DAT_004bd29c;
          _objc_release(param_3);
          local_23c = 0x27163793;
          if (0x44833589 < uVar9 + 0x4e11fd05) {
            local_23c = 0x2530b6d7;
          }
        }
        else if (local_23c == 0x27559c16) {
          uVar9 = (uint)((ulong)(uint)((DAT_004bd1f8 + DAT_004bd1fc) * 0x1d90230c) * 0x5101dde7 >>
                        0x3d) | 0x2e91c794;
          local_188 = PTR_s_numberWithBool__0048b600;
          _objc_msgSend(local_180,PTR_s_numberWithBool__0048b600,1);
          local_190 = _objc_retainAutoreleasedReturnValue();
          bVar2 = 0x1e39c98a < uVar9;
          bVar1 = uVar9 == 0x1e39c98b;
          iVar4 = 0x27559c16;
          local_23c = -0x20d19edd;
          goto LAB_0030c180;
        }
        goto LAB_00307800;
      }
      if (0x2ae992ae < local_23c) {
        if (local_23c == 0x2ae992af) {
          uVar9 = 0;
          if (DAT_004bd16c != 0) {
            uVar9 = DAT_004bd168 / DAT_004bd16c;
          }
          local_141 = local_140 == 0;
          bVar2 = 0xec2e3019 < (uVar9 ^ 0xdfc44505);
          bVar1 = (uVar9 ^ 0xdfc44505) == 0xec2e301a;
          local_23c = 0x2ae992af;
          iVar4 = -0x65da21fc;
          goto LAB_0030c2c4;
        }
        if (local_23c == 0x2bbc3fd5) {
          local_23c = -0x3fff53ca;
        }
        else if (local_23c == 0x2c1697ca) {
          local_23c = -0x466ee41;
        }
        goto LAB_00307800;
      }
      if (local_23c == 0x2abc03a9) {
        bVar1 = local_c1 == '\0';
        iVar4 = 0x5bf20dbc;
        local_23c = -0x2b5ba64a;
        goto LAB_0030baf0;
      }
      if (local_23c != 0x2ac4eb99) {
        if (local_23c == 0x2acb2a53) {
          local_23c = 0x7f03621d;
        }
        goto LAB_00307800;
      }
      uVar9 = DAT_004bd158 - DAT_004bd15c;
      _objc_retain(local_138);
      _objc_msgSend(local_138,local_f8);
      local_140 = _objc_retainAutoreleasedReturnValue();
      bVar1 = 0xa3d9b0f9 < ((uVar9 & 0xf2cc06a0) / 0x189cacb8) * -0x2329067c;
      local_23c = 0x697f4064;
      iVar4 = 0x51d6034a;
LAB_0030c260:
      if (bVar1) {
        local_23c = iVar4;
      }
      goto LAB_00307800;
    }
    if (local_23c < 0x38bdcc3d) {
      if (local_23c < 0x3436ebc4) {
        if (local_23c == 0x31255d11) {
          local_23c = -0x2c01ac35;
        }
        else if (local_23c == 0x31322b8f) {
          local_23c = -0x94006f8;
        }
        else if (local_23c == 0x31636ce1) {
          local_23c = -0x47da1340;
        }
      }
      else {
        if (local_23c == 0x3436ebc4) {
          bVar1 = local_89 == '\0';
          iVar4 = 0x5f5a3b37;
          local_23c = 0xc202f07;
          goto LAB_0030baf0;
        }
        if (local_23c == 0x343d566f) {
          local_23c = 0x7e42e03d;
        }
        else if (local_23c == 0x384926f5) {
          uVar9 = DAT_004bd258 * DAT_004bd25c;
          local_1d1 = _objc_msgSend(param_1,local_1d0,param_3,local_1c8);
          local_1e0 = PTR__OBJC_CLASS___NSNumber_0048cc00;
          bVar1 = 0x408bb681 < (uVar9 ^ 0x31041175 | 0x86f86c88) + 0xd60e7282;
          local_23c = 0x384926f5;
          iVar4 = -0x4a83d00f;
          goto LAB_0030c260;
        }
      }
      goto LAB_00307800;
    }
    if (0x3c860742 < local_23c) {
      if (local_23c < 0x3dd15ed1) {
        if (local_23c == 0x3c860743) {
          local_23c = -0x5d4dedaa;
        }
        else if (local_23c == 0x3db67379) {
          _objc_msgSend(param_3,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_23c = -0x1d57d996;
        }
      }
      else {
        if (local_23c == 0x3dd15ed1) {
          uVar9 = (DAT_004bd1f0 - DAT_004bd1f4 | 0x9275ae82U) + 0xb74bd626 | 0x30ee04f2;
          bVar2 = 0xbdbe2d41 < uVar9;
          bVar1 = uVar9 == 0xbdbe2d42;
          local_23c = 0x27559c16;
          iVar4 = 0x63acea8b;
          goto LAB_0030c2c4;
        }
        if (local_23c == 0x401d0fdf) {
          local_23c = -0x66473665;
        }
      }
      goto LAB_00307800;
    }
    if (local_23c != 0x38bdcc3d) {
      if (local_23c == 0x397efa35) {
        local_23c = 0x57f85b98;
      }
      else if (local_23c == 0x3b35ddcf) {
        bVar1 = 0x1c27818a < ((DAT_004bd2a8 | DAT_004bd2ac | 0xfb07dc06) + 0xe7198fd4 & 0x8511a5d1);
        local_23c = 0x3b35ddcf;
        iVar4 = -0x5cdc3eef;
        goto LAB_0030c260;
      }
      goto LAB_00307800;
    }
    uVar9 = ((DAT_004bd1e8 - DAT_004bd1ec) + 0x1c97d96eU | 0x2e885897) ^ 0x47afaa30;
    _objc_msgSend(local_d0,PTR_s_objectAtIndexedSubscript__00489528,local_238 - 1);
    local_170 = _objc_retainAutoreleasedReturnValue();
    bVar3 = isSame_node_(param_1,(SEL)PTR_s_isSame_node__0048b8e8,param_3,local_170);
    local_171 = (char)bVar3;
    local_180 = PTR__OBJC_CLASS___NSNumber_0048cc00;
    bVar2 = 0x3e758120 < uVar9;
    bVar1 = uVar9 == 0x3e758121;
    local_23c = 0x38bdcc3d;
    iVar4 = 0x5c7d8139;
  }
  else {
    if (0x6230ef5a < local_23c) {
      if (0x70aa0330 < local_23c) {
        if (local_23c < 0x75b3113a) {
          if (local_23c < 0x72a126cd) {
            if (local_23c == 0x70aa0331) {
              uVar9 = (uint)((ulong)(DAT_004bd170 & DAT_004bd174) * 0x7cec4d2d >> 0x3e) | 0x92a172c0
              ;
              bVar2 = 0x99d113cc < uVar9;
              bVar1 = uVar9 == 0x99d113cd;
              iVar4 = 0x6cbd4f53;
              local_23c = -0x69b5f133;
              goto LAB_0030c180;
            }
            if (local_23c == 0x7105d648) {
              uVar9 = DAT_004bd0d8 * DAT_004bd0dc;
              local_f8 = PTR_s_messageWrap_0048b8c8;
              _objc_msgSend(param_3);
              local_100 = _objc_retainAutoreleasedReturnValue();
              local_23c = -0x552dec1a;
              if (0xfd1d9b84 < ((uint)((ulong)uVar9 * 0x1c8df331 >> 0x3c) + 0x3629af3 & 0x1028a13))
              {
                local_23c = 0x7105d648;
              }
            }
            else if (local_23c == 0x72953e5d) {
              bVar1 = (((DAT_004bd130 - DAT_004bd134) + 0xf1cc4eacU) / 0x176f85f5) * 0x3cf8a65 ==
                      0x223f0f57;
              iVar4 = -0x6e7641a7;
              local_23c = -0x27cab6b1;
              goto LAB_0030bf18;
            }
          }
          else if (local_23c == 0x72a126cd) {
            local_88 = PTR_s_isKindOfClass__00489c00;
            local_89 = _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,local_80);
          }
          else if (local_23c == 0x73788068) {
            _objc_release(local_a8);
          }
          else if (local_23c == 0x7557bdb5) {
            DAT_004d1b34 = 1;
            _objc_retain(param_3);
            local_80 = _NSClassFromString(&PTR____CFConstantStringClassReference_004bc4c0);
            local_23c = 0x72a126cd;
          }
        }
        else if (local_23c < 0x7aa89e6a) {
          if (local_23c == 0x75b3113a) {
            uVar9 = DAT_004bd0b8 - DAT_004bd0bc;
            local_e8 = _objc_msgSend(local_d0,local_e0);
            bVar1 = 0x4abf3560 <
                    (((uint)((ulong)uVar9 * 0x90cd7eff >> 0x3f) | 0xc01a42c) ^ 0x27375068);
            iVar4 = 0x627c133f;
            local_23c = 0x2bbc3fd5;
            goto LAB_0030b818;
          }
          if (local_23c == 0x7688ec35) {
LAB_00309df0:
            local_23c = 0x3b35ddcf;
          }
          else if (local_23c == 0x788b93a8) {
            local_23c = -0x5bf0df3;
          }
        }
        else if (local_23c < 0x7e42e03d) {
          if (local_23c == 0x7aa89e6a) {
            bVar1 = local_e9 == '\0';
            local_23c = 0x20edd9b2;
            iVar4 = 0x5bdde813;
            goto LAB_0030bf58;
          }
          if (local_23c == 0x7c9833dd) {
            bVar1 = local_1b9 == '\0';
            iVar4 = 0x20edd9b2;
            local_23c = 0x64039113;
            goto LAB_0030baf0;
          }
        }
        else if (local_23c == 0x7e42e03d) {
          local_23c = -0x400f1e04;
        }
        else if ((local_23c == 0x7f03621d) &&
                (local_23c = -0x6248f12b,
                (DAT_004bd220 - DAT_004bd224 | 0xdf5468bfU) + 0xc22b89c5 < 0xa0d9dfa1)) {
          local_23c = -0x3e73adcf;
        }
        goto LAB_00307800;
      }
      if (local_23c < 0x670dce42) {
        if (local_23c < 0x63acea8b) {
          if (local_23c == 0x6230ef5b) {
            _objc_release(local_138);
          }
          else if (local_23c == 0x627c133f) {
            _objc_msgSend(local_d0,local_e0);
          }
          else if (local_23c == 0x628e0482) {
            local_23c = -0x3eda70f5;
            local_218 = local_1a8;
            local_210 = &PTR_s_setB_isMiddleMessage__0048b8b0;
            local_220 = &PTR_s_setB_isNeedHideHead__0048b8c0;
          }
        }
        else if (local_23c == 0x63acea8b) {
          _objc_msgSend(local_180,PTR_s_numberWithBool__0048b600,1);
          _objc_retainAutoreleasedReturnValue();
        }
        else if (local_23c == 0x64039113) {
          _objc_msgSend(local_d0,PTR_s_objectAtIndexedSubscript__00489528,local_238 + 1);
          local_1c8 = _objc_retainAutoreleasedReturnValue();
          local_1d0 = PTR_s_isSame_node__0048b8e8;
        }
        else if (local_23c == 0x64f82f83) {
          local_23c = 0x5bf20dbc;
        }
        goto LAB_00307800;
      }
      if (0x6d71f689 < local_23c) {
        if (local_23c == 0x6d71f68a) {
          local_23c = 0x491d4b7a;
          if (((DAT_004bd1b0 | DAT_004bd1b4) & 0x30525604) * -0x299fdd71 == 0x4edd73aa) {
            local_23c = -0x65b407e9;
          }
        }
        else if (local_23c == 0x6e2ab723) {
          local_23c = -0x215e1b76;
        }
        else if (local_23c == 0x6eadd87b) {
          local_198 = PTR_s_setB_isFirstMessage__0048b8a8;
          local_23c = 0x53c08408;
        }
        goto LAB_00307800;
      }
      if (local_23c != 0x670dce42) {
        if (local_23c == 0x697f4064) {
          _objc_retain(local_138);
          _objc_msgSend(local_138,local_f8);
          _objc_retainAutoreleasedReturnValue();
          local_23c = 0x2ac4eb99;
        }
        else if (local_23c == 0x6cbd4f53) {
          _objc_release(local_140);
          local_23c = -0x55a21011;
        }
        goto LAB_00307800;
      }
      uVar9 = (DAT_004bd110 * DAT_004bd114 ^ 0xfc607b59U) + 0xf7ac39ec | 0x280064c1;
      bVar2 = 0xc85d236b < uVar9;
      bVar1 = uVar9 == 0xc85d236c;
      iVar4 = -0xed0918;
      local_23c = -0x4b9f1179;
LAB_0030c180:
      if (!bVar2 || bVar1) {
        local_23c = iVar4;
      }
      goto LAB_00307800;
    }
    if (local_23c < 0x53c08408) {
      if (local_23c < 0x4bfb675b) {
        if (local_23c < 0x446af5d2) {
          if (local_23c == 0x40de269f) {
            local_23c = -0x58c64829;
          }
          else if (local_23c == 0x414f489a) {
            local_23c = 0x4b1ec8fb;
          }
          else if (local_23c == 0x44504a22) {
            uVar9 = (DAT_004bd050 ^ DAT_004bd054 ^ 0x7fc07fc) & 0x4c32ffcf | 0x321a83;
            bVar2 = 0xd8b82ad5 < uVar9;
            bVar1 = uVar9 == 0xd8b82ad6;
            local_23c = -0x1e983e26;
            iVar4 = -0x20168a27;
            goto LAB_0030c2c4;
          }
        }
        else if (local_23c == 0x446af5d2) {
          local_23c = -0x1f139b42;
        }
        else if (local_23c == 0x491d4b7a) {
          local_23c = 0x491d4b7a;
          if (0x6a288a12 < (DAT_004bd1b8 - DAT_004bd1bc & 0xc2009U) + 0xca1559ca) {
            local_23c = 0x888018e;
          }
        }
        else if (local_23c == 0x4b1ec8fb) {
          local_e9 = local_e8 == 0;
          bVar1 = 0x7a21b433 <
                  ((DAT_004bd0c8 + DAT_004bd0cc | 0x60d7e614U) ^ 0x28834002) + 0xafa66284;
          iVar4 = 0x4b1ec8fb;
          local_23c = 0x7aa89e6a;
          goto LAB_0030b818;
        }
        goto LAB_00307800;
      }
      if (0x51d60349 < local_23c) {
        if (local_23c == 0x51d6034a) {
          local_23c = -0x45c57221;
        }
        else if (local_23c == 0x520168ce) {
          local_23c = 0x670dce42;
        }
        else if (local_23c == 0x53703a13) {
          _objc_msgSend(param_1,local_108,local_100);
          _objc_release(local_100);
          local_23c = 0x2704a97c;
        }
        goto LAB_00307800;
      }
      if (local_23c != 0x4bfb675b) {
        if (local_23c == 0x5006fef1) {
          _objc_msgSend(local_138,local_f8);
          uVar8 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar8,local_120);
          local_23c = 0x11e007e5;
        }
        else if (local_23c == 0x50e71b87) {
          local_71 = local_70 == 0;
          bVar1 = ((uint)((ulong)(uint)(DAT_004bd018 - DAT_004bd01c) * 0x72fbbf15 >> 0x3e) |
                  0x46402242) == 0xd9c437a9;
          local_23c = 0x50e71b87;
          iVar4 = 0x31322b8f;
          goto LAB_0030b838;
        }
        goto LAB_00307800;
      }
      bVar1 = 0x5176ea8 < (((DAT_004bd260 - DAT_004bd264) + 0x2f86f62fU) / 0xaa38eb7 & 0xfffffff9);
      iVar4 = -0xea4da96;
      local_23c = 0x22e8969c;
      goto LAB_0030b818;
    }
    if (local_23c < 0x5bf20dbc) {
      if (local_23c < 0x57f85b98) {
        if (local_23c == 0x53c08408) {
          local_23c = -0x2665c621;
        }
        else {
          if (local_23c == 0x546310dc) {
            uVar9 = (DAT_004bd0e0 & DAT_004bd0e4 ^ 0xa93cd7a4) + 0xeefdfdd2;
            bVar2 = 0x32e5dd9d < uVar9;
            bVar1 = uVar9 == 0x32e5dd9e;
            local_23c = -0x47da1340;
            iVar4 = 0x31636ce1;
            goto LAB_0030c2c4;
          }
          if (local_23c == 0x57a790ce) {
            local_23c = -0x30d78d05;
          }
        }
        goto LAB_00307800;
      }
      if (local_23c != 0x57f85b98) {
        if (local_23c == 0x59769ec5) {
          DAT_004bc465 = local_72;
          DAT_004bc466 = DAT_004bc446 ^ 0xc;
          DAT_004bc467 = DAT_004bc447 ^ 0x7c;
          DAT_004bc468 = DAT_004bc448 ^ 0x70;
          DAT_004bc469 = DAT_004bc449 ^ 0xf8;
          DAT_004bc46a = DAT_004bc44a ^ 0x31;
          DAT_004bc46b = DAT_004bc44b ^ 0xc9;
          DAT_004bc46c = DAT_004bc44c ^ 0x4d;
          DAT_004bc46d = DAT_004bc44d ^ 0x28;
          DAT_004bc46e = DAT_004bc44e ^ 0x37;
          DAT_004bc46f = DAT_004bc44f ^ 0x5e;
          DAT_004bc470 = DAT_004bc450 ^ 0xc4;
          DAT_004bc471 = DAT_004bc451 ^ 0x5c;
          DAT_004bc472 = DAT_004bc452 ^ 0x80;
          DAT_004bc473 = DAT_004bc453 ^ 0x98;
          DAT_004bc474 = DAT_004bc454 ^ 0xa9;
          DAT_004bc475 = DAT_004bc455 ^ 0x56;
          DAT_004bc476 = DAT_004bc456 ^ 0x4e;
          DAT_004bc477 = DAT_004bc457 ^ 0xda;
          DAT_004bc478 = DAT_004bc458 ^ 0x54;
          DAT_004bc479 = DAT_004bc459 ^ 0x29;
          DAT_004bc47a = DAT_004bc45a ^ 0xc3;
          DAT_004bc47b = DAT_004bc45b ^ 0xc6;
          DAT_004bc47c = DAT_004bc45c ^ 0x3c;
          DAT_004bc420 = DAT_004bc400 ^ 0x46;
          DAT_004bc421 = DAT_004bc401 ^ 0x10;
          DAT_004bc422 = DAT_004bc402 ^ 10;
          DAT_004bc423 = DAT_004bc403 ^ 0x16;
          DAT_004bc424 = DAT_004bc404 ^ 0x53;
          DAT_004bc425 = DAT_004bc405 ^ 0x81;
          DAT_004bc426 = DAT_004bc406 ^ 0x30;
          DAT_004bc427 = DAT_004bc407 ^ 0x7f;
          DAT_004bc428 = DAT_004bc408 ^ 0x34;
          DAT_004bc429 = DAT_004bc409 ^ 0x35;
          DAT_004bc42a = DAT_004bc40a ^ 0xa8;
          DAT_004bc42b = DAT_004bc40b ^ 0xd9;
          DAT_004bc42c = DAT_004bc40c ^ 0x71;
          DAT_004bc42d = DAT_004bc40d ^ 0x49;
          DAT_004bc42e = DAT_004bc40e ^ 0xd0;
          DAT_004bc42f = DAT_004bc40f ^ 0xc4;
          DAT_004bc430 = DAT_004bc410 ^ 0xe3;
          DAT_004bc431 = DAT_004bc411 ^ 0x56;
          DAT_004bc432 = DAT_004bc412 ^ 0xf4;
          DAT_004bc433 = DAT_004bc413 ^ 10;
          DAT_004bc434 = DAT_004bc414 ^ 0xaf;
          local_23c = 0x59769ec5;
          if (((DAT_004bd048 & DAT_004bd04c | 0x3b9f967f) * 0x7f620a6f | 0xb855a091) < 0xf6fdec82) {
            local_23c = -0x59d22c0e;
          }
        }
        else if ((local_23c == 0x5bdde813) &&
                (local_23c = -0x5b9fd4f,
                ((DAT_004bd0d0 + DAT_004bd0d4 & 0x239efc9cU) * -0x725f3a7 & 0x3a4edf48) != 0x7badd8e
                )) {
          local_23c = 0x7105d648;
        }
        goto LAB_00307800;
      }
      uVar9 = 0;
      if (DAT_004bd1dc != 0) {
        uVar9 = DAT_004bd1d8 / DAT_004bd1dc;
      }
      bVar1 = 0xf177f49 < (uVar9 * 0x496bdee1 + 0xf5f03fee ^ 0x2b023465);
      local_23c = 0x57f85b98;
      iVar4 = 0x139c19a6;
      goto LAB_0030c260;
    }
    if (0x5e8e222b < local_23c) {
      if (local_23c < 0x60ed1d13) {
        if (local_23c == 0x5e8e222c) {
          bVar1 = 0x8ff9bcd9 <
                  0x70ce497bU -
                  (int)((long)((ulong)(uint)(DAT_004bd0b0 - DAT_004bd0b4) * 0xb10ee47b) >> 0x3f);
          local_23c = 0x75b3113a;
          iVar4 = 0x627c133f;
          goto LAB_0030c260;
        }
        if ((local_23c == 0x5f5a3b37) &&
           (local_23c = 0x27163793,
           0xa4cb49f2 < (((DAT_004bd290 ^ DAT_004bd294) & 0x5e3abdaf) * -0x6c96e45d) / 0xec2df5a)) {
          local_23c = 0x234edf8b;
        }
      }
      else if (local_23c == 0x60ed1d13) {
        local_23c = -0x31801350;
      }
      else if (local_23c == 0x6102bf5e) {
        uVar9 = 0;
        if (DAT_004bd14c != 0) {
          uVar9 = DAT_004bd148 / DAT_004bd14c;
        }
        bVar1 = ((uVar9 + 0xb0a17033 ^ 0x11a93007) & 0x33e9310f) == 0x1dc37be6;
        local_23c = 0x6102bf5e;
        iVar4 = -0xb96b919;
LAB_0030b838:
        if (!bVar1) {
          local_23c = iVar4;
        }
      }
      goto LAB_00307800;
    }
    if (local_23c != 0x5bf20dbc) {
      if (local_23c == 0x5c295df3) {
        local_1b8 = local_1b0 - 1;
        local_23c = -0x64b81b34;
      }
      else if (local_23c == 0x5c7d8139) {
        local_23c = 0x3dd15ed1;
      }
      goto LAB_00307800;
    }
    uVar9 = (DAT_004bd280 * DAT_004bd284 & 0x28103810U) + 0x2214d15;
    bVar2 = 0xd219c326 < uVar9;
    bVar1 = uVar9 == 0xd219c327;
    local_23c = 0x73788068;
    iVar4 = 0x1c8cb76e;
  }
LAB_0030c2c4:
  if (!bVar2 || bVar1) {
    local_23c = iVar4;
  }
  goto LAB_00307800;
}



// #####################################
// ##### +[isNeedInsertTimeNode:current:] @ 002fe49c
// #####################################

/* Function Stack Size: 0x20 bytes */

bool BubbleMessageMerge::isNeedInsertTimeNode_current_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  bool bVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 uVar9;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  int iVar10;
  undefined1 auVar11 [16];
  int local_a8;
  byte local_a4;
  byte local_a3;
  byte local_a2;
  char local_a1;
  uint local_a0;
  uint local_9c;
  undefined *local_98;
  char local_89;
  undefined *local_88;
  char local_79;
  undefined *local_78;
  undefined8 local_70;
  char local_65;
  
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = local_70;
  uVar1 = DAT_004bc9a0 & DAT_004bc9a4;
  local_a8 = 0x6522b007;
LAB_002fe554:
  uVar9 = auVar11._8_8_;
  local_70 = auVar11._0_8_;
  if (-0xd30225 < local_a8) {
    if (local_a8 < 0x45a47eaf) {
      if (local_a8 < 0x28ecef4b) {
        if (local_a8 < 0x99ea28c) {
          if (local_a8 == -0xd30224) {
            bVar7 = 0x916e4522 <
                    ((DAT_004bc9f0 | DAT_004bc9f4) + 0x27d2168a ^ 0x19ba3dd3) + 0x5c3c10d2;
            iVar10 = 0x3390b685;
            local_a8 = -0x73d8e70e;
            goto LAB_002feeac;
          }
          if (local_a8 == 0x328f035) {
LAB_002ff004:
            auVar11._8_8_ = uVar9;
            auVar11._0_8_ = local_70;
            local_a8 = -0x5d2d645;
          }
        }
        else if (local_a8 == 0x99ea28c) {
          uVar2 = ((DAT_004bc9a8 & DAT_004bc9ac) * -0x3293eea8) / 0x1841c0ae & 0xfffffffd;
          _objc_retain(param_3,uVar9);
          _objc_retain(param_4);
          bVar8 = 0x3fd4f7b9 < uVar2;
          bVar7 = uVar2 == 0x3fd4f7ba;
          local_a8 = 0x3add0015;
          iVar10 = 0x34bc9b14;
          uVar9 = extraout_x1_09;
LAB_002ff174:
          auVar5._8_8_ = uVar9;
          auVar5._0_8_ = local_70;
          auVar11._8_8_ = uVar9;
          auVar11._0_8_ = local_70;
          if (!bVar8 || bVar7) {
            local_a8 = iVar10;
            auVar11 = auVar5;
          }
        }
        else if (local_a8 == 0x9ad4574) {
          local_a8 = 0x380d0836;
          local_a3 = local_a4;
        }
        else if (local_a8 == 0x121603cd) {
          local_a8 = -0x5bb19648;
          if (local_65 == '\0') {
            local_a8 = 0x380d0836;
          }
          local_a3 = 0;
        }
      }
      else if (local_a8 < 0x34bc9b14) {
        if (local_a8 == 0x28ecef4b) {
          local_a8 = -0x6b41dfd2;
        }
        else if (local_a8 == 0x2a32a75e) {
          _objc_msgSend(param_3,PTR_s_m_uiCreateTime_0048b858);
          auVar11._8_8_ = extraout_x1_05;
          auVar11._0_8_ = local_70;
          local_a8 = -0x41a7db67;
        }
        else if (local_a8 == 0x3390b685) {
          iVar10 = DAT_004bc9f8 - DAT_004bc9fc;
          auVar11 = _objc_msgSend(local_70,local_78);
          uVar9 = auVar11._8_8_;
          local_79 = auVar11._0_8_ == 0;
          bVar7 = 0x81aafd0 < (iVar10 + 0xd5828f10U ^ 0x852c952d) + 0x47ab5e41;
          local_a8 = 0x3390b685;
          iVar10 = -0x643ccbff;
          goto LAB_002ff1d8;
        }
      }
      else if (local_a8 == 0x34bc9b14) {
        local_a8 = -0x43fb16ea;
      }
      else if (local_a8 == 0x3add0015) {
        _objc_retain(param_3,uVar9);
        _objc_retain(param_4);
        auVar11._8_8_ = extraout_x1_01;
        auVar11._0_8_ = local_70;
        local_a8 = 0x99ea28c;
      }
      else if (local_a8 == 0x380d0836) {
        _objc_release(param_4);
        _objc_release(param_3);
        return (bool)local_a3;
      }
      goto LAB_002fe554;
    }
    if (local_a8 < 0x6522b007) {
      if (local_a8 < 0x5dcfd16a) {
        if (local_a8 == 0x45a47eaf) {
          local_a8 = -0xd30224;
        }
        else if (local_a8 == 0x4f8c5db0) {
          local_88 = PTR_s_isNewInviteesMsg_0048b850;
          local_a8 = 0x328f035;
        }
        goto LAB_002fe554;
      }
      if (local_a8 == 0x5dcfd16a) {
        uVar2 = local_9c - local_a0;
        if (local_a1 == '\0') {
          uVar2 = local_a0 - local_9c;
        }
        local_a2 = 299 < uVar2;
        local_a8 = -0x4256b1ae;
        goto LAB_002fe554;
      }
      if (local_a8 == 0x5e1ba2ba) {
        _objc_release(local_70);
        auVar11._8_8_ = extraout_x1_04;
        auVar11._0_8_ = local_70;
        local_a8 = 0x76351423;
        goto LAB_002fe554;
      }
      if (local_a8 != 0x5f69fa99) goto LAB_002fe554;
      uVar2 = 0;
      if (DAT_004bca2c != 0) {
        uVar2 = DAT_004bca28 / DAT_004bca2c;
      }
      local_a0 = _objc_msgSend(param_4,local_98);
      local_a1 = local_a0 < local_9c;
      bVar7 = 0x5ef16129 < (uint)((ulong)((uVar2 | 0x471ef989) + 0x20024ed6) * 0xf897fdb >> 0x3b);
      iVar10 = 0x6b0ddc80;
      local_a8 = -0x5d29b6da;
      uVar9 = extraout_x1;
    }
    else if (local_a8 < 0x72e0d886) {
      if (local_a8 != 0x6522b007) {
        if (local_a8 == 0x6b0ddc80) {
          _objc_msgSend(param_4,local_98);
          auVar11._8_8_ = extraout_x1_02;
          auVar11._0_8_ = local_70;
          local_a8 = 0x5f69fa99;
        }
        else if (local_a8 == 0x72d8cce8) {
          local_a8 = 0x5f69fa99;
          if ((DAT_004bca20 + DAT_004bca24 + 0xba2c3b2U ^ 0x38220404 | 0x84d0a2e9) == 0xbee86db1) {
            local_a8 = 0x6b0ddc80;
          }
        }
        goto LAB_002fe554;
      }
      bVar7 = 0xb0240ef9 < (uVar1 ^ 0x20841820 | 0x8a396543) * -0x56ed0b37;
      iVar10 = 0x3add0015;
      local_a8 = 0x99ea28c;
    }
    else {
      if (local_a8 == 0x72e0d886) {
        uVar2 = (DAT_004bc9d8 & DAT_004bc9dc) + 0xed0cc885;
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
        auVar11 = _objc_retainAutoreleasedReturnValue();
        bVar8 = 0xa28be27 < uVar2;
        bVar7 = uVar2 == 0xa28be28;
        iVar10 = -0x82263b7;
        local_a8 = -0x5171961b;
        goto LAB_002ff248;
      }
      if (local_a8 == 0x76351423) {
        uVar2 = 0;
        if (DAT_004bca3c != 0) {
          uVar2 = DAT_004bca38 / DAT_004bca3c;
        }
        _objc_release(local_70);
        auVar4._8_8_ = extraout_x1_03;
        auVar4._0_8_ = local_70;
        auVar11._8_8_ = extraout_x1_03;
        auVar11._0_8_ = local_70;
        local_a8 = 0x76351423;
        if ((uint)((ulong)(uVar2 & 0xb547eef7 | 0x3406ae77) * 0x4f1eaa83 >> 0x3d) != 0x44e4614e) {
          local_a8 = 0x9ad4574;
          auVar11 = auVar4;
        }
        goto LAB_002fe554;
      }
      if (local_a8 != 0x7a024e20) goto LAB_002fe554;
      bVar7 = 0xe45500ec < ((DAT_004bc9c8 & DAT_004bc9cc) + 0x718d2d85 ^ 0x78d7b842);
      iVar10 = 0x7a024e20;
      local_a8 = 0x121603cd;
    }
LAB_002feeac:
    auVar3._8_8_ = uVar9;
    auVar3._0_8_ = local_70;
    auVar11._8_8_ = uVar9;
    auVar11._0_8_ = local_70;
    if (bVar7) {
      local_a8 = iVar10;
      auVar11 = auVar3;
    }
    goto LAB_002fe554;
  }
  if (-0x43fb16eb < local_a8) {
    if (local_a8 < -0x30378080) {
      if (local_a8 < -0x41a7db67) {
        if (local_a8 != -0x43fb16ea) {
          if (local_a8 == -0x4256b1ae) {
            local_a4 = local_a2;
            local_a8 = 0x5e1ba2ba;
            if ((DAT_004bca30 - DAT_004bca34 & 0x1001000aU | 0x2d6eece0) * -0x40e88ae != 0x1f0195eb)
            {
              local_a8 = 0x76351423;
            }
          }
          goto LAB_002fe554;
        }
        uVar2 = 0;
        if (DAT_004bc9b4 != 0) {
          uVar2 = DAT_004bc9b0 / DAT_004bc9b4;
        }
        uVar2 = (uVar2 * -0x3d2997e3 ^ 0x3b8a6e49) + 0x4cb7940b;
        bVar8 = 0xfd3af5cb < uVar2;
        bVar7 = uVar2 == 0xfd3af5cc;
        iVar10 = -0x501ca351;
        local_a8 = -0x533cf538;
      }
      else {
        if (local_a8 != -0x41a7db67) {
          if (local_a8 == -0x3da79846) {
            _objc_msgSend(param_4,local_88);
            uVar9 = extraout_x1_08;
            goto LAB_002ff004;
          }
          if (local_a8 == -0x32e29501) {
            local_a8 = 0x72d8cce8;
          }
          goto LAB_002fe554;
        }
        uVar2 = DAT_004bca18 & DAT_004bca1c ^ 0x80826010 | 0x4f659b6f;
        local_98 = PTR_s_m_uiCreateTime_0048b858;
        local_9c = _objc_msgSend(param_3);
        auVar11._8_8_ = extraout_x1_10;
        auVar11._0_8_ = local_70;
        bVar8 = 0x2cbf2cd7 < uVar2;
        bVar7 = uVar2 == 0x2cbf2cd8;
        iVar10 = 0x2a32a75e;
        local_a8 = -0x32e29501;
      }
    }
    else {
      if (-0xb1b1da1 < local_a8) {
        if (local_a8 == -0xb1b1da0) {
          local_a8 = -0x30378080;
        }
        else if (local_a8 == -0x82263b7) {
          _objc_msgSend(PTR_BubbleBoxConfig_0048c990,PTR_s_shared_00489458);
          _objc_retainAutoreleasedReturnValue();
          auVar11._8_8_ = extraout_x1_06;
          auVar11._0_8_ = local_70;
          local_a8 = 0x72e0d886;
        }
        else if (local_a8 == -0x5d2d645) {
          uVar2 = (DAT_004bca08 * DAT_004bca0c ^ 0x23e8099U) * -0x17508ec8 ^ 0x1a08cf8;
          local_89 = _objc_msgSend(param_4,local_88);
          bVar8 = 0xefcc1d20 < uVar2;
          bVar7 = uVar2 == 0xefcc1d21;
          local_a8 = -0x5d2d645;
          iVar10 = -0x4fe2dee6;
          uVar9 = extraout_x1_00;
          goto LAB_002ff174;
        }
        goto LAB_002fe554;
      }
      if (local_a8 != -0x30378080) {
        if (local_a8 == -0x1959b014) {
          local_a8 = -0x4256b1ae;
          if (local_89 == '\0') {
            local_a8 = -0x1305a892;
          }
          local_a2 = 1;
        }
        else if (local_a8 == -0x1305a892) {
          local_a8 = -0x41a7db67;
          if ((int)((long)((ulong)(DAT_004bca10 & DAT_004bca14) * 0xab8f68e5) >> 0x3f) * 0x2f187cd5
              == 0x40e986d3) {
            local_a8 = 0x2a32a75e;
          }
        }
        goto LAB_002fe554;
      }
      uVar2 = DAT_004bc9c0 + DAT_004bc9c4 + 0x27c8b43b;
      bVar8 = 0xf763e5ac < uVar2;
      bVar7 = uVar2 == 0xf763e5ad;
      iVar10 = 0x7a024e20;
      local_a8 = -0x6e73aabd;
    }
LAB_002ff248:
    if (!bVar8 || bVar7) {
      local_a8 = iVar10;
    }
    goto LAB_002fe554;
  }
  if (local_a8 < -0x5bb19648) {
    if (local_a8 < -0x6b41dfd2) {
      if (local_a8 == -0x73d8e70e) {
        _objc_msgSend(local_70,local_78);
        auVar11._8_8_ = extraout_x1_07;
        auVar11._0_8_ = local_70;
        local_a8 = 0x3390b685;
      }
      else if (local_a8 == -0x6e73aabd) {
        local_a8 = 0x7a024e20;
      }
      goto LAB_002fe554;
    }
    if (local_a8 != -0x6b41dfd2) {
      if (local_a8 == -0x643ccbff) {
        local_a8 = -0x4256b1ae;
        if (local_79 == '\0') {
          local_a8 = 0x4f8c5db0;
        }
        local_a2 = 0;
      }
      else if (local_a8 == -0x5d29b6da) {
        local_a8 = 0x5dcfd16a;
      }
      goto LAB_002fe554;
    }
    local_78 = PTR_s_mergeMode_0048ae40;
    bVar7 = 0x22fad2ef < (((uint)(DAT_004bc9e8 * DAT_004bc9ec) >> 5) / 0x708cfa1 ^ 0xa8b259a3);
    local_a8 = -0x6b41dfd2;
    iVar10 = 0x45a47eaf;
  }
  else {
    if (local_a8 < -0x501ca351) {
      if (local_a8 == -0x5bb19648) {
        local_a8 = -0x82263b7;
        if (((DAT_004bc9d0 - DAT_004bc9d4 ^ 0x99011U) & 0x296db019) != 0xe2d3f745) {
          local_a8 = 0x72e0d886;
        }
      }
      else if (local_a8 == -0x533cf538) {
        local_a8 = -0x501ca351;
      }
      else if (local_a8 == -0x5171961b) {
        local_a8 = -0x46db0564;
      }
      goto LAB_002fe554;
    }
    if (local_a8 == -0x501ca351) {
      uVar2 = 0;
      if (DAT_004bc9bc != 0) {
        uVar2 = DAT_004bc9b8 / DAT_004bc9bc;
      }
      local_65 = param_3 != 0 && param_4 != 0;
      bVar7 = 0xce29504 < (uVar2 ^ 0xd4f095aa);
      local_a8 = -0x501ca351;
      iVar10 = -0xb1b1da0;
    }
    else {
      if (local_a8 == -0x4fe2dee6) {
        local_a8 = -0x1959b014;
        goto LAB_002fe554;
      }
      if (local_a8 != -0x46db0564) goto LAB_002fe554;
      bVar7 = 0x1f9f589b < ((DAT_004bc9e0 & DAT_004bc9e4) * 0x2180645e ^ 0xb303aed2) / 0x3f8e42df;
      local_a8 = -0x6b41dfd2;
      iVar10 = 0x28ecef4b;
    }
  }
LAB_002ff1d8:
  auVar6._8_8_ = uVar9;
  auVar6._0_8_ = local_70;
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = local_70;
  if (bVar7) {
    local_a8 = iVar10;
    auVar11 = auVar6;
  }
  goto LAB_002fe554;
}



// #####################################
// ##### +[shared] @ 002fb7a4
// #####################################

/* Function Stack Size: 0x10 bytes */

ID BubbleMessageMerge::shared(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  bool bVar4;
  bool bVar5;
  SEL extraout_x1;
  SEL extraout_x1_00;
  SEL extraout_x1_01;
  SEL extraout_x1_02;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_b0 [8];
  int *local_a8;
  int local_9c;
  ID local_98;
  long local_90;
  char local_81;
  undefined1 *local_80;
  uint local_74;
  
  uVar1 = DAT_00479600;
  puVar3 = auStack_b0;
  local_74 = (uint)((ulong)(DAT_004bc780 + DAT_004bc784 ^ 0x58476014U | 0x8680956b) * 0xb3e21591 >>
                   0x3f);
  local_9c = 0x365c997a;
  local_a8 = &local_9c;
LAB_002fb880:
  puVar2 = local_80;
  if (local_9c < -0x7aa124) {
    if (local_9c < -0x3c93c548) {
      if (local_9c < -0x5a28b35b) {
        if (local_9c < -0x6d12fe2e) {
          if (local_9c == -0x7de23e20) {
            *(undefined **)(local_80 + 0x18) = &DAT_004807a8;
            *(ID *)(puVar2 + 0x20) = param_1;
            iVar8 = 0x1589de04;
          }
          else {
            if (local_9c != -0x77024436) goto LAB_002fb880;
            bVar5 = 0x43330d55 <
                    ((DAT_004bc7f8 ^ DAT_004bc7fc) & 0x11030c62 ^ 0x3072022 | 0xacf8d39c);
            iVar8 = -0x77024436;
            iVar7 = -0x5e0894f0;
LAB_002fbb4c:
            if (bVar5) {
              iVar8 = iVar7;
            }
          }
        }
        else {
          if (local_9c == -0x6d12fe2e) {
            *(code **)(local_80 + 0x10) = FUN_002fc2f8;
            uVar6 = (uint)((ulong)(DAT_004bc798 - DAT_004bc79c & 0xa389119bU | 0x21090081) *
                           0xa3c48ad9 >> 0x3e);
            bVar4 = 0x78fdfb14 < uVar6;
            bVar5 = uVar6 == 0x78fdfb15;
            iVar8 = -0x40528de1;
            iVar7 = 0x30a9223d;
            goto LAB_002fc09c;
          }
          if (local_9c != -0x5e0894f0) goto LAB_002fb880;
          iVar8 = 0x3cd419f5;
        }
      }
      else if (local_9c < -0x491c8768) {
        if (local_9c == -0x5a28b35b) {
          bVar5 = 0x6d0b7d93 <
                  (((DAT_004bc7d8 ^ DAT_004bc7dc) + 0x6f606c16) / 0x545e83af) * -0x5e975a49;
          iVar7 = 0x7d96a449;
LAB_002fc218:
          iVar8 = -0x5a28b35b;
          if (bVar5) {
            iVar8 = iVar7;
          }
        }
        else {
          if (local_9c != -0x55ea38b3) goto LAB_002fb880;
          *(undefined **)(puVar3 + -0x30) = PTR___NSConcreteGlobalBlock_00481610;
          *(undefined8 *)(puVar3 + -0x28) = uVar1;
          puVar3 = puVar3 + -0x30;
          iVar8 = -0x3c93c548;
        }
      }
      else {
        iVar8 = -0x5a28b35b;
        if (local_9c != -0x491c8768) {
          if (local_9c == -0x41a3942b) {
            bVar5 = 0x26fb479f <
                    (uint)((ulong)(DAT_004bc7d0 & DAT_004bc7d4 ^ 0x303882d8) * 0xa2829ec7 >> 0x3f);
            iVar7 = -0x491c8768;
            goto LAB_002fc218;
          }
          if (local_9c != -0x40528de1) goto LAB_002fb880;
          *(code **)(local_80 + 0x10) = FUN_002fc2f8;
          iVar8 = -0x6d12fe2e;
        }
      }
    }
    else if (local_9c < -0x21e3486e) {
      if (local_9c < -0x269b8072) {
        if (local_9c == -0x3c93c548) {
          local_80 = puVar3 + -0x30;
          *(undefined **)(puVar3 + -0x30) = PTR___NSConcreteGlobalBlock_00481610;
          *(undefined8 *)(puVar3 + -0x28) = uVar1;
          puVar3 = local_80;
          iVar8 = -0x3a497985;
          if ((((DAT_004bc788 + DAT_004bc78c) * 0x1b43fb38 ^ 0xa4405c62U) & 0xe4e2dcea) < 0xae019ac)
          {
            iVar8 = -0x3c93c548;
          }
        }
        else {
          if (local_9c != -0x3a497985) goto LAB_002fb880;
          iVar8 = 0x43b938ca;
        }
      }
      else {
        iVar8 = -0x77024436;
        if (local_9c != -0x269b8072) {
          if (local_9c != -0x22d08d51) goto LAB_002fb880;
          bVar5 = 0x59db675 < ((DAT_004bc7b0 ^ DAT_004bc7b4 | 0xae7dba08) + 0x1b8477d ^ 0x10239533);
          iVar7 = -0x21e3486e;
          iVar8 = 0x71c4e0cd;
LAB_002fc2b0:
          if (bVar5) {
            iVar8 = iVar7;
          }
        }
      }
    }
    else if (local_9c < -0x1d742b5d) {
      if (local_9c == -0x21e3486e) {
        iVar8 = DAT_004bc7b8 + DAT_004bc7bc;
        _dispatch_once(&DAT_004d1af0,local_80);
        bVar5 = iVar8 == -0x5b43e71b;
        iVar7 = 0x71c4e0cd;
        iVar8 = 0x244ec204;
        param_2 = extraout_x1_01;
        goto LAB_002fc174;
      }
      if (local_9c != -0x1e101aa3) goto LAB_002fb880;
      iVar8 = 0x43cd9c7b;
    }
    else if (local_9c == -0x1d742b5d) {
LAB_002fbec0:
      iVar8 = -0xe632c77;
    }
    else {
      if (local_9c != -0xe632c77) {
        if (local_9c == -0xba0f74c) {
          bVar5 = 0xdeb03d3b <
                  ((DAT_004bc7a0 & DAT_004bc7a4) * -0x3ec2bac4 + 0x1c978a78 | 0x12b4b6dc);
          iVar8 = 0x1589de04;
          iVar7 = -0x7de23e20;
          goto LAB_002fbb4c;
        }
        goto LAB_002fb880;
      }
      iVar8 = 0x13a43ed9;
      if (DAT_004bc7e0 * DAT_004bc7e4 != 0x1a2ff955) {
        iVar8 = 0x565989e4;
      }
    }
  }
  else if (local_9c < 0x43b938ca) {
    if (local_9c < 0x244ec204) {
      if (local_9c < 0x13a43ed9) {
        if (local_9c == -0x7aa124) {
          _objc_retain(DAT_004d1ae8,param_2);
          _objc_autoreleaseReturnValue();
          param_2 = extraout_x1_00;
          iVar8 = 0x9cc1b03;
        }
        else {
          if (local_9c != 0x9cc1b03) goto LAB_002fb880;
          local_98 = DAT_004d1ae8;
          _objc_retain(DAT_004d1ae8,param_2);
          _objc_autoreleaseReturnValue(local_98);
          param_2 = extraout_x1;
          iVar8 = 0x648eb233;
        }
      }
      else {
        iVar8 = 0x565989e4;
        if (local_9c != 0x13a43ed9) {
          if (local_9c != 0x1589de04) goto LAB_002fb880;
          *(undefined **)(local_80 + 0x18) = &DAT_004807a8;
          *(ID *)(puVar2 + 0x20) = param_1;
          local_81 = DAT_004d1af0 == -1;
          iVar8 = 0x1589de04;
          if (((DAT_004bc7a8 ^ DAT_004bc7ac) + 0xb40f50e9 ^ 0x7c903ab) * -0x678058dd != 0x55d2ac87)
          {
            iVar8 = 0x6b34bd68;
          }
        }
      }
    }
    else if (local_9c < 0x365c997a) {
      if (local_9c == 0x244ec204) {
        iVar8 = 0x71753c9c;
      }
      else {
        if (local_9c != 0x30a9223d) goto LAB_002fb880;
        iVar8 = -0xba0f74c;
      }
    }
    else {
      if (local_9c == 0x365c997a) {
        iVar8 = -0x3c93c548;
        if (0xe423c1bf < local_74) {
          iVar8 = -0x55ea38b3;
        }
        goto LAB_002fc2b4;
      }
      if (local_9c == 0x3cd10174) {
        bVar5 = 0xa7a258e3 < ((DAT_004bc7c8 | DAT_004bc7cc) & 0x9a6d74d1) / 0x7fa65745 + 0x1da60b4b;
        iVar7 = 0x74b561b0;
        iVar8 = -0x1d742b5d;
        goto LAB_002fc2b0;
      }
      if (local_9c != 0x3cd419f5) goto LAB_002fb880;
      iVar8 = 0x9cc1b03;
      if (((DAT_004bc800 * DAT_004bc804 & 0xcadb4865U) + 0xea0520a8 ^ 0x47d6435) < 0xcd46ca41) {
        iVar8 = -0x7aa124;
      }
    }
  }
  else {
    if (local_9c < 0x6b34bd68) {
      if (local_9c < 0x565989e4) {
        if (local_9c == 0x43b938ca) {
          uVar6 = 0;
          if (DAT_004bc794 != 0) {
            uVar6 = DAT_004bc790 / DAT_004bc794;
          }
          uVar6 = (uVar6 / 0x1161fe72 ^ 0xffffffff) & 0x210e0802;
          bVar4 = 0x6f2f0f9d < uVar6;
          bVar5 = uVar6 == 0x6f2f0f9e;
          iVar8 = -0x40528de1;
          iVar7 = -0x6d12fe2e;
          goto LAB_002fc09c;
        }
        if (local_9c == 0x43cd9c7b) {
          uVar6 = 0;
          if (DAT_004bc7f4 != 0) {
            uVar6 = DAT_004bc7f0 / DAT_004bc7f4;
          }
          iVar8 = -0x77024436;
          if ((uVar6 + 0xed1275e1 & 0xfe942558) == 0xa3855007) {
            iVar8 = -0x269b8072;
          }
          goto LAB_002fc2b4;
        }
      }
      else {
        if (local_9c == 0x565989e4) {
          uVar6 = (DAT_004bc7e8 ^ DAT_004bc7ec) / 0x3bfe5851 | 0xf6bf9df2;
          local_90 = DAT_004d1af0;
          bVar4 = 0xfc6e972f < uVar6;
          bVar5 = uVar6 == 0xfc6e9730;
          iVar8 = 0x13a43ed9;
          iVar7 = -0x1e101aa3;
LAB_002fc09c:
          if (!bVar4 || bVar5) {
            iVar8 = iVar7;
          }
          goto LAB_002fc2b4;
        }
        if (local_9c == 0x5a9ab0d5) {
          iVar8 = -0x41a3942b;
          goto LAB_002fc2b4;
        }
        if (local_9c == 0x648eb233) {
          return local_98;
        }
      }
      goto LAB_002fb880;
    }
    if (local_9c < 0x71c4e0cd) {
      if (local_9c == 0x6b34bd68) {
        bVar5 = local_81 == '\0';
        iVar7 = -0x22d08d51;
        iVar8 = 0x5a9ab0d5;
      }
      else {
        if (local_9c != 0x71753c9c) goto LAB_002fb880;
        bVar5 = (DAT_004bc7c0 ^ DAT_004bc7c4 ^ 0x84806840 | 0x5b7e80ae) / 0x1973f112 == 0x33ee9f7a;
        iVar7 = 0x74b561b0;
        iVar8 = 0x3cd10174;
      }
LAB_002fc174:
      if (bVar5) {
        iVar8 = iVar7;
      }
    }
    else {
      if (local_9c == 0x71c4e0cd) {
        _dispatch_once(&DAT_004d1af0,local_80);
        param_2 = extraout_x1_02;
        iVar8 = -0x21e3486e;
        goto LAB_002fc2b4;
      }
      iVar8 = 0x3cd10174;
      if (local_9c != 0x74b561b0) {
        if (local_9c == 0x7d96a449) goto LAB_002fbec0;
        goto LAB_002fb880;
      }
    }
  }
LAB_002fc2b4:
  *local_a8 = iVar8;
  goto LAB_002fb880;
}



// #####################################
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
// ##### +[util_shouldShowMessageTime:] @ 002a1ae0
// #####################################

/* WARNING: Removing unreachable block (ram,0x002a4f94) */
/* Function Stack Size: 0x18 bytes */

bool BubbleBoxUtil::shouldShowMessageTime_(ID param_1,SEL param_2,ID param_3)

{
  char cVar1;
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
  int iVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  undefined8 uVar27;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  uint uVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  int local_1d8;
  byte local_1d1;
  long local_1d0;
  ID local_1c8;
  byte local_1b9;
  ID local_1b8;
  byte local_1aa;
  byte local_1a9;
  ID local_1a8;
  byte local_199;
  ID local_198;
  long local_190;
  ID local_188;
  byte local_179;
  undefined8 local_178;
  char local_169;
  undefined *local_168;
  long local_160;
  ID local_158;
  ID local_150;
  undefined *local_148;
  char local_139;
  undefined8 local_138;
  char local_129;
  undefined *local_128;
  char local_119;
  undefined *local_118;
  char local_109;
  long local_108;
  undefined *local_100;
  char local_f1;
  undefined *local_f0;
  int local_e4;
  undefined *local_e0;
  char local_d1;
  undefined *local_d0;
  char local_c1;
  long local_c0;
  char local_b1;
  long local_b0;
  undefined8 local_a8;
  ID local_a0;
  undefined *local_98;
  char local_8a;
  char local_89;
  undefined *local_88;
  undefined8 local_80;
  undefined *local_78;
  byte local_6f;
  byte local_6e;
  char local_6d;
  
  iVar23 = DAT_004d1a30;
  auVar29._8_8_ = param_2;
  auVar29._0_8_ = local_a8;
  local_1d8 = -0x4b8355eb;
LAB_002a1ba0:
  uVar27 = auVar29._8_8_;
  auVar31._8_8_ = uVar27;
  auVar31._0_8_ = local_108;
  auVar22._8_8_ = uVar27;
  auVar22._0_8_ = local_108;
  auVar21._8_8_ = uVar27;
  auVar21._0_8_ = local_108;
  auVar20._8_8_ = uVar27;
  auVar20._0_8_ = local_108;
  auVar19._8_8_ = uVar27;
  auVar19._0_8_ = local_108;
  auVar18._8_8_ = uVar27;
  auVar18._0_8_ = local_108;
  auVar30._8_8_ = uVar27;
  auVar30._0_8_ = local_138;
  auVar17._8_8_ = uVar27;
  auVar17._0_8_ = local_138;
  auVar16._8_8_ = uVar27;
  auVar16._0_8_ = local_138;
  auVar15._8_8_ = uVar27;
  auVar15._0_8_ = local_138;
  auVar14._8_8_ = uVar27;
  auVar14._0_8_ = local_138;
  local_a8 = auVar29._0_8_;
  if (-0x55b3b88 < local_1d8) {
    if (local_1d8 < 0x3acd2827) {
      if (local_1d8 < 0x1662da60) {
        if (local_1d8 < 0x49ce0c8) {
          if (local_1d8 < 0x1b48463) {
            if (local_1d8 < -0xb43706) {
              if (local_1d8 == -0x55b3b87) {
                _objc_msgSend(local_1b8,PTR_s_b_isCompleted_0048b668);
                uVar27 = _objc_retainAutoreleasedReturnValue();
                _objc_msgSend(uVar27,PTR_s_boolValue_0048b240);
                auVar29._8_8_ = extraout_x1_30;
                auVar29._0_8_ = local_a8;
                local_1d8 = -0x757e77e4;
              }
              else if (local_1d8 == -0x3c58c1a) {
                bVar24 = (DAT_004b8f40 | DAT_004b8f44) == 0xf199e919;
                local_1d8 = -0x3029afb3;
                iVar26 = -0x53652617;
                goto LAB_002a3f30;
              }
              goto LAB_002a1ba0;
            }
            if (local_1d8 == -0xb43706) {
              uVar28 = (DAT_004b8f28 + DAT_004b8f2c + 0x2f02fa33U | 0x323f34c5) ^ 0xbdd6b8e9;
              DAT_004d1a30 = 1;
              _objc_retain(param_3);
              bVar25 = 0xf2a2f90e < uVar28;
              bVar24 = uVar28 == 0xf2a2f90f;
              iVar26 = 0x3e2ef09a;
              uVar27 = extraout_x1_31;
              goto LAB_002a4e20;
            }
            if (local_1d8 != -0x5b2d4) goto LAB_002a1ba0;
            uVar28 = ((DAT_004b9058 & DAT_004b905c) + 0x663787e5 | 0xdc63d9fa) * -0x39975629;
            bVar25 = 0xf5b56c11 < uVar28;
            bVar24 = uVar28 == 0xf5b56c12;
            local_1d8 = -0x5b2d4;
            iVar26 = 0x734c6665;
          }
          else {
            if (0x2347f4d < local_1d8) {
              if (local_1d8 == 0x2347f4e) {
                iVar26 = -0x17fd9ee5;
                cVar1 = local_b1;
                goto LAB_002a466c;
              }
              if (local_1d8 == 0x32c93db) {
                _objc_msgSend(local_a8,PTR_s_currentBubble_0048a848);
                _objc_retainAutoreleasedReturnValue();
                _objc_release(local_a8);
                auVar29._8_8_ = extraout_x1_34;
                auVar29._0_8_ = local_a8;
                local_1d8 = 0x3871088d;
              }
              else if (local_1d8 == 0x454670c) {
                _objc_msgSend(local_1b8,PTR_s_b_isLastMessage_0048b508);
                auVar30 = _objc_retainAutoreleasedReturnValue();
                auVar29._8_8_ = auVar30._8_8_;
                auVar29._0_8_ = local_a8;
                local_178 = auVar30._0_8_;
                local_1d8 = 0xd41df5c;
              }
              goto LAB_002a1ba0;
            }
            if (local_1d8 != 0x1b48463) {
              if (local_1d8 == 0x228c53f) {
                local_1d8 = -0x3c58c1a;
                cVar1 = local_89;
                goto LAB_002a504c;
              }
              goto LAB_002a1ba0;
            }
            uVar28 = ((DAT_004b90c0 ^ DAT_004b90c4) & 0x55863055) + 0x251169f1 ^ 0xf84f7176;
            bVar25 = 0x621638e2 < uVar28;
            bVar24 = uVar28 == 0x621638e3;
            local_1d8 = 0x24026079;
            iVar26 = -0x6ca1b38a;
          }
LAB_002a4f20:
          auVar8._8_8_ = uVar27;
          auVar8._0_8_ = local_a8;
          auVar29._8_8_ = uVar27;
          auVar29._0_8_ = local_a8;
          if (!bVar25 || bVar24) {
            local_1d8 = iVar26;
            auVar29 = auVar8;
          }
          goto LAB_002a1ba0;
        }
        if (0xb3b4894 < local_1d8) {
          if (local_1d8 < 0x117e4caa) {
            if (local_1d8 == 0xb3b4895) {
              local_1d8 = 0x5ecdba4;
            }
            else if ((local_1d8 == 0xd41df5c) &&
                    (local_1d8 = -0x690dd356, (DAT_004b90e0 & DAT_004b90e4) != 0x69368e51)) {
              local_1d8 = 0x3866ce08;
            }
          }
          else if (local_1d8 == 0x117e4caa) {
            local_d0 = PTR_s_enabledMsgTime_0048ad10;
            local_1d8 = -0x3214e48e;
          }
          else if (local_1d8 == 0x14e67522) {
            local_e4 = _objc_msgSend(param_3,local_e0);
            auVar29._8_8_ = extraout_x1_26;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x49ce0c8;
          }
          else if (local_1d8 == 0x15acdf8c) {
            bVar24 = ((DAT_004b8f10 + DAT_004b8f14 ^ 0x20d2c9ddU) + 0x16ab6b30 & 0x3b591f3f) ==
                     0x6f250bff;
            local_1d8 = -0x3e7db61f;
            iVar26 = 0x629c0f7a;
            goto LAB_002a4b2c;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < 0x5ecdba4) {
          if (local_1d8 == 0x49ce0c8) {
            local_1d8 = -0x3be5ac67;
            if (local_e4 != 0) {
              local_1d8 = -0x6c796c35;
            }
LAB_002a5050:
            local_1aa = 0;
          }
          else if (local_1d8 == 0x4b78597) {
            local_1d8 = -0x3a20b351;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == 0x5ecdba4) {
          bVar24 = 0x55c1ecc5 <
                   ((uint)((ulong)(DAT_004b8f80 & DAT_004b8f84) * 0xb8f7315 >> 0x3b) | 0x81cd7dae);
          iVar26 = -0x72664890;
          local_1d8 = 0x20bcf069;
          goto LAB_002a531c;
        }
        if (local_1d8 == 0x77f00d2) {
          local_1d8 = -0x6c796c35;
          if (local_109 == '\0') {
            local_1d8 = -0xeb01707;
          }
          goto LAB_002a4824;
        }
        if (local_1d8 != 0x9580687) goto LAB_002a1ba0;
        local_1b8 = local_188;
        uVar28 = 0;
        if (DAT_004b90d4 != 0) {
          uVar28 = DAT_004b90d0 / DAT_004b90d4;
        }
        bVar24 = 0xecd21d00 < (uVar28 + 0xfde9a648 ^ 0x64bd8d50);
        local_1d8 = -0x757e77e4;
        iVar26 = -0x55b3b87;
        auVar31 = auVar19;
      }
      else {
        if (local_1d8 < 0x24026079) {
          if (local_1d8 < 0x1de7694d) {
            if (local_1d8 < 0x1aaf0262) {
              if (local_1d8 == 0x1662da60) {
                _objc_msgSend(param_3,local_148);
                local_150 = _objc_retainAutoreleasedReturnValue();
                local_158 = param_3;
                if (local_150 != 0) {
                  local_158 = local_150;
                }
                _objc_retain();
                auVar29._8_8_ = extraout_x1_19;
                auVar29._0_8_ = local_a8;
                local_1d8 = -0x5d839895;
              }
              else if (local_1d8 == 0x19188008) {
                local_1d8 = -0x5ffa9940;
              }
            }
            else if (local_1d8 == 0x1aaf0262) {
              _objc_release(local_b0,uVar27);
              auVar29._8_8_ = extraout_x1_14;
              auVar29._0_8_ = local_a8;
              local_1d8 = -0x565e1cc1;
            }
            else {
              if (local_1d8 == 0x1d7369d5) {
                bVar24 = local_6d == '\0';
                iVar26 = -0x30d84230;
                local_1d8 = -0x16ab03fa;
                auVar30 = auVar14;
                goto LAB_002a502c;
              }
              if (local_1d8 == 0x1dbde4db) {
                bVar24 = 0xe0c9bc92 <
                         (uint)((ulong)(DAT_004b9020 & DAT_004b9024 ^ 0x24f3d196) * 0x581ed6d1 >>
                               0x3d);
                local_1d8 = 0x27cb0834;
                iVar26 = -0x3f5e9ffd;
                auVar31 = auVar18;
                goto LAB_002a4c48;
              }
            }
          }
          else if (local_1d8 < 0x1ef24739) {
            if (local_1d8 == 0x1de7694d) {
              _objc_release(local_1d0,uVar27);
              auVar29._8_8_ = extraout_x1_20;
              auVar29._0_8_ = local_a8;
              local_1d8 = 0x3ee7bea4;
            }
            else if (local_1d8 == 0x1dfd3ae6) {
              iVar26 = -0x6f468b98;
              cVar1 = local_c1;
LAB_002a466c:
              local_1d8 = 0x2498dc64;
              if (cVar1 == '\0') {
                local_1d8 = iVar26;
              }
              local_198 = local_a0;
              local_190 = local_b0;
              local_199 = 0;
            }
          }
          else if (local_1d8 == 0x1ef24739) {
            local_1d8 = -0x6882102e;
          }
          else if (local_1d8 == 0x20bcf069) {
            _objc_release(local_c0,uVar27);
            auVar29._8_8_ = extraout_x1_23;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x72664890;
          }
          else if (local_1d8 == 0x20dfc9a7) {
            local_98 = PTR_BubbleBoxConfig_0048c990;
            local_1d8 = 0x3b4e43a3;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < 0x2f23ba51) {
          if (local_1d8 < 0x27cb0834) {
            if (local_1d8 == 0x24026079) {
              local_148 = PTR_s_parentModel_0048b558;
              local_1d8 = -0x220e7159;
            }
            else if (local_1d8 == 0x2498dc64) {
              local_1b9 = local_199;
              local_1d0 = local_190;
              local_1c8 = local_198;
              local_1d8 = 0x3ee7bea4;
              if (((DAT_004b90f0 * DAT_004b90f4 ^ 0x6e8d43e6U) * 0x4b72bd5e | 0x5689c39f) ==
                  0x95ea86eb) {
                local_1d8 = 0x1de7694d;
              }
            }
          }
          else if (local_1d8 == 0x27cb0834) {
            local_109 = local_108 == 2;
            local_1d8 = 0x77f00d2;
          }
          else {
            if (local_1d8 == 0x2967f71c) {
              bVar24 = 0x931e14a8 < (DAT_004b9040 + DAT_004b9044) * 0x6c058e70 + 0xd8adcee5U;
              iVar26 = -0x598509f8;
              goto LAB_002a50f4;
            }
            if (local_1d8 == 0x2ce0643f) {
              local_1d8 = 0x7b1e5bc4;
            }
          }
          goto LAB_002a1ba0;
        }
        if (0x356a99e3 < local_1d8) {
          if (local_1d8 == 0x356a99e4) {
            _objc_msgSend(local_80,local_128);
            auVar29._8_8_ = extraout_x1_15;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x4e534c6c;
          }
          else if (local_1d8 == 0x3866ce08) {
            uVar28 = DAT_004b90e8 | DAT_004b90ec;
            local_179 = _objc_msgSend(local_178,local_168);
            _objc_release(local_178);
            auVar2._8_8_ = extraout_x1_24;
            auVar2._0_8_ = local_a8;
            auVar29._8_8_ = extraout_x1_24;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3acd2827;
            if ((uVar28 ^ 0x277c075c) * -0x3d9b95de == 0x7de29974) {
              local_1d8 = 0x3866ce08;
              auVar29 = auVar2;
            }
          }
          else if (local_1d8 == 0x3871088d) {
            uVar28 = (DAT_004b8f68 + DAT_004b8f6c ^ 0xfd96f59cU) * -0x6f2d2a7 + 0x720b63b3;
            _objc_msgSend(local_a8,PTR_s_currentBubble_0048a848);
            local_b0 = _objc_retainAutoreleasedReturnValue();
            _objc_release(local_a8);
            local_b1 = local_b0 == 0;
            bVar25 = 0xad79996f < uVar28;
            bVar24 = uVar28 == 0xad799970;
            local_1d8 = 0x3871088d;
            iVar26 = 0x6e56f606;
            uVar27 = extraout_x1_03;
            goto LAB_002a4f20;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == 0x2f23ba51) {
          local_1d8 = 0x2498dc64;
          local_199 = local_179;
          local_190 = local_160;
          local_198 = local_1b8;
          goto LAB_002a1ba0;
        }
        if (local_1d8 != 0x2f24c61e) goto LAB_002a1ba0;
        uVar28 = DAT_004b9018 ^ DAT_004b901c;
        auVar31 = _objc_msgSend(local_80,local_100);
        bVar24 = 0x5a5344e4 < (uVar28 + 0x59735185 & 0x888ea97b) + 0xd69540b3;
        local_1d8 = 0x2f24c61e;
        iVar26 = 0x3ca7e41d;
      }
    }
    else {
      if (0x5569cb39 < local_1d8) {
        if (0x6da0609c < local_1d8) {
          if (local_1d8 < 0x7a0d1725) {
            if (local_1d8 < 0x734c6665) {
              if (local_1d8 == 0x6da0609d) {
                DAT_004d1a10 = '\x01';
                local_1d8 = -0x76900a51;
                if (((DAT_004b8fa8 - DAT_004b8fac) + 0x1ed4379fU & 0x6a50c400) < 0x800cf6a) {
                  local_1d8 = 0x6da0609d;
                }
              }
              else if (local_1d8 == 0x6e56f606) {
                local_1d8 = 0x2347f4e;
              }
            }
            else if (local_1d8 == 0x734c6665) {
              local_1d8 = 0x49cb1331;
              cVar1 = local_119;
LAB_002a464c:
              if (cVar1 == '\0') {
                local_1d8 = -0x6c796c35;
              }
LAB_002a4824:
              local_1aa = 1;
            }
            else if (local_1d8 == 0x745ae111) {
              iVar26 = DAT_004b9048 + DAT_004b904c;
              local_119 = _objc_msgSend(local_80,local_118);
              bVar24 = 0x66688fe5 < (iVar26 * -0x736b55b0 | 0xd6e91bafU) + 0xf0a20576;
              iVar26 = -0x295b397c;
              uVar27 = extraout_x1_33;
LAB_002a50f4:
              auVar10._8_8_ = uVar27;
              auVar10._0_8_ = local_a8;
              auVar29._8_8_ = uVar27;
              auVar29._0_8_ = local_a8;
              local_1d8 = 0x745ae111;
              if (bVar24) {
                local_1d8 = iVar26;
                auVar29 = auVar10;
              }
            }
            else if (local_1d8 == 0x74f72cfa) {
              local_1d8 = -0x5942e29a;
            }
          }
          else if (local_1d8 < 0x7c366f89) {
            if (local_1d8 == 0x7a0d1725) {
              local_1d8 = 0x7c366f89;
            }
            else if (local_1d8 == 0x7b1e5bc4) {
              DAT_004b67bd = local_6f;
              DAT_004b67be = DAT_004b679e ^ 0xdc;
              DAT_004b67bf = DAT_004b679f ^ 0x98;
              DAT_004b67c0 = DAT_004b67a0 ^ 0x4c;
              DAT_004b67c1 = DAT_004b67a1 ^ 0xf1;
              DAT_004b67c2 = DAT_004b67a2 ^ 0xf5;
              DAT_004b67c3 = DAT_004b67a3 ^ 0x72;
              DAT_004b67c4 = DAT_004b67a4 ^ 0xb7;
              DAT_004b67c5 = DAT_004b67a5 ^ 0xf1;
              DAT_004b67c6 = DAT_004b67a6 ^ 0xc0;
              DAT_004b67c7 = DAT_004b67a7 ^ 0x8e;
              local_1d8 = -0x30d84230;
            }
          }
          else if (local_1d8 == 0x7c366f89) {
            _objc_release(local_a0,uVar27);
            auVar29._8_8_ = extraout_x1_37;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x117e4caa;
          }
          else {
            if (local_1d8 == 0x7da9dfe5) {
              local_88 = PTR_s_enabled_0048a890;
              local_89 = _objc_msgSend(local_80);
              bVar24 = false;
              local_1d8 = -0x1ad280af;
              iVar26 = 0x228c53f;
              uVar27 = extraout_x1_05;
              goto LAB_002a4b2c;
            }
            if (local_1d8 == 0x7cb19c3c) {
              return (bool)local_1d1;
            }
          }
          goto LAB_002a1ba0;
        }
        if (0x62077e6c < local_1d8) {
          if (local_1d8 < 0x6701d804) {
            if (local_1d8 == 0x62077e6d) {
              local_1d8 = -0x5167d16a;
              cVar1 = local_d1;
LAB_002a504c:
              if (cVar1 == '\0') {
                local_1d8 = -0x6c796c35;
              }
              goto LAB_002a5050;
            }
            if (local_1d8 == 0x629c0f7a) {
              uVar28 = (DAT_004b8f18 | DAT_004b8f1c) + 0xa875942e ^ 0x7722f07d;
              DAT_004b67b3 = local_6e ^ 3;
              DAT_004b67b4 = DAT_004b6794 ^ 0x15;
              DAT_004b67b5 = DAT_004b6795 ^ 0xb2;
              DAT_004b67b6 = DAT_004b6796 ^ 0x3a;
              DAT_004b67b7 = DAT_004b6797 ^ 0x95;
              DAT_004b67b8 = DAT_004b6798 ^ 0xa0;
              DAT_004b67b9 = DAT_004b6799 ^ 0x3c;
              DAT_004b67ba = DAT_004b679a ^ 0xef;
              DAT_004b67bb = DAT_004b679b ^ 0x28;
              DAT_004b67bc = DAT_004b679c ^ 5;
              local_6f = DAT_004b679d ^ 0xa3;
              bVar25 = 0x8e3a979c < uVar28;
              bVar24 = uVar28 == 0x8e3a979d;
              iVar26 = -0x3e7db61f;
              local_1d8 = 0x2ce0643f;
              goto LAB_002a4af4;
            }
          }
          else if (local_1d8 == 0x6701d804) {
            _objc_msgSend(param_3,PTR_s_chatContact_0048b658);
            _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = extraout_x1_25;
            auVar29._0_8_ = local_a8;
          }
          else if (local_1d8 == 0x69fbc876) {
            iVar26 = DAT_004b90b8 * DAT_004b90bc;
            uVar27 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b67d0);
            local_139 = _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar27);
            auVar4._8_8_ = extraout_x1_35;
            auVar4._0_8_ = local_a8;
            auVar29._8_8_ = extraout_x1_35;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x77244c3f;
            if (0x5124eb2a < (iVar26 * -0x74256734 & 0x3b53e78U) + 0xab8c32d) {
              local_1d8 = -0x202dbab8;
              auVar29 = auVar4;
            }
          }
          else if (local_1d8 == 0x6b81d875) {
            local_78 = PTR_s_shared_00489458;
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990);
            auVar30 = _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = auVar30._8_8_;
            auVar29._0_8_ = local_a8;
            local_80 = auVar30._0_8_;
            local_1d8 = -0x70d3c39b;
          }
          goto LAB_002a1ba0;
        }
        if (0x5853f5a5 < local_1d8) {
          if (local_1d8 == 0x5853f5a6) {
            bVar24 = (uint)((ulong)(DAT_004b9098 - DAT_004b909c & 0xe94feff0) * 0x25ec3d61 >> 0x3d)
                     == 0xbc3b54c2;
            iVar26 = 0x5853f5a6;
            local_1d8 = -0x28aedf8d;
            auVar30 = auVar15;
            goto LAB_002a502c;
          }
          if (local_1d8 == 0x59b3eb12) {
            local_1d8 = 0x2967f71c;
          }
          else if (local_1d8 == 0x60258d3c) {
            iVar26 = DAT_004b8fe8 + DAT_004b8fec;
            local_f1 = _objc_msgSend(local_80,local_f0);
            auVar31._8_8_ = extraout_x1_00;
            bVar24 = 0x7af0481f < (iVar26 + 0xb819452dU ^ 0xcf27dacd);
            local_1d8 = 0x60258d3c;
            iVar26 = 0x482847a9;
            goto LAB_002a4c48;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != 0x5569cb3a) {
          if (local_1d8 == 0x57b9a937) {
            local_1d8 = -0x3532b923;
          }
          goto LAB_002a1ba0;
        }
        local_128 = PTR_s_enabledMergeOnlyRoom_0048ae30;
        bVar24 = (uint)((ulong)(DAT_004b9068 - DAT_004b906c & 0x52a21de6) * 0x6c1437f >> 0x39) ==
                 0x3a9b6e0b;
        iVar26 = -0x30531c23;
        local_1d8 = -0x4727214d;
        auVar30 = auVar16;
LAB_002a502c:
        local_138 = auVar30._0_8_;
        auVar13._8_8_ = auVar30._8_8_;
        auVar13._0_8_ = local_a8;
        auVar29._8_8_ = auVar30._8_8_;
        auVar29._0_8_ = local_a8;
        if (bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar13;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < 0x47625ecf) {
        if (local_1d8 < 0x3ce757c8) {
          if (local_1d8 < 0x3b7265c0) {
            if (local_1d8 == 0x3acd2827) {
              local_1d8 = 0x2f23ba51;
            }
            else if (local_1d8 == 0x3b4e43a3) {
              _objc_msgSend(local_98,local_78);
              auVar30 = _objc_retainAutoreleasedReturnValue();
              auVar29._8_8_ = auVar30._8_8_;
              auVar29._0_8_ = local_a8;
              local_a0 = auVar30._0_8_;
              local_1d8 = -0x295672dc;
            }
          }
          else if (local_1d8 == 0x3b7265c0) {
            local_1d8 = -0x667ca4bb;
            local_1a8 = local_1c8;
            local_1a9 = local_1b9;
          }
          else if (local_1d8 == 0x3ca7e41d) {
            local_1d8 = 0x1dbde4db;
          }
        }
        else if (local_1d8 < 0x3eddaef9) {
          if (local_1d8 == 0x3ce757c8) {
            DAT_004d1a10 = '\x01';
            local_1d8 = 0x6da0609d;
          }
          else if (local_1d8 == 0x3e2ef09a) {
            local_1d8 = 0x6b81d875;
          }
        }
        else if (local_1d8 == 0x3eddaef9) {
          uVar28 = DAT_004b8f78 - DAT_004b8f7c;
          _objc_msgSend(local_b0,PTR_s_name_0048a060);
          auVar30 = _objc_retainAutoreleasedReturnValue();
          auVar3._8_8_ = auVar30._8_8_;
          auVar3._0_8_ = local_a8;
          auVar29._8_8_ = auVar30._8_8_;
          auVar29._0_8_ = local_a8;
          local_c0 = auVar30._0_8_;
          local_c1 = local_c0 == 0;
          local_1d8 = 0x3eddaef9;
          if (0x296e87b4 < (uVar28 & 0xa0ddb4ba) + 0x44ade1ff) {
            local_1d8 = 0xb3b4895;
            auVar29 = auVar3;
          }
        }
        else if (local_1d8 == 0x3ee7bea4) {
          _objc_release(local_1d0,uVar27);
          auVar29._8_8_ = extraout_x1_32;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x3b7265c0;
        }
        else if (local_1d8 == 0x46d468fc) {
          local_1d8 = 0x14e67522;
        }
        goto LAB_002a1ba0;
      }
      if (0x4caf5d21 < local_1d8) {
        if (local_1d8 < 0x4f1b527c) {
          if (local_1d8 != 0x4caf5d22) {
            if (local_1d8 == 0x4e534c6c) {
              uVar28 = DAT_004b9078 - DAT_004b907c;
              local_129 = _objc_msgSend(local_80,local_128);
              auVar31._8_8_ = extraout_x1_08;
              bVar24 = 0x5e788db5 < ((uVar28 | 0x14cc68c7) + 0xb4444d9c & 0xd054745b);
              local_1d8 = 0x356a99e4;
              iVar26 = -0x75c8c75f;
              goto LAB_002a4c48;
            }
            goto LAB_002a1ba0;
          }
          uVar28 = (DAT_004b90a8 | DAT_004b90ac | 0xfff6ff9b) ^ 0x5bff384;
          _objc_retain(param_3);
          bVar25 = 0xb10d253a < uVar28;
          bVar24 = uVar28 == 0xb10d253b;
          iVar26 = 0x47625ecf;
          local_1d8 = -0x66e39b31;
          uVar27 = extraout_x1_18;
        }
        else {
          if (local_1d8 == 0x4f1b527c) {
            iVar26 = _objc_msgSend(local_138,PTR_s_isChatroom_0048b660);
            _objc_release(local_138);
            auVar29._8_8_ = extraout_x1_13;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x1ab5e59c;
            if (iVar26 == 0) {
              local_1d8 = -0x6c796c35;
            }
            local_1aa = 1;
            goto LAB_002a1ba0;
          }
          if (local_1d8 == 0x51e47feb) {
            _objc_release(local_80,uVar27);
            _objc_release(param_3);
            auVar29._8_8_ = extraout_x1_22;
            auVar29._0_8_ = local_a8;
            goto LAB_002a1ba0;
          }
          if (local_1d8 != 0x53abc420) goto LAB_002a1ba0;
          uVar28 = (DAT_004b9070 + DAT_004b9074 | 0x54cf456dU) * 0x7ed9f162 + 0xf47c7630;
          bVar25 = 0xfae9c7b1 < uVar28;
          bVar24 = uVar28 == 0xfae9c7b2;
          iVar26 = 0x4e534c6c;
          local_1d8 = 0x356a99e4;
        }
LAB_002a4af4:
        auVar11._8_8_ = uVar27;
        auVar11._0_8_ = local_a8;
        auVar29._8_8_ = uVar27;
        auVar29._0_8_ = local_a8;
        if (!bVar25 || bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar11;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < 0x49cb1331) {
        if (local_1d8 == 0x47625ecf) {
          _objc_retain(param_3);
          auVar29._8_8_ = extraout_x1_17;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x4caf5d22;
        }
        else if (local_1d8 == 0x482847a9) {
          local_1d8 = -0x49a4cfe0;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != 0x49cb1331) {
        if (local_1d8 == 0x4b4fa4ec) {
          local_1d8 = -0x12145ed7;
        }
        else if (local_1d8 == 0x4baceb4e) {
          local_1d8 = -0x352df735;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b9064 != 0) {
        uVar28 = DAT_004b9060 / DAT_004b9064;
      }
      bVar24 = 0x2242a77b < ((uVar28 | 0x3d2b0a56) ^ 0x7cf2cd46) + 0x59a8299;
      local_1d8 = -0x30531c23;
      iVar26 = 0x5569cb3a;
      auVar31 = auVar20;
    }
LAB_002a4c48:
    local_108 = auVar31._0_8_;
    auVar12._8_8_ = auVar31._8_8_;
    auVar12._0_8_ = local_a8;
    auVar29._8_8_ = auVar31._8_8_;
    auVar29._0_8_ = local_a8;
    if (bVar24) {
      local_1d8 = iVar26;
      auVar29 = auVar12;
    }
    goto LAB_002a1ba0;
  }
  if (local_1d8 < -0x3e565236) {
    if (local_1d8 < -0x5fffda92) {
      if (local_1d8 < -0x6ca1b38a) {
        if (local_1d8 < -0x745971b1) {
          if (local_1d8 < -0x75c8c75f) {
            if (local_1d8 == -0x77244c3f) {
              local_1d8 = -0xae864ec;
            }
            else if (local_1d8 == -0x76900a51) {
              local_1d8 = -0x5b70860f;
            }
          }
          else if (local_1d8 == -0x75c8c75f) {
            local_1d8 = -0xe35fa38;
          }
          else if (local_1d8 == -0x757e77e4) {
            uVar28 = 0;
            if (DAT_004b90dc != 0) {
              uVar28 = DAT_004b90d8 / DAT_004b90dc;
            }
            _objc_msgSend(local_1b8,PTR_s_b_isCompleted_0048b668);
            local_160 = _objc_retainAutoreleasedReturnValue();
            local_168 = PTR_s_boolValue_0048b240;
            local_169 = _objc_msgSend();
            auVar31._8_8_ = extraout_x1_09;
            bVar24 = 0x4f91f1bf < ((uVar28 & 0x4df7fb2) + 0x67e1f777 | 0xef3765a0);
            local_1d8 = -0x757e77e4;
            iVar26 = -0x339affd6;
            goto LAB_002a4c48;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 < -0x70d3c39b) {
          if (local_1d8 == -0x745971b1) {
            uVar28 = ((DAT_004b8f00 - DAT_004b8f04) + 0xdbccd432U & 0xe441841) + 0x733cdedf;
            bVar25 = 0x9ce79bcc < uVar28;
            bVar24 = uVar28 == 0x9ce79bcd;
            local_1d8 = -0xea7b7fc;
            iVar26 = -0x629efc3b;
            goto LAB_002a4f20;
          }
          if (local_1d8 == -0x72664890) {
            _objc_release(local_c0,uVar27);
            auVar29._8_8_ = extraout_x1_10;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x19188008;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 == -0x70d3c39b) {
          uVar28 = (uint)((ulong)((DAT_004b8f30 & DAT_004b8f34) + 0x35ab6552) * 0x3aca542f >> 0x3d)
                   | 0x61f40d82;
          bVar25 = 0x33d32503 < uVar28;
          bVar24 = uVar28 == 0x33d32504;
          iVar26 = -0x1ad280af;
          local_1d8 = 0x7da9dfe5;
          goto LAB_002a4af4;
        }
        if (local_1d8 == -0x6f468b98) {
          local_1d8 = 0x6da0609d;
          if ((DAT_004b8fa0 ^ DAT_004b8fa4) * 0x1d1352db + 0x9303c84b < 0x774505a3) {
            local_1d8 = 0x3ce757c8;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != -0x6d89edbe) goto LAB_002a1ba0;
        bVar24 = 0xf7b6e8e < ((DAT_004b8fe0 | DAT_004b8fe4) * 0x5d1fd7a7 + 0x4625e563) / 0x1cc19ced;
        local_1d8 = 0x60258d3c;
        iVar26 = -0x10a654c5;
      }
      else {
        if (-0x66e39b32 < local_1d8) {
          if (local_1d8 < -0x65da0ecd) {
            if (local_1d8 == -0x66e39b31) {
              local_1d8 = -0x3fcd6949;
            }
            else if (local_1d8 == -0x667ca4bb) {
              local_1aa = local_1a9;
              _objc_release(local_1a8,uVar27);
              auVar29._8_8_ = extraout_x1_07;
              auVar29._0_8_ = local_a8;
              local_1d8 = -0x6c796c35;
            }
            goto LAB_002a1ba0;
          }
          if (local_1d8 == -0x65da0ecd) {
            local_1d8 = -0x60656bbe;
            cVar1 = local_f1;
            goto LAB_002a464c;
          }
          if (local_1d8 != -0x629efc3b) {
            if (local_1d8 == -0x60656bbe) {
              local_1d8 = -0x5942e29a;
            }
            goto LAB_002a1ba0;
          }
          bVar24 = (uint)(DAT_004b8f08 - DAT_004b8f0c) / 0x2e6434ba == 0x8bde2ad8;
          iVar26 = -0xea7b7fc;
          local_1d8 = 0x1d7369d5;
          goto LAB_002a502c;
        }
        if (local_1d8 < -0x690f9f40) {
          if (local_1d8 == -0x6ca1b38a) {
            local_1d8 = 0x24026079;
          }
          else if (local_1d8 == -0x6c796c35) {
            local_1d1 = local_1aa;
            local_1d8 = -0x3e565236;
          }
          goto LAB_002a1ba0;
        }
        if (local_1d8 != -0x690f9f40) {
          if (local_1d8 == -0x690dd356) {
            _objc_msgSend(local_178,local_168);
            _objc_release(local_178);
            auVar29._8_8_ = extraout_x1_21;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3866ce08;
          }
          else if (local_1d8 == -0x6882102e) {
            bVar24 = ((DAT_004b8ff8 | DAT_004b8ffc) & 0x538a2934) == 0x35a0f2e5;
            local_1d8 = -0x6882102e;
            iVar26 = -0x65da0ecd;
            goto LAB_002a4b2c;
          }
          goto LAB_002a1ba0;
        }
        uVar28 = 0;
        if (DAT_004b9084 != 0) {
          uVar28 = DAT_004b9080 / DAT_004b9084;
        }
        bVar24 = 0x47d5dcaa < (uVar28 & 0x68014a0) * -0x2cd891b5;
        local_1d8 = -0x42d5c918;
        iVar26 = 0x6701d804;
        auVar31 = auVar22;
      }
      goto LAB_002a4c48;
    }
    if (local_1d8 < -0x5167d16a) {
      if (local_1d8 < -0x5b70860f) {
        if (local_1d8 < -0x5d839895) {
          if (local_1d8 == -0x5fffda92) {
            DAT_004d1a30 = 1;
            _objc_retain(param_3);
            auVar29._8_8_ = extraout_x1_27;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0xb43706;
          }
          else if ((local_1d8 == -0x5ffa9940) &&
                  (local_1d8 = -0x2d3839ff,
                  (((DAT_004b8f90 | DAT_004b8f94) ^ 0x25848820) & 0xaffc9960) < 0x4dad3c1f)) {
            local_1d8 = -0x2678bed7;
          }
        }
        else if (local_1d8 == -0x5d839895) {
          _objc_release(param_3,uVar27);
          _objc_release(local_150);
          auVar29._8_8_ = extraout_x1_28;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x9580687;
          local_188 = local_158;
        }
        else if (local_1d8 == -0x5ce1d068) {
          uVar28 = (int)((long)((ulong)(uint)(DAT_004b8fc0 * DAT_004b8fc4) * 0xc1549223) >> 0x3f) *
                   0x58ceacd + 0x61637bfc;
          bVar25 = 0xbb576a31 < uVar28;
          bVar24 = uVar28 == 0xbb576a32;
          iVar26 = -0x12145ed7;
          local_1d8 = 0x4b4fa4ec;
          goto LAB_002a4af4;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x5942e29a) {
        if (local_1d8 == -0x5b70860f) {
          uVar28 = 0;
          if (DAT_004b8fb4 != 0) {
            uVar28 = DAT_004b8fb0 / DAT_004b8fb4;
          }
          local_1d8 = 0x1aaf0262;
          if (0x1958d135 < uVar28 * -0x368d89c8 + 0x1c068900) {
            local_1d8 = -0x565e1cc1;
          }
        }
        else if (local_1d8 == -0x598509f8) {
          _objc_msgSend(local_80,local_118);
          auVar29._8_8_ = extraout_x1_11;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x745ae111;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x5942e29a) {
        if (local_1d8 == -0x565e1cc1) {
          uVar28 = DAT_004b8fb8 ^ DAT_004b8fbc;
          _objc_release(local_b0,uVar27);
          auVar5._8_8_ = extraout_x1_29;
          auVar5._0_8_ = local_a8;
          auVar29._8_8_ = extraout_x1_29;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x7a0d1725;
          if ((uVar28 + 0x9a602ccf | 0x1d8b8ab2) == 0xb3cf92da) {
            local_1d8 = -0x565e1cc1;
            auVar29 = auVar5;
          }
        }
        else if (local_1d8 == -0x53652617) {
          local_1d8 = -0x3029afb3;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b900c != 0) {
        uVar28 = DAT_004b9008 / DAT_004b900c;
      }
      local_100 = PTR_s_msgTimeDisplay_00489ef0;
      bVar24 = uVar28 * -0x4f543a10 == 0x2e03bac2;
      local_1d8 = 0x74f72cfa;
      iVar26 = 0x4b78597;
    }
    else {
      if (local_1d8 < -0x4727214d) {
        if (local_1d8 < -0x4b8355eb) {
          if (local_1d8 == -0x5167d16a) {
            bVar24 = ((DAT_004b8fd0 + DAT_004b8fd4 | 0x3a155f14U) * -0x1ac804f2 & 0x6cb516dc) ==
                     0x84992e7c;
            local_1d8 = -0x3532b923;
            iVar26 = 0x57b9a937;
            goto LAB_002a3f30;
          }
          if (local_1d8 == -0x4d6c0744) {
            _objc_msgSend(local_b0,PTR_s_name_0048a060);
            _objc_retainAutoreleasedReturnValue();
            auVar29._8_8_ = extraout_x1_06;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x3eddaef9;
          }
        }
        else if (local_1d8 == -0x4b8355eb) {
          local_6d = iVar23 == 0;
          local_1d8 = -0x745971b1;
        }
        else if (local_1d8 == -0x49a4cfe0) {
          bVar24 = DAT_004b8ff0 - DAT_004b8ff4 == -0x5c8f59cf;
          iVar26 = -0x6882102e;
          local_1d8 = 0x1ef24739;
LAB_002a4800:
          if (!bVar24) {
            local_1d8 = iVar26;
          }
        }
        else if (local_1d8 == -0x492f0672) {
          _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,local_78);
          auVar29 = _objc_retainAutoreleasedReturnValue();
          local_1d8 = -0x13c8c91d;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x3fcd6949) {
        if (local_1d8 == -0x4727214d) {
          local_1d8 = 0x53abc420;
        }
        else if (local_1d8 == -0x42d5c918) {
          uVar28 = 0;
          if (DAT_004b908c != 0) {
            uVar28 = DAT_004b9088 / DAT_004b908c;
          }
          _objc_msgSend(param_3,PTR_s_chatContact_0048b658);
          auVar30 = _objc_retainAutoreleasedReturnValue();
          bVar24 = ((uVar28 ^ 0xd1655c2) + 0xdfe793fc & 0xccf050e0) == 0x55c7ce98;
          iVar26 = -0x42d5c918;
          local_1d8 = -0x29b471c1;
          goto LAB_002a502c;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3fcd6949) {
        if (local_1d8 == -0x3f5e9ffd) {
          local_1d8 = 0x27cb0834;
        }
        else if (local_1d8 == -0x3e7db61f) {
          DAT_004b67b3 = local_6e ^ 3;
          DAT_004b67b4 = DAT_004b6794 ^ 0x15;
          DAT_004b67b5 = DAT_004b6795 ^ 0xb2;
          DAT_004b67b6 = DAT_004b6796 ^ 0x3a;
          DAT_004b67b7 = DAT_004b6797 ^ 0x95;
          DAT_004b67b8 = DAT_004b6798 ^ 0xa0;
          DAT_004b67b9 = DAT_004b6799 ^ 0x3c;
          DAT_004b67ba = DAT_004b679a ^ 0xef;
          DAT_004b67bb = DAT_004b679b ^ 0x28;
          DAT_004b67bc = DAT_004b679c ^ 5;
          local_1d8 = 0x629c0f7a;
        }
        goto LAB_002a1ba0;
      }
      bVar24 = (DAT_004b90b0 - DAT_004b90b4 & 0x4e380f8U ^ 0x10a9ad3f) * -0x7d413e48 == 0x310a1809;
      local_1d8 = -0x202dbab8;
      iVar26 = 0x69fbc876;
    }
  }
  else if (local_1d8 < -0x23472448) {
    if (local_1d8 < -0x30d84230) {
      if (local_1d8 < -0x369afd4b) {
        if (local_1d8 < -0x3a20b351) {
          if (local_1d8 != -0x3e565236) {
            if (local_1d8 == -0x3be5ac67) {
              local_f0 = PTR_s_msgTimeOnlyLast_0048ad38;
              local_1d8 = -0x6d89edbe;
            }
            goto LAB_002a1ba0;
          }
          uVar28 = DAT_004b9108 - DAT_004b910c;
          _objc_release(local_80,uVar27);
          _objc_release(param_3);
          bVar24 = 0xf88796af < (uVar28 ^ 0x88ed2b4c) * -0x58dd21f7;
          iVar26 = 0x51e47feb;
          local_1d8 = 0x7cb19c3c;
          uVar27 = extraout_x1_36;
        }
        else {
          if (local_1d8 != -0x3a20b351) {
            if (local_1d8 == -0x36ffc7bf) {
              local_1d8 = -0x902611d;
            }
            goto LAB_002a1ba0;
          }
          bVar24 = 0x29de5186 <
                   ((DAT_004b9010 - DAT_004b9014) + 0x2f2bae33U ^ 0xadbefdc0) + 0x488be40d;
          iVar26 = 0x2f24c61e;
          local_1d8 = -0x25845f8b;
        }
LAB_002a531c:
        auVar6._8_8_ = uVar27;
        auVar6._0_8_ = local_a8;
        auVar29._8_8_ = uVar27;
        auVar29._0_8_ = local_a8;
        if (bVar24) {
          local_1d8 = iVar26;
          auVar29 = auVar6;
        }
        goto LAB_002a1ba0;
      }
      if (-0x352df736 < local_1d8) {
        if (local_1d8 == -0x352df735) {
          local_118 = PTR_s_enabledMerge_0048ae20;
          bVar24 = 0x168f11da <
                   ((DAT_004b9038 + DAT_004b903c) * 0x4f32ed87 & 0xff448faaU) + 0xa4de73de;
          local_1d8 = -0x352df735;
          iVar26 = 0x59b3eb12;
          auVar31 = auVar21;
          goto LAB_002a4c48;
        }
        if (local_1d8 == -0x339affd6) {
          local_1d8 = 0x454670c;
          if (local_169 == '\0') {
            local_1d8 = 0x2498dc64;
          }
          local_198 = local_1b8;
          local_190 = local_160;
          local_199 = 1;
        }
        else if (local_1d8 == -0x3214e48e) {
          local_d1 = _objc_msgSend(local_80,local_d0);
          auVar29._8_8_ = extraout_x1_02;
          auVar29._0_8_ = local_a8;
          local_1d8 = -0x5ce1d068;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x369afd4b) {
        local_1d8 = 0x5853f5a6;
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3532b923) goto LAB_002a1ba0;
      local_e0 = PTR_s_viewModelScene_0048b4c0;
      bVar24 = (DAT_004b8fd8 & DAT_004b8fdc) * -0x1bb0c07d == 0x34da907d;
      local_1d8 = 0x57b9a937;
      iVar26 = 0x46d468fc;
    }
    else {
      if (-0x295b397d < local_1d8) {
        if (local_1d8 < -0x28aedf8d) {
          if (local_1d8 == -0x295b397c) {
            local_1d8 = -0x1d839143;
          }
          else if (local_1d8 == -0x295672dc) {
            iVar26 = _objc_msgSend(local_a0,local_88);
            auVar29._8_8_ = extraout_x1_12;
            auVar29._0_8_ = local_a8;
            local_1d8 = -0x492f0672;
            if (iVar26 == 0) {
              local_1d8 = -0x667ca4bb;
            }
            local_1a8 = local_a0;
            local_1a9 = 0;
          }
        }
        else if (local_1d8 == -0x28aedf8d) {
          local_1d8 = 0x4f1b527c;
        }
        else if (local_1d8 == -0x2678bed7) {
          local_1d8 = -0x2678bed7;
          if (0x68ffc371 < (DAT_004b8f98 & DAT_004b8f9c) * 0x1b4cf93e + 0x7003b7fa) {
            local_1d8 = 0x1dfd3ae6;
          }
        }
        else if (local_1d8 == -0x25845f8b) {
          _objc_msgSend(local_80,local_100);
          auVar29._8_8_ = extraout_x1_04;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x2f24c61e;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x3029afb3) {
        if (local_1d8 == -0x30d84230) {
          uVar28 = ((DAT_004b8f20 - DAT_004b8f24) * -0x614c7912 | 0x60c11d9aU) ^ 0x1618d6a0;
          bVar25 = 0x5c393133 < uVar28;
          bVar24 = uVar28 == 0x5c393134;
          iVar26 = -0x5fffda92;
LAB_002a4e20:
          auVar7._8_8_ = uVar27;
          auVar7._0_8_ = local_a8;
          auVar29._8_8_ = uVar27;
          auVar29._0_8_ = local_a8;
          local_1d8 = -0xb43706;
          if (!bVar25 || bVar24) {
            local_1d8 = iVar26;
            auVar29 = auVar7;
          }
        }
        else if (local_1d8 == -0x30531c23) {
          local_1d8 = 0x5569cb3a;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x3029afb3) {
        if (local_1d8 == -0x2d3839ff) {
          local_1d8 = -0x2678bed7;
        }
        else if (local_1d8 == -0x29b471c1) {
          local_1d8 = -0x20b5c5fe;
        }
        goto LAB_002a1ba0;
      }
      local_8a = DAT_004d1a10;
      bVar24 = false;
      local_1d8 = -0x3029afb3;
      iVar26 = -0x129033b2;
    }
  }
  else {
    if (local_1d8 < -0x16ab03fa) {
      if (local_1d8 < -0x1d839143) {
        if (local_1d8 < -0x220e7159) {
          if (local_1d8 == -0x23472448) {
            local_1d8 = -0x902611d;
          }
          else if (local_1d8 == -0x22196c0b) {
            local_1d8 = -0x5b2d4;
          }
        }
        else if (local_1d8 == -0x220e7159) {
          local_1d8 = 0x1662da60;
        }
        else {
          if (local_1d8 == -0x20b5c5fe) {
            uVar28 = 0;
            if (DAT_004b9094 != 0) {
              uVar28 = DAT_004b9090 / DAT_004b9094;
            }
            uVar28 = -(int)((long)((ulong)((uVar28 | 0x9d56475) + 0x3ed3ca5c) * 0xda237dd7) >> 0x3f)
            ;
            bVar25 = 0xebe3e4a0 < uVar28;
            bVar24 = uVar28 == 0xebe3e4a1;
            iVar26 = 0x5853f5a6;
            local_1d8 = -0x369afd4b;
            goto LAB_002a4af4;
          }
          if (local_1d8 == -0x202dbab8) {
            uVar27 = _NSClassFromString(&PTR____CFConstantStringClassReference_004b67d0);
            _objc_msgSend(param_3,PTR_s_isKindOfClass__00489c00,uVar27);
            auVar29._8_8_ = extraout_x1;
            auVar29._0_8_ = local_a8;
            local_1d8 = 0x69fbc876;
          }
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 < -0x1ad280af) {
        if (local_1d8 == -0x1d839143) {
          bVar24 = 0xe2b90e27 < ((DAT_004b9050 ^ DAT_004b9054) & 0x109207) + 0xf098d934;
          iVar26 = -0x5b2d4;
          local_1d8 = -0x22196c0b;
          goto LAB_002a531c;
        }
        if (local_1d8 == -0x1c1aea93) {
          bVar24 = local_8a == '\0';
          local_1d8 = 0x117e4caa;
          iVar26 = 0x20dfc9a7;
          goto LAB_002a3f30;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x1ad280af) {
        _objc_msgSend(local_80,PTR_s_enabled_0048a890);
        auVar29._8_8_ = extraout_x1_16;
        auVar29._0_8_ = local_a8;
        local_1d8 = 0x7da9dfe5;
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x1ab5e59c) {
        uVar28 = (uint)((ulong)(uint)(DAT_004b90a0 * DAT_004b90a4) * 0x56d81e4f >> 0x3e) +
                 0xd1a24695 | 0x682d93ee;
        bVar25 = 0x8bf7161 < uVar28;
        bVar24 = uVar28 == 0x8bf7162;
        local_1d8 = 0x4caf5d22;
        iVar26 = 0x47625ecf;
        goto LAB_002a4f20;
      }
      if (local_1d8 != -0x17fd9ee5) goto LAB_002a1ba0;
      uVar28 = (uint)((ulong)((DAT_004b8f70 - DAT_004b8f74) + 0x2e0b9a1dU ^ 0x23abcc8) * 0x7e56ccdb
                     >> 0x3e);
      bVar25 = 0x1b8d548e < uVar28;
      bVar24 = uVar28 == 0x1b8d548f;
      iVar26 = 0x3eddaef9;
      local_1d8 = -0x4d6c0744;
      goto LAB_002a4af4;
    }
    if (local_1d8 < -0xeb01707) {
      if (local_1d8 < -0x129033b2) {
        if (local_1d8 == -0x16ab03fa) {
          DAT_004b67b0 = DAT_004b6790 ^ 0x23;
          DAT_004b67b1 = DAT_004b6791 ^ 0x65;
          DAT_004b67b2 = DAT_004b6792 ^ 0x2f;
          local_6e = DAT_004b6793;
          local_1d8 = 0x15acdf8c;
        }
        else if (local_1d8 == -0x13c8c91d) {
          bVar24 = (DAT_004b8f60 & DAT_004b8f64) * 0xfd488d6 == 0x762be8f2;
          local_1d8 = 0x3871088d;
          iVar26 = 0x32c93db;
LAB_002a3f30:
          if (bVar24) {
            local_1d8 = iVar26;
          }
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0x129033b2) {
        local_1d8 = -0x23472448;
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x12145ed7) {
        if (local_1d8 == -0x10a654c5) {
          _objc_msgSend(local_80,local_f0);
          auVar29._8_8_ = extraout_x1_01;
          auVar29._0_8_ = local_a8;
          local_1d8 = 0x60258d3c;
        }
        goto LAB_002a1ba0;
      }
      uVar28 = 0;
      if (DAT_004b8fcc != 0) {
        uVar28 = DAT_004b8fc8 / DAT_004b8fcc;
      }
      bVar24 = uVar28 == 0x30e7a5c6;
      local_1d8 = 0x4b4fa4ec;
      iVar26 = 0x62077e6d;
    }
    else {
      if (local_1d8 < -0xe35fa38) {
        if (local_1d8 == -0xeb01707) {
          bVar24 = (DAT_004b9030 & DAT_004b9034 & 0xc111b026) == 0x409d9e63;
          iVar26 = -0x352df735;
          local_1d8 = 0x4baceb4e;
          goto LAB_002a4800;
        }
        if (local_1d8 == -0xea7b7fc) {
          local_1d8 = -0x629efc3b;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 == -0xe35fa38) {
        bVar24 = local_129 == '\0';
        iVar26 = -0x1ab5e59c;
        local_1d8 = -0x690f9f40;
        auVar30 = auVar17;
        goto LAB_002a502c;
      }
      if (local_1d8 == -0xae864ec) {
        local_1d8 = 0x1b48463;
        local_188 = param_3;
        if (local_139 == '\0') {
          local_1d8 = 0x9580687;
        }
        goto LAB_002a1ba0;
      }
      if (local_1d8 != -0x902611d) goto LAB_002a1ba0;
      bVar24 = ((DAT_004b8f58 ^ DAT_004b8f5c) * -0x5695aa4b | 0x46f78e62) == 0xc4b5e11;
      local_1d8 = -0x902611d;
      iVar26 = -0x1c1aea93;
    }
  }
LAB_002a4b2c:
  auVar9._8_8_ = uVar27;
  auVar9._0_8_ = local_a8;
  auVar29._8_8_ = uVar27;
  auVar29._0_8_ = local_a8;
  if (!bVar24) {
    local_1d8 = iVar26;
    auVar29 = auVar9;
  }
  goto LAB_002a1ba0;
}

