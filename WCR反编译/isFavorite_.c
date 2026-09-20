// isFavorite: @ 01978350

/* Function Stack Size: 0x18 bytes */

bool WCRFileManagerState::isFavorite_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_5c;
  long local_48;
  undefined *local_40;
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
    puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_40;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar2 & 1) == 0) {
      local_11 = 0;
      local_34 = 1;
    }
    else {
      lVar1 = local_30;
      FUN_01977f18();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_40;
      local_48 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,lVar1);
      local_5c = 1;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsObject__0269cbb8,local_30);
        local_5c = (byte)puVar2;
      }
      local_11 = local_5c & 1;
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

