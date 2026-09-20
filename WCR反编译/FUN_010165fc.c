// FUN_010165fc @ 010165fc

void FUN_010165fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf_https_______s<>_______u4e00__u9fff__,1,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e3160;
  DAT_028e3160 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

