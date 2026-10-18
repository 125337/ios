// FUN_0008e57c @0x8e57c


void FUN_0008e57c(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x28);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x0008e594. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));

    return;

  }

  return;

}




