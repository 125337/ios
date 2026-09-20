// FUN_00ef3adc @ 00ef3adc

/* WARNING: Removing unreachable block (ram,0x00ef3be0) */

bool FUN_00ef3adc(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  
  pcVar2 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar3 = &cf_isDarkMode;
  _NSSelectorFromString();
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (pcVar4 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_respondsToSelector__026ca818,pcVar3),
     ((ulong)pcVar4 & 1) == 0)) {
    puVar5 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = puVar6 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar5);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,pcVar3);
    bVar1 = ((ulong)pcVar2 & 1) != 0;
  }
  return bVar1;
}

