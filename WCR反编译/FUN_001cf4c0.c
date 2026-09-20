// FUN_001cf4c0 @ 001cf4c0

void FUN_001cf4c0(byte param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_searchCornerEnabled_026a0258);
  if (((ulong)puVar2 & 1) != 0) {
    bVar1 = local_11 & 1;
    puVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_searchClearMaskEnabled_026a0260);
    if ((uint)puVar2 != (uint)bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_setSearchClearMaskEnabled__026a0948,bVar1);
      puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_026cdf60;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNotificationCenter_026cdf60,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)();
      _CFNotificationCenterGetDarwinNotifyCenter();
      _CFNotificationCenterPostNotification(puVar2,&cf_com_qimiao_wcrefine_settings_changed,0,0,1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

