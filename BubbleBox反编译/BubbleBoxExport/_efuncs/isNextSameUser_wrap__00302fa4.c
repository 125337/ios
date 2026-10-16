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