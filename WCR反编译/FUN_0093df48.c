// FUN_0093df48 @ 0093df48

void FUN_0093df48(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *local_60;
  undefined *local_50;
  uint local_44;
  undefined *local_40;
  undefined *local_38;
  char *local_30;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___UIResponder_026ce050;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if (((ulong)puVar3 & 1) == 0) {
    local_60 = (undefined *)0x0;
  }
  else {
    local_60 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_60;
  pcVar4 = "BaseMsgContentViewController";
  _objc_getClass();
  local_30 = pcVar4;
  while (local_28 != (undefined *)0x0) {
    if ((local_30 != (char *)0x0) &&
       (puVar3 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isKindOfClass__0269cd68,local_30),
       ((ulong)puVar3 & 1) != 0)) {
      local_38 = (undefined *)0x0;
      puVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if (((ulong)puVar3 & 1) == 0) {
        puVar3 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630);
        if (((ulong)puVar3 & 1) != 0) {
          puVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getChatContact_0269d630);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = local_38;
          local_38 = puVar2;
          (*(code *)PTR__objc_release_02578630)(puVar3);
        }
      }
      else {
        puVar2 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = local_38;
        local_38 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_38;
      FUN_00941344(local_38,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar3;
      FUN_009407ac();
      _objc_retainAutoreleasedReturnValue();
      local_40 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      puVar3 = local_40;
      bVar1 = puVar2 != (undefined *)0x0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = puVar3;
      }
      local_44 = (uint)bVar1;
      _objc_storeStrong(bVar1,&local_40);
      _objc_storeStrong(&local_38,0);
      if (local_44 != 0) goto LAB_0093e284;
    }
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_28;
    local_28 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  puVar3 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_currentChatContactFromTopViewCon_026a1800);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  FUN_00941344(puVar3,&cf_m_nsUsrName);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  FUN_009407ac();
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_44 = 1;
  _objc_storeStrong(&local_50,0);
LAB_0093e284:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

