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