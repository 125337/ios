// FUN_005a88c4 @ 005a88c4

void FUN_005a88c4(void)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  ulong uVar5;
  char *local_50;
  undefined *local_48;
  uint local_40;
  char *local_30;
  undefined *local_28;
  char *local_20;
  char *local_18;
  
  pcVar2 = "SettingUtil";
  _objc_getClass();
  local_28 = PTR_s_getLocalUsrName__0269ce98;
  local_20 = pcVar2;
  if ((pcVar2 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getLocalUsrName__0269ce98),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28,0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_005a8a10:
      local_40 = 0;
    }
    else {
      pcVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      pcVar2 = local_30;
      uVar5 = 0;
      if (pcVar4 == (char *)0x0) goto LAB_005a8a10;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      uVar5 = 1;
      local_40 = 1;
    }
    _objc_storeStrong(uVar5,&local_30,0);
    if (local_40 != 0) goto LAB_005a8b64;
  }
  local_48 = PTR_s_getCurUsrName_026a46c8;
  if ((local_20 != (char *)0x0) &&
     (pcVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getCurUsrName_026a46c8),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_48);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    pcVar2 = local_50;
    bVar1 = ((ulong)pcVar4 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
    }
    local_40 = (uint)bVar1;
    _objc_storeStrong(&local_50,0);
    if (local_40 != 0) goto LAB_005a8b64;
  }
  local_18 = (char *)0x0;
LAB_005a8b64:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

