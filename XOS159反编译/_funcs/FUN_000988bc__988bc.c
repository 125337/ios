// FUN_000988bc @0x988bc


void FUN_000988bc(long param_1)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  long lVar5;

  long *plVar6;

  

  (*DAT_003e7828)();

  DAT_003e7a2e = 0;

  DAT_003e7a2f = 0;

  iVar1 = FUN_000a89d8();

  if (iVar1 == 0) {

    return;

  }

  uVar2 = _objc_opt_respondsToSelector(param_1,"getArrMessageNodeData");

  if ((uVar2 & 1) == 0) {

LAB_00098928:

    _objc_retain(param_1);

    uVar4 = _object_getClass(param_1);

    lVar3 = _class_getInstanceVariable(uVar4,"m_arrMessageNodeData");

    if (lVar3 == 0) {

      plVar6 = (long *)0x0;

    }

    else {

      lVar3 = _ivar_getOffset();

      plVar6 = (long *)(param_1 + lVar3);

    }

    _objc_release(param_1);

    lVar3 = *plVar6;

    _objc_retain(lVar3);

    if (lVar3 == 0) goto LAB_000989b4;

  }

  else {

    FUN_002957a0(param_1);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    if (lVar3 == 0) goto LAB_00098928;

  }

  lVar5 = FUN_00293860(lVar3);

  if (lVar5 != 0) {

    FUN_00290ac0(param_1);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_000acf2c(lVar3,uVar4);

    _objc_release(uVar4);

  }

LAB_000989b4:

  _objc_release(lVar3);

  return;

}




