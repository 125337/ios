// FUN_007cd81c @ 007cd81c

void FUN_007cd81c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cce38;
  DAT_028cce38 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

