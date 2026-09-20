// FUN_00eb1550 @ 00eb1550

void FUN_00eb1550(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_28 == (undefined *)0x0) {
    local_48 = *(undefined **)PTR____NSDictionary0___02578288;
  }
  else {
    local_48 = local_28;
  }
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionaryWithDictionary__026aadf0
             ,local_48);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = DAT_028e2988;
  DAT_028e2988 = puVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_storeStrong(&local_28,0);
  return;
}

