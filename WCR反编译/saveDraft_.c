// saveDraft: @ 010b2c34

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsDraftManager::saveDraft_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastSaveDate_026ae600);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == 0) {
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setLastSaveDate__026a4e30);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveDrafts_026ae610);
    local_11 = (byte)IVar3 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

