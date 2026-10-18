// FUN_000a6310 @0xa6310


void FUN_000a6310(undefined8 param_1,undefined8 param_2,undefined8 param_3)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  

  _objc_retain();

  _objc_retain(param_2);

  uVar2 = FUN_000a34d4(param_1,param_2);

  if ((uVar2 & 1) != 0) {

    FUN_00295b80(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (((((lVar3 != 0) && (uVar2 = FUN_00297780(lVar3), (uVar2 & 1) == 0)) &&

         (uVar2 = FUN_00297b40(lVar3), (uVar2 & 1) == 0)) &&

        (uVar2 = FUN_002976e0(lVar3), (uVar2 & 1) == 0)) &&

       ((uVar2 = FUN_000a6694(lVar3,param_3), (uVar2 & 1) != 0 ||

        ((iVar1 = FUN_000a6724(param_1,lVar3), iVar1 != 0 &&

         (iVar1 = FUN_000a6694(lVar3,param_3), iVar1 != 0)))))) {

      FUN_000a6870(lVar3);

    }

    _objc_release(lVar3);

  }

  _objc_release(param_2);

  _objc_release(param_1);

  return;

}




