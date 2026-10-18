// FUN_00217b94 @0x217b94


void FUN_00217b94(undefined1 param_1 [16],double param_2,double param_3,double param_4,long param_5)



{

  bool bVar1;

  bool bVar2;

  uint uVar3;

  uint uVar4;

  undefined8 uVar5;

  double dVar6;

  double dVar7;

  double dVar8;

  double dVar9;

  double dVar10;

  undefined8 local_58;

  

  _objc_retain();

  if (param_5 != 0) {

    _objc_getAssociatedObject(param_5,&DAT_003eaeb5);

    uVar5 = _objc_retainAutoreleasedReturnValue();

    uVar3 = FUN_002924e0();

    _objc_release(uVar5);

    if (DAT_003eaa30 == '\x01' && DAT_003eaad0 == 1) {

      if (3 < DAT_003eaac8 - 1U && (uVar3 & 1) == 0) goto LAB_00217d08;

    }

    else if ((uVar3 & 1) == 0) goto LAB_00217d08;

    uVar4 = FUN_00216b40(param_5);

    if (((uVar4 | uVar3) & 1) != 0) {

      local_58 = 0;

      uVar5 = FUN_002173d8(param_5,&local_58);

      FUN_00295600(param_5);

      dVar6 = (double)FUN_00217598(param_5,uVar5);

      dVar8 = param_2;

      dVar9 = param_3;

      dVar10 = param_4;

      dVar7 = (double)FUN_00295600(param_5);

      bVar1 = false;

      if ((ABS(dVar7 - dVar6) < 0.5) && (bVar1 = false, !NAN(ABS(dVar8 - param_2)))) {

        bVar1 = ABS(dVar8 - param_2) < 0.5;

      }

      bVar2 = false;

      if ((bVar1) && (bVar2 = false, !NAN(ABS(dVar9 - param_3)))) {

        bVar2 = ABS(dVar9 - param_3) < 0.5;

      }

      bVar1 = false;

      if ((bVar2) && (bVar1 = false, !NAN(ABS(dVar10 - param_4)))) {

        bVar1 = ABS(dVar10 - param_4) < 0.5;

      }

      if (!bVar1) {

        _objc_retain(param_5);

        _objc_setAssociatedObject(param_5,&DAT_003eaeb4,PTR____kCFBooleanTrue_00388320,1);

        FUN_0029e5e0(dVar6,param_2,param_3,param_4,param_5);

        _objc_setAssociatedObject(param_5,&DAT_003eaeb4,0,1);

        _objc_release(param_5);

        FUN_0029ff40(param_5);

      }

    }

  }

LAB_00217d08:

  _objc_release(param_5);

  return;

}




