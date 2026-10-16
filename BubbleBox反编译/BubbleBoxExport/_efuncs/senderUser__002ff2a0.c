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