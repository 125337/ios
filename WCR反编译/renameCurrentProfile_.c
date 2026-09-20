// renameCurrentProfile: @ 01616704

/* Function Stack Size: 0x18 bytes */

bool WCRSuperFloatProfileStore::renameCurrentProfile_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCurrentProfile_026b1888);
    _objc_retainAutoreleasedReturnValue();
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_setObject_forKeyedSubscript__0269d248,local_30,&cf_name);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_saveCurrentProfile__026b1890,local_40);
    local_11 = 1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

