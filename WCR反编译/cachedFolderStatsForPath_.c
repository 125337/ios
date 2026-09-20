// cachedFolderStatsForPath: @ 015ad984

/* Function Stack Size: 0x18 bytes */

ID WCRefineVoicePackStore::cachedFolderStatsForPath_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_88;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  uVar1 = DAT_028e3ac8;
  if (lVar2 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar3 = DAT_028e3ac8;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3ac8,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if ((uVar3 & 1) == 0) {
      local_88 = 0;
    }
    else {
      local_88 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_88;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

