// isRecordedForKey: @ 00eaebe0

/* Function Stack Size: 0x18 bytes */

bool WCRefineAutoDownloadQuotaHelper::isRecordedForKey_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    FUN_00ead8c0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(lVar1);
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,local_30)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_11 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)();
    local_34 = 1;
    _objc_sync_exit(lVar1);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

