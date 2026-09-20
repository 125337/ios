// FUN_00063168 @ 00063168

void FUN_00063168(void)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined *puVar6;
  cfstringStruct *local_108;
  cfstringStruct *local_d8;
  cfstringStruct *local_b8;
  cfstringStruct *local_a0;
  cfstringStruct *local_90;
  byte local_81;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  byte local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_50;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  char *local_28;
  
  pcVar2 = "CContactMgr";
  _objc_getClass();
  pcVar3 = "MMServiceCenter";
  local_28 = pcVar2;
  _objc_getClass();
  local_41 = false;
  bVar1 = (cfstringStruct *)pcVar3 == (cfstringStruct *)0x0;
  local_30 = (cfstringStruct *)pcVar3;
  if (bVar1) {
    local_a0 = (cfstringStruct *)0x0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = (cfstringStruct *)pcVar3;
    local_40 = (cfstringStruct *)pcVar3;
  }
  local_41 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_a0;
  if ((local_41 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  local_69 = 0;
  if ((local_38 == (cfstringStruct *)0x0) || (local_28 == (char *)0x0)) {
    local_b8 = (cfstringStruct *)0x0;
  }
  else {
    local_b8 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getService__0269d170,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_69 = 1;
    local_68 = local_b8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_b8;
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  local_81 = 0;
  if (local_50 != (cfstringStruct *)0x0) {
    pcVar4 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_getSelfContact_0269da60);
    if (((ulong)pcVar4 & 1) != 0) {
      local_d8 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getSelfContact_0269da60);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_d8;
      goto LAB_000633a4;
    }
  }
  local_d8 = (cfstringStruct *)0x0;
LAB_000633a4:
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_d8;
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_90 = (cfstringStruct *)0x0;
  pcVar5 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = local_90;
  local_90 = pcVar5;
  (*(code *)PTR__objc_release_02578630)(pcVar4);
  pcVar4 = local_90;
  puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar6);
  if (((ulong)pcVar4 & 1) == 0) {
    local_108 = &cf___;
  }
  else {
    local_108 = local_90;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_108);
  return;
}

