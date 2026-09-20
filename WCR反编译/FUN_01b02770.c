// FUN_01b02770 @ 01b02770

void FUN_01b02770(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *local_58 [4];
  undefined *local_38;
  undefined *local_30;
  uint local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
    goto LAB_01b029fc;
  }
  puVar2 = local_20;
  FUN_01b02e60();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  if (puVar2 == (undefined *)0x0) {
LAB_01b0294c:
    pcVar4 = "CContactMgr";
    _objc_getClass();
    FUN_01b02fe8();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineGroupDataProvider_026ce540;
    local_58[0] = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineGroupDataProvider_026ce540,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_24 = 1;
    _objc_storeStrong(local_58,0);
  }
  else {
    local_38 = (undefined *)0x0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_valueForKey__0269d128,&cf_m_contact);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_38;
    local_38 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if ((local_38 == (undefined *)0x0) &&
       (puVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_m_contact_026a0b68),
       ((ulong)puVar2 & 1) != 0)) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_contact_026a0b68);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    puVar2 = local_38;
    bVar1 = local_38 != (undefined *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = puVar2;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_38,0);
    if (local_24 == 0) goto LAB_01b0294c;
  }
  _objc_storeStrong(&local_30,0);
LAB_01b029fc:
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

