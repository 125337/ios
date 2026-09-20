// FUN_00802b68 @ 00802b68

void FUN_00802b68(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSHashTable_026ce238;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_weakObjectsHashTable_0269e2e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028ccf18;
  DAT_028ccf18 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

