// FUN_007cd7a8 @ 007cd7a8

void FUN_007cd7a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__d_,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cce28;
  DAT_028cce28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

