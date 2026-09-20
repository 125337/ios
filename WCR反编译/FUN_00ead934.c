// FUN_00ead934 @ 00ead934

undefined * FUN_00ead934(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_30;
  undefined4 local_24;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if ((DAT_028e2998 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    puVar1 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar1 = local_20;
      FUN_00eb0cf4();
      FUN_00eb0aac(puVar1);
      local_18 = puVar1;
    }
    else {
      puVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_unsignedLongLongValue_0269d6b8);
      DAT_028e2998 = 1;
      DAT_028e29a0 = puVar1;
      local_18 = puVar1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  else {
    local_18 = DAT_028e29a0;
    local_24 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

