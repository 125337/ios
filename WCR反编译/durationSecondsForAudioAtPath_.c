// durationSecondsForAudioAtPath: @ 015b0814

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineVoicePackStore::durationSecondsForAudioAtPath_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  double in_d0;
  long local_50;
  ID local_48;
  undefined *local_40;
  uint local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0.0;
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcr_ensureDurationCacheLoaded_026b0c30);
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_wcr_durationCacheKeyForPath_attr_026b0c28,local_30,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_length_0269cca0);
    lVar1 = DAT_028e3ae8;
    if (IVar4 == 0) {
      local_18 = 0.0;
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      _objc_sync_enter(lVar1);
      lVar5 = DAT_028e3ae8;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3ae8,PTR_s_objectForKeyedSubscript__0269d098,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar5;
      if (lVar5 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_doubleValue_026ca608);
        local_18 = in_d0;
      }
      local_34 = (uint)(lVar5 != 0);
      _objc_storeStrong(&local_50,0);
      if (local_34 == 0) {
        local_34 = 0;
      }
      _objc_sync_exit(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      if (local_34 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_wcr_computeDurationSecondsSyncFo_026b0c38,local_30);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,local_20,PTR_s_wcr_storeDuration_forCacheKey__026b0c40,local_48);
        local_34 = 1;
        local_18 = in_d0;
      }
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

