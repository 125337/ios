// FUN_0017ec54 @ 0017ec54

/* WARNING: Removing unreachable block (ram,0x0017eddc) */

byte FUN_0017ec54(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = &cf_MMDarkModeConfigUtil;
  _NSClassFromString();
  pcVar2 = &cf_isDarkMode;
  _NSSelectorFromString();
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) == 0)) {
    lVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_traitCollection_026caba8);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = lVar5 == 2;
    (*(code *)PTR__objc_release_02578630)(lVar4);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    local_11 = (byte)pcVar1 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

