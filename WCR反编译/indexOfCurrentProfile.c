// indexOfCurrentProfile @ 0160adb4

/* Function Stack Size: 0x10 bytes */

long_long WCRSuperFloatProfileStore::indexOfCurrentProfile(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *local_60;
  long_long local_40;
  ID local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  long_long local_18;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_60 = &cf_default;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  IVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_normalizedProfiles_026b1878);
  _objc_retainAutoreleasedReturnValue();
  local_40 = 0;
  local_38 = IVar3;
  do {
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    if ((long)IVar3 <= (long)local_40) {
      local_18 = 0;
LAB_0160afa0:
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
      return local_18;
    }
    IVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_40);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    if ((IVar5 & 1) != 0) {
      local_18 = local_40;
      goto LAB_0160afa0;
    }
    local_40 = local_40 + 1;
  } while( true );
}

