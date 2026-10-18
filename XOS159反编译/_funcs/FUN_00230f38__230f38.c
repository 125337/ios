// FUN_00230f38 @0x230f38


undefined8 FUN_00230f38(undefined1 *param_1)



{

  code *UNRECOVERED_JUMPTABLE;

  undefined8 uVar1;

  long lVar2;

  

  if ((DAT_003eb152 & 1) == 0) {

    DAT_003eb152 = 1;

    UNRECOVERED_JUMPTABLE = (code *)_dlsym(0xfffffffffffffffe,"CARenderServerGetDirtyFrameCount");

    DAT_003eb158 = UNRECOVERED_JUMPTABLE;

    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {

      *param_1 = 1;

      goto LAB_00230fac;

    }

    lVar2 = _dlopen("/System/Library/Frameworks/QuartzCore.framework/QuartzCore",1);

    if (lVar2 != 0) {

      DAT_003eb158 = (code *)_dlsym(lVar2,"CARenderServerGetDirtyFrameCount");

    }

  }

  UNRECOVERED_JUMPTABLE = DAT_003eb158;

  *param_1 = DAT_003eb158 != (code *)0x0;

  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {

    return 0;

  }

LAB_00230fac:

                    /* WARNING: Could not recover jumptable at 0x00230fbc. Too many branches */

                    /* WARNING: Treating indirect jump as call */

  uVar1 = (*UNRECOVERED_JUMPTABLE)(0);

  return uVar1;

}




