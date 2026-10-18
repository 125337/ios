// FUN_000ff8f8 @0xff8f8


bool FUN_000ff8f8(undefined8 param_1)



{

  bool bVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined8 uVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar10;

  undefined8 extraout_x1_02;

  undefined **ppuVar11;

  undefined1 auVar12 [16];

  

  _objc_retain();

  _objc_getAssociatedObject(param_1,PTR_LOOP_003e68c0);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  lVar3 = auVar12._0_8_;

  if (lVar3 != 0) {

    iVar2 = FUN_00297460(lVar3);

    bVar1 = iVar2 == 1;

    goto LAB_000ffc18;

  }

  FUN_002a6080(param_1,auVar12._8_8_,&cf_messageWrap);

  auVar12 = _objc_retainAutoreleasedReturnValue();

  lVar4 = auVar12._0_8_;

  if (lVar4 == 0) {

    _objc_setAssociatedObject

              (param_1,PTR_LOOP_003e68c0,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfbd8,1);

    bVar1 = false;

    goto LAB_000ffc18;

  }

  FUN_002a6080(lVar4,auVar12._8_8_,&cf_m_uiMessageType);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar6 = FUN_002974a0();

  _objc_release(uVar5);

  uVar5 = extraout_x1;

  if (lVar6 == 0) {

    FUN_002a6080(lVar4,extraout_x1,&cf_m_uiMsgType);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    lVar6 = FUN_002974a0();

    _objc_release(uVar5);

    uVar5 = extraout_x1_00;

  }

  FUN_002a6080(lVar4,uVar5,&cf_m_nsContent);

  uVar5 = _objc_retainAutoreleasedReturnValue();

  lVar7 = FUN_00297fa0(uVar5);

  if ((lVar7 == 0) || ((lVar6 != 0 && (lVar6 != 0x31)))) {

    _objc_setAssociatedObject

              (param_1,PTR_LOOP_003e68c0,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfbd8,1);

    bVar1 = false;

  }

  else {

    FUN_002984e0(uVar5);

    auVar12 = _objc_retainAutoreleasedReturnValue();

    uVar8 = auVar12._0_8_;

    auVar12 = FUN_00293580(uVar8,auVar12._8_8_,&cf_<type>57<_type>);

    if ((auVar12._0_8_ & 1) != 0) goto LAB_000ffa20;

    auVar12 = FUN_00293580(uVar8,auVar12._8_8_,&cf_wxpay___c2cbizmessagehandler_hongbao);

    if ((auVar12._0_8_ & 1) == 0) {

      auVar12 = FUN_00293580(uVar8,auVar12._8_8_,&cf_wxpay___c2cbizmessagehandler_transfer);

      if ((auVar12._0_8_ & 1) != 0) goto LAB_000ffa78;

      iVar2 = FUN_00293580(uVar8,auVar12._8_8_,&cf_wxpay___);

      uVar10 = extraout_x1_01;

      if (iVar2 != 0) {

        auVar12 = FUN_00293580(uVar8,extraout_x1_01,&cf_hongbao);

        if ((auVar12._0_8_ & 1) == 0) {

          auVar12 = FUN_00293580(uVar8,auVar12._8_8_,&cf_transfer);

          uVar10 = auVar12._8_8_;

          if ((auVar12._0_8_ & 1) == 0) goto LAB_000ffaec;

        }

        goto LAB_000ffa78;

      }

LAB_000ffaec:

      iVar2 = FUN_00293580(uVar8,uVar10,&cf_wcpay);

      if (iVar2 != 0) {

        auVar12 = FUN_00293580(uVar8,extraout_x1_02,&cf_hongbao);

        if (((auVar12._0_8_ & 1) != 0) ||

           (uVar9 = FUN_00293580(uVar8,auVar12._8_8_,&cf_transfer), (uVar9 & 1) != 0))

        goto LAB_000ffa78;

      }

LAB_000ffa20:

      bVar1 = false;

      ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfbd8;

    }

    else {

LAB_000ffa78:

      ppuVar11 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_003bfbf0;

      bVar1 = true;

    }

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e68c0,ppuVar11,1);

    _objc_release(uVar8);

  }

  _objc_release(uVar5);

  _objc_release(lVar4);

LAB_000ffc18:

  _objc_release(lVar3);

  _objc_release(param_1);

  return bVar1;

}




