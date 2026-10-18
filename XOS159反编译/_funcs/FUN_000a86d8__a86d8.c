// FUN_000a86d8 @0xa86d8


void FUN_000a86d8(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  long lVar3;

  

  if (*(long *)(param_1 + 0x20) != 0) {

    FUN_00298400();

    pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

    pcVar1 = &cf_eW_l1Y_;

    if (pcVar2 != (cfstringStruct *)0x0) {

      pcVar1 = pcVar2;

    }

    FUN_0002a854(0x4010000000000000,&cf_lbc1Y_,pcVar1,2);

    _objc_release(pcVar2);

    return;

  }

  lVar3 = FUN_00297fa0(*(undefined8 *)(param_1 + 0x28));

  if (lVar3 != 0) {

    FUN_000a3320(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x28),

                 *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),

                 *(undefined1 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x48));

    return;

  }

  FUN_0002a854(0x4010000000000000,&cf_lbc1Y_,&cf_gR_gVS_uv0W_W,2);

  return;

}




