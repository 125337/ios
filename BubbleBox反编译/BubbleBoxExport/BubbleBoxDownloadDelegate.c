
// ===================== @interface BubbleBoxDownloadDelegate : 9 methods =====================

// ----- -[BubbleBoxDownloadDelegate initWithProgressBlock:downloadCompletedBlock:] @ 002047a4 -----

/* Function Stack Size: 0x20 bytes */

ID BubbleBoxDownloadDelegate::initWithProgressBlock_downloadCompletedBlock_
             (ID param_1,SEL param_2,ID param_3,undefined4 param_4,ID param_5,undefined4 param_6)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined8 extraout_x1;
  SEL extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  SEL extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  SEL extraout_x1_07;
  undefined8 extraout_x1_08;
  int iVar6;
  ID *pIVar7;
  int iVar8;
  undefined1 auVar9 [16];
  ID local_c0 [2];
  undefined1 auStack_b0 [8];
  ID local_a8;
  int *local_a0;
  int local_94;
  undefined *local_90;
  char local_81;
  ID local_80;
  undefined *local_78;
  ID *local_70;
  int local_64;
  
  pIVar7 = (ID *)auStack_b0;
  local_64 = (DAT_004ae430 - DAT_004ae434 | 0x67455af4U) * 0x172db82a + -0x6040a4f4;
  local_94 = 0x4c73f173;
  local_a0 = &local_94;
  local_a8 = param_1;
LAB_0020485c:
  auVar9._8_8_ = param_2;
  auVar9._0_8_ = local_80;
  if (local_94 < -0x7a093ff) {
    if (local_94 < -0x3cf590a1) {
      if (-0x54a68d9b < local_94) {
        if (local_94 < -0x4c8e676e) {
          if (local_94 == -0x54a68d9a) {
            bVar5 = 0x14b8eaad <
                    (DAT_004ae460 + DAT_004ae464 + 0xcb5953a9U & 0xdc8d6c9e | 0xc4014c1c);
            iVar8 = -0x39ff9b7f;
            iVar6 = 0x7d8698df;
LAB_00204db0:
            if (bVar5) {
              iVar6 = iVar8;
            }
            goto LAB_00205094;
          }
          if (local_94 == -0x51132219) {
            uVar1 = DAT_004ae438 & DAT_004ae43c;
            pIVar7 = (ID *)((long)pIVar7 + -0x10);
            local_70 = pIVar7;
            _objc_retain(param_3,param_2);
            _objc_retain(param_4);
            *local_70 = local_a8;
            bVar5 = 0x20326804 < ((uVar1 | 0xf8613640) ^ 0xd2c3990b) + 0xc7e91e27;
            iVar6 = -0x51132219;
            iVar8 = -0x7f7cd3ce;
            param_2 = extraout_x1_00;
            goto LAB_00204fe4;
          }
        }
        else {
          if (local_94 == -0x4084f0ee) {
            _objc_msgSend(local_80,PTR_s_setDownloadCompletedBlock__0048b190,param_4);
            auVar9._8_8_ = extraout_x1_05;
            auVar9._0_8_ = local_80;
            iVar6 = -0x3185d9ec;
            goto LAB_00205094;
          }
          if (local_94 == -0x4c8e676e) {
            return local_80;
          }
        }
        goto LAB_0020485c;
      }
      if (local_94 < -0x605d13d2) {
        if (local_94 == -0x7f7cd3ce) {
          iVar6 = -0x297debf8;
          goto LAB_00205094;
        }
        if (local_94 != -0x73cb20b6) goto LAB_0020485c;
        _objc_msgSendSuper2(local_70,local_78);
        auVar9._8_8_ = extraout_x1;
        auVar9._0_8_ = local_80;
        iVar6 = -0x9f963d0;
      }
      else if (local_94 == -0x605d13d2) {
        iVar6 = -0x3cf590a1;
      }
      else {
        if (local_94 != -0x5551b157) goto LAB_0020485c;
        _objc_retain(param_3,param_2);
        _objc_retain(param_4);
        auVar9._8_8_ = extraout_x1_01;
        auVar9._0_8_ = local_80;
        *(ID *)((long)pIVar7 + -0x10) = local_a8;
        pIVar7 = (ID *)((long)pIVar7 + -0x10);
        iVar6 = -0x51132219;
      }
    }
    else if (local_94 < -0x297debf8) {
      if (local_94 == -0x3cf590a1) {
        iVar6 = -0x3cf590a1;
        if (((uint)(DAT_004ae490 + DAT_004ae494) / 0x29a60932 & 2) < 0xfd3903a8) {
          iVar6 = -0x4c8e676e;
        }
      }
      else {
        if (local_94 != -0x39ff9b7f) {
          if (local_94 == -0x3185d9ec) goto LAB_00204ce4;
          goto LAB_0020485c;
        }
        iVar6 = DAT_004ae468 * DAT_004ae46c;
        _objc_msgSend(local_80,local_90,param_3);
        bVar5 = 0xb85a55b4 < (iVar6 + 0xc6291154U | 0xcdf630b1) - 0x18c38c;
        iVar6 = 0x7d8698df;
        iVar8 = 0x31ab5054;
        param_2 = extraout_x1_07;
LAB_00204fe4:
        auVar2._8_8_ = param_2;
        auVar2._0_8_ = local_80;
        auVar9._8_8_ = param_2;
        auVar9._0_8_ = local_80;
        if (bVar5) {
          iVar6 = iVar8;
          auVar9 = auVar2;
        }
      }
    }
    else {
      if (-0x1bf277a2 < local_94) {
        if (local_94 == -0x1bf277a1) {
          iVar6 = 0x4dfe25d9;
          goto LAB_00205094;
        }
        if (local_94 == -0x9f963d0) {
          uVar1 = DAT_004ae448 | DAT_004ae44c;
          auVar9 = _objc_msgSendSuper2(local_70,local_78);
          local_81 = auVar9._0_8_ == 0;
          bVar5 = 0xb437977 < (uint)((ulong)(uVar1 + 0xded04bee) * 0xce3820d >> 0x3b);
          iVar8 = -0x73cb20b6;
          iVar6 = 0x312b805c;
          goto LAB_00204db0;
        }
        goto LAB_0020485c;
      }
      if (local_94 != -0x297debf8) {
        if (local_94 == -0x1ec01b60) {
          bVar5 = 0xceabbc54 <
                  (uint)((ulong)(DAT_004ae440 * DAT_004ae444 + 0x471121f4U | 0x9d0bdc65) *
                         0x163f5d29 >> 0x3c);
          iVar6 = -0x9f963d0;
          iVar8 = -0x73cb20b6;
          goto LAB_00204fe4;
        }
        goto LAB_0020485c;
      }
      local_70[1] = (ID)PTR_BubbleBoxDownloadDelegate_0048cd80;
      auVar9._0_8_ = local_80;
      local_78 = PTR_s_init_00489660;
      iVar6 = -0x1ec01b60;
    }
  }
  else if (local_94 < 0x400a6585) {
    if (local_94 < 0x28fcf838) {
      if (local_94 == -0x7a093ff) {
        uVar1 = DAT_004ae470 * DAT_004ae474;
        _objc_release(param_4);
        auVar3._8_8_ = extraout_x1_08;
        auVar3._0_8_ = local_80;
        auVar9._8_8_ = extraout_x1_08;
        auVar9._0_8_ = local_80;
        iVar6 = -0x7a093ff;
        if ((uVar1 ^ 0x2010800 | 0xbdfca7ff) != 0x9cada97b) {
          iVar6 = 0x28fcf838;
          auVar9 = auVar3;
        }
      }
      else if (local_94 == -0x1413b2d) {
        uVar1 = DAT_004ae480 ^ DAT_004ae484;
        _objc_release(param_3);
        auVar4._8_8_ = extraout_x1_06;
        auVar4._0_8_ = local_80;
        auVar9._8_8_ = extraout_x1_06;
        auVar9._0_8_ = local_80;
        iVar6 = 0x3f61c7f3;
        if (((uint)((ulong)(uVar1 ^ 0x835c4d5f) * 0x2b5b7765 >> 0x3b) & 3) < 0x21feb475) {
          iVar6 = -0x1bf277a1;
          auVar9 = auVar4;
        }
      }
      else {
        iVar6 = 0x400a6585;
        if (local_94 != 0x268803f9) goto LAB_0020485c;
      }
    }
    else if (local_94 < 0x31ab5054) {
      if (local_94 != 0x28fcf838) {
        if (local_94 == 0x312b805c) {
          bVar5 = local_81 == '\0';
          iVar6 = -0x3185d9ec;
          iVar8 = 0x775d3a21;
          goto LAB_00204a68;
        }
        goto LAB_0020485c;
      }
      iVar6 = 0x65355701;
    }
    else if (local_94 == 0x31ab5054) {
      iVar6 = -0x4084f0ee;
    }
    else {
      if (local_94 != 0x3f61c7f3) goto LAB_0020485c;
      _objc_release(param_3);
      auVar9._8_8_ = extraout_x1_02;
      auVar9._0_8_ = local_80;
      iVar6 = -0x1413b2d;
    }
  }
  else if (local_94 < 0x63e0fed0) {
    if (local_94 < 0x4dfe25d9) {
      if (local_94 == 0x400a6585) {
        local_90 = PTR_s_setProgressBlock__0048b188;
        iVar6 = 0x400a6585;
        if ((((DAT_004ae458 & DAT_004ae45c) + 0xe357ca04) / 0x198740ce) * 0x51108331 != 0x4dbe0d42)
        {
          iVar6 = 0x63e0fed0;
        }
      }
      else {
        if (local_94 != 0x4c73f173) goto LAB_0020485c;
        bVar5 = local_64 == -0x46ef86b8;
        iVar6 = -0x51132219;
        iVar8 = -0x5551b157;
LAB_00204a68:
        if (bVar5) {
          iVar6 = iVar8;
        }
      }
    }
    else if (local_94 == 0x4dfe25d9) {
      iVar6 = -0x605d13d2;
      if ((DAT_004ae488 + DAT_004ae48c ^ 0x18a796d1U) * -0x20f02b5e != -0x7bbc1aa8) {
        iVar6 = -0x3cf590a1;
      }
    }
    else {
      if (local_94 != 0x532e282e) goto LAB_0020485c;
      _objc_release(param_4);
      param_2 = extraout_x1_03;
LAB_00204ce4:
      auVar9._8_8_ = param_2;
      auVar9._0_8_ = local_80;
      iVar6 = -0x7a093ff;
    }
  }
  else if (local_94 < 0x775d3a21) {
    if (local_94 != 0x63e0fed0) {
      if (local_94 == 0x65355701) {
        bVar5 = ((DAT_004ae478 ^ DAT_004ae47c) & 0x8c5b7599) == 0x3d8721b9;
        iVar6 = -0x1413b2d;
        iVar8 = 0x3f61c7f3;
        goto LAB_00204a68;
      }
      goto LAB_0020485c;
    }
    iVar6 = -0x54a68d9a;
  }
  else if (local_94 == 0x775d3a21) {
    iVar6 = 0x268803f9;
    if (0x5a1cd84d < (DAT_004ae450 & DAT_004ae454) * -0x69cb3076 + 0x7df03ef6) {
      iVar6 = 0x400a6585;
    }
  }
  else {
    if (local_94 != 0x7d8698df) goto LAB_0020485c;
    _objc_msgSend(local_80,local_90,param_3);
    auVar9._8_8_ = extraout_x1_04;
    auVar9._0_8_ = local_80;
    iVar6 = -0x39ff9b7f;
  }
LAB_00205094:
  param_2 = auVar9._8_8_;
  local_80 = auVar9._0_8_;
  *local_a0 = iVar6;
  goto LAB_0020485c;
}



// ----- -[BubbleBoxDownloadDelegate URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite:] @ 002050d4 -----

/* Function Stack Size: 0x38 bytes */

void BubbleBoxDownloadDelegate::
     URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined1 auStack_b0 [8];
  int *local_a8;
  int local_9c;
  ID *local_98;
  float local_90;
  char local_89;
  long local_88;
  undefined8 *local_80;
  uint local_74;
  
  uVar2 = DAT_004795b8;
  puVar7 = (undefined8 *)auStack_b0;
  local_74 = DAT_004ae498 * DAT_004ae49c + 0x6f2948c3;
  local_9c = 0x3a513253;
  local_a8 = &local_9c;
LAB_0020518c:
  puVar3 = local_80;
  if (local_9c < -0x1438d3c) {
    if (local_9c < -0x48c62d36) {
      if (local_9c < -0x7b304064) {
        if (local_9c == -0x7fb72add) {
          puVar7 = (undefined8 *)((long)puVar7 + -0x30);
          iVar6 = -0x7ee03d68;
        }
        else {
          if (local_9c != -0x7ee03d68) goto LAB_0020518c;
          puVar7 = (undefined8 *)((long)puVar7 + -0x30);
          iVar6 = -0x7ee03d68;
          local_80 = puVar7;
          if ((DAT_004ae4a0 - DAT_004ae4a4 & 0x2626be80U) != 0x8fc1423e) {
            iVar6 = -0x1f5836be;
          }
        }
      }
      else if (local_9c == -0x7b304064) {
        iVar6 = 0x4a0ba078;
        if ((DAT_004ae4d0 + DAT_004ae4d4 + 0x1b11bec3U & 0x80248c4e | 0x80048444) < 0x4070306a) {
          iVar6 = -0x1438d3c;
        }
      }
      else if (local_9c == -0x6d65e57c) {
        uVar1 = 0;
        if (DAT_004ae4b4 != 0) {
          uVar1 = DAT_004ae4b0 / DAT_004ae4b4;
        }
        bVar4 = 0x65bdb27f < (uVar1 ^ 0x5439879) * -0x216ef8aa;
        iVar5 = 0x5a14fe43;
        iVar6 = 0x2c61cc2b;
LAB_002054dc:
        if (bVar4) {
          iVar6 = iVar5;
        }
      }
      else {
        if (local_9c != -0x56b2d696) goto LAB_0020518c;
        iVar6 = 0x1f53c220;
        if (local_89 == '\0') {
          iVar6 = 0x2364ddbf;
        }
      }
    }
    else if (local_9c < -0x1f5836be) {
      if (local_9c == -0x48c62d36) {
        local_90 = (float)(long)param_6 / (float)(long)param_7;
        *local_80 = PTR___NSConcreteStackBlock_00481618;
        iVar6 = 0xf95459f;
        if (((DAT_004ae4c8 & DAT_004ae4cc) / 0x4e866b95 | 0x16f6abed) * -0x682ca8ec == -0x41fe29af)
        {
          iVar6 = 0x168d34d0;
        }
      }
      else if (local_9c == -0x46781095) {
        progressBlock(param_1,(SEL)PTR_s_progressBlock_0048b198);
        local_88 = _objc_retainAutoreleasedReturnValue();
        _objc_release();
        iVar6 = 0x31c66222;
      }
      else {
        if (local_9c != -0x4054616d) goto LAB_0020518c;
        progressBlock(param_1,(SEL)PTR_s_progressBlock_0048b198);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        iVar6 = -0x46781095;
      }
    }
    else if (local_9c == -0x1f5836be) {
      iVar6 = -0x772376f;
    }
    else {
      iVar6 = 0x1f53c220;
      if (local_9c != -0x15bed7a6) {
        if (local_9c != -0x772376f) goto LAB_0020518c;
        iVar6 = -0x4054616d;
        if (0xa0cada3f < (((DAT_004ae4a8 ^ DAT_004ae4ac) & 0xcd68f0bd) + 0xdd44f854 & 0xf860e905)) {
          iVar6 = -0x46781095;
        }
      }
    }
  }
  else if (local_9c < 0x2c61cc2b) {
    if (0x1f53c21f < local_9c) {
      if (local_9c == 0x2198d527) {
        local_80[1] = uVar2;
        puVar3[2] = FUN_00205778;
        puVar3[3] = &DAT_004801c0;
        local_98 = puVar3 + 4;
        iVar6 = -0x7b304064;
        goto LAB_00205738;
      }
      if (local_9c == 0x2364ddbf) {
        bVar4 = 0x6c77f0ea < (DAT_004ae4c0 & DAT_004ae4c4) * 0x510a0876 + 0x9a47901a;
        iVar5 = -0x48c62d36;
        iVar6 = 0x168d34d0;
        goto LAB_002054dc;
      }
      if (local_9c == 0x1f53c220) {
        return;
      }
      goto LAB_0020518c;
    }
    if (local_9c == -0x1438d3c) {
      *local_98 = param_1;
      *(float *)(local_80 + 5) = local_90;
      _dispatch_async(PTR___dispatch_main_q_00481640);
      iVar6 = 0x4a0ba078;
    }
    else {
      if (local_9c == 0xf95459f) {
        iVar6 = 0x2198d527;
        goto LAB_00205738;
      }
      if (local_9c != 0x168d34d0) goto LAB_0020518c;
      *local_80 = PTR___NSConcreteStackBlock_00481618;
      iVar6 = -0x48c62d36;
    }
  }
  else if (local_9c < 0x3a513253) {
    iVar6 = 0x5a14fe43;
    if (local_9c != 0x2c61cc2b) {
      if (local_9c != 0x31c66222) goto LAB_0020518c;
      iVar6 = -0x6d65e57c;
    }
  }
  else if (local_9c == 0x5a14fe43) {
    local_89 = local_88 == 0;
    iVar6 = 0x2c61cc2b;
    if (0xef23d98 < ((DAT_004ae4b8 | DAT_004ae4bc) + 0x4ed22d49 | 0x36b2154c) + 0xe444a152) {
      iVar6 = -0x56b2d696;
    }
  }
  else {
    if (local_9c == 0x4a0ba078) {
      uVar1 = 0;
      if (DAT_004ae4dc != 0) {
        uVar1 = DAT_004ae4d8 / DAT_004ae4dc;
      }
      *local_98 = param_1;
      *(float *)(local_80 + 5) = local_90;
      _dispatch_async(PTR___dispatch_main_q_00481640);
      iVar6 = -0x1438d3c;
      if ((uVar1 & 0x6190d53a | 0x6180c138) < 0xf7146042) {
        iVar6 = -0x15bed7a6;
      }
      goto LAB_00205738;
    }
    if (local_9c != 0x3a513253) goto LAB_0020518c;
    iVar6 = -0x7ee03d68;
    if (local_74 < 0xb3fe496c) {
      iVar6 = -0x7fb72add;
    }
  }
LAB_00205738:
  *local_a8 = iVar6;
  goto LAB_0020518c;
}



// ----- -[BubbleBoxDownloadDelegate URLSession:downloadTask:didFinishDownloadingToURL:] @ 00205a6c -----

/* WARNING: Removing unreachable block (ram,0x00205f14) */
/* Function Stack Size: 0x28 bytes */

void BubbleBoxDownloadDelegate::URLSession_downloadTask_didFinishDownloadingToURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  uint uVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  bool bVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar7;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  int iVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int local_9c;
  undefined8 local_98;
  undefined8 *local_90;
  long local_88;
  char local_79;
  long local_78;
  undefined *local_70;
  
  auVar10._8_8_ = param_2;
  auVar10._0_8_ = local_98;
  uVar2 = DAT_004ae500 & DAT_004ae504;
  local_9c = -0x373c9456;
LAB_00205b24:
  uVar7 = auVar10._8_8_;
  local_98 = auVar10._0_8_;
  if (local_9c < 0x16b41837) {
    if (local_9c < -0x13bb0635) {
      if (-0x373c9457 < local_9c) {
        if (local_9c < -0x28dc58cc) {
          if (local_9c == -0x373c9456) {
            bVar6 = 0x50bb362b < (uVar2 * -0x48bdf426 ^ 0x13c64c30);
            iVar8 = 0x5a67dcc4;
            iVar9 = 0x5ebe08e9;
            goto LAB_002060c8;
          }
          if (local_9c == -0x2df597df) {
            _objc_release(param_5,uVar7);
            uVar7 = extraout_x1_01;
LAB_00206070:
            auVar10._8_8_ = uVar7;
            auVar10._0_8_ = local_98;
            iVar8 = 0x5531455f;
            goto LAB_0020637c;
          }
        }
        else {
          iVar8 = 0x1bbe5e6c;
          if (local_9c == -0x20ca5fcf) goto LAB_0020637c;
          if (local_9c == -0x28dc58cc) {
            return;
          }
        }
        goto LAB_00205b24;
      }
      if (local_9c < -0x68c81eb1) {
        iVar8 = -0x6db8dfa6;
        if (local_9c != -0x755a648e) {
          if (local_9c == -0x6db8dfa6) {
            uVar1 = (DAT_004ae510 - DAT_004ae514) * 0x6230b451 & 0xa7abde97U | 0x83214017;
            local_79 = local_78 == 0;
            bVar5 = 0x144fa543 < uVar1;
            bVar6 = uVar1 == 0x144fa544;
            iVar9 = -0x755a648e;
            iVar8 = 0x324c4cce;
            goto LAB_00206234;
          }
          goto LAB_00205b24;
        }
      }
      else {
        if (local_9c == -0x68c81eb1) {
          (*(code *)*local_90)(local_88,param_5,local_98,0);
          _objc_release(local_98);
          _objc_release(local_88);
          auVar10._8_8_ = extraout_x1_03;
          auVar10._0_8_ = local_98;
          iVar8 = -0xca36310;
          goto LAB_0020637c;
        }
        if (local_9c != -0x570152f1) goto LAB_00205b24;
        iVar8 = 0x502633ac;
      }
    }
    else if (local_9c < -0xca36310) {
      if (local_9c == -0x13bb0635) goto LAB_00206070;
      if (local_9c == -0x1309a7ce) {
        _objc_release(param_4,uVar7);
        auVar10._8_8_ = extraout_x1_06;
        auVar10._0_8_ = local_98;
        iVar8 = 0x28e79b5b;
      }
      else {
        if (local_9c != -0xfed0de7) goto LAB_00205b24;
        iVar8 = 0x1843f115;
      }
    }
    else if (local_9c < 0x820e1a7) {
      if (local_9c != -0xca36310) {
        if (local_9c == -0x257f0f4) {
          iVar8 = 0xa988156;
          goto LAB_0020637c;
        }
        goto LAB_00205b24;
      }
      uVar1 = DAT_004ae530 | DAT_004ae534;
      (*(code *)*local_90)(local_88,param_5,local_98,0);
      _objc_release(local_98);
      _objc_release(local_88);
      auVar11._8_8_ = extraout_x1_04;
      auVar11._0_8_ = local_98;
      auVar10._8_8_ = extraout_x1_04;
      auVar10._0_8_ = local_98;
      iVar8 = -0xca36310;
      if ((uint)((ulong)uVar1 * 0x67fb93bd >> 0x3e) < 0x36814572) {
        iVar8 = 0x62508693;
        auVar10 = auVar11;
      }
    }
    else {
      if (local_9c != 0x820e1a7) {
        if (local_9c == 0xa988156) {
          bVar6 = false;
          iVar8 = -0x1309a7ce;
          iVar9 = 0x28e79b5b;
          goto LAB_00205fb0;
        }
        goto LAB_00205b24;
      }
      uVar1 = (DAT_004ae518 & DAT_004ae51c | 0xbd9f84e5) + 0x4d589d66 | 0x20a1ec01;
      bVar5 = 0x69ffbe77 < uVar1;
      bVar6 = uVar1 == 0x69ffbe78;
      iVar9 = 0x1bbe5e6c;
      iVar8 = -0x20ca5fcf;
LAB_00206234:
      auVar3._8_8_ = uVar7;
      auVar3._0_8_ = local_98;
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = local_98;
      if (!bVar5 || bVar6) {
        iVar8 = iVar9;
        auVar10 = auVar3;
      }
    }
  }
  else if (local_9c < 0x502633ac) {
    if (local_9c < 0x1edfd466) {
      if (local_9c == 0x16b41837) {
        iVar8 = -0x13bb0635;
        if (local_79 == '\0') {
          iVar8 = 0x6a1c7dc2;
        }
      }
      else if (local_9c == 0x1843f115) {
        iVar8 = -0x6db8dfa6;
        if (((DAT_004ae508 ^ DAT_004ae50c) * -0x2b3afa35 | 0x36b30f5a) + 0xec250472 < 0x24ff3f66) {
          iVar8 = -0x755a648e;
        }
      }
      else {
        if (local_9c != 0x1bbe5e6c) goto LAB_00205b24;
        bVar6 = 0x63e81e20 < ((DAT_004ae520 | DAT_004ae524) + 0xa4aadb3d ^ 0x7d73f1d0) + 0xb70aeec7;
        iVar8 = 0x1bbe5e6c;
        iVar9 = 0x16b41837;
LAB_002060c8:
        if (bVar6) {
          iVar8 = iVar9;
        }
      }
    }
    else if (local_9c < 0x324c4cce) {
      if (local_9c != 0x1edfd466) {
        if (local_9c == 0x28e79b5b) {
          uVar1 = (DAT_004ae548 | DAT_004ae54c) * 0x58de4932 + 0x20a73c4b;
          _objc_release(param_4,uVar7);
          bVar5 = 0x6bd24fb2 < uVar1;
          bVar6 = uVar1 == 0x6bd24fb3;
          iVar9 = -0x1309a7ce;
          iVar8 = 0x573c98f1;
          uVar7 = extraout_x1_00;
          goto LAB_00206234;
        }
        goto LAB_00205b24;
      }
      iVar8 = -0x68c81eb1;
      if (((uint)(DAT_004ae528 + DAT_004ae52c) / 0x7c22af34 | 0x131340) < 0xeb926787) {
        iVar8 = -0xca36310;
      }
    }
    else if (local_9c == 0x324c4cce) {
      iVar8 = 0x820e1a7;
    }
    else {
      if (local_9c != 0x4249efe3) goto LAB_00205b24;
      iVar8 = 0x502633ac;
    }
  }
  else if (local_9c < 0x5ebe08e9) {
    if (local_9c < 0x573c98f1) {
      if (local_9c == 0x502633ac) {
        iVar8 = -0x28dc58cc;
        if ((DAT_004ae558 ^ DAT_004ae55c) == 0x41a1b863) {
          iVar8 = 0x502633ac;
        }
      }
      else {
        if (local_9c != 0x5531455f) goto LAB_00205b24;
        uVar1 = DAT_004ae538 + DAT_004ae53c;
        _objc_release(param_5,uVar7);
        bVar6 = (uint)((ulong)((uVar1 ^ 0x2f476b73) * -0x4e1b3fa2) * 0x8ad88119 >> 0x3d) ==
                0x2f1b3653;
        iVar8 = 0x5531455f;
        iVar9 = -0x257f0f4;
        uVar7 = extraout_x1;
LAB_00205fb0:
        auVar4._8_8_ = uVar7;
        auVar4._0_8_ = local_98;
        auVar10._8_8_ = uVar7;
        auVar10._0_8_ = local_98;
        if (!bVar6) {
          iVar8 = iVar9;
          auVar10 = auVar4;
        }
      }
    }
    else if (local_9c == 0x573c98f1) {
      iVar8 = -0x570152f1;
    }
    else {
      if (local_9c != 0x5a67dcc4) goto LAB_00205b24;
      _objc_retain(param_4);
      _objc_retain(param_5);
      local_70 = PTR_s_downloadCompletedBlock_0048b1a0;
      _objc_msgSend(param_1);
      local_78 = _objc_retainAutoreleasedReturnValue();
      _objc_release();
      auVar10._8_8_ = extraout_x1_02;
      auVar10._0_8_ = local_98;
      iVar8 = -0xfed0de7;
    }
  }
  else if (local_9c < 0x6a1c7dc2) {
    if (local_9c == 0x5ebe08e9) {
      _objc_retain(param_4);
      _objc_retain(param_5);
      downloadCompletedBlock(param_1,(SEL)PTR_s_downloadCompletedBlock_0048b1a0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      auVar10._8_8_ = extraout_x1_05;
      auVar10._0_8_ = local_98;
      iVar8 = 0x5a67dcc4;
    }
    else {
      iVar8 = -0x13bb0635;
      if (local_9c != 0x62508693) goto LAB_00205b24;
    }
  }
  else if (local_9c == 0x6a1c7dc2) {
    _objc_msgSend(param_1,local_70);
    auVar11 = _objc_retainAutoreleasedReturnValue();
    auVar10._8_8_ = auVar11._8_8_;
    auVar10._0_8_ = local_98;
    local_88 = auVar11._0_8_;
    local_90 = (undefined8 *)(local_88 + 0x10);
    iVar8 = 0x7b98be7b;
  }
  else {
    if (local_9c != 0x7b98be7b) goto LAB_00205b24;
    _objc_msgSend(param_4,PTR_s_response_0048b1a8);
    auVar10 = _objc_retainAutoreleasedReturnValue();
    iVar8 = 0x1edfd466;
  }
LAB_0020637c:
  local_9c = iVar8;
  goto LAB_00205b24;
}



// ----- -[BubbleBoxDownloadDelegate URLSession:task:didCompleteWithError:] @ 002063a8 -----

/* Function Stack Size: 0x28 bytes */

void BubbleBoxDownloadDelegate::URLSession_task_didCompleteWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int local_a4;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 *local_90;
  long local_88;
  char local_79;
  long local_78;
  undefined *local_70;
  char local_61;
  
  _objc_retain(param_3);
  local_a4 = -0x5c405a3d;
LAB_00206440:
  if (local_a4 < 0x6953b34) {
    if (local_a4 < -0x50df6c4e) {
      if (local_a4 < -0x5c405a3d) {
        if (-0x64766174 < local_a4) {
          if (local_a4 == -0x64766173) {
            uVar1 = DAT_004ae578 & DAT_004ae57c;
            local_70 = PTR_s_downloadCompletedBlock_0048b1a0;
            _objc_msgSend(param_1);
            local_78 = _objc_retainAutoreleasedReturnValue();
            iVar4 = -0x5be2c28c;
            if (0x7b29436f < ((uVar1 | 0x12040523) ^ 0x12901583 | 0xcd23e808)) {
              iVar4 = -0x2462642f;
            }
            goto LAB_00206f68;
          }
          if (local_a4 == -0x60700dbf) {
            bVar3 = local_61 == '\0';
            iVar4 = -0x71991127;
            iVar5 = -0x516f120b;
            goto LAB_00206d48;
          }
          if (local_a4 == -0x5d44d5cd) {
            _objc_release(param_3);
            return;
          }
          goto LAB_00206440;
        }
        if (local_a4 == -0x71991127) {
          iVar4 = -0x48acebec;
          if (0x5f81f0d4 < ((DAT_004ae5c0 - DAT_004ae5c4) + 0x727b2a3aU ^ 0x7a32bed5)) {
            iVar4 = 0x75a29a6d;
          }
          goto LAB_00206f68;
        }
        if (local_a4 != -0x68607568) goto LAB_00206440;
        uVar1 = 0;
        if (DAT_004ae574 != 0) {
          uVar1 = DAT_004ae570 / DAT_004ae574;
        }
        iVar4 = 0xf51d57b;
        if ((uVar1 + 0xaa0d7a6c) / 0xc683f7a == 0xce3914d4) {
          iVar4 = 0x7ef9c870;
        }
      }
      else if (local_a4 < -0x54eb7c13) {
        if (local_a4 == -0x5c405a3d) {
          uVar1 = (DAT_004ae560 | DAT_004ae564) * 0x2bdcb8b1 + 0xd942028d;
          bVar2 = 0xce9398fb < uVar1;
          bVar3 = uVar1 == 0xce9398fc;
          iVar5 = 0x56218bd9;
          iVar4 = 0x42beda5;
LAB_00206e64:
          if (!bVar2 || bVar3) {
            iVar4 = iVar5;
          }
        }
        else {
          if (local_a4 != -0x5be2c28c) goto LAB_00206440;
          downloadCompletedBlock(param_1,(SEL)PTR_s_downloadCompletedBlock_0048b1a0);
          _objc_retainAutoreleasedReturnValue();
LAB_00206944:
          iVar4 = -0x64766173;
        }
      }
      else {
        if (local_a4 == -0x54eb7c13) {
          iVar4 = -0x5d44d5cd;
          goto LAB_00206f68;
        }
        iVar4 = -0x71991127;
        if (local_a4 != -0x54a4000d) {
          if (local_a4 == -0x516f120b) goto LAB_00206944;
          goto LAB_00206440;
        }
      }
    }
    else if (local_a4 < -0x2462642f) {
      if (local_a4 < -0x2e61482e) {
        if (local_a4 == -0x50df6c4e) {
          iVar4 = 0x604a3be6;
          if ((DAT_004ae590 & DAT_004ae594 & 0x53868784) + 0x7b1d36a2 < 0xe6e75bc9) {
            iVar4 = -0x18015ed0;
          }
        }
        else {
          if (local_a4 != -0x48acebec) goto LAB_00206440;
          _objc_release(param_5);
          iVar4 = 0x75a29a6d;
        }
      }
      else {
        if (local_a4 != -0x2e61482e) {
          if (local_a4 == -0x24ec50f7) {
            uVar1 = (DAT_004ae580 | DAT_004ae584 | 0x275b010a) * 0x7c5f4862;
            bVar2 = 0xf4aaa595 < uVar1;
            bVar3 = uVar1 == 0xf4aaa596;
            iVar5 = 0x5a2423a6;
            iVar4 = 0x6456011d;
            goto LAB_00206e64;
          }
          goto LAB_00206440;
        }
        uVar1 = 0;
        if (DAT_004ae5a4 != 0) {
          uVar1 = DAT_004ae5a0 / DAT_004ae5a4;
        }
        iVar4 = 0x4724f367;
        if ((uint)((ulong)(uVar1 >> 2) * 0x125ad3c9 >> 0x3a) != 0x1b797293) {
          iVar4 = 0x7448f060;
        }
      }
    }
    else if (local_a4 < -0x1ba8629a) {
      if (local_a4 == -0x2462642f) {
        iVar4 = -0x24ec50f7;
        goto LAB_00206f68;
      }
      if (local_a4 != -0x20f47a21) goto LAB_00206440;
      uVar1 = DAT_004ae5d8 * DAT_004ae5dc;
      _objc_release(param_4);
      bVar3 = ((uVar1 ^ 0x4e26d793) * -0xf6ecfc2 & 0xfe07ee8e) == 0x65b07872;
      iVar4 = -0x20f47a21;
      iVar5 = -0x54eb7c13;
LAB_002069e4:
      if (!bVar3) {
        iVar4 = iVar5;
      }
    }
    else if (local_a4 == -0x1ba8629a) {
      _objc_msgSend(param_4,local_98);
      local_a0 = _objc_retainAutoreleasedReturnValue();
      iVar4 = 0x2ae64a5c;
    }
    else if (local_a4 == -0x18015ed0) {
      iVar5 = DAT_004ae598 - DAT_004ae59c;
      local_79 = local_78 == 0;
      _objc_release();
      iVar4 = 0x44d1fdb6;
      if (0xfe0a2ba < (uint)((ulong)(iVar5 + 0x7113a5c6) * 0x1742733b >> 0x3c)) {
        iVar4 = -0x18015ed0;
      }
    }
    else {
      if (local_a4 != 0x42beda5) goto LAB_00206440;
      _objc_retain(param_4);
      iVar4 = 0x56218bd9;
    }
  }
  else if (local_a4 < 0x4724f367) {
    if (local_a4 < 0x28847ff2) {
      if (local_a4 < 0x1b2d5ab2) {
        if (local_a4 == 0x6953b34) {
          iVar4 = -0x68607568;
        }
        else {
          if (local_a4 != 0xf51d57b) goto LAB_00206440;
          _objc_retain(param_5);
          local_61 = param_5 == 0;
          iVar4 = -0x60700dbf;
        }
      }
      else if (local_a4 == 0x1b2d5ab2) {
        uVar1 = 0;
        if (DAT_004ae5bc != 0) {
          uVar1 = DAT_004ae5b8 / DAT_004ae5bc;
        }
        (*(code *)*local_90)(local_88,0,local_a0,param_5);
        _objc_release(local_a0);
        _objc_release(local_88);
        iVar4 = -0x54a4000d;
        if (0x9f4a02d9 < (uint)((ulong)(uVar1 + 0x3ac34120) * 0x297c9cdf >> 0x3d)) {
          iVar4 = 0x1b2d5ab2;
        }
      }
      else {
        if (local_a4 != 0x22285dcf) goto LAB_00206440;
        iVar4 = -0x1ba8629a;
      }
    }
    else if (local_a4 < 0x2d636f42) {
      if (local_a4 == 0x28847ff2) {
        (*(code *)*local_90)(local_88,0,local_a0,param_5);
        _objc_release(local_a0);
        _objc_release(local_88);
        iVar4 = 0x1b2d5ab2;
      }
      else {
        if (local_a4 != 0x2ae64a5c) goto LAB_00206440;
        iVar4 = 0x28847ff2;
        if ((uint)(DAT_004ae5b0 * DAT_004ae5b4 * -0x679cb26f) / 0xac7ed62 != 0x1a42dc0a) {
          iVar4 = 0x1b2d5ab2;
        }
      }
    }
    else if (local_a4 == 0x2d636f42) {
      _objc_release(param_4);
      iVar4 = -0x20f47a21;
    }
    else {
      if (local_a4 != 0x333041a3) {
        if (local_a4 == 0x44d1fdb6) {
          bVar3 = local_79 == '\0';
          iVar4 = -0x71991127;
          iVar5 = -0x2e61482e;
          goto LAB_00206d48;
        }
        goto LAB_00206440;
      }
      iVar4 = 0x56450e03;
    }
  }
  else if (local_a4 < 0x604a3be6) {
    if (local_a4 < 0x56218bd9) {
      if (local_a4 == 0x4724f367) {
        _objc_msgSend(param_1,local_70);
        _objc_retainAutoreleasedReturnValue();
        iVar4 = 0x7448f060;
      }
      else {
        if (local_a4 != 0x48935caf) goto LAB_00206440;
        iVar4 = -0x50df6c4e;
      }
    }
    else if (local_a4 == 0x56218bd9) {
      uVar1 = DAT_004ae568 & DAT_004ae56c;
      _objc_retain(param_4);
      iVar4 = 0x42beda5;
      if ((uint)((ulong)((uVar1 | 0x7e7555) * -0x64e2543f) * 0x6f8aba63 >> 0x3e) < 0x1f721ccc) {
        iVar4 = 0x6953b34;
      }
    }
    else {
      if (local_a4 != 0x56450e03) {
        if (local_a4 == 0x5a2423a6) {
          bVar3 = (DAT_004ae588 ^ DAT_004ae58c ^ 0x31598ab4) / 0x35a2c7ec == 0xc3bb4974;
          iVar4 = 0x5a2423a6;
          iVar5 = 0x48935caf;
          goto LAB_002069e4;
        }
        goto LAB_00206440;
      }
      uVar1 = 0;
      if (DAT_004ae5d4 != 0) {
        uVar1 = DAT_004ae5d0 / DAT_004ae5d4;
      }
      bVar3 = (uint)((ulong)(uVar1 ^ 0x1110004 | 0x2ec69ed3) * 0x2370ca3f >> 0x3c) == 0x9c54a2bb;
      iVar4 = -0x20f47a21;
      iVar5 = 0x2d636f42;
LAB_00206d48:
      if (bVar3) {
        iVar4 = iVar5;
      }
    }
  }
  else if (local_a4 < 0x7448f060) {
    if (local_a4 == 0x604a3be6) {
      _objc_release(local_78);
      iVar4 = -0x18015ed0;
    }
    else {
      iVar4 = 0x5a2423a6;
      if (local_a4 != 0x6456011d) goto LAB_00206440;
    }
  }
  else if (local_a4 == 0x7448f060) {
    iVar5 = DAT_004ae5a8 * DAT_004ae5ac;
    _objc_msgSend(param_1,local_70);
    local_88 = _objc_retainAutoreleasedReturnValue();
    local_90 = (undefined8 *)(local_88 + 0x10);
    local_98 = PTR_s_response_0048b1a8;
    iVar4 = 0x22285dcf;
    if (iVar5 + 0x73ebd903U < 0x9c800d4e) {
      iVar4 = 0x7448f060;
    }
  }
  else if (local_a4 == 0x75a29a6d) {
    uVar1 = DAT_004ae5c8 | DAT_004ae5cc;
    _objc_release(param_5);
    iVar4 = 0x75a29a6d;
    if (0x8bd7ba1d < (uVar1 & 0x1f59680f) * -0x484da88c + 0xda076ebc) {
      iVar4 = 0x333041a3;
    }
  }
  else {
    if (local_a4 != 0x7ef9c870) goto LAB_00206440;
    _objc_retain(param_5);
    iVar4 = 0xf51d57b;
  }
LAB_00206f68:
  local_a4 = iVar4;
  goto LAB_00206440;
}



// ----- -[BubbleBoxDownloadDelegate progressBlock] @ 00207008 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxDownloadDelegate::progressBlock(ID param_1,SEL param_2)

{
  int iVar1;
  int local_5c;
  ID local_58;
  ID *local_50;
  
  local_5c = -0x2d8d8e3;
  iVar1 = local_5c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (local_5c = iVar1, iVar1 = local_5c, local_5c < 0x465affb1) {
            if (local_5c < -0x2d8d8e3) {
              iVar1 = 0x465affb1;
              if ((local_5c != -0x34886672) && (iVar1 = local_5c, local_5c == -0x347d0277)) {
                iVar1 = 0x4c7e5f6e;
              }
            }
            else if (local_5c == -0x2d8d8e3) {
              iVar1 = -0x34886672;
              if ((((DAT_004ae5e0 ^ DAT_004ae5e4) + 0xd9d1e30c) / 0x4d226692 & 1) < 0xa8b6b52e) {
                iVar1 = 0x465affb1;
              }
            }
            else if (local_5c == 0x390873fd) {
              iVar1 = -0x347d0277;
            }
          }
          if (local_5c < 0x6c038fd5) break;
          if (local_5c == 0x6c038fd5) {
            iVar1 = -0x347d0277;
            if ((DAT_004ae5f0 | DAT_004ae5f4) + 0xaa660a82 < 0x29532b43) {
              iVar1 = 0x390873fd;
            }
          }
          else if (local_5c == 0x6eb7ac21) {
            iVar1 = 0x4f673882;
          }
        }
        if (local_5c != 0x465affb1) break;
        iVar1 = 0x6eb7ac21;
        local_50 = (ID *)(param_1 + 8);
        if (0xfc943b8e < (DAT_004ae5e8 - DAT_004ae5ec) * -0x4f835235 + 0xca7905caU) {
          iVar1 = -0x34886672;
        }
      }
      if (local_5c != 0x4f673882) break;
      local_58 = *local_50;
      iVar1 = 0x6c038fd5;
    }
  } while (local_5c != 0x4c7e5f6e);
  return local_58;
}



// ----- -[BubbleBoxDownloadDelegate setProgressBlock:] @ 00207218 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxDownloadDelegate::setProgressBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int local_68;
  
  uVar1 = DAT_004ae5f8 ^ DAT_004ae5fc;
  local_68 = 0x728c2619;
  do {
    while( true ) {
      while( true ) {
        while (-0x24c0823b < local_68) {
          if (local_68 < 0x52abc39a) {
            if (local_68 == -0x24c0823a) {
              local_68 = 0x52abc39a;
              if (0x5c670b0d < (DAT_004ae608 + DAT_004ae60c | 0x11152618U) * 0x6d65eac7 + 0x5ba39ec7
                 ) {
                local_68 = 0x332b1a3e;
              }
            }
            else if (local_68 == 0x332b1a3e) {
              local_68 = 0x52abc39a;
            }
          }
          else if (local_68 == 0x52abc39a) {
            local_68 = -0x645aa7b0;
            if ((uint)((ulong)(DAT_004ae610 + DAT_004ae614 ^ 0x78054952) * 0x2c2876d7 >> 0x3d) +
                0xe1a16f55 < 0xa75f0488) {
              local_68 = 0x332b1a3e;
            }
          }
          else if ((local_68 == 0x728c2619) &&
                  (local_68 = -0x6dbcdb2f, (uVar1 + 0x81b50343) / 0x4de3ee34 == 0xd1c1c507)) {
            local_68 = -0x381c1f31;
          }
        }
        if (local_68 < -0x381c1f31) break;
        if (local_68 == -0x381c1f31) {
          _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,8);
          local_68 = -0x6dbcdb2f;
        }
        else if (local_68 == -0x2e2c55f3) {
          local_68 = -0x24c0823a;
        }
      }
      if (local_68 != -0x6dbcdb2f) break;
      uVar2 = DAT_004ae600 - DAT_004ae604;
      _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,8);
      local_68 = -0x381c1f31;
      if (0x17245bad < ((uVar2 ^ 0xcd801600) & 0xefb09f03 ^ 0xd897f6fb)) {
        local_68 = -0x2e2c55f3;
      }
    }
  } while (local_68 != -0x645aa7b0);
  return;
}



// ----- -[BubbleBoxDownloadDelegate downloadCompletedBlock] @ 002074c4 -----

/* Function Stack Size: 0x10 bytes */

ID BubbleBoxDownloadDelegate::downloadCompletedBlock(ID param_1,SEL param_2)

{
  uint uVar1;
  int iVar2;
  int local_44;
  ID local_40;
  
  local_44 = -0x47dd7807;
  iVar2 = local_44;
  do {
    while( true ) {
      while (local_44 = iVar2, iVar2 = local_44, -0x181d4b4a < local_44) {
        if (local_44 < 0xdb18559) {
          if (local_44 == -0x181d4b49) {
            iVar2 = -0x8f9ad59;
          }
          else if (local_44 == -0x8f9ad59) goto LAB_0020760c;
        }
        else if (local_44 == 0x1ac27376) {
          iVar2 = 0xdb18559;
          if (0xbaad856d < ((DAT_004ae620 - DAT_004ae624 | 0x6a8394e3U) * -0x5be94646 ^ 0x1ceea23c))
          {
            iVar2 = 0x1ac27376;
          }
        }
        else if (local_44 == 0xdb18559) {
          return local_40;
        }
      }
      if (-0x319ff8b4 < local_44) break;
      iVar2 = -0x23b8b178;
      if ((local_44 != -0x6f31607b) && (iVar2 = local_44, local_44 == -0x47dd7807)) {
        uVar1 = 0;
        if (DAT_004ae61c != 0) {
          uVar1 = DAT_004ae618 / DAT_004ae61c;
        }
        iVar2 = -0x6f31607b;
        if ((uVar1 & 0xf37fe8a9) != 0xd6a6b80c) {
          iVar2 = -0x23b8b178;
        }
      }
    }
    if (local_44 == -0x319ff8b3) {
LAB_0020760c:
      iVar2 = 0x1ac27376;
    }
    else if (local_44 == -0x23b8b178) {
      local_40 = *(ID *)(param_1 + 0x10);
      iVar2 = -0x181d4b49;
    }
  } while( true );
}



// ----- -[BubbleBoxDownloadDelegate setDownloadCompletedBlock:] @ 00207678 -----

/* Function Stack Size: 0x18 bytes */

void BubbleBoxDownloadDelegate::setDownloadCompletedBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int local_68;
  
  uVar1 = DAT_004ae628 & DAT_004ae62c;
  local_68 = -0x23a2b369;
  do {
    while( true ) {
      while( true ) {
        while (local_68 < 0x2abc0288) {
          if (local_68 < -0x221e4531) {
            if (local_68 == -0x4ce44842) {
              _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);
              local_68 = 0x67ec2fa8;
            }
            else if ((local_68 == -0x23a2b369) &&
                    (local_68 = 0x67ec2fa8, 0x98070462 < uVar1 + 0x7e128e9b)) {
              local_68 = -0x4ce44842;
            }
          }
          else if (local_68 == -0x221e4531) {
            local_68 = 0x13b18b31;
            if ((DAT_004ae640 - DAT_004ae644 & 0x5217940dU) * -0x3b5e95ce + 0xdf4e976a < 0x768a0ddd)
            {
              local_68 = 0x3d22b5bf;
            }
          }
          else if (local_68 == 0x13b18b31) {
            local_68 = -0x221e4531;
          }
        }
        if (0x3d22b5be < local_68) break;
        if (local_68 == 0x2abc0288) {
          local_68 = -0x221e4531;
          if (0xce9f0f7a <
              (uint)((ulong)((DAT_004ae638 - DAT_004ae63c | 0x210b128bU) * 0x361c52cd) * 0x4ea5f1d
                    >> 0x3a)) {
            local_68 = 0x13b18b31;
          }
        }
        else if (local_68 == 0x31546f68) {
          local_68 = 0x2abc0288;
        }
      }
      if (local_68 != 0x67ec2fa8) break;
      uVar2 = DAT_004ae630 | DAT_004ae634;
      _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);
      local_68 = 0x31546f68;
      if ((uint)((ulong)uVar2 * 0x3128cfa1 >> 0x3d) * -0x6ce42820 < 0x352d389d) {
        local_68 = -0x4ce44842;
      }
    }
  } while (local_68 != 0x3d22b5bf);
  return;
}



// ----- -[BubbleBoxDownloadDelegate .cxx_destruct] @ 00207910 -----

/* Function Stack Size: 0x10 bytes */

void BubbleBoxDownloadDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  uint uVar1;
  int local_6c;
  
  local_6c = 0x3424a6e4;
LAB_00207988:
  do {
    while (local_6c < 0x3424a6e4) {
      if (local_6c < 0x13575ff0) {
        if (local_6c == -0x7d9e4b4b) {
          local_6c = 0x649e2cfb;
        }
        else if (local_6c == -0xba6be5d) {
          _objc_storeStrong(param_1 + 0x10,0);
          _objc_storeStrong(param_1 + 8,0);
LAB_00207a6c:
          local_6c = 0x45e5bac6;
        }
      }
      else if ((local_6c == 0x13575ff0) || (local_6c == 0x2d00318e)) {
        local_6c = -0x7d9e4b4b;
      }
    }
    if (local_6c < 0x649e2cfb) {
      if (local_6c == 0x3424a6e4) goto LAB_00207a6c;
      if (local_6c == 0x45e5bac6) {
        uVar1 = 0;
        if (DAT_004ae64c != 0) {
          uVar1 = DAT_004ae648 / DAT_004ae64c;
        }
        _objc_storeStrong(param_1 + 0x10,0);
        _objc_storeStrong(param_1 + 8,0);
        local_6c = -0xba6be5d;
        if ((uVar1 * 0x43e80ac4 + 0x270741ae | 0x5c09ec13) != 0x8658112d) {
          local_6c = 0x6f8dadfe;
        }
      }
      goto LAB_00207988;
    }
    if (local_6c == 0x6f8dadfe) {
      local_6c = 0x2d00318e;
    }
    else if (local_6c == 0x649e2cfb) {
      return;
    }
  } while( true );
}


