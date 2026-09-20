// FUN_00182844 @ 00182844

void FUN_00182844(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithObjects__0269fb00,&cf__);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028c8908;
  DAT_028c8908 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

