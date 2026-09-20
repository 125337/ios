// applyHistoryLat:lng:name: @ 019583dc

/* Function Stack Size: 0x28 bytes */

void WCRefineFakeLocationSettingsViewController::applyHistoryLat_lng_name_
               (ID param_1,SEL param_2,double param_3,double param_4,ID param_5)

{
  cfstringStruct **ppcVar1;
  undefined *puVar2;
  double dVar3;
  cfstringStruct *local_58;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  double local_30;
  double local_28;
  SEL local_20;
  ID local_18;
  
  ppcVar1 = &local_38;
  local_38 = (cfstringStruct *)0x0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(ppcVar1,param_5);
  FUN_01954c24(local_28,local_30);
  if (((ulong)ppcVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_SSPWheHe);
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar2,PTR_s_setFakeLocationLatitude__026ac7c0);
    dVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFakeLocationLongitude__026ac7c8);
    if (local_38 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    else {
      local_58 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFakeLocationName__026b9c00,local_58);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFakeLocationEnabled__026b9bc8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_fakeLocationAltitude_026ac6a8);
    if (ABS(dVar3) < DAT_0232c3a0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4044000000000000,local_48,PTR_s_setFakeLocationAltitude__026b9c08);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
    puVar2 = PTR_WCRefineFakeLocationEngine_026ceb80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR_WCRefineFakeLocationEngine_026ceb80;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,local_30,local_18,PTR_s_pushHistoryLat_lng_name__026b9c18,local_38);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___Nwp);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

