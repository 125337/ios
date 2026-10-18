// FUN_00200f74 @0x200f74


void FUN_00200f74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,

                 undefined8 param_5,undefined8 param_6)



{

  int iVar1;

  uint uVar2;

  uint uVar3;

  undefined8 uVar4;

  undefined8 local_58;

  

  _objc_getAssociatedObject(param_5,&DAT_003eaeb4);

  uVar4 = _objc_retainAutoreleasedReturnValue();

  iVar1 = FUN_002924e0();

  _objc_release(uVar4);

  if (iVar1 == 0) {

    _objc_getAssociatedObject(param_5,&DAT_003eaeb5);

    uVar4 = _objc_retainAutoreleasedReturnValue();

    uVar2 = FUN_002924e0();

    _objc_release(uVar4);

    if ((DAT_003eaa30 == '\x01') && (DAT_003eaad0 == 1)) {

      if (3 < DAT_003eaac8 - 1U && (uVar2 & 1) == 0) goto LAB_00200ff4;

    }

    else if ((uVar2 & 1) == 0) goto LAB_00200ff4;

    uVar3 = FUN_00216b40(param_5);

    if (((uVar3 | uVar2) & 1) != 0) {

      uVar4 = FUN_002173d8(param_5,&local_58);

      param_1 = FUN_00217598(param_1,param_2,param_3,param_4,local_58,param_5,uVar4);

    }

  }

LAB_00200ff4:

                    /* WARNING: Could not recover jumptable at 0x0020100c. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  (*DAT_003eab58)(param_1,param_5,param_6);

  return;

}




