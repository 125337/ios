// FUN_0009dbec @0x9dbec


void FUN_0009dbec(undefined8 param_1,undefined8 param_2,long param_3)



{

  int iVar1;

  ulong uVar2;

  long lVar3;

  undefined8 uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_3);

  iVar1 = FUN_000a89d8();

  if (((iVar1 != 0) &&

      (uVar2 = _objc_opt_respondsToSelector(param_1,"translateMsg:translateNow:hideLoading:"),

      (uVar2 & 1) == 0)) && (lVar3 = _objc_loadWeakRetained(&DAT_003e7490), lVar3 != 0)) {

    uVar4 = _objc_loadWeakRetained(&DAT_003e7490);

    uVar2 = _objc_opt_respondsToSelector(uVar4,"getCurrentMessageWrap");

    _objc_release(uVar4);

    _objc_release(lVar3);

    if ((uVar2 & 1) != 0) {

      auVar5 = _objc_loadWeakRetained(&DAT_003e7490);

      FUN_00299c80(auVar5._0_8_,auVar5._8_8_,"getCurrentMessageWrap");

      lVar3 = _objc_retainAutoreleasedReturnValue();

      _objc_release(auVar5._0_8_);

      _objc_release(lVar3);

      if (lVar3 != param_3) goto LAB_0009dcd4;

    }

  }

  (*DAT_003e7908)(param_1,param_2,param_3);

LAB_0009dcd4:

  _objc_release(param_3);

  return;

}




