// ##### FUN_0041ebf8 @ 0041ebf8
// #####################################

long FUN_0041ebf8(char param_1)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  int local_164;
  long local_160;
  long local_158;
  long local_150;
  undefined1 local_141;
  long local_140;
  undefined1 local_131;
  undefined *local_130;
  undefined *local_128;
  long local_120;
  long local_118;
  char local_109;
  long local_108;
  long local_100;
  byte local_f3;
  byte local_f2;
  char local_f1;
  undefined *local_f0;
  byte local_e1;
  long local_e0;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  char local_a9;
  long local_a8;
  char local_99;
  long local_98;
  byte local_89;
  long local_88;
  undefined8 local_80;
  
  puVar8 = PTR_BubbleBoxConfig_0048c990;
  puVar3 = PTR_s_shared_00489458;
  local_164 = 0x4e29aa44;
LAB_0041ec9c:
  if (0xa4c4572 < local_164) {
    if (0x3fc65eb9 < local_164) {
      if (local_164 < 0x5c830082) {
        if (0x4fa50aa6 < local_164) {
          if (local_164 < 0x51a485fc) {
            if (local_164 == 0x4fa50aa7) {
              local_164 = 0x1fbf309e;
            }
            else if (local_164 == 0x501b4661) {
              local_164 = 0x79884ed6;
              cVar1 = local_f1;
LAB_00420518:
              if (cVar1 == '\0') {
                local_164 = -0x2481f2bf;
              }
            }
          }
          else {
            if (local_164 == 0x51a485fc) {
              bVar10 = local_99 == '\0';
              local_164 = 0x3cf9667d;
              iVar24 = -0x7ac02479;
              goto LAB_004206dc;
            }
            if (local_164 == 0x57417d18) {
              bVar10 = 0xf892d940 < (DAT_004cd338 | DAT_004cd33c) + 0xcb16e4bd;
              iVar24 = -0x68668ba3;
              local_164 = -0xa67cb01;
              goto LAB_004207fc;
            }
            if (local_164 == 0x59c6e538) {
              local_164 = -0x3bfc50b7;
            }
          }
          goto LAB_0041ec9c;
        }
        if (0x476f1e71 < local_164) {
          if (local_164 == 0x476f1e72) goto LAB_0041fa18;
          if (local_164 == 0x4b849d21) {
            local_164 = 0x447cdb9;
          }
          else if (local_164 == 0x4e29aa44) {
            uVar25 = (DAT_004cd260 & DAT_004cd264) + 0xdd0b8a3c;
            bVar9 = 0xfabe79aa < uVar25;
            bVar10 = uVar25 == 0xfabe79ab;
            iVar24 = 0x7aae1691;
            local_164 = 0x5c830082;
            goto LAB_0041fc78;
          }
          goto LAB_0041ec9c;
        }
        if (local_164 == 0x3fc65eba) {
          local_164 = -0x108363de;
          goto LAB_0041ec9c;
        }
        if (local_164 != 0x41f8e14c) goto LAB_0041ec9c;
        uVar25 = 0;
        if (DAT_004cd34c != 0) {
          uVar25 = DAT_004cd348 / DAT_004cd34c;
        }
        uVar25 = uVar25 * -0x3dd9020c + 0x4882f89b;
        _objc_msgSend(local_120,local_128,local_88);
        _objc_msgSend(local_120,PTR_s_setPluginEnabled__0048c060,local_89);
        bVar9 = 0xc4080bb5 < uVar25;
        bVar10 = uVar25 == 0xc4080bb6;
        local_164 = 0x41f8e14c;
        iVar24 = -0x4c84306a;
      }
      else {
        if (local_164 < 0x75af2d83) {
          if (local_164 < 0x68345957) {
            if (local_164 == 0x5c830082) {
              _objc_msgSend(puVar8,puVar3);
              uVar23 = _objc_retainAutoreleasedReturnValue();
              _objc_msgSend(uVar23,PTR_s_changeRevision_0048b648);
              FUN_0041db34();
              local_164 = 0x7aae1691;
            }
            else if (local_164 == 0x619b1765) {
              iVar24 = DAT_004cd358 - DAT_004cd35c;
              _objc_release(local_158);
              _objc_release(local_80);
              _objc_autoreleaseReturnValue(local_160);
              bVar10 = 0x1ba89599 < (iVar24 * -0x7f71a516 + 0x2d44c43aU & 0xa80d54e4);
              local_164 = 0x619b1765;
              iVar24 = 0x30714bdf;
LAB_0041fb54:
              if (bVar10) {
                local_164 = iVar24;
              }
            }
          }
          else if (local_164 == 0x68345957) {
            local_164 = 0x82c272c;
            local_140 = local_d8;
          }
          else if (local_164 == 0x705ca7a6) {
            local_b8 = DAT_004d20f0;
            local_164 = 0x4fa50aa7;
            if ((DAT_004cd2a8 + DAT_004cd2ac + 0xc660265bU | 0x51819d51) == 0x8c072e47) {
              local_164 = 0x705ca7a6;
            }
          }
          else if (local_164 == 0x74f4cf51) {
            local_164 = 0x2833ae47;
          }
          goto LAB_0041ec9c;
        }
        if (0x79b902d8 < local_164) {
          if (local_164 == 0x79b902d9) {
            lVar22 = _objc_msgSend(local_e0,local_f0);
            local_f1 = lVar22 == local_88;
            local_164 = 0x75af2d83;
          }
          else if (local_164 == 0x7aae1691) {
            iVar24 = DAT_004cd268 - DAT_004cd26c;
            _objc_msgSend(puVar8,puVar3);
            local_80 = _objc_retainAutoreleasedReturnValue();
            local_88 = _objc_msgSend(local_80,PTR_s_changeRevision_0048b648);
            local_89 = FUN_0041db34();
            local_98 = DAT_004d20f0;
            local_164 = 0x5c830082;
            if ((iVar24 * -0x481fddce + 0xf81531b0U | 0x61a323ba) != 0xbbab12b6) {
              local_164 = 0x114c754;
            }
          }
          else if (local_164 == 0x7b63490b) {
            local_99 = param_1;
            if (local_98 == 0) {
              local_99 = '\x01';
            }
            bVar10 = (DAT_004cd278 + DAT_004cd27c & 0xda3fcde2U) * 0x7568bda7 == 0x631e422f;
            iVar24 = -0x541ae5ad;
            local_164 = 0x51a485fc;
LAB_0041f480:
            if (bVar10) {
              local_164 = iVar24;
            }
          }
          goto LAB_0041ec9c;
        }
        if (local_164 != 0x75af2d83) {
          if (local_164 == 0x75e55555) {
            local_164 = -0x4c0c2812;
            if ((DAT_004cd2a0 + DAT_004cd2a4 + 0xc4806753U ^ 0xc7047779) < 0x94f470ad) {
              local_164 = 0x705ca7a6;
            }
          }
          else if (local_164 == 0x79884ed6) goto LAB_0041f62c;
          goto LAB_0041ec9c;
        }
        uVar25 = (DAT_004cd2f0 + DAT_004cd2f4 & 0x5cd38c2aU) * 0xda14636 | 0x1c287d19;
        bVar9 = 0xb1b4f181 < uVar25;
        bVar10 = uVar25 == 0xb1b4f182;
        local_164 = -0x70ab63e7;
        iVar24 = -0x7493b332;
      }
LAB_004208e4:
      if (!bVar9 || bVar10) {
        local_164 = iVar24;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < 0x1fbf309e) {
      if (local_164 < 0x1361aaa7) {
        if (local_164 < 0xbfce8db) {
          if (local_164 == 0xa4c4573) {
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,puVar3);
            _objc_retainAutoreleasedReturnValue();
            local_164 = 0xadb6047;
          }
          else if (local_164 == 0xadb6047) {
            uVar25 = DAT_004cd2b8 - DAT_004cd2bc;
            _objc_msgSend(PTR_BubbleBoxMgr_0048c9a8,puVar3);
            local_c8 = _objc_retainAutoreleasedReturnValue();
            bVar10 = 0xe2a23b79 < ((uVar25 ^ 0x94a1a7e3) / 0x4dc08f91 | 0x2569c090);
            iVar24 = 0xadb6047;
            local_164 = 0x74f4cf51;
            goto LAB_004207fc;
          }
        }
        else if (local_164 == 0xbfce8db) {
          local_131 = _objc_msgSend(local_80,local_130);
          local_164 = -0x74ffdc21;
        }
        else if (local_164 == 0xd592755) {
          local_100 = DAT_004d20f0;
          local_164 = 0x6766e27;
          if ((DAT_004cd318 & DAT_004cd31c & 0x65eb7cff | 0x21ab788b) == 0x7d13f6fc) {
            local_164 = 0xd592755;
          }
        }
        else if (local_164 == 0xd988494) {
          uVar25 = 0;
          if (DAT_004cd274 != 0) {
            uVar25 = DAT_004cd270 / DAT_004cd274;
          }
          local_164 = -0x541ae5ad;
          if ((uVar25 + 0xd4fed19f) / 0xed8e9b0 != 0xe76b297) {
            local_164 = 0x7b63490b;
          }
        }
      }
      else if (local_164 < 0x164f7cd3) {
        if (local_164 == 0x1361aaa7) {
          local_164 = 0x3fc65eba;
          if (((DAT_004cd290 - DAT_004cd294 | 0x7e40a110U) >> 1) / 0x7cd2209b != 0xe1c6cd7a) {
            local_164 = -0x108363de;
          }
        }
        else if (local_164 == 0x159051a6) {
          local_118 = DAT_004d20f0;
          local_164 = 0x1f0f8730;
        }
      }
      else {
        if (local_164 == 0x164f7cd3) {
          local_e0 = DAT_004d20f0;
          local_e1 = DAT_004d20f0 == 0;
          uVar25 = -(int)((long)((ulong)((DAT_004cd2d8 | DAT_004cd2dc) * -0x5aa1bc3e + 0x845733fb) *
                                0x87974197) >> 0x3f);
          bVar9 = 0xf2b354a3 < uVar25;
          bVar10 = uVar25 == 0xf2b354a4;
          local_164 = -0x57754f2c;
          iVar24 = -0x7721a409;
          goto LAB_004208e4;
        }
        if (local_164 == 0x1b4aa426) {
          local_a8 = _objc_msgSend(local_98,PTR_s_revision_0048c010);
          local_164 = -0x18b26da1;
        }
        else if (local_164 == 0x1f0f8730) {
          _objc_retain(local_118);
          local_164 = 0x2eeed5d6;
        }
      }
    }
    else if (local_164 < 0x2eeed5d6) {
      if (local_164 < 0x29b8245e) {
        if (local_164 == 0x1fbf309e) {
          _objc_msgSend(local_b8,PTR_s_bubble_0048a0c8);
          local_c0 = _objc_retainAutoreleasedReturnValue();
          local_164 = 0x29b8245e;
        }
        else if (local_164 == 0x2833ae47) {
          local_d0 = PTR_s_currentBubble_0048a848;
          local_164 = -0x36035bce;
        }
      }
      else if (local_164 == 0x29b8245e) {
        local_164 = 0x82c272c;
        local_140 = local_c0;
      }
      else if (local_164 == 0x2ba69dcf) {
        _objc_msgSend(local_100,PTR_s_bubble_0048a0c8);
        _objc_retainAutoreleasedReturnValue();
        local_164 = -0x550ac789;
      }
      else if (local_164 == 0x2ed9d48f) {
        local_164 = 0x476f1e72;
      }
    }
    else if (local_164 < 0x340d5a47) {
      if (local_164 == 0x2eeed5d6) {
        uVar25 = DAT_004cd330 + DAT_004cd334 + 0x47bd5e84U ^ 0xe9c6ab9e;
        bVar9 = 0xd1c62758 < uVar25;
        bVar10 = uVar25 == 0xd1c62759;
        local_164 = -0x68668ba3;
        iVar24 = 0x57417d18;
        goto LAB_004208e4;
      }
      if (local_164 == 0x3250ba26) {
        local_164 = -0x45dcfb31;
        if ((uint)((ulong)(DAT_004cd310 * DAT_004cd314 ^ 0x8d6aefb8) * 0x2d39df79 >> 0x3d) *
            -0x7b3fbc8b < 0x92383e47) {
          local_164 = 0xd592755;
        }
      }
      else if (local_164 == 0x30714bdf) {
        return local_160;
      }
    }
    else if (local_164 == 0x340d5a47) {
      local_130 = PTR_s_enabledMerge_0048ae20;
      local_164 = 0xbfce8db;
    }
    else {
      if (local_164 == 0x3cf9667d) {
        bVar10 = 0xa3cd773d < (DAT_004cd2b0 - DAT_004cd2b4 & 0xc3c9fc6U | 0xc0c0340) * -0x6881ab48;
        local_164 = 0xadb6047;
        iVar24 = 0xa4c4573;
        goto LAB_0041fb54;
      }
      if (local_164 == 0x3e3b3b0b) {
        _objc_msgSend(local_c8,local_d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(local_c8);
        local_164 = -0x4fffdf9a;
      }
    }
    goto LAB_0041ec9c;
  }
  if (local_164 < -0x45dcfb31) {
    if (local_164 < -0x636b0748) {
      if (local_164 < -0x70ab63e7) {
        if (local_164 < -0x7721a409) {
          if (local_164 == -0x7bd3c8bf) {
            local_164 = -0x20931a38;
          }
          else if ((local_164 == -0x7ac02479) &&
                  (local_164 = 0x1b4aa426,
                  (DAT_004cd280 + DAT_004cd284 ^ 0x78bc39bdU) + 0xf2d1f4d2 < 0x5b6d8446)) {
            local_164 = -0x1fa7da3c;
          }
        }
        else if (local_164 == -0x7721a409) {
          iVar24 = -0x6b26622b;
          bVar2 = local_e1;
LAB_004205a4:
          local_164 = -0x2481f2bf;
          if (bVar2 == 0) {
            local_164 = iVar24;
          }
        }
        else if (local_164 == -0x74ffdc21) {
          local_164 = -0x4c3cf571;
          local_141 = local_131;
        }
        else if (local_164 == -0x7493b332) {
          local_164 = 0x501b4661;
        }
      }
      else if (local_164 < -0x6b26622b) {
        if (local_164 == -0x70ab63e7) {
          local_164 = -0x7493b332;
        }
        else if (local_164 == -0x6b3a227c) {
          local_128 = PTR_s_setRevision__0048c058;
          local_164 = -0x29e45d3d;
        }
      }
      else if (local_164 == -0x6b26622b) {
        local_164 = -0x7bd3c8bf;
        if ((DAT_004cd2e0 ^ DAT_004cd2e4) * 0xf53aaff != 0x28462832) {
          local_164 = -0x20931a38;
        }
      }
      else if (local_164 == -0x6a68b6a8) {
        _objc_release(local_158);
        _objc_release(local_80);
        _objc_autoreleaseReturnValue(local_160);
        local_164 = 0x619b1765;
      }
      else if (local_164 == -0x68668ba3) {
        local_164 = 0x57417d18;
      }
    }
    else if (local_164 < -0x509caff7) {
      if (local_164 < -0x57754f2c) {
        if (local_164 == -0x636b0748) {
          local_160 = local_150;
          uVar25 = 0;
          if (DAT_004cd354 != 0) {
            uVar25 = DAT_004cd350 / DAT_004cd354;
          }
          local_164 = -0x6a68b6a8;
          if (uVar25 != 0xab9faafd) {
            local_164 = 0x619b1765;
          }
        }
        else if (local_164 == -0x597dc962) {
          bVar10 = ((DAT_004cd320 & DAT_004cd324) + 0x192c57b4 & 0xb1065cde) == 0x508081b0;
          local_164 = -0x550ac789;
          iVar24 = 0x2ba69dcf;
LAB_004206dc:
          if (bVar10) {
            local_164 = iVar24;
          }
        }
      }
      else if (local_164 == -0x57754f2c) {
        local_164 = 0x164f7cd3;
      }
      else if (local_164 == -0x550ac789) {
        uVar25 = (DAT_004cd328 * DAT_004cd32c | 0xaf6c394U) * 0xcc37630 | 0x8f93116c;
        _objc_msgSend(local_100,PTR_s_bubble_0048a0c8);
        local_108 = _objc_retainAutoreleasedReturnValue();
        local_109 = local_108 == local_158;
        bVar9 = 0x5fbdbdcf < uVar25;
        bVar10 = uVar25 == 0x5fbdbdd0;
        iVar24 = 0x2ba69dcf;
        local_164 = 0x59c6e538;
LAB_0041fc78:
        if (!bVar9 || bVar10) {
          local_164 = iVar24;
        }
      }
      else if (local_164 == -0x541ae5ad) {
        local_164 = 0x7b63490b;
      }
    }
    else if (local_164 < -0x4c84306a) {
      if (local_164 == -0x509caff7) {
        _objc_msgSend(local_120,local_128,local_88);
        _objc_msgSend(local_120,PTR_s_setPluginEnabled__0048c060,local_89);
        local_164 = 0x41f8e14c;
      }
      else if (local_164 == -0x4fffdf9a) {
        iVar24 = DAT_004cd2c8 - DAT_004cd2cc;
        _objc_msgSend(local_c8,local_d0);
        local_d8 = _objc_retainAutoreleasedReturnValue();
        _objc_release(local_c8);
        uVar25 = (uint)(iVar24 * 0x783f91d4) / 0x3779ba1;
        bVar9 = 0x295b0c68 < uVar25;
        bVar10 = uVar25 == 0x295b0c69;
        local_164 = -0x4fffdf9a;
        iVar24 = 0x68345957;
        goto LAB_004208e4;
      }
    }
    else if (local_164 == -0x4c84306a) {
      local_164 = 0x340d5a47;
      if (local_89 == 0) {
        local_164 = -0x4c3cf571;
      }
      local_141 = 0;
    }
    else if (local_164 == -0x4c3cf571) {
      _objc_msgSend(local_120,PTR_s_setMergeEnabled__0048c068,local_141);
      uVar23 = _objc_msgSend(local_80,PTR_s_enabledMergeOnlyRoom_0048ae30);
      _objc_msgSend(local_120,PTR_s_setOnlyRoom__0048c070,uVar23);
      lVar22 = _objc_msgSend(local_80,PTR_s_mergeMode_0048ae40);
      _objc_msgSend(local_120,PTR_s_setManual__0048c078,lVar22 != 0);
      puVar4 = PTR_s_timeSeparator_0048a8e0;
      uVar23 = _objc_msgSend(local_80,PTR_s_timeSeparator_0048a8e0);
      _objc_msgSend(local_120,PTR_s_setTimeSeparator__0048a930,uVar23);
      puVar5 = PTR_s_systemSeparator_0048a8f0;
      uVar23 = _objc_msgSend(local_80,PTR_s_systemSeparator_0048a8f0);
      _objc_msgSend(local_120,PTR_s_setSystemSeparator__0048a928,uVar23);
      puVar6 = PTR_s_emoticonSeparator_0048a900;
      uVar23 = _objc_msgSend(local_80,PTR_s_emoticonSeparator_0048a900);
      _objc_msgSend(local_120,PTR_s_setEmoticonSeparator__0048a920,uVar23);
      puVar7 = PTR_s_mediaSeparator_0048a910;
      uVar23 = _objc_msgSend(local_80,PTR_s_mediaSeparator_0048a910);
      _objc_msgSend(local_120,PTR_s_setMediaSeparator__0048a918,uVar23);
      _objc_msgSend(local_120,PTR_s_setBubble__0048a9f8,local_158);
      uVar11 = _objc_msgSend(local_120,PTR_s_mergeEnabled_0048bfb8);
      uVar12 = _objc_msgSend(local_120,PTR_s_onlyRoom_0048c080);
      uVar13 = _objc_msgSend(local_120,PTR_s_manual_0048c088);
      uVar14 = _objc_msgSend(local_120,puVar4);
      uVar15 = _objc_msgSend(local_120,puVar5);
      uVar16 = _objc_msgSend(local_120,puVar6);
      uVar17 = _objc_msgSend(local_120,puVar7);
      _objc_msgSend(local_120,PTR_s_setPolicy__0048c028,
                    (((((((uVar11 & 0xffffffff ^ 0x811c9dc5) * 0x1000193 ^ uVar12 & 0xffffffff) *
                         0x1000193 ^ uVar13 & 0xffffffff) * 0x1000193 ^ uVar14 & 0xffffffff) *
                       0x1000193 ^ uVar15 & 0xffffffff) * 0x1000193 ^ uVar16 & 0xffffffff) *
                     0x1000193 ^ uVar17 & 0xffffffff) * 0x1000193);
      uVar11 = _objc_msgSend(local_80,PTR_s_enabledAvatarCard_0048a258);
      uVar12 = _objc_msgSend(local_80,PTR_s_enabledHideSystemTime_0048ad20);
      uVar13 = _objc_msgSend(local_80,PTR_s_roomHeadHideMode_0048afa8);
      uVar14 = _objc_msgSend(local_80,PTR_s_chatHeadHideMode_0048afb8);
      uVar15 = _objc_msgSend(local_80,PTR_s_headDisplay_0048ae58);
      uVar16 = _objc_msgSend(local_80,PTR_s_layoutSpace_0048ae68);
      _objc_msgSend(local_80,PTR_s_mergeLayoutValue_0048ae70);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR_s_hash_0048c090;
      uVar17 = _objc_msgSend(uVar23,PTR_s_hash_0048c090);
      _objc_release(uVar23);
      _objc_msgSend(local_158,PTR_s_bubbleId_0048a090);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar18 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_158,PTR_s_version_0048a080);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar19 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      uVar20 = _objc_msgSend(local_158,PTR_s_space_0048c098);
      uVar21 = _objc_msgSend(local_158,PTR_s_isHeadToBottom_0048b5f0);
      _objc_msgSend(local_120,PTR_s_setLayoutPolicy__0048c030,
                    ((uVar20 ^ (uVar19 ^ (uVar18 ^ (uVar17 ^ ((((((((ulong)local_89 ^ 0x811c9dc5) *
                                                                   0x1000193 ^ uVar11 & 0xffffffff)
                                                                  * 0x1000193 ^ uVar12 & 0xffffffff)
                                                                 * 0x1000193 ^ uVar13) * 0x1000193 ^
                                                               uVar14) * 0x1000193 ^ uVar15) *
                                                              0x1000193 ^ uVar16) * 0x1000193) *
                                                   0x1000193) * 0x1000193) * 0x1000193) * 0x1000193
                    ^ uVar21 & 0xffffffff) * 0x1000193);
      uVar23 = _objc_msgSend(local_80,PTR_s_enabledMsgTime_0048ad10);
      _objc_msgSend(local_120,PTR_s_setTimeEnabled__0048c040,uVar23);
      uVar11 = _objc_msgSend(local_120,PTR_s_timeEnabled_0048c000);
      uVar12 = _objc_msgSend(local_80,PTR_s_msgTimeOnlyLast_0048ad38);
      uVar13 = _objc_msgSend(local_80,PTR_s_msgTimeDisplay_00489ef0);
      _objc_msgSend(local_80,PTR_s_timeOffsetY_0048ad60);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar14 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_80,PTR_s_timeOffsetX_0048ad58);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar15 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      uVar16 = _objc_msgSend(local_80,PTR_s_timeCustomStyle_0048ad48);
      _objc_msgSend(local_80,PTR_s_timeCustomString_0048ad50);
      uVar23 = _objc_retainAutoreleasedReturnValue();
      uVar17 = _objc_msgSend(uVar23,puVar4);
      _objc_release(uVar23);
      _objc_msgSend(local_120,PTR_s_setTimePolicy__0048c038,
                    (uVar17 ^ (uVar16 ^ (uVar15 ^ (uVar14 ^ (((uVar11 & 0xffffffff ^ 0x811c9dc5) *
                                                              0x1000193 ^ uVar12 & 0xffffffff) *
                                                             0x1000193 ^ uVar13) * 0x1000193) *
                                                  0x1000193) * 0x1000193) * 0x1000193) * 0x1000193);
      _objc_retain(local_120);
      lVar22 = DAT_004d20f0;
      DAT_004d20f0 = local_120;
      _objc_release(lVar22);
      local_164 = -0x636b0748;
      local_150 = local_120;
    }
    else if (local_164 == -0x4c0c2812) {
      local_164 = 0x705ca7a6;
    }
    goto LAB_0041ec9c;
  }
  if (local_164 < -0x18b26da1) {
    if (local_164 < -0x276ced9d) {
      if (local_164 < -0x3bfc50b7) {
        if (local_164 == -0x45dcfb31) {
          local_164 = 0xd592755;
        }
        else if (local_164 == -0x400afe4f) {
          _objc_msgSend(DAT_004d20f0,PTR_s_pluginEnabled_0048c050);
LAB_0041f62c:
          local_164 = 0x44d1b61;
        }
      }
      else {
        if (local_164 == -0x3bfc50b7) {
          _objc_release(local_108);
          local_164 = 0x159051a6;
          cVar1 = local_109;
          goto LAB_00420518;
        }
        if (local_164 == -0x36035bce) {
          bVar10 = 0x3e03aa35 <
                   ((DAT_004cd2c0 | DAT_004cd2c4 | 0x4a9782f) + 0xbde9fb9e & 0x1ebf2c94);
          local_164 = -0x4fffdf9a;
          iVar24 = 0x3e3b3b0b;
          goto LAB_0041fb54;
        }
        if (local_164 == -0x29e45d3d) {
          uVar25 = (byte)((ulong)((DAT_004cd340 | DAT_004cd344) + 0x2bab2ae6) * 0x86e05d7 >> 0x38) +
                   0x8c45adce;
          bVar9 = 0xee387df9 < uVar25;
          bVar10 = uVar25 == 0xee387dfa;
          iVar24 = 0x41f8e14c;
          local_164 = -0x509caff7;
          goto LAB_0041fc78;
        }
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < -0x20931a38) {
      if (local_164 == -0x276ced9d) {
LAB_0041fa18:
        local_164 = -0x20422eb2;
      }
      else if (local_164 == -0x2481f2bf) {
        local_120 = _objc_msgSend(PTR_BBNewOptions_0048ccd8,PTR_s_new_0048b3f0);
        local_164 = -0x6b3a227c;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 != -0x20931a38) {
      if (local_164 == -0x20422eb2) {
        uVar25 = (DAT_004cd308 | DAT_004cd30c | 0xd6710bc) / 0x2cbb27ac ^ 0x79ce97eb;
        local_f3 = (local_89 ^ local_f2) & 1;
        bVar9 = 0xac428e20 < uVar25;
        bVar10 = uVar25 == 0xac428e21;
        local_164 = -0x276ced9d;
        iVar24 = -0x11e77c96;
        goto LAB_004208e4;
      }
      if (local_164 == -0x1fa7da3c) {
        _objc_msgSend(local_98,PTR_s_revision_0048c010);
        local_164 = 0x1b4aa426;
      }
      goto LAB_0041ec9c;
    }
    local_f0 = PTR_s_revision_0048c010;
    bVar10 = 0x90ee3467 <
             ((uint)((ulong)((DAT_004cd2e8 ^ DAT_004cd2ec) & 0xd05972e2) * 0xd3d54785 >> 0x3e) ^
             0x3b478dea);
    iVar24 = -0x7bd3c8bf;
    local_164 = -0x15abfc39;
  }
  else {
    if (local_164 < -0xa67cb01) {
      if (local_164 < -0x11e77c96) {
        if (local_164 == -0x18b26da1) {
          local_164 = 0x1361aaa7;
        }
        else if (local_164 == -0x15abfc39) {
          local_164 = 0x79b902d9;
        }
      }
      else if (local_164 == -0x11e77c96) {
        local_164 = -0xd722c42;
      }
      else if (local_164 == -0x108363de) {
        local_a9 = local_88 == local_a8;
        local_164 = -0x108363de;
        if ((DAT_004cd298 & DAT_004cd29c) * 0x63519300 != -0x54353e0d) {
          local_164 = 0x4b849d21;
        }
      }
      else if (local_164 == -0xd722c42) {
        iVar24 = 0x3250ba26;
        bVar2 = local_f3;
        goto LAB_004205a4;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 < 0x44d1b61) {
      if (local_164 == -0xa67cb01) {
        local_164 = -0x636b0748;
        local_150 = local_118;
      }
      else if (local_164 == 0x114c754) {
        local_164 = 0xd988494;
      }
      else if (local_164 == 0x447cdb9) {
        bVar10 = local_a9 == '\0';
        iVar24 = 0x3cf9667d;
        local_164 = 0x75e55555;
        goto LAB_0041f480;
      }
      goto LAB_0041ec9c;
    }
    if (local_164 == 0x44d1b61) {
      uVar25 = DAT_004cd2f8 | DAT_004cd2fc;
      local_f2 = _objc_msgSend(DAT_004d20f0,PTR_s_pluginEnabled_0048c050);
      bVar10 = 0xcad09344 < (uVar25 & 0x21400200) + 0x54fa600d;
      iVar24 = -0x400afe4f;
      local_164 = 0x2ed9d48f;
    }
    else {
      if (local_164 == 0x6766e27) {
        local_164 = -0x597dc962;
        goto LAB_0041ec9c;
      }
      if (local_164 != 0x82c272c) goto LAB_0041ec9c;
      local_158 = local_140;
      bVar10 = 0xfaa2d7a2 < (uint)(DAT_004cd2d0 * DAT_004cd2d4 * 0x3b8fbc0);
      iVar24 = -0x57754f2c;
      local_164 = 0x164f7cd3;
    }
  }
LAB_004207fc:
  if (bVar10) {
    local_164 = iVar24;
  }
  goto LAB_0041ec9c;
}



// #####################################