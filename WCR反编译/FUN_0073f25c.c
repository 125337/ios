// FUN_0073f25c @ 0073f25c

void FUN_0073f25c(undefined8 param_1)

{
  char *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48 [3];
  char *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_0073f5b8;
  }
  pcVar1 = "CMessageWrap";
  _objc_getClass();
  local_30 = pcVar1;
  if (pcVar1 != (char *)0x0) {
    uVar5 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar5 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
      goto LAB_0073f5b8;
    }
  }
  uVar5 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsFromUsr);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_48[0] = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar5 & 1) == 0) {
LAB_0073f418:
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsRealChatUsr);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_50 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar5 = uVar3 & 0xffffffff;
    if ((uVar3 & 1) == 0) {
LAB_0073f520:
      local_24 = 0;
    }
    else {
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
      uVar3 = local_50;
      uVar5 = 0;
      if (uVar4 == 0) goto LAB_0073f520;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar3;
      uVar5 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(uVar5,&local_50,0);
  }
  else {
    uVar3 = local_48[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_length_0269cca0);
    uVar5 = local_48[0];
    if (uVar3 == 0) goto LAB_0073f418;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar5;
    local_24 = 1;
  }
  _objc_storeStrong(local_48,0);
  if (local_24 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
LAB_0073f5b8:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

