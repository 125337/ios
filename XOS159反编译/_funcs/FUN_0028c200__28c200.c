// FUN_0028c200 @0x28c200


void FUN_0028c200(undefined8 param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined1 auVar5 [16];

  

  _objc_retain();

  lVar2 = _NSClassFromString(&cf_CAFilter);

  uVar3 = _NSSelectorFromString(&cf_filterWithType_);

  uVar4 = 0;

  if (lVar2 != 0) {

    auVar5 = _objc_opt_respondsToSelector(lVar2,uVar3);

    uVar4 = auVar5._8_8_;

    if ((auVar5._0_8_ & 1) != 0) {

      if (DAT_003eb380 != -1) {

        FUN_0028fca0();

        uVar4 = extraout_x1;

      }

      iVar1 = FUN_00293560(DAT_003eb378,uVar4,param_1);

      if (iVar1 != 0) {

        _objc_msgSend(lVar2,uVar3,param_1);

        uVar4 = _objc_retainAutoreleasedReturnValue();

        goto LAB_0028c2ac;

      }

    }

    uVar4 = 0;

  }

LAB_0028c2ac:

  _objc_release(param_1);

  _objc_autoreleaseReturnValue(uVar4);

  return;

}




