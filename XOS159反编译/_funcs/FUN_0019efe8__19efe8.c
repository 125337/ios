// FUN_0019efe8 @0x19efe8


undefined8 FUN_0019efe8(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain();

  if (param_1 != 0) {

    if (DAT_003e9650 != -1) {

      FUN_0028f788();

    }

    if (((DAT_003e95d0 != 0) && (uVar1 = _objc_opt_isKindOfClass(param_1), (uVar1 & 1) != 0)) ||

       ((DAT_003e9648 != 0 && (uVar1 = FUN_00297980(param_1), (uVar1 & 1) != 0)))) {

      uVar2 = 1;

      goto LAB_0019f04c;

    }

  }

  uVar2 = 0;

LAB_0019f04c:

  _objc_release(param_1);

  return uVar2;

}




