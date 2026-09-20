// FUN_0026f4bc @ 0026f4bc

void FUN_0026f4bc(void)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  cfstringStruct *local_78;
  cfstringStruct *local_60 [3];
  cfstringStruct *local_48;
  bool local_39;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar2 = &cf_MMContext;
  _NSClassFromString();
  pcVar3 = &cf_MMLanguageMgr;
  local_20 = pcVar2;
  _NSClassFromString();
  local_28 = pcVar3;
  if ((local_20 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gN_;
    goto LAB_0026f85c;
  }
  pcVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_currentContext_0269d5f8);
  local_39 = false;
  bVar1 = ((ulong)pcVar2 & 1) == 0;
  if (bVar1) {
    local_78 = (cfstringStruct *)0x0;
  }
  else {
    local_78 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentContext_0269d5f8);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_78;
  }
  local_39 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  if ((local_39 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  local_48 = (cfstringStruct *)0x0;
  if ((local_30 != (cfstringStruct *)0x0) &&
     (pcVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
     ((ulong)pcVar2 & 1) != 0)) {
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getService__0269d170,local_28);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_48;
    local_48 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if ((local_48 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_48,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768)
     , ((ulong)pcVar2 & 1) == 0)) {
LAB_0026f7f0:
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__gN_;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_getStringForCurLanguage__0269f768,&cf_APPMSG_FILE_NOT_DOWNLOAD);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar5 = (ulong)pcVar2 & 0xffffffff;
    if (((ulong)pcVar2 & 1) == 0) {
LAB_0026f7cc:
      bVar1 = false;
    }
    else {
      pcVar3 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
      pcVar2 = local_60[0];
      uVar5 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0026f7cc;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      uVar5 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar5,local_60,0);
    if (!bVar1) goto LAB_0026f7f0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
LAB_0026f85c:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

