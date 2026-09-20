// boardSortMode @ 0107add8

/* Function Stack Size: 0x10 bytes */

long_long WCRefineLocalEmoticonStore::boardSortMode(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return (long)(int)(uint)(puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1));
}

