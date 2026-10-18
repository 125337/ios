// FUN_00101bd0 @0x101bd0


void FUN_00101bd0(long param_1)



{

  long lVar1;

  undefined8 uVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  undefined8 uVar7;

  undefined8 uVar8;

  undefined8 uVar9;

  undefined8 uVar10;

  long lVar11;

  undefined8 uVar12;

  undefined8 uVar13;

  undefined8 uVar14;

  long lVar15;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 extraout_x1_05;

  undefined8 extraout_x1_06;

  undefined8 uVar16;

  undefined1 auVar17 [16];

  long local_68;

  

  _objc_retain();

  if (param_1 == 0) {

    DAT_003e7fc0 = 0;

    goto LAB_00102168;

  }

  _objc_retain(param_1);

  uVar3 = extraout_x1;

  if (DAT_003e7eb0 == 0) {

LAB_00101c1c:

    DAT_003e7fc0 = 0;

    DAT_003e7fc8 = 0;

    DAT_003e7fd0 = 0;

    DAT_003e7fd8 = 0;

    DAT_003e7fe0 = 0;

    FUN_002a4460(param_1,uVar3,&cf_config_json);

    uVar3 = _objc_retainAutoreleasedReturnValue();

    FUN_00294240(&_OBJC_CLASS___NSFileManager);

    auVar17 = _objc_retainAutoreleasedReturnValue();

    uVar4 = FUN_00295160(auVar17._0_8_,auVar17._8_8_,uVar3);

    _objc_release(auVar17._0_8_);

    if ((uVar4 & 1) == 0) {

      _objc_retain(param_1);

      lVar15 = DAT_003e7eb0;

      DAT_003e7eb0 = param_1;

    }

    else {

      FUN_00294020(&_OBJC_CLASS___NSData,extraout_x1_00,uVar3);

      auVar17 = _objc_retainAutoreleasedReturnValue();

      lVar15 = auVar17._0_8_;

      if (lVar15 == 0) {

        _objc_retain(param_1);

        lVar1 = DAT_003e7eb0;

        DAT_003e7eb0 = param_1;

        _objc_release(lVar1);

      }

      else {

        local_68 = 0;

        FUN_00290ae0(&_OBJC_CLASS___NSJSONSerialization,auVar17._8_8_,lVar15,0,&local_68);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        lVar1 = local_68;

        _objc_retain(local_68);

        if ((lVar5 == 0) || (lVar1 != 0)) {

          _objc_retain(param_1);

          lVar6 = DAT_003e7eb0;

          DAT_003e7eb0 = param_1;

        }

        else {

          FUN_00299540(lVar5,extraout_x1_01,&cf_lljR);

          lVar6 = _objc_retainAutoreleasedReturnValue();

          if (lVar6 != 0) {

            auVar17 = FUN_00297fa0(lVar6);

            if (auVar17._0_8_ != 0) {

              FUN_00293280(lVar6,auVar17._8_8_,&cf__);

              uVar7 = _objc_retainAutoreleasedReturnValue();

              auVar17 = FUN_00293860();

              if (auVar17._0_8_ == 4) {

                FUN_00299500(uVar7,auVar17._8_8_,0);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                DAT_003e7fc8 = FUN_002974a0();

                _objc_release(uVar8);

                FUN_00299500(uVar7,extraout_x1_02,1);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                DAT_003e7fd0 = FUN_002974a0();

                _objc_release(uVar8);

                FUN_00299500(uVar7,extraout_x1_03,2);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                DAT_003e7fd8 = FUN_002974a0();

                _objc_release(uVar8);

                FUN_00299500(uVar7,extraout_x1_04,3);

                uVar8 = _objc_retainAutoreleasedReturnValue();

                DAT_003e7fe0 = FUN_002974a0();

                _objc_release(uVar8);

                DAT_003e7fc0 = 1;

              }

              _objc_release(uVar7);

            }

          }

          uVar7 = DAT_003eb3c8;

          DAT_003eb3c0 = 0;

          DAT_003eb3c8 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb3d0;

          DAT_003eb3d0 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb3d8;

          DAT_003eb3d8 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb3e0;

          DAT_003eb3e0 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb3f0;

          DAT_003eb3e8 = 0;

          DAT_003eb3f0 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb3f8;

          DAT_003eb3f8 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb400;

          DAT_003eb400 = 0;

          _objc_release(uVar7);

          uVar7 = DAT_003eb408;

          DAT_003eb408 = 0;

          _objc_release(uVar7);

          FUN_00299540(lVar5,extraout_x1_05,&cf__emo_eW_);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar7 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf__emo_eW_m);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar8 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf_bemo_eW_);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar9 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf_bemo_eW_m);

          uVar10 = _objc_retainAutoreleasedReturnValue();

          lVar11 = FUN_00297fa0(uVar7);

          if (((lVar11 == 0) && (lVar11 = FUN_00297fa0(uVar8), lVar11 == 0)) &&

             (lVar11 = FUN_00297fa0(uVar9), lVar11 == 0)) {

            auVar17 = FUN_00297fa0(uVar10);

            uVar16 = auVar17._8_8_;

            if (auVar17._0_8_ != 0) goto LAB_00101f24;

          }

          else {

LAB_00101f24:

            DAT_003eb3c0 = 1;

            _objc_retain(uVar7);

            uVar16 = DAT_003eb3c8;

            DAT_003eb3c8 = uVar7;

            _objc_release(uVar16);

            _objc_retain(uVar8);

            uVar16 = DAT_003eb3d0;

            DAT_003eb3d0 = uVar8;

            _objc_release(uVar16);

            _objc_retain(uVar9);

            uVar16 = DAT_003eb3d8;

            DAT_003eb3d8 = uVar9;

            _objc_release(uVar16);

            _objc_retain(uVar10);

            uVar16 = DAT_003eb3e0;

            DAT_003eb3e0 = uVar10;

            _objc_release(uVar16);

            uVar16 = extraout_x1_06;

          }

          FUN_00299540(lVar5,uVar16,&cf__e_Smo_eW_);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar16 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf__e_Smo_eW_m);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar12 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf_be_Smo_eW_);

          auVar17 = _objc_retainAutoreleasedReturnValue();

          uVar13 = auVar17._0_8_;

          FUN_00299540(lVar5,auVar17._8_8_,&cf_be_Smo_eW_m);

          uVar14 = _objc_retainAutoreleasedReturnValue();

          lVar11 = FUN_00297fa0(uVar16);

          if (((lVar11 != 0) || (lVar11 = FUN_00297fa0(uVar12), lVar11 != 0)) ||

             ((lVar11 = FUN_00297fa0(uVar13), lVar11 != 0 ||

              (lVar11 = FUN_00297fa0(uVar14), lVar11 != 0)))) {

            DAT_003eb3e8 = 1;

            _objc_retain(uVar16);

            uVar2 = DAT_003eb3f0;

            DAT_003eb3f0 = uVar16;

            _objc_release(uVar2);

            _objc_retain(uVar12);

            uVar2 = DAT_003eb3f8;

            DAT_003eb3f8 = uVar12;

            _objc_release(uVar2);

            _objc_retain(uVar13);

            uVar2 = DAT_003eb400;

            DAT_003eb400 = uVar13;

            _objc_release(uVar2);

            _objc_retain(uVar14);

            uVar2 = DAT_003eb408;

            DAT_003eb408 = uVar14;

            _objc_release(uVar2);

          }

          _objc_retain(param_1);

          lVar11 = DAT_003e7eb0;

          DAT_003e7eb0 = param_1;

          _objc_release(lVar11);

          _objc_release(uVar14);

          _objc_release(uVar13);

          _objc_release(uVar12);

          _objc_release(uVar16);

          _objc_release(uVar10);

          _objc_release(uVar9);

          _objc_release(uVar8);

          _objc_release(uVar7);

        }

        _objc_release(lVar6);

        _objc_release(lVar5);

        _objc_release(lVar1);

      }

    }

    _objc_release(lVar15);

    _objc_release(uVar3);

  }

  else {

    auVar17 = FUN_00297820(DAT_003e7eb0,extraout_x1,param_1);

    uVar3 = auVar17._8_8_;

    if ((auVar17._0_8_ & 1) == 0) goto LAB_00101c1c;

  }

  _objc_release(param_1);

LAB_00102168:

  _objc_release(param_1);

  return;

}




