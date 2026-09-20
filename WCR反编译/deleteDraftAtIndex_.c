// deleteDraftAtIndex: @ 010b32b8

/* Function Stack Size: 0x18 bytes */

bool WCRefineMomentsDraftManager::deleteDraftAtIndex_(ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  ID local_48;
  byte local_39;
  ID local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_39 = 0;
  bVar1 = true;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  if (-1 < (long)param_3) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = param_1 <= param_3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (bVar1) {
    local_11 = 0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_sightDraft_026a4d98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 != 0) {
      IVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      local_50 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_draftItemVideoPath_026ae5f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar2 != 0) {
        IVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_draftItemVideoPath_026ae5f8);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_20;
        local_58 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_permanentVideoDirectory_026ae5f0);
        _objc_retainAutoreleasedReturnValue();
        IVar2 = local_58;
        local_60 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_hasPrefix__0269d320,IVar3);
        if ((IVar2 & 1) != 0) {
          puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_70 = 0;
          local_78 = 0;
          local_68 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_removeItemAtPath_error__0269f910,local_58,&local_78);
          _objc_storeStrong(&local_70,local_78);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(&local_68,0);
        }
        _objc_storeStrong(&local_60);
        _objc_storeStrong(&local_58,0);
      }
      _objc_storeStrong(&local_50,0);
    }
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveDrafts_026ae610);
    local_11 = (byte)IVar2 & 1;
    _objc_storeStrong(&local_48,0);
  }
  return local_11 & 1;
}

