// FUN_00181c38 @ 00181c38

byte FUN_00181c38(void)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  byte local_11;
  
  pcVar1 = "WCRefineHelper";
  _objc_getClass();
  pcVar2 = &cf_contactsAddedSectionsVisibleForCurrentUser;
  _NSSelectorFromString();
  if ((pcVar1 == (char *)0x0) ||
     (pcVar3 = pcVar1,
     (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar2),
     ((ulong)pcVar3 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,pcVar2);
    local_11 = (byte)pcVar1 & 1;
  }
  return local_11;
}

