// FUN_001604fc @ 001604fc

void FUN_001604fc(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  ulong uVar5;
  ulong *local_b0;
  char *local_48 [3];
  char *local_30;
  ulong local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar4 = "MMLanguageMgr";
  _objc_getClass();
  FUN_0015f0b8();
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar4;
  if ((pcVar4 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getStringForCurLanguage__0269f768),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getStringForCurLanguage__0269f768,local_20)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_48[0] = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar5 = (ulong)pcVar4 & 0xffffffff;
    if (((ulong)pcVar4 & 1) == 0) {
LAB_001606cc:
      bVar1 = false;
    }
    else {
      pcVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
      pcVar4 = local_48[0];
      uVar5 = 0;
      if (pcVar3 == (char *)0x0) goto LAB_001606cc;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
      uVar5 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar5,local_48,0);
    if (bVar1) goto LAB_00160740;
  }
  if (local_28 == 0) {
    local_b0 = &local_20;
  }
  else {
    local_b0 = &local_28;
  }
  pcVar4 = (char *)*local_b0;
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = pcVar4;
LAB_00160740:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

