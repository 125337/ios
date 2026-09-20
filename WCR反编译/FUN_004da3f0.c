// FUN_004da3f0 @ 004da3f0

byte FUN_004da3f0(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined1 *local_20;
  byte local_11;
  
  puVar2 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = puVar2 != (undefined1 *)0x0;
  local_20 = puVar2;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_userInterfaceStyle_026cabc8);
    local_11 = puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
  }
  _objc_storeStrong(&local_20,0);
  if (!bVar1) {
    local_11 = 0;
  }
  return local_11 & 1;
}

