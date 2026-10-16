// ##### isNeedInsertTimeNode:current: @ 002fe49c
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