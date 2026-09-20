// deletePending @ 01e074dc

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatBallWarehouseViewController::deletePending(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined *local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingRel_026c5ca0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
  if (param_1 == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_absoluteForRel__026c5c40,local_28);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    local_38 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_toppedPaths_026c5c48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_persistTopped_026c5ca8);
    puVar2 = PTR_WCRSuperFloatProfileStore_026cee48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_ballIconPath_026b1a88);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8,local_28);
    if ((((ulong)puVar2 & 1) != 0) ||
       (puVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_38),
       ((ulong)puVar2 & 1) != 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconPath__026b1a90,&::cf___);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_setBallIconId__026b1a98,&cf_sf_none);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Rd);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

