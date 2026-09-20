// FUN_00eaa1f8 @ 00eaa1f8

void FUN_00eaa1f8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf______S____,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2940;
  DAT_028e2940 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

