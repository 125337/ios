// FUN_001a029c @0x1a029c


void FUN_001a029c(long param_1,ulong param_2,int param_3)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 extraout_x1_02;

  undefined8 extraout_x1_03;

  undefined8 uVar8;

  undefined8 extraout_x1_04;

  long lVar9;

  undefined **ppuVar10;

  undefined1 auVar11 [16];

  

  _objc_retain();

  uVar2 = FUN_0011a5a4();

  if (((((uVar2 & 1) == 0) || ((param_2 & 1) != 0)) || (param_3 == 0)) ||

     ((DAT_003e95b8 == 1 || (_objc_retain(param_1), param_1 == 0)))) goto LAB_001a0440;

  _objc_retain(param_1);

  lVar9 = param_1;

  if (DAT_003e95d0 != 0) {

    auVar11 = _objc_opt_isKindOfClass(param_1);

    if ((auVar11._0_8_ & 1) != 0) {

      FUN_002a6080(param_1,auVar11._8_8_,&cf_parentModel);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 != 0) {

        _objc_retain(lVar3);

        _objc_release(param_1);

        lVar9 = lVar3;

      }

      _objc_release(lVar3);

    }

  }

  _objc_getAssociatedObject(lVar9,PTR_LOOP_003e6ed8);

  lVar3 = _objc_retainAutoreleasedReturnValue();

  if (lVar3 == 0) {

    _objc_retain(lVar9);

    _objc_opt_class(lVar9);

    _NSStringFromClass();

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002984e0();

    uVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_release(uVar4);

    auVar11 = FUN_00293580(uVar5,extraout_x1,&cf_pay);

    if ((auVar11._0_8_ & 1) == 0) {

      auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_transfer);

      if ((auVar11._0_8_ & 1) != 0) goto LAB_001a0408;

      auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_hongbao);

      if ((auVar11._0_8_ & 1) != 0) goto LAB_001a0408;

      iVar1 = FUN_00293580(uVar5,auVar11._8_8_,&cf_redpacket);

      _objc_release(uVar5);

      _objc_release(lVar9);

      if (iVar1 == 0) {

        FUN_002a6080(lVar9,extraout_x1_00,&cf_messageWrap);

        auVar11 = _objc_retainAutoreleasedReturnValue();

        lVar3 = auVar11._0_8_;

        if (lVar3 != 0) {

          FUN_002a6080(lVar3,auVar11._8_8_,&cf_m_uiMessageType);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          lVar6 = FUN_002974a0();

          _objc_release(uVar4);

          uVar4 = extraout_x1_01;

          if (lVar6 == 0) {

            FUN_002a6080(lVar3,extraout_x1_01,&cf_m_uiMsgType);

            uVar4 = _objc_retainAutoreleasedReturnValue();

            lVar6 = FUN_002974a0();

            _objc_release(uVar4);

            uVar4 = extraout_x1_02;

          }

          FUN_002a6080(lVar3,uVar4,&cf_m_nsContent);

          uVar4 = _objc_retainAutoreleasedReturnValue();

          lVar7 = FUN_00297fa0(uVar4);

          if ((lVar7 == 0) || ((lVar6 != 0 && (lVar6 != 0x31)))) {

            _objc_setAssociatedObject

                      (lVar9,PTR_LOOP_003e6ed8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff80,1

                      );

          }

          else {

            FUN_002984e0(uVar4);

            auVar11 = _objc_retainAutoreleasedReturnValue();

            uVar5 = auVar11._0_8_;

            auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_<type>57<_type>);

            if ((auVar11._0_8_ & 1) == 0) {

              auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_wxpay___c2cbizmessagehandler_hongbao);

              if ((auVar11._0_8_ & 1) == 0) {

                auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_wxpay___c2cbizmessagehandler_transfer

                                      );

                if ((auVar11._0_8_ & 1) == 0) {

                  iVar1 = FUN_00293580(uVar5,auVar11._8_8_,&cf_wxpay___);

                  uVar8 = extraout_x1_03;

                  if (iVar1 == 0) {

LAB_001a0618:

                    iVar1 = FUN_00293580(uVar5,uVar8,&cf_wcpay);

                    ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff80;

                    if (iVar1 != 0) {

                      auVar11 = FUN_00293580(uVar5,extraout_x1_04,&cf_hongbao);

                      ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff98;

                      if (((auVar11._0_8_ & 1) == 0) &&

                         (uVar2 = FUN_00293580(uVar5,auVar11._8_8_,&cf_transfer),

                         ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff98,

                         (uVar2 & 1) == 0)) {

                        ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff80;

                      }

                    }

                    goto LAB_001a05b4;

                  }

                  auVar11 = FUN_00293580(uVar5,extraout_x1_03,&cf_hongbao);

                  if ((auVar11._0_8_ & 1) == 0) {

                    auVar11 = FUN_00293580(uVar5,auVar11._8_8_,&cf_transfer);

                    uVar8 = auVar11._8_8_;

                    if ((auVar11._0_8_ & 1) == 0) goto LAB_001a0618;

                  }

                }

              }

              ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff98;

            }

            else {

              ppuVar10 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff80;

            }

LAB_001a05b4:

            _objc_setAssociatedObject(lVar9,PTR_LOOP_003e6ed8,ppuVar10,1);

            _objc_release(uVar5);

          }

          _objc_release(uVar4);

          goto LAB_001a0388;

        }

        _objc_setAssociatedObject

                  (lVar9,PTR_LOOP_003e6ed8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff80,1);

        goto LAB_001a0430;

      }

    }

    else {

LAB_001a0408:

      _objc_release(uVar5);

      _objc_release(lVar9);

    }

    _objc_setAssociatedObject

              (lVar9,PTR_LOOP_003e6ed8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bff98,1);

  }

  else {

    FUN_00297460(lVar3);

LAB_001a0388:

    _objc_release(lVar3);

  }

LAB_001a0430:

  _objc_release(lVar9);

  _objc_release(param_1);

LAB_001a0440:

  _objc_release(param_1);

  return;

}




