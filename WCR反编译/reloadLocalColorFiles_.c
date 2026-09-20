// reloadLocalColorFiles: @ 010ee524

/* Function Stack Size: 0x18 bytes */

bool __thiscall
WCRefineOfficialTheme::reloadLocalColorFiles_
          (WCRefineOfficialTheme *this,ID param_1,SEL param_2,ID *param_3)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  char *local_58;
  char *local_50;
  cfstringStruct *local_48;
  char *local_40;
  ID *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  FUN_010ee7b0();
  if ((param_1 & 1) != 0) {
    FUN_010ee8a0();
  }
  _CFAbsoluteTimeGetCurrent();
  pcVar1 = "WCColorMgr";
  _objc_getClass();
  pcVar2 = &cf_sharedInstance;
  local_40 = pcVar1;
  _NSSelectorFromString();
  if ((local_40 == (char *)0x0) ||
     (pcVar1 = local_40, local_48 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_58 = (char *)0x0;
    pcVar2 = &cf_currentType;
    local_50 = pcVar1;
    _NSSelectorFromString();
    pcVar3 = &cf_setCurrentType_;
    _NSSelectorFromString();
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      pcVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar2);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_58;
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar3);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar3,&::cf___);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_isEqualToString__0269ccc8,&cf_WCColor_Current_SP);
    pcVar2 = &cf_loadSpecialColorFromXML;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar2 = &cf_loadNormalColorFromXML;
    }
    _NSSelectorFromString();
    DAT_028e3440 = 0;
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,pcVar2);
    }
    if ((DAT_028e3440 & 1) == 0) {
      FUN_010eea6c(local_50);
    }
    _CFAbsoluteTimeGetCurrent();
    FUN_010eed04();
    _CFAbsoluteTimeGetCurrent();
    local_11 = 1;
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  return local_11 & 1;
}

