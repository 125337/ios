// FUN_0050e638 @ 0050e638

void FUN_0050e638(void)

{
  bool bVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = "SettingUtil";
  _objc_getClass();
  local_20 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getCurUsrName_026a46c8);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getCurUsrName_026a46c8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_28 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar6 = (ulong)pcVar3 & 0xffffffff;
    if (((ulong)pcVar3 & 1) == 0) {
LAB_0050e770:
      bVar1 = false;
    }
    else {
      pcVar5 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
      pcVar3 = local_28;
      uVar6 = 0;
      if (pcVar5 == (cfstringStruct *)0x0) goto LAB_0050e770;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar3;
      uVar6 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar6,&local_28,0);
    if (bVar1) goto LAB_0050e7bc;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf___;
LAB_0050e7bc:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

