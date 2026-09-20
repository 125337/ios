// maskLooksValid: @ 00f7fe24

/* Function Stack Size: 0x18 bytes */

bool WCRefineFriendRelationStore::maskLooksValid_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  FUN_00f7e630();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
               PTR_s_characterSetWithCharactersInStri_0269d1a0,&cf__);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_38;
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_componentsSeparatedByCharactersI_0269d1a8,puVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    local_11 = lVar1 != 0;
    local_3c = 1;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

