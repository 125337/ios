// FUN_00452620 @ 00452620

void FUN_00452620(void)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "EmoticonTabItem";
  _objc_getClass();
  local_20 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    local_18 = (char *)0x0;
  }
  else {
    _objc_alloc_init();
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setType__026a3cb8);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setType__026a3cb8,3);
    }
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setPackageId__026a3cc0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setPackageId__026a3cc0,_WCRLocalEmoticonPid);
    }
    pcVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setAccessibilityName__026a3c98);
    pcVar2 = local_28;
    puVar4 = PTR_s_setAccessibilityName__026a3c98;
    if (((ulong)pcVar3 & 1) != 0) {
      FUN_004528d4();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
    pcVar2 = local_28;
    uVar1 = DAT_026e0370;
    puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(pcVar2,uVar1,puVar4,1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    pcVar2 = local_28;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar2;
    _objc_storeStrong(&local_28,0);
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

