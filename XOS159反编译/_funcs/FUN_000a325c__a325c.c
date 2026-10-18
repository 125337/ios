// FUN_000a325c @0xa325c


void FUN_000a325c(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  

  if (*(long *)(param_1 + 0x20) != 0) {

    FUN_00298400(*(long *)(param_1 + 0x20));

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_eW_l1Y_;

    if (pcVar2 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar2;

    }

    FUN_0002a854(0x4010000000000000,&cf_lbc1Y_,pcVar1,2);

    _objc_release(pcVar2);

    return;

  }

  if (*(long *)(param_1 + 0x28) != 0) {

    FUN_000a3320(*(undefined8 *)(param_1 + 0x30),*(long *)(param_1 + 0x28),

                 *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28),0,

                 *(undefined1 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x40));

    return;

  }

  FUN_0002a854(0x4010000000000000,&cf_lbc1Y_,&cf_gR_gVS_uv0W_W,2);

  return;

}




