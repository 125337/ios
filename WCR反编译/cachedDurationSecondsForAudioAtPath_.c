// cachedDurationSecondsForAudioAtPath: @ 015b02e4

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineVoicePackStore::cachedDurationSecondsForAudioAtPath_
          (WCRefineVoicePackStore *this,ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  long lVar5;
  double in_d0;
  double local_90;
  long local_50;
  ID local_48;
  undefined *local_40;
  undefined4 local_34;
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
    local_18 = -1.0;
    local_34 = 1;
  }
  else {
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
      local_18 = -1.0;
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
      if (lVar5 == 0) {
        local_90 = -1.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_doubleValue_026ca608);
        local_90 = in_d0;
      }
      local_18 = local_90;
      local_34 = 1;
      _objc_storeStrong(&local_50,0);
      _objc_sync_exit(lVar1);
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

