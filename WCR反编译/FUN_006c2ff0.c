// FUN_006c2ff0 @ 006c2ff0

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_006c2ff0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf__d_1_2___d_2___d_2_);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028cc218;
  DAT_028cc218 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,&cf___d_1_2___d_2_______d_,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028cc220;
  DAT_028cc220 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

