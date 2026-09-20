// FUN_017dc7dc @ 017dc7dc

void FUN_017dc7dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_b0;
  long local_70;
  undefined *local_40;
  long local_38;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = param_1 + 0x38;
  local_30 = param_1;
  _objc_loadWeakRetained();
  if (local_20 == 0) {
    local_70 = *(long *)PTR____NSArray0___02578280;
  }
  else {
    local_70 = local_20;
  }
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_wcrModels_matchingKind__026b53f0,local_70,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSetWithArray__026a4b80,
             *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_addObjectsFromArray__0269d540,local_38);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    param_1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    lVar1 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    puVar3 = PTR_WCRefineHelper_026ce000;
    if (lVar1 != 0) {
      pcVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_b0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_b0 = &cf_Nz_gV__W_jWSHQ8__u_jWbKbRkXQ;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_showWeToastErrorWithText__0269ced8,local_b0);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
  }
  else {
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained();
    puVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (lVar1,PTR_s_wcrReplaceModels_host__026b53f8,puVar3,*(undefined8 *)(param_1 + 0x30));
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

