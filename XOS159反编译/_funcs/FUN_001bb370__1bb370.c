// FUN_001bb370 @0x1bb370


void FUN_001bb370(long param_1)



{

  long lVar1;

  

  lVar1 = *(long *)(param_1 + 0x28);

  if (lVar1 != 0) {

                    /* WARNING: Could not recover jumptable at 0x001bb38c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

    (**(code **)(lVar1 + 0x10))

              (lVar1,*(undefined1 *)(param_1 + 0x31),0,*(undefined8 *)(param_1 + 0x20));

    return;

  }

  return;

}




