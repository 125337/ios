// FUN_001968f4 @0x1968f4


void FUN_001968f4(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  cfstringStruct *pcVar3;

  cfstringStruct *pcVar4;

  undefined8 uVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar7;

  undefined1 auVar8 [16];

  

  if (param_1 < 5) {

    if (param_1 < 3) {

      if (param_1 == 1) {

        pcVar7 = &cf_Ne;

        goto LAB_00196afc;

      }

      if (param_1 == 2) {

        pcVar7 = &cf_Neg;

        goto LAB_00196afc;

      }

    }

    else {

      if (param_1 == 3) {

        pcVar7 = &cf_e;

        goto LAB_00196afc;

      }

      if (param_1 == 4) {

        pcVar7 = &cf___QUSL;

        goto LAB_00196afc;

      }

    }

  }

  else if (param_1 < 7) {

    if (param_1 == 5) {

      pcVar7 = &cf_v_eg;

      goto LAB_00196afc;

    }

    if (param_1 == 6) {

      pcVar7 = &cf__teeg;

      goto LAB_00196afc;

    }

  }

  else {

    if (param_1 == 7) {

      pcVar7 = &cf_N>f_y;

      goto LAB_00196afc;

    }

    if (param_1 == 8) {

      FUN_002a40e0(&_OBJC_CLASS___NSUserDefaults);

      auVar8 = _objc_retainAutoreleasedReturnValue();

      uVar5 = auVar8._0_8_;

      FUN_002a45e0(uVar5,auVar8._8_8_,&cf_aabDateTimeCustomLine1);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar1 = &cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar1 = pcVar7;

      }

      _objc_retain(pcVar1);

      _objc_release(pcVar7);

      FUN_002a45e0(uVar5,extraout_x1,&cf_aabDateTimeCustomLine2);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar2 = &cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar2 = pcVar7;

      }

      _objc_retain(pcVar2);

      _objc_release(pcVar7);

      FUN_002a45e0(uVar5,extraout_x1_00,&cf_aabDateTimeCustomLine1Other);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar3 = &cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar3 = pcVar7;

      }

      _objc_retain(pcVar3);

      _objc_release(pcVar7);

      FUN_002a45e0(uVar5,extraout_x1_01,&cf_aabDateTimeCustomLine2Other);

      pcVar7 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

      pcVar4 = &cf___;

      if (pcVar7 != (cfstringStruct *)0x0) {

        pcVar4 = pcVar7;

      }

      _objc_retain(pcVar4);

      _objc_release(pcVar7);

      lVar6 = FUN_00297fa0(pcVar1);

      if ((lVar6 == 0) && (lVar6 = FUN_00297fa0(pcVar2), lVar6 == 0)) {

        lVar6 = FUN_00297fa0(pcVar3);

        pcVar7 = &cf__IN;

        if (lVar6 == 0) {

          lVar6 = FUN_00297fa0(pcVar4);

          pcVar7 = &cf__IN_gn_;

          if (lVar6 != 0) {

            pcVar7 = &cf__IN;

          }

        }

      }

      else {

        pcVar7 = &cf__IN;

      }

      _objc_retain(pcVar7);

      _objc_release(pcVar4);

      _objc_release(pcVar3);

      _objc_release(pcVar2);

      _objc_release(pcVar1);

      _objc_release(uVar5);

      goto LAB_00196afc;

    }

  }

  pcVar7 = &cf_eg;

LAB_00196afc:

  _objc_autoreleaseReturnValue(pcVar7);

  return;

}




