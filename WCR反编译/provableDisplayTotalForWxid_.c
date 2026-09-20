// provableDisplayTotalForWxid: @ 01514290

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineSponsorSecureStore::provableDisplayTotalForWxid_
          (WCRefineSponsorSecureStore *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  double in_d0;
  double local_80;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolvedWxid__026a7de8,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_30;
  local_30 = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  IVar1 = local_20;
  if (IVar2 == 0) {
    local_18 = 0.0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_loadRecordsForWxid__026a7e48,local_30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_sumVerifiedAmountsForRecords__026a7e28);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    local_80 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_cloudSyncedTotalMarkerForWxid__026a7e20,local_30);
    if (local_80 < in_d0) {
      local_80 = in_d0;
    }
    local_18 = local_80;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

