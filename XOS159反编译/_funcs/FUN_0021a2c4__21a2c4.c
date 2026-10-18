// FUN_0021a2c4 @0x21a2c4


void FUN_0021a2c4(long param_1,undefined8 param_2)



{

  undefined8 uVar1;

  ulong uVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined1 auVar6 [16];

  

  _objc_retain();

  _objc_retain(param_2);

  if (param_1 != 0) {

    uVar1 = _objc_opt_class(&_OBJC_CLASS___UITableView);

    uVar2 = _objc_opt_isKindOfClass(param_2,uVar1);

    if ((uVar2 & 1) != 0) {

      _objc_getAssociatedObject(param_2,&DAT_003eaef3);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == 0) {

        uVar1 = _objc_alloc_init(&objc::class_t::XZYCLGHorizontalListSwipeHandler);

        auVar6 = _objc_alloc(&_OBJC_CLASS___UIPanGestureRecognizer);

        auVar6 = FUN_00296f20(auVar6._0_8_,auVar6._8_8_,uVar1,"clgHandlePan:");

        lVar3 = auVar6._0_8_;

        FUN_0029dca0(lVar3,auVar6._8_8_,uVar1);

        FUN_0029f9e0(lVar3,extraout_x1,1);

        _objc_setAssociatedObject(param_2,&DAT_003eaef4,uVar1,1);

        _objc_setAssociatedObject(param_2,&DAT_003eaef3,lVar3,1);

        FUN_00291140(param_2,extraout_x1_00,lVar3);

        FUN_00299a20(param_2);

        lVar4 = _objc_retainAutoreleasedReturnValue();

        if (lVar4 != 0) {

          FUN_00299a20(param_2);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          _objc_release();

          _objc_release(lVar4);

          if (lVar5 != lVar3) {

            FUN_00299a20(param_2);

            auVar6 = _objc_retainAutoreleasedReturnValue();

            FUN_0029b780(auVar6._0_8_,auVar6._8_8_,lVar3);

            _objc_release(auVar6._0_8_);

          }

        }

        _objc_release(uVar1);

      }

      _objc_getAssociatedObject(param_2,&DAT_003eaef4);

      lVar4 = _objc_retainAutoreleasedReturnValue();

      if (lVar4 != 0) {

        FUN_002962e0(lVar4);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        _objc_release();

        if (lVar5 != param_1) {

          FUN_0029ea80(lVar4,extraout_x1_01,param_1);

        }

      }

      _objc_release(lVar4);

      _objc_release(lVar3);

    }

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




