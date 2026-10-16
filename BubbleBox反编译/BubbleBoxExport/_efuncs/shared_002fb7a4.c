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