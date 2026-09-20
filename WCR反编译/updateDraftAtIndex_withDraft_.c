// updateDraftAtIndex:withDraft: @ 010b2db4

/* Function Stack Size: 0x20 bytes */

bool WCRefineMomentsDraftManager::updateDraftAtIndex_withDraft_
               (ID param_1,SEL param_2,long_long param_3,ID param_4)

{
  ulong uVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 local_80;
  undefined8 local_78;
  undefined *local_70;
  ID local_68;
  ID local_60;
  ID local_58;
  ID local_50;
  undefined4 local_48;
  byte local_41;
  ID local_40;
  long local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_38 = 0;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  uVar1 = local_30;
  local_41 = 0;
  bVar2 = true;
  if ((local_38 != 0) && (bVar2 = true, -1 < (long)local_30)) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar2 = IVar3 <= uVar1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar2) {
    local_11 = 0;
    local_48 = 1;
  }
  else {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar4;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sightDraft_026a4d98);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar3 != 0) {
      IVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sightDraft_026a4d98);
      _objc_retainAutoreleasedReturnValue();
      local_58 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_draftItemVideoPath_026ae5f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (IVar3 != 0) {
        IVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_draftItemVideoPath_026ae5f8);
        _objc_retainAutoreleasedReturnValue();
        IVar4 = local_20;
        local_60 = IVar3;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_permanentVideoDirectory_026ae5f0);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = local_60;
        local_68 = IVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_hasPrefix__0269d320,IVar4);
        if ((IVar3 & 1) != 0) {
          puVar5 = PTR__OBJC_CLASS___NSFileManager_026ce158;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = 0;
          local_80 = 0;
          local_70 = puVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_removeItemAtPath_error__0269f910,local_60,&local_80);
          _objc_storeStrong(&local_78,local_80);
          _objc_storeStrong(&local_78,0);
          _objc_storeStrong(&local_70,0);
        }
        _objc_storeStrong(&local_68);
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_58,0);
    }
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setLastSaveDate__026a4e30);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_drafts_026ae608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar3);
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveDrafts_026ae610);
    local_11 = (byte)IVar3 & 1;
    local_48 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

