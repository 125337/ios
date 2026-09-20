// FUN_014e52d0 @ 014e52d0

void FUN_014e52d0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_30;
  undefined8 *local_28;
  undefined8 local_20;
  long *local_18;
  
  local_18 = &DAT_028e3770;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02586278);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  puVar1 = &local_20;
  _objc_storeStrong(puVar1,0);
  FUN_014fcd50();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = DAT_028e3768;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3768,PTR_s_isEqualToString__0269ccc8,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    puVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_copy_0269d150);
    puVar2 = DAT_028e3768;
    DAT_028e3768 = puVar1;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3760,PTR_s_removeAllObjects_0269d508);
    puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_usrs)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
      puVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_028e3760,PTR_s_setObject_forKeyedSubscript__0269d248,puVar4,&cf_usrs);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_storeStrong(&local_30,0);
  }
  uVar6 = DAT_028e3760;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_028e3760,PTR_s_objectForKeyedSubscript__0269d098,&cf_usrs);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_class_0269cd60);
  uVar7 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar6);
  if ((uVar7 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_028e3760,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_usrs);
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  uVar6 = DAT_028e3760;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(uVar6);
  return;
}

