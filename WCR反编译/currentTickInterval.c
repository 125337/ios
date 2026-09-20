// currentTickInterval @ 00f5ed50

/* Function Stack Size: 0x10 bytes */

double WCRefineFakeLocationEngine::currentTickInterval(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  double local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_026ce010;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) ||
     (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1))) {
    local_18 = 8.0;
  }
  else {
    local_18 = 1.0;
  }
  return local_18;
}

