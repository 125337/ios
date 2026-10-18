// configureWithEntry: @0x1d0f60


/* Function Stack Size: 0x18 bytes */



void XZYCLGSideRailButton::configureWithEntry_(ID param_1,SEL param_2,ID param_3)



{

  long *plVar1;

  bool bVar2;

  int iVar3;

  uint uVar4;

  undefined8 uVar5;

  undefined8 uVar6;

  long lVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  long lVar10;

  undefined8 uVar11;

  ulong uVar12;

  cfstringStruct *pcVar13;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  long lVar14;

  undefined1 auVar15 [16];

  undefined1 auVar16 [16];

  undefined *local_c8;

  undefined8 local_c0;

  code *local_b8;

  undefined *puStack_b0;

  undefined8 local_a8;

  undefined8 local_a0;

  undefined8 *local_98;

  undefined8 local_90;

  undefined8 *local_88;

  undefined8 local_80;

  code *local_78;

  code *pcStack_70;

  undefined8 local_68;

  

  _objc_retain(param_3);

  FUN_0029e120(param_1,extraout_x1,param_3);

  FUN_00295de0(param_3);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e780(param_1,auVar15._8_8_,auVar15._0_8_);

  _objc_release(auVar15._0_8_);

  FUN_00295de0(param_3);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_001ccaf0();

  uVar6 = _objc_retainAutoreleasedReturnValue();

  _objc_release(uVar5);

  lVar7 = FUN_00297fa0(uVar6);

  if (lVar7 == 0) {

    FUN_00295de0(param_3);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    FUN_001cbaa4();

    uVar8 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar5);

    uVar5 = extraout_x1_01;

  }

  else {

    _objc_retain(uVar6);

    uVar5 = extraout_x1_00;

    uVar8 = uVar6;

  }

  FUN_0029c760(param_1,uVar5,uVar8);

  FUN_0029bfa0(&_OBJC_CLASS___UIColor);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  _objc_retain();

  if ((DAT_003eaabf & 1) == 0) {

    _objc_release(uVar9);

LAB_001d10c8:

    FUN_0029bfa0(&_OBJC_CLASS___UIColor);

    lVar7 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    iVar3 = FUN_001d52f8(uVar9);

    plVar1 = &DAT_003ea980;

    if (iVar3 == 0) {

      plVar1 = &DAT_003ea978;

    }

    lVar7 = *plVar1;

    _objc_retain(lVar7);

    _objc_release(uVar9);

    if (lVar7 == 0) goto LAB_001d10c8;

  }

  _objc_release(uVar9);

  FUN_002a5e00(param_1);

  FUN_002963a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1f40(auVar15._0_8_,auVar15._8_8_,uVar5);

  _objc_release(auVar15._0_8_);

  FUN_00294f60(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar15._0_8_,auVar15._8_8_,uVar5);

  _objc_release(auVar15._0_8_);

  FUN_002a53a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1da0(auVar15._0_8_,auVar15._8_8_,lVar7);

  _objc_release(auVar15._0_8_);

  FUN_002a53a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,uVar6);

  _objc_release(auVar15._0_8_);

  lVar10 = FUN_00297fa0(uVar6);

  FUN_002a53a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,lVar10 == 0);

  _objc_release(auVar15._0_8_);

  FUN_00295de0(param_3);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_001d18f0();

  FUN_0029eb60(param_1);

  _objc_release(uVar9);

  FUN_00295de0(param_3);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_001d19cc();

  FUN_002a1fe0(param_1);

  _objc_release(uVar9);

  FUN_00295de0(param_3);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  uVar4 = FUN_001cf52c();

  _objc_release(uVar9);

  FUN_00295de0(param_3);

  uVar9 = _objc_retainAutoreleasedReturnValue();

  FUN_002a5680(param_1);

  lVar10 = _objc_retainAutoreleasedReturnValue();

  _objc_retain(uVar9);

  _objc_retain(lVar10);

  _objc_retain(uVar5);

  local_88 = &local_90;

  local_90 = 0;

  local_80 = 0x3032000000;

  local_78 = FUN_0020da88;

  pcStack_70 = FUN_0020da98;

  local_68 = 0;

  if (lVar10 == 0) {

    FUN_0020e4fc(uVar9,uVar5);

    lVar14 = _objc_retainAutoreleasedReturnValue();

  }

  else {

    local_c8 = PTR___NSConcreteStackBlock_003886f0;

    local_c0 = 0xc2000000;

    local_b8 = FUN_0020e4b8;

    puStack_b0 = &DAT_0038f148;

    local_98 = local_88;

    _objc_retain(uVar9);

    local_a8 = uVar9;

    _objc_retain(uVar5);

    local_a0 = uVar5;

    FUN_00299c60(lVar10,extraout_x1_02,&local_c8);

    lVar14 = local_88[5];

    _objc_retain(lVar14);

    _objc_release(local_a0);

    _objc_release(local_a8);

  }

  __Block_object_dispose(&local_90,8);

  _objc_release(local_68);

  _objc_release(uVar5);

  _objc_release(lVar10);

  _objc_release(uVar9);

  _objc_release(lVar10);

  _objc_release(uVar9);

  if (lVar14 == 0 && (uVar4 & 1) == 0) {

    FUN_00295de0(param_3);

    uVar11 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    auVar15 = FUN_00297820(uVar11,extraout_x1_03,&cf___xzy_clg_side_total__);

    uVar9 = auVar15._8_8_;

    if ((auVar15._0_8_ & 1) == 0) {

      auVar15 = FUN_00297820(uVar11,uVar9,&cf_other);

      uVar9 = auVar15._8_8_;

      if ((auVar15._0_8_ & 1) == 0) {

        auVar15 = FUN_00297820(uVar11,uVar9,&cf_sticky);

        uVar9 = auVar15._8_8_;

        if ((auVar15._0_8_ & 1) == 0) {

          auVar15 = FUN_00297820(uVar11,uVar9,&cf_unread);

          uVar9 = auVar15._8_8_;

          if ((auVar15._0_8_ & 1) == 0) {

            auVar15 = FUN_00297820(uVar11,uVar9,&cf_private);

            uVar9 = auVar15._8_8_;

            if ((auVar15._0_8_ & 1) == 0) {

              auVar15 = FUN_00297820(uVar11,uVar9,&cf_groupchat);

              uVar9 = auVar15._8_8_;

              if ((auVar15._0_8_ & 1) == 0) {

                iVar3 = FUN_00297820(uVar11,uVar9,&cf_official);

                uVar9 = extraout_x1_04;

                pcVar13 = &cf_newspaper_fill;

                if (iVar3 == 0) {

                  pcVar13 = &cf_folder;

                }

              }

              else {

                pcVar13 = &cf_person_2_fill;

              }

            }

            else {

              pcVar13 = &cf_person_fill;

            }

          }

          else {

            pcVar13 = &cf_message_badge;

          }

        }

        else {

          pcVar13 = &cf_pin_fill;

        }

      }

      else {

        pcVar13 = &cf_tray_full;

      }

    }

    else {

      pcVar13 = &cf_list_bullet;

    }

    FUN_00293320(0x4033000000000000,&_OBJC_CLASS___UIImageSymbolConfiguration,uVar9,6);

    auVar15 = _objc_retainAutoreleasedReturnValue();

    FUN_002a4be0(&_OBJC_CLASS___UIImage,auVar15._8_8_,pcVar13,auVar15._0_8_);

    auVar16 = _objc_retainAutoreleasedReturnValue();

    FUN_00296620(auVar16._0_8_,auVar16._8_8_,2);

    lVar14 = _objc_retainAutoreleasedReturnValue();

    _objc_release(auVar16._0_8_);

    _objc_release(auVar15._0_8_);

    _objc_release(uVar11);

    _objc_release(uVar11);

  }

  FUN_002963a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029ec00(auVar15._0_8_,auVar15._8_8_,lVar14);

  _objc_release(auVar15._0_8_);

  FUN_002963a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,lVar14 == 0);

  _objc_release(auVar15._0_8_);

  if ((lVar14 != 0 || (uVar4 & 1) != 0) || (lVar10 = FUN_00297fa0(uVar6), lVar10 == 0)) {

    bVar2 = false;

    pcVar13 = &::cf___;

    goto LAB_001d15dc;

  }

  _objc_retain(uVar6);

  uVar9 = _objc_opt_class(&_OBJC_CLASS___NSString);

  uVar12 = _objc_opt_isKindOfClass(uVar6,uVar9);

  if ((uVar12 & 1) == 0) {

LAB_001d15c8:

    pcVar13 = &::cf___;

  }

  else {

    auVar15 = FUN_00297fa0(uVar6);

    if (auVar15._0_8_ == 0) goto LAB_001d15c8;

    auVar15 = FUN_0029ab60(uVar6,auVar15._8_8_,0);

    FUN_002a4800(uVar6,auVar15._8_8_,auVar15._0_8_,auVar15._8_8_);

    pcVar13 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_release(uVar6);

  bVar2 = true;

LAB_001d15dc:

  FUN_00294f60(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a1d60(auVar15._0_8_,auVar15._8_8_,pcVar13);

  _objc_release(auVar15._0_8_);

  if (bVar2) {

    _objc_release(pcVar13);

  }

  if (lVar14 != 0 || (uVar4 & 1) != 0) {

    bVar2 = true;

  }

  else {

    lVar10 = FUN_00297fa0(uVar6);

    bVar2 = lVar10 == 0;

  }

  FUN_00294f60(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_0029e8a0(auVar15._0_8_,auVar15._8_8_,bVar2);

  _objc_release(auVar15._0_8_);

  iVar3 = FUN_00297860(param_3);

  uVar9 = 0x3fe199999999999a;

  if (iVar3 == 0) {

    uVar9 = 0x3ff0000000000000;

  }

  FUN_0029cb60(uVar9,param_1);

  if (DAT_003e70f0 == '\x01') {

    uVar9 = FUN_002a59c0(param_3);

  }

  else {

    uVar9 = 0;

  }

  FUN_002920a0(param_1);

  auVar15 = _objc_retainAutoreleasedReturnValue();

  FUN_002a2340(auVar15._0_8_,auVar15._8_8_,uVar9);

  _objc_release(auVar15._0_8_);

  FUN_0029ff40(param_1);

  _objc_release(lVar14);

  _objc_release(lVar7);

  _objc_release(uVar5);

  _objc_release(uVar8);

  _objc_release(uVar6);

  _objc_release(param_3);

  return;

}




