// FUN_0008fcdc @0x8fcdc


void FUN_0008fcdc(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x30);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x0008fcf0. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))

              (lVar1,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));

    return;

  }

  return;

}




