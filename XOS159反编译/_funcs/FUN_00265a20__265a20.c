// FUN_00265a20 @0x265a20


void FUN_00265a20(long param_1)



{

  int iVar1;

  long lVar2;

  undefined8 uVar3;

  undefined8 uVar4;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined1 auVar5 [16];

  

  auVar5 = _objc_loadWeakRetained(param_1 + 0x28);

  lVar2 = auVar5._0_8_;

  if (lVar2 != 0) {

    iVar1 = FUN_00295f60(*(undefined8 *)(param_1 + 0x20),auVar5._8_8_,&cf_tab_);

    if (iVar1 == 0) {

      iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_popup);

      if (iVar1 == 0) {

        iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,&cf_search);

        if (iVar1 != 0) {

          FUN_0023fafc(lVar2);

        }

      }

      else {

        FUN_00234210(lVar2);

      }

    }

    else {

      FUN_002a47c0(*(undefined8 *)(param_1 + 0x20),extraout_x1,4);

      uVar3 = _objc_retainAutoreleasedReturnValue();

      uVar4 = FUN_002974a0();

      _objc_release(uVar3);

      FUN_00233b10(lVar2,uVar4);

    }

  }

  _objc_release(lVar2);

  return;

}




