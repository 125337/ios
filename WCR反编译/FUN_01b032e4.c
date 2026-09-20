// FUN_01b032e4 @ 01b032e4

/* WARNING: Removing unreachable block (ram,0x01b03360) */

bool FUN_01b032e4(void)

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

