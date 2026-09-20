// FUN_0016dbb8 @ 0016dbb8

void FUN_0016dbb8(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (pcVar1 != (char *)0x0) {
    FUN_0016dc88(pcVar1);
    pcVar2 = "AppFileMessageCellView";
    _objc_getClass();
    if (((pcVar2 != (char *)0x0) && (pcVar2 != pcVar1)) &&
       (pcVar3 = pcVar2,
       (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isSubclassOfClass__0269e590,pcVar1),
       ((ulong)pcVar3 & 1) == 0)) {
      FUN_0016dc88(pcVar2);
    }
  }
  return;
}

