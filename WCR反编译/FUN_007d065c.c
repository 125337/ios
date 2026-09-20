// FUN_007d065c @ 007d065c

void FUN_007d065c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf___d_1_8__,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cce50;
  DAT_028cce50 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

