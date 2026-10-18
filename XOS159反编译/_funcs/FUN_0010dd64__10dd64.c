// FUN_0010dd64 @0x10dd64


undefined1  [16] FUN_0010dd64(undefined8 param_1,long param_2)



{

  int iVar1;

  long lVar2;

  undefined8 extraout_x1;

  double dVar3;

  undefined1 auVar4 [16];

  double in_d3;

  double dVar5;

  undefined8 uVar6;

  undefined8 local_60;

  undefined8 uStack_58;

  undefined8 local_50;

  double dStack_48;

  

  _objc_retain();

  _objc_retain(param_2);

  FUN_002925a0(param_2);

  uStack_58 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

  local_60 = *(undefined8 *)PTR__CGRectZero_00388bf0;

  dStack_48 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

  local_50 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 0x10);

  dVar5 = in_d3;

  iVar1 = FUN_0010deb4(param_1,param_2,&local_60);

  if (iVar1 != 0) {

    dVar5 = dStack_48;

    dVar3 = (double)_CGRectGetMaxY(local_60,uStack_58,local_50);

    if (dVar3 <= in_d3) {

      dVar3 = in_d3;

    }

    FUN_000822c8(param_1);

    lVar2 = _objc_retainAutoreleasedReturnValue();

    in_d3 = dVar3;

    if ((lVar2 != 0) && (lVar2 != param_2)) {

      FUN_002925a0(lVar2);

      FUN_00293720(lVar2,extraout_x1,param_2);

      in_d3 = (double)_CGRectGetMaxY();

      if (in_d3 <= dVar3) {

        in_d3 = dVar3;

      }

    }

    _objc_release(lVar2);

  }

  FUN_002925a0(param_2);

  in_d3 = in_d3 - dVar5;

  if (in_d3 <= 0.0) {

    in_d3 = 0.0;

  }

  uVar6 = 0;

  _objc_release(param_2);

  _objc_release(param_1);

  auVar4._8_8_ = uVar6;

  auVar4._0_8_ = in_d3;

  return auVar4;

}




