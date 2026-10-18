// FUN_00096090 @0x96090


void FUN_00096090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)



{

  cfstringStruct *pcVar1;

  undefined1 uVar2;

  uint uVar3;

  uint uVar4;

  int iVar5;

  int iVar6;

  undefined8 uVar7;

  ulong uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  undefined8 uVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  cfstringStruct *pcVar14;

  undefined8 uVar15;

  long lVar16;

  long lVar17;

  undefined8 uVar18;

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

  long extraout_x1_10;

  undefined8 extraout_x1_11;

  undefined8 extraout_x1_12;

  undefined1 auVar19 [16];

  cfstringStruct *local_d8;

  undefined8 local_b8;

  undefined8 local_b0;

  undefined *local_a0;

  undefined8 local_98;

  code *local_90;

  undefined *puStack_88;

  undefined8 local_80;

  undefined8 local_78;

  undefined1 local_70;

  undefined1 local_6f;

  

  _objc_retain(param_3);

  _objc_retain(param_4);

  (*DAT_003e77c0)(param_1,param_2,param_3,param_4);

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  uVar7 = auVar19._0_8_;

  uVar8 = FUN_002924c0(uVar7,auVar19._8_8_,&cf_coversEnabled);

  if ((uVar8 & 1) == 0) goto LAB_00096650;

  FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

  auVar19 = _objc_retainAutoreleasedReturnValue();

  uVar9 = auVar19._0_8_;

  uVar3 = FUN_002924c0(uVar9,auVar19._8_8_,&cf_coversEnabled);

  uVar4 = FUN_002924c0(uVar9,extraout_x1,&cf_aiChatEnabled);

  _objc_release(uVar9);

  if (((uVar3 & uVar4) != 1) || (iVar5 = FUN_00298760(param_4), iVar5 != 1)) goto LAB_00096650;

  FUN_002985c0(param_4);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002985a0(param_4);

  uVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_getClass("MMServiceCenter");

  FUN_00294200();

  uVar11 = _objc_retainAutoreleasedReturnValue();

  auVar19 = _objc_getClass("CContactMgr");

  FUN_00295b60(uVar11,auVar19._8_8_,auVar19._0_8_);

  uVar12 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar11);

  FUN_00295b20(uVar12);

  uVar11 = _objc_retainAutoreleasedReturnValue();

  FUN_002986c0();

  uVar13 = _objc_retainAutoreleasedReturnValue();

  FUN_00298620(uVar11);

  pcVar14 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf___;

  if (pcVar14 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar14;

  }

  _objc_retain();

  _objc_release(pcVar14);

  uVar8 = FUN_00297820(uVar9,extraout_x1_00,uVar13);

  if ((uVar8 & 1) == 0) {

    FUN_00298720(param_4);

    FUN_00298740(param_4);

    FUN_002a4680(&_OBJC_CLASS___NSString,extraout_x1_01,&cf_____u__u);

    uVar15 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    lVar16 = FUN_00297fa0(uVar15);

    if (lVar16 == 0) {

LAB_00096310:

      _objc_release(uVar15);

      uVar18 = extraout_x1_04;

LAB_00096318:

      iVar5 = FUN_00295fa0(uVar9,uVar18,&cf__chatroom);

      _objc_retain(uVar9);

      _objc_retain(uVar10);

      uVar3 = FUN_002924c0(uVar7,extraout_x1_05,&cf_aiChatGroupNoAt);

      uVar2 = FUN_002924c0(uVar7,extraout_x1_06,&cf_aiChatQuoteReplyEnabled);

      uVar4 = FUN_002924c0(uVar7,extraout_x1_07,&cf_aiChatAllFriends);

      local_b8 = uVar10;

      local_b0 = uVar9;

      if (iVar5 == 0) {

        uVar3 = FUN_000a6968(uVar9);

        local_d8 = &cf___;

        if (((uVar4 | uVar3) & 1) != 0) goto LAB_0009651c;

      }

      else {

        auVar19 = FUN_0029aba0(uVar10,extraout_x1_08,&cf__);

        lVar16 = auVar19._8_8_;

        lVar17 = auVar19._0_8_;

        if (lVar17 != 0x7fffffffffffffff) {

          FUN_002a47e0(uVar10,lVar16,lVar17);

          local_b0 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar9);

          FUN_002a47c0(uVar10,extraout_x1_09,lVar17 + lVar16);

          local_b8 = _objc_retainAutoreleasedReturnValue();

          _objc_release(uVar10);

          lVar16 = extraout_x1_10;

        }

        uVar8 = FUN_00297820(local_b0,lVar16,uVar13);

        if (((uVar8 & 1) == 0) && (iVar6 = FUN_000a6968(uVar9), iVar6 != 0)) {

          FUN_002959a0(uVar12,extraout_x1_11,uVar13,uVar9);

          lVar16 = _objc_retainAutoreleasedReturnValue();

          local_d8 = &cf___;

          if (lVar16 != 0) {

            FUN_00298620(lVar16);

            pcVar14 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

            local_d8 = &cf___;

            if (pcVar14 != (cfstringStruct *)0x0) {

              local_d8 = pcVar14;

            }

            _objc_retain();

            _objc_release(pcVar14);

          }

          _objc_release(lVar16);

          uVar4 = FUN_000a6a50(uVar9);

          if (((uVar3 | uVar4) & 1) == 0) {

            auVar19 = FUN_00297fa0(pcVar1);

            if (auVar19._0_8_ != 0) {

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar19._8_8_,&cf____);

              auVar19 = _objc_retainAutoreleasedReturnValue();

              uVar8 = FUN_00293580(local_b8,auVar19._8_8_,auVar19._0_8_);

              _objc_release(auVar19._0_8_);

              if ((uVar8 & 1) != 0) goto LAB_0009651c;

            }

            auVar19 = FUN_00297fa0(local_d8);

            if (auVar19._0_8_ != 0) {

              FUN_002a4680(&_OBJC_CLASS___NSString,auVar19._8_8_,&cf____);

              auVar19 = _objc_retainAutoreleasedReturnValue();

              uVar8 = FUN_00293580(local_b8,auVar19._8_8_,auVar19._0_8_);

              _objc_release(auVar19._0_8_);

              if ((uVar8 & 1) != 0) goto LAB_0009651c;

            }

          }

          else {

LAB_0009651c:

            uVar8 = FUN_000a6b38(uVar15);

            if ((uVar8 & 1) != 0) {

              FUN_000a6c64(local_b8,pcVar1,local_d8);

              uVar18 = _objc_retainAutoreleasedReturnValue();

              _objc_retain(uVar9);

              local_a0 = PTR___NSConcreteStackBlock_003886f0;

              local_98 = 0xc2000000;

              local_90 = FUN_000a7044;

              puStack_88 = &DAT_0038ae90;

              local_6f = (undefined1)iVar5;

              local_80 = uVar9;

              local_70 = uVar2;

              _objc_retain(param_4);

              local_78 = param_4;

              FUN_0029c560(&objc::class_t::OBF_AIChatSettingViewController,extraout_x1_12,uVar18,

                           local_b0,uVar13,iVar5,uVar9,&local_a0);

              _objc_release(local_78);

              _objc_release(local_80);

              _objc_release(uVar18);

            }

          }

        }

        else {

          local_d8 = &cf___;

        }

      }

      _objc_release(local_d8);

      _objc_release(local_b8);

      _objc_release(local_b0);

    }

    else {

      if (DAT_003e79f0 != -1) {

        FUN_0028efb4();

      }

      uVar18 = DAT_003e7620;

      _objc_retain(DAT_003e7620);

      _objc_sync_enter(uVar18);

      if (DAT_003e7618 == 0) {

        _objc_sync_exit(uVar18);

        _objc_release(uVar18);

        goto LAB_00096310;

      }

      uVar8 = FUN_00293560(DAT_003e7618,extraout_x1_02,uVar15);

      _objc_sync_exit(uVar18);

      _objc_release(uVar18);

      _objc_release(uVar15);

      uVar18 = extraout_x1_03;

      if ((uVar8 & 1) == 0) goto LAB_00096318;

    }

    _objc_release(uVar15);

  }

  _objc_release(pcVar1);

  _objc_release(uVar13);

  _objc_release(uVar11);

  _objc_release(uVar12);

  _objc_release(uVar10);

  _objc_release(uVar9);

LAB_00096650:

  _objc_release(uVar7);

  _objc_release(param_4);

  _objc_release(param_3);

  return;

}




