// FUN_00528bcc @ 00528bcc

void FUN_00528bcc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSHashTable_026ce238;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHashTable_026ce238,PTR_s_weakObjectsHashTable_0269e2e0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028cb1e0;
  DAT_028cb1e0 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  return;
}

