// FUN_017b1f78 @ 017b1f78

void FUN_017b1f78(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_98;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50 [3];
  char *local_38;
  undefined *local_30;
  undefined *local_28;
  
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  puVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___UIResponder_026ce050;
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIResponder_026ce050,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    local_98 = (undefined *)0x0;
  }
  else {
    local_98 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_50[0] = local_98;
  while (local_50[0] != (undefined *)0x0) {
    if ((local_38 != (char *)0x0) &&
       (puVar4 = local_50[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_isKindOfClass__0269cd68,local_38),
       ((ulong)puVar4 & 1) != 0)) {
      local_58 = (undefined *)0x0;
      puVar4 = local_50[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
      if (((ulong)puVar4 & 1) != 0) {
        puVar3 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_GetContact_0269d2c0);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_58;
        local_58 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      if ((local_58 == (undefined *)0x0) &&
         (puVar4 = local_50[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_getChatContact_0269d630),
         ((ulong)puVar4 & 1) != 0)) {
        puVar3 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_getChatContact_0269d630);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_58;
        local_58 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      local_60 = (undefined *)0x0;
      puVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsUsrName_0269d638);
      if (((ulong)puVar4 & 1) != 0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_m_nsUsrName_0269d638);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_60;
        local_60 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      if ((((ulong)puVar4 & 1) == 0) ||
         (puVar4 = local_60, (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0),
         puVar4 == (undefined *)0x0)) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_60;
        local_60 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      puVar4 = local_60;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
      uVar5 = (ulong)puVar4 & 0xffffffff;
      if (((ulong)puVar4 & 1) == 0) {
LAB_017b243c:
        bVar1 = false;
      }
      else {
        puVar3 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
        puVar4 = local_60;
        uVar5 = 0;
        if (puVar3 == (undefined *)0x0) goto LAB_017b243c;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = puVar4;
        uVar5 = 1;
        bVar1 = true;
      }
      _objc_storeStrong(uVar5,&local_60);
      _objc_storeStrong(&local_58,0);
      if (bVar1) goto LAB_017b2518;
    }
    puVar3 = local_50[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_nextResponder_0269d0d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = local_50[0];
    local_50[0] = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  puVar4 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_themeBoxResolvedForegroundChatSe_026a7c00);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar4;
LAB_017b2518:
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

