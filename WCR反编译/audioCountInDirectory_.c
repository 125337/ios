// audioCountInDirectory: @ 015ae260

/* Function Stack Size: 0x18 bytes */

unsigned_long_long WCRefineVoicePackStore::audioCountInDirectory_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_cachedFolderStatsForPath__026b0bf0,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    if (IVar2 == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_wcr_computeFolderStatsSyncForPat_026b0bf8,local_30);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      IVar4 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_count)
      ;
      _objc_retainAutoreleasedReturnValue();
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = IVar3;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

