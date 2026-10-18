// FUN_000bab98 @0xbab98


void FUN_000bab98(long param_1)



{

  int iVar1;

  long lVar2;

  long lVar3;

  ulong uVar4;

  undefined **ppuVar5;

  

  lVar2 = _objc_loadWeakRetained(param_1 + 0x28);

  if (lVar2 != 0) {

    FUN_002a6520(lVar2);

    lVar3 = _objc_retainAutoreleasedReturnValue();

    _objc_release();

    if ((lVar3 == 0) ||

       (iVar1 = FUN_000b4368(lVar2,*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x30)),

       iVar1 == 0)) {

      ppuVar5 = &PTR_LOOP_003e65d0;

    }

    else {

      iVar1 = FUN_000b83fc(lVar2);

      if (iVar1 == 0) {

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6308,0,1);

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e6328,0,1);

        FUN_0029ff40(lVar2);

        FUN_00297ee0(lVar2);

        FUN_000b7b78(lVar2);

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e65d0,0,1);

        uVar4 = FUN_000b83fc(lVar2);

        if ((uVar4 & 1) == 0) {

          FUN_000b8e00(lVar2);

          goto LAB_000baca8;

        }

      }

      else {

        _objc_setAssociatedObject(lVar2,PTR_LOOP_003e65d0,0,1);

      }

      ppuVar5 = &PTR_LOOP_003e65c8;

    }

    _objc_setAssociatedObject(lVar2,*ppuVar5,0,1);

  }

LAB_000baca8:

  _objc_release(lVar2);

  return;

}




