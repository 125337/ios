// FUN_000a4248 @0xa4248


void FUN_000a4248(long param_1)



{

  cfstringStruct *pcVar1;

  cfstringStruct *pcVar2;

  

  FUN_00298400(*(undefined8 *)(param_1 + 0x20));

  pcVar2 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  pcVar1 = &cf_M;

  if (pcVar2 != (cfstringStruct *)0x0) {

    pcVar1 = pcVar2;

  }

  FUN_0002a854(0x4010000000000000,&cf_S1Y_,pcVar1,2);

  _objc_release(pcVar2);

  return;

}




