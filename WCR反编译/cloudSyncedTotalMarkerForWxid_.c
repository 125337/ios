// cloudSyncedTotalMarkerForWxid: @ 015140ac

/* Function Stack Size: 0x18 bytes */

double __thiscall
WCRefineSponsorSecureStore::cloudSyncedTotalMarkerForWxid_
          (WCRefineSponsorSecureStore *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  double in_d0;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_resolvedWxid__026a7de8,local_30);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_30;
  local_30 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_18 = 0.0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_30;
    FUN_015141e8();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doubleForKey__026a7e60);
    local_18 = in_d0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

