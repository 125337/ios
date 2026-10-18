// FUN_00131324 @0x131324


void FUN_00131324(undefined8 param_1,undefined8 param_2,long param_3)



{

  long lVar1;

  int iVar2;

  ulong uVar3;

  long lVar4;

  long lVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  uVar3 = FUN_0012ec24();

  if ((uVar3 & 1) == 0) {

    (*DAT_003e86a8)(param_1,param_2,param_3);

  }

  else {

    lVar4 = FUN_002a4e60(param_1);

    if ((lVar4 - 0x1352572U < 7) && ((1L << (lVar4 - 0x1352572U & 0x3f) & 0x61U) != 0)) {

      (*DAT_003e86a8)(param_1,param_2,param_3);

    }

    else {

      _objc_getAssociatedObject(param_1,&DAT_0030e54a);

      auVar6 = _objc_retainAutoreleasedReturnValue();

      lVar4 = auVar6._0_8_;

      if (lVar4 == 0) {

        _objc_getAssociatedObject(param_1,&DAT_0030e548);

        lVar5 = _objc_retainAutoreleasedReturnValue();

        lVar1 = param_3;

        if (lVar5 != 0) {

          lVar1 = lVar5;

        }

        (*DAT_003e86a8)(param_1,param_2,lVar1);

        _objc_release(lVar5);

      }

      else {

        iVar2 = FUN_002977c0(lVar4,auVar6._8_8_,param_3);

        lVar1 = param_3;

        if (iVar2 == 0) {

          lVar1 = lVar4;

        }

        (*DAT_003e86a8)(param_1,param_2,lVar1);

      }

      _objc_release(lVar4);

    }

  }

  _objc_release(param_3);

  return;

}




