// FUN_00809084 @ 00809084

void FUN_00809084(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_028ccf48;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf48,PTR_s_allValues_0269dae8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028ccf48,PTR_s_removeAllObjects_0269d508);
  FUN_00809208();
  return;
}

