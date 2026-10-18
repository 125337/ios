// FUN_00159478 @0x159478


void FUN_00159478(long param_1)



{

  cfstringStruct *pcVar1;

  int iVar2;

  long lVar3;

  long lVar4;

  long lVar5;

  undefined8 uVar6;

  long lVar7;

  cfstringStruct *pcVar8;

  ulong uVar9;

  undefined8 extraout_x1;

  undefined1 auVar10 [16];

  

  lVar3 = _objc_loadWeakRetained(param_1 + 0x20);

  if ((lVar3 != 0) && (iVar2 = FUN_00297b80(lVar3), iVar2 != 0)) {

    FUN_002a6220(lVar3);

    lVar4 = _objc_retainAutoreleasedReturnValue();

    FUN_002a6520();

    lVar5 = _objc_retainAutoreleasedReturnValue();

    if (lVar5 != 0) {

      FUN_002990e0(lVar3);

      uVar6 = _objc_retainAutoreleasedReturnValue();

      FUN_002a5520();

      lVar7 = _objc_retainAutoreleasedReturnValue();

      _objc_release();

      _objc_release(uVar6);

      _objc_release(lVar5);

      _objc_release(lVar4);

      if (lVar7 != lVar3) goto LAB_001595b8;

      FUN_00159000();

      auVar10 = _objc_retainAutoreleasedReturnValue();

      lVar4 = auVar10._0_8_;

      FUN_002a6080(lVar3,auVar10._8_8_,&cf__avatarFingerprint);

      auVar10 = _objc_retainAutoreleasedReturnValue();

      pcVar8 = auVar10._0_8_;

      if (lVar4 != 0) {

        pcVar1 = &cf___;

        if (pcVar8 != (cfstringStruct *)0x0) {

          pcVar1 = pcVar8;

        }

        uVar9 = FUN_00297820(lVar4,auVar10._8_8_,pcVar1);

        if ((uVar9 & 1) == 0) {

          FUN_00158e08();

          FUN_002a24a0(lVar3,extraout_x1,lVar4,&cf__avatarFingerprint);

          FUN_00136604();

          FUN_00298700(lVar3);

          lVar5 = _objc_retainAutoreleasedReturnValue();

          if (lVar5 != 0) {

            FUN_0029b140(lVar5);

          }

          _objc_release(lVar5);

        }

      }

      _objc_release(pcVar8);

    }

    _objc_release(lVar4);

  }

LAB_001595b8:

  _objc_release(lVar3);

  return;

}




