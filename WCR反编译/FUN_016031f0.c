// FUN_016031f0 @ 016031f0

void FUN_016031f0(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_60 [5];
  ulong local_38;
  char *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_016036a0;
  }
  pcVar1 = "BaseMsgContentViewController";
  _objc_getClass();
  local_30 = pcVar1;
  if ((pcVar1 == (char *)0x0) ||
     (uVar5 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar5 & 1) == 0)) {
    local_18 = 0;
    local_24 = 1;
    goto LAB_016036a0;
  }
  local_38 = 0;
  uVar5 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
  if ((uVar5 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatContact_0269d630);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  if (local_38 == 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_38;
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar5);
    if (local_38 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_valueForKeyPath__026a0b98,&cf_m_logicController_m_contact);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
  }
  if (local_38 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_60[0] = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar5 & 1) == 0) {
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_valueForKey__0269d128,&cf_m_nsUserName);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = local_60[0];
      local_60[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar5);
    }
    uVar2 = local_60[0];
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    uVar5 = uVar2 & 0xffffffff;
    if ((uVar2 & 1) == 0) {
LAB_01603628:
      local_24 = 0;
    }
    else {
      uVar4 = local_60[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_60[0],PTR_s_length_0269cca0);
      uVar2 = local_60[0];
      uVar5 = 0;
      if (uVar4 == 0) goto LAB_01603628;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      uVar5 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(uVar5,local_60,0);
    if (local_24 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_38,0);
LAB_016036a0:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

