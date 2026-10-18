// FUN_0023758c @0x23758c


void FUN_0023758c(ulong param_1,long param_2)



{

  cfstringStruct *pcVar1;

  undefined1 auVar2 [16];

  

  if ((param_2 == 4) && (param_1 < 4)) {

    pcVar1 = (cfstringStruct *)(&PTR_cf_text_bubble_fill_0038fd18)[param_1];

  }

  else if (((long)param_1 < 0) ||

          (auVar2 = FUN_00293860(&PTR__OBJC_CLASS___NSConstantArray_003bee00),

          auVar2._0_8_ <= (long)param_1)) {

    pcVar1 = &cf_circle_fill;

  }

  else {

    FUN_00299500(&PTR__OBJC_CLASS___NSConstantArray_003bee00,auVar2._8_8_,param_1);

    pcVar1 = (cfstringStruct *)_objc_retainAutoreleasedReturnValue();

  }

  _objc_autoreleaseReturnValue(pcVar1);

  return;

}




