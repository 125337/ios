// FUN_000a8b40 @0xa8b40


void FUN_000a8b40(long param_1)



{

  long lVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined8 extraout_x1;

  undefined8 uVar5;

  long lVar6;

  long lVar7;

  undefined1 auVar8 [16];

  

  _objc_retain();

  lVar1 = _objc_getClass("BaseMsgContentViewController");

  lVar6 = 0;

  if ((param_1 != 0) && (lVar1 != 0)) {

    _objc_getAssociatedObject(param_1,PTR_LOOP_003e63f8);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6060();

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if ((lVar3 == 0) || (uVar4 = _objc_opt_isKindOfClass(lVar3,lVar1), (uVar4 & 1) == 0)) {

      _objc_retain(param_1);

      lVar7 = param_1;

      do {

        auVar8 = _objc_opt_isKindOfClass(lVar7,lVar1);

        uVar5 = auVar8._8_8_;

        if ((auVar8._0_8_ & 1) != 0) {

          if (lVar2 == 0) {

            lVar2 = _objc_opt_new(&objc::class_t::XZYWeakObjectBox);

            _objc_setAssociatedObject(param_1,PTR_LOOP_003e63f8,lVar2,1);

            uVar5 = extraout_x1;

          }

          FUN_002a2440(lVar2,uVar5,lVar7);

          lVar6 = lVar7;

          break;

        }

        FUN_00299220(lVar7);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        _objc_release(lVar7);

        lVar7 = lVar6;

      } while (lVar6 != 0);

    }

    else {

      _objc_retain(lVar3);

      lVar6 = lVar3;

    }

    _objc_release(lVar3);

    _objc_release(lVar2);

  }

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(lVar6);

  return;

}




