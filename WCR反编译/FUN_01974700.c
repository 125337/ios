// FUN_01974700 @ 01974700

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_01974700(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf___<__)([A_Za_z0_9:____]*)([_s_S]*_)(__>__);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e4340;
  DAT_028e4340 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSRegularExpression_026ce2e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRegularExpression_026ce2e0,
             PTR_s_regularExpressionWithPattern_opt_0269ef10,
             &cf___A_Za_z0_9__________s___s___________________,0,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = DAT_028e4348;
  DAT_028e4348 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

