// FUN_000c7198 @0xc7198


void FUN_000c7198(undefined8 param_1,undefined8 param_2,long param_3)



{

  bool bVar1;

  bool bVar2;

  undefined *puVar3;

  int iVar4;

  long lVar5;

  long lVar6;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  undefined8 uVar7;

  undefined8 extraout_x1_02;

  

  _objc_retain(param_3);

  if ((DAT_003e7d19 & 1) == 0) {

    FUN_000c6fa8();

  }

  if ((DAT_003e7d10 == '\x01') && ((DAT_003e7d18 & 1) != 0)) {

    iVar4 = FUN_000c8110(param_1);

    _objc_retain(param_3);

    if (iVar4 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e66a8);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      puVar3 = PTR_LOOP_003e66a8;

      uVar7 = extraout_x1;

      if (lVar5 == 0) {

        lVar5 = param_3;

        if (param_3 == 0) {

          FUN_00297c40(&_OBJC_CLASS___UIColor);

          lVar5 = _objc_retainAutoreleasedReturnValue();

        }

        _objc_setAssociatedObject(param_1,puVar3,lVar5,1);

        uVar7 = extraout_x1_00;

        if (param_3 == 0) {

          _objc_release(lVar5);

          uVar7 = extraout_x1_01;

        }

      }

      if (DAT_003e7c78 == 0) {

        FUN_002a6400(&_OBJC_CLASS___NSHashTable);

        lVar6 = _objc_retainAutoreleasedReturnValue();

        lVar5 = DAT_003e7c78;

        DAT_003e7c78 = lVar6;

        _objc_release(lVar5);

        uVar7 = extraout_x1_02;

      }

      FUN_00291240(DAT_003e7c78,uVar7,param_1);

      FUN_00292dc0(&_OBJC_CLASS___UIColor);

      lVar5 = _objc_retainAutoreleasedReturnValue();

      _objc_release(param_3);

      bVar2 = true;

      goto LAB_000c7314;

    }

  }

  else {

    _objc_retain(param_3);

  }

  _objc_setAssociatedObject(param_1,PTR_LOOP_003e66a8,0,1);

  bVar2 = false;

  lVar5 = param_3;

LAB_000c7314:

  if (DAT_003e7d28 != -1) {

    FUN_0028f104();

  }

  bVar1 = false;

  if (DAT_003e7d20 != 0) {

    bVar1 = bVar2;

  }

  if (bVar1) {

    _object_setIvar(param_1,DAT_003e7d20,lVar5);

  }

  (*DAT_003e7c98)(param_1,param_2,lVar5);

  if (bVar2) {

    FUN_0029ff20(param_1);

  }

  _objc_release(lVar5);

  _objc_release(param_3);

  return;

}




