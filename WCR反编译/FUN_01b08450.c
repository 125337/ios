// FUN_01b08450 @ 01b08450

/* WARNING: Removing unreachable block (ram,0x01b0853c) */

bool FUN_01b08450(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  bool local_11;
  
  pcVar1 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar2 = &cf_isDarkMode;
  _NSSelectorFromString();
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) == 0)) {
    puVar4 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = puVar5 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    local_11 = (bool)((byte)pcVar1 & 1);
  }
  return local_11;
}

