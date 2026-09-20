// FUN_00557a74 @ 00557a74

void FUN_00557a74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_50;
  long local_48;
  uint local_40;
  undefined *local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_40 = 1;
  }
  else {
    lVar2 = local_18;
    FUN_00557e20();
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    if ((local_28 == 0) ||
       (lVar2 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_count_0269cfe0),
       lVar2 == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_20);
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,
                 PTR_s_archivedDataWithRootObject__026a4fa0,local_28);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      local_50 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
      if (((ulong)puVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_50,local_20);
      }
      _objc_storeStrong(&local_50,0);
    }
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_setObject_forKey__026ca9e8,local_48,local_18);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_synchronize_026a0798);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeObjectForKey__0269d700,local_18);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_synchronize_026a0798);
    }
    local_40 = (uint)(lVar2 == 0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

