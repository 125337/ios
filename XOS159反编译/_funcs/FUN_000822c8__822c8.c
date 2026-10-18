// FUN_000822c8 @0x822c8


void FUN_000822c8(long param_1)



{

  int iVar1;

  undefined8 uVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined1 auVar6 [16];

  

  _objc_retain();

  if (param_1 != 0) {

    uVar2 = _objc_opt_class(&_OBJC_CLASS___UIView);

    uVar3 = _objc_opt_isKindOfClass(param_1,uVar2);

    if ((uVar3 & 1) != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6308);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      uVar2 = auVar6._8_8_;

      lVar4 = auVar6._0_8_;

      if (lVar4 == 0) {

LAB_00082364:

        FUN_002a6080(param_1,uVar2,&cf_m_bgImageView);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if (lVar5 != 0) {

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,lVar5,1);

        }

      }

      else {

        FUN_002a4880(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        if ((lVar5 == 0) || (auVar6 = FUN_002978a0(lVar4), (auVar6._0_8_ & 1) != 0)) {

          _objc_release(lVar5);

LAB_00082350:

          _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,0,1);

          uVar2 = extraout_x1;

          goto LAB_00082364;

        }

        iVar1 = FUN_00297700(lVar4,auVar6._8_8_,param_1);

        _objc_release(lVar5);

        if (iVar1 == 0) goto LAB_00082350;

        _objc_retain(lVar4);

        lVar5 = lVar4;

      }

      _objc_release(lVar4);

      goto LAB_000823a8;

    }

  }

  lVar5 = 0;

LAB_000823a8:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar5);

  return;

}




