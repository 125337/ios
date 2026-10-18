// FUN_00098b00 @0x98b00


void FUN_00098b00(long param_1,undefined8 param_2)



{

  byte bVar1;

  byte bVar2;

  int iVar3;

  undefined8 uVar4;

  long lVar5;

  ulong uVar6;

  ulong uVar7;

  undefined8 *puVar8;

  undefined8 uVar9;

  

  iVar3 = FUN_000a89d8();

  if (iVar3 != 0) {

    _objc_retain(param_1);

    uVar4 = _object_getClass(param_1);

    lVar5 = _class_getInstanceVariable(uVar4,"m_arrMessageNodeData");

    if (lVar5 == 0) {

      puVar8 = (undefined8 *)0x0;

    }

    else {

      lVar5 = _ivar_getOffset();

      puVar8 = (undefined8 *)(param_1 + lVar5);

    }

    _objc_release(param_1);

    uVar9 = *puVar8;

    _objc_retain(uVar9);

    FUN_00290ac0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar6 = FUN_000acf2c(uVar9,uVar4);

    _objc_release(uVar4);

    FUN_00295b80(param_1);

    lVar5 = _objc_retainAutoreleasedReturnValue();

    _objc_retain();

    if (lVar5 == 0) {

      bVar2 = 0;

    }

    else {

      uVar7 = FUN_00297780(lVar5);

      if (((uVar7 & 1) == 0) && (uVar7 = FUN_002976e0(lVar5), (uVar7 & 1) == 0)) {

        bVar2 = FUN_00297b40(lVar5);

      }

      else {

        bVar2 = 1;

      }

    }

    _objc_release(lVar5);

    if ((uVar6 & 1) == 0) {

      bVar1 = DAT_003e74db ^ 0xff;

      _objc_release(lVar5);

      _objc_release(uVar9);

      if ((bVar2 & bVar1 & 1) != 0) goto LAB_00098c60;

    }

    else {

      _objc_release(lVar5);

      _objc_release(uVar9);

    }

  }

  (*DAT_003e7840)(param_1,param_2);

LAB_00098c60:

  FUN_000b4f10(param_1);

  return;

}




