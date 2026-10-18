// FUN_001a0234 @0x1a0234


undefined8 FUN_001a0234(undefined8 param_1,undefined8 *param_2)



{

  bool bVar1;

  bool bVar2;

  undefined8 uVar3;

  undefined8 local_40;

  undefined8 uStack_38;

  double local_30;

  double dStack_28;

  

  uStack_38 = *(undefined8 *)(PTR__CGRectZero_00388bf0 + 8);

  local_40 = *(undefined8 *)PTR__CGRectZero_00388bf0;

  dStack_28 = *(double *)(PTR__CGRectZero_00388bf0 + 0x18);

  local_30 = *(double *)(PTR__CGRectZero_00388bf0 + 0x10);

  uVar3 = FUN_00083ee4(param_1,&local_40);

  if ((int)uVar3 != 0) {

    bVar1 = false;

    bVar2 = false;

    if (1.0 < local_30) {

      bVar1 = false;

      bVar2 = true;

      if (!NAN(dStack_28)) {

        bVar1 = dStack_28 == 1.0;

        bVar2 = 1.0 <= dStack_28;

      }

    }

    if (bVar2 && !bVar1) {

      param_2[1] = uStack_38;

      *param_2 = local_40;

      param_2[3] = dStack_28;

      param_2[2] = local_30;

      uVar3 = 1;

    }

    else {

      uVar3 = 0;

    }

  }

  return uVar3;

}




