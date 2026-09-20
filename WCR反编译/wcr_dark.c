// wcr_dark @ 01dcb598

/* WARNING: Removing unreachable block (ram,0x01dcb688) */
/* Function Stack Size: 0x10 bytes */

bool WCRefineSessionStatsViewController::wcr_dark(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  bool local_11;
  
  pcVar1 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar2 = &cf_isDarkMode;
  _NSSelectorFromString();
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = IVar4 == 2;
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    local_11 = (bool)((byte)pcVar1 & 1);
  }
  return (uint)local_11;
}

