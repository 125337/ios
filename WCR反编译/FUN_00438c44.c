// FUN_00438c44 @ 00438c44

void FUN_00438c44(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = "WCRefineHelper";
  _objc_getClass();
  puVar1 = PTR_s_showModernToast__0269ce78;
  if (pcVar2 != (char *)0x0) {
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_showModernToast__0269ce78);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1,*(undefined8 *)(param_1 + 0x20));
    }
  }
  return;
}

