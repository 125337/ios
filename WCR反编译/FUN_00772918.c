// FUN_00772918 @ 00772918

void FUN_00772918(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  DAT_028cc958 = DAT_028cc958 + 1;
  if (DAT_028cc958 == 0) {
    DAT_028cc958 = 1;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
             DAT_028cc958);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cc8b8;
  DAT_028cc8b8 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  DAT_028cc8f8 = param_1;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_retainAutoreleaseReturnValue(DAT_028cc8b8);
  return;
}

