// FUN_0006b408 @0x6b408


void FUN_0006b408(long param_1)



{

  int iVar1;

  cfstringStruct *pcVar2;

  undefined8 extraout_x1;

  undefined8 extraout_x1_00;

  undefined8 extraout_x1_01;

  cfstringStruct *pcVar3;

  

  pcVar3 = &cf__gw;

  if (*(cfstringStruct **)(param_1 + 0x20) != (cfstringStruct *)0x0) {

    pcVar3 = *(cfstringStruct **)(param_1 + 0x20);

  }

  _objc_retain(pcVar3);

  iVar1 = FUN_00293580(*(undefined8 *)(param_1 + 0x20),extraout_x1,&cf_lgCgP);

  if (iVar1 == 0) {

    pcVar2 = &cf__T1Y_;

  }

  else {

    iVar1 = FUN_00293580(*(undefined8 *)(param_1 + 0x20),extraout_x1_00,&cf__3);

    if (iVar1 == 0) {

      iVar1 = FUN_00293580(*(undefined8 *)(param_1 + 0x20),extraout_x1_01,&cf__2);

      _objc_release(pcVar3);

      pcVar3 = &cf_cCgOo___1YeSb;

      if (iVar1 == 0) {

        pcVar3 = &cf__lg_O_udkRvCgP;

      }

      pcVar2 = &cf_eCgP;

    }

    else {

      _objc_release(pcVar3);

      pcVar2 = &cf_eCgP;

      pcVar3 = &cf__v_OS_gcCg_O_udkR;

    }

  }

  FUN_0002a854(0x4010000000000000,pcVar2,pcVar3,2);

  _objc_release(pcVar3);

  return;

}




