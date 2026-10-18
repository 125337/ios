// FUN_0006ad90 @0x6ad90


void FUN_0006ad90(long param_1,undefined8 param_2,long param_3)



{

  int iVar1;

  undefined8 extraout_x1;

  

  _objc_retain(param_2);

  _objc_retain(param_3);

  if (param_3 == 0) {

    iVar1 = FUN_00297820(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_fish);

    if (iVar1 == 0) {

      FUN_0006a048(0x3ff0000000000000,*(undefined8 *)(param_1 + 0x28),

                   *(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 0x38),

                   *(undefined8 *)(param_1 + 0x40));

    }

    else {

      FUN_00069b88(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),param_2,

                   *(undefined8 *)(param_1 + 0x40));

    }

  }

  else {

    (**(code **)(*(long *)(param_1 + 0x40) + 0x10))(*(long *)(param_1 + 0x40),0,param_3);

  }

  _objc_release(param_3);

  _objc_release(param_2);

  return;

}




