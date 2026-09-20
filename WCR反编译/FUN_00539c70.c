// FUN_00539c70 @ 00539c70

void FUN_00539c70(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCalendar_026ce070;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCalendar_026ce070,PTR_s_currentCalendar_0269cfa0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cb250;
  DAT_028cb250 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

