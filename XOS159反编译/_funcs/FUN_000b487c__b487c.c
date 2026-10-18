// FUN_000b487c @0xb487c


void FUN_000b487c(long param_1)



{

  ushort uVar1;

  int iVar2;

  undefined8 uVar3;

  ulong uVar4;

  long lVar5;

  long lVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  cfstringStruct *pcVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 extraout_x1_04;

  undefined8 *puVar10;

  code *pcVar11;

  undefined1 auVar12 [16];

  undefined8 local_a0 [5];

  undefined8 auStack_78 [5];

  

  puVar10 = local_a0;

  _objc_retain();

  if (param_1 == 0) goto LAB_000b4c40;

  uVar3 = _objc_opt_class(&_OBJC_CLASS___UITextView);

  uVar4 = _objc_opt_isKindOfClass(param_1,uVar3);

  if ((uVar4 & 1) == 0) goto LAB_000b4c40;

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e6588);

  lVar5 = _objc_retainAutoreleasedReturnValue();

  if (lVar5 != 0) {

    FUN_002a5020(param_1);

    lVar6 = _objc_retainAutoreleasedReturnValue();

    if ((lVar6 != 0) && (lVar7 = FUN_00297fa0(lVar6), lVar7 != 0)) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar12._0_8_,auVar12._8_8_,&cf_xzy_plugin_jump_keyword);

      pcVar8 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar12._0_8_);

      if ((pcVar8 == (cfstringStruct *)0x0) || (lVar7 = FUN_00297fa0(pcVar8), lVar7 == 0)) {

        _objc_release(pcVar8);

        pcVar8 = &cf_XOS;

      }

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar12 = _objc_retainAutoreleasedReturnValue();

      FUN_002a45e0(auVar12._0_8_,auVar12._8_8_,&cf_xzy_voice_jump_keyword);

      pcVar9 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      _objc_release(auVar12._0_8_);

      if ((pcVar9 == (cfstringStruct *)0x0) || (lVar7 = FUN_00297fa0(pcVar9), lVar7 == 0)) {

        _objc_release(pcVar9);

        pcVar9 = &cf_r;

      }

      uVar4 = 0;

      do {

        auVar12 = FUN_00297fa0(pcVar8);

        if (auVar12._0_8_ <= uVar4) {

          FUN_002984e0(lVar6);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          FUN_002984e0(pcVar8);

          auVar12 = _objc_retainAutoreleasedReturnValue();

          uVar4 = FUN_00297820(uVar3,auVar12._8_8_,auVar12._0_8_);

          _objc_release(auVar12._0_8_);

          _objc_release(uVar3);

          uVar3 = extraout_x1_03;

          if ((uVar4 & 1) == 0) goto LAB_000b49f8;

          goto LAB_000b4a90;

        }

        uVar1 = FUN_00292be0(pcVar8,auVar12._8_8_,uVar4);

        uVar4 = uVar4 + 1;

      } while ((ushort)((uVar1 & 0xffdf) - 0x41) < 0x1a);

      iVar2 = FUN_00297820(lVar6,extraout_x1,pcVar8);

      uVar3 = extraout_x1_00;

      if (iVar2 == 0) {

LAB_000b49f8:

        uVar4 = 0;

        do {

          auVar12 = FUN_00297fa0(pcVar9);

          if (auVar12._0_8_ <= uVar4) {

            FUN_002984e0(lVar6);

            uVar3 = _objc_retainAutoreleasedReturnValue();

            FUN_002984e0(pcVar9);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar4 = FUN_00297820(uVar3,auVar12._8_8_,auVar12._0_8_);

            _objc_release(auVar12._0_8_);

            _objc_release(uVar3);

            uVar3 = extraout_x1_04;

            if ((uVar4 & 1) == 0) goto LAB_000b4c20;

            goto LAB_000b4b48;

          }

          uVar1 = FUN_00292be0(pcVar9,auVar12._8_8_,uVar4);

          uVar4 = uVar4 + 1;

        } while ((ushort)((uVar1 & 0xffdf) - 0x41) < 0x1a);

        iVar2 = FUN_00297820(lVar6,extraout_x1_01,pcVar9);

        uVar3 = extraout_x1_02;

        if (iVar2 != 0) {

LAB_000b4b48:

          FUN_002a1d60(param_1,uVar3,&cf___);

          FUN_00294320(param_1);

          uVar3 = _objc_retainAutoreleasedReturnValue();

          uVar4 = _objc_opt_respondsToSelector(uVar3,"textViewDidChange:");

          _objc_release(uVar3);

          if ((uVar4 & 1) != 0) {

            FUN_00294320(param_1);

            auVar12 = _objc_retainAutoreleasedReturnValue();

            uVar3 = auVar12._0_8_;

            FUN_002a5100(uVar3,auVar12._8_8_,param_1);

            pcVar11 = FUN_000b4dc4;

            puVar10 = local_a0;

            goto LAB_000b4bb0;

          }

          pcVar11 = FUN_000b4dc4;

          goto LAB_000b4bd8;

        }

      }

      else {

LAB_000b4a90:

        FUN_002a1d60(param_1,uVar3,&cf___);

        FUN_00294320(param_1);

        uVar3 = _objc_retainAutoreleasedReturnValue();

        uVar4 = _objc_opt_respondsToSelector(uVar3,"textViewDidChange:");

        _objc_release(uVar3);

        if ((uVar4 & 1) == 0) {

          pcVar11 = FUN_000b4d40;

          puVar10 = auStack_78;

        }

        else {

          FUN_00294320(param_1);

          auVar12 = _objc_retainAutoreleasedReturnValue();

          uVar3 = auVar12._0_8_;

          FUN_002a5100(uVar3,auVar12._8_8_,param_1);

          pcVar11 = FUN_000b4d40;

          puVar10 = auStack_78;

LAB_000b4bb0:

          _objc_release(uVar3);

        }

LAB_000b4bd8:

        *puVar10 = PTR___NSConcreteStackBlock_003886f0;

        puVar10[1] = 0xc2000000;

        puVar10[2] = pcVar11;

        puVar10[3] = &DAT_00388e60;

        _objc_retain(lVar5);

        puVar10[4] = lVar5;

        _dispatch_async(PTR___dispatch_main_q_00388740,puVar10);

        _objc_release(puVar10[4]);

      }

LAB_000b4c20:

      _objc_release(pcVar9);

      _objc_release(pcVar8);

    }

    _objc_release(lVar6);

  }

  _objc_release(lVar5);

LAB_000b4c40:

  _objc_release(param_1);

  return;

}




