// FUN_001211f8 @0x1211f8


void FUN_001211f8(undefined8 param_1,undefined8 param_2)



{

  ulong uVar1;

  

  FUN_00123cd0();

  (*DAT_003e8390)(param_1,param_2);

  if (DAT_003e8488 == 0) {

    DAT_003e8488 = _objc_getClass("WCPayBaseMessageCellView");

  }

  _objc_retain(param_1);

  if ((DAT_003e8488 != 0) && (uVar1 = _objc_opt_isKindOfClass(param_1), (uVar1 & 1) != 0)) {

    FUN_00123f38(param_1);

    FUN_0012571c(param_1);

  }

  _objc_release(param_1);

  return;

}




