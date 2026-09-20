// FUN_0169b20c @ 0169b20c

/* WARNING: Removing unreachable block (ram,0x0169b2b4) */

bool FUN_0169b20c(void)

{
  undefined *puVar1;
  undefined1 *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
}

