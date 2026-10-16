// ##### FUN_0045e3d4 @ 0045e3d4
// #####################################

void FUN_0045e3d4(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  int local_dc;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  char local_a9;
  long local_a8;
  char local_99;
  long local_98;
  undefined8 local_90;
  undefined *local_88;
  char local_79;
  undefined8 local_78;
  undefined *local_70;
  char local_61;
  
  _objc_retain();
  local_dc = 0x7fac0a9a;
LAB_0045e460:
  if (local_dc < 0xb147714) {
    if (local_dc < -0x3badf1e7) {
      if (-0x60d89d49 < local_dc) {
        if (-0x513acbb4 < local_dc) {
          if (local_dc < -0x4df8e3b4) {
            if (local_dc == -0x513acbb3) {
              local_dc = -0x6cc32ef7;
            }
            else if (local_dc == -0x50567be8) {
              local_dc = -0x3badf1e7;
            }
          }
          else if (local_dc == -0x4df8e3b4) {
            local_dc = 0x6825ddf2;
          }
          else if (local_dc == -0x49272a5e) {
LAB_0045f1bc:
            local_dc = -0x339ef3be;
          }
          else if (local_dc == -0x429c9983) {
            local_dc = 0x61844947;
            goto LAB_0045f760;
          }
          goto LAB_0045e460;
        }
        if (-0x589154e8 < local_dc) {
          if (local_dc == -0x589154e7) {
            _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
            _objc_retainAutoreleasedReturnValue();
            local_dc = -0x2fc8a8d2;
          }
          else if (local_dc == -0x57c4655b) {
            uVar5 = 0;
            if (DAT_004d0aec != 0) {
              uVar5 = DAT_004d0ae8 / DAT_004d0aec;
            }
            uVar5 = uVar5 * -0x7ea983d2 + 0x535cf81d & 0x7b546f8b;
            local_79 = _objc_msgSend(local_78,PTR_s_enabled_0048a890);
            bVar2 = 0x2bfbcb53 < uVar5;
            bVar1 = uVar5 == 0x2bfbcb54;
            iVar3 = -0x57c4655b;
            local_dc = 0x77b841cd;
            goto LAB_0045f728;
          }
          goto LAB_0045e460;
        }
        if (local_dc == -0x60d89d48) {
          iVar3 = DAT_004d0b88 + DAT_004d0b8c;
          _objc_msgSend(local_c8,PTR_s_applyMessageTime__0048bc28,param_1);
          local_dc = 0x18224c12;
          if (0xd1fe425a < (iVar3 * 0x64f3b16c | 0x256ec79aU) + 0xe1e30fc4) {
            local_dc = -0x60d89d48;
          }
          goto LAB_0045e460;
        }
        if (local_dc != -0x5c0f7470) goto LAB_0045e460;
        uVar5 = DAT_004d0b08 | DAT_004d0b0c;
        _objc_msgSend(local_88,local_70);
        local_90 = _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(local_90,PTR_s_currentBubble_0048a848);
        local_98 = _objc_retainAutoreleasedReturnValue();
        bVar1 = (uVar5 | 0xb2d9884e) * 0x584480f9 == -0x2197f99f;
        iVar3 = -0x5c0f7470;
        local_dc = 0x3735e9a2;
        goto LAB_0045f438;
      }
      if (-0x6cc32ef8 < local_dc) {
        if (local_dc < -0x67ed66ca) {
          if (local_dc == -0x6cc32ef7) {
            bVar1 = 0x4a25f36e <
                    (uint)((ulong)((DAT_004d0b00 + DAT_004d0b04 | 0x9bd773dcU) >> 2) * 0x2597cd4f >>
                          0x3b);
            local_dc = -0x5c0f7470;
            iVar3 = -0xf40ee5c;
            goto LAB_0045f8d0;
          }
          if (local_dc == -0x6c08c763) {
            _objc_release(local_a8);
            local_dc = -0x7452c197;
          }
        }
        else if (local_dc == -0x67ed66ca) {
          _objc_release(local_98);
          local_dc = -0x7e5f3cc7;
        }
        else if (local_dc == -0x61b9b529) {
          local_dc = -0x2265e3cc;
          if ((DAT_004d0ae0 | DAT_004d0ae4) * -0x4f0a6bd2 != 0x3c7cda90) {
            local_dc = -0x57c4655b;
          }
        }
        goto LAB_0045e460;
      }
      if (local_dc < -0x6f272739) {
        if (local_dc == -0x7e5f3cc7) {
          local_dc = 0x7f961d7a;
          if (0x5179554f < ((DAT_004d0b40 | DAT_004d0b44 | 0x36c9d9d5) + 0x3072830c ^ 0xef551d1)) {
            local_dc = -0x2b7cdde1;
          }
        }
        else {
          iVar3 = -0x7452c197;
LAB_0045ebc8:
          if (local_dc == iVar3) {
            local_dc = 0x50c34213;
          }
        }
        goto LAB_0045e460;
      }
      if (local_dc != -0x6f272739) {
        if (local_dc == -0x6ee8c605) {
          _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_dc = 0xb147714;
        }
        goto LAB_0045e460;
      }
      bVar1 = local_99 == '\0';
      local_dc = -0x36774ca4;
      iVar3 = 0x3702bc49;
    }
    else {
      if (local_dc < -0x2265e3cc) {
        if (local_dc < -0x2f177f19) {
          if (local_dc < -0x339ef3be) {
            if (local_dc == -0x3badf1e7) {
              local_dc = 0xefd8ec2;
              if ((DAT_004d0b80 * DAT_004d0b84 ^ 0x9ed1ccf1U) * 0x1e24e625 != 0x9d71ea0) {
                local_dc = -0x60d89d48;
              }
            }
            else if (local_dc == -0x36774ca4) {
              _objc_release(local_98);
              local_dc = 0x56823c6a;
            }
            goto LAB_0045e460;
          }
          if (local_dc != -0x339ef3be) {
            if (local_dc == -0x2fc8a8d2) {
              uVar5 = DAT_004d0ad8 | DAT_004d0adc;
              _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
              local_78 = _objc_retainAutoreleasedReturnValue();
              local_dc = 0x2aa26f95;
              if (0xa5511017 < (uVar5 & 0x6fb1c8b) + 0x1e2556dd) {
                local_dc = -0x2fc8a8d2;
              }
            }
            goto LAB_0045e460;
          }
          bVar1 = (DAT_004d0b98 * DAT_004d0b9c + 0xd43c88f5U | 0xbdb44919) * 0x1bfa1249 ==
                  0x18959500;
          local_dc = -0x49272a5e;
          iVar3 = -0x429c9983;
        }
        else {
          if (local_dc < -0x2ac92037) {
            if (local_dc == -0x2f177f19) {
              local_dc = 0x241db26d;
              if (local_79 == '\0') {
                local_dc = 0x61844947;
              }
LAB_0045f5d4:
              local_d0 = local_78;
            }
            else if (local_dc == -0x2b7cdde1) {
              _objc_release(local_78);
              local_dc = 0x7f961d7a;
            }
            goto LAB_0045e460;
          }
          if (local_dc == -0x2ac92037) {
            local_c0 = PTR_s_enabledMsgTime_0048ad10;
            local_dc = -0xb22b6df;
            if ((uint)((ulong)((uint)((ulong)(DAT_004d0b68 ^ DAT_004d0b6c) * 0x60a2d30f >> 0x3e) *
                              0x206f43f5) * 0x2b84d41b >> 0x3b) < 0xc46c0e2f) {
              local_dc = 0x56fe301c;
            }
            goto LAB_0045e460;
          }
          if (local_dc == -0x26ff6454) {
            DAT_004d22e8 = '\x01';
            bVar1 = ((DAT_004d0b38 ^ DAT_004d0b3c) & 0x6c414831) == 0x1f554609;
            local_dc = 0x490c0293;
            iVar3 = 0xd4284ab;
          }
          else {
            if (local_dc != -0x229d4e28) goto LAB_0045e460;
            local_c8 = PTR_BubbleBoxUI_0048ca90;
            bVar1 = ((DAT_004d0b78 ^ DAT_004d0b7c) + 0x7418481f & 0xb56e85cc) == 0xd48f238a;
            local_dc = -0x229d4e28;
            iVar3 = -0x50567be8;
          }
        }
        if (!bVar1) {
          local_dc = iVar3;
        }
        goto LAB_0045e460;
      }
      if (-0xb22b6e0 < local_dc) {
        if (local_dc < -0x43a2420) {
          if (local_dc == -0xb22b6df) {
            local_dc = -0x2ac92037;
          }
          else if (local_dc == -0x91d6253) {
            uVar5 = (DAT_004d0ba8 * DAT_004d0bac + 0xab97d4b2U | 0x3f003f0) & 0xc090572c;
            _objc_release(local_d8);
            _objc_release(param_1);
            bVar2 = 0x3dced1b2 < uVar5;
            bVar1 = uVar5 == 0x3dced1b3;
            iVar3 = -0x91d6253;
            local_dc = 0x649dea0f;
            goto LAB_0045f728;
          }
          goto LAB_0045e460;
        }
        if (local_dc == -0x43a2420) {
          (*DAT_004d2308)(param_1,PTR_s_updateNodeStatus_0048c180);
          local_dc = 0x52fd79ed;
          goto LAB_0045e460;
        }
        if (local_dc == -0x42dd65a) {
          local_dc = 0x5fd4993c;
          goto LAB_0045e460;
        }
        if (local_dc != -0x2064c38) goto LAB_0045e460;
        uVar5 = ((DAT_004d0b18 | DAT_004d0b1c) ^ 0x75eb73e1) * 0x3df11945 + 0x93521f90;
        _objc_release(local_90);
        local_99 = local_98 == 0;
        bVar2 = 0x8fa316a7 < uVar5;
        bVar1 = uVar5 == 0x8fa316a8;
        iVar3 = -0x2064c38;
        local_dc = -0x6f272739;
        goto LAB_0045f728;
      }
      if (-0x142bd26e < local_dc) {
        if (local_dc == -0x142bd26d) goto LAB_0045f1bc;
        if (local_dc == -0xf40ee5c) {
          _objc_msgSend(local_88,local_70);
          uVar4 = _objc_retainAutoreleasedReturnValue();
          _objc_msgSend(uVar4,PTR_s_currentBubble_0048a848);
          _objc_retainAutoreleasedReturnValue();
          local_dc = -0x5c0f7470;
        }
        goto LAB_0045e460;
      }
      if (local_dc == -0x2265e3cc) {
        _objc_msgSend(local_78,PTR_s_enabled_0048a890);
        local_dc = -0x57c4655b;
        goto LAB_0045e460;
      }
      if (local_dc != -0x20a5c8a5) goto LAB_0045e460;
      bVar1 = local_a9 == '\0';
      local_dc = -0x36774ca4;
      iVar3 = 0x582bb935;
    }
LAB_0045f8f0:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x56823c6a) {
    if (local_dc < 0x30ee1525) {
      if (local_dc < 0x18224c12) {
        if (0xd4284aa < local_dc) {
          if (local_dc == 0xd4284ab) {
            local_dc = -0x67ed66ca;
          }
          else if (local_dc == 0xefd8ec2) {
            _objc_msgSend(local_c8,PTR_s_applyMessageTime__0048bc28,param_1);
            local_dc = -0x60d89d48;
          }
          goto LAB_0045e460;
        }
        if (local_dc != 0xb147714) {
          if (local_dc == 0xc189b66) {
            local_dc = 0x30ee1525;
          }
          goto LAB_0045e460;
        }
        uVar5 = DAT_004d0b58 | DAT_004d0b5c;
        _objc_msgSend(PTR_BubbleBoxConfig_0048c990,local_70);
        local_b8 = _objc_retainAutoreleasedReturnValue();
        bVar1 = 0x954148b1 < (uVar5 + 0xd63f054c ^ 0x7030e90a);
        local_dc = -0x6ee8c605;
        iVar3 = 0x487e440a;
      }
      else if (local_dc < 0x25d9d151) {
        if (local_dc == 0x18224c12) {
          local_dc = -0x142bd26d;
          goto LAB_0045e460;
        }
        if (local_dc != 0x241db26d) goto LAB_0045e460;
        bVar1 = 0x7ba65651 < ((DAT_004d0af0 & DAT_004d0af4 | 0xff7fffff) & 0x5fb2effd);
        local_dc = 0x6ab57092;
        iVar3 = 0x314d8eb8;
      }
      else {
        if (local_dc != 0x25d9d151) {
          if (local_dc == 0x25dca963) goto LAB_0045f51c;
          if (local_dc == 0x2aa26f95) {
            local_dc = -0x61b9b529;
          }
          goto LAB_0045e460;
        }
        bVar1 = 0x361fe4b < (DAT_004d0b60 | DAT_004d0b64 | 0x127c42d6) * 0x5400f245;
        local_dc = -0xb22b6df;
        iVar3 = -0x2ac92037;
      }
    }
    else if (local_dc < 0x3735e9a2) {
      if (0x31ad53d4 < local_dc) {
        if (local_dc == 0x31ad53d5) {
          uVar5 = (uint)((ulong)((DAT_004d0b70 + DAT_004d0b74 ^ 0x1565d0c3U) + 0x8e0d4286) *
                         0x3c192497 >> 0x3d);
          bVar2 = 0x94efcf16 < uVar5;
          bVar1 = uVar5 == 0x94efcf17;
          iVar3 = -0x229d4e28;
          local_dc = 0x6041f81f;
          goto LAB_0045f728;
        }
        if (local_dc == 0x3702bc49) {
          _objc_msgSend(local_98,PTR_s_name_0048a060);
          local_a8 = _objc_retainAutoreleasedReturnValue();
          local_a9 = local_a8 == 0;
          local_dc = -0x6c08c763;
        }
        goto LAB_0045e460;
      }
      if (local_dc != 0x30ee1525) {
        if (local_dc == 0x314d8eb8) {
          local_dc = 0x6ab57092;
        }
        goto LAB_0045e460;
      }
      uVar5 = 0;
      if (DAT_004d0ac4 != 0) {
        uVar5 = DAT_004d0ac0 / DAT_004d0ac4;
      }
      bVar1 = 0x78f4f356 < (uint)((ulong)(uVar5 + 0x22cf8e94) * 0x687b29e9 >> 0x3e);
      local_dc = 0x5fd4993c;
      iVar3 = -0x42dd65a;
    }
    else {
      if (local_dc < 0x490c0293) {
        if (local_dc == 0x3735e9a2) {
          local_dc = 0x25dca963;
        }
        else if (local_dc == 0x487e440a) {
          local_dc = 0x25d9d151;
        }
        goto LAB_0045e460;
      }
      if (local_dc == 0x490c0293) {
        DAT_004d22e8 = '\x01';
        goto LAB_0045f59c;
      }
      if (local_dc == 0x50c34213) {
        uVar5 = 0;
        if (DAT_004d0b2c != 0) {
          uVar5 = DAT_004d0b28 / DAT_004d0b2c;
        }
        bVar1 = (uVar5 & 0x234b418) == 0xa20e0d;
        iVar3 = 0x7265311f;
        local_dc = -0x20a5c8a5;
        goto LAB_0045f438;
      }
      if (local_dc != 0x52fd79ed) goto LAB_0045e460;
      uVar5 = DAT_004d0ab8 | DAT_004d0abc;
      (*DAT_004d2308)(param_1,PTR_s_updateNodeStatus_0048c180);
      bVar1 = 0x45bc1736 < ((uVar5 | 0x74950cfb) ^ 0xabeea7c);
      local_dc = -0x43a2420;
      iVar3 = 0xc189b66;
    }
LAB_0045f8d0:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x6825ddf2) {
    if (local_dc < 0x6041f81f) {
      if (local_dc < 0x582bb935) {
        if (local_dc == 0x56823c6a) {
          local_dc = 0x61844947;
          goto LAB_0045f5d4;
        }
        if (local_dc == 0x56fe301c) {
          local_dc = 0x6760b193;
        }
      }
      else if (local_dc == 0x582bb935) {
LAB_0045f59c:
        local_dc = -0x26ff6454;
      }
      else if (local_dc == 0x5fd4993c) {
        uVar5 = (DAT_004d0ac8 * DAT_004d0acc & 0x39235650U ^ 0x25c6ce32) + 0xba1f2133;
        local_61 = DAT_004d22e8;
        local_70 = PTR_s_shared_00489458;
        bVar2 = 0x23b3bba3 < uVar5;
        bVar1 = uVar5 == 0x23b3bba4;
        iVar3 = 0x5fd4993c;
        local_dc = 0x67c91917;
        goto LAB_0045f728;
      }
    }
    else if (local_dc < 0x649dea0f) {
      if (local_dc == 0x6041f81f) {
        local_dc = -0x229d4e28;
      }
      else if (local_dc == 0x61844947) {
        local_d8 = local_d0;
        bVar1 = 0xe9a26d3b <
                (uint)((ulong)((DAT_004d0ba0 - DAT_004d0ba4 | 0xd2ecfd00U) + 0xe4c21dd0) *
                       0x7d042e71 >> 0x3e);
        local_dc = -0x91d6253;
        iVar3 = 0x7c9a2b75;
        goto LAB_0045f8d0;
      }
    }
    else if (local_dc == 0x6760b193) {
      iVar3 = _objc_msgSend(local_b8,local_c0);
      local_dc = 0x31ad53d5;
      if (iVar3 == 0) {
        local_dc = 0x61844947;
      }
LAB_0045f760:
      local_d0 = local_b8;
    }
    else {
      if (local_dc == 0x67c91917) {
        bVar1 = local_61 == '\0';
        local_dc = 0x6825ddf2;
        iVar3 = 0x7225f260;
        goto LAB_0045f8f0;
      }
      if (local_dc == 0x649dea0f) {
        return;
      }
    }
    goto LAB_0045e460;
  }
  if (0x76fbaa3d < local_dc) {
    if (local_dc < 0x7c9a2b75) {
      if (local_dc == 0x76fbaa3e) {
        _objc_release(local_90);
LAB_0045f51c:
        local_dc = -0x2064c38;
      }
      else if (local_dc == 0x77b841cd) {
        local_dc = -0x2f177f19;
      }
    }
    else if (local_dc == 0x7c9a2b75) {
      _objc_release(local_d8);
      _objc_release(param_1);
      local_dc = -0x91d6253;
    }
    else if (local_dc == 0x7f961d7a) {
      iVar3 = DAT_004d0b48 + DAT_004d0b4c;
      _objc_release(local_78);
      local_dc = 0x7f961d7a;
      if ((iVar3 * 0x3a545bca + 0x4cbdd871U ^ 0x46984c37) < 0xc874f686) {
        local_dc = -0x4df8e3b4;
      }
    }
    else if (local_dc == 0x7fac0a9a) {
      uVar5 = 0;
      if (DAT_004d0ab4 != 0) {
        uVar5 = DAT_004d0ab0 / DAT_004d0ab4;
      }
      bVar1 = 0x6ce0700 < (uVar5 + 0xa96eba98 ^ 0x310502d3);
      local_dc = -0x43a2420;
      iVar3 = 0x52fd79ed;
      goto LAB_0045f8d0;
    }
    goto LAB_0045e460;
  }
  if (local_dc < 0x7225f260) {
    if (local_dc != 0x6825ddf2) {
      if (local_dc == 0x6ab57092) {
        local_88 = PTR_BubbleBoxMgr_0048c9a8;
        bVar1 = (DAT_004d0af8 & DAT_004d0afc & 0x52cfeaea) == 0xcd850cc9;
        iVar3 = 0x6ab57092;
        local_dc = -0x513acbb3;
        goto LAB_0045f438;
      }
      goto LAB_0045e460;
    }
    bVar1 = DAT_004d0b50 * DAT_004d0b54 * 0x8c77719 == -0x340da5a3;
    iVar3 = -0x6ee8c605;
    local_dc = 0xb147714;
LAB_0045f438:
    if (bVar1) {
      local_dc = iVar3;
    }
    goto LAB_0045e460;
  }
  if (local_dc != 0x7225f260) {
    iVar3 = 0x7265311f;
    goto LAB_0045ebc8;
  }
  uVar5 = (DAT_004d0ad0 & DAT_004d0ad4 ^ 0x2324e8c8) * -0x5b3ce53e + 0x90c2ad3c;
  bVar2 = 0x67ab828c < uVar5;
  bVar1 = uVar5 == 0x67ab828d;
  iVar3 = -0x2fc8a8d2;
  local_dc = -0x589154e7;
LAB_0045f728:
  if (!bVar2 || bVar1) {
    local_dc = iVar3;
  }
  goto LAB_0045e460;
}
