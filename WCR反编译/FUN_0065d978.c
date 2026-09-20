// FUN_0065d978 @ 0065d978

void FUN_0065d978(void)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  int local_3c;
  cfstringStruct *local_38 [3];
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_MMContext;
  _NSClassFromString();
  local_20 = pcVar1;
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_currentUserName_0269d6f8),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_currentUserName_0269d6f8);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_0065db00:
      local_3c = 0;
    }
    else {
      pcVar3 = local_38[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0);
      pcVar1 = local_38[0];
      uVar4 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0065db00;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      uVar4 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(uVar4,local_38,0);
    if (local_3c != 0) goto LAB_0065dd44;
  }
  pcVar1 = &cf_WCRefineHelper;
  _NSClassFromString();
  local_50 = pcVar1;
  if ((pcVar1 != (cfstringStruct *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getCurrentUserWxid_0269e148),
     ((ulong)pcVar1 & 1) != 0)) {
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getCurrentUserWxid_0269e148);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar4 = (ulong)pcVar1 & 0xffffffff;
    if (((ulong)pcVar1 & 1) == 0) {
LAB_0065dcdc:
      local_3c = 0;
    }
    else {
      pcVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
      pcVar1 = local_58;
      uVar4 = 0;
      if (pcVar3 == (cfstringStruct *)0x0) goto LAB_0065dcdc;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
      uVar4 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(uVar4,&local_58,0);
    if (local_3c != 0) goto LAB_0065dd44;
  }
  local_18 = (cfstringStruct *)0x0;
LAB_0065dd44:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

