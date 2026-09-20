// FUN_006daca8 @ 006daca8

void FUN_006daca8(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  int local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_30 = 1;
    goto LAB_006db000;
  }
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "CContactMgr";
  local_38 = (cfstringStruct *)pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_40 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getContactByName__0269d178,local_20);
  _objc_retainAutoreleasedReturnValue();
  local_48 = (cfstringStruct *)pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getContactDisplayName_0269d160);
  if (((ulong)pcVar2 & 1) == 0) {
LAB_006daf7c:
    pcVar1 = local_20;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_30 = 1;
  }
  else {
    pcVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getContactDisplayName_0269d160);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar6 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_006daf58:
      local_30 = 0;
    }
    else {
      pcVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      pcVar1 = local_50;
      uVar6 = 0;
      if (pcVar5 == (cfstringStruct *)0x0) goto LAB_006daf58;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      uVar6 = 1;
      local_30 = 1;
    }
    _objc_storeStrong(uVar6,&local_50,0);
    if (local_30 == 0) goto LAB_006daf7c;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
LAB_006db000:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

