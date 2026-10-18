// FUN_002129b8 @0x2129b8


ulong FUN_002129b8(long param_1,undefined8 param_2,undefined8 param_3)



{

  long lVar1;

  long lVar2;

  undefined8 uVar3;

  ulong uVar4;

  undefined1 auVar5 [16];

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  FUN_00295de0(param_2);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(uVar3,auVar5._8_8_,auVar5._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar1 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(auVar5._0_8_);

  uVar3 = *(undefined8 *)(param_1 + 0x20);

  FUN_00295de0(param_3);

  auVar5 = _objc_retainAutoreleasedReturnValue();

  FUN_00299540(uVar3,auVar5._8_8_,auVar5._0_8_);

  uVar3 = _objc_retainAutoreleasedReturnValue();

  lVar2 = FUN_002974a0();

  _objc_release(uVar3);

  _objc_release(auVar5._0_8_);

  if (lVar2 <= lVar1) {

    if (lVar2 < lVar1) {

LAB_00212a8c:

      uVar4 = 1;

      goto LAB_00212a90;

    }

    lVar1 = FUN_00299980(param_2);

    lVar2 = FUN_00299980(param_3);

    if (lVar2 <= lVar1) {

      lVar1 = FUN_00299980(param_2);

      lVar2 = FUN_00299980(param_3);

      if (lVar2 < lVar1) goto LAB_00212a8c;

      lVar1 = FUN_00299940(param_2);

      lVar2 = FUN_00299940(param_3);

      if (lVar2 <= lVar1) {

        lVar1 = FUN_00299940(param_2);

        lVar2 = FUN_00299940(param_3);

        uVar4 = (ulong)(lVar2 < lVar1);

        goto LAB_00212a90;

      }

    }

  }

  uVar4 = 0xffffffffffffffff;

LAB_00212a90:

  _objc_release(param_3);

  _objc_release(param_2);

  return uVar4;

}




