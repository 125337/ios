// currentWeChatVersionIDText @ 01f4d67c

/* Function Stack Size: 0x10 bytes */

ID WCRefineVersionController::currentWeChatVersionIDText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *local_18;
  
  pcVar2 = "CUtility";
  _objc_getClass();
  puVar1 = PTR_s_GetVersion_026a9488;
  if ((pcVar2 == (char *)0x0) ||
     (pcVar3 = pcVar2,
     (*(code *)PTR__objc_msgSend_02578628)
               (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_GetVersion_026a9488),
     ((ulong)pcVar3 & 1) == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gw;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
    if ((long)pcVar2 < 1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__gw;
    }
    else {
      local_18 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

