// FUN_001314a8 @0x1314a8


void FUN_001314a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  ulong uVar1;

  long lVar2;

  long lVar3;

  long lVar4;

  undefined8 uVar5;

  undefined1 auVar6 [16];

  

  _objc_retain(param_3);

  uVar1 = FUN_0012ec24();

  if ((uVar1 & 1) == 0) {

    (*DAT_003e86b0)(param_1,param_2,param_3);

  }

  else {

    lVar2 = FUN_002a4e60(param_1);

    if ((lVar2 - 0x1352572U < 7) && ((1L << (lVar2 - 0x1352572U & 0x3f) & 0x61U) != 0)) {

      (*DAT_003e86b0)(param_1,param_2,param_3);

    }

    else {

      _objc_getAssociatedObject(param_1,&DAT_0030e54a);

      lVar2 = _objc_retainAutoreleasedReturnValue();

      if ((lVar2 == 0) || (lVar3 = FUN_00297fa0(param_3), lVar3 == 0)) {

        _objc_getAssociatedObject(param_1,&DAT_0030e548);

        lVar3 = _objc_retainAutoreleasedReturnValue();

        if ((lVar3 == 0) || (lVar4 = FUN_00297fa0(param_3), lVar4 == 0)) {

          (*DAT_003e86b0)(param_1,param_2,param_3);

        }

        else {

          uVar5 = FUN_00299020(param_3);

          auVar6 = FUN_00297fa0();

          FUN_00291060(uVar5,auVar6._8_8_,

                       *(undefined8 *)PTR__NSForegroundColorAttributeName_00388360,lVar3,0,

                       auVar6._0_8_);

          (*DAT_003e86b0)(param_1,param_2,uVar5);

          _objc_release(uVar5);

        }

      }

      else {

        lVar3 = FUN_00299020(param_3);

        auVar6 = FUN_00297fa0();

        FUN_00291060(lVar3,auVar6._8_8_,*(undefined8 *)PTR__NSForegroundColorAttributeName_00388360,

                     lVar2,0,auVar6._0_8_);

        (*DAT_003e86b0)(param_1,param_2,lVar3);

      }

      _objc_release(lVar3);

      _objc_release(lVar2);

    }

  }

  _objc_release(param_3);

  return;

}




