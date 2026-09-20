// FUN_003d5540 @ 003d5540

/* WARNING: Removing unreachable block (ram,0x003d55d8) */

void FUN_003d5540(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  
  puVar2 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  pcVar1 = &cf_dark;
  if (puVar3 != (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
    pcVar1 = &cf_light;
  }
  (*(code *)PTR__objc_retain_02578638)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_autoreleaseReturnValue(pcVar1);
  return;
}

