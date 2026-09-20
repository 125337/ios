// FUN_0080949c @ 0080949c

/* WARNING: Removing unreachable block (ram,0x0080953c) */

byte FUN_0080949c(void)

{
  undefined *puVar1;
  undefined1 *local_20;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_userInterfaceStyle_026cabc8);
  local_11 = puVar1 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

