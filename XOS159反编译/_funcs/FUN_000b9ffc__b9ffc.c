// FUN_000b9ffc @0xb9ffc


undefined8 FUN_000b9ffc(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  undefined8 uVar4;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_002a6520(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if (lVar2 != 0) {

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6610);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      _objc_getAssociatedObject(param_1,PTR_LOOP_003e6620);

      lVar3 = _objc_retainAutoreleasedReturnValue();

      if (lVar3 == 0) {

        iVar1 = 0;

        if (lVar2 == 0) goto LAB_000ba094;

LAB_000ba0a0:

        uVar4 = FUN_000b4368(param_1,lVar2);

      }

      else {

        iVar1 = FUN_002a5a00(lVar3);

        if (lVar2 != 0) goto LAB_000ba0a0;

LAB_000ba094:

        if (iVar1 != 0) goto LAB_000ba0a0;

        uVar4 = 0;

      }

      _objc_release(lVar3);

      _objc_release(lVar2);

      goto LAB_000ba0c0;

    }

  }

  uVar4 = 0;

LAB_000ba0c0:

  _objc_release(param_1);

  return uVar4;

}




